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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_UPDATEDATAENGINEREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_UPDATEDATAENGINEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/CrontabResumeSuspendStrategy.h>
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
                * UpdateDataEngine request structure.
                */
                class UpdateDataEngineRequest : public AbstractModel
                {
                public:
                    UpdateDataEngineRequest();
                    ~UpdateDataEngineRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Resource size
                     * @return Size Resource size
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置Resource size
                     * @param _size Resource size
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
                     * 获取Minimum CU resource
                     * @return MinClusters Minimum CU resource
                     * 
                     */
                    int64_t GetMinClusters() const;

                    /**
                     * 设置Minimum CU resource
                     * @param _minClusters Minimum CU resource
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
                     * 获取Maximum CU resource
                     * @return MaxClusters Maximum CU resource
                     * 
                     */
                    int64_t GetMaxClusters() const;

                    /**
                     * 设置Maximum CU resource
                     * @param _maxClusters Maximum CU resource
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
                     * 获取Enable the auto-refresh. True means that it is enabled while false means that it is disabled (by default).
                     * @return AutoResume Enable the auto-refresh. True means that it is enabled while false means that it is disabled (by default).
                     * 
                     */
                    bool GetAutoResume() const;

                    /**
                     * 设置Enable the auto-refresh. True means that it is enabled while false means that it is disabled (by default).
                     * @param _autoResume Enable the auto-refresh. True means that it is enabled while false means that it is disabled (by default).
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
                     * 获取Data engine name
                     * @return DataEngineName Data engine name
                     * 
                     */
                    std::string GetDataEngineName() const;

                    /**
                     * 设置Data engine name
                     * @param _dataEngineName Data engine name
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
                     * 获取Related information
                     * @return Message Related information
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Related information
                     * @param _message Related information
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
                     * 获取Whether to automatically suspend the cluster. False means no (by default) while true means yes.
                     * @return AutoSuspend Whether to automatically suspend the cluster. False means no (by default) while true means yes.
                     * 
                     */
                    bool GetAutoSuspend() const;

                    /**
                     * 设置Whether to automatically suspend the cluster. False means no (by default) while true means yes.
                     * @param _autoSuspend Whether to automatically suspend the cluster. False means no (by default) while true means yes.
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
                     * 获取Scheduling policy of starting and ending the cluster: 0 (by default) indicates disabling the scheduling policy; 1 indicates enabling the scheduling policy. (Note: The scheduling policy and the automatic suspension policy are mutually exclusive.)
                     * @return CrontabResumeSuspend Scheduling policy of starting and ending the cluster: 0 (by default) indicates disabling the scheduling policy; 1 indicates enabling the scheduling policy. (Note: The scheduling policy and the automatic suspension policy are mutually exclusive.)
                     * 
                     */
                    int64_t GetCrontabResumeSuspend() const;

                    /**
                     * 设置Scheduling policy of starting and ending the cluster: 0 (by default) indicates disabling the scheduling policy; 1 indicates enabling the scheduling policy. (Note: The scheduling policy and the automatic suspension policy are mutually exclusive.)
                     * @param _crontabResumeSuspend Scheduling policy of starting and ending the cluster: 0 (by default) indicates disabling the scheduling policy; 1 indicates enabling the scheduling policy. (Note: The scheduling policy and the automatic suspension policy are mutually exclusive.)
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
                     * 获取Scheduling policy for the start and end; the complex type includes start and end time and the cluster suspension policy.
                     * @return CrontabResumeSuspendStrategy Scheduling policy for the start and end; the complex type includes start and end time and the cluster suspension policy.
                     * 
                     */
                    CrontabResumeSuspendStrategy GetCrontabResumeSuspendStrategy() const;

                    /**
                     * 设置Scheduling policy for the start and end; the complex type includes start and end time and the cluster suspension policy.
                     * @param _crontabResumeSuspendStrategy Scheduling policy for the start and end; the complex type includes start and end time and the cluster suspension policy.
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
                     * 获取The maximum number of concurrent tasks for a single cluster, which is 5 by default.
                     * @return MaxConcurrency The maximum number of concurrent tasks for a single cluster, which is 5 by default.
                     * 
                     */
                    int64_t GetMaxConcurrency() const;

                    /**
                     * 设置The maximum number of concurrent tasks for a single cluster, which is 5 by default.
                     * @param _maxConcurrency The maximum number of concurrent tasks for a single cluster, which is 5 by default.
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
                     * 获取Tolerable queuing time, and it is 0 by default. When the queuing time for tasks exceeds the tolerable time, it may trigger scale-out. If this parameter is 0, it means that scale-out may be triggered immediately once tasks start queuing.
                     * @return TolerableQueueTime Tolerable queuing time, and it is 0 by default. When the queuing time for tasks exceeds the tolerable time, it may trigger scale-out. If this parameter is 0, it means that scale-out may be triggered immediately once tasks start queuing.
                     * 
                     */
                    int64_t GetTolerableQueueTime() const;

                    /**
                     * 设置Tolerable queuing time, and it is 0 by default. When the queuing time for tasks exceeds the tolerable time, it may trigger scale-out. If this parameter is 0, it means that scale-out may be triggered immediately once tasks start queuing.
                     * @param _tolerableQueueTime Tolerable queuing time, and it is 0 by default. When the queuing time for tasks exceeds the tolerable time, it may trigger scale-out. If this parameter is 0, it means that scale-out may be triggered immediately once tasks start queuing.
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
                     * 获取Cluster automatic suspension time
                     * @return AutoSuspendTime Cluster automatic suspension time
                     * 
                     */
                    int64_t GetAutoSuspendTime() const;

                    /**
                     * 设置Cluster automatic suspension time
                     * @param _autoSuspendTime Cluster automatic suspension time
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
                     * 获取Whether the AS of the spark jar monthly subscription cluster is enabled
                     * @return ElasticSwitch Whether the AS of the spark jar monthly subscription cluster is enabled
                     * 
                     */
                    bool GetElasticSwitch() const;

                    /**
                     * 设置Whether the AS of the spark jar monthly subscription cluster is enabled
                     * @param _elasticSwitch Whether the AS of the spark jar monthly subscription cluster is enabled
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
                     * 获取Upper limit of the spark jar monthly subscription cluster elastic scaling
                     * @return ElasticLimit Upper limit of the spark jar monthly subscription cluster elastic scaling
                     * 
                     */
                    int64_t GetElasticLimit() const;

                    /**
                     * 设置Upper limit of the spark jar monthly subscription cluster elastic scaling
                     * @param _elasticLimit Upper limit of the spark jar monthly subscription cluster elastic scaling
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
                     * 获取Session resource configuration template of Spark batch job clusters
                     * @return SessionResourceTemplate Session resource configuration template of Spark batch job clusters
                     * 
                     */
                    SessionResourceTemplate GetSessionResourceTemplate() const;

                    /**
                     * 设置Session resource configuration template of Spark batch job clusters
                     * @param _sessionResourceTemplate Session resource configuration template of Spark batch job clusters
                     * 
                     */
                    void SetSessionResourceTemplate(const SessionResourceTemplate& _sessionResourceTemplate);

                    /**
                     * 判断参数 SessionResourceTemplate 是否已赋值
                     * @return SessionResourceTemplate 是否已赋值
                     * 
                     */
                    bool SessionResourceTemplateHasBeenSet() const;

                private:

                    /**
                     * Resource size
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * Minimum CU resource
                     */
                    int64_t m_minClusters;
                    bool m_minClustersHasBeenSet;

                    /**
                     * Maximum CU resource
                     */
                    int64_t m_maxClusters;
                    bool m_maxClustersHasBeenSet;

                    /**
                     * Enable the auto-refresh. True means that it is enabled while false means that it is disabled (by default).
                     */
                    bool m_autoResume;
                    bool m_autoResumeHasBeenSet;

                    /**
                     * Data engine name
                     */
                    std::string m_dataEngineName;
                    bool m_dataEngineNameHasBeenSet;

                    /**
                     * Related information
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Whether to automatically suspend the cluster. False means no (by default) while true means yes.
                     */
                    bool m_autoSuspend;
                    bool m_autoSuspendHasBeenSet;

                    /**
                     * Scheduling policy of starting and ending the cluster: 0 (by default) indicates disabling the scheduling policy; 1 indicates enabling the scheduling policy. (Note: The scheduling policy and the automatic suspension policy are mutually exclusive.)
                     */
                    int64_t m_crontabResumeSuspend;
                    bool m_crontabResumeSuspendHasBeenSet;

                    /**
                     * Scheduling policy for the start and end; the complex type includes start and end time and the cluster suspension policy.
                     */
                    CrontabResumeSuspendStrategy m_crontabResumeSuspendStrategy;
                    bool m_crontabResumeSuspendStrategyHasBeenSet;

                    /**
                     * The maximum number of concurrent tasks for a single cluster, which is 5 by default.
                     */
                    int64_t m_maxConcurrency;
                    bool m_maxConcurrencyHasBeenSet;

                    /**
                     * Tolerable queuing time, and it is 0 by default. When the queuing time for tasks exceeds the tolerable time, it may trigger scale-out. If this parameter is 0, it means that scale-out may be triggered immediately once tasks start queuing.
                     */
                    int64_t m_tolerableQueueTime;
                    bool m_tolerableQueueTimeHasBeenSet;

                    /**
                     * Cluster automatic suspension time
                     */
                    int64_t m_autoSuspendTime;
                    bool m_autoSuspendTimeHasBeenSet;

                    /**
                     * Whether the AS of the spark jar monthly subscription cluster is enabled
                     */
                    bool m_elasticSwitch;
                    bool m_elasticSwitchHasBeenSet;

                    /**
                     * Upper limit of the spark jar monthly subscription cluster elastic scaling
                     */
                    int64_t m_elasticLimit;
                    bool m_elasticLimitHasBeenSet;

                    /**
                     * Session resource configuration template of Spark batch job clusters
                     */
                    SessionResourceTemplate m_sessionResourceTemplate;
                    bool m_sessionResourceTemplateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_UPDATEDATAENGINEREQUEST_H_
