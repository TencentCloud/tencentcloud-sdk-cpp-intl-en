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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_PODNEWSPEC_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_PODNEWSPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/PodVolume.h>
#include <tencentcloud/emr/v20190103/model/DynamicPodSpec.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Resource descriptions for container resource scale-out
                */
                class PodNewSpec : public AbstractModel
                {
                public:
                    PodNewSpec();
                    ~PodNewSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The identifier of an external resource provider, such as "cls-a1cd23fa".
                     * @return ResourceProviderIdentifier The identifier of an external resource provider, such as "cls-a1cd23fa".
                     */
                    std::string GetResourceProviderIdentifier() const;

                    /**
                     * 设置The identifier of an external resource provider, such as "cls-a1cd23fa".
                     * @param ResourceProviderIdentifier The identifier of an external resource provider, such as "cls-a1cd23fa".
                     */
                    void SetResourceProviderIdentifier(const std::string& _resourceProviderIdentifier);

                    /**
                     * 判断参数 ResourceProviderIdentifier 是否已赋值
                     * @return ResourceProviderIdentifier 是否已赋值
                     */
                    bool ResourceProviderIdentifierHasBeenSet() const;

                    /**
                     * 获取The type of the external resource provider, such as "tke". Currently, only "tke" is supported.
                     * @return ResourceProviderType The type of the external resource provider, such as "tke". Currently, only "tke" is supported.
                     */
                    std::string GetResourceProviderType() const;

                    /**
                     * 设置The type of the external resource provider, such as "tke". Currently, only "tke" is supported.
                     * @param ResourceProviderType The type of the external resource provider, such as "tke". Currently, only "tke" is supported.
                     */
                    void SetResourceProviderType(const std::string& _resourceProviderType);

                    /**
                     * 判断参数 ResourceProviderType 是否已赋值
                     * @return ResourceProviderType 是否已赋值
                     */
                    bool ResourceProviderTypeHasBeenSet() const;

                    /**
                     * 获取The purpose of the resource, which means the node type and can only be "TASK".
                     * @return NodeFlag The purpose of the resource, which means the node type and can only be "TASK".
                     */
                    std::string GetNodeFlag() const;

                    /**
                     * 设置The purpose of the resource, which means the node type and can only be "TASK".
                     * @param NodeFlag The purpose of the resource, which means the node type and can only be "TASK".
                     */
                    void SetNodeFlag(const std::string& _nodeFlag);

                    /**
                     * 判断参数 NodeFlag 是否已赋值
                     * @return NodeFlag 是否已赋值
                     */
                    bool NodeFlagHasBeenSet() const;

                    /**
                     * 获取The number of CPUs.
                     * @return Cpu The number of CPUs.
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置The number of CPUs.
                     * @param Cpu The number of CPUs.
                     */
                    void SetCpu(const uint64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取The memory size in GB.
                     * @return Memory The memory size in GB.
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置The memory size in GB.
                     * @param Memory The memory size in GB.
                     */
                    void SetMemory(const uint64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取The EKS cluster - CPU type. Valid values: `intel` and `amd`.
                     * @return CpuType The EKS cluster - CPU type. Valid values: `intel` and `amd`.
                     */
                    std::string GetCpuType() const;

                    /**
                     * 设置The EKS cluster - CPU type. Valid values: `intel` and `amd`.
                     * @param CpuType The EKS cluster - CPU type. Valid values: `intel` and `amd`.
                     */
                    void SetCpuType(const std::string& _cpuType);

                    /**
                     * 判断参数 CpuType 是否已赋值
                     * @return CpuType 是否已赋值
                     */
                    bool CpuTypeHasBeenSet() const;

                    /**
                     * 获取The data directory mounting information of the pod node.
                     * @return PodVolumes The data directory mounting information of the pod node.
                     */
                    std::vector<PodVolume> GetPodVolumes() const;

                    /**
                     * 设置The data directory mounting information of the pod node.
                     * @param PodVolumes The data directory mounting information of the pod node.
                     */
                    void SetPodVolumes(const std::vector<PodVolume>& _podVolumes);

                    /**
                     * 判断参数 PodVolumes 是否已赋值
                     * @return PodVolumes 是否已赋值
                     */
                    bool PodVolumesHasBeenSet() const;

                    /**
                     * 获取Whether the dynamic spec is used. Valid values:
<li>`true`: Yes</li>
<li>`false` (default): No</li>
                     * @return EnableDynamicSpecFlag Whether the dynamic spec is used. Valid values:
<li>`true`: Yes</li>
<li>`false` (default): No</li>
                     */
                    bool GetEnableDynamicSpecFlag() const;

                    /**
                     * 设置Whether the dynamic spec is used. Valid values:
<li>`true`: Yes</li>
<li>`false` (default): No</li>
                     * @param EnableDynamicSpecFlag Whether the dynamic spec is used. Valid values:
<li>`true`: Yes</li>
<li>`false` (default): No</li>
                     */
                    void SetEnableDynamicSpecFlag(const bool& _enableDynamicSpecFlag);

                    /**
                     * 判断参数 EnableDynamicSpecFlag 是否已赋值
                     * @return EnableDynamicSpecFlag 是否已赋值
                     */
                    bool EnableDynamicSpecFlagHasBeenSet() const;

                    /**
                     * 获取The dynamic spec.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DynamicPodSpec The dynamic spec.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    DynamicPodSpec GetDynamicPodSpec() const;

                    /**
                     * 设置The dynamic spec.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param DynamicPodSpec The dynamic spec.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDynamicPodSpec(const DynamicPodSpec& _dynamicPodSpec);

                    /**
                     * 判断参数 DynamicPodSpec 是否已赋值
                     * @return DynamicPodSpec 是否已赋值
                     */
                    bool DynamicPodSpecHasBeenSet() const;

                    /**
                     * 获取The unique VPC ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VpcId The unique VPC ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置The unique VPC ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param VpcId The unique VPC ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取The unique VPC subnet ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubnetId The unique VPC subnet ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置The unique VPC subnet ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param SubnetId The unique VPC subnet ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取The pod name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PodName The pod name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetPodName() const;

                    /**
                     * 设置The pod name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param PodName The pod name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPodName(const std::string& _podName);

                    /**
                     * 判断参数 PodName 是否已赋值
                     * @return PodName 是否已赋值
                     */
                    bool PodNameHasBeenSet() const;

                private:

                    /**
                     * The identifier of an external resource provider, such as "cls-a1cd23fa".
                     */
                    std::string m_resourceProviderIdentifier;
                    bool m_resourceProviderIdentifierHasBeenSet;

                    /**
                     * The type of the external resource provider, such as "tke". Currently, only "tke" is supported.
                     */
                    std::string m_resourceProviderType;
                    bool m_resourceProviderTypeHasBeenSet;

                    /**
                     * The purpose of the resource, which means the node type and can only be "TASK".
                     */
                    std::string m_nodeFlag;
                    bool m_nodeFlagHasBeenSet;

                    /**
                     * The number of CPUs.
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * The memory size in GB.
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * The EKS cluster - CPU type. Valid values: `intel` and `amd`.
                     */
                    std::string m_cpuType;
                    bool m_cpuTypeHasBeenSet;

                    /**
                     * The data directory mounting information of the pod node.
                     */
                    std::vector<PodVolume> m_podVolumes;
                    bool m_podVolumesHasBeenSet;

                    /**
                     * Whether the dynamic spec is used. Valid values:
<li>`true`: Yes</li>
<li>`false` (default): No</li>
                     */
                    bool m_enableDynamicSpecFlag;
                    bool m_enableDynamicSpecFlagHasBeenSet;

                    /**
                     * The dynamic spec.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    DynamicPodSpec m_dynamicPodSpec;
                    bool m_dynamicPodSpecHasBeenSet;

                    /**
                     * The unique VPC ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * The unique VPC subnet ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * The pod name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_PODNEWSPEC_H_
