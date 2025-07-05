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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_SUPERNODEINFO_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_SUPERNODEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20220501
        {
            namespace Model
            {
                /**
                * Super Node Information
                */
                class SuperNodeInfo : public AbstractModel
                {
                public:
                    SuperNodeInfo();
                    ~SuperNodeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance name
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return Name Instance name
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Instance name
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _name Instance name
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Auto-renewal label
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return AutoRenewFlag Auto-renewal label
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置Auto-renewal label
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _autoRenewFlag Auto-renewal label
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取Resource type
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return ResourceType Resource type
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置Resource type
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _resourceType Resource type
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取CPU specification of nodes (unit: cores).
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return CPU CPU specification of nodes (unit: cores).
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    double GetCPU() const;

                    /**
                     * 设置CPU specification of nodes (unit: cores).
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _cPU CPU specification of nodes (unit: cores).
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCPU(const double& _cPU);

                    /**
                     * 判断参数 CPU 是否已赋值
                     * @return CPU 是否已赋值
                     * 
                     */
                    bool CPUHasBeenSet() const;

                    /**
                     * 获取Total number of CPUs of Pods on nodes (unit: cores).
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return UsedCPU Total number of CPUs of Pods on nodes (unit: cores).
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    double GetUsedCPU() const;

                    /**
                     * 设置Total number of CPUs of Pods on nodes (unit: cores).
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _usedCPU Total number of CPUs of Pods on nodes (unit: cores).
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetUsedCPU(const double& _usedCPU);

                    /**
                     * 判断参数 UsedCPU 是否已赋值
                     * @return UsedCPU 是否已赋值
                     * 
                     */
                    bool UsedCPUHasBeenSet() const;

                    /**
                     * 获取Memory specification of nodes (unit: Gi).
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return Memory Memory specification of nodes (unit: Gi).
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    double GetMemory() const;

                    /**
                     * 设置Memory specification of nodes (unit: Gi).
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _memory Memory specification of nodes (unit: Gi).
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetMemory(const double& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取Total memory of Pods on nodes (unit: Gi).
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return UsedMemory Total memory of Pods on nodes (unit: Gi).
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    double GetUsedMemory() const;

                    /**
                     * 设置Total memory of Pods on nodes (unit: Gi).
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _usedMemory Total memory of Pods on nodes (unit: Gi).
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetUsedMemory(const double& _usedMemory);

                    /**
                     * 判断参数 UsedMemory 是否已赋值
                     * @return UsedMemory 是否已赋值
                     * 
                     */
                    bool UsedMemoryHasBeenSet() const;

                    /**
                     * 获取Availability zone

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return Zone Availability zone

Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Availability zone

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _zone Availability zone

Note: This field may return "null", indicating that no valid value can be obtained.
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
                     * 获取Unique VPC ID
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return VpcId Unique VPC ID
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Unique VPC ID
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _vpcId Unique VPC ID
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Subnet unique ID
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return SubnetId Subnet unique ID
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet unique ID
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _subnetId Subnet unique ID
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取Effective time
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return ActiveAt Effective time
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetActiveAt() const;

                    /**
                     * 设置Effective time
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _activeAt Effective time
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetActiveAt(const std::string& _activeAt);

                    /**
                     * 判断参数 ActiveAt 是否已赋值
                     * @return ActiveAt 是否已赋值
                     * 
                     */
                    bool ActiveAtHasBeenSet() const;

                    /**
                     * 获取Expiration time

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return ExpireAt Expiration time

Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetExpireAt() const;

                    /**
                     * 设置Expiration time

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _expireAt Expiration time

Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetExpireAt(const std::string& _expireAt);

                    /**
                     * 判断参数 ExpireAt 是否已赋值
                     * @return ExpireAt 是否已赋值
                     * 
                     */
                    bool ExpireAtHasBeenSet() const;

                    /**
                     * 获取Maximum schedulable CPU specification for a single Pod
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return MaxCPUScheduledPod Maximum schedulable CPU specification for a single Pod
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetMaxCPUScheduledPod() const;

                    /**
                     * 设置Maximum schedulable CPU specification for a single Pod
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _maxCPUScheduledPod Maximum schedulable CPU specification for a single Pod
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetMaxCPUScheduledPod(const int64_t& _maxCPUScheduledPod);

                    /**
                     * 判断参数 MaxCPUScheduledPod 是否已赋值
                     * @return MaxCPUScheduledPod 是否已赋值
                     * 
                     */
                    bool MaxCPUScheduledPodHasBeenSet() const;

                    /**
                     * 获取Instance attributes
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return InstanceAttribute Instance attributes
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetInstanceAttribute() const;

                    /**
                     * 设置Instance attributes
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _instanceAttribute Instance attributes
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetInstanceAttribute(const std::string& _instanceAttribute);

                    /**
                     * 判断参数 InstanceAttribute 是否已赋值
                     * @return InstanceAttribute 是否已赋值
                     * 
                     */
                    bool InstanceAttributeHasBeenSet() const;

                private:

                    /**
                     * Instance name
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Auto-renewal label
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * Resource type
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * CPU specification of nodes (unit: cores).
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    double m_cPU;
                    bool m_cPUHasBeenSet;

                    /**
                     * Total number of CPUs of Pods on nodes (unit: cores).
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    double m_usedCPU;
                    bool m_usedCPUHasBeenSet;

                    /**
                     * Memory specification of nodes (unit: Gi).
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    double m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Total memory of Pods on nodes (unit: Gi).
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    double m_usedMemory;
                    bool m_usedMemoryHasBeenSet;

                    /**
                     * Availability zone

Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Unique VPC ID
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Subnet unique ID
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Effective time
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_activeAt;
                    bool m_activeAtHasBeenSet;

                    /**
                     * Expiration time

Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_expireAt;
                    bool m_expireAtHasBeenSet;

                    /**
                     * Maximum schedulable CPU specification for a single Pod
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    int64_t m_maxCPUScheduledPod;
                    bool m_maxCPUScheduledPodHasBeenSet;

                    /**
                     * Instance attributes
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_instanceAttribute;
                    bool m_instanceAttributeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_SUPERNODEINFO_H_
