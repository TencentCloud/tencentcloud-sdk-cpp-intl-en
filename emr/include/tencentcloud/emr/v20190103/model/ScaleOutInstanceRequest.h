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
<li>s: seconds. When `PayMode` is 0, `TimeUnit` can only be `s`.</li>
<li>m: month. When `PayMode` is 1, `TimeUnit` can only be `m`.</li>
                     * @return TimeUnit Time unit of scale-out. Valid values:
<li>s: seconds. When `PayMode` is 0, `TimeUnit` can only be `s`.</li>
<li>m: month. When `PayMode` is 1, `TimeUnit` can only be `m`.</li>
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置Time unit of scale-out. Valid values:
<li>s: seconds. When `PayMode` is 0, `TimeUnit` can only be `s`.</li>
<li>m: month. When `PayMode` is 1, `TimeUnit` can only be `m`.</li>
                     * @param TimeUnit Time unit of scale-out. Valid values:
<li>s: seconds. When `PayMode` is 0, `TimeUnit` can only be `s`.</li>
<li>m: month. When `PayMode` is 1, `TimeUnit` can only be `m`.</li>
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取Duration of scale-out, which needs to be used together with `TimeUnit`.
                     * @return TimeSpan Duration of scale-out, which needs to be used together with `TimeUnit`.
                     */
                    uint64_t GetTimeSpan() const;

                    /**
                     * 设置Duration of scale-out, which needs to be used together with `TimeUnit`.
                     * @param TimeSpan Duration of scale-out, which needs to be used together with `TimeUnit`.
                     */
                    void SetTimeSpan(const uint64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param InstanceId Instance ID.
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Instance billing mode. Valid values:
<li>0: pay-as-you-go.</li>
                     * @return PayMode Instance billing mode. Valid values:
<li>0: pay-as-you-go.</li>
                     */
                    uint64_t GetPayMode() const;

                    /**
                     * 设置Instance billing mode. Valid values:
<li>0: pay-as-you-go.</li>
                     * @param PayMode Instance billing mode. Valid values:
<li>0: pay-as-you-go.</li>
                     */
                    void SetPayMode(const uint64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Client token.
                     * @return ClientToken Client token.
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置Client token.
                     * @param ClientToken Client token.
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取Bootstrap script settings.
                     * @return PreExecutedFileSettings Bootstrap script settings.
                     */
                    std::vector<PreExecuteFileSettings> GetPreExecutedFileSettings() const;

                    /**
                     * 设置Bootstrap script settings.
                     * @param PreExecutedFileSettings Bootstrap script settings.
                     */
                    void SetPreExecutedFileSettings(const std::vector<PreExecuteFileSettings>& _preExecutedFileSettings);

                    /**
                     * 判断参数 PreExecutedFileSettings 是否已赋值
                     * @return PreExecutedFileSettings 是否已赋值
                     */
                    bool PreExecutedFileSettingsHasBeenSet() const;

                    /**
                     * 获取Number of task nodes added.
                     * @return TaskCount Number of task nodes added.
                     */
                    uint64_t GetTaskCount() const;

                    /**
                     * 设置Number of task nodes added.
                     * @param TaskCount Number of task nodes added.
                     */
                    void SetTaskCount(const uint64_t& _taskCount);

                    /**
                     * 判断参数 TaskCount 是否已赋值
                     * @return TaskCount 是否已赋值
                     */
                    bool TaskCountHasBeenSet() const;

                    /**
                     * 获取Number of core nodes added.
                     * @return CoreCount Number of core nodes added.
                     */
                    uint64_t GetCoreCount() const;

                    /**
                     * 设置Number of core nodes added.
                     * @param CoreCount Number of core nodes added.
                     */
                    void SetCoreCount(const uint64_t& _coreCount);

                    /**
                     * 判断参数 CoreCount 是否已赋值
                     * @return CoreCount 是否已赋值
                     */
                    bool CoreCountHasBeenSet() const;

                    /**
                     * 获取Process not required during scale-out.
                     * @return UnNecessaryNodeList Process not required during scale-out.
                     */
                    std::vector<uint64_t> GetUnNecessaryNodeList() const;

                    /**
                     * 设置Process not required during scale-out.
                     * @param UnNecessaryNodeList Process not required during scale-out.
                     */
                    void SetUnNecessaryNodeList(const std::vector<uint64_t>& _unNecessaryNodeList);

                    /**
                     * 判断参数 UnNecessaryNodeList 是否已赋值
                     * @return UnNecessaryNodeList 是否已赋值
                     */
                    bool UnNecessaryNodeListHasBeenSet() const;

                    /**
                     * 获取Number of router nodes added.
                     * @return RouterCount Number of router nodes added.
                     */
                    uint64_t GetRouterCount() const;

                    /**
                     * 设置Number of router nodes added.
                     * @param RouterCount Number of router nodes added.
                     */
                    void SetRouterCount(const uint64_t& _routerCount);

                    /**
                     * 判断参数 RouterCount 是否已赋值
                     * @return RouterCount 是否已赋值
                     */
                    bool RouterCountHasBeenSet() const;

                    /**
                     * 获取Deployed service.
<li>`SoftDeployInfo` and `ServiceNodeInfo` are in the same group and mutually exclusive with `UnNecessaryNodeList`.</li>
<li>The combination of `SoftDeployInfo` and `ServiceNodeInfo` is recommended.</li>
                     * @return SoftDeployInfo Deployed service.
<li>`SoftDeployInfo` and `ServiceNodeInfo` are in the same group and mutually exclusive with `UnNecessaryNodeList`.</li>
<li>The combination of `SoftDeployInfo` and `ServiceNodeInfo` is recommended.</li>
                     */
                    std::vector<uint64_t> GetSoftDeployInfo() const;

                    /**
                     * 设置Deployed service.
<li>`SoftDeployInfo` and `ServiceNodeInfo` are in the same group and mutually exclusive with `UnNecessaryNodeList`.</li>
<li>The combination of `SoftDeployInfo` and `ServiceNodeInfo` is recommended.</li>
                     * @param SoftDeployInfo Deployed service.
<li>`SoftDeployInfo` and `ServiceNodeInfo` are in the same group and mutually exclusive with `UnNecessaryNodeList`.</li>
<li>The combination of `SoftDeployInfo` and `ServiceNodeInfo` is recommended.</li>
                     */
                    void SetSoftDeployInfo(const std::vector<uint64_t>& _softDeployInfo);

                    /**
                     * 判断参数 SoftDeployInfo 是否已赋值
                     * @return SoftDeployInfo 是否已赋值
                     */
                    bool SoftDeployInfoHasBeenSet() const;

                    /**
                     * 获取Started process.
                     * @return ServiceNodeInfo Started process.
                     */
                    std::vector<uint64_t> GetServiceNodeInfo() const;

                    /**
                     * 设置Started process.
                     * @param ServiceNodeInfo Started process.
                     */
                    void SetServiceNodeInfo(const std::vector<uint64_t>& _serviceNodeInfo);

                    /**
                     * 判断参数 ServiceNodeInfo 是否已赋值
                     * @return ServiceNodeInfo 是否已赋值
                     */
                    bool ServiceNodeInfoHasBeenSet() const;

                    /**
                     * 获取List of spread placement group IDs. Only one can be specified currently.
                     * @return DisasterRecoverGroupIds List of spread placement group IDs. Only one can be specified currently.
                     */
                    std::vector<std::string> GetDisasterRecoverGroupIds() const;

                    /**
                     * 设置List of spread placement group IDs. Only one can be specified currently.
                     * @param DisasterRecoverGroupIds List of spread placement group IDs. Only one can be specified currently.
                     */
                    void SetDisasterRecoverGroupIds(const std::vector<std::string>& _disasterRecoverGroupIds);

                    /**
                     * 判断参数 DisasterRecoverGroupIds 是否已赋值
                     * @return DisasterRecoverGroupIds 是否已赋值
                     */
                    bool DisasterRecoverGroupIdsHasBeenSet() const;

                    /**
                     * 获取List of tags bound to added nodes.
                     * @return Tags List of tags bound to added nodes.
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置List of tags bound to added nodes.
                     * @param Tags List of tags bound to added nodes.
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Resource type selected for scaling. Valid values: `host` (general CVM resource), `pod` (resource provided by TKE or EKS cluster)
                     * @return HardwareResourceType Resource type selected for scaling. Valid values: `host` (general CVM resource), `pod` (resource provided by TKE or EKS cluster)
                     */
                    std::string GetHardwareResourceType() const;

                    /**
                     * 设置Resource type selected for scaling. Valid values: `host` (general CVM resource), `pod` (resource provided by TKE or EKS cluster)
                     * @param HardwareResourceType Resource type selected for scaling. Valid values: `host` (general CVM resource), `pod` (resource provided by TKE or EKS cluster)
                     */
                    void SetHardwareResourceType(const std::string& _hardwareResourceType);

                    /**
                     * 判断参数 HardwareResourceType 是否已赋值
                     * @return HardwareResourceType 是否已赋值
                     */
                    bool HardwareResourceTypeHasBeenSet() const;

                    /**
                     * 获取Specified information such as pod specification and source for expansion with pod resources
                     * @return PodSpec Specified information such as pod specification and source for expansion with pod resources
                     */
                    PodSpec GetPodSpec() const;

                    /**
                     * 设置Specified information such as pod specification and source for expansion with pod resources
                     * @param PodSpec Specified information such as pod specification and source for expansion with pod resources
                     */
                    void SetPodSpec(const PodSpec& _podSpec);

                    /**
                     * 判断参数 PodSpec 是否已赋值
                     * @return PodSpec 是否已赋值
                     */
                    bool PodSpecHasBeenSet() const;

                    /**
                     * 获取Machine group name selected for ClickHouse cluster scaling-out
                     * @return ClickHouseClusterName Machine group name selected for ClickHouse cluster scaling-out
                     */
                    std::string GetClickHouseClusterName() const;

                    /**
                     * 设置Machine group name selected for ClickHouse cluster scaling-out
                     * @param ClickHouseClusterName Machine group name selected for ClickHouse cluster scaling-out
                     */
                    void SetClickHouseClusterName(const std::string& _clickHouseClusterName);

                    /**
                     * 判断参数 ClickHouseClusterName 是否已赋值
                     * @return ClickHouseClusterName 是否已赋值
                     */
                    bool ClickHouseClusterNameHasBeenSet() const;

                    /**
                     * 获取Machine group type selected for ClickHouse cluster scaling-out. new: creates a group; old: selects an existing group
                     * @return ClickHouseClusterType Machine group type selected for ClickHouse cluster scaling-out. new: creates a group; old: selects an existing group
                     */
                    std::string GetClickHouseClusterType() const;

                    /**
                     * 设置Machine group type selected for ClickHouse cluster scaling-out. new: creates a group; old: selects an existing group
                     * @param ClickHouseClusterType Machine group type selected for ClickHouse cluster scaling-out. new: creates a group; old: selects an existing group
                     */
                    void SetClickHouseClusterType(const std::string& _clickHouseClusterType);

                    /**
                     * 判断参数 ClickHouseClusterType 是否已赋值
                     * @return ClickHouseClusterType 是否已赋值
                     */
                    bool ClickHouseClusterTypeHasBeenSet() const;

                    /**
                     * 获取YARN node label specified for rule-based scaling-out
                     * @return YarnNodeLabel YARN node label specified for rule-based scaling-out
                     */
                    std::string GetYarnNodeLabel() const;

                    /**
                     * 设置YARN node label specified for rule-based scaling-out
                     * @param YarnNodeLabel YARN node label specified for rule-based scaling-out
                     */
                    void SetYarnNodeLabel(const std::string& _yarnNodeLabel);

                    /**
                     * 判断参数 YarnNodeLabel 是否已赋值
                     * @return YarnNodeLabel 是否已赋值
                     */
                    bool YarnNodeLabelHasBeenSet() const;

                    /**
                     * 获取Custom pod permission and parameter
                     * @return PodParameter Custom pod permission and parameter
                     */
                    PodParameter GetPodParameter() const;

                    /**
                     * 设置Custom pod permission and parameter
                     * @param PodParameter Custom pod permission and parameter
                     */
                    void SetPodParameter(const PodParameter& _podParameter);

                    /**
                     * 判断参数 PodParameter 是否已赋值
                     * @return PodParameter 是否已赋值
                     */
                    bool PodParameterHasBeenSet() const;

                    /**
                     * 获取Number of master nodes to be added
When a ClickHouse cluster is scaled, this parameter does not take effect.
When a Kafka cluster is scaled, this parameter does not take effect.
When `HardwareResourceType` is `pod`, this parameter does not take effect.
                     * @return MasterCount Number of master nodes to be added
When a ClickHouse cluster is scaled, this parameter does not take effect.
When a Kafka cluster is scaled, this parameter does not take effect.
When `HardwareResourceType` is `pod`, this parameter does not take effect.
                     */
                    uint64_t GetMasterCount() const;

                    /**
                     * 设置Number of master nodes to be added
When a ClickHouse cluster is scaled, this parameter does not take effect.
When a Kafka cluster is scaled, this parameter does not take effect.
When `HardwareResourceType` is `pod`, this parameter does not take effect.
                     * @param MasterCount Number of master nodes to be added
When a ClickHouse cluster is scaled, this parameter does not take effect.
When a Kafka cluster is scaled, this parameter does not take effect.
When `HardwareResourceType` is `pod`, this parameter does not take effect.
                     */
                    void SetMasterCount(const uint64_t& _masterCount);

                    /**
                     * 判断参数 MasterCount 是否已赋值
                     * @return MasterCount 是否已赋值
                     */
                    bool MasterCountHasBeenSet() const;

                    /**
                     * 获取Whether to start the service after scaling. `true`: yes; `false`: no
                     * @return StartServiceAfterScaleOut Whether to start the service after scaling. `true`: yes; `false`: no
                     */
                    std::string GetStartServiceAfterScaleOut() const;

                    /**
                     * 设置Whether to start the service after scaling. `true`: yes; `false`: no
                     * @param StartServiceAfterScaleOut Whether to start the service after scaling. `true`: yes; `false`: no
                     */
                    void SetStartServiceAfterScaleOut(const std::string& _startServiceAfterScaleOut);

                    /**
                     * 判断参数 StartServiceAfterScaleOut 是否已赋值
                     * @return StartServiceAfterScaleOut 是否已赋值
                     */
                    bool StartServiceAfterScaleOutHasBeenSet() const;

                private:

                    /**
                     * Time unit of scale-out. Valid values:
<li>s: seconds. When `PayMode` is 0, `TimeUnit` can only be `s`.</li>
<li>m: month. When `PayMode` is 1, `TimeUnit` can only be `m`.</li>
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * Duration of scale-out, which needs to be used together with `TimeUnit`.
                     */
                    uint64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance billing mode. Valid values:
<li>0: pay-as-you-go.</li>
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
                     * Number of task nodes added.
                     */
                    uint64_t m_taskCount;
                    bool m_taskCountHasBeenSet;

                    /**
                     * Number of core nodes added.
                     */
                    uint64_t m_coreCount;
                    bool m_coreCountHasBeenSet;

                    /**
                     * Process not required during scale-out.
                     */
                    std::vector<uint64_t> m_unNecessaryNodeList;
                    bool m_unNecessaryNodeListHasBeenSet;

                    /**
                     * Number of router nodes added.
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
                     * Resource type selected for scaling. Valid values: `host` (general CVM resource), `pod` (resource provided by TKE or EKS cluster)
                     */
                    std::string m_hardwareResourceType;
                    bool m_hardwareResourceTypeHasBeenSet;

                    /**
                     * Specified information such as pod specification and source for expansion with pod resources
                     */
                    PodSpec m_podSpec;
                    bool m_podSpecHasBeenSet;

                    /**
                     * Machine group name selected for ClickHouse cluster scaling-out
                     */
                    std::string m_clickHouseClusterName;
                    bool m_clickHouseClusterNameHasBeenSet;

                    /**
                     * Machine group type selected for ClickHouse cluster scaling-out. new: creates a group; old: selects an existing group
                     */
                    std::string m_clickHouseClusterType;
                    bool m_clickHouseClusterTypeHasBeenSet;

                    /**
                     * YARN node label specified for rule-based scaling-out
                     */
                    std::string m_yarnNodeLabel;
                    bool m_yarnNodeLabelHasBeenSet;

                    /**
                     * Custom pod permission and parameter
                     */
                    PodParameter m_podParameter;
                    bool m_podParameterHasBeenSet;

                    /**
                     * Number of master nodes to be added
When a ClickHouse cluster is scaled, this parameter does not take effect.
When a Kafka cluster is scaled, this parameter does not take effect.
When `HardwareResourceType` is `pod`, this parameter does not take effect.
                     */
                    uint64_t m_masterCount;
                    bool m_masterCountHasBeenSet;

                    /**
                     * Whether to start the service after scaling. `true`: yes; `false`: no
                     */
                    std::string m_startServiceAfterScaleOut;
                    bool m_startServiceAfterScaleOutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_SCALEOUTINSTANCEREQUEST_H_
