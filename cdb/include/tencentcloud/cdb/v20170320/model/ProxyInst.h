/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_PROXYINST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_PROXYINST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * Proxy instance
                */
                class ProxyInst : public AbstractModel
                {
                public:
                    ProxyInst();
                    ~ProxyInst() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceId Instance ID.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Instance name.
                     * @return InstanceName Instance name.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name.
                     * @param _instanceName Instance name.
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Instance type: 1 master primary instance; 2 read-only instance; 3 dr disaster recovery instance; 4 sdr (small disaster recovery) instance
                     * @return InstanceType Instance type: 1 master primary instance; 2 read-only instance; 3 dr disaster recovery instance; 4 sdr (small disaster recovery) instance
                     * 
                     */
                    int64_t GetInstanceType() const;

                    /**
                     * 设置Instance type: 1 master primary instance; 2 read-only instance; 3 dr disaster recovery instance; 4 sdr (small disaster recovery) instance
                     * @param _instanceType Instance type: 1 master primary instance; 2 read-only instance; 3 dr disaster recovery instance; 4 sdr (small disaster recovery) instance
                     * 
                     */
                    void SetInstanceType(const int64_t& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取Instance status. Valid values: 0: creating; 1: running; 4: isolation; 5: isolated.
                     * @return Status Instance status. Valid values: 0: creating; 1: running; 4: isolation; 5: isolated.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Instance status. Valid values: 0: creating; 1: running; 4: isolation; 5: isolated.
                     * @param _status Instance status. Valid values: 0: creating; 1: running; 4: isolation; 5: isolated.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Read-only weight. If the weight is automatically assigned by the system, this value does not take effect and only indicates whether the instance is enabled or not.
                     * @return Weight Read-only weight. If the weight is automatically assigned by the system, this value does not take effect and only indicates whether the instance is enabled or not.
                     * 
                     */
                    uint64_t GetWeight() const;

                    /**
                     * 设置Read-only weight. If the weight is automatically assigned by the system, this value does not take effect and only indicates whether the instance is enabled or not.
                     * @param _weight Read-only weight. If the weight is automatically assigned by the system, this value does not take effect and only indicates whether the instance is enabled or not.
                     * 
                     */
                    void SetWeight(const uint64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取Instance region
                     * @return Region Instance region
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Instance region
                     * @param _region Instance region
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取Availability zone to which the instance belongs
                     * @return Zone Availability zone to which the instance belongs
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Availability zone to which the instance belongs
                     * @param _zone Availability zone to which the instance belongs
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Instance Node ID
                     * @return InstNodeId Instance Node ID
                     * 
                     */
                    std::string GetInstNodeId() const;

                    /**
                     * 设置Instance Node ID
                     * @param _instNodeId Instance Node ID
                     * 
                     */
                    void SetInstNodeId(const std::string& _instNodeId);

                    /**
                     * 判断参数 InstNodeId 是否已赋值
                     * @return InstNodeId 是否已赋值
                     * 
                     */
                    bool InstNodeIdHasBeenSet() const;

                    /**
                     * 获取Node role
                     * @return InstNodeRole Node role
                     * 
                     */
                    std::string GetInstNodeRole() const;

                    /**
                     * 设置Node role
                     * @param _instNodeRole Node role
                     * 
                     */
                    void SetInstNodeRole(const std::string& _instNodeRole);

                    /**
                     * 判断参数 InstNodeRole 是否已赋值
                     * @return InstNodeRole 是否已赋值
                     * 
                     */
                    bool InstNodeRoleHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance name.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Instance type: 1 master primary instance; 2 read-only instance; 3 dr disaster recovery instance; 4 sdr (small disaster recovery) instance
                     */
                    int64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Instance status. Valid values: 0: creating; 1: running; 4: isolation; 5: isolated.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Read-only weight. If the weight is automatically assigned by the system, this value does not take effect and only indicates whether the instance is enabled or not.
                     */
                    uint64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * Instance region
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Availability zone to which the instance belongs
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Instance Node ID
                     */
                    std::string m_instNodeId;
                    bool m_instNodeIdHasBeenSet;

                    /**
                     * Node role
                     */
                    std::string m_instNodeRole;
                    bool m_instNodeRoleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_PROXYINST_H_
