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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_NODEPOOL_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_NODEPOOL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/Label.h>
#include <tencentcloud/tke/v20180525/model/Taint.h>
#include <tencentcloud/tke/v20180525/model/AnnotationValue.h>
#include <tencentcloud/tke/v20180525/model/NodeCountSummary.h>
#include <tencentcloud/tke/v20180525/model/RuntimeConfig.h>
#include <tencentcloud/tke/v20180525/model/Tag.h>
#include <tencentcloud/tke/v20180525/model/InstanceExtraArgs.h>
#include <tencentcloud/tke/v20180525/model/GPUArgs.h>
#include <tencentcloud/tke/v20180525/model/DataDisk.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * Node pool description
                */
                class NodePool : public AbstractModel
                {
                public:
                    NodePool();
                    ~NodePool() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Node pool ID
                     * @return NodePoolId Node pool ID
                     * 
                     */
                    std::string GetNodePoolId() const;

                    /**
                     * 设置Node pool ID
                     * @param _nodePoolId Node pool ID
                     * 
                     */
                    void SetNodePoolId(const std::string& _nodePoolId);

                    /**
                     * 判断参数 NodePoolId 是否已赋值
                     * @return NodePoolId 是否已赋值
                     * 
                     */
                    bool NodePoolIdHasBeenSet() const;

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
                     * 获取Cluster instance ID
                     * @return ClusterInstanceId Cluster instance ID
                     * 
                     */
                    std::string GetClusterInstanceId() const;

                    /**
                     * 设置Cluster instance ID
                     * @param _clusterInstanceId Cluster instance ID
                     * 
                     */
                    void SetClusterInstanceId(const std::string& _clusterInstanceId);

                    /**
                     * 判断参数 ClusterInstanceId 是否已赋值
                     * @return ClusterInstanceId 是否已赋值
                     * 
                     */
                    bool ClusterInstanceIdHasBeenSet() const;

                    /**
                     * 获取The lifecycle state of the current node pool. Valid values: `creating`, `normal`, `updating`, `deleting`, and `deleted`.
                     * @return LifeState The lifecycle state of the current node pool. Valid values: `creating`, `normal`, `updating`, `deleting`, and `deleted`.
                     * 
                     */
                    std::string GetLifeState() const;

                    /**
                     * 设置The lifecycle state of the current node pool. Valid values: `creating`, `normal`, `updating`, `deleting`, and `deleted`.
                     * @param _lifeState The lifecycle state of the current node pool. Valid values: `creating`, `normal`, `updating`, `deleting`, and `deleted`.
                     * 
                     */
                    void SetLifeState(const std::string& _lifeState);

                    /**
                     * 判断参数 LifeState 是否已赋值
                     * @return LifeState 是否已赋值
                     * 
                     */
                    bool LifeStateHasBeenSet() const;

                    /**
                     * 获取Launch configuration ID
                     * @return LaunchConfigurationId Launch configuration ID
                     * 
                     */
                    std::string GetLaunchConfigurationId() const;

                    /**
                     * 设置Launch configuration ID
                     * @param _launchConfigurationId Launch configuration ID
                     * 
                     */
                    void SetLaunchConfigurationId(const std::string& _launchConfigurationId);

                    /**
                     * 判断参数 LaunchConfigurationId 是否已赋值
                     * @return LaunchConfigurationId 是否已赋值
                     * 
                     */
                    bool LaunchConfigurationIdHasBeenSet() const;

                    /**
                     * 获取Auto-scaling group ID
                     * @return AutoscalingGroupId Auto-scaling group ID
                     * 
                     */
                    std::string GetAutoscalingGroupId() const;

                    /**
                     * 设置Auto-scaling group ID
                     * @param _autoscalingGroupId Auto-scaling group ID
                     * 
                     */
                    void SetAutoscalingGroupId(const std::string& _autoscalingGroupId);

                    /**
                     * 判断参数 AutoscalingGroupId 是否已赋值
                     * @return AutoscalingGroupId 是否已赋值
                     * 
                     */
                    bool AutoscalingGroupIdHasBeenSet() const;

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
                     * 获取Array of taint
                     * @return Taints Array of taint
                     * 
                     */
                    std::vector<Taint> GetTaints() const;

                    /**
                     * 设置Array of taint
                     * @param _taints Array of taint
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
                     * 获取Node list
                     * @return NodeCountSummary Node list
                     * 
                     */
                    NodeCountSummary GetNodeCountSummary() const;

                    /**
                     * 设置Node list
                     * @param _nodeCountSummary Node list
                     * 
                     */
                    void SetNodeCountSummary(const NodeCountSummary& _nodeCountSummary);

                    /**
                     * 判断参数 NodeCountSummary 是否已赋值
                     * @return NodeCountSummary 是否已赋值
                     * 
                     */
                    bool NodeCountSummaryHasBeenSet() const;

                    /**
                     * 获取
                     * @return AutoscalingGroupStatus 
                     * 
                     */
                    std::string GetAutoscalingGroupStatus() const;

                    /**
                     * 设置
                     * @param _autoscalingGroupStatus 
                     * 
                     */
                    void SetAutoscalingGroupStatus(const std::string& _autoscalingGroupStatus);

                    /**
                     * 判断参数 AutoscalingGroupStatus 是否已赋值
                     * @return AutoscalingGroupStatus 是否已赋值
                     * 
                     */
                    bool AutoscalingGroupStatusHasBeenSet() const;

                    /**
                     * 获取Maximum number of nodes
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return MaxNodesNum Maximum number of nodes
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    int64_t GetMaxNodesNum() const;

                    /**
                     * 设置Maximum number of nodes
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _maxNodesNum Maximum number of nodes
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    void SetMaxNodesNum(const int64_t& _maxNodesNum);

                    /**
                     * 判断参数 MaxNodesNum 是否已赋值
                     * @return MaxNodesNum 是否已赋值
                     * 
                     */
                    bool MaxNodesNumHasBeenSet() const;

                    /**
                     * 获取Minimum number of nodes
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return MinNodesNum Minimum number of nodes
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    int64_t GetMinNodesNum() const;

                    /**
                     * 设置Minimum number of nodes
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _minNodesNum Minimum number of nodes
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    void SetMinNodesNum(const int64_t& _minNodesNum);

                    /**
                     * 判断参数 MinNodesNum 是否已赋值
                     * @return MinNodesNum 是否已赋值
                     * 
                     */
                    bool MinNodesNumHasBeenSet() const;

                    /**
                     * 获取Desired number of nodes
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return DesiredNodesNum Desired number of nodes
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    int64_t GetDesiredNodesNum() const;

                    /**
                     * 设置Desired number of nodes
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _desiredNodesNum Desired number of nodes
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    void SetDesiredNodesNum(const int64_t& _desiredNodesNum);

                    /**
                     * 判断参数 DesiredNodesNum 是否已赋值
                     * @return DesiredNodesNum 是否已赋值
                     * 
                     */
                    bool DesiredNodesNumHasBeenSet() const;

                    /**
                     * 获取Runtime Description
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return RuntimeConfig Runtime Description
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    RuntimeConfig GetRuntimeConfig() const;

                    /**
                     * 设置Runtime Description
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _runtimeConfig Runtime Description
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRuntimeConfig(const RuntimeConfig& _runtimeConfig);

                    /**
                     * 判断参数 RuntimeConfig 是否已赋值
                     * @return RuntimeConfig 是否已赋值
                     * 
                     */
                    bool RuntimeConfigHasBeenSet() const;

                    /**
                     * 获取The operating system of the node pool
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return NodePoolOs The operating system of the node pool
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetNodePoolOs() const;

                    /**
                     * 设置The operating system of the node pool
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _nodePoolOs The operating system of the node pool
Note: this field may return `null`, indicating that no valid value is obtained.
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
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return OsCustomizeType Container image tag, `DOCKER_CUSTOMIZE` (container customized tag), `GENERAL` (general tag, default value)
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetOsCustomizeType() const;

                    /**
                     * 设置Container image tag, `DOCKER_CUSTOMIZE` (container customized tag), `GENERAL` (general tag, default value)
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _osCustomizeType Container image tag, `DOCKER_CUSTOMIZE` (container customized tag), `GENERAL` (general tag, default value)
Note: this field may return `null`, indicating that no valid value is obtained.
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
                     * 获取Image ID
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return ImageId Image ID
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置Image ID
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _imageId Image ID
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取This parameter is required when the custom PodCIDR mode is enabled for the cluster.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return DesiredPodNum This parameter is required when the custom PodCIDR mode is enabled for the cluster.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    int64_t GetDesiredPodNum() const;

                    /**
                     * 设置This parameter is required when the custom PodCIDR mode is enabled for the cluster.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _desiredPodNum This parameter is required when the custom PodCIDR mode is enabled for the cluster.
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    void SetDesiredPodNum(const int64_t& _desiredPodNum);

                    /**
                     * 判断参数 DesiredPodNum 是否已赋值
                     * @return DesiredPodNum 是否已赋值
                     * 
                     */
                    bool DesiredPodNumHasBeenSet() const;

                    /**
                     * 获取Custom script
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return UserScript Custom script
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetUserScript() const;

                    /**
                     * 设置Custom script
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _userScript Custom script
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    void SetUserScript(const std::string& _userScript);

                    /**
                     * 判断参数 UserScript 是否已赋值
                     * @return UserScript 是否已赋值
                     * 
                     */
                    bool UserScriptHasBeenSet() const;

                    /**
                     * 获取Resource tag
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Tags Resource tag
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Resource tag
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _tags Resource tag
Note: this field may return `null`, indicating that no valid values can be obtained.
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
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return DeletionProtection Whether Deletion Protection is enabled
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetDeletionProtection() const;

                    /**
                     * 设置Whether Deletion Protection is enabled
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _deletionProtection Whether Deletion Protection is enabled
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDeletionProtection(const bool& _deletionProtection);

                    /**
                     * 判断参数 DeletionProtection 是否已赋值
                     * @return DeletionProtection 是否已赋值
                     * 
                     */
                    bool DeletionProtectionHasBeenSet() const;

                    /**
                     * 获取Node Configuration

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return ExtraArgs Node Configuration

Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    InstanceExtraArgs GetExtraArgs() const;

                    /**
                     * 设置Node Configuration

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _extraArgs Node Configuration

Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetExtraArgs(const InstanceExtraArgs& _extraArgs);

                    /**
                     * 判断参数 ExtraArgs 是否已赋值
                     * @return ExtraArgs 是否已赋值
                     * 
                     */
                    bool ExtraArgsHasBeenSet() const;

                    /**
                     * 获取GPU Driver-related Parameters
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return GPUArgs GPU Driver-related Parameters
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    GPUArgs GetGPUArgs() const;

                    /**
                     * 设置GPU Driver-related Parameters
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _gPUArgs GPU Driver-related Parameters
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetGPUArgs(const GPUArgs& _gPUArgs);

                    /**
                     * 判断参数 GPUArgs 是否已赋值
                     * @return GPUArgs 是否已赋值
                     * 
                     */
                    bool GPUArgsHasBeenSet() const;

                    /**
                     * 获取Specified value of dockerd --graph. Default value: /var/lib/docker

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return DockerGraphPath Specified value of dockerd --graph. Default value: /var/lib/docker

Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetDockerGraphPath() const;

                    /**
                     * 设置Specified value of dockerd --graph. Default value: /var/lib/docker

Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _dockerGraphPath Specified value of dockerd --graph. Default value: /var/lib/docker

Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDockerGraphPath(const std::string& _dockerGraphPath);

                    /**
                     * 判断参数 DockerGraphPath 是否已赋值
                     * @return DockerGraphPath 是否已赋值
                     * 
                     */
                    bool DockerGraphPathHasBeenSet() const;

                    /**
                     * 获取Multiple Disk Data Disk Mount Information: When creating a new node, make sure that the CVM purchase parameters include the information of purchasing multiple data disks. For example, in the DataDisks under RunInstancesPara of CreateClusterInstances API, it must also be set to purchase multiple data disks. Refer to the example of adding cluster nodes (multiple data disks) of CreateClusterInstances API; when adding existing nodes, ensure that the specified partition information actually exists on the node.
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return DataDisks Multiple Disk Data Disk Mount Information: When creating a new node, make sure that the CVM purchase parameters include the information of purchasing multiple data disks. For example, in the DataDisks under RunInstancesPara of CreateClusterInstances API, it must also be set to purchase multiple data disks. Refer to the example of adding cluster nodes (multiple data disks) of CreateClusterInstances API; when adding existing nodes, ensure that the specified partition information actually exists on the node.
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<DataDisk> GetDataDisks() const;

                    /**
                     * 设置Multiple Disk Data Disk Mount Information: When creating a new node, make sure that the CVM purchase parameters include the information of purchasing multiple data disks. For example, in the DataDisks under RunInstancesPara of CreateClusterInstances API, it must also be set to purchase multiple data disks. Refer to the example of adding cluster nodes (multiple data disks) of CreateClusterInstances API; when adding existing nodes, ensure that the specified partition information actually exists on the node.
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _dataDisks Multiple Disk Data Disk Mount Information: When creating a new node, make sure that the CVM purchase parameters include the information of purchasing multiple data disks. For example, in the DataDisks under RunInstancesPara of CreateClusterInstances API, it must also be set to purchase multiple data disks. Refer to the example of adding cluster nodes (multiple data disks) of CreateClusterInstances API; when adding existing nodes, ensure that the specified partition information actually exists on the node.
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDataDisks(const std::vector<DataDisk>& _dataDisks);

                    /**
                     * 判断参数 DataDisks 是否已赋值
                     * @return DataDisks 是否已赋值
                     * 
                     */
                    bool DataDisksHasBeenSet() const;

                    /**
                     * 获取Unschedulable or not
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return Unschedulable Unschedulable or not
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetUnschedulable() const;

                    /**
                     * 设置Unschedulable or not
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _unschedulable Unschedulable or not
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetUnschedulable(const int64_t& _unschedulable);

                    /**
                     * 判断参数 Unschedulable 是否已赋值
                     * @return Unschedulable 是否已赋值
                     * 
                     */
                    bool UnschedulableHasBeenSet() const;

                    /**
                     * 获取Custom script, executed before UserScript
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return PreStartUserScript Custom script, executed before UserScript
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetPreStartUserScript() const;

                    /**
                     * 设置Custom script, executed before UserScript
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _preStartUserScript Custom script, executed before UserScript
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetPreStartUserScript(const std::string& _preStartUserScript);

                    /**
                     * 判断参数 PreStartUserScript 是否已赋值
                     * @return PreStartUserScript 是否已赋值
                     * 
                     */
                    bool PreStartUserScriptHasBeenSet() const;

                private:

                    /**
                     * Node pool ID
                     */
                    std::string m_nodePoolId;
                    bool m_nodePoolIdHasBeenSet;

                    /**
                     * Node pool name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Cluster instance ID
                     */
                    std::string m_clusterInstanceId;
                    bool m_clusterInstanceIdHasBeenSet;

                    /**
                     * The lifecycle state of the current node pool. Valid values: `creating`, `normal`, `updating`, `deleting`, and `deleted`.
                     */
                    std::string m_lifeState;
                    bool m_lifeStateHasBeenSet;

                    /**
                     * Launch configuration ID
                     */
                    std::string m_launchConfigurationId;
                    bool m_launchConfigurationIdHasBeenSet;

                    /**
                     * Auto-scaling group ID
                     */
                    std::string m_autoscalingGroupId;
                    bool m_autoscalingGroupIdHasBeenSet;

                    /**
                     * Labels
                     */
                    std::vector<Label> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * Array of taint
                     */
                    std::vector<Taint> m_taints;
                    bool m_taintsHasBeenSet;

                    /**
                     * Node Annotation List
                     */
                    std::vector<AnnotationValue> m_annotations;
                    bool m_annotationsHasBeenSet;

                    /**
                     * Node list
                     */
                    NodeCountSummary m_nodeCountSummary;
                    bool m_nodeCountSummaryHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_autoscalingGroupStatus;
                    bool m_autoscalingGroupStatusHasBeenSet;

                    /**
                     * Maximum number of nodes
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    int64_t m_maxNodesNum;
                    bool m_maxNodesNumHasBeenSet;

                    /**
                     * Minimum number of nodes
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    int64_t m_minNodesNum;
                    bool m_minNodesNumHasBeenSet;

                    /**
                     * Desired number of nodes
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    int64_t m_desiredNodesNum;
                    bool m_desiredNodesNumHasBeenSet;

                    /**
                     * Runtime Description
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    RuntimeConfig m_runtimeConfig;
                    bool m_runtimeConfigHasBeenSet;

                    /**
                     * The operating system of the node pool
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_nodePoolOs;
                    bool m_nodePoolOsHasBeenSet;

                    /**
                     * Container image tag, `DOCKER_CUSTOMIZE` (container customized tag), `GENERAL` (general tag, default value)
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_osCustomizeType;
                    bool m_osCustomizeTypeHasBeenSet;

                    /**
                     * Image ID
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * This parameter is required when the custom PodCIDR mode is enabled for the cluster.
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    int64_t m_desiredPodNum;
                    bool m_desiredPodNumHasBeenSet;

                    /**
                     * Custom script
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_userScript;
                    bool m_userScriptHasBeenSet;

                    /**
                     * Resource tag
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Whether Deletion Protection is enabled
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool m_deletionProtection;
                    bool m_deletionProtectionHasBeenSet;

                    /**
                     * Node Configuration

Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    InstanceExtraArgs m_extraArgs;
                    bool m_extraArgsHasBeenSet;

                    /**
                     * GPU Driver-related Parameters
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    GPUArgs m_gPUArgs;
                    bool m_gPUArgsHasBeenSet;

                    /**
                     * Specified value of dockerd --graph. Default value: /var/lib/docker

Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_dockerGraphPath;
                    bool m_dockerGraphPathHasBeenSet;

                    /**
                     * Multiple Disk Data Disk Mount Information: When creating a new node, make sure that the CVM purchase parameters include the information of purchasing multiple data disks. For example, in the DataDisks under RunInstancesPara of CreateClusterInstances API, it must also be set to purchase multiple data disks. Refer to the example of adding cluster nodes (multiple data disks) of CreateClusterInstances API; when adding existing nodes, ensure that the specified partition information actually exists on the node.
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::vector<DataDisk> m_dataDisks;
                    bool m_dataDisksHasBeenSet;

                    /**
                     * Unschedulable or not
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    int64_t m_unschedulable;
                    bool m_unschedulableHasBeenSet;

                    /**
                     * Custom script, executed before UserScript
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    std::string m_preStartUserScript;
                    bool m_preStartUserScriptHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_NODEPOOL_H_
