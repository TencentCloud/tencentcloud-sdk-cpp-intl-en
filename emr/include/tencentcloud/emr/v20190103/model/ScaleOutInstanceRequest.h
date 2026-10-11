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
                     * 获取<p>Time unit for the scale-out. Valid values:</p><li>s: indicates seconds. When PayMode is set to 0, TimeUnit can only be set to s.</li><li>m: indicates months. When PayMode is set to 1, TimeUnit can only be set to m.</li>
                     * @return TimeUnit <p>Time unit for the scale-out. Valid values:</p><li>s: indicates seconds. When PayMode is set to 0, TimeUnit can only be set to s.</li><li>m: indicates months. When PayMode is set to 1, TimeUnit can only be set to m.</li>
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置<p>Time unit for the scale-out. Valid values:</p><li>s: indicates seconds. When PayMode is set to 0, TimeUnit can only be set to s.</li><li>m: indicates months. When PayMode is set to 1, TimeUnit can only be set to m.</li>
                     * @param _timeUnit <p>Time unit for the scale-out. Valid values:</p><li>s: indicates seconds. When PayMode is set to 0, TimeUnit can only be set to s.</li><li>m: indicates months. When PayMode is set to 1, TimeUnit can only be set to m.</li>
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
                     * 获取<p>Scale-out duration, which is used together with TimeUnit.</p><li>When TimeUnit is set to s, this parameter can only be set to 3600, indicating a pay-as-you-go instance.</li><li>When TimeUnit is set to m, the value set for this parameter indicates the subscription duration of the instance. For example, 1 indicates a one-month subscription.</li>
                     * @return TimeSpan <p>Scale-out duration, which is used together with TimeUnit.</p><li>When TimeUnit is set to s, this parameter can only be set to 3600, indicating a pay-as-you-go instance.</li><li>When TimeUnit is set to m, the value set for this parameter indicates the subscription duration of the instance. For example, 1 indicates a one-month subscription.</li>
                     * 
                     */
                    uint64_t GetTimeSpan() const;

                    /**
                     * 设置<p>Scale-out duration, which is used together with TimeUnit.</p><li>When TimeUnit is set to s, this parameter can only be set to 3600, indicating a pay-as-you-go instance.</li><li>When TimeUnit is set to m, the value set for this parameter indicates the subscription duration of the instance. For example, 1 indicates a one-month subscription.</li>
                     * @param _timeSpan <p>Scale-out duration, which is used together with TimeUnit.</p><li>When TimeUnit is set to s, this parameter can only be set to 3600, indicating a pay-as-you-go instance.</li><li>When TimeUnit is set to m, the value set for this parameter indicates the subscription duration of the instance. For example, 1 indicates a one-month subscription.</li>
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
                     * 获取<p>Instance ID.</p>
                     * @return InstanceId <p>Instance ID.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance ID.</p>
                     * @param _instanceId <p>Instance ID.</p>
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
                     * 获取<p>Instance billing mode. Valid values:</p><li>0: pay-as-you-go</li><li>1: yearly/monthly subscription</li>
                     * @return PayMode <p>Instance billing mode. Valid values:</p><li>0: pay-as-you-go</li><li>1: yearly/monthly subscription</li>
                     * 
                     */
                    uint64_t GetPayMode() const;

                    /**
                     * 设置<p>Instance billing mode. Valid values:</p><li>0: pay-as-you-go</li><li>1: yearly/monthly subscription</li>
                     * @param _payMode <p>Instance billing mode. Valid values:</p><li>0: pay-as-you-go</li><li>1: yearly/monthly subscription</li>
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
                     * 获取<p>Unique random identifier, which is valid for five minutes and needs to be specified by the caller. This prevents the client from repeatedly creating resources. Example value: a9a90aa6-<strong><strong>-</strong></strong>-****-fae36063280.</p>
                     * @return ClientToken <p>Unique random identifier, which is valid for five minutes and needs to be specified by the caller. This prevents the client from repeatedly creating resources. Example value: a9a90aa6-<strong><strong>-</strong></strong>-****-fae36063280.</p>
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置<p>Unique random identifier, which is valid for five minutes and needs to be specified by the caller. This prevents the client from repeatedly creating resources. Example value: a9a90aa6-<strong><strong>-</strong></strong>-****-fae36063280.</p>
                     * @param _clientToken <p>Unique random identifier, which is valid for five minutes and needs to be specified by the caller. This prevents the client from repeatedly creating resources. Example value: a9a90aa6-<strong><strong>-</strong></strong>-****-fae36063280.</p>
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
                     * 获取<p>Bootstrap script settings.</p>
                     * @return PreExecutedFileSettings <p>Bootstrap script settings.</p>
                     * 
                     */
                    std::vector<PreExecuteFileSettings> GetPreExecutedFileSettings() const;

                    /**
                     * 设置<p>Bootstrap script settings.</p>
                     * @param _preExecutedFileSettings <p>Bootstrap script settings.</p>
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
                     * 获取<p>Number of Task nodes to be scaled out.</p>
                     * @return TaskCount <p>Number of Task nodes to be scaled out.</p>
                     * 
                     */
                    uint64_t GetTaskCount() const;

                    /**
                     * 设置<p>Number of Task nodes to be scaled out.</p>
                     * @param _taskCount <p>Number of Task nodes to be scaled out.</p>
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
                     * 获取<p>Number of scale-out Core nodes.</p>
                     * @return CoreCount <p>Number of scale-out Core nodes.</p>
                     * 
                     */
                    uint64_t GetCoreCount() const;

                    /**
                     * 设置<p>Number of scale-out Core nodes.</p>
                     * @param _coreCount <p>Number of scale-out Core nodes.</p>
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
                     * 获取<p>Processes, which are not required during the scale-out.</p>
                     * @return UnNecessaryNodeList <p>Processes, which are not required during the scale-out.</p>
                     * 
                     */
                    std::vector<uint64_t> GetUnNecessaryNodeList() const;

                    /**
                     * 设置<p>Processes, which are not required during the scale-out.</p>
                     * @param _unNecessaryNodeList <p>Processes, which are not required during the scale-out.</p>
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
                     * 获取<p>Number of Router nodes to be scaled out.</p>
                     * @return RouterCount <p>Number of Router nodes to be scaled out.</p>
                     * 
                     */
                    uint64_t GetRouterCount() const;

                    /**
                     * 设置<p>Number of Router nodes to be scaled out.</p>
                     * @param _routerCount <p>Number of Router nodes to be scaled out.</p>
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
                     * 获取<p>Deployed service.</p><li>SoftDeployInfo and ServiceNodeInfo are parameters in the same group and are mutually exclusive with UnNecessaryNodeList.</li><li>It is recommended to use SoftDeployInfo and ServiceNodeInfo together.</li>
                     * @return SoftDeployInfo <p>Deployed service.</p><li>SoftDeployInfo and ServiceNodeInfo are parameters in the same group and are mutually exclusive with UnNecessaryNodeList.</li><li>It is recommended to use SoftDeployInfo and ServiceNodeInfo together.</li>
                     * 
                     */
                    std::vector<uint64_t> GetSoftDeployInfo() const;

                    /**
                     * 设置<p>Deployed service.</p><li>SoftDeployInfo and ServiceNodeInfo are parameters in the same group and are mutually exclusive with UnNecessaryNodeList.</li><li>It is recommended to use SoftDeployInfo and ServiceNodeInfo together.</li>
                     * @param _softDeployInfo <p>Deployed service.</p><li>SoftDeployInfo and ServiceNodeInfo are parameters in the same group and are mutually exclusive with UnNecessaryNodeList.</li><li>It is recommended to use SoftDeployInfo and ServiceNodeInfo together.</li>
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
                     * 获取<p>Started process.</p>
                     * @return ServiceNodeInfo <p>Started process.</p>
                     * 
                     */
                    std::vector<uint64_t> GetServiceNodeInfo() const;

                    /**
                     * 设置<p>Started process.</p>
                     * @param _serviceNodeInfo <p>Started process.</p>
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
                     * 获取<p>List of dispersed placement group IDs. Currently, only one ID is supported.</p>
                     * @return DisasterRecoverGroupIds <p>List of dispersed placement group IDs. Currently, only one ID is supported.</p>
                     * 
                     */
                    std::vector<std::string> GetDisasterRecoverGroupIds() const;

                    /**
                     * 设置<p>List of dispersed placement group IDs. Currently, only one ID is supported.</p>
                     * @param _disasterRecoverGroupIds <p>List of dispersed placement group IDs. Currently, only one ID is supported.</p>
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
                     * 获取<p>List of tags bound to nodes for the scale-out.</p>
                     * @return Tags <p>List of tags bound to nodes for the scale-out.</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>List of tags bound to nodes for the scale-out.</p>
                     * @param _tags <p>List of tags bound to nodes for the scale-out.</p>
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
                     * 获取<p>Resource type selected for the scale-out. Valid values: &quot;HOST&quot;, &quot;POD&quot;, and &quot;MNode&quot;. HOST indicates ordinary CVM resources, POD indicates resources provided by a TKE cluster or an EKS cluster, and MNode indicates fully managed resources.</p>
                     * @return HardwareResourceType <p>Resource type selected for the scale-out. Valid values: &quot;HOST&quot;, &quot;POD&quot;, and &quot;MNode&quot;. HOST indicates ordinary CVM resources, POD indicates resources provided by a TKE cluster or an EKS cluster, and MNode indicates fully managed resources.</p>
                     * 
                     */
                    std::string GetHardwareResourceType() const;

                    /**
                     * 设置<p>Resource type selected for the scale-out. Valid values: &quot;HOST&quot;, &quot;POD&quot;, and &quot;MNode&quot;. HOST indicates ordinary CVM resources, POD indicates resources provided by a TKE cluster or an EKS cluster, and MNode indicates fully managed resources.</p>
                     * @param _hardwareResourceType <p>Resource type selected for the scale-out. Valid values: &quot;HOST&quot;, &quot;POD&quot;, and &quot;MNode&quot;. HOST indicates ordinary CVM resources, POD indicates resources provided by a TKE cluster or an EKS cluster, and MNode indicates fully managed resources.</p>
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
                     * 获取<p>Pod specifications and source information, which are specified when Pod resources are used for the scale-out.</p>
                     * @return PodSpec <p>Pod specifications and source information, which are specified when Pod resources are used for the scale-out.</p>
                     * 
                     */
                    PodSpec GetPodSpec() const;

                    /**
                     * 设置<p>Pod specifications and source information, which are specified when Pod resources are used for the scale-out.</p>
                     * @param _podSpec <p>Pod specifications and source information, which are specified when Pod resources are used for the scale-out.</p>
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
                     * 获取<p>Machine group name selected for the ClickHouse cluster scale-out.</p>
                     * @return ClickHouseClusterName <p>Machine group name selected for the ClickHouse cluster scale-out.</p>
                     * 
                     */
                    std::string GetClickHouseClusterName() const;

                    /**
                     * 设置<p>Machine group name selected for the ClickHouse cluster scale-out.</p>
                     * @param _clickHouseClusterName <p>Machine group name selected for the ClickHouse cluster scale-out.</p>
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
                     * 获取<p>Machine group type selected for the ClickHouse cluster scale-out. Valid values: new (adds a group) and old (selects an existing group).</p>
                     * @return ClickHouseClusterType <p>Machine group type selected for the ClickHouse cluster scale-out. Valid values: new (adds a group) and old (selects an existing group).</p>
                     * 
                     */
                    std::string GetClickHouseClusterType() const;

                    /**
                     * 设置<p>Machine group type selected for the ClickHouse cluster scale-out. Valid values: new (adds a group) and old (selects an existing group).</p>
                     * @param _clickHouseClusterType <p>Machine group type selected for the ClickHouse cluster scale-out. Valid values: new (adds a group) and old (selects an existing group).</p>
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
                     * 获取<p>YARN node label specified for the rule-based scale-out.</p>
                     * @return YarnNodeLabel <p>YARN node label specified for the rule-based scale-out.</p>
                     * 
                     */
                    std::string GetYarnNodeLabel() const;

                    /**
                     * 设置<p>YARN node label specified for the rule-based scale-out.</p>
                     * @param _yarnNodeLabel <p>YARN node label specified for the rule-based scale-out.</p>
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
                     * 获取<p>Pod custom permission and parameter.</p>
                     * @return PodParameter <p>Pod custom permission and parameter.</p>
                     * 
                     */
                    PodParameter GetPodParameter() const;

                    /**
                     * 设置<p>Pod custom permission and parameter.</p>
                     * @param _podParameter <p>Pod custom permission and parameter.</p>
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
                     * 获取<p>Number of Master nodes for the scale-out.<br>When a ClickHouse cluster is used for the scale-out, this parameter does not take effect.<br>When a Kafka cluster is used for the scale-out, this parameter does not take effect.<br>When HardwareResourceType is set to POD, this parameter does not take effect.</p>
                     * @return MasterCount <p>Number of Master nodes for the scale-out.<br>When a ClickHouse cluster is used for the scale-out, this parameter does not take effect.<br>When a Kafka cluster is used for the scale-out, this parameter does not take effect.<br>When HardwareResourceType is set to POD, this parameter does not take effect.</p>
                     * 
                     */
                    uint64_t GetMasterCount() const;

                    /**
                     * 设置<p>Number of Master nodes for the scale-out.<br>When a ClickHouse cluster is used for the scale-out, this parameter does not take effect.<br>When a Kafka cluster is used for the scale-out, this parameter does not take effect.<br>When HardwareResourceType is set to POD, this parameter does not take effect.</p>
                     * @param _masterCount <p>Number of Master nodes for the scale-out.<br>When a ClickHouse cluster is used for the scale-out, this parameter does not take effect.<br>When a Kafka cluster is used for the scale-out, this parameter does not take effect.<br>When HardwareResourceType is set to POD, this parameter does not take effect.</p>
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
                     * 获取<p>Whether the service is started after the scale-out. Valid values: true (yes) and false (no).</p>
                     * @return StartServiceAfterScaleOut <p>Whether the service is started after the scale-out. Valid values: true (yes) and false (no).</p>
                     * 
                     */
                    std::string GetStartServiceAfterScaleOut() const;

                    /**
                     * 设置<p>Whether the service is started after the scale-out. Valid values: true (yes) and false (no).</p>
                     * @param _startServiceAfterScaleOut <p>Whether the service is started after the scale-out. Valid values: true (yes) and false (no).</p>
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
                     * 获取<p>AZ. The primary AZ of the cluster is selected by default.</p>
                     * @return ZoneId <p>AZ. The primary AZ of the cluster is selected by default.</p>
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置<p>AZ. The primary AZ of the cluster is selected by default.</p>
                     * @param _zoneId <p>AZ. The primary AZ of the cluster is selected by default.</p>
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
                     * 获取<p>Subnet. The subnet used during cluster creation is selected by default.</p>
                     * @return SubnetId <p>Subnet. The subnet used during cluster creation is selected by default.</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>Subnet. The subnet used during cluster creation is selected by default.</p>
                     * @param _subnetId <p>Subnet. The subnet used during cluster creation is selected by default.</p>
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
                     * 获取<p>Preset configuration group.</p>
                     * @return ScaleOutServiceConfAssign <p>Preset configuration group.</p>
                     * 
                     */
                    std::string GetScaleOutServiceConfAssign() const;

                    /**
                     * 设置<p>Preset configuration group.</p>
                     * @param _scaleOutServiceConfAssign <p>Preset configuration group.</p>
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
                     * 获取<p>Auto-renewal. Valid values: 0 (disabled) and 1 (enabled).</p>
                     * @return AutoRenew <p>Auto-renewal. Valid values: 0 (disabled) and 1 (enabled).</p>
                     * 
                     */
                    int64_t GetAutoRenew() const;

                    /**
                     * 设置<p>Auto-renewal. Valid values: 0 (disabled) and 1 (enabled).</p>
                     * @param _autoRenew <p>Auto-renewal. Valid values: 0 (disabled) and 1 (enabled).</p>
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
                     * 获取<p>Type. Valid values: ComputeResource and EMR. Default value: EMR. If this parameter is set to EMR, InstanceId takes effect. If this parameter is set to ComputeResource, ComputeResourceId is used.</p>
                     * @return ResourceBaseType <p>Type. Valid values: ComputeResource and EMR. Default value: EMR. If this parameter is set to EMR, InstanceId takes effect. If this parameter is set to ComputeResource, ComputeResourceId is used.</p>
                     * 
                     */
                    std::string GetResourceBaseType() const;

                    /**
                     * 设置<p>Type. Valid values: ComputeResource and EMR. Default value: EMR. If this parameter is set to EMR, InstanceId takes effect. If this parameter is set to ComputeResource, ComputeResourceId is used.</p>
                     * @param _resourceBaseType <p>Type. Valid values: ComputeResource and EMR. Default value: EMR. If this parameter is set to EMR, InstanceId takes effect. If this parameter is set to ComputeResource, ComputeResourceId is used.</p>
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
                     * 获取<p>Computing resource ID.</p>
                     * @return ComputeResourceId <p>Computing resource ID.</p>
                     * 
                     */
                    std::string GetComputeResourceId() const;

                    /**
                     * 设置<p>Computing resource ID.</p>
                     * @param _computeResourceId <p>Computing resource ID.</p>
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
                     * 获取<p>Advanced settings of computing resources.</p>
                     * @return ComputeResourceAdvanceParams <p>Advanced settings of computing resources.</p>
                     * 
                     */
                    ComputeResourceAdvanceParams GetComputeResourceAdvanceParams() const;

                    /**
                     * 设置<p>Advanced settings of computing resources.</p>
                     * @param _computeResourceAdvanceParams <p>Advanced settings of computing resources.</p>
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
                     * 获取<p>Node tag information, which is currently only provided for the Terraform platform.</p>
                     * @return NodeMarks <p>Node tag information, which is currently only provided for the Terraform platform.</p>
                     * 
                     */
                    NodeMark GetNodeMarks() const;

                    /**
                     * 设置<p>Node tag information, which is currently only provided for the Terraform platform.</p>
                     * @param _nodeMarks <p>Node tag information, which is currently only provided for the Terraform platform.</p>
                     * 
                     */
                    void SetNodeMarks(const NodeMark& _nodeMarks);

                    /**
                     * 判断参数 NodeMarks 是否已赋值
                     * @return NodeMarks 是否已赋值
                     * 
                     */
                    bool NodeMarksHasBeenSet() const;

                    /**
                     * 获取<p>Compute group specified for the scale-out.</p>
                     * @return WarehouseName <p>Compute group specified for the scale-out.</p>
                     * 
                     */
                    std::string GetWarehouseName() const;

                    /**
                     * 设置<p>Compute group specified for the scale-out.</p>
                     * @param _warehouseName <p>Compute group specified for the scale-out.</p>
                     * 
                     */
                    void SetWarehouseName(const std::string& _warehouseName);

                    /**
                     * 判断参数 WarehouseName 是否已赋值
                     * @return WarehouseName 是否已赋值
                     * 
                     */
                    bool WarehouseNameHasBeenSet() const;

                    /**
                     * 获取<p>Partition of a partition placement group.</p>
                     * @return PartitionNumber <p>Partition of a partition placement group.</p>
                     * 
                     */
                    int64_t GetPartitionNumber() const;

                    /**
                     * 设置<p>Partition of a partition placement group.</p>
                     * @param _partitionNumber <p>Partition of a partition placement group.</p>
                     * 
                     */
                    void SetPartitionNumber(const int64_t& _partitionNumber);

                    /**
                     * 判断参数 PartitionNumber 是否已赋值
                     * @return PartitionNumber 是否已赋值
                     * 
                     */
                    bool PartitionNumberHasBeenSet() const;

                private:

                    /**
                     * <p>Time unit for the scale-out. Valid values:</p><li>s: indicates seconds. When PayMode is set to 0, TimeUnit can only be set to s.</li><li>m: indicates months. When PayMode is set to 1, TimeUnit can only be set to m.</li>
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * <p>Scale-out duration, which is used together with TimeUnit.</p><li>When TimeUnit is set to s, this parameter can only be set to 3600, indicating a pay-as-you-go instance.</li><li>When TimeUnit is set to m, the value set for this parameter indicates the subscription duration of the instance. For example, 1 indicates a one-month subscription.</li>
                     */
                    uint64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * <p>Instance ID.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Instance billing mode. Valid values:</p><li>0: pay-as-you-go</li><li>1: yearly/monthly subscription</li>
                     */
                    uint64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>Unique random identifier, which is valid for five minutes and needs to be specified by the caller. This prevents the client from repeatedly creating resources. Example value: a9a90aa6-<strong><strong>-</strong></strong>-****-fae36063280.</p>
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * <p>Bootstrap script settings.</p>
                     */
                    std::vector<PreExecuteFileSettings> m_preExecutedFileSettings;
                    bool m_preExecutedFileSettingsHasBeenSet;

                    /**
                     * <p>Number of Task nodes to be scaled out.</p>
                     */
                    uint64_t m_taskCount;
                    bool m_taskCountHasBeenSet;

                    /**
                     * <p>Number of scale-out Core nodes.</p>
                     */
                    uint64_t m_coreCount;
                    bool m_coreCountHasBeenSet;

                    /**
                     * <p>Processes, which are not required during the scale-out.</p>
                     */
                    std::vector<uint64_t> m_unNecessaryNodeList;
                    bool m_unNecessaryNodeListHasBeenSet;

                    /**
                     * <p>Number of Router nodes to be scaled out.</p>
                     */
                    uint64_t m_routerCount;
                    bool m_routerCountHasBeenSet;

                    /**
                     * <p>Deployed service.</p><li>SoftDeployInfo and ServiceNodeInfo are parameters in the same group and are mutually exclusive with UnNecessaryNodeList.</li><li>It is recommended to use SoftDeployInfo and ServiceNodeInfo together.</li>
                     */
                    std::vector<uint64_t> m_softDeployInfo;
                    bool m_softDeployInfoHasBeenSet;

                    /**
                     * <p>Started process.</p>
                     */
                    std::vector<uint64_t> m_serviceNodeInfo;
                    bool m_serviceNodeInfoHasBeenSet;

                    /**
                     * <p>List of dispersed placement group IDs. Currently, only one ID is supported.</p>
                     */
                    std::vector<std::string> m_disasterRecoverGroupIds;
                    bool m_disasterRecoverGroupIdsHasBeenSet;

                    /**
                     * <p>List of tags bound to nodes for the scale-out.</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>Resource type selected for the scale-out. Valid values: &quot;HOST&quot;, &quot;POD&quot;, and &quot;MNode&quot;. HOST indicates ordinary CVM resources, POD indicates resources provided by a TKE cluster or an EKS cluster, and MNode indicates fully managed resources.</p>
                     */
                    std::string m_hardwareResourceType;
                    bool m_hardwareResourceTypeHasBeenSet;

                    /**
                     * <p>Pod specifications and source information, which are specified when Pod resources are used for the scale-out.</p>
                     */
                    PodSpec m_podSpec;
                    bool m_podSpecHasBeenSet;

                    /**
                     * <p>Machine group name selected for the ClickHouse cluster scale-out.</p>
                     */
                    std::string m_clickHouseClusterName;
                    bool m_clickHouseClusterNameHasBeenSet;

                    /**
                     * <p>Machine group type selected for the ClickHouse cluster scale-out. Valid values: new (adds a group) and old (selects an existing group).</p>
                     */
                    std::string m_clickHouseClusterType;
                    bool m_clickHouseClusterTypeHasBeenSet;

                    /**
                     * <p>YARN node label specified for the rule-based scale-out.</p>
                     */
                    std::string m_yarnNodeLabel;
                    bool m_yarnNodeLabelHasBeenSet;

                    /**
                     * <p>Pod custom permission and parameter.</p>
                     */
                    PodParameter m_podParameter;
                    bool m_podParameterHasBeenSet;

                    /**
                     * <p>Number of Master nodes for the scale-out.<br>When a ClickHouse cluster is used for the scale-out, this parameter does not take effect.<br>When a Kafka cluster is used for the scale-out, this parameter does not take effect.<br>When HardwareResourceType is set to POD, this parameter does not take effect.</p>
                     */
                    uint64_t m_masterCount;
                    bool m_masterCountHasBeenSet;

                    /**
                     * <p>Whether the service is started after the scale-out. Valid values: true (yes) and false (no).</p>
                     */
                    std::string m_startServiceAfterScaleOut;
                    bool m_startServiceAfterScaleOutHasBeenSet;

                    /**
                     * <p>AZ. The primary AZ of the cluster is selected by default.</p>
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>Subnet. The subnet used during cluster creation is selected by default.</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>Preset configuration group.</p>
                     */
                    std::string m_scaleOutServiceConfAssign;
                    bool m_scaleOutServiceConfAssignHasBeenSet;

                    /**
                     * <p>Auto-renewal. Valid values: 0 (disabled) and 1 (enabled).</p>
                     */
                    int64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * <p>Type. Valid values: ComputeResource and EMR. Default value: EMR. If this parameter is set to EMR, InstanceId takes effect. If this parameter is set to ComputeResource, ComputeResourceId is used.</p>
                     */
                    std::string m_resourceBaseType;
                    bool m_resourceBaseTypeHasBeenSet;

                    /**
                     * <p>Computing resource ID.</p>
                     */
                    std::string m_computeResourceId;
                    bool m_computeResourceIdHasBeenSet;

                    /**
                     * <p>Advanced settings of computing resources.</p>
                     */
                    ComputeResourceAdvanceParams m_computeResourceAdvanceParams;
                    bool m_computeResourceAdvanceParamsHasBeenSet;

                    /**
                     * <p>Node tag information, which is currently only provided for the Terraform platform.</p>
                     */
                    NodeMark m_nodeMarks;
                    bool m_nodeMarksHasBeenSet;

                    /**
                     * <p>Compute group specified for the scale-out.</p>
                     */
                    std::string m_warehouseName;
                    bool m_warehouseNameHasBeenSet;

                    /**
                     * <p>Partition of a partition placement group.</p>
                     */
                    int64_t m_partitionNumber;
                    bool m_partitionNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_SCALEOUTINSTANCEREQUEST_H_
