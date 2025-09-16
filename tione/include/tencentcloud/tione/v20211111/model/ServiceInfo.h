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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_SERVICEINFO_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_SERVICEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/ImageInfo.h>
#include <tencentcloud/tione/v20211111/model/EnvVar.h>
#include <tencentcloud/tione/v20211111/model/ResourceInfo.h>
#include <tencentcloud/tione/v20211111/model/ModelInfo.h>
#include <tencentcloud/tione/v20211111/model/LogConfig.h>
#include <tencentcloud/tione/v20211111/model/HorizontalPodAutoscaler.h>
#include <tencentcloud/tione/v20211111/model/WorkloadStatus.h>
#include <tencentcloud/tione/v20211111/model/CronScaleJob.h>
#include <tencentcloud/tione/v20211111/model/ScheduledAction.h>
#include <tencentcloud/tione/v20211111/model/Pod.h>
#include <tencentcloud/tione/v20211111/model/ServiceLimit.h>
#include <tencentcloud/tione/v20211111/model/VolumeMount.h>
#include <tencentcloud/tione/v20211111/model/InferCodeInfo.h>
#include <tencentcloud/tione/v20211111/model/ServiceEIP.h>
#include <tencentcloud/tione/v20211111/model/HealthProbe.h>
#include <tencentcloud/tione/v20211111/model/RollingUpdate.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * Information of the inference service in the cluster.
                */
                class ServiceInfo : public AbstractModel
                {
                public:
                    ServiceInfo();
                    ~ServiceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Expected number of running Pods. The instance is 0 when the stop status is reached.Corresponding relationships under different billing and scaling modes are as follows.PREPAID and POSTPAID_BY_HOUR:Corresponding number of instances in the manual scaling mode.Corresponding number of instances based on the default time-based policy in the auto-scaling mode.HYBRID_PAID:
Corresponding number of instances for postpaid instances in the manual scaling mode.Corresponding number of instances under the default time-based policy for postpaid instances in the auto-scaling mode.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Replicas Expected number of running Pods. The instance is 0 when the stop status is reached.Corresponding relationships under different billing and scaling modes are as follows.PREPAID and POSTPAID_BY_HOUR:Corresponding number of instances in the manual scaling mode.Corresponding number of instances based on the default time-based policy in the auto-scaling mode.HYBRID_PAID:
Corresponding number of instances for postpaid instances in the manual scaling mode.Corresponding number of instances under the default time-based policy for postpaid instances in the auto-scaling mode.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetReplicas() const;

                    /**
                     * 设置Expected number of running Pods. The instance is 0 when the stop status is reached.Corresponding relationships under different billing and scaling modes are as follows.PREPAID and POSTPAID_BY_HOUR:Corresponding number of instances in the manual scaling mode.Corresponding number of instances based on the default time-based policy in the auto-scaling mode.HYBRID_PAID:
Corresponding number of instances for postpaid instances in the manual scaling mode.Corresponding number of instances under the default time-based policy for postpaid instances in the auto-scaling mode.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _replicas Expected number of running Pods. The instance is 0 when the stop status is reached.Corresponding relationships under different billing and scaling modes are as follows.PREPAID and POSTPAID_BY_HOUR:Corresponding number of instances in the manual scaling mode.Corresponding number of instances based on the default time-based policy in the auto-scaling mode.HYBRID_PAID:
Corresponding number of instances for postpaid instances in the manual scaling mode.Corresponding number of instances under the default time-based policy for postpaid instances in the auto-scaling mode.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetReplicas(const int64_t& _replicas);

                    /**
                     * 判断参数 Replicas 是否已赋值
                     * @return Replicas 是否已赋值
                     * 
                     */
                    bool ReplicasHasBeenSet() const;

                    /**
                     * 获取Image information.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ImageInfo Image information.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ImageInfo GetImageInfo() const;

                    /**
                     * 设置Image information.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _imageInfo Image information.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetImageInfo(const ImageInfo& _imageInfo);

                    /**
                     * 判断参数 ImageInfo 是否已赋值
                     * @return ImageInfo 是否已赋值
                     * 
                     */
                    bool ImageInfoHasBeenSet() const;

                    /**
                     * 获取Environment variables.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Env Environment variables.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<EnvVar> GetEnv() const;

                    /**
                     * 设置Environment variables.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _env Environment variables.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEnv(const std::vector<EnvVar>& _env);

                    /**
                     * 判断参数 Env 是否已赋值
                     * @return Env 是否已赋值
                     * 
                     */
                    bool EnvHasBeenSet() const;

                    /**
                     * 获取Resource information.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Resources Resource information.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ResourceInfo GetResources() const;

                    /**
                     * 设置Resource information.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resources Resource information.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetResources(const ResourceInfo& _resources);

                    /**
                     * 判断参数 Resources 是否已赋值
                     * @return Resources 是否已赋值
                     * 
                     */
                    bool ResourcesHasBeenSet() const;

                    /**
                     * 获取Type specifications corresponding to the postpaid instance.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceType Type specifications corresponding to the postpaid instance.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置Type specifications corresponding to the postpaid instance.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceType Type specifications corresponding to the postpaid instance.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取Model information.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ModelInfo Model information.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ModelInfo GetModelInfo() const;

                    /**
                     * 设置Model information.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _modelInfo Model information.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetModelInfo(const ModelInfo& _modelInfo);

                    /**
                     * 判断参数 ModelInfo 是否已赋值
                     * @return ModelInfo 是否已赋值
                     * 
                     */
                    bool ModelInfoHasBeenSet() const;

                    /**
                     * 获取Whether to enable logs.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LogEnable Whether to enable logs.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetLogEnable() const;

                    /**
                     * 设置Whether to enable logs.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _logEnable Whether to enable logs.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLogEnable(const bool& _logEnable);

                    /**
                     * 判断参数 LogEnable 是否已赋值
                     * @return LogEnable 是否已赋值
                     * 
                     */
                    bool LogEnableHasBeenSet() const;

                    /**
                     * 获取Log configurations.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LogConfig Log configurations.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    LogConfig GetLogConfig() const;

                    /**
                     * 设置Log configurations.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _logConfig Log configurations.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLogConfig(const LogConfig& _logConfig);

                    /**
                     * 判断参数 LogConfig 是否已赋值
                     * @return LogConfig 是否已赋值
                     * 
                     */
                    bool LogConfigHasBeenSet() const;

                    /**
                     * 获取Whether to enable authentication.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AuthorizationEnable Whether to enable authentication.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetAuthorizationEnable() const;

                    /**
                     * 设置Whether to enable authentication.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _authorizationEnable Whether to enable authentication.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAuthorizationEnable(const bool& _authorizationEnable);

                    /**
                     * 判断参数 AuthorizationEnable 是否已赋值
                     * @return AuthorizationEnable 是否已赋值
                     * 
                     */
                    bool AuthorizationEnableHasBeenSet() const;

                    /**
                     * 获取HPA configurations.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HorizontalPodAutoscaler HPA configurations.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    HorizontalPodAutoscaler GetHorizontalPodAutoscaler() const;

                    /**
                     * 设置HPA configurations.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _horizontalPodAutoscaler HPA configurations.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHorizontalPodAutoscaler(const HorizontalPodAutoscaler& _horizontalPodAutoscaler);

                    /**
                     * 判断参数 HorizontalPodAutoscaler 是否已赋值
                     * @return HorizontalPodAutoscaler 是否已赋值
                     * 
                     */
                    bool HorizontalPodAutoscalerHasBeenSet() const;

                    /**
                     * 获取Description of the service status.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Description of the service status.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    WorkloadStatus GetStatus() const;

                    /**
                     * 设置Description of the service status.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Description of the service status.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatus(const WorkloadStatus& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Weight.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Weight Weight.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetWeight() const;

                    /**
                     * 设置Weight.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _weight Weight.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWeight(const uint64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取Total resources.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResourceTotal Total resources.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ResourceInfo GetResourceTotal() const;

                    /**
                     * 设置Total resources.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resourceTotal Total resources.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetResourceTotal(const ResourceInfo& _resourceTotal);

                    /**
                     * 判断参数 ResourceTotal 是否已赋值
                     * @return ResourceTotal 是否已赋值
                     * 
                     */
                    bool ResourceTotalHasBeenSet() const;

                    /**
                     * 获取Number of historical instances.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OldReplicas Number of historical instances.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetOldReplicas() const;

                    /**
                     * 设置Number of historical instances.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _oldReplicas Number of historical instances.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOldReplicas(const int64_t& _oldReplicas);

                    /**
                     * 判断参数 OldReplicas 是否已赋值
                     * @return OldReplicas 是否已赋值
                     * 
                     */
                    bool OldReplicasHasBeenSet() const;

                    /**
                     * 获取This parameter is valid when the billing mode is HYBRID_PAID, and is used to identify the number of prepaid instances in the hybrid billing mode. The default value is 1 if this parameter is left unspecified.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HybridBillingPrepaidReplicas This parameter is valid when the billing mode is HYBRID_PAID, and is used to identify the number of prepaid instances in the hybrid billing mode. The default value is 1 if this parameter is left unspecified.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetHybridBillingPrepaidReplicas() const;

                    /**
                     * 设置This parameter is valid when the billing mode is HYBRID_PAID, and is used to identify the number of prepaid instances in the hybrid billing mode. The default value is 1 if this parameter is left unspecified.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hybridBillingPrepaidReplicas This parameter is valid when the billing mode is HYBRID_PAID, and is used to identify the number of prepaid instances in the hybrid billing mode. The default value is 1 if this parameter is left unspecified.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHybridBillingPrepaidReplicas(const int64_t& _hybridBillingPrepaidReplicas);

                    /**
                     * 判断参数 HybridBillingPrepaidReplicas 是否已赋值
                     * @return HybridBillingPrepaidReplicas 是否已赋值
                     * 
                     */
                    bool HybridBillingPrepaidReplicasHasBeenSet() const;

                    /**
                     * 获取Number of instances during the historical HYBRID_PAID period. The user restores services.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OldHybridBillingPrepaidReplicas Number of instances during the historical HYBRID_PAID period. The user restores services.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetOldHybridBillingPrepaidReplicas() const;

                    /**
                     * 设置Number of instances during the historical HYBRID_PAID period. The user restores services.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _oldHybridBillingPrepaidReplicas Number of instances during the historical HYBRID_PAID period. The user restores services.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOldHybridBillingPrepaidReplicas(const int64_t& _oldHybridBillingPrepaidReplicas);

                    /**
                     * 判断参数 OldHybridBillingPrepaidReplicas 是否已赋值
                     * @return OldHybridBillingPrepaidReplicas 是否已赋值
                     * 
                     */
                    bool OldHybridBillingPrepaidReplicasHasBeenSet() const;

                    /**
                     * 获取Whether to enable hot update for the model. By default, hot update is disabled.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ModelHotUpdateEnable Whether to enable hot update for the model. By default, hot update is disabled.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetModelHotUpdateEnable() const;

                    /**
                     * 设置Whether to enable hot update for the model. By default, hot update is disabled.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _modelHotUpdateEnable Whether to enable hot update for the model. By default, hot update is disabled.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetModelHotUpdateEnable(const bool& _modelHotUpdateEnable);

                    /**
                     * 判断参数 ModelHotUpdateEnable 是否已赋值
                     * @return ModelHotUpdateEnable 是否已赋值
                     * 
                     */
                    bool ModelHotUpdateEnableHasBeenSet() const;

                    /**
                     * 获取Service specification alias.
                     * @return InstanceAlias Service specification alias.
                     * 
                     */
                    std::string GetInstanceAlias() const;

                    /**
                     * 设置Service specification alias.
                     * @param _instanceAlias Service specification alias.
                     * 
                     */
                    void SetInstanceAlias(const std::string& _instanceAlias);

                    /**
                     * 判断参数 InstanceAlias 是否已赋值
                     * @return InstanceAlias 是否已赋值
                     * 
                     */
                    bool InstanceAliasHasBeenSet() const;

                    /**
                     * 获取Instance quantity adjusting mode. Defaults to manual.Supported valid values: AUTO (automatic), MANUAL (manual).Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ScaleMode Instance quantity adjusting mode. Defaults to manual.Supported valid values: AUTO (automatic), MANUAL (manual).Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetScaleMode() const;

                    /**
                     * 设置Instance quantity adjusting mode. Defaults to manual.Supported valid values: AUTO (automatic), MANUAL (manual).Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _scaleMode Instance quantity adjusting mode. Defaults to manual.Supported valid values: AUTO (automatic), MANUAL (manual).Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetScaleMode(const std::string& _scaleMode);

                    /**
                     * 判断参数 ScaleMode 是否已赋值
                     * @return ScaleMode 是否已赋值
                     * 
                     */
                    bool ScaleModeHasBeenSet() const;

                    /**
                     * 获取Scheduled scaling task.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CronScaleJobs Scheduled scaling task.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<CronScaleJob> GetCronScaleJobs() const;

                    /**
                     * 设置Scheduled scaling task.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cronScaleJobs Scheduled scaling task.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCronScaleJobs(const std::vector<CronScaleJob>& _cronScaleJobs);

                    /**
                     * 判断参数 CronScaleJobs 是否已赋值
                     * @return CronScaleJobs 是否已赋值
                     * 
                     */
                    bool CronScaleJobsHasBeenSet() const;

                    /**
                     * 获取Scheduled scaling policy.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ScaleStrategy Scheduled scaling policy.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetScaleStrategy() const;

                    /**
                     * 设置Scheduled scaling policy.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _scaleStrategy Scheduled scaling policy.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetScaleStrategy(const std::string& _scaleStrategy);

                    /**
                     * 判断参数 ScaleStrategy 是否已赋值
                     * @return ScaleStrategy 是否已赋值
                     * 
                     */
                    bool ScaleStrategyHasBeenSet() const;

                    /**
                     * 获取Configurations of the scheduled stop.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ScheduledAction Configurations of the scheduled stop.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ScheduledAction GetScheduledAction() const;

                    /**
                     * 设置Configurations of the scheduled stop.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _scheduledAction Configurations of the scheduled stop.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetScheduledAction(const ScheduledAction& _scheduledAction);

                    /**
                     * 判断参数 ScheduledAction 是否已赋值
                     * @return ScheduledAction 是否已赋值
                     * 
                     */
                    bool ScheduledActionHasBeenSet() const;

                    /**
                     * 获取Instance list.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PodList Instance list.Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    std::vector<std::string> GetPodList() const;

                    /**
                     * 设置Instance list.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _podList Instance list.Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    void SetPodList(const std::vector<std::string>& _podList);

                    /**
                     * 判断参数 PodList 是否已赋值
                     * @return PodList 是否已赋值
                     * @deprecated
                     */
                    bool PodListHasBeenSet() const;

                    /**
                     * 获取Pod list information.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Pods Pod list information.Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    Pod GetPods() const;

                    /**
                     * 设置Pod list information.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _pods Pod list information.Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    void SetPods(const Pod& _pods);

                    /**
                     * 判断参数 Pods 是否已赋值
                     * @return Pods 是否已赋值
                     * @deprecated
                     */
                    bool PodsHasBeenSet() const;

                    /**
                     * 获取Pod list information.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PodInfos Pod list information.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Pod> GetPodInfos() const;

                    /**
                     * 设置Pod list information.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _podInfos Pod list information.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPodInfos(const std::vector<Pod>& _podInfos);

                    /**
                     * 判断参数 PodInfos 是否已赋值
                     * @return PodInfos 是否已赋值
                     * 
                     */
                    bool PodInfosHasBeenSet() const;

                    /**
                     * 获取Configurations related to speed limit and throttling of services.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ServiceLimit Configurations related to speed limit and throttling of services.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ServiceLimit GetServiceLimit() const;

                    /**
                     * 设置Configurations related to speed limit and throttling of services.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _serviceLimit Configurations related to speed limit and throttling of services.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetServiceLimit(const ServiceLimit& _serviceLimit);

                    /**
                     * 判断参数 ServiceLimit 是否已赋值
                     * @return ServiceLimit 是否已赋值
                     * 
                     */
                    bool ServiceLimitHasBeenSet() const;

                    /**
                     * 获取Whether to enable model acceleration, which is only valid for models in the StableDiffusion (dynamic acceleration) format.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ModelTurboEnable Whether to enable model acceleration, which is only valid for models in the StableDiffusion (dynamic acceleration) format.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetModelTurboEnable() const;

                    /**
                     * 设置Whether to enable model acceleration, which is only valid for models in the StableDiffusion (dynamic acceleration) format.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _modelTurboEnable Whether to enable model acceleration, which is only valid for models in the StableDiffusion (dynamic acceleration) format.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetModelTurboEnable(const bool& _modelTurboEnable);

                    /**
                     * 判断参数 ModelTurboEnable 是否已赋值
                     * @return ModelTurboEnable 是否已赋值
                     * 
                     */
                    bool ModelTurboEnableHasBeenSet() const;

                    /**
                     * 获取Mounting.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VolumeMount Mounting.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    VolumeMount GetVolumeMount() const;

                    /**
                     * 设置Mounting.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _volumeMount Mounting.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVolumeMount(const VolumeMount& _volumeMount);

                    /**
                     * 判断参数 VolumeMount 是否已赋值
                     * @return VolumeMount 是否已赋值
                     * 
                     */
                    bool VolumeMountHasBeenSet() const;

                    /**
                     * 获取Inference code information.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InferCodeInfo Inference code information.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    InferCodeInfo GetInferCodeInfo() const;

                    /**
                     * 设置Inference code information.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _inferCodeInfo Inference code information.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInferCodeInfo(const InferCodeInfo& _inferCodeInfo);

                    /**
                     * 判断参数 InferCodeInfo 是否已赋值
                     * @return InferCodeInfo 是否已赋值
                     * 
                     */
                    bool InferCodeInfoHasBeenSet() const;

                    /**
                     * 获取Service startup command.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Command Service startup command.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCommand() const;

                    /**
                     * 设置Service startup command.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _command Service startup command.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCommand(const std::string& _command);

                    /**
                     * 判断参数 Command 是否已赋值
                     * @return Command 是否已赋值
                     * 
                     */
                    bool CommandHasBeenSet() const;

                    /**
                     * 获取Settings of enabling the TI-ONE private network to access external resources.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ServiceEIP Settings of enabling the TI-ONE private network to access external resources.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ServiceEIP GetServiceEIP() const;

                    /**
                     * 设置Settings of enabling the TI-ONE private network to access external resources.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _serviceEIP Settings of enabling the TI-ONE private network to access external resources.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetServiceEIP(const ServiceEIP& _serviceEIP);

                    /**
                     * 判断参数 ServiceEIP 是否已赋值
                     * @return ServiceEIP 是否已赋值
                     * 
                     */
                    bool ServiceEIPHasBeenSet() const;

                    /**
                     * 获取Service port, with the default value of 8501.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ServicePort Service port, with the default value of 8501.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetServicePort() const;

                    /**
                     * 设置Service port, with the default value of 8501.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _servicePort Service port, with the default value of 8501.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetServicePort(const int64_t& _servicePort);

                    /**
                     * 判断参数 ServicePort 是否已赋值
                     * @return ServicePort 是否已赋值
                     * 
                     */
                    bool ServicePortHasBeenSet() const;

                    /**
                     * 获取Graceful exit time limit of the service, in seconds. Default value: 30. Minimum value: 1.
                     * @return TerminationGracePeriodSeconds Graceful exit time limit of the service, in seconds. Default value: 30. Minimum value: 1.
                     * 
                     */
                    int64_t GetTerminationGracePeriodSeconds() const;

                    /**
                     * 设置Graceful exit time limit of the service, in seconds. Default value: 30. Minimum value: 1.
                     * @param _terminationGracePeriodSeconds Graceful exit time limit of the service, in seconds. Default value: 30. Minimum value: 1.
                     * 
                     */
                    void SetTerminationGracePeriodSeconds(const int64_t& _terminationGracePeriodSeconds);

                    /**
                     * 判断参数 TerminationGracePeriodSeconds 是否已赋值
                     * @return TerminationGracePeriodSeconds 是否已赋值
                     * 
                     */
                    bool TerminationGracePeriodSecondsHasBeenSet() const;

                    /**
                     * 获取Command executed before the service instance stops. The instance ends after the command execution is completed or after the execution time exceeds the graceful exit time limit.
                     * @return PreStopCommand Command executed before the service instance stops. The instance ends after the command execution is completed or after the execution time exceeds the graceful exit time limit.
                     * 
                     */
                    std::vector<std::string> GetPreStopCommand() const;

                    /**
                     * 设置Command executed before the service instance stops. The instance ends after the command execution is completed or after the execution time exceeds the graceful exit time limit.
                     * @param _preStopCommand Command executed before the service instance stops. The instance ends after the command execution is completed or after the execution time exceeds the graceful exit time limit.
                     * 
                     */
                    void SetPreStopCommand(const std::vector<std::string>& _preStopCommand);

                    /**
                     * 判断参数 PreStopCommand 是否已赋值
                     * @return PreStopCommand 是否已赋值
                     * 
                     */
                    bool PreStopCommandHasBeenSet() const;

                    /**
                     * 获取Whether to enable the gRPC port.
                     * @return GrpcEnable Whether to enable the gRPC port.
                     * 
                     */
                    bool GetGrpcEnable() const;

                    /**
                     * 设置Whether to enable the gRPC port.
                     * @param _grpcEnable Whether to enable the gRPC port.
                     * 
                     */
                    void SetGrpcEnable(const bool& _grpcEnable);

                    /**
                     * 判断参数 GrpcEnable 是否已赋值
                     * @return GrpcEnable 是否已赋值
                     * 
                     */
                    bool GrpcEnableHasBeenSet() const;

                    /**
                     * 获取Health probe.
                     * @return HealthProbe Health probe.
                     * 
                     */
                    HealthProbe GetHealthProbe() const;

                    /**
                     * 设置Health probe.
                     * @param _healthProbe Health probe.
                     * 
                     */
                    void SetHealthProbe(const HealthProbe& _healthProbe);

                    /**
                     * 判断参数 HealthProbe 是否已赋值
                     * @return HealthProbe 是否已赋值
                     * 
                     */
                    bool HealthProbeHasBeenSet() const;

                    /**
                     * 获取Rolling update configurations.
                     * @return RollingUpdate Rolling update configurations.
                     * 
                     */
                    RollingUpdate GetRollingUpdate() const;

                    /**
                     * 设置Rolling update configurations.
                     * @param _rollingUpdate Rolling update configurations.
                     * 
                     */
                    void SetRollingUpdate(const RollingUpdate& _rollingUpdate);

                    /**
                     * 判断参数 RollingUpdate 是否已赋值
                     * @return RollingUpdate 是否已赋值
                     * 
                     */
                    bool RollingUpdateHasBeenSet() const;

                    /**
                     * 获取Number of instances per replica. This parameter is valid only when the deployment type is DIST or ROLE. Default value: 1.
                     * @return InstancePerReplicas Number of instances per replica. This parameter is valid only when the deployment type is DIST or ROLE. Default value: 1.
                     * 
                     */
                    int64_t GetInstancePerReplicas() const;

                    /**
                     * 设置Number of instances per replica. This parameter is valid only when the deployment type is DIST or ROLE. Default value: 1.
                     * @param _instancePerReplicas Number of instances per replica. This parameter is valid only when the deployment type is DIST or ROLE. Default value: 1.
                     * 
                     */
                    void SetInstancePerReplicas(const int64_t& _instancePerReplicas);

                    /**
                     * 判断参数 InstancePerReplicas 是否已赋值
                     * @return InstancePerReplicas 是否已赋值
                     * 
                     */
                    bool InstancePerReplicasHasBeenSet() const;

                    /**
                     * 获取Batch data disk mounting configurations.
                     * @return VolumeMounts Batch data disk mounting configurations.
                     * 
                     */
                    std::vector<VolumeMount> GetVolumeMounts() const;

                    /**
                     * 设置Batch data disk mounting configurations.
                     * @param _volumeMounts Batch data disk mounting configurations.
                     * 
                     */
                    void SetVolumeMounts(const std::vector<VolumeMount>& _volumeMounts);

                    /**
                     * 判断参数 VolumeMounts 是否已赋值
                     * @return VolumeMounts 是否已赋值
                     * 
                     */
                    bool VolumeMountsHasBeenSet() const;

                private:

                    /**
                     * Expected number of running Pods. The instance is 0 when the stop status is reached.Corresponding relationships under different billing and scaling modes are as follows.PREPAID and POSTPAID_BY_HOUR:Corresponding number of instances in the manual scaling mode.Corresponding number of instances based on the default time-based policy in the auto-scaling mode.HYBRID_PAID:
Corresponding number of instances for postpaid instances in the manual scaling mode.Corresponding number of instances under the default time-based policy for postpaid instances in the auto-scaling mode.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_replicas;
                    bool m_replicasHasBeenSet;

                    /**
                     * Image information.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ImageInfo m_imageInfo;
                    bool m_imageInfoHasBeenSet;

                    /**
                     * Environment variables.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<EnvVar> m_env;
                    bool m_envHasBeenSet;

                    /**
                     * Resource information.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ResourceInfo m_resources;
                    bool m_resourcesHasBeenSet;

                    /**
                     * Type specifications corresponding to the postpaid instance.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * Model information.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ModelInfo m_modelInfo;
                    bool m_modelInfoHasBeenSet;

                    /**
                     * Whether to enable logs.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_logEnable;
                    bool m_logEnableHasBeenSet;

                    /**
                     * Log configurations.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    LogConfig m_logConfig;
                    bool m_logConfigHasBeenSet;

                    /**
                     * Whether to enable authentication.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_authorizationEnable;
                    bool m_authorizationEnableHasBeenSet;

                    /**
                     * HPA configurations.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    HorizontalPodAutoscaler m_horizontalPodAutoscaler;
                    bool m_horizontalPodAutoscalerHasBeenSet;

                    /**
                     * Description of the service status.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    WorkloadStatus m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Weight.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * Total resources.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ResourceInfo m_resourceTotal;
                    bool m_resourceTotalHasBeenSet;

                    /**
                     * Number of historical instances.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_oldReplicas;
                    bool m_oldReplicasHasBeenSet;

                    /**
                     * This parameter is valid when the billing mode is HYBRID_PAID, and is used to identify the number of prepaid instances in the hybrid billing mode. The default value is 1 if this parameter is left unspecified.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_hybridBillingPrepaidReplicas;
                    bool m_hybridBillingPrepaidReplicasHasBeenSet;

                    /**
                     * Number of instances during the historical HYBRID_PAID period. The user restores services.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_oldHybridBillingPrepaidReplicas;
                    bool m_oldHybridBillingPrepaidReplicasHasBeenSet;

                    /**
                     * Whether to enable hot update for the model. By default, hot update is disabled.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_modelHotUpdateEnable;
                    bool m_modelHotUpdateEnableHasBeenSet;

                    /**
                     * Service specification alias.
                     */
                    std::string m_instanceAlias;
                    bool m_instanceAliasHasBeenSet;

                    /**
                     * Instance quantity adjusting mode. Defaults to manual.Supported valid values: AUTO (automatic), MANUAL (manual).Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_scaleMode;
                    bool m_scaleModeHasBeenSet;

                    /**
                     * Scheduled scaling task.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<CronScaleJob> m_cronScaleJobs;
                    bool m_cronScaleJobsHasBeenSet;

                    /**
                     * Scheduled scaling policy.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_scaleStrategy;
                    bool m_scaleStrategyHasBeenSet;

                    /**
                     * Configurations of the scheduled stop.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ScheduledAction m_scheduledAction;
                    bool m_scheduledActionHasBeenSet;

                    /**
                     * Instance list.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_podList;
                    bool m_podListHasBeenSet;

                    /**
                     * Pod list information.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    Pod m_pods;
                    bool m_podsHasBeenSet;

                    /**
                     * Pod list information.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Pod> m_podInfos;
                    bool m_podInfosHasBeenSet;

                    /**
                     * Configurations related to speed limit and throttling of services.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ServiceLimit m_serviceLimit;
                    bool m_serviceLimitHasBeenSet;

                    /**
                     * Whether to enable model acceleration, which is only valid for models in the StableDiffusion (dynamic acceleration) format.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_modelTurboEnable;
                    bool m_modelTurboEnableHasBeenSet;

                    /**
                     * Mounting.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    VolumeMount m_volumeMount;
                    bool m_volumeMountHasBeenSet;

                    /**
                     * Inference code information.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    InferCodeInfo m_inferCodeInfo;
                    bool m_inferCodeInfoHasBeenSet;

                    /**
                     * Service startup command.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_command;
                    bool m_commandHasBeenSet;

                    /**
                     * Settings of enabling the TI-ONE private network to access external resources.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ServiceEIP m_serviceEIP;
                    bool m_serviceEIPHasBeenSet;

                    /**
                     * Service port, with the default value of 8501.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_servicePort;
                    bool m_servicePortHasBeenSet;

                    /**
                     * Graceful exit time limit of the service, in seconds. Default value: 30. Minimum value: 1.
                     */
                    int64_t m_terminationGracePeriodSeconds;
                    bool m_terminationGracePeriodSecondsHasBeenSet;

                    /**
                     * Command executed before the service instance stops. The instance ends after the command execution is completed or after the execution time exceeds the graceful exit time limit.
                     */
                    std::vector<std::string> m_preStopCommand;
                    bool m_preStopCommandHasBeenSet;

                    /**
                     * Whether to enable the gRPC port.
                     */
                    bool m_grpcEnable;
                    bool m_grpcEnableHasBeenSet;

                    /**
                     * Health probe.
                     */
                    HealthProbe m_healthProbe;
                    bool m_healthProbeHasBeenSet;

                    /**
                     * Rolling update configurations.
                     */
                    RollingUpdate m_rollingUpdate;
                    bool m_rollingUpdateHasBeenSet;

                    /**
                     * Number of instances per replica. This parameter is valid only when the deployment type is DIST or ROLE. Default value: 1.
                     */
                    int64_t m_instancePerReplicas;
                    bool m_instancePerReplicasHasBeenSet;

                    /**
                     * Batch data disk mounting configurations.
                     */
                    std::vector<VolumeMount> m_volumeMounts;
                    bool m_volumeMountsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_SERVICEINFO_H_
