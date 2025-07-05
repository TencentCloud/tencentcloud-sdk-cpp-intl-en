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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_ALARMINDICATORINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_ALARMINDICATORINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Alert Metrics
                */
                class AlarmIndicatorInfo : public AbstractModel
                {
                public:
                    AlarmIndicatorInfo();
                    ~AlarmIndicatorInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Metric ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Id Metric ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Metric ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _id Metric ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Alert Metrics, 0 for task failure, 1 for task execution timeout, 2 for task stop, 3 for task pause, 4 read speed, 5 write speed, 6 read throughput, 7 write throughput, 8 dirty data byte count, 9 number of dirty data entries, 10 task exception, 11 task detection anomaly, 12 restart times, 13 task delay, 14 number of restarts within the last 20 minutes, 15 transmission delay, 16 business delay, 50 offline package CPU usage rate, 51 offline package memory usage rate, 52 offline package parallelism utilization, 53 number of instances queued for offline packages, 54 real-time package resource utilization, 55 number of tasks running in real-time packages
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return AlarmIndicator Alert Metrics, 0 for task failure, 1 for task execution timeout, 2 for task stop, 3 for task pause, 4 read speed, 5 write speed, 6 read throughput, 7 write throughput, 8 dirty data byte count, 9 number of dirty data entries, 10 task exception, 11 task detection anomaly, 12 restart times, 13 task delay, 14 number of restarts within the last 20 minutes, 15 transmission delay, 16 business delay, 50 offline package CPU usage rate, 51 offline package memory usage rate, 52 offline package parallelism utilization, 53 number of instances queued for offline packages, 54 real-time package resource utilization, 55 number of tasks running in real-time packages
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetAlarmIndicator() const;

                    /**
                     * 设置Alert Metrics, 0 for task failure, 1 for task execution timeout, 2 for task stop, 3 for task pause, 4 read speed, 5 write speed, 6 read throughput, 7 write throughput, 8 dirty data byte count, 9 number of dirty data entries, 10 task exception, 11 task detection anomaly, 12 restart times, 13 task delay, 14 number of restarts within the last 20 minutes, 15 transmission delay, 16 business delay, 50 offline package CPU usage rate, 51 offline package memory usage rate, 52 offline package parallelism utilization, 53 number of instances queued for offline packages, 54 real-time package resource utilization, 55 number of tasks running in real-time packages
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _alarmIndicator Alert Metrics, 0 for task failure, 1 for task execution timeout, 2 for task stop, 3 for task pause, 4 read speed, 5 write speed, 6 read throughput, 7 write throughput, 8 dirty data byte count, 9 number of dirty data entries, 10 task exception, 11 task detection anomaly, 12 restart times, 13 task delay, 14 number of restarts within the last 20 minutes, 15 transmission delay, 16 business delay, 50 offline package CPU usage rate, 51 offline package memory usage rate, 52 offline package parallelism utilization, 53 number of instances queued for offline packages, 54 real-time package resource utilization, 55 number of tasks running in real-time packages
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAlarmIndicator(const uint64_t& _alarmIndicator);

                    /**
                     * 判断参数 AlarmIndicator 是否已赋值
                     * @return AlarmIndicator 是否已赋值
                     * 
                     */
                    bool AlarmIndicatorHasBeenSet() const;

                    /**
                     * 获取Alert Metric Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return AlarmIndicatorDesc Alert Metric Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetAlarmIndicatorDesc() const;

                    /**
                     * 设置Alert Metric Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _alarmIndicatorDesc Alert Metric Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAlarmIndicatorDesc(const std::string& _alarmIndicatorDesc);

                    /**
                     * 判断参数 AlarmIndicatorDesc 是否已赋值
                     * @return AlarmIndicatorDesc 是否已赋值
                     * 
                     */
                    bool AlarmIndicatorDescHasBeenSet() const;

                    /**
                     * 获取Metric Threshold, 1 for the first run failure of an offline task, 2 for all retries failed of an offline task
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return TriggerType Metric Threshold, 1 for the first run failure of an offline task, 2 for all retries failed of an offline task
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetTriggerType() const;

                    /**
                     * 设置Metric Threshold, 1 for the first run failure of an offline task, 2 for all retries failed of an offline task
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _triggerType Metric Threshold, 1 for the first run failure of an offline task, 2 for all retries failed of an offline task
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTriggerType(const uint64_t& _triggerType);

                    /**
                     * 判断参数 TriggerType 是否已赋值
                     * @return TriggerType 是否已赋值
                     * 
                     */
                    bool TriggerTypeHasBeenSet() const;

                    /**
                     * 获取Estimated timeout duration, minute level
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return EstimatedTime Estimated timeout duration, minute level
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetEstimatedTime() const;

                    /**
                     * 设置Estimated timeout duration, minute level
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _estimatedTime Estimated timeout duration, minute level
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetEstimatedTime(const uint64_t& _estimatedTime);

                    /**
                     * 判断参数 EstimatedTime 是否已赋值
                     * @return EstimatedTime 是否已赋值
                     * 
                     */
                    bool EstimatedTimeHasBeenSet() const;

                    /**
                     * 获取Alert threshold operator, 1 Greater than, 2 Less than
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Operator Alert threshold operator, 1 Greater than, 2 Less than
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetOperator() const;

                    /**
                     * 设置Alert threshold operator, 1 Greater than, 2 Less than
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _operator Alert threshold operator, 1 Greater than, 2 Less than
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetOperator(const uint64_t& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取Alert metric threshold unit: ms (milliseconds), s (seconds), min (minutes)
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return AlarmIndicatorUnit Alert metric threshold unit: ms (milliseconds), s (seconds), min (minutes)
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetAlarmIndicatorUnit() const;

                    /**
                     * 设置Alert metric threshold unit: ms (milliseconds), s (seconds), min (minutes)
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _alarmIndicatorUnit Alert metric threshold unit: ms (milliseconds), s (seconds), min (minutes)
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAlarmIndicatorUnit(const std::string& _alarmIndicatorUnit);

                    /**
                     * 判断参数 AlarmIndicatorUnit 是否已赋值
                     * @return AlarmIndicatorUnit 是否已赋值
                     * 
                     */
                    bool AlarmIndicatorUnitHasBeenSet() const;

                    /**
                     * 获取Alert Interval
                     * @return Duration Alert Interval
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置Alert Interval
                     * @param _duration Alert Interval
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取Alert interval unit: hour, minute, day
                     * @return DurationUnit Alert interval unit: hour, minute, day
                     * 
                     */
                    std::string GetDurationUnit() const;

                    /**
                     * 设置Alert interval unit: hour, minute, day
                     * @param _durationUnit Alert interval unit: hour, minute, day
                     * 
                     */
                    void SetDurationUnit(const std::string& _durationUnit);

                    /**
                     * 判断参数 DurationUnit 是否已赋值
                     * @return DurationUnit 是否已赋值
                     * 
                     */
                    bool DurationUnitHasBeenSet() const;

                    /**
                     * 获取Maximum number of alerts within a cycle
                     * @return MaxTimes Maximum number of alerts within a cycle
                     * 
                     */
                    int64_t GetMaxTimes() const;

                    /**
                     * 设置Maximum number of alerts within a cycle
                     * @param _maxTimes Maximum number of alerts within a cycle
                     * 
                     */
                    void SetMaxTimes(const int64_t& _maxTimes);

                    /**
                     * 判断参数 MaxTimes 是否已赋值
                     * @return MaxTimes 是否已赋值
                     * 
                     */
                    bool MaxTimesHasBeenSet() const;

                    /**
                     * 获取Metric Threshold
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Threshold Metric Threshold
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    double GetThreshold() const;

                    /**
                     * 设置Metric Threshold
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _threshold Metric Threshold
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetThreshold(const double& _threshold);

                    /**
                     * 判断参数 Threshold 是否已赋值
                     * @return Threshold 是否已赋值
                     * 
                     */
                    bool ThresholdHasBeenSet() const;

                private:

                    /**
                     * Metric ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Alert Metrics, 0 for task failure, 1 for task execution timeout, 2 for task stop, 3 for task pause, 4 read speed, 5 write speed, 6 read throughput, 7 write throughput, 8 dirty data byte count, 9 number of dirty data entries, 10 task exception, 11 task detection anomaly, 12 restart times, 13 task delay, 14 number of restarts within the last 20 minutes, 15 transmission delay, 16 business delay, 50 offline package CPU usage rate, 51 offline package memory usage rate, 52 offline package parallelism utilization, 53 number of instances queued for offline packages, 54 real-time package resource utilization, 55 number of tasks running in real-time packages
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_alarmIndicator;
                    bool m_alarmIndicatorHasBeenSet;

                    /**
                     * Alert Metric Description
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_alarmIndicatorDesc;
                    bool m_alarmIndicatorDescHasBeenSet;

                    /**
                     * Metric Threshold, 1 for the first run failure of an offline task, 2 for all retries failed of an offline task
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * Estimated timeout duration, minute level
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_estimatedTime;
                    bool m_estimatedTimeHasBeenSet;

                    /**
                     * Alert threshold operator, 1 Greater than, 2 Less than
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * Alert metric threshold unit: ms (milliseconds), s (seconds), min (minutes)
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_alarmIndicatorUnit;
                    bool m_alarmIndicatorUnitHasBeenSet;

                    /**
                     * Alert Interval
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * Alert interval unit: hour, minute, day
                     */
                    std::string m_durationUnit;
                    bool m_durationUnitHasBeenSet;

                    /**
                     * Maximum number of alerts within a cycle
                     */
                    int64_t m_maxTimes;
                    bool m_maxTimesHasBeenSet;

                    /**
                     * Metric Threshold
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    double m_threshold;
                    bool m_thresholdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_ALARMINDICATORINFO_H_
