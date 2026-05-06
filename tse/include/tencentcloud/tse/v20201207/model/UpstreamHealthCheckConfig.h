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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_UPSTREAMHEALTHCHECKCONFIG_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_UPSTREAMHEALTHCHECKCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/KongActiveHealthCheck.h>
#include <tencentcloud/tse/v20201207/model/KongPassiveHealthCheck.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * Cloud-native gateway health check configuration
                */
                class UpstreamHealthCheckConfig : public AbstractModel
                {
                public:
                    UpstreamHealthCheckConfig();
                    ~UpstreamHealthCheckConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Enable active health check
                     * @return EnableActiveHealthCheck Enable active health check
                     * 
                     */
                    bool GetEnableActiveHealthCheck() const;

                    /**
                     * 设置Enable active health check
                     * @param _enableActiveHealthCheck Enable active health check
                     * 
                     */
                    void SetEnableActiveHealthCheck(const bool& _enableActiveHealthCheck);

                    /**
                     * 判断参数 EnableActiveHealthCheck 是否已赋值
                     * @return EnableActiveHealthCheck 是否已赋值
                     * 
                     */
                    bool EnableActiveHealthCheckHasBeenSet() const;

                    /**
                     * 获取Active health check configuration
                     * @return ActiveHealthCheck Active health check configuration
                     * 
                     */
                    KongActiveHealthCheck GetActiveHealthCheck() const;

                    /**
                     * 设置Active health check configuration
                     * @param _activeHealthCheck Active health check configuration
                     * 
                     */
                    void SetActiveHealthCheck(const KongActiveHealthCheck& _activeHealthCheck);

                    /**
                     * 判断参数 ActiveHealthCheck 是否已赋值
                     * @return ActiveHealthCheck 是否已赋值
                     * 
                     */
                    bool ActiveHealthCheckHasBeenSet() const;

                    /**
                     * 获取Enable passive health check
                     * @return EnablePassiveHealthCheck Enable passive health check
                     * 
                     */
                    bool GetEnablePassiveHealthCheck() const;

                    /**
                     * 设置Enable passive health check
                     * @param _enablePassiveHealthCheck Enable passive health check
                     * 
                     */
                    void SetEnablePassiveHealthCheck(const bool& _enablePassiveHealthCheck);

                    /**
                     * 判断参数 EnablePassiveHealthCheck 是否已赋值
                     * @return EnablePassiveHealthCheck 是否已赋值
                     * 
                     */
                    bool EnablePassiveHealthCheckHasBeenSet() const;

                    /**
                     * 获取Passive health check configuration
                     * @return PassiveHealthCheck Passive health check configuration
                     * 
                     */
                    KongPassiveHealthCheck GetPassiveHealthCheck() const;

                    /**
                     * 设置Passive health check configuration
                     * @param _passiveHealthCheck Passive health check configuration
                     * 
                     */
                    void SetPassiveHealthCheck(const KongPassiveHealthCheck& _passiveHealthCheck);

                    /**
                     * 判断参数 PassiveHealthCheck 是否已赋值
                     * @return PassiveHealthCheck 是否已赋值
                     * 
                     */
                    bool PassiveHealthCheckHasBeenSet() const;

                    /**
                     * 获取Consecutive health threshold, unit: times
                     * @return Successes Consecutive health threshold, unit: times
                     * 
                     */
                    uint64_t GetSuccesses() const;

                    /**
                     * 设置Consecutive health threshold, unit: times
                     * @param _successes Consecutive health threshold, unit: times
                     * 
                     */
                    void SetSuccesses(const uint64_t& _successes);

                    /**
                     * 判断参数 Successes 是否已赋值
                     * @return Successes 是否已赋值
                     * 
                     */
                    bool SuccessesHasBeenSet() const;

                    /**
                     * 获取Continuous anomaly threshold, unit: times	
                     * @return Failures Continuous anomaly threshold, unit: times	
                     * 
                     */
                    uint64_t GetFailures() const;

                    /**
                     * 设置Continuous anomaly threshold, unit: times	
                     * @param _failures Continuous anomaly threshold, unit: times	
                     * 
                     */
                    void SetFailures(const uint64_t& _failures);

                    /**
                     * 判断参数 Failures 是否已赋值
                     * @return Failures 是否已赋值
                     * 
                     */
                    bool FailuresHasBeenSet() const;

                    /**
                     * 获取Timeout threshold, unit: times
                     * @return Timeouts Timeout threshold, unit: times
                     * 
                     */
                    uint64_t GetTimeouts() const;

                    /**
                     * 设置Timeout threshold, unit: times
                     * @param _timeouts Timeout threshold, unit: times
                     * 
                     */
                    void SetTimeouts(const uint64_t& _timeouts);

                    /**
                     * 判断参数 Timeouts 是否已赋值
                     * @return Timeouts 是否已赋值
                     * 
                     */
                    bool TimeoutsHasBeenSet() const;

                    /**
                     * 获取Healthy HTTP status code
                     * @return HealthyHttpStatuses Healthy HTTP status code
                     * 
                     */
                    std::vector<uint64_t> GetHealthyHttpStatuses() const;

                    /**
                     * 设置Healthy HTTP status code
                     * @param _healthyHttpStatuses Healthy HTTP status code
                     * 
                     */
                    void SetHealthyHttpStatuses(const std::vector<uint64_t>& _healthyHttpStatuses);

                    /**
                     * 判断参数 HealthyHttpStatuses 是否已赋值
                     * @return HealthyHttpStatuses 是否已赋值
                     * 
                     */
                    bool HealthyHttpStatusesHasBeenSet() const;

                    /**
                     * 获取abnormal HTTP status code
                     * @return UnhealthyHttpStatuses abnormal HTTP status code
                     * 
                     */
                    std::vector<uint64_t> GetUnhealthyHttpStatuses() const;

                    /**
                     * 设置abnormal HTTP status code
                     * @param _unhealthyHttpStatuses abnormal HTTP status code
                     * 
                     */
                    void SetUnhealthyHttpStatuses(const std::vector<uint64_t>& _unhealthyHttpStatuses);

                    /**
                     * 判断参数 UnhealthyHttpStatuses 是否已赋值
                     * @return UnhealthyHttpStatuses 是否已赋值
                     * 
                     */
                    bool UnhealthyHttpStatusesHasBeenSet() const;

                    /**
                     * 获取Health check monitoring blocks nodes with a weight of 0 in reported data
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IgnoreZeroWeightNodes Health check monitoring blocks nodes with a weight of 0 in reported data
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    bool GetIgnoreZeroWeightNodes() const;

                    /**
                     * 设置Health check monitoring blocks nodes with a weight of 0 in reported data
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ignoreZeroWeightNodes Health check monitoring blocks nodes with a weight of 0 in reported data
Note: This field may return null, indicating that no valid values can be obtained.
                     * @deprecated
                     */
                    void SetIgnoreZeroWeightNodes(const bool& _ignoreZeroWeightNodes);

                    /**
                     * 判断参数 IgnoreZeroWeightNodes 是否已赋值
                     * @return IgnoreZeroWeightNodes 是否已赋值
                     * @deprecated
                     */
                    bool IgnoreZeroWeightNodesHasBeenSet() const;

                    /**
                     * 获取Health check supports nodes with support weights of 0
                     * @return ZeroWeightHeathCheck Health check supports nodes with support weights of 0
                     * 
                     */
                    bool GetZeroWeightHeathCheck() const;

                    /**
                     * 设置Health check supports nodes with support weights of 0
                     * @param _zeroWeightHeathCheck Health check supports nodes with support weights of 0
                     * 
                     */
                    void SetZeroWeightHeathCheck(const bool& _zeroWeightHeathCheck);

                    /**
                     * 判断参数 ZeroWeightHeathCheck 是否已赋值
                     * @return ZeroWeightHeathCheck 是否已赋值
                     * 
                     */
                    bool ZeroWeightHeathCheckHasBeenSet() const;

                private:

                    /**
                     * Enable active health check
                     */
                    bool m_enableActiveHealthCheck;
                    bool m_enableActiveHealthCheckHasBeenSet;

                    /**
                     * Active health check configuration
                     */
                    KongActiveHealthCheck m_activeHealthCheck;
                    bool m_activeHealthCheckHasBeenSet;

                    /**
                     * Enable passive health check
                     */
                    bool m_enablePassiveHealthCheck;
                    bool m_enablePassiveHealthCheckHasBeenSet;

                    /**
                     * Passive health check configuration
                     */
                    KongPassiveHealthCheck m_passiveHealthCheck;
                    bool m_passiveHealthCheckHasBeenSet;

                    /**
                     * Consecutive health threshold, unit: times
                     */
                    uint64_t m_successes;
                    bool m_successesHasBeenSet;

                    /**
                     * Continuous anomaly threshold, unit: times	
                     */
                    uint64_t m_failures;
                    bool m_failuresHasBeenSet;

                    /**
                     * Timeout threshold, unit: times
                     */
                    uint64_t m_timeouts;
                    bool m_timeoutsHasBeenSet;

                    /**
                     * Healthy HTTP status code
                     */
                    std::vector<uint64_t> m_healthyHttpStatuses;
                    bool m_healthyHttpStatusesHasBeenSet;

                    /**
                     * abnormal HTTP status code
                     */
                    std::vector<uint64_t> m_unhealthyHttpStatuses;
                    bool m_unhealthyHttpStatusesHasBeenSet;

                    /**
                     * Health check monitoring blocks nodes with a weight of 0 in reported data
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_ignoreZeroWeightNodes;
                    bool m_ignoreZeroWeightNodesHasBeenSet;

                    /**
                     * Health check supports nodes with support weights of 0
                     */
                    bool m_zeroWeightHeathCheck;
                    bool m_zeroWeightHeathCheckHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_UPSTREAMHEALTHCHECKCONFIG_H_
