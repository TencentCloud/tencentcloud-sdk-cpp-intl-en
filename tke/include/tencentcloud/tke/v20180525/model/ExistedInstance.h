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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_EXISTEDINSTANCE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_EXISTEDINSTANCE_H_

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
        namespace V20180525
        {
            namespace Model
            {
                /**
                * Information of existing instances
                */
                class ExistedInstance : public AbstractModel
                {
                public:
                    ExistedInstance();
                    ~ExistedInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether the instance supports being added to the cluster (TRUE: support; FALSE: not support).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Usable Whether the instance supports being added to the cluster (TRUE: support; FALSE: not support).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool GetUsable() const;

                    /**
                     * 设置Whether the instance supports being added to the cluster (TRUE: support; FALSE: not support).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Usable Whether the instance supports being added to the cluster (TRUE: support; FALSE: not support).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetUsable(const bool& _usable);

                    /**
                     * 判断参数 Usable 是否已赋值
                     * @return Usable 是否已赋值
                     */
                    bool UsableHasBeenSet() const;

                    /**
                     * 获取Reason that the instance does not support being added.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UnusableReason Reason that the instance does not support being added.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetUnusableReason() const;

                    /**
                     * 设置Reason that the instance does not support being added.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param UnusableReason Reason that the instance does not support being added.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetUnusableReason(const std::string& _unusableReason);

                    /**
                     * 判断参数 UnusableReason 是否已赋值
                     * @return UnusableReason 是否已赋值
                     */
                    bool UnusableReasonHasBeenSet() const;

                    /**
                     * 获取ID of the cluster in which the instance currently resides.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AlreadyInCluster ID of the cluster in which the instance currently resides.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetAlreadyInCluster() const;

                    /**
                     * 设置ID of the cluster in which the instance currently resides.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param AlreadyInCluster ID of the cluster in which the instance currently resides.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAlreadyInCluster(const std::string& _alreadyInCluster);

                    /**
                     * 判断参数 AlreadyInCluster 是否已赋值
                     * @return AlreadyInCluster 是否已赋值
                     */
                    bool AlreadyInClusterHasBeenSet() const;

                    /**
                     * 获取Instance ID, in the format of ins-xxxxxxxx.
                     * @return InstanceId Instance ID, in the format of ins-xxxxxxxx.
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID, in the format of ins-xxxxxxxx.
                     * @param InstanceId Instance ID, in the format of ins-xxxxxxxx.
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Instance name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceName Instance name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param InstanceName Instance name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取List of private IPs of the instance’s primary ENI.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PrivateIpAddresses List of private IPs of the instance’s primary ENI.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetPrivateIpAddresses() const;

                    /**
                     * 设置List of private IPs of the instance’s primary ENI.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param PrivateIpAddresses List of private IPs of the instance’s primary ENI.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPrivateIpAddresses(const std::vector<std::string>& _privateIpAddresses);

                    /**
                     * 判断参数 PrivateIpAddresses 是否已赋值
                     * @return PrivateIpAddresses 是否已赋值
                     */
                    bool PrivateIpAddressesHasBeenSet() const;

                    /**
                     * 获取List of public IPs of the instance’s primary ENI.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PublicIpAddresses List of public IPs of the instance’s primary ENI.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetPublicIpAddresses() const;

                    /**
                     * 设置List of public IPs of the instance’s primary ENI.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param PublicIpAddresses List of public IPs of the instance’s primary ENI.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPublicIpAddresses(const std::vector<std::string>& _publicIpAddresses);

                    /**
                     * 判断参数 PublicIpAddresses 是否已赋值
                     * @return PublicIpAddresses 是否已赋值
                     */
                    bool PublicIpAddressesHasBeenSet() const;

                    /**
                     * 获取Creation time, which follows the ISO8601 standard and uses UTC time. Format: YYYY-MM-DDThh:mm:ssZ.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreatedTime Creation time, which follows the ISO8601 standard and uses UTC time. Format: YYYY-MM-DDThh:mm:ssZ.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置Creation time, which follows the ISO8601 standard and uses UTC time. Format: YYYY-MM-DDThh:mm:ssZ.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param CreatedTime Creation time, which follows the ISO8601 standard and uses UTC time. Format: YYYY-MM-DDThh:mm:ssZ.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Instance’s number of CPU cores. Unit: cores.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CPU Instance’s number of CPU cores. Unit: cores.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetCPU() const;

                    /**
                     * 设置Instance’s number of CPU cores. Unit: cores.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param CPU Instance’s number of CPU cores. Unit: cores.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCPU(const uint64_t& _cPU);

                    /**
                     * 判断参数 CPU 是否已赋值
                     * @return CPU 是否已赋值
                     */
                    bool CPUHasBeenSet() const;

                    /**
                     * 获取Instance’s memory capacity. Unit: GB.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Memory Instance’s memory capacity. Unit: GB.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置Instance’s memory capacity. Unit: GB.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Memory Instance’s memory capacity. Unit: GB.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMemory(const uint64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取Operating system name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OsName Operating system name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetOsName() const;

                    /**
                     * 设置Operating system name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param OsName Operating system name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetOsName(const std::string& _osName);

                    /**
                     * 判断参数 OsName 是否已赋值
                     * @return OsName 是否已赋值
                     */
                    bool OsNameHasBeenSet() const;

                    /**
                     * 获取Instance model.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceType Instance model.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Instance model.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param InstanceType Instance model.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取Auto scaling group ID
Note: This field may return null, indicating that no valid value was found.
                     * @return AutoscalingGroupId Auto scaling group ID
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string GetAutoscalingGroupId() const;

                    /**
                     * 设置Auto scaling group ID
Note: This field may return null, indicating that no valid value was found.
                     * @param AutoscalingGroupId Auto scaling group ID
Note: This field may return null, indicating that no valid value was found.
                     */
                    void SetAutoscalingGroupId(const std::string& _autoscalingGroupId);

                    /**
                     * 判断参数 AutoscalingGroupId 是否已赋值
                     * @return AutoscalingGroupId 是否已赋值
                     */
                    bool AutoscalingGroupIdHasBeenSet() const;

                    /**
                     * 获取Instance billing method. Valid values: POSTPAID_BY_HOUR (pay-as-you-go hourly); CDHPAID (billed based on CDH, i.e., only CDH is billed but not the instances on CDH)
Note: This field may return null, indicating that no valid value was found.
                     * @return InstanceChargeType Instance billing method. Valid values: POSTPAID_BY_HOUR (pay-as-you-go hourly); CDHPAID (billed based on CDH, i.e., only CDH is billed but not the instances on CDH)
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置Instance billing method. Valid values: POSTPAID_BY_HOUR (pay-as-you-go hourly); CDHPAID (billed based on CDH, i.e., only CDH is billed but not the instances on CDH)
Note: This field may return null, indicating that no valid value was found.
                     * @param InstanceChargeType Instance billing method. Valid values: POSTPAID_BY_HOUR (pay-as-you-go hourly); CDHPAID (billed based on CDH, i.e., only CDH is billed but not the instances on CDH)
Note: This field may return null, indicating that no valid value was found.
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                private:

                    /**
                     * Whether the instance supports being added to the cluster (TRUE: support; FALSE: not support).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_usable;
                    bool m_usableHasBeenSet;

                    /**
                     * Reason that the instance does not support being added.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_unusableReason;
                    bool m_unusableReasonHasBeenSet;

                    /**
                     * ID of the cluster in which the instance currently resides.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_alreadyInCluster;
                    bool m_alreadyInClusterHasBeenSet;

                    /**
                     * Instance ID, in the format of ins-xxxxxxxx.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * List of private IPs of the instance’s primary ENI.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_privateIpAddresses;
                    bool m_privateIpAddressesHasBeenSet;

                    /**
                     * List of public IPs of the instance’s primary ENI.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_publicIpAddresses;
                    bool m_publicIpAddressesHasBeenSet;

                    /**
                     * Creation time, which follows the ISO8601 standard and uses UTC time. Format: YYYY-MM-DDThh:mm:ssZ.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Instance’s number of CPU cores. Unit: cores.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_cPU;
                    bool m_cPUHasBeenSet;

                    /**
                     * Instance’s memory capacity. Unit: GB.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Operating system name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_osName;
                    bool m_osNameHasBeenSet;

                    /**
                     * Instance model.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Auto scaling group ID
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_autoscalingGroupId;
                    bool m_autoscalingGroupIdHasBeenSet;

                    /**
                     * Instance billing method. Valid values: POSTPAID_BY_HOUR (pay-as-you-go hourly); CDHPAID (billed based on CDH, i.e., only CDH is billed but not the instances on CDH)
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_EXISTEDINSTANCE_H_
