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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_SCALEOUTINSTANCEREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_SCALEOUTINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/PreExecuteFileSettings.h>
#include <tencentcloud/emr/v20190103/model/Tag.h>
#include <tencentcloud/emr/v20190103/model/PodSpec.h>
#include <tencentcloud/emr/v20190103/model/PodParameter.h>
#include <tencentcloud/emr/v20190103/model/ComputeResourceAdvanceParams.h>
#include <tencentcloud/emr/v20190103/model/NodeMark.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * ScaleOutInstance request structure.
                */
                class ScaleOutInstanceRequest : public AbstractModel
                {
                public:
                    ScaleOutInstanceRequest();
                    ~ScaleOutInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Time unit of scale-out. Valid values:
<li>s: Second. When `PayMode` is 0, `TimeUnit` can only be `s`.</li>
<li>m: Month. When `PayMode` is 1, `TimeUnit` can only be `m`.</li>
                     * @return TimeUnit Time unit of scale-out. Valid values:
<li>s: Second. When `PayMode` is 0, `TimeUnit` can only be `s`.</li>
<li>m: Month. When `PayMode` is 1, `TimeUnit` can only be `m`.</li>
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置Time unit of scale-out. Valid values:
<li>s: Second. When `PayMode` is 0, `TimeUnit` can only be `s`.</li>
<li>m: Month. When `PayMode` is 1, `TimeUnit` can only be `m`.</li>
                     * @param _timeUnit Time unit of scale-out. Valid values:
<li>s: Second. When `PayMode` is 0, `TimeUnit` can only be `s`.</li>
<li>m: Month. When `PayMode` is 1, `TimeUnit` can only be `m`.</li>
                     * 
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     * 
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取Time span of scale-out, which needs to be used together with `TimeUnit`.
                     * @return TimeSpan Time span of scale-out, which needs to be used together with `TimeUnit`.
                     * 
                     */
                    uint64_t GetTimeSpan() const;

                    /**
                     * 设置Time span of scale-out, which needs to be used together with `TimeUnit`.
                     * @param _timeSpan Time span of scale-out, which needs to be used together with `TimeUnit`.
                     * 
                     */
                    void SetTimeSpan(const uint64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceId Instance ID.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Instance billing mode. Valid value:
<li>0: Pay-as-you-go.</li>
                     * @return PayMode Instance billing mode. Valid value:
<li>0: Pay-as-you-go.</li>
                     * 
                     */
                    uint64_t GetPayMode() const;

                    /**
                     * 设置Instance billing mode. Valid value:
<li>0: Pay-as-you-go.</li>
                     * @param _payMode Instance billing mode. Valid value:
<li>0: Pay-as-you-go.</li>
                     * 
                     */
                    void SetPayMode(const uint64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Client token.
                     * @return ClientToken Client token.
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置Client token.
                     * @param _clientToken Client token.
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取Bootstrap script settings.
                     * @return PreExecutedFileSettings Bootstrap script settings.
                     * 
                     */
                    std::vector<PreExecuteFileSettings> GetPreExecutedFileSettings() const;

                    /**
                     * 设置Bootstrap script settings.
                     * @param _preExecutedFileSettings Bootstrap script settings.
                     * 
                     */
                    void SetPreExecutedFileSettings(const std::vector<PreExecuteFileSettings>& _preExecutedFileSettings);

                    /**
                     * 判断参数 PreExecutedFileSettings 是否已赋值
                     * @return PreExecutedFileSettings 是否已赋值
                     * 
                     */
                    bool PreExecutedFileSettingsHasBeenSet() const;

                    /**
                     * 获取Number of task nodes to be added.
                     * @return TaskCount Number of task nodes to be added.
                     * 
                     */
                    uint64_t GetTaskCount() const;

                    /**
                     * 设置Number of task nodes to be added.
                     * @param _taskCount Number of task nodes to be added.
                     * 
                     */
                    void SetTaskCount(const uint64_t& _taskCount);

                    /**
                     * 判断参数 TaskCount 是否已赋值
                     * @return TaskCount 是否已赋值
                     * 
                     */
                    bool TaskCountHasBeenSet() const;

                    /**
                     * 获取Number of core nodes to be added.
                     * @return CoreCount Number of core nodes to be added.
                     * 
                     */
                    uint64_t GetCoreCount() const;

                    /**
                     * 设置Number of core nodes to be added.
                     * @param _coreCount Number of core nodes to be added.
                     * 
                     */
                    void SetCoreCount(const uint64_t& _coreCount);

                    /**
                     * 判断参数 CoreCount 是否已赋值
                     * @return CoreCount 是否已赋值
                     * 
                     */
                    bool CoreCountHasBeenSet() const;

                    /**
                     * 获取Processes unnecessary for scale-out.
                     * @return UnNecessaryNodeList Processes unnecessary for scale-out.
                     * 
                     */
                    std::vector<uint64_t> GetUnNecessaryNodeList() const;

                    /**
                     * 设置Processes unnecessary for scale-out.
                     * @param _unNecessaryNodeList Processes unnecessary for scale-out.
                     * 
                     */
                    void SetUnNecessaryNodeList(const std::vector<uint64_t>& _unNecessaryNodeList);

                    /**
                     * 判断参数 UnNecessaryNodeList 是否已赋值
                     * @return UnNecessaryNodeList 是否已赋值
                     * 
                     */
                    bool UnNecessaryNodeListHasBeenSet() const;

                    /**
                     * 获取Number of router nodes to be added.
                     * @return RouterCount Number of router nodes to be added.
                     * 
                     */
                    uint64_t GetRouterCount() const;

                    /**
                     * 设置Number of router nodes to be added.
                     * @param _routerCount Number of router nodes to be added.
                     * 
                     */
                    void SetRouterCount(const uint64_t& _routerCount);

                    /**
                     * 判断参数 RouterCount 是否已赋值
                     * @return RouterCount 是否已赋值
                     * 
                     */
                    bool RouterCountHasBeenSet() const;

                    /**
                     * 获取Deployed service.
<li>`SoftDeployInfo` and `ServiceNodeInfo` are in the same group and mutually exclusive with `UnNecessaryNodeList`.</li>
<li>The combination of `SoftDeployInfo` and `ServiceNodeInfo` is recommended.</li>
                     * @return SoftDeployInfo Deployed service.
<li>`SoftDeployInfo` and `ServiceNodeInfo` are in the same group and mutually exclusive with `UnNecessaryNodeList`.</li>
<li>The combination of `SoftDeployInfo` and `ServiceNodeInfo` is recommended.</li>
                     * 
                     */
                    std::vector<uint64_t> GetSoftDeployInfo() const;

                    /**
                     * 设置Deployed service.
<li>`SoftDeployInfo` and `ServiceNodeInfo` are in the same group and mutually exclusive with `UnNecessaryNodeList`.</li>
<li>The combination of `SoftDeployInfo` and `ServiceNodeInfo` is recommended.</li>
                     * @param _softDeployInfo Deployed service.
<li>`SoftDeployInfo` and `ServiceNodeInfo` are in the same group and mutually exclusive with `UnNecessaryNodeList`.</li>
<li>The combination of `SoftDeployInfo` and `ServiceNodeInfo` is recommended.</li>
                     * 
                     */
                    void SetSoftDeployInfo(const std::vector<uint64_t>& _softDeployInfo);

                    /**
                     * 判断参数 SoftDeployInfo 是否已赋值
                     * @return SoftDeployInfo 是否已赋值
                     * 
                     */
                    bool SoftDeployInfoHasBeenSet() const;

                    /**
                     * 获取Started process.
                     * @return ServiceNodeInfo Started process.
                     * 
                     */
                    std::vector<uint64_t> GetServiceNodeInfo() const;

                    /**
                     * 设置Started process.
                     * @param _serviceNodeInfo Started process.
                     * 
                     */
                    void SetServiceNodeInfo(const std::vector<uint64_t>& _serviceNodeInfo);

                    /**
                     * 判断参数 ServiceNodeInfo 是否已赋值
                     * @return ServiceNodeInfo 是否已赋值
                     * 
                     */
                    bool ServiceNodeInfoHasBeenSet() const;

                    /**
                     * 获取List of spread placement group IDs. Only one can be specified currently.
                     * @return DisasterRecoverGroupIds List of spread placement group IDs. Only one can be specified currently.
                     * 
                     */
                    std::vector<std::string> GetDisasterRecoverGroupIds() const;

                    /**
                     * 设置List of spread placement group IDs. Only one can be specified currently.
                     * @param _disasterRecoverGroupIds List of spread placement group IDs. Only one can be specified currently.
                     * 
                     */
                    void SetDisasterRecoverGroupIds(const std::vector<std::string>& _disasterRecoverGroupIds);

                    /**
                     * 判断参数 DisasterRecoverGroupIds 是否已赋值
                     * @return DisasterRecoverGroupIds 是否已赋值
                     * 
                     */
                    bool DisasterRecoverGroupIdsHasBeenSet() const;

                    /**
                     * 获取List of tags bound to added nodes.
                     * @return Tags List of tags bound to added nodes.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置List of tags bound to added nodes.
                     * @param _tags List of tags bound to added nodes.
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
                     * 获取Resource type selected for scale-out. Valid values: "HOST","POD","MNode", where HOST indicates an ordinary CVM resource, POD indicates a resource provided by the TKE cluster or EKS cluster, and MNode indicates a fully managed resource type.
                     * @return HardwareResourceType Resource type selected for scale-out. Valid values: "HOST","POD","MNode", where HOST indicates an ordinary CVM resource, POD indicates a resource provided by the TKE cluster or EKS cluster, and MNode indicates a fully managed resource type.
                     * 
                     */
                    std::string GetHardwareResourceType() const;

                    /**
                     * 设置Resource type selected for scale-out. Valid values: "HOST","POD","MNode", where HOST indicates an ordinary CVM resource, POD indicates a resource provided by the TKE cluster or EKS cluster, and MNode indicates a fully managed resource type.
                     * @param _hardwareResourceType Resource type selected for scale-out. Valid values: "HOST","POD","MNode", where HOST indicates an ordinary CVM resource, POD indicates a resource provided by the TKE cluster or EKS cluster, and MNode indicates a fully managed resource type.
                     * 
                     */
                    void SetHardwareResourceType(const std::string& _hardwareResourceType);

                    /**
                     * 判断参数 HardwareResourceType 是否已赋值
                     * @return HardwareResourceType 是否已赋值
                     * 
                     */
                    bool HardwareResourceTypeHasBeenSet() const;

                    /**
                     * 获取Specified information such as pod specification and source for scale-out with pod resources.
                     * @return PodSpec Specified information such as pod specification and source for scale-out with pod resources.
                     * 
                     */
                    PodSpec GetPodSpec() const;

                    /**
                     * 设置Specified information such as pod specification and source for scale-out with pod resources.
                     * @param _podSpec Specified information such as pod specification and source for scale-out with pod resources.
                     * 
                     */
                    void SetPodSpec(const PodSpec& _podSpec);

                    /**
                     * 判断参数 PodSpec 是否已赋值
                     * @return PodSpec 是否已赋值
                     * 
                     */
                    bool PodSpecHasBeenSet() const;

                    /**
                     * 获取Server group name selected for ClickHouse cluster scale-out.
                     * @return ClickHouseClusterName Server group name selected for ClickHouse cluster scale-out.
                     * 
                     */
                    std::string GetClickHouseClusterName() const;

                    /**
                     * 设置Server group name selected for ClickHouse cluster scale-out.
                     * @param _clickHouseClusterName Server group name selected for ClickHouse cluster scale-out.
                     * 
                     */
                    void SetClickHouseClusterName(const std::string& _clickHouseClusterName);

                    /**
                     * 判断参数 ClickHouseClusterName 是否已赋值
                     * @return ClickHouseClusterName 是否已赋值
                     * 
                     */
                    bool ClickHouseClusterNameHasBeenSet() const;

                    /**
                     * 获取Server group type selected for ClickHouse cluster scale-out. Valid values: `new` (create a group) and `old` (select an existing group).
                     * @return ClickHouseClusterType Server group type selected for ClickHouse cluster scale-out. Valid values: `new` (create a group) and `old` (select an existing group).
                     * 
                     */
                    std::string GetClickHouseClusterType() const;

                    /**
                     * 设置Server group type selected for ClickHouse cluster scale-out. Valid values: `new` (create a group) and `old` (select an existing group).
                     * @param _clickHouseClusterType Server group type selected for ClickHouse cluster scale-out. Valid values: `new` (create a group) and `old` (select an existing group).
                     * 
                     */
                    void SetClickHouseClusterType(const std::string& _clickHouseClusterType);

                    /**
                     * 判断参数 ClickHouseClusterType 是否已赋值
                     * @return ClickHouseClusterType 是否已赋值
                     * 
                     */
                    bool ClickHouseClusterTypeHasBeenSet() const;

                    /**
                     * 获取Yarn node label specified for rule-based scale-out.
                     * @return YarnNodeLabel Yarn node label specified for rule-based scale-out.
                     * 
                     */
                    std::string GetYarnNodeLabel() const;

                    /**
                     * 设置Yarn node label specified for rule-based scale-out.
                     * @param _yarnNodeLabel Yarn node label specified for rule-based scale-out.
                     * 
                     */
                    void SetYarnNodeLabel(const std::string& _yarnNodeLabel);

                    /**
                     * 判断参数 YarnNodeLabel 是否已赋值
                     * @return YarnNodeLabel 是否已赋值
                     * 
                     */
                    bool YarnNodeLabelHasBeenSet() const;

                    /**
                     * 获取Custom pod permission and parameter
                     * @return PodParameter Custom pod permission and parameter
                     * 
                     */
                    PodParameter GetPodParameter() const;

                    /**
                     * 设置Custom pod permission and parameter
                     * @param _podParameter Custom pod permission and parameter
                     * 
                     */
                    void SetPodParameter(const PodParameter& _podParameter);

                    /**
                     * 判断参数 PodParameter 是否已赋值
                     * @return PodParameter 是否已赋值
                     * 
                     */
                    bool PodParameterHasBeenSet() const;

                    /**
                     * 获取Number of master nodes to be added.
When a ClickHouse cluster is scaled, this parameter does not take effect.
When a Kafka cluster is scaled, this parameter does not take effect.
When `HardwareResourceType` is `pod`, this parameter does not take effect.
                     * @return MasterCount Number of master nodes to be added.
When a ClickHouse cluster is scaled, this parameter does not take effect.
When a Kafka cluster is scaled, this parameter does not take effect.
When `HardwareResourceType` is `pod`, this parameter does not take effect.
                     * 
                     */
                    uint64_t GetMasterCount() const;

                    /**
                     * 设置Number of master nodes to be added.
When a ClickHouse cluster is scaled, this parameter does not take effect.
When a Kafka cluster is scaled, this parameter does not take effect.
When `HardwareResourceType` is `pod`, this parameter does not take effect.
                     * @param _masterCount Number of master nodes to be added.
When a ClickHouse cluster is scaled, this parameter does not take effect.
When a Kafka cluster is scaled, this parameter does not take effect.
When `HardwareResourceType` is `pod`, this parameter does not take effect.
                     * 
                     */
                    void SetMasterCount(const uint64_t& _masterCount);

                    /**
                     * 判断参数 MasterCount 是否已赋值
                     * @return MasterCount 是否已赋值
                     * 
                     */
                    bool MasterCountHasBeenSet() const;

                    /**
                     * 获取Whether to start the service after scale-out. `true`: Yes; `false`: No.
                     * @return StartServiceAfterScaleOut Whether to start the service after scale-out. `true`: Yes; `false`: No.
                     * 
                     */
                    std::string GetStartServiceAfterScaleOut() const;

                    /**
                     * 设置Whether to start the service after scale-out. `true`: Yes; `false`: No.
                     * @param _startServiceAfterScaleOut Whether to start the service after scale-out. `true`: Yes; `false`: No.
                     * 
                     */
                    void SetStartServiceAfterScaleOut(const std::string& _startServiceAfterScaleOut);

                    /**
                     * 判断参数 StartServiceAfterScaleOut 是否已赋值
                     * @return StartServiceAfterScaleOut 是否已赋值
                     * 
                     */
                    bool StartServiceAfterScaleOutHasBeenSet() const;

                    /**
                     * 获取AZ, which defaults to the primary AZ of the cluster.
                     * @return ZoneId AZ, which defaults to the primary AZ of the cluster.
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置AZ, which defaults to the primary AZ of the cluster.
                     * @param _zoneId AZ, which defaults to the primary AZ of the cluster.
                     * 
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Subnet, which defaults to the subnet used when the cluster is created.
                     * @return SubnetId Subnet, which defaults to the subnet used when the cluster is created.
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置Subnet, which defaults to the subnet used when the cluster is created.
                     * @param _subnetId Subnet, which defaults to the subnet used when the cluster is created.
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
                     * 获取Pre-defined configuration set
                     * @return ScaleOutServiceConfAssign Pre-defined configuration set
                     * 
                     */
                    std::string GetScaleOutServiceConfAssign() const;

                    /**
                     * 设置Pre-defined configuration set
                     * @param _scaleOutServiceConfAssign Pre-defined configuration set
                     * 
                     */
                    void SetScaleOutServiceConfAssign(const std::string& _scaleOutServiceConfAssign);

                    /**
                     * 判断参数 ScaleOutServiceConfAssign 是否已赋值
                     * @return ScaleOutServiceConfAssign 是否已赋值
                     * 
                     */
                    bool ScaleOutServiceConfAssignHasBeenSet() const;

                    /**
                     * 获取Whether to enable auto-renewal. Valid values: `0` (no), `1` (yes).
                     * @return AutoRenew Whether to enable auto-renewal. Valid values: `0` (no), `1` (yes).
                     * 
                     */
                    int64_t GetAutoRenew() const;

                    /**
                     * 设置Whether to enable auto-renewal. Valid values: `0` (no), `1` (yes).
                     * @param _autoRenew Whether to enable auto-renewal. Valid values: `0` (no), `1` (yes).
                     * 
                     */
                    void SetAutoRenew(const int64_t& _autoRenew);

                    /**
                     * 判断参数 AutoRenew 是否已赋值
                     * @return AutoRenew 是否已赋值
                     * 
                     */
                    bool AutoRenewHasBeenSet() const;

                    /**
                     * 获取The type can be ComputeResource, EMR, or a default value. The default value is EMR. When the type is EMR, InstanceId is effective. When the type is ComputeResource, ComputeResourceId is used.
                     * @return ResourceBaseType The type can be ComputeResource, EMR, or a default value. The default value is EMR. When the type is EMR, InstanceId is effective. When the type is ComputeResource, ComputeResourceId is used.
                     * 
                     */
                    std::string GetResourceBaseType() const;

                    /**
                     * 设置The type can be ComputeResource, EMR, or a default value. The default value is EMR. When the type is EMR, InstanceId is effective. When the type is ComputeResource, ComputeResourceId is used.
                     * @param _resourceBaseType The type can be ComputeResource, EMR, or a default value. The default value is EMR. When the type is EMR, InstanceId is effective. When the type is ComputeResource, ComputeResourceId is used.
                     * 
                     */
                    void SetResourceBaseType(const std::string& _resourceBaseType);

                    /**
                     * 判断参数 ResourceBaseType 是否已赋值
                     * @return ResourceBaseType 是否已赋值
                     * 
                     */
                    bool ResourceBaseTypeHasBeenSet() const;

                    /**
                     * 获取Computing resource ID.
                     * @return ComputeResourceId Computing resource ID.
                     * 
                     */
                    std::string GetComputeResourceId() const;

                    /**
                     * 设置Computing resource ID.
                     * @param _computeResourceId Computing resource ID.
                     * 
                     */
                    void SetComputeResourceId(const std::string& _computeResourceId);

                    /**
                     * 判断参数 ComputeResourceId 是否已赋值
                     * @return ComputeResourceId 是否已赋值
                     * 
                     */
                    bool ComputeResourceIdHasBeenSet() const;

                    /**
                     * 获取Advanced settings of computing resources.
                     * @return ComputeResourceAdvanceParams Advanced settings of computing resources.
                     * 
                     */
                    ComputeResourceAdvanceParams GetComputeResourceAdvanceParams() const;

                    /**
                     * 设置Advanced settings of computing resources.
                     * @param _computeResourceAdvanceParams Advanced settings of computing resources.
                     * 
                     */
                    void SetComputeResourceAdvanceParams(const ComputeResourceAdvanceParams& _computeResourceAdvanceParams);

                    /**
                     * 判断参数 ComputeResourceAdvanceParams 是否已赋值
                     * @return ComputeResourceAdvanceParams 是否已赋值
                     * 
                     */
                    bool ComputeResourceAdvanceParamsHasBeenSet() const;

                    /**
                     * 获取Node tag information: currently used only in Terraform.
                     * @return NodeMarks Node tag information: currently used only in Terraform.
                     * 
                     */
                    NodeMark GetNodeMarks() const;

                    /**
                     * 设置Node tag information: currently used only in Terraform.
                     * @param _nodeMarks Node tag information: currently used only in Terraform.
                     * 
                     */
                    void SetNodeMarks(const NodeMark& _nodeMarks);

                    /**
                     * 判断参数 NodeMarks 是否已赋值
                     * @return NodeMarks 是否已赋值
                     * 
                     */
                    bool NodeMarksHasBeenSet() const;

                private:

                    /**
                     * Time unit of scale-out. Valid values:
<li>s: Second. When `PayMode` is 0, `TimeUnit` can only be `s`.</li>
<li>m: Month. When `PayMode` is 1, `TimeUnit` can only be `m`.</li>
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * Time span of scale-out, which needs to be used together with `TimeUnit`.
                     */
                    uint64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance billing mode. Valid value:
<li>0: Pay-as-you-go.</li>
                     */
                    uint64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Client token.
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * Bootstrap script settings.
                     */
                    std::vector<PreExecuteFileSettings> m_preExecutedFileSettings;
                    bool m_preExecutedFileSettingsHasBeenSet;

                    /**
                     * Number of task nodes to be added.
                     */
                    uint64_t m_taskCount;
                    bool m_taskCountHasBeenSet;

                    /**
                     * Number of core nodes to be added.
                     */
                    uint64_t m_coreCount;
                    bool m_coreCountHasBeenSet;

                    /**
                     * Processes unnecessary for scale-out.
                     */
                    std::vector<uint64_t> m_unNecessaryNodeList;
                    bool m_unNecessaryNodeListHasBeenSet;

                    /**
                     * Number of router nodes to be added.
                     */
                    uint64_t m_routerCount;
                    bool m_routerCountHasBeenSet;

                    /**
                     * Deployed service.
<li>`SoftDeployInfo` and `ServiceNodeInfo` are in the same group and mutually exclusive with `UnNecessaryNodeList`.</li>
<li>The combination of `SoftDeployInfo` and `ServiceNodeInfo` is recommended.</li>
                     */
                    std::vector<uint64_t> m_softDeployInfo;
                    bool m_softDeployInfoHasBeenSet;

                    /**
                     * Started process.
                     */
                    std::vector<uint64_t> m_serviceNodeInfo;
                    bool m_serviceNodeInfoHasBeenSet;

                    /**
                     * List of spread placement group IDs. Only one can be specified currently.
                     */
                    std::vector<std::string> m_disasterRecoverGroupIds;
                    bool m_disasterRecoverGroupIdsHasBeenSet;

                    /**
                     * List of tags bound to added nodes.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Resource type selected for scale-out. Valid values: "HOST","POD","MNode", where HOST indicates an ordinary CVM resource, POD indicates a resource provided by the TKE cluster or EKS cluster, and MNode indicates a fully managed resource type.
                     */
                    std::string m_hardwareResourceType;
                    bool m_hardwareResourceTypeHasBeenSet;

                    /**
                     * Specified information such as pod specification and source for scale-out with pod resources.
                     */
                    PodSpec m_podSpec;
                    bool m_podSpecHasBeenSet;

                    /**
                     * Server group name selected for ClickHouse cluster scale-out.
                     */
                    std::string m_clickHouseClusterName;
                    bool m_clickHouseClusterNameHasBeenSet;

                    /**
                     * Server group type selected for ClickHouse cluster scale-out. Valid values: `new` (create a group) and `old` (select an existing group).
                     */
                    std::string m_clickHouseClusterType;
                    bool m_clickHouseClusterTypeHasBeenSet;

                    /**
                     * Yarn node label specified for rule-based scale-out.
                     */
                    std::string m_yarnNodeLabel;
                    bool m_yarnNodeLabelHasBeenSet;

                    /**
                     * Custom pod permission and parameter
                     */
                    PodParameter m_podParameter;
                    bool m_podParameterHasBeenSet;

                    /**
                     * Number of master nodes to be added.
When a ClickHouse cluster is scaled, this parameter does not take effect.
When a Kafka cluster is scaled, this parameter does not take effect.
When `HardwareResourceType` is `pod`, this parameter does not take effect.
                     */
                    uint64_t m_masterCount;
                    bool m_masterCountHasBeenSet;

                    /**
                     * Whether to start the service after scale-out. `true`: Yes; `false`: No.
                     */
                    std::string m_startServiceAfterScaleOut;
                    bool m_startServiceAfterScaleOutHasBeenSet;

                    /**
                     * AZ, which defaults to the primary AZ of the cluster.
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Subnet, which defaults to the subnet used when the cluster is created.
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * Pre-defined configuration set
                     */
                    std::string m_scaleOutServiceConfAssign;
                    bool m_scaleOutServiceConfAssignHasBeenSet;

                    /**
                     * Whether to enable auto-renewal. Valid values: `0` (no), `1` (yes).
                     */
                    int64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * The type can be ComputeResource, EMR, or a default value. The default value is EMR. When the type is EMR, InstanceId is effective. When the type is ComputeResource, ComputeResourceId is used.
                     */
                    std::string m_resourceBaseType;
                    bool m_resourceBaseTypeHasBeenSet;

                    /**
                     * Computing resource ID.
                     */
                    std::string m_computeResourceId;
                    bool m_computeResourceIdHasBeenSet;

                    /**
                     * Advanced settings of computing resources.
                     */
                    ComputeResourceAdvanceParams m_computeResourceAdvanceParams;
                    bool m_computeResourceAdvanceParamsHasBeenSet;

                    /**
                     * Node tag information: currently used only in Terraform.
                     */
                    NodeMark m_nodeMarks;
                    bool m_nodeMarksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_SCALEOUTINSTANCEREQUEST_H_
