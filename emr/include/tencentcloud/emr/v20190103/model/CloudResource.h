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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_CLOUDRESOURCE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_CLOUDRESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/VolumeSetting.h>
#include <tencentcloud/emr/v20190103/model/ExternalAccess.h>
#include <tencentcloud/emr/v20190103/model/NodeAffinity.h>
#include <tencentcloud/emr/v20190103/model/Disk.h>
#include <tencentcloud/emr/v20190103/model/Toleration.h>
#include <tencentcloud/emr/v20190103/model/PodAffinitySpec.h>
#include <tencentcloud/emr/v20190103/model/TopologySpreadConstraint.h>
#include <tencentcloud/emr/v20190103/model/StringMap.h>
#include <tencentcloud/emr/v20190103/model/ImageInfoV2.h>
#include <tencentcloud/emr/v20190103/model/DynamicInstanceForm.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Information about request resources of the container cluster Pod.
                */
                class CloudResource : public AbstractModel
                {
                public:
                    CloudResource();
                    ~CloudResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Component role name.</p>
                     * @return ComponentName <p>Component role name.</p>
                     * 
                     */
                    std::string GetComponentName() const;

                    /**
                     * 设置<p>Component role name.</p>
                     * @param _componentName <p>Component role name.</p>
                     * 
                     */
                    void SetComponentName(const std::string& _componentName);

                    /**
                     * 判断参数 ComponentName 是否已赋值
                     * @return ComponentName 是否已赋值
                     * 
                     */
                    bool ComponentNameHasBeenSet() const;

                    /**
                     * 获取<p>Number of Pod requests.</p>
                     * @return PodNumber <p>Number of Pod requests.</p>
                     * 
                     */
                    int64_t GetPodNumber() const;

                    /**
                     * 设置<p>Number of Pod requests.</p>
                     * @param _podNumber <p>Number of Pod requests.</p>
                     * 
                     */
                    void SetPodNumber(const int64_t& _podNumber);

                    /**
                     * 判断参数 PodNumber 是否已赋值
                     * @return PodNumber 是否已赋值
                     * 
                     */
                    bool PodNumberHasBeenSet() const;

                    /**
                     * 获取<p>Maximum number of CPU requests.</p>
                     * @return LimitCpu <p>Maximum number of CPU requests.</p>
                     * 
                     */
                    int64_t GetLimitCpu() const;

                    /**
                     * 设置<p>Maximum number of CPU requests.</p>
                     * @param _limitCpu <p>Maximum number of CPU requests.</p>
                     * 
                     */
                    void SetLimitCpu(const int64_t& _limitCpu);

                    /**
                     * 判断参数 LimitCpu 是否已赋值
                     * @return LimitCpu 是否已赋值
                     * 
                     */
                    bool LimitCpuHasBeenSet() const;

                    /**
                     * 获取<p>Maximum number of memory requests.</p>
                     * @return LimitMemory <p>Maximum number of memory requests.</p>
                     * 
                     */
                    int64_t GetLimitMemory() const;

                    /**
                     * 设置<p>Maximum number of memory requests.</p>
                     * @param _limitMemory <p>Maximum number of memory requests.</p>
                     * 
                     */
                    void SetLimitMemory(const int64_t& _limitMemory);

                    /**
                     * 判断参数 LimitMemory 是否已赋值
                     * @return LimitMemory 是否已赋值
                     * 
                     */
                    bool LimitMemoryHasBeenSet() const;

                    /**
                     * 获取<p>Service name, for example, HIVE.</p>
                     * @return Service <p>Service name, for example, HIVE.</p>
                     * 
                     */
                    std::string GetService() const;

                    /**
                     * 设置<p>Service name, for example, HIVE.</p>
                     * @param _service <p>Service name, for example, HIVE.</p>
                     * 
                     */
                    void SetService(const std::string& _service);

                    /**
                     * 判断参数 Service 是否已赋值
                     * @return Service 是否已赋值
                     * 
                     */
                    bool ServiceHasBeenSet() const;

                    /**
                     * 获取<p>Data volume directory settings.</p>
                     * @return VolumeDir <p>Data volume directory settings.</p>
                     * 
                     */
                    VolumeSetting GetVolumeDir() const;

                    /**
                     * 设置<p>Data volume directory settings.</p>
                     * @param _volumeDir <p>Data volume directory settings.</p>
                     * 
                     */
                    void SetVolumeDir(const VolumeSetting& _volumeDir);

                    /**
                     * 判断参数 VolumeDir 是否已赋值
                     * @return VolumeDir 是否已赋值
                     * 
                     */
                    bool VolumeDirHasBeenSet() const;

                    /**
                     * 获取<p>External access settings for the component.</p>
                     * @return ExternalAccess <p>External access settings for the component.</p>
                     * 
                     */
                    ExternalAccess GetExternalAccess() const;

                    /**
                     * 设置<p>External access settings for the component.</p>
                     * @param _externalAccess <p>External access settings for the component.</p>
                     * 
                     */
                    void SetExternalAccess(const ExternalAccess& _externalAccess);

                    /**
                     * 判断参数 ExternalAccess 是否已赋值
                     * @return ExternalAccess 是否已赋值
                     * 
                     */
                    bool ExternalAccessHasBeenSet() const;

                    /**
                     * 获取<p>Node affinity settings.</p>
                     * @return Affinity <p>Node affinity settings.</p>
                     * 
                     */
                    NodeAffinity GetAffinity() const;

                    /**
                     * 设置<p>Node affinity settings.</p>
                     * @param _affinity <p>Node affinity settings.</p>
                     * 
                     */
                    void SetAffinity(const NodeAffinity& _affinity);

                    /**
                     * 判断参数 Affinity 是否已赋值
                     * @return Affinity 是否已赋值
                     * 
                     */
                    bool AffinityHasBeenSet() const;

                    /**
                     * 获取<p>Selected data disk information.</p>
                     * @return Disks <p>Selected data disk information.</p>
                     * 
                     */
                    std::vector<Disk> GetDisks() const;

                    /**
                     * 设置<p>Selected data disk information.</p>
                     * @param _disks <p>Selected data disk information.</p>
                     * 
                     */
                    void SetDisks(const std::vector<Disk>& _disks);

                    /**
                     * 判断参数 Disks 是否已赋值
                     * @return Disks 是否已赋值
                     * 
                     */
                    bool DisksHasBeenSet() const;

                    /**
                     * 获取<p>Toleration.</p>
                     * @return Tolerations <p>Toleration.</p>
                     * 
                     */
                    std::vector<Toleration> GetTolerations() const;

                    /**
                     * 设置<p>Toleration.</p>
                     * @param _tolerations <p>Toleration.</p>
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
                     * 获取<p>Pod affinity.</p>
                     * @return PodAffinity <p>Pod affinity.</p>
                     * 
                     */
                    PodAffinitySpec GetPodAffinity() const;

                    /**
                     * 设置<p>Pod affinity.</p>
                     * @param _podAffinity <p>Pod affinity.</p>
                     * 
                     */
                    void SetPodAffinity(const PodAffinitySpec& _podAffinity);

                    /**
                     * 判断参数 PodAffinity 是否已赋值
                     * @return PodAffinity 是否已赋值
                     * 
                     */
                    bool PodAffinityHasBeenSet() const;

                    /**
                     * 获取<p>Pod anti-affinity.</p>
                     * @return PodAntiAffinity <p>Pod anti-affinity.</p>
                     * 
                     */
                    PodAffinitySpec GetPodAntiAffinity() const;

                    /**
                     * 设置<p>Pod anti-affinity.</p>
                     * @param _podAntiAffinity <p>Pod anti-affinity.</p>
                     * 
                     */
                    void SetPodAntiAffinity(const PodAffinitySpec& _podAntiAffinity);

                    /**
                     * 判断参数 PodAntiAffinity 是否已赋值
                     * @return PodAntiAffinity 是否已赋值
                     * 
                     */
                    bool PodAntiAffinityHasBeenSet() const;

                    /**
                     * 获取<p>Topology distribution constraint.</p>
                     * @return TopologySpreadConstraints <p>Topology distribution constraint.</p>
                     * 
                     */
                    std::vector<TopologySpreadConstraint> GetTopologySpreadConstraints() const;

                    /**
                     * 设置<p>Topology distribution constraint.</p>
                     * @param _topologySpreadConstraints <p>Topology distribution constraint.</p>
                     * 
                     */
                    void SetTopologySpreadConstraints(const std::vector<TopologySpreadConstraint>& _topologySpreadConstraints);

                    /**
                     * 判断参数 TopologySpreadConstraints 是否已赋值
                     * @return TopologySpreadConstraints 是否已赋值
                     * 
                     */
                    bool TopologySpreadConstraintsHasBeenSet() const;

                    /**
                     * 获取<p>Pod tag.</p>
                     * @return PodLabels <p>Pod tag.</p>
                     * 
                     */
                    std::vector<StringMap> GetPodLabels() const;

                    /**
                     * 设置<p>Pod tag.</p>
                     * @param _podLabels <p>Pod tag.</p>
                     * 
                     */
                    void SetPodLabels(const std::vector<StringMap>& _podLabels);

                    /**
                     * 判断参数 PodLabels 是否已赋值
                     * @return PodLabels 是否已赋值
                     * 
                     */
                    bool PodLabelsHasBeenSet() const;

                    /**
                     * 获取<p>Whether the default Ray cluster is created.</p>
                     * @return EnableDefaultRayCluster <p>Whether the default Ray cluster is created.</p>
                     * 
                     */
                    bool GetEnableDefaultRayCluster() const;

                    /**
                     * 设置<p>Whether the default Ray cluster is created.</p>
                     * @param _enableDefaultRayCluster <p>Whether the default Ray cluster is created.</p>
                     * 
                     */
                    void SetEnableDefaultRayCluster(const bool& _enableDefaultRayCluster);

                    /**
                     * 判断参数 EnableDefaultRayCluster 是否已赋值
                     * @return EnableDefaultRayCluster 是否已赋值
                     * 
                     */
                    bool EnableDefaultRayClusterHasBeenSet() const;

                    /**
                     * 获取<p>Custom image.</p>
                     * @return ImageInfoV2 <p>Custom image.</p>
                     * 
                     */
                    ImageInfoV2 GetImageInfoV2() const;

                    /**
                     * 设置<p>Custom image.</p>
                     * @param _imageInfoV2 <p>Custom image.</p>
                     * 
                     */
                    void SetImageInfoV2(const ImageInfoV2& _imageInfoV2);

                    /**
                     * 判断参数 ImageInfoV2 是否已赋值
                     * @return ImageInfoV2 是否已赋值
                     * 
                     */
                    bool ImageInfoV2HasBeenSet() const;

                    /**
                     * 获取<p>Specifies the dynamic instance parameter to be created.</p>
                     * @return DynamicInstanceForm <p>Specifies the dynamic instance parameter to be created.</p>
                     * 
                     */
                    DynamicInstanceForm GetDynamicInstanceForm() const;

                    /**
                     * 设置<p>Specifies the dynamic instance parameter to be created.</p>
                     * @param _dynamicInstanceForm <p>Specifies the dynamic instance parameter to be created.</p>
                     * 
                     */
                    void SetDynamicInstanceForm(const DynamicInstanceForm& _dynamicInstanceForm);

                    /**
                     * 判断参数 DynamicInstanceForm 是否已赋值
                     * @return DynamicInstanceForm 是否已赋值
                     * 
                     */
                    bool DynamicInstanceFormHasBeenSet() const;

                private:

                    /**
                     * <p>Component role name.</p>
                     */
                    std::string m_componentName;
                    bool m_componentNameHasBeenSet;

                    /**
                     * <p>Number of Pod requests.</p>
                     */
                    int64_t m_podNumber;
                    bool m_podNumberHasBeenSet;

                    /**
                     * <p>Maximum number of CPU requests.</p>
                     */
                    int64_t m_limitCpu;
                    bool m_limitCpuHasBeenSet;

                    /**
                     * <p>Maximum number of memory requests.</p>
                     */
                    int64_t m_limitMemory;
                    bool m_limitMemoryHasBeenSet;

                    /**
                     * <p>Service name, for example, HIVE.</p>
                     */
                    std::string m_service;
                    bool m_serviceHasBeenSet;

                    /**
                     * <p>Data volume directory settings.</p>
                     */
                    VolumeSetting m_volumeDir;
                    bool m_volumeDirHasBeenSet;

                    /**
                     * <p>External access settings for the component.</p>
                     */
                    ExternalAccess m_externalAccess;
                    bool m_externalAccessHasBeenSet;

                    /**
                     * <p>Node affinity settings.</p>
                     */
                    NodeAffinity m_affinity;
                    bool m_affinityHasBeenSet;

                    /**
                     * <p>Selected data disk information.</p>
                     */
                    std::vector<Disk> m_disks;
                    bool m_disksHasBeenSet;

                    /**
                     * <p>Toleration.</p>
                     */
                    std::vector<Toleration> m_tolerations;
                    bool m_tolerationsHasBeenSet;

                    /**
                     * <p>Pod affinity.</p>
                     */
                    PodAffinitySpec m_podAffinity;
                    bool m_podAffinityHasBeenSet;

                    /**
                     * <p>Pod anti-affinity.</p>
                     */
                    PodAffinitySpec m_podAntiAffinity;
                    bool m_podAntiAffinityHasBeenSet;

                    /**
                     * <p>Topology distribution constraint.</p>
                     */
                    std::vector<TopologySpreadConstraint> m_topologySpreadConstraints;
                    bool m_topologySpreadConstraintsHasBeenSet;

                    /**
                     * <p>Pod tag.</p>
                     */
                    std::vector<StringMap> m_podLabels;
                    bool m_podLabelsHasBeenSet;

                    /**
                     * <p>Whether the default Ray cluster is created.</p>
                     */
                    bool m_enableDefaultRayCluster;
                    bool m_enableDefaultRayClusterHasBeenSet;

                    /**
                     * <p>Custom image.</p>
                     */
                    ImageInfoV2 m_imageInfoV2;
                    bool m_imageInfoV2HasBeenSet;

                    /**
                     * <p>Specifies the dynamic instance parameter to be created.</p>
                     */
                    DynamicInstanceForm m_dynamicInstanceForm;
                    bool m_dynamicInstanceFormHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_CLOUDRESOURCE_H_
