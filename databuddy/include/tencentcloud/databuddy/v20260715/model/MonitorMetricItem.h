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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_MONITORMETRICITEM_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_MONITORMETRICITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * Single monitoring metric
                */
                class MonitorMetricItem : public AbstractModel
                {
                public:
                    MonitorMetricItem();
                    ~MonitorMetricItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Monitoring Metric Types. There are three types: 1. RUN_DURATION (running time) 2. WAIT_DURATION (waiting duration) 3. COMPLETION_TIME (completion time)
                     * @return MetricType Monitoring Metric Types. There are three types: 1. RUN_DURATION (running time) 2. WAIT_DURATION (waiting duration) 3. COMPLETION_TIME (completion time)
                     * 
                     */
                    std::string GetMetricType() const;

                    /**
                     * 设置Monitoring Metric Types. There are three types: 1. RUN_DURATION (running time) 2. WAIT_DURATION (waiting duration) 3. COMPLETION_TIME (completion time)
                     * @param _metricType Monitoring Metric Types. There are three types: 1. RUN_DURATION (running time) 2. WAIT_DURATION (waiting duration) 3. COMPLETION_TIME (completion time)
                     * 
                     */
                    void SetMetricType(const std::string& _metricType);

                    /**
                     * 判断参数 MetricType 是否已赋值
                     * @return MetricType 是否已赋值
                     * 
                     */
                    bool MetricTypeHasBeenSet() const;

                    /**
                     * 获取Alarm threshold in milliseconds. For COMPLETION_TIME: calculated from 00:00 of the current day.
                     * @return WarningThreshold Alarm threshold in milliseconds. For COMPLETION_TIME: calculated from 00:00 of the current day.
                     * 
                     */
                    std::string GetWarningThreshold() const;

                    /**
                     * 设置Alarm threshold in milliseconds. For COMPLETION_TIME: calculated from 00:00 of the current day.
                     * @param _warningThreshold Alarm threshold in milliseconds. For COMPLETION_TIME: calculated from 00:00 of the current day.
                     * 
                     */
                    void SetWarningThreshold(const std::string& _warningThreshold);

                    /**
                     * 判断参数 WarningThreshold 是否已赋值
                     * @return WarningThreshold 是否已赋值
                     * 
                     */
                    bool WarningThresholdHasBeenSet() const;

                    /**
                     * 获取Timeout threshold in milliseconds. For COMPLETION_TIME, it is calculated from 00:00 of the current day.
                     * @return TimeoutThreshold Timeout threshold in milliseconds. For COMPLETION_TIME, it is calculated from 00:00 of the current day.
                     * 
                     */
                    std::string GetTimeoutThreshold() const;

                    /**
                     * 设置Timeout threshold in milliseconds. For COMPLETION_TIME, it is calculated from 00:00 of the current day.
                     * @param _timeoutThreshold Timeout threshold in milliseconds. For COMPLETION_TIME, it is calculated from 00:00 of the current day.
                     * 
                     */
                    void SetTimeoutThreshold(const std::string& _timeoutThreshold);

                    /**
                     * 判断参数 TimeoutThreshold 是否已赋值
                     * @return TimeoutThreshold 是否已赋值
                     * 
                     */
                    bool TimeoutThresholdHasBeenSet() const;

                private:

                    /**
                     * Monitoring Metric Types. There are three types: 1. RUN_DURATION (running time) 2. WAIT_DURATION (waiting duration) 3. COMPLETION_TIME (completion time)
                     */
                    std::string m_metricType;
                    bool m_metricTypeHasBeenSet;

                    /**
                     * Alarm threshold in milliseconds. For COMPLETION_TIME: calculated from 00:00 of the current day.
                     */
                    std::string m_warningThreshold;
                    bool m_warningThresholdHasBeenSet;

                    /**
                     * Timeout threshold in milliseconds. For COMPLETION_TIME, it is calculated from 00:00 of the current day.
                     */
                    std::string m_timeoutThreshold;
                    bool m_timeoutThresholdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_MONITORMETRICITEM_H_
