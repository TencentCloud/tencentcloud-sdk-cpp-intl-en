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
#include <tencentcloud/emr/v20190103/model/OtherAccountInfo.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Resource description, which is used during a container resource scale-out.
                */
                class PodNewSpec : public AbstractModel
                {
                public:
                    PodNewSpec();
                    ~PodNewSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Identifier of the external resource provider, for example, "cls-a1cd23fa".
                     * @return ResourceProviderIdentifier Identifier of the external resource provider, for example, "cls-a1cd23fa".
                     * 
                     */
                    std::string GetResourceProviderIdentifier() const;

                    /**
                     * 设置Identifier of the external resource provider, for example, "cls-a1cd23fa".
                     * @param _resourceProviderIdentifier Identifier of the external resource provider, for example, "cls-a1cd23fa".
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
                     * 获取Type of the external resource provider, for example, "tke". Currently, only "tke" is supported.
                     * @return ResourceProviderType Type of the external resource provider, for example, "tke". Currently, only "tke" is supported.
                     * 
                     */
                    std::string GetResourceProviderType() const;

                    /**
                     * 设置Type of the external resource provider, for example, "tke". Currently, only "tke" is supported.
                     * @param _resourceProviderType Type of the external resource provider, for example, "tke". Currently, only "tke" is supported.
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
                     * 获取Purpose of the resource, that is, the node type. Currently only "TASK" is supported.
                     * @return NodeFlag Purpose of the resource, that is, the node type. Currently only "TASK" is supported.
                     * 
                     */
                    std::string GetNodeFlag() const;

                    /**
                     * 设置Purpose of the resource, that is, the node type. Currently only "TASK" is supported.
                     * @param _nodeFlag Purpose of the resource, that is, the node type. Currently only "TASK" is supported.
                     * 
                     */
                    void SetNodeFlag(const std::string& _nodeFlag);

                    /**
                     * 判断参数 NodeFlag 是否已赋值
                     * @return NodeFlag 是否已赋值
                     * 
                     */
                    bool NodeFlagHasBeenSet() const;

                    /**
                     * 获取Number of CPU cores.
                     * @return Cpu Number of CPU cores.
                     * 
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置Number of CPU cores.
                     * @param _cpu Number of CPU cores.
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
                     * 获取Memory size (GB).
                     * @return Memory Memory size (GB).
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置Memory size (GB).
                     * @param _memory Memory size (GB).
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
                     * 获取CPU type for the EKS cluster, currently supporting intel and amd.
                     * @return CpuType CPU type for the EKS cluster, currently supporting intel and amd.
                     * 
                     */
                    std::string GetCpuType() const;

                    /**
                     * 设置CPU type for the EKS cluster, currently supporting intel and amd.
                     * @param _cpuType CPU type for the EKS cluster, currently supporting intel and amd.
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
                     * 获取Mounting information of the node data directory on Pod.
                     * @return PodVolumes Mounting information of the node data directory on Pod.
                     * 
                     */
                    std::vector<PodVolume> GetPodVolumes() const;

                    /**
                     * 设置Mounting information of the node data directory on Pod.
                     * @param _podVolumes Mounting information of the node data directory on Pod.
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
                     * 获取Whether it is a floating specification. Default: false. Valid values:
<li>true: yes</li>
<li>false: no</li>
                     * @return EnableDynamicSpecFlag Whether it is a floating specification. Default: false. Valid values:
<li>true: yes</li>
<li>false: no</li>
                     * 
                     */
                    bool GetEnableDynamicSpecFlag() const;

                    /**
                     * 设置Whether it is a floating specification. Default: false. Valid values:
<li>true: yes</li>
<li>false: no</li>
                     * @param _enableDynamicSpecFlag Whether it is a floating specification. Default: false. Valid values:
<li>true: yes</li>
<li>false: no</li>
                     * 
                     */
                    void SetEnableDynamicSpecFlag(const bool& _enableDynamicSpecFlag);

                    /**
                     * 判断参数 EnableDynamicSpecFlag 是否已赋值
                     * @return EnableDynamicSpecFlag 是否已赋值
                     * 
                     */
                    bool EnableDynamicSpecFlagHasBeenSet() const;

                    /**
                     * 获取Floating specification.
                     * @return DynamicPodSpec Floating specification.
                     * 
                     */
                    DynamicPodSpec GetDynamicPodSpec() const;

                    /**
                     * 设置Floating specification.
                     * @param _dynamicPodSpec Floating specification.
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
                     * 获取Unique ID of the VPC.
                     * @return VpcId Unique ID of the VPC.
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Unique ID of the VPC.
                     * @param _vpcId Unique ID of the VPC.
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
                     * 获取Unique ID of the VPC subnet.
                     * @return SubnetId Unique ID of the VPC subnet.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Unique ID of the VPC subnet.
                     * @param _subnetId Unique ID of the VPC subnet.
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

                    /**
                     * 获取Other account authorization information.
                     * @return OtherAccountInfo Other account authorization information.
                     * 
                     */
                    OtherAccountInfo GetOtherAccountInfo() const;

                    /**
                     * 设置Other account authorization information.
                     * @param _otherAccountInfo Other account authorization information.
                     * 
                     */
                    void SetOtherAccountInfo(const OtherAccountInfo& _otherAccountInfo);

                    /**
                     * 判断参数 OtherAccountInfo 是否已赋值
                     * @return OtherAccountInfo 是否已赋值
                     * 
                     */
                    bool OtherAccountInfoHasBeenSet() const;

                private:

                    /**
                     * Identifier of the external resource provider, for example, "cls-a1cd23fa".
                     */
                    std::string m_resourceProviderIdentifier;
                    bool m_resourceProviderIdentifierHasBeenSet;

                    /**
                     * Type of the external resource provider, for example, "tke". Currently, only "tke" is supported.
                     */
                    std::string m_resourceProviderType;
                    bool m_resourceProviderTypeHasBeenSet;

                    /**
                     * Purpose of the resource, that is, the node type. Currently only "TASK" is supported.
                     */
                    std::string m_nodeFlag;
                    bool m_nodeFlagHasBeenSet;

                    /**
                     * Number of CPU cores.
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * Memory size (GB).
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * CPU type for the EKS cluster, currently supporting intel and amd.
                     */
                    std::string m_cpuType;
                    bool m_cpuTypeHasBeenSet;

                    /**
                     * Mounting information of the node data directory on Pod.
                     */
                    std::vector<PodVolume> m_podVolumes;
                    bool m_podVolumesHasBeenSet;

                    /**
                     * Whether it is a floating specification. Default: false. Valid values:
<li>true: yes</li>
<li>false: no</li>
                     */
                    bool m_enableDynamicSpecFlag;
                    bool m_enableDynamicSpecFlagHasBeenSet;

                    /**
                     * Floating specification.
                     */
                    DynamicPodSpec m_dynamicPodSpec;
                    bool m_dynamicPodSpecHasBeenSet;

                    /**
                     * Unique ID of the VPC.
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Unique ID of the VPC subnet.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * pod name
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                    /**
                     * Other account authorization information.
                     */
                    OtherAccountInfo m_otherAccountInfo;
                    bool m_otherAccountInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_PODNEWSPEC_H_
