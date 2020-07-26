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
                * Details about a CDH instance
                */
                class HostItem : public AbstractModel
                {
                public:
                    HostItem();
                    ~HostItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Location of the CDH instance. You can use this parameter to specify the attributes of the instance, such as its availability zone and project.
                     * @return Placement Location of the CDH instance. You can use this parameter to specify the attributes of the instance, such as its availability zone and project.
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置Location of the CDH instance. You can use this parameter to specify the attributes of the instance, such as its availability zone and project.
                     * @param Placement Location of the CDH instance. You can use this parameter to specify the attributes of the instance, such as its availability zone and project.
                     */
                    void SetPlacement(const Placement& _placement);

                    /**
                     * 判断参数 Placement 是否已赋值
                     * @return Placement 是否已赋值
                     */
                    bool PlacementHasBeenSet() const;

                    /**
                     * 获取CDH instance ID
                     * @return HostId CDH instance ID
                     */
                    std::string GetHostId() const;

                    /**
                     * 设置CDH instance ID
                     * @param HostId CDH instance ID
                     */
                    void SetHostId(const std::string& _hostId);

                    /**
                     * 判断参数 HostId 是否已赋值
                     * @return HostId 是否已赋值
                     */
                    bool HostIdHasBeenSet() const;

                    /**
                     * 获取CDH instance type
                     * @return HostType CDH instance type
                     */
                    std::string GetHostType() const;

                    /**
                     * 设置CDH instance type
                     * @param HostType CDH instance type
                     */
                    void SetHostType(const std::string& _hostType);

                    /**
                     * 判断参数 HostType 是否已赋值
                     * @return HostType 是否已赋值
                     */
                    bool HostTypeHasBeenSet() const;

                    /**
                     * 获取CDH instance name
                     * @return HostName CDH instance name
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置CDH instance name
                     * @param HostName CDH instance name
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取Billing method of the CDH instance
                     * @return HostChargeType Billing method of the CDH instance
                     */
                    std::string GetHostChargeType() const;

                    /**
                     * 设置Billing method of the CDH instance
                     * @param HostChargeType Billing method of the CDH instance
                     */
                    void SetHostChargeType(const std::string& _hostChargeType);

                    /**
                     * 判断参数 HostChargeType 是否已赋值
                     * @return HostChargeType 是否已赋值
                     */
                    bool HostChargeTypeHasBeenSet() const;

                    /**
                     * 获取Auto renewal flag of the CDH instance
                     * @return RenewFlag Auto renewal flag of the CDH instance
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置Auto renewal flag of the CDH instance
                     * @param RenewFlag Auto renewal flag of the CDH instance
                     */
                    void SetRenewFlag(const std::string& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取Creation time of the CDH instance
                     * @return CreatedTime Creation time of the CDH instance
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Creation time of the CDH instance
                     * @param CreatedTime Creation time of the CDH instance
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Expiration time of the CDH instance
                     * @return ExpiredTime Expiration time of the CDH instance
                     */
                    std::string GetExpiredTime() const;

                    /**
                     * 设置Expiration time of the CDH instance
                     * @param ExpiredTime Expiration time of the CDH instance
                     */
                    void SetExpiredTime(const std::string& _expiredTime);

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     */
                    bool ExpiredTimeHasBeenSet() const;

                    /**
                     * 获取List of IDs of CVM instances created on the CDH
                     * @return InstanceIds List of IDs of CVM instances created on the CDH
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置List of IDs of CVM instances created on the CDH
                     * @param InstanceIds List of IDs of CVM instances created on the CDH
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取CDH instance state
                     * @return HostState CDH instance state
                     */
                    std::string GetHostState() const;

                    /**
                     * 设置CDH instance state
                     * @param HostState CDH instance state
                     */
                    void SetHostState(const std::string& _hostState);

                    /**
                     * 判断参数 HostState 是否已赋值
                     * @return HostState 是否已赋值
                     */
                    bool HostStateHasBeenSet() const;

                    /**
                     * 获取CDH instance IP
                     * @return HostIp CDH instance IP
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置CDH instance IP
                     * @param HostIp CDH instance IP
                     */
                    void SetHostIp(const std::string& _hostIp);

                    /**
                     * 判断参数 HostIp 是否已赋值
                     * @return HostIp 是否已赋值
                     */
                    bool HostIpHasBeenSet() const;

                    /**
                     * 获取Resource information of the CDH instance
                     * @return HostResource Resource information of the CDH instance
                     */
                    HostResource GetHostResource() const;

                    /**
                     * 设置Resource information of the CDH instance
                     * @param HostResource Resource information of the CDH instance
                     */
                    void SetHostResource(const HostResource& _hostResource);

                    /**
                     * 判断参数 HostResource 是否已赋值
                     * @return HostResource 是否已赋值
                     */
                    bool HostResourceHasBeenSet() const;

                    /**
                     * 获取Cage ID of the CDH instance. This parameter is only valid for CDH instances in the cages of finance availability zones.
Note: This field may return null, indicating that no valid value is found.
                     * @return CageId Cage ID of the CDH instance. This parameter is only valid for CDH instances in the cages of finance availability zones.
Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string GetCageId() const;

                    /**
                     * 设置Cage ID of the CDH instance. This parameter is only valid for CDH instances in the cages of finance availability zones.
Note: This field may return null, indicating that no valid value is found.
                     * @param CageId Cage ID of the CDH instance. This parameter is only valid for CDH instances in the cages of finance availability zones.
Note: This field may return null, indicating that no valid value is found.
                     */
                    void SetCageId(const std::string& _cageId);

                    /**
                     * 判断参数 CageId 是否已赋值
                     * @return CageId 是否已赋值
                     */
                    bool CageIdHasBeenSet() const;

                private:

                    /**
                     * Location of the CDH instance. You can use this parameter to specify the attributes of the instance, such as its availability zone and project.
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
                     * Billing method of the CDH instance
                     */
                    std::string m_hostChargeType;
                    bool m_hostChargeTypeHasBeenSet;

                    /**
                     * Auto renewal flag of the CDH instance
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * Creation time of the CDH instance
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Expiration time of the CDH instance
                     */
                    std::string m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * List of IDs of CVM instances created on the CDH
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * CDH instance state
                     */
                    std::string m_hostState;
                    bool m_hostStateHasBeenSet;

                    /**
                     * CDH instance IP
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * Resource information of the CDH instance
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
