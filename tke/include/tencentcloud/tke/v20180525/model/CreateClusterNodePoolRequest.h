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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CREATECLUSTERNODEPOOLREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CREATECLUSTERNODEPOOLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/InstanceAdvancedSettings.h>
#include <tencentcloud/tke/v20180525/model/Label.h>
#include <tencentcloud/tke/v20180525/model/Taint.h>
#include <tencentcloud/tke/v20180525/model/AnnotationValue.h>
#include <tencentcloud/tke/v20180525/model/Tag.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * CreateClusterNodePool request structure.
                */
                class CreateClusterNodePoolRequest : public AbstractModel
                {
                public:
                    CreateClusterNodePoolRequest();
                    ~CreateClusterNodePoolRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param _clusterId Cluster ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取AS group parameters. For details, see https://intl.cloud.tencent.com/document/product/377/20440?from_cn_redirect=1
                     * @return AutoScalingGroupPara AS group parameters. For details, see https://intl.cloud.tencent.com/document/product/377/20440?from_cn_redirect=1
                     * 
                     */
                    std::string GetAutoScalingGroupPara() const;

                    /**
                     * 设置AS group parameters. For details, see https://intl.cloud.tencent.com/document/product/377/20440?from_cn_redirect=1
                     * @param _autoScalingGroupPara AS group parameters. For details, see https://intl.cloud.tencent.com/document/product/377/20440?from_cn_redirect=1
                     * 
                     */
                    void SetAutoScalingGroupPara(const std::string& _autoScalingGroupPara);

                    /**
                     * 判断参数 AutoScalingGroupPara 是否已赋值
                     * @return AutoScalingGroupPara 是否已赋值
                     * 
                     */
                    bool AutoScalingGroupParaHasBeenSet() const;

                    /**
                     * 获取Running parameters. For details, see https://intl.cloud.tencent.com/document/product/377/20447?from_cn_redirect=1
                     * @return LaunchConfigurePara Running parameters. For details, see https://intl.cloud.tencent.com/document/product/377/20447?from_cn_redirect=1
                     * 
                     */
                    std::string GetLaunchConfigurePara() const;

                    /**
                     * 设置Running parameters. For details, see https://intl.cloud.tencent.com/document/product/377/20447?from_cn_redirect=1
                     * @param _launchConfigurePara Running parameters. For details, see https://intl.cloud.tencent.com/document/product/377/20447?from_cn_redirect=1
                     * 
                     */
                    void SetLaunchConfigurePara(const std::string& _launchConfigurePara);

                    /**
                     * 判断参数 LaunchConfigurePara 是否已赋值
                     * @return LaunchConfigurePara 是否已赋值
                     * 
                     */
                    bool LaunchConfigureParaHasBeenSet() const;

                    /**
                     * 获取InstanceAdvancedSettings
                     * @return InstanceAdvancedSettings InstanceAdvancedSettings
                     * 
                     */
                    InstanceAdvancedSettings GetInstanceAdvancedSettings() const;

                    /**
                     * 设置InstanceAdvancedSettings
                     * @param _instanceAdvancedSettings InstanceAdvancedSettings
                     * 
                     */
                    void SetInstanceAdvancedSettings(const InstanceAdvancedSettings& _instanceAdvancedSettings);

                    /**
                     * 判断参数 InstanceAdvancedSettings 是否已赋值
                     * @return InstanceAdvancedSettings 是否已赋值
                     * 
                     */
                    bool InstanceAdvancedSettingsHasBeenSet() const;

                    /**
                     * 获取Indicates whether to enable auto scaling
                     * @return EnableAutoscale Indicates whether to enable auto scaling
                     * 
                     */
                    bool GetEnableAutoscale() const;

                    /**
                     * 设置Indicates whether to enable auto scaling
                     * @param _enableAutoscale Indicates whether to enable auto scaling
                     * 
                     */
                    void SetEnableAutoscale(const bool& _enableAutoscale);

                    /**
                     * 判断参数 EnableAutoscale 是否已赋值
                     * @return EnableAutoscale 是否已赋值
                     * 
                     */
                    bool EnableAutoscaleHasBeenSet() const;

                    /**
                     * 获取Node pool name
                     * @return Name Node pool name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Node pool name
                     * @param _name Node pool name
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
                     * 获取Labels
                     * @return Labels Labels
                     * 
                     */
                    std::vector<Label> GetLabels() const;

                    /**
                     * 设置Labels
                     * @param _labels Labels
                     * 
                     */
                    void SetLabels(const std::vector<Label>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取Taints
                     * @return Taints Taints
                     * 
                     */
                    std::vector<Taint> GetTaints() const;

                    /**
                     * 设置Taints
                     * @param _taints Taints
                     * 
                     */
                    void SetTaints(const std::vector<Taint>& _taints);

                    /**
                     * 判断参数 Taints 是否已赋值
                     * @return Taints 是否已赋值
                     * 
                     */
                    bool TaintsHasBeenSet() const;

                    /**
                     * 获取Node Annotation List
                     * @return Annotations Node Annotation List
                     * 
                     */
                    std::vector<AnnotationValue> GetAnnotations() const;

                    /**
                     * 设置Node Annotation List
                     * @param _annotations Node Annotation List
                     * 
                     */
                    void SetAnnotations(const std::vector<AnnotationValue>& _annotations);

                    /**
                     * 判断参数 Annotations 是否已赋值
                     * @return Annotations 是否已赋值
                     * 
                     */
                    bool AnnotationsHasBeenSet() const;

                    /**
                     * 获取Node pool runtime type and version
                     * @return ContainerRuntime Node pool runtime type and version
                     * 
                     */
                    std::string GetContainerRuntime() const;

                    /**
                     * 设置Node pool runtime type and version
                     * @param _containerRuntime Node pool runtime type and version
                     * 
                     */
                    void SetContainerRuntime(const std::string& _containerRuntime);

                    /**
                     * 判断参数 ContainerRuntime 是否已赋值
                     * @return ContainerRuntime 是否已赋值
                     * 
                     */
                    bool ContainerRuntimeHasBeenSet() const;

                    /**
                     * 获取Runtime version
                     * @return RuntimeVersion Runtime version
                     * 
                     */
                    std::string GetRuntimeVersion() const;

                    /**
                     * 设置Runtime version
                     * @param _runtimeVersion Runtime version
                     * 
                     */
                    void SetRuntimeVersion(const std::string& _runtimeVersion);

                    /**
                     * 判断参数 RuntimeVersion 是否已赋值
                     * @return RuntimeVersion 是否已赋值
                     * 
                     */
                    bool RuntimeVersionHasBeenSet() const;

                    /**
                     * 获取Node pool operating system (enter the image ID for a custom image, and enter the OS name for a public image)
                     * @return NodePoolOs Node pool operating system (enter the image ID for a custom image, and enter the OS name for a public image)
                     * 
                     */
                    std::string GetNodePoolOs() const;

                    /**
                     * 设置Node pool operating system (enter the image ID for a custom image, and enter the OS name for a public image)
                     * @param _nodePoolOs Node pool operating system (enter the image ID for a custom image, and enter the OS name for a public image)
                     * 
                     */
                    void SetNodePoolOs(const std::string& _nodePoolOs);

                    /**
                     * 判断参数 NodePoolOs 是否已赋值
                     * @return NodePoolOs 是否已赋值
                     * 
                     */
                    bool NodePoolOsHasBeenSet() const;

                    /**
                     * 获取Container image tag, `DOCKER_CUSTOMIZE` (container customized tag), `GENERAL` (general tag, default value)
                     * @return OsCustomizeType Container image tag, `DOCKER_CUSTOMIZE` (container customized tag), `GENERAL` (general tag, default value)
                     * 
                     */
                    std::string GetOsCustomizeType() const;

                    /**
                     * 设置Container image tag, `DOCKER_CUSTOMIZE` (container customized tag), `GENERAL` (general tag, default value)
                     * @param _osCustomizeType Container image tag, `DOCKER_CUSTOMIZE` (container customized tag), `GENERAL` (general tag, default value)
                     * 
                     */
                    void SetOsCustomizeType(const std::string& _osCustomizeType);

                    /**
                     * 判断参数 OsCustomizeType 是否已赋值
                     * @return OsCustomizeType 是否已赋值
                     * 
                     */
                    bool OsCustomizeTypeHasBeenSet() const;

                    /**
                     * 获取Resource tag
                     * @return Tags Resource tag
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Resource tag
                     * @param _tags Resource tag
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Whether Deletion Protection is enabled
                     * @return DeletionProtection Whether Deletion Protection is enabled
                     * 
                     */
                    bool GetDeletionProtection() const;

                    /**
                     * 设置Whether Deletion Protection is enabled
                     * @param _deletionProtection Whether Deletion Protection is enabled
                     * 
                     */
                    void SetDeletionProtection(const bool& _deletionProtection);

                    /**
                     * 判断参数 DeletionProtection 是否已赋值
                     * @return DeletionProtection 是否已赋值
                     * 
                     */
                    bool DeletionProtectionHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * AS group parameters. For details, see https://intl.cloud.tencent.com/document/product/377/20440?from_cn_redirect=1
                     */
                    std::string m_autoScalingGroupPara;
                    bool m_autoScalingGroupParaHasBeenSet;

                    /**
                     * Running parameters. For details, see https://intl.cloud.tencent.com/document/product/377/20447?from_cn_redirect=1
                     */
                    std::string m_launchConfigurePara;
                    bool m_launchConfigureParaHasBeenSet;

                    /**
                     * InstanceAdvancedSettings
                     */
                    InstanceAdvancedSettings m_instanceAdvancedSettings;
                    bool m_instanceAdvancedSettingsHasBeenSet;

                    /**
                     * Indicates whether to enable auto scaling
                     */
                    bool m_enableAutoscale;
                    bool m_enableAutoscaleHasBeenSet;

                    /**
                     * Node pool name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Labels
                     */
                    std::vector<Label> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * Taints
                     */
                    std::vector<Taint> m_taints;
                    bool m_taintsHasBeenSet;

                    /**
                     * Node Annotation List
                     */
                    std::vector<AnnotationValue> m_annotations;
                    bool m_annotationsHasBeenSet;

                    /**
                     * Node pool runtime type and version
                     */
                    std::string m_containerRuntime;
                    bool m_containerRuntimeHasBeenSet;

                    /**
                     * Runtime version
                     */
                    std::string m_runtimeVersion;
                    bool m_runtimeVersionHasBeenSet;

                    /**
                     * Node pool operating system (enter the image ID for a custom image, and enter the OS name for a public image)
                     */
                    std::string m_nodePoolOs;
                    bool m_nodePoolOsHasBeenSet;

                    /**
                     * Container image tag, `DOCKER_CUSTOMIZE` (container customized tag), `GENERAL` (general tag, default value)
                     */
                    std::string m_osCustomizeType;
                    bool m_osCustomizeTypeHasBeenSet;

                    /**
                     * Resource tag
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Whether Deletion Protection is enabled
                     */
                    bool m_deletionProtection;
                    bool m_deletionProtectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CREATECLUSTERNODEPOOLREQUEST_H_
