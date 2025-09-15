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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_PODSPEC_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_PODSPEC_H_

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
                * Resource description for container resource scale-out
                */
                class PodSpec : public AbstractModel
                {
                public:
                    PodSpec();
                    ~PodSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Identifier of external resource provider, such as "cls-a1cd23fa".
                     * @return ResourceProviderIdentifier Identifier of external resource provider, such as "cls-a1cd23fa".
                     * 
                     */
                    std::string GetResourceProviderIdentifier() const;

                    /**
                     * 设置Identifier of external resource provider, such as "cls-a1cd23fa".
                     * @param _resourceProviderIdentifier Identifier of external resource provider, such as "cls-a1cd23fa".
                     * 
                     */
                    void SetResourceProviderIdentifier(const std::string& _resourceProviderIdentifier);

                    /**
                     * 判断参数 ResourceProviderIdentifier 是否已赋值
                     * @return ResourceProviderIdentifier 是否已赋值
                     * 
                     */
                    bool ResourceProviderIdentifierHasBeenSet() const;

                    /**
                     * 获取Type of external resource provider, such as "tke". Currently, only "tke" is supported.
                     * @return ResourceProviderType Type of external resource provider, such as "tke". Currently, only "tke" is supported.
                     * 
                     */
                    std::string GetResourceProviderType() const;

                    /**
                     * 设置Type of external resource provider, such as "tke". Currently, only "tke" is supported.
                     * @param _resourceProviderType Type of external resource provider, such as "tke". Currently, only "tke" is supported.
                     * 
                     */
                    void SetResourceProviderType(const std::string& _resourceProviderType);

                    /**
                     * 判断参数 ResourceProviderType 是否已赋值
                     * @return ResourceProviderType 是否已赋值
                     * 
                     */
                    bool ResourceProviderTypeHasBeenSet() const;

                    /**
                     * 获取Purpose of the resource, which means the node type and can only be "TASK".
                     * @return NodeType Purpose of the resource, which means the node type and can only be "TASK".
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置Purpose of the resource, which means the node type and can only be "TASK".
                     * @param _nodeType Purpose of the resource, which means the node type and can only be "TASK".
                     * 
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取Number of CPUs
                     * @return Cpu Number of CPUs
                     * 
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置Number of CPUs
                     * @param _cpu Number of CPUs
                     * 
                     */
                    void SetCpu(const uint64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取Memory size in GB.
                     * @return Memory Memory size in GB.
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置Memory size in GB.
                     * @param _memory Memory size in GB.
                     * 
                     */
                    void SetMemory(const uint64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取Mount point of resources for the host. A specified mount point corresponds to the host path and is used as the data storage directory in the pod. (This parameter has been disused)
                     * @return DataVolumes Mount point of resources for the host. A specified mount point corresponds to the host path and is used as the data storage directory in the pod. (This parameter has been disused)
                     * 
                     */
                    std::vector<std::string> GetDataVolumes() const;

                    /**
                     * 设置Mount point of resources for the host. A specified mount point corresponds to the host path and is used as the data storage directory in the pod. (This parameter has been disused)
                     * @param _dataVolumes Mount point of resources for the host. A specified mount point corresponds to the host path and is used as the data storage directory in the pod. (This parameter has been disused)
                     * 
                     */
                    void SetDataVolumes(const std::vector<std::string>& _dataVolumes);

                    /**
                     * 判断参数 DataVolumes 是否已赋值
                     * @return DataVolumes 是否已赋值
                     * 
                     */
                    bool DataVolumesHasBeenSet() const;

                    /**
                     * 获取EKS cluster - CPU type. Valid values: `intel` and `amd`.
                     * @return CpuType EKS cluster - CPU type. Valid values: `intel` and `amd`.
                     * 
                     */
                    std::string GetCpuType() const;

                    /**
                     * 设置EKS cluster - CPU type. Valid values: `intel` and `amd`.
                     * @param _cpuType EKS cluster - CPU type. Valid values: `intel` and `amd`.
                     * 
                     */
                    void SetCpuType(const std::string& _cpuType);

                    /**
                     * 判断参数 CpuType 是否已赋值
                     * @return CpuType 是否已赋值
                     * 
                     */
                    bool CpuTypeHasBeenSet() const;

                    /**
                     * 获取Data directory mounting information of the pod node.
                     * @return PodVolumes Data directory mounting information of the pod node.
                     * 
                     */
                    std::vector<PodVolume> GetPodVolumes() const;

                    /**
                     * 设置Data directory mounting information of the pod node.
                     * @param _podVolumes Data directory mounting information of the pod node.
                     * 
                     */
                    void SetPodVolumes(const std::vector<PodVolume>& _podVolumes);

                    /**
                     * 判断参数 PodVolumes 是否已赋值
                     * @return PodVolumes 是否已赋值
                     * 
                     */
                    bool PodVolumesHasBeenSet() const;

                    /**
                     * 获取Whether floating specification is used. `1`: Yes; `0`: No.
                     * @return IsDynamicSpec Whether floating specification is used. `1`: Yes; `0`: No.
                     * 
                     */
                    uint64_t GetIsDynamicSpec() const;

                    /**
                     * 设置Whether floating specification is used. `1`: Yes; `0`: No.
                     * @param _isDynamicSpec Whether floating specification is used. `1`: Yes; `0`: No.
                     * 
                     */
                    void SetIsDynamicSpec(const uint64_t& _isDynamicSpec);

                    /**
                     * 判断参数 IsDynamicSpec 是否已赋值
                     * @return IsDynamicSpec 是否已赋值
                     * 
                     */
                    bool IsDynamicSpecHasBeenSet() const;

                    /**
                     * 获取Floating specification
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DynamicPodSpec Floating specification
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    DynamicPodSpec GetDynamicPodSpec() const;

                    /**
                     * 设置Floating specification
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dynamicPodSpec Floating specification
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDynamicPodSpec(const DynamicPodSpec& _dynamicPodSpec);

                    /**
                     * 判断参数 DynamicPodSpec 是否已赋值
                     * @return DynamicPodSpec 是否已赋值
                     * 
                     */
                    bool DynamicPodSpecHasBeenSet() const;

                    /**
                     * 获取Unique ID of VPC network.
                     * @return VpcId Unique ID of VPC network.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Unique ID of VPC network.
                     * @param _vpcId Unique ID of VPC network.
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
                     * 获取Unique ID of a VPC subnet.
                     * @return SubnetId Unique ID of a VPC subnet.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Unique ID of a VPC subnet.
                     * @param _subnetId Unique ID of a VPC subnet.
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
                     * 获取pod name
                     * @return PodName pod name
                     * 
                     */
                    std::string GetPodName() const;

                    /**
                     * 设置pod name
                     * @param _podName pod name
                     * 
                     */
                    void SetPodName(const std::string& _podName);

                    /**
                     * 判断参数 PodName 是否已赋值
                     * @return PodName 是否已赋值
                     * 
                     */
                    bool PodNameHasBeenSet() const;

                private:

                    /**
                     * Identifier of external resource provider, such as "cls-a1cd23fa".
                     */
                    std::string m_resourceProviderIdentifier;
                    bool m_resourceProviderIdentifierHasBeenSet;

                    /**
                     * Type of external resource provider, such as "tke". Currently, only "tke" is supported.
                     */
                    std::string m_resourceProviderType;
                    bool m_resourceProviderTypeHasBeenSet;

                    /**
                     * Purpose of the resource, which means the node type and can only be "TASK".
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * Number of CPUs
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Memory size in GB.
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * Mount point of resources for the host. A specified mount point corresponds to the host path and is used as the data storage directory in the pod. (This parameter has been disused)
                     */
                    std::vector<std::string> m_dataVolumes;
                    bool m_dataVolumesHasBeenSet;

                    /**
                     * EKS cluster - CPU type. Valid values: `intel` and `amd`.
                     */
                    std::string m_cpuType;
                    bool m_cpuTypeHasBeenSet;

                    /**
                     * Data directory mounting information of the pod node.
                     */
                    std::vector<PodVolume> m_podVolumes;
                    bool m_podVolumesHasBeenSet;

                    /**
                     * Whether floating specification is used. `1`: Yes; `0`: No.
                     */
                    uint64_t m_isDynamicSpec;
                    bool m_isDynamicSpecHasBeenSet;

                    /**
                     * Floating specification
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    DynamicPodSpec m_dynamicPodSpec;
                    bool m_dynamicPodSpecHasBeenSet;

                    /**
                     * Unique ID of VPC network.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Unique ID of a VPC subnet.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * pod name
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_PODSPEC_H_
