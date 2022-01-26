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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CVMINSTANCE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CVMINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * A CVM instance.
                */
                class CvmInstance : public AbstractModel
                {
                public:
                    CvmInstance();
                    ~CvmInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取VPC instance ID.
                     * @return VpcId VPC instance ID.
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC instance ID.
                     * @param VpcId VPC instance ID.
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Subnet instance ID.
                     * @return SubnetId Subnet instance ID.
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet instance ID.
                     * @param SubnetId Subnet instance ID.
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取CVM instance ID.
                     * @return InstanceId CVM instance ID.
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置CVM instance ID.
                     * @param InstanceId CVM instance ID.
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取CVM Name
                     * @return InstanceName CVM Name
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置CVM Name
                     * @param InstanceName CVM Name
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取CVM status.
                     * @return InstanceState CVM status.
                     */
                    std::string GetInstanceState() const;

                    /**
                     * 设置CVM status.
                     * @param InstanceState CVM status.
                     */
                    void SetInstanceState(const std::string& _instanceState);

                    /**
                     * 判断参数 InstanceState 是否已赋值
                     * @return InstanceState 是否已赋值
                     */
                    bool InstanceStateHasBeenSet() const;

                    /**
                     * 获取Number of CPU cores in an instance (in core).
                     * @return CPU Number of CPU cores in an instance (in core).
                     */
                    uint64_t GetCPU() const;

                    /**
                     * 设置Number of CPU cores in an instance (in core).
                     * @param CPU Number of CPU cores in an instance (in core).
                     */
                    void SetCPU(const uint64_t& _cPU);

                    /**
                     * 判断参数 CPU 是否已赋值
                     * @return CPU 是否已赋值
                     */
                    bool CPUHasBeenSet() const;

                    /**
                     * 获取Instance’s memory capacity. Unit: GB.
                     * @return Memory Instance’s memory capacity. Unit: GB.
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置Instance’s memory capacity. Unit: GB.
                     * @param Memory Instance’s memory capacity. Unit: GB.
                     */
                    void SetMemory(const uint64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取The creation time.
                     * @return CreatedTime The creation time.
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置The creation time.
                     * @param CreatedTime The creation time.
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Instance type.
                     * @return InstanceType Instance type.
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Instance type.
                     * @param InstanceType Instance type.
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取Instance ENI quota (including primary ENIs).
                     * @return EniLimit Instance ENI quota (including primary ENIs).
                     */
                    uint64_t GetEniLimit() const;

                    /**
                     * 设置Instance ENI quota (including primary ENIs).
                     * @param EniLimit Instance ENI quota (including primary ENIs).
                     */
                    void SetEniLimit(const uint64_t& _eniLimit);

                    /**
                     * 判断参数 EniLimit 是否已赋值
                     * @return EniLimit 是否已赋值
                     */
                    bool EniLimitHasBeenSet() const;

                    /**
                     * 获取Private IP quoata for instance ENIs (including primary ENIs).
                     * @return EniIpLimit Private IP quoata for instance ENIs (including primary ENIs).
                     */
                    uint64_t GetEniIpLimit() const;

                    /**
                     * 设置Private IP quoata for instance ENIs (including primary ENIs).
                     * @param EniIpLimit Private IP quoata for instance ENIs (including primary ENIs).
                     */
                    void SetEniIpLimit(const uint64_t& _eniIpLimit);

                    /**
                     * 判断参数 EniIpLimit 是否已赋值
                     * @return EniIpLimit 是否已赋值
                     */
                    bool EniIpLimitHasBeenSet() const;

                    /**
                     * 获取The number of ENIs (including primary ENIs) bound to a instance.
                     * @return InstanceEniCount The number of ENIs (including primary ENIs) bound to a instance.
                     */
                    uint64_t GetInstanceEniCount() const;

                    /**
                     * 设置The number of ENIs (including primary ENIs) bound to a instance.
                     * @param InstanceEniCount The number of ENIs (including primary ENIs) bound to a instance.
                     */
                    void SetInstanceEniCount(const uint64_t& _instanceEniCount);

                    /**
                     * 判断参数 InstanceEniCount 是否已赋值
                     * @return InstanceEniCount 是否已赋值
                     */
                    bool InstanceEniCountHasBeenSet() const;

                private:

                    /**
                     * VPC instance ID.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Subnet instance ID.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * CVM instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * CVM Name
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * CVM status.
                     */
                    std::string m_instanceState;
                    bool m_instanceStateHasBeenSet;

                    /**
                     * Number of CPU cores in an instance (in core).
                     */
                    uint64_t m_cPU;
                    bool m_cPUHasBeenSet;

                    /**
                     * Instance’s memory capacity. Unit: GB.
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * The creation time.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Instance type.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Instance ENI quota (including primary ENIs).
                     */
                    uint64_t m_eniLimit;
                    bool m_eniLimitHasBeenSet;

                    /**
                     * Private IP quoata for instance ENIs (including primary ENIs).
                     */
                    uint64_t m_eniIpLimit;
                    bool m_eniIpLimitHasBeenSet;

                    /**
                     * The number of ENIs (including primary ENIs) bound to a instance.
                     */
                    uint64_t m_instanceEniCount;
                    bool m_instanceEniCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CVMINSTANCE_H_
