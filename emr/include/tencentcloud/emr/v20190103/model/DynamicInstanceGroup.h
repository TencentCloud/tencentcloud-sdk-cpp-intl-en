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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DYNAMICINSTANCEGROUP_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DYNAMICINSTANCEGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/CBSVolume.h>
#include <tencentcloud/emr/v20190103/model/CFSVolume.h>
#include <tencentcloud/emr/v20190103/model/COSVolume.h>
#include <tencentcloud/emr/v20190103/model/VolumeMount.h>
#include <tencentcloud/emr/v20190103/model/TkeLabel.h>
#include <tencentcloud/emr/v20190103/model/Toleration.h>
#include <tencentcloud/emr/v20190103/model/NameValue.h>
#include <tencentcloud/emr/v20190103/model/CFSTurboVolume.h>
#include <tencentcloud/emr/v20190103/model/GooseFSVolume.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Group part in the form data submitted when creating a DynamicInstance.
                */
                class DynamicInstanceGroup : public AbstractModel
                {
                public:
                    DynamicInstanceGroup();
                    ~DynamicInstanceGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Resource group type.</p>
                     * @return GroupType <p>Resource group type.</p>
                     * 
                     */
                    std::string GetGroupType() const;

                    /**
                     * 设置<p>Resource group type.</p>
                     * @param _groupType <p>Resource group type.</p>
                     * 
                     */
                    void SetGroupType(const std::string& _groupType);

                    /**
                     * 判断参数 GroupType 是否已赋值
                     * @return GroupType 是否已赋值
                     * 
                     */
                    bool GroupTypeHasBeenSet() const;

                    /**
                     * 获取<p>Resource group name.</p>
                     * @return GroupName <p>Resource group name.</p>
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置<p>Resource group name.</p>
                     * @param _groupName <p>Resource group name.</p>
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取<p>Number of Pod CPU cores.</p>
                     * @return PodCpu <p>Number of Pod CPU cores.</p>
                     * 
                     */
                    uint64_t GetPodCpu() const;

                    /**
                     * 设置<p>Number of Pod CPU cores.</p>
                     * @param _podCpu <p>Number of Pod CPU cores.</p>
                     * 
                     */
                    void SetPodCpu(const uint64_t& _podCpu);

                    /**
                     * 判断参数 PodCpu 是否已赋值
                     * @return PodCpu 是否已赋值
                     * 
                     */
                    bool PodCpuHasBeenSet() const;

                    /**
                     * 获取<p>Pod memory size (GB).</p>
                     * @return PodMem <p>Pod memory size (GB).</p>
                     * 
                     */
                    uint64_t GetPodMem() const;

                    /**
                     * 设置<p>Pod memory size (GB).</p>
                     * @param _podMem <p>Pod memory size (GB).</p>
                     * 
                     */
                    void SetPodMem(const uint64_t& _podMem);

                    /**
                     * 判断参数 PodMem 是否已赋值
                     * @return PodMem 是否已赋值
                     * 
                     */
                    bool PodMemHasBeenSet() const;

                    /**
                     * 获取<p>Pod GPU type.</p>
                     * @return PodGpuType <p>Pod GPU type.</p>
                     * 
                     */
                    std::string GetPodGpuType() const;

                    /**
                     * 设置<p>Pod GPU type.</p>
                     * @param _podGpuType <p>Pod GPU type.</p>
                     * 
                     */
                    void SetPodGpuType(const std::string& _podGpuType);

                    /**
                     * 判断参数 PodGpuType 是否已赋值
                     * @return PodGpuType 是否已赋值
                     * 
                     */
                    bool PodGpuTypeHasBeenSet() const;

                    /**
                     * 获取<p>Number of Pod GPUs.</p>
                     * @return PodGpu <p>Number of Pod GPUs.</p>
                     * 
                     */
                    uint64_t GetPodGpu() const;

                    /**
                     * 设置<p>Number of Pod GPUs.</p>
                     * @param _podGpu <p>Number of Pod GPUs.</p>
                     * 
                     */
                    void SetPodGpu(const uint64_t& _podGpu);

                    /**
                     * 判断参数 PodGpu 是否已赋值
                     * @return PodGpu 是否已赋值
                     * 
                     */
                    bool PodGpuHasBeenSet() const;

                    /**
                     * 获取<p>Number of Pods.</p>
                     * @return PodNum <p>Number of Pods.</p>
                     * 
                     */
                    uint64_t GetPodNum() const;

                    /**
                     * 设置<p>Number of Pods.</p>
                     * @param _podNum <p>Number of Pods.</p>
                     * 
                     */
                    void SetPodNum(const uint64_t& _podNum);

                    /**
                     * 判断参数 PodNum 是否已赋值
                     * @return PodNum 是否已赋值
                     * 
                     */
                    bool PodNumHasBeenSet() const;

                    /**
                     * 获取<p>Minimum number of elastic Pods.</p>
                     * @return MinPodNum <p>Minimum number of elastic Pods.</p>
                     * 
                     */
                    uint64_t GetMinPodNum() const;

                    /**
                     * 设置<p>Minimum number of elastic Pods.</p>
                     * @param _minPodNum <p>Minimum number of elastic Pods.</p>
                     * 
                     */
                    void SetMinPodNum(const uint64_t& _minPodNum);

                    /**
                     * 判断参数 MinPodNum 是否已赋值
                     * @return MinPodNum 是否已赋值
                     * 
                     */
                    bool MinPodNumHasBeenSet() const;

                    /**
                     * 获取<p>Maximum number of elastic Pods. When MaxPodNum &gt; MinPodNum, auto scaling is enabled by default and scaling is performed within the range.</p>
                     * @return MaxPodNum <p>Maximum number of elastic Pods. When MaxPodNum &gt; MinPodNum, auto scaling is enabled by default and scaling is performed within the range.</p>
                     * 
                     */
                    uint64_t GetMaxPodNum() const;

                    /**
                     * 设置<p>Maximum number of elastic Pods. When MaxPodNum &gt; MinPodNum, auto scaling is enabled by default and scaling is performed within the range.</p>
                     * @param _maxPodNum <p>Maximum number of elastic Pods. When MaxPodNum &gt; MinPodNum, auto scaling is enabled by default and scaling is performed within the range.</p>
                     * 
                     */
                    void SetMaxPodNum(const uint64_t& _maxPodNum);

                    /**
                     * 判断参数 MaxPodNum 是否已赋值
                     * @return MaxPodNum 是否已赋值
                     * 
                     */
                    bool MaxPodNumHasBeenSet() const;

                    /**
                     * 获取<p>Whether to support storage configuration.</p>
                     * @return SupportPV <p>Whether to support storage configuration.</p>
                     * 
                     */
                    bool GetSupportPV() const;

                    /**
                     * 设置<p>Whether to support storage configuration.</p>
                     * @param _supportPV <p>Whether to support storage configuration.</p>
                     * 
                     */
                    void SetSupportPV(const bool& _supportPV);

                    /**
                     * 判断参数 SupportPV 是否已赋值
                     * @return SupportPV 是否已赋值
                     * 
                     */
                    bool SupportPVHasBeenSet() const;

                    /**
                     * 获取<p>CBS storage volume list.</p>
                     * @return CBSVolumes <p>CBS storage volume list.</p>
                     * 
                     */
                    std::vector<CBSVolume> GetCBSVolumes() const;

                    /**
                     * 设置<p>CBS storage volume list.</p>
                     * @param _cBSVolumes <p>CBS storage volume list.</p>
                     * 
                     */
                    void SetCBSVolumes(const std::vector<CBSVolume>& _cBSVolumes);

                    /**
                     * 判断参数 CBSVolumes 是否已赋值
                     * @return CBSVolumes 是否已赋值
                     * 
                     */
                    bool CBSVolumesHasBeenSet() const;

                    /**
                     * 获取<p>CFS storage volume list.</p>
                     * @return CFSVolumes <p>CFS storage volume list.</p>
                     * 
                     */
                    std::vector<CFSVolume> GetCFSVolumes() const;

                    /**
                     * 设置<p>CFS storage volume list.</p>
                     * @param _cFSVolumes <p>CFS storage volume list.</p>
                     * 
                     */
                    void SetCFSVolumes(const std::vector<CFSVolume>& _cFSVolumes);

                    /**
                     * 判断参数 CFSVolumes 是否已赋值
                     * @return CFSVolumes 是否已赋值
                     * 
                     */
                    bool CFSVolumesHasBeenSet() const;

                    /**
                     * 获取<p>COS storage volume list.</p>
                     * @return COSVolumes <p>COS storage volume list.</p>
                     * 
                     */
                    std::vector<COSVolume> GetCOSVolumes() const;

                    /**
                     * 设置<p>COS storage volume list.</p>
                     * @param _cOSVolumes <p>COS storage volume list.</p>
                     * 
                     */
                    void SetCOSVolumes(const std::vector<COSVolume>& _cOSVolumes);

                    /**
                     * 判断参数 COSVolumes 是否已赋值
                     * @return COSVolumes 是否已赋值
                     * 
                     */
                    bool COSVolumesHasBeenSet() const;

                    /**
                     * 获取<p>Mount volume list.</p>
                     * @return VolumeMounts <p>Mount volume list.</p>
                     * 
                     */
                    std::vector<VolumeMount> GetVolumeMounts() const;

                    /**
                     * 设置<p>Mount volume list.</p>
                     * @param _volumeMounts <p>Mount volume list.</p>
                     * 
                     */
                    void SetVolumeMounts(const std::vector<VolumeMount>& _volumeMounts);

                    /**
                     * 判断参数 VolumeMounts 是否已赋值
                     * @return VolumeMounts 是否已赋值
                     * 
                     */
                    bool VolumeMountsHasBeenSet() const;

                    /**
                     * 获取<p>Pod label.</p>
                     * @return Labels <p>Pod label.</p>
                     * 
                     */
                    std::vector<TkeLabel> GetLabels() const;

                    /**
                     * 设置<p>Pod label.</p>
                     * @param _labels <p>Pod label.</p>
                     * 
                     */
                    void SetLabels(const std::vector<TkeLabel>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取<p>Tolerations definition.</p>
                     * @return Tolerations <p>Tolerations definition.</p>
                     * 
                     */
                    std::vector<Toleration> GetTolerations() const;

                    /**
                     * 设置<p>Tolerations definition.</p>
                     * @param _tolerations <p>Tolerations definition.</p>
                     * 
                     */
                    void SetTolerations(const std::vector<Toleration>& _tolerations);

                    /**
                     * 判断参数 Tolerations 是否已赋值
                     * @return Tolerations 是否已赋值
                     * 
                     */
                    bool TolerationsHasBeenSet() const;

                    /**
                     * 获取<p>Environment variable.</p>
                     * @return Envs <p>Environment variable.</p>
                     * 
                     */
                    std::vector<NameValue> GetEnvs() const;

                    /**
                     * 设置<p>Environment variable.</p>
                     * @param _envs <p>Environment variable.</p>
                     * 
                     */
                    void SetEnvs(const std::vector<NameValue>& _envs);

                    /**
                     * 判断参数 Envs 是否已赋值
                     * @return Envs 是否已赋值
                     * 
                     */
                    bool EnvsHasBeenSet() const;

                    /**
                     * 获取<p>Node scheduling policy.</p>
                     * @return SchedulingPolicy <p>Node scheduling policy.</p>
                     * 
                     */
                    std::string GetSchedulingPolicy() const;

                    /**
                     * 设置<p>Node scheduling policy.</p>
                     * @param _schedulingPolicy <p>Node scheduling policy.</p>
                     * 
                     */
                    void SetSchedulingPolicy(const std::string& _schedulingPolicy);

                    /**
                     * 判断参数 SchedulingPolicy 是否已赋值
                     * @return SchedulingPolicy 是否已赋值
                     * 
                     */
                    bool SchedulingPolicyHasBeenSet() const;

                    /**
                     * 获取<p>Resource label.</p>
                     * @return ResourceLabel <p>Resource label.</p>
                     * 
                     */
                    std::string GetResourceLabel() const;

                    /**
                     * 设置<p>Resource label.</p>
                     * @param _resourceLabel <p>Resource label.</p>
                     * 
                     */
                    void SetResourceLabel(const std::string& _resourceLabel);

                    /**
                     * 判断参数 ResourceLabel 是否已赋值
                     * @return ResourceLabel 是否已赋值
                     * 
                     */
                    bool ResourceLabelHasBeenSet() const;

                    /**
                     * 获取<p>GPU resource vendor key.</p>
                     * @return PodGpuResourceKey <p>GPU resource vendor key.</p>
                     * 
                     */
                    std::string GetPodGpuResourceKey() const;

                    /**
                     * 设置<p>GPU resource vendor key.</p>
                     * @param _podGpuResourceKey <p>GPU resource vendor key.</p>
                     * 
                     */
                    void SetPodGpuResourceKey(const std::string& _podGpuResourceKey);

                    /**
                     * 判断参数 PodGpuResourceKey 是否已赋值
                     * @return PodGpuResourceKey 是否已赋值
                     * 
                     */
                    bool PodGpuResourceKeyHasBeenSet() const;

                    /**
                     * 获取<p>CFS Turbo mount list.</p>
                     * @return CFSTurboVolumes <p>CFS Turbo mount list.</p>
                     * 
                     */
                    std::vector<CFSTurboVolume> GetCFSTurboVolumes() const;

                    /**
                     * 设置<p>CFS Turbo mount list.</p>
                     * @param _cFSTurboVolumes <p>CFS Turbo mount list.</p>
                     * 
                     */
                    void SetCFSTurboVolumes(const std::vector<CFSTurboVolume>& _cFSTurboVolumes);

                    /**
                     * 判断参数 CFSTurboVolumes 是否已赋值
                     * @return CFSTurboVolumes 是否已赋值
                     * 
                     */
                    bool CFSTurboVolumesHasBeenSet() const;

                    /**
                     * 获取<p>GooseFS disk.</p>
                     * @return GooseFSVolumes <p>GooseFS disk.</p>
                     * 
                     */
                    std::vector<GooseFSVolume> GetGooseFSVolumes() const;

                    /**
                     * 设置<p>GooseFS disk.</p>
                     * @param _gooseFSVolumes <p>GooseFS disk.</p>
                     * 
                     */
                    void SetGooseFSVolumes(const std::vector<GooseFSVolume>& _gooseFSVolumes);

                    /**
                     * 判断参数 GooseFSVolumes 是否已赋值
                     * @return GooseFSVolumes 是否已赋值
                     * 
                     */
                    bool GooseFSVolumesHasBeenSet() const;

                    /**
                     * 获取<p>Pre-start command.</p>
                     * @return PreStartCommand <p>Pre-start command.</p>
                     * 
                     */
                    std::string GetPreStartCommand() const;

                    /**
                     * 设置<p>Pre-start command.</p>
                     * @param _preStartCommand <p>Pre-start command.</p>
                     * 
                     */
                    void SetPreStartCommand(const std::string& _preStartCommand);

                    /**
                     * 判断参数 PreStartCommand 是否已赋值
                     * @return PreStartCommand 是否已赋值
                     * 
                     */
                    bool PreStartCommandHasBeenSet() const;

                    /**
                     * 获取<p>Ray pre-start command.</p>
                     * @return RayStartParams <p>Ray pre-start command.</p>
                     * 
                     */
                    std::string GetRayStartParams() const;

                    /**
                     * 设置<p>Ray pre-start command.</p>
                     * @param _rayStartParams <p>Ray pre-start command.</p>
                     * 
                     */
                    void SetRayStartParams(const std::string& _rayStartParams);

                    /**
                     * 判断参数 RayStartParams 是否已赋值
                     * @return RayStartParams 是否已赋值
                     * 
                     */
                    bool RayStartParamsHasBeenSet() const;

                private:

                    /**
                     * <p>Resource group type.</p>
                     */
                    std::string m_groupType;
                    bool m_groupTypeHasBeenSet;

                    /**
                     * <p>Resource group name.</p>
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * <p>Number of Pod CPU cores.</p>
                     */
                    uint64_t m_podCpu;
                    bool m_podCpuHasBeenSet;

                    /**
                     * <p>Pod memory size (GB).</p>
                     */
                    uint64_t m_podMem;
                    bool m_podMemHasBeenSet;

                    /**
                     * <p>Pod GPU type.</p>
                     */
                    std::string m_podGpuType;
                    bool m_podGpuTypeHasBeenSet;

                    /**
                     * <p>Number of Pod GPUs.</p>
                     */
                    uint64_t m_podGpu;
                    bool m_podGpuHasBeenSet;

                    /**
                     * <p>Number of Pods.</p>
                     */
                    uint64_t m_podNum;
                    bool m_podNumHasBeenSet;

                    /**
                     * <p>Minimum number of elastic Pods.</p>
                     */
                    uint64_t m_minPodNum;
                    bool m_minPodNumHasBeenSet;

                    /**
                     * <p>Maximum number of elastic Pods. When MaxPodNum &gt; MinPodNum, auto scaling is enabled by default and scaling is performed within the range.</p>
                     */
                    uint64_t m_maxPodNum;
                    bool m_maxPodNumHasBeenSet;

                    /**
                     * <p>Whether to support storage configuration.</p>
                     */
                    bool m_supportPV;
                    bool m_supportPVHasBeenSet;

                    /**
                     * <p>CBS storage volume list.</p>
                     */
                    std::vector<CBSVolume> m_cBSVolumes;
                    bool m_cBSVolumesHasBeenSet;

                    /**
                     * <p>CFS storage volume list.</p>
                     */
                    std::vector<CFSVolume> m_cFSVolumes;
                    bool m_cFSVolumesHasBeenSet;

                    /**
                     * <p>COS storage volume list.</p>
                     */
                    std::vector<COSVolume> m_cOSVolumes;
                    bool m_cOSVolumesHasBeenSet;

                    /**
                     * <p>Mount volume list.</p>
                     */
                    std::vector<VolumeMount> m_volumeMounts;
                    bool m_volumeMountsHasBeenSet;

                    /**
                     * <p>Pod label.</p>
                     */
                    std::vector<TkeLabel> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * <p>Tolerations definition.</p>
                     */
                    std::vector<Toleration> m_tolerations;
                    bool m_tolerationsHasBeenSet;

                    /**
                     * <p>Environment variable.</p>
                     */
                    std::vector<NameValue> m_envs;
                    bool m_envsHasBeenSet;

                    /**
                     * <p>Node scheduling policy.</p>
                     */
                    std::string m_schedulingPolicy;
                    bool m_schedulingPolicyHasBeenSet;

                    /**
                     * <p>Resource label.</p>
                     */
                    std::string m_resourceLabel;
                    bool m_resourceLabelHasBeenSet;

                    /**
                     * <p>GPU resource vendor key.</p>
                     */
                    std::string m_podGpuResourceKey;
                    bool m_podGpuResourceKeyHasBeenSet;

                    /**
                     * <p>CFS Turbo mount list.</p>
                     */
                    std::vector<CFSTurboVolume> m_cFSTurboVolumes;
                    bool m_cFSTurboVolumesHasBeenSet;

                    /**
                     * <p>GooseFS disk.</p>
                     */
                    std::vector<GooseFSVolume> m_gooseFSVolumes;
                    bool m_gooseFSVolumesHasBeenSet;

                    /**
                     * <p>Pre-start command.</p>
                     */
                    std::string m_preStartCommand;
                    bool m_preStartCommandHasBeenSet;

                    /**
                     * <p>Ray pre-start command.</p>
                     */
                    std::string m_rayStartParams;
                    bool m_rayStartParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DYNAMICINSTANCEGROUP_H_
