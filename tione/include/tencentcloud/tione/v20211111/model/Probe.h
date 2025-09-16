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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_PROBE_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_PROBE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/ProbeAction.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * Probe structure information.
                */
                class Probe : public AbstractModel
                {
                public:
                    Probe();
                    ~Probe() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Probe action.
                     * @return ProbeAction Probe action.
                     * 
                     */
                    ProbeAction GetProbeAction() const;

                    /**
                     * 设置Probe action.
                     * @param _probeAction Probe action.
                     * 
                     */
                    void SetProbeAction(const ProbeAction& _probeAction);

                    /**
                     * 判断参数 ProbeAction 是否已赋值
                     * @return ProbeAction 是否已赋值
                     * 
                     */
                    bool ProbeActionHasBeenSet() const;

                    /**
                     * 获取Delay in waiting for a service startup.
                     * @return InitialDelaySeconds Delay in waiting for a service startup.
                     * 
                     */
                    int64_t GetInitialDelaySeconds() const;

                    /**
                     * 设置Delay in waiting for a service startup.
                     * @param _initialDelaySeconds Delay in waiting for a service startup.
                     * 
                     */
                    void SetInitialDelaySeconds(const int64_t& _initialDelaySeconds);

                    /**
                     * 判断参数 InitialDelaySeconds 是否已赋值
                     * @return InitialDelaySeconds 是否已赋值
                     * 
                     */
                    bool InitialDelaySecondsHasBeenSet() const;

                    /**
                     * 获取Polling check interval.
                     * @return PeriodSeconds Polling check interval.
                     * 
                     */
                    int64_t GetPeriodSeconds() const;

                    /**
                     * 设置Polling check interval.
                     * @param _periodSeconds Polling check interval.
                     * 
                     */
                    void SetPeriodSeconds(const int64_t& _periodSeconds);

                    /**
                     * 判断参数 PeriodSeconds 是否已赋值
                     * @return PeriodSeconds 是否已赋值
                     * 
                     */
                    bool PeriodSecondsHasBeenSet() const;

                    /**
                     * 获取Check timeout duration.
                     * @return TimeoutSeconds Check timeout duration.
                     * 
                     */
                    int64_t GetTimeoutSeconds() const;

                    /**
                     * 设置Check timeout duration.
                     * @param _timeoutSeconds Check timeout duration.
                     * 
                     */
                    void SetTimeoutSeconds(const int64_t& _timeoutSeconds);

                    /**
                     * 判断参数 TimeoutSeconds 是否已赋值
                     * @return TimeoutSeconds 是否已赋值
                     * 
                     */
                    bool TimeoutSecondsHasBeenSet() const;

                    /**
                     * 获取Number of acknowledged failed detections.
                     * @return FailureThreshold Number of acknowledged failed detections.
                     * 
                     */
                    int64_t GetFailureThreshold() const;

                    /**
                     * 设置Number of acknowledged failed detections.
                     * @param _failureThreshold Number of acknowledged failed detections.
                     * 
                     */
                    void SetFailureThreshold(const int64_t& _failureThreshold);

                    /**
                     * 判断参数 FailureThreshold 是否已赋值
                     * @return FailureThreshold 是否已赋值
                     * 
                     */
                    bool FailureThresholdHasBeenSet() const;

                    /**
                     * 获取Number of acknowledged successful detections. The default values for readiness, liveness, and startup statuses are 3, 1, and 1.
                     * @return SuccessThreshold Number of acknowledged successful detections. The default values for readiness, liveness, and startup statuses are 3, 1, and 1.
                     * 
                     */
                    int64_t GetSuccessThreshold() const;

                    /**
                     * 设置Number of acknowledged successful detections. The default values for readiness, liveness, and startup statuses are 3, 1, and 1.
                     * @param _successThreshold Number of acknowledged successful detections. The default values for readiness, liveness, and startup statuses are 3, 1, and 1.
                     * 
                     */
                    void SetSuccessThreshold(const int64_t& _successThreshold);

                    /**
                     * 判断参数 SuccessThreshold 是否已赋值
                     * @return SuccessThreshold 是否已赋值
                     * 
                     */
                    bool SuccessThresholdHasBeenSet() const;

                private:

                    /**
                     * Probe action.
                     */
                    ProbeAction m_probeAction;
                    bool m_probeActionHasBeenSet;

                    /**
                     * Delay in waiting for a service startup.
                     */
                    int64_t m_initialDelaySeconds;
                    bool m_initialDelaySecondsHasBeenSet;

                    /**
                     * Polling check interval.
                     */
                    int64_t m_periodSeconds;
                    bool m_periodSecondsHasBeenSet;

                    /**
                     * Check timeout duration.
                     */
                    int64_t m_timeoutSeconds;
                    bool m_timeoutSecondsHasBeenSet;

                    /**
                     * Number of acknowledged failed detections.
                     */
                    int64_t m_failureThreshold;
                    bool m_failureThresholdHasBeenSet;

                    /**
                     * Number of acknowledged successful detections. The default values for readiness, liveness, and startup statuses are 3, 1, and 1.
                     */
                    int64_t m_successThreshold;
                    bool m_successThresholdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_PROBE_H_
