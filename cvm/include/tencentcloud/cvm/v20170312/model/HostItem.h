/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_HOSTITEM_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_HOSTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/Placement.h>
#include <tencentcloud/cvm/v20170312/model/HostResource.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CDH instance details
                */
                class HostItem : public AbstractModel
                {
                public:
                    HostItem();
                    ~HostItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CDH instance location. This parameter is used to specify the AZ, project, and other attributes of the instance.
                     * @return Placement CDH instance location. This parameter is used to specify the AZ, project, and other attributes of the instance.
                     * 
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置CDH instance location. This parameter is used to specify the AZ, project, and other attributes of the instance.
                     * @param _placement CDH instance location. This parameter is used to specify the AZ, project, and other attributes of the instance.
                     * 
                     */
                    void SetPlacement(const Placement& _placement);

                    /**
                     * 判断参数 Placement 是否已赋值
                     * @return Placement 是否已赋值
                     * 
                     */
                    bool PlacementHasBeenSet() const;

                    /**
                     * 获取CDH instance ID
                     * @return HostId CDH instance ID
                     * 
                     */
                    std::string GetHostId() const;

                    /**
                     * 设置CDH instance ID
                     * @param _hostId CDH instance ID
                     * 
                     */
                    void SetHostId(const std::string& _hostId);

                    /**
                     * 判断参数 HostId 是否已赋值
                     * @return HostId 是否已赋值
                     * 
                     */
                    bool HostIdHasBeenSet() const;

                    /**
                     * 获取CDH instance type
                     * @return HostType CDH instance type
                     * 
                     */
                    std::string GetHostType() const;

                    /**
                     * 设置CDH instance type
                     * @param _hostType CDH instance type
                     * 
                     */
                    void SetHostType(const std::string& _hostType);

                    /**
                     * 判断参数 HostType 是否已赋值
                     * @return HostType 是否已赋值
                     * 
                     */
                    bool HostTypeHasBeenSet() const;

                    /**
                     * 获取CDH instance name
                     * @return HostName CDH instance name
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置CDH instance name
                     * @param _hostName CDH instance name
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取CDH instance billing mode
                     * @return HostChargeType CDH instance billing mode
                     * 
                     */
                    std::string GetHostChargeType() const;

                    /**
                     * 设置CDH instance billing mode
                     * @param _hostChargeType CDH instance billing mode
                     * 
                     */
                    void SetHostChargeType(const std::string& _hostChargeType);

                    /**
                     * 判断参数 HostChargeType 是否已赋值
                     * @return HostChargeType 是否已赋值
                     * 
                     */
                    bool HostChargeTypeHasBeenSet() const;

                    /**
                     * 获取CDH instance renewal flag
                     * @return RenewFlag CDH instance renewal flag
                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置CDH instance renewal flag
                     * @param _renewFlag CDH instance renewal flag
                     * 
                     */
                    void SetRenewFlag(const std::string& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取CDH instance creation time
                     * @return CreatedTime CDH instance creation time
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置CDH instance creation time
                     * @param _createdTime CDH instance creation time
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取CDH instance expiry time
                     * @return ExpiredTime CDH instance expiry time
                     * 
                     */
                    std::string GetExpiredTime() const;

                    /**
                     * 设置CDH instance expiry time
                     * @param _expiredTime CDH instance expiry time
                     * 
                     */
                    void SetExpiredTime(const std::string& _expiredTime);

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     * 
                     */
                    bool ExpiredTimeHasBeenSet() const;

                    /**
                     * 获取List of IDs of CVMs created on a CDH instance
                     * @return InstanceIds List of IDs of CVMs created on a CDH instance
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置List of IDs of CVMs created on a CDH instance
                     * @param _instanceIds List of IDs of CVMs created on a CDH instance
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取CDH instance status
                     * @return HostState CDH instance status
                     * 
                     */
                    std::string GetHostState() const;

                    /**
                     * 设置CDH instance status
                     * @param _hostState CDH instance status
                     * 
                     */
                    void SetHostState(const std::string& _hostState);

                    /**
                     * 判断参数 HostState 是否已赋值
                     * @return HostState 是否已赋值
                     * 
                     */
                    bool HostStateHasBeenSet() const;

                    /**
                     * 获取CDH instance IP
                     * @return HostIp CDH instance IP
                     * 
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置CDH instance IP
                     * @param _hostIp CDH instance IP
                     * 
                     */
                    void SetHostIp(const std::string& _hostIp);

                    /**
                     * 判断参数 HostIp 是否已赋值
                     * @return HostIp 是否已赋值
                     * 
                     */
                    bool HostIpHasBeenSet() const;

                    /**
                     * 获取CDH instance resource information
                     * @return HostResource CDH instance resource information
                     * 
                     */
                    HostResource GetHostResource() const;

                    /**
                     * 设置CDH instance resource information
                     * @param _hostResource CDH instance resource information
                     * 
                     */
                    void SetHostResource(const HostResource& _hostResource);

                    /**
                     * 判断参数 HostResource 是否已赋值
                     * @return HostResource 是否已赋值
                     * 
                     */
                    bool HostResourceHasBeenSet() const;

                    /**
                     * 获取Cage ID of the CDH instance. This parameter is only valid for CDH instances in the cages of finance availability zones.
Note: This field may return null, indicating that no valid value is found.
                     * @return CageId Cage ID of the CDH instance. This parameter is only valid for CDH instances in the cages of finance availability zones.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetCageId() const;

                    /**
                     * 设置Cage ID of the CDH instance. This parameter is only valid for CDH instances in the cages of finance availability zones.
Note: This field may return null, indicating that no valid value is found.
                     * @param _cageId Cage ID of the CDH instance. This parameter is only valid for CDH instances in the cages of finance availability zones.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetCageId(const std::string& _cageId);

                    /**
                     * 判断参数 CageId 是否已赋值
                     * @return CageId 是否已赋值
                     * 
                     */
                    bool CageIdHasBeenSet() const;

                private:

                    /**
                     * CDH instance location. This parameter is used to specify the AZ, project, and other attributes of the instance.
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * CDH instance ID
                     */
                    std::string m_hostId;
                    bool m_hostIdHasBeenSet;

                    /**
                     * CDH instance type
                     */
                    std::string m_hostType;
                    bool m_hostTypeHasBeenSet;

                    /**
                     * CDH instance name
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * CDH instance billing mode
                     */
                    std::string m_hostChargeType;
                    bool m_hostChargeTypeHasBeenSet;

                    /**
                     * CDH instance renewal flag
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * CDH instance creation time
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * CDH instance expiry time
                     */
                    std::string m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * List of IDs of CVMs created on a CDH instance
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * CDH instance status
                     */
                    std::string m_hostState;
                    bool m_hostStateHasBeenSet;

                    /**
                     * CDH instance IP
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * CDH instance resource information
                     */
                    HostResource m_hostResource;
                    bool m_hostResourceHasBeenSet;

                    /**
                     * Cage ID of the CDH instance. This parameter is only valid for CDH instances in the cages of finance availability zones.
Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_cageId;
                    bool m_cageIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_HOSTITEM_H_
