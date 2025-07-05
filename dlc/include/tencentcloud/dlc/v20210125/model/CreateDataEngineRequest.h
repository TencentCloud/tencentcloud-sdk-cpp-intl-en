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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CREATEDATAENGINEREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CREATEDATAENGINEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/TagInfo.h>
#include <tencentcloud/dlc/v20210125/model/CrontabResumeSuspendStrategy.h>
#include <tencentcloud/dlc/v20210125/model/DataEngineConfigPair.h>
#include <tencentcloud/dlc/v20210125/model/SessionResourceTemplate.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * CreateDataEngine request structure.
                */
                class CreateDataEngineRequest : public AbstractModel
                {
                public:
                    CreateDataEngineRequest();
                    ~CreateDataEngineRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The engine type. Valid values: `spark` and `presto`.
                     * @return EngineType The engine type. Valid values: `spark` and `presto`.
                     * 
                     */
                    std::string GetEngineType() const;

                    /**
                     * 设置The engine type. Valid values: `spark` and `presto`.
                     * @param _engineType The engine type. Valid values: `spark` and `presto`.
                     * 
                     */
                    void SetEngineType(const std::string& _engineType);

                    /**
                     * 判断参数 EngineType 是否已赋值
                     * @return EngineType 是否已赋值
                     * 
                     */
                    bool EngineTypeHasBeenSet() const;

                    /**
                     * 获取The name of the virtual cluster.
                     * @return DataEngineName The name of the virtual cluster.
                     * 
                     */
                    std::string GetDataEngineName() const;

                    /**
                     * 设置The name of the virtual cluster.
                     * @param _dataEngineName The name of the virtual cluster.
                     * 
                     */
                    void SetDataEngineName(const std::string& _dataEngineName);

                    /**
                     * 判断参数 DataEngineName 是否已赋值
                     * @return DataEngineName 是否已赋值
                     * 
                     */
                    bool DataEngineNameHasBeenSet() const;

                    /**
                     * 获取The cluster type. Valid values: `spark_private`, `presto_private`, `presto_cu`, and `spark_cu`.
                     * @return ClusterType The cluster type. Valid values: `spark_private`, `presto_private`, `presto_cu`, and `spark_cu`.
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置The cluster type. Valid values: `spark_private`, `presto_private`, `presto_cu`, and `spark_cu`.
                     * @param _clusterType The cluster type. Valid values: `spark_private`, `presto_private`, `presto_cu`, and `spark_cu`.
                     * 
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取The billing mode. Valid values: `0` (shared engine), `1` (pay-as-you-go), and `2` (monthly subscription).
                     * @return Mode The billing mode. Valid values: `0` (shared engine), `1` (pay-as-you-go), and `2` (monthly subscription).
                     * 
                     */
                    int64_t GetMode() const;

                    /**
                     * 设置The billing mode. Valid values: `0` (shared engine), `1` (pay-as-you-go), and `2` (monthly subscription).
                     * @param _mode The billing mode. Valid values: `0` (shared engine), `1` (pay-as-you-go), and `2` (monthly subscription).
                     * 
                     */
                    void SetMode(const int64_t& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取Whether to automatically start the clusters.
                     * @return AutoResume Whether to automatically start the clusters.
                     * 
                     */
                    bool GetAutoResume() const;

                    /**
                     * 设置Whether to automatically start the clusters.
                     * @param _autoResume Whether to automatically start the clusters.
                     * 
                     */
                    void SetAutoResume(const bool& _autoResume);

                    /**
                     * 判断参数 AutoResume 是否已赋值
                     * @return AutoResume 是否已赋值
                     * 
                     */
                    bool AutoResumeHasBeenSet() const;

                    /**
                     * 获取The minimum number of clusters.
                     * @return MinClusters The minimum number of clusters.
                     * 
                     */
                    int64_t GetMinClusters() const;

                    /**
                     * 设置The minimum number of clusters.
                     * @param _minClusters The minimum number of clusters.
                     * 
                     */
                    void SetMinClusters(const int64_t& _minClusters);

                    /**
                     * 判断参数 MinClusters 是否已赋值
                     * @return MinClusters 是否已赋值
                     * 
                     */
                    bool MinClustersHasBeenSet() const;

                    /**
                     * 获取The maximum number of clusters.
                     * @return MaxClusters The maximum number of clusters.
                     * 
                     */
                    int64_t GetMaxClusters() const;

                    /**
                     * 设置The maximum number of clusters.
                     * @param _maxClusters The maximum number of clusters.
                     * 
                     */
                    void SetMaxClusters(const int64_t& _maxClusters);

                    /**
                     * 判断参数 MaxClusters 是否已赋值
                     * @return MaxClusters 是否已赋值
                     * 
                     */
                    bool MaxClustersHasBeenSet() const;

                    /**
                     * 获取Whether the cluster is the default one.
                     * @return DefaultDataEngine Whether the cluster is the default one.
                     * @deprecated
                     */
                    bool GetDefaultDataEngine() const;

                    /**
                     * 设置Whether the cluster is the default one.
                     * @param _defaultDataEngine Whether the cluster is the default one.
                     * @deprecated
                     */
                    void SetDefaultDataEngine(const bool& _defaultDataEngine);

                    /**
                     * 判断参数 DefaultDataEngine 是否已赋值
                     * @return DefaultDataEngine 是否已赋值
                     * @deprecated
                     */
                    bool DefaultDataEngineHasBeenSet() const;

                    /**
                     * 获取The VPC CIDR block.
                     * @return CidrBlock The VPC CIDR block.
                     * 
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置The VPC CIDR block.
                     * @param _cidrBlock The VPC CIDR block.
                     * 
                     */
                    void SetCidrBlock(const std::string& _cidrBlock);

                    /**
                     * 判断参数 CidrBlock 是否已赋值
                     * @return CidrBlock 是否已赋值
                     * 
                     */
                    bool CidrBlockHasBeenSet() const;

                    /**
                     * 获取The description.
                     * @return Message The description.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置The description.
                     * @param _message The description.
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取The cluster size.
                     * @return Size The cluster size.
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置The cluster size.
                     * @param _size The cluster size.
                     * 
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取The pay mode. Valid value: `0` (postpaid, default) and `1` (prepaid) (currently not available).
                     * @return PayMode The pay mode. Valid value: `0` (postpaid, default) and `1` (prepaid) (currently not available).
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置The pay mode. Valid value: `0` (postpaid, default) and `1` (prepaid) (currently not available).
                     * @param _payMode The pay mode. Valid value: `0` (postpaid, default) and `1` (prepaid) (currently not available).
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取The usage duration of the resource. Postpaid: Fill in 3,600 as a fixed figure; prepaid: fill in a figure equal to or bigger than 1 which means purchasing resources for one month. The maximum figure is not bigger than 120. The default value is 1.
                     * @return TimeSpan The usage duration of the resource. Postpaid: Fill in 3,600 as a fixed figure; prepaid: fill in a figure equal to or bigger than 1 which means purchasing resources for one month. The maximum figure is not bigger than 120. The default value is 1.
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置The usage duration of the resource. Postpaid: Fill in 3,600 as a fixed figure; prepaid: fill in a figure equal to or bigger than 1 which means purchasing resources for one month. The maximum figure is not bigger than 120. The default value is 1.
                     * @param _timeSpan The usage duration of the resource. Postpaid: Fill in 3,600 as a fixed figure; prepaid: fill in a figure equal to or bigger than 1 which means purchasing resources for one month. The maximum figure is not bigger than 120. The default value is 1.
                     * 
                     */
                    void SetTimeSpan(const int64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取The unit of the resource period. Valid values: `s` (default) for the postpaid mode and `m` for the prepaid mode.
                     * @return TimeUnit The unit of the resource period. Valid values: `s` (default) for the postpaid mode and `m` for the prepaid mode.
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置The unit of the resource period. Valid values: `s` (default) for the postpaid mode and `m` for the prepaid mode.
                     * @param _timeUnit The unit of the resource period. Valid values: `s` (default) for the postpaid mode and `m` for the prepaid mode.
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
                     * 获取The auto-renewal status of the resource. For the postpaid mode, no renewal is required, and the value is fixed to `0`. For the prepaid mode, valid values are `0` (manual), `1` (auto), and `2` (no renewal). If this parameter is set to `0` for a key account in the prepaid mode, auto-renewal applies. It defaults to `0`.
                     * @return AutoRenew The auto-renewal status of the resource. For the postpaid mode, no renewal is required, and the value is fixed to `0`. For the prepaid mode, valid values are `0` (manual), `1` (auto), and `2` (no renewal). If this parameter is set to `0` for a key account in the prepaid mode, auto-renewal applies. It defaults to `0`.
                     * 
                     */
                    int64_t GetAutoRenew() const;

                    /**
                     * 设置The auto-renewal status of the resource. For the postpaid mode, no renewal is required, and the value is fixed to `0`. For the prepaid mode, valid values are `0` (manual), `1` (auto), and `2` (no renewal). If this parameter is set to `0` for a key account in the prepaid mode, auto-renewal applies. It defaults to `0`.
                     * @param _autoRenew The auto-renewal status of the resource. For the postpaid mode, no renewal is required, and the value is fixed to `0`. For the prepaid mode, valid values are `0` (manual), `1` (auto), and `2` (no renewal). If this parameter is set to `0` for a key account in the prepaid mode, auto-renewal applies. It defaults to `0`.
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
                     * 获取The tags to be set for the resource being created.
                     * @return Tags The tags to be set for the resource being created.
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置The tags to be set for the resource being created.
                     * @param _tags The tags to be set for the resource being created.
                     * 
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Whether to automatically suspend clusters. Valid values: `false` (default, no) and `true` (yes).
                     * @return AutoSuspend Whether to automatically suspend clusters. Valid values: `false` (default, no) and `true` (yes).
                     * 
                     */
                    bool GetAutoSuspend() const;

                    /**
                     * 设置Whether to automatically suspend clusters. Valid values: `false` (default, no) and `true` (yes).
                     * @param _autoSuspend Whether to automatically suspend clusters. Valid values: `false` (default, no) and `true` (yes).
                     * 
                     */
                    void SetAutoSuspend(const bool& _autoSuspend);

                    /**
                     * 判断参数 AutoSuspend 是否已赋值
                     * @return AutoSuspend 是否已赋值
                     * 
                     */
                    bool AutoSuspendHasBeenSet() const;

                    /**
                     * 获取Whether to enable scheduled start and suspension of clusters. Valid values: `0` (disable) and `1` (enable). Note: This policy and the auto-suspension policy are mutually exclusive.
                     * @return CrontabResumeSuspend Whether to enable scheduled start and suspension of clusters. Valid values: `0` (disable) and `1` (enable). Note: This policy and the auto-suspension policy are mutually exclusive.
                     * 
                     */
                    int64_t GetCrontabResumeSuspend() const;

                    /**
                     * 设置Whether to enable scheduled start and suspension of clusters. Valid values: `0` (disable) and `1` (enable). Note: This policy and the auto-suspension policy are mutually exclusive.
                     * @param _crontabResumeSuspend Whether to enable scheduled start and suspension of clusters. Valid values: `0` (disable) and `1` (enable). Note: This policy and the auto-suspension policy are mutually exclusive.
                     * 
                     */
                    void SetCrontabResumeSuspend(const int64_t& _crontabResumeSuspend);

                    /**
                     * 判断参数 CrontabResumeSuspend 是否已赋值
                     * @return CrontabResumeSuspend 是否已赋值
                     * 
                     */
                    bool CrontabResumeSuspendHasBeenSet() const;

                    /**
                     * 获取The complex policy for scheduled start and suspension, including the start/suspension time and suspension policy.
                     * @return CrontabResumeSuspendStrategy The complex policy for scheduled start and suspension, including the start/suspension time and suspension policy.
                     * 
                     */
                    CrontabResumeSuspendStrategy GetCrontabResumeSuspendStrategy() const;

                    /**
                     * 设置The complex policy for scheduled start and suspension, including the start/suspension time and suspension policy.
                     * @param _crontabResumeSuspendStrategy The complex policy for scheduled start and suspension, including the start/suspension time and suspension policy.
                     * 
                     */
                    void SetCrontabResumeSuspendStrategy(const CrontabResumeSuspendStrategy& _crontabResumeSuspendStrategy);

                    /**
                     * 判断参数 CrontabResumeSuspendStrategy 是否已赋值
                     * @return CrontabResumeSuspendStrategy 是否已赋值
                     * 
                     */
                    bool CrontabResumeSuspendStrategyHasBeenSet() const;

                    /**
                     * 获取The type of tasks to be executed by the engine, which defaults to SQL. Valid values: `SQL` and `BATCH`.
                     * @return EngineExecType The type of tasks to be executed by the engine, which defaults to SQL. Valid values: `SQL` and `BATCH`.
                     * 
                     */
                    std::string GetEngineExecType() const;

                    /**
                     * 设置The type of tasks to be executed by the engine, which defaults to SQL. Valid values: `SQL` and `BATCH`.
                     * @param _engineExecType The type of tasks to be executed by the engine, which defaults to SQL. Valid values: `SQL` and `BATCH`.
                     * 
                     */
                    void SetEngineExecType(const std::string& _engineExecType);

                    /**
                     * 判断参数 EngineExecType 是否已赋值
                     * @return EngineExecType 是否已赋值
                     * 
                     */
                    bool EngineExecTypeHasBeenSet() const;

                    /**
                     * 获取The max task concurrency of a cluster, which defaults to 5.
                     * @return MaxConcurrency The max task concurrency of a cluster, which defaults to 5.
                     * 
                     */
                    int64_t GetMaxConcurrency() const;

                    /**
                     * 设置The max task concurrency of a cluster, which defaults to 5.
                     * @param _maxConcurrency The max task concurrency of a cluster, which defaults to 5.
                     * 
                     */
                    void SetMaxConcurrency(const int64_t& _maxConcurrency);

                    /**
                     * 判断参数 MaxConcurrency 是否已赋值
                     * @return MaxConcurrency 是否已赋值
                     * 
                     */
                    bool MaxConcurrencyHasBeenSet() const;

                    /**
                     * 获取The task queue time limit, which defaults to 0. When the actual queue time exceeds the value set here, scale-out may be triggered. Setting this parameter to 0 represents that scale-out may be triggered immediately after a task queues up.
                     * @return TolerableQueueTime The task queue time limit, which defaults to 0. When the actual queue time exceeds the value set here, scale-out may be triggered. Setting this parameter to 0 represents that scale-out may be triggered immediately after a task queues up.
                     * 
                     */
                    int64_t GetTolerableQueueTime() const;

                    /**
                     * 设置The task queue time limit, which defaults to 0. When the actual queue time exceeds the value set here, scale-out may be triggered. Setting this parameter to 0 represents that scale-out may be triggered immediately after a task queues up.
                     * @param _tolerableQueueTime The task queue time limit, which defaults to 0. When the actual queue time exceeds the value set here, scale-out may be triggered. Setting this parameter to 0 represents that scale-out may be triggered immediately after a task queues up.
                     * 
                     */
                    void SetTolerableQueueTime(const int64_t& _tolerableQueueTime);

                    /**
                     * 判断参数 TolerableQueueTime 是否已赋值
                     * @return TolerableQueueTime 是否已赋值
                     * 
                     */
                    bool TolerableQueueTimeHasBeenSet() const;

                    /**
                     * 获取The cluster auto-suspension time, which defaults to 10 min.
                     * @return AutoSuspendTime The cluster auto-suspension time, which defaults to 10 min.
                     * 
                     */
                    int64_t GetAutoSuspendTime() const;

                    /**
                     * 设置The cluster auto-suspension time, which defaults to 10 min.
                     * @param _autoSuspendTime The cluster auto-suspension time, which defaults to 10 min.
                     * 
                     */
                    void SetAutoSuspendTime(const int64_t& _autoSuspendTime);

                    /**
                     * 判断参数 AutoSuspendTime 是否已赋值
                     * @return AutoSuspendTime 是否已赋值
                     * 
                     */
                    bool AutoSuspendTimeHasBeenSet() const;

                    /**
                     * 获取The resource type. Valid values: `Standard_CU` (standard) and `Memory_CU` (memory).
                     * @return ResourceType The resource type. Valid values: `Standard_CU` (standard) and `Memory_CU` (memory).
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置The resource type. Valid values: `Standard_CU` (standard) and `Memory_CU` (memory).
                     * @param _resourceType The resource type. Valid values: `Standard_CU` (standard) and `Memory_CU` (memory).
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取The advanced configurations of clusters.
                     * @return DataEngineConfigPairs The advanced configurations of clusters.
                     * 
                     */
                    std::vector<DataEngineConfigPair> GetDataEngineConfigPairs() const;

                    /**
                     * 设置The advanced configurations of clusters.
                     * @param _dataEngineConfigPairs The advanced configurations of clusters.
                     * 
                     */
                    void SetDataEngineConfigPairs(const std::vector<DataEngineConfigPair>& _dataEngineConfigPairs);

                    /**
                     * 判断参数 DataEngineConfigPairs 是否已赋值
                     * @return DataEngineConfigPairs 是否已赋值
                     * 
                     */
                    bool DataEngineConfigPairsHasBeenSet() const;

                    /**
                     * 获取The version name of cluster image, such as SuperSQL-P 1.1 and SuperSQL-S 3.2. If no value is passed in, a cluster is created using the latest image version.
                     * @return ImageVersionName The version name of cluster image, such as SuperSQL-P 1.1 and SuperSQL-S 3.2. If no value is passed in, a cluster is created using the latest image version.
                     * 
                     */
                    std::string GetImageVersionName() const;

                    /**
                     * 设置The version name of cluster image, such as SuperSQL-P 1.1 and SuperSQL-S 3.2. If no value is passed in, a cluster is created using the latest image version.
                     * @param _imageVersionName The version name of cluster image, such as SuperSQL-P 1.1 and SuperSQL-S 3.2. If no value is passed in, a cluster is created using the latest image version.
                     * 
                     */
                    void SetImageVersionName(const std::string& _imageVersionName);

                    /**
                     * 判断参数 ImageVersionName 是否已赋值
                     * @return ImageVersionName 是否已赋值
                     * 
                     */
                    bool ImageVersionNameHasBeenSet() const;

                    /**
                     * 获取The primary cluster, which is specified when a failover cluster is created.
                     * @return MainClusterName The primary cluster, which is specified when a failover cluster is created.
                     * 
                     */
                    std::string GetMainClusterName() const;

                    /**
                     * 设置The primary cluster, which is specified when a failover cluster is created.
                     * @param _mainClusterName The primary cluster, which is specified when a failover cluster is created.
                     * 
                     */
                    void SetMainClusterName(const std::string& _mainClusterName);

                    /**
                     * 判断参数 MainClusterName 是否已赋值
                     * @return MainClusterName 是否已赋值
                     * 
                     */
                    bool MainClusterNameHasBeenSet() const;

                    /**
                     * 获取Whether to enable the scaling feature for a monthly subscribed Spark job cluster.
                     * @return ElasticSwitch Whether to enable the scaling feature for a monthly subscribed Spark job cluster.
                     * 
                     */
                    bool GetElasticSwitch() const;

                    /**
                     * 设置Whether to enable the scaling feature for a monthly subscribed Spark job cluster.
                     * @param _elasticSwitch Whether to enable the scaling feature for a monthly subscribed Spark job cluster.
                     * 
                     */
                    void SetElasticSwitch(const bool& _elasticSwitch);

                    /**
                     * 判断参数 ElasticSwitch 是否已赋值
                     * @return ElasticSwitch 是否已赋值
                     * 
                     */
                    bool ElasticSwitchHasBeenSet() const;

                    /**
                     * 获取The upper limit (in CUs) for scaling of the monthly subscribed Spark job cluster.
                     * @return ElasticLimit The upper limit (in CUs) for scaling of the monthly subscribed Spark job cluster.
                     * 
                     */
                    int64_t GetElasticLimit() const;

                    /**
                     * 设置The upper limit (in CUs) for scaling of the monthly subscribed Spark job cluster.
                     * @param _elasticLimit The upper limit (in CUs) for scaling of the monthly subscribed Spark job cluster.
                     * 
                     */
                    void SetElasticLimit(const int64_t& _elasticLimit);

                    /**
                     * 判断参数 ElasticLimit 是否已赋值
                     * @return ElasticLimit 是否已赋值
                     * 
                     */
                    bool ElasticLimitHasBeenSet() const;

                    /**
                     * 获取The session resource configuration template for a Spark job cluster.
                     * @return SessionResourceTemplate The session resource configuration template for a Spark job cluster.
                     * 
                     */
                    SessionResourceTemplate GetSessionResourceTemplate() const;

                    /**
                     * 设置The session resource configuration template for a Spark job cluster.
                     * @param _sessionResourceTemplate The session resource configuration template for a Spark job cluster.
                     * 
                     */
                    void SetSessionResourceTemplate(const SessionResourceTemplate& _sessionResourceTemplate);

                    /**
                     * 判断参数 SessionResourceTemplate 是否已赋值
                     * @return SessionResourceTemplate 是否已赋值
                     * 
                     */
                    bool SessionResourceTemplateHasBeenSet() const;

                    /**
                     * 获取Automatically grant permissions
                     * @return AutoAuthorization Automatically grant permissions
                     * 
                     */
                    bool GetAutoAuthorization() const;

                    /**
                     * 设置Automatically grant permissions
                     * @param _autoAuthorization Automatically grant permissions
                     * 
                     */
                    void SetAutoAuthorization(const bool& _autoAuthorization);

                    /**
                     * 判断参数 AutoAuthorization 是否已赋值
                     * @return AutoAuthorization 是否已赋值
                     * 
                     */
                    bool AutoAuthorizationHasBeenSet() const;

                    /**
                     * 获取Engine network ID
                     * @return EngineNetworkId Engine network ID
                     * 
                     */
                    std::string GetEngineNetworkId() const;

                    /**
                     * 设置Engine network ID
                     * @param _engineNetworkId Engine network ID
                     * 
                     */
                    void SetEngineNetworkId(const std::string& _engineNetworkId);

                    /**
                     * 判断参数 EngineNetworkId 是否已赋值
                     * @return EngineNetworkId 是否已赋值
                     * 
                     */
                    bool EngineNetworkIdHasBeenSet() const;

                    /**
                     * 获取Generation of the engine. SuperSQL means the supersql engine while Native means the standard engine. It is SuperSQL by default.
                     * @return EngineGeneration Generation of the engine. SuperSQL means the supersql engine while Native means the standard engine. It is SuperSQL by default.
                     * 
                     */
                    std::string GetEngineGeneration() const;

                    /**
                     * 设置Generation of the engine. SuperSQL means the supersql engine while Native means the standard engine. It is SuperSQL by default.
                     * @param _engineGeneration Generation of the engine. SuperSQL means the supersql engine while Native means the standard engine. It is SuperSQL by default.
                     * 
                     */
                    void SetEngineGeneration(const std::string& _engineGeneration);

                    /**
                     * 判断参数 EngineGeneration 是否已赋值
                     * @return EngineGeneration 是否已赋值
                     * 
                     */
                    bool EngineGenerationHasBeenSet() const;

                private:

                    /**
                     * The engine type. Valid values: `spark` and `presto`.
                     */
                    std::string m_engineType;
                    bool m_engineTypeHasBeenSet;

                    /**
                     * The name of the virtual cluster.
                     */
                    std::string m_dataEngineName;
                    bool m_dataEngineNameHasBeenSet;

                    /**
                     * The cluster type. Valid values: `spark_private`, `presto_private`, `presto_cu`, and `spark_cu`.
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * The billing mode. Valid values: `0` (shared engine), `1` (pay-as-you-go), and `2` (monthly subscription).
                     */
                    int64_t m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * Whether to automatically start the clusters.
                     */
                    bool m_autoResume;
                    bool m_autoResumeHasBeenSet;

                    /**
                     * The minimum number of clusters.
                     */
                    int64_t m_minClusters;
                    bool m_minClustersHasBeenSet;

                    /**
                     * The maximum number of clusters.
                     */
                    int64_t m_maxClusters;
                    bool m_maxClustersHasBeenSet;

                    /**
                     * Whether the cluster is the default one.
                     */
                    bool m_defaultDataEngine;
                    bool m_defaultDataEngineHasBeenSet;

                    /**
                     * The VPC CIDR block.
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * The description.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * The cluster size.
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * The pay mode. Valid value: `0` (postpaid, default) and `1` (prepaid) (currently not available).
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * The usage duration of the resource. Postpaid: Fill in 3,600 as a fixed figure; prepaid: fill in a figure equal to or bigger than 1 which means purchasing resources for one month. The maximum figure is not bigger than 120. The default value is 1.
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * The unit of the resource period. Valid values: `s` (default) for the postpaid mode and `m` for the prepaid mode.
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * The auto-renewal status of the resource. For the postpaid mode, no renewal is required, and the value is fixed to `0`. For the prepaid mode, valid values are `0` (manual), `1` (auto), and `2` (no renewal). If this parameter is set to `0` for a key account in the prepaid mode, auto-renewal applies. It defaults to `0`.
                     */
                    int64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * The tags to be set for the resource being created.
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Whether to automatically suspend clusters. Valid values: `false` (default, no) and `true` (yes).
                     */
                    bool m_autoSuspend;
                    bool m_autoSuspendHasBeenSet;

                    /**
                     * Whether to enable scheduled start and suspension of clusters. Valid values: `0` (disable) and `1` (enable). Note: This policy and the auto-suspension policy are mutually exclusive.
                     */
                    int64_t m_crontabResumeSuspend;
                    bool m_crontabResumeSuspendHasBeenSet;

                    /**
                     * The complex policy for scheduled start and suspension, including the start/suspension time and suspension policy.
                     */
                    CrontabResumeSuspendStrategy m_crontabResumeSuspendStrategy;
                    bool m_crontabResumeSuspendStrategyHasBeenSet;

                    /**
                     * The type of tasks to be executed by the engine, which defaults to SQL. Valid values: `SQL` and `BATCH`.
                     */
                    std::string m_engineExecType;
                    bool m_engineExecTypeHasBeenSet;

                    /**
                     * The max task concurrency of a cluster, which defaults to 5.
                     */
                    int64_t m_maxConcurrency;
                    bool m_maxConcurrencyHasBeenSet;

                    /**
                     * The task queue time limit, which defaults to 0. When the actual queue time exceeds the value set here, scale-out may be triggered. Setting this parameter to 0 represents that scale-out may be triggered immediately after a task queues up.
                     */
                    int64_t m_tolerableQueueTime;
                    bool m_tolerableQueueTimeHasBeenSet;

                    /**
                     * The cluster auto-suspension time, which defaults to 10 min.
                     */
                    int64_t m_autoSuspendTime;
                    bool m_autoSuspendTimeHasBeenSet;

                    /**
                     * The resource type. Valid values: `Standard_CU` (standard) and `Memory_CU` (memory).
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * The advanced configurations of clusters.
                     */
                    std::vector<DataEngineConfigPair> m_dataEngineConfigPairs;
                    bool m_dataEngineConfigPairsHasBeenSet;

                    /**
                     * The version name of cluster image, such as SuperSQL-P 1.1 and SuperSQL-S 3.2. If no value is passed in, a cluster is created using the latest image version.
                     */
                    std::string m_imageVersionName;
                    bool m_imageVersionNameHasBeenSet;

                    /**
                     * The primary cluster, which is specified when a failover cluster is created.
                     */
                    std::string m_mainClusterName;
                    bool m_mainClusterNameHasBeenSet;

                    /**
                     * Whether to enable the scaling feature for a monthly subscribed Spark job cluster.
                     */
                    bool m_elasticSwitch;
                    bool m_elasticSwitchHasBeenSet;

                    /**
                     * The upper limit (in CUs) for scaling of the monthly subscribed Spark job cluster.
                     */
                    int64_t m_elasticLimit;
                    bool m_elasticLimitHasBeenSet;

                    /**
                     * The session resource configuration template for a Spark job cluster.
                     */
                    SessionResourceTemplate m_sessionResourceTemplate;
                    bool m_sessionResourceTemplateHasBeenSet;

                    /**
                     * Automatically grant permissions
                     */
                    bool m_autoAuthorization;
                    bool m_autoAuthorizationHasBeenSet;

                    /**
                     * Engine network ID
                     */
                    std::string m_engineNetworkId;
                    bool m_engineNetworkIdHasBeenSet;

                    /**
                     * Generation of the engine. SuperSQL means the supersql engine while Native means the standard engine. It is SuperSQL by default.
                     */
                    std::string m_engineGeneration;
                    bool m_engineGenerationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CREATEDATAENGINEREQUEST_H_
