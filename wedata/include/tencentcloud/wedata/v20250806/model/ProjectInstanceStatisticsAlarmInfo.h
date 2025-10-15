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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_PROJECTINSTANCESTATISTICSALARMINFO_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_PROJECTINSTANCESTATISTICSALARMINFO_H_

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
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Alarm rule project fluctuation rate Alarm configuration information.
                */
                class ProjectInstanceStatisticsAlarmInfo : public AbstractModel
                {
                public:
                    ProjectInstanceStatisticsAlarmInfo();
                    ~ProjectInstanceStatisticsAlarmInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Alarm type

projectFailureInstanceUpwardFluctuationAlarm: specifies the upward fluctuation alert for failed instances.

projectSuccessInstanceDownwardFluctuationAlarm: specifies the downward fluctuation alert for successful instances.
                     * @return AlarmType Alarm type

projectFailureInstanceUpwardFluctuationAlarm: specifies the upward fluctuation alert for failed instances.

projectSuccessInstanceDownwardFluctuationAlarm: specifies the downward fluctuation alert for successful instances.
                     * 
                     */
                    std::string GetAlarmType() const;

                    /**
                     * 设置Alarm type

projectFailureInstanceUpwardFluctuationAlarm: specifies the upward fluctuation alert for failed instances.

projectSuccessInstanceDownwardFluctuationAlarm: specifies the downward fluctuation alert for successful instances.
                     * @param _alarmType Alarm type

projectFailureInstanceUpwardFluctuationAlarm: specifies the upward fluctuation alert for failed instances.

projectSuccessInstanceDownwardFluctuationAlarm: specifies the downward fluctuation alert for successful instances.
                     * 
                     */
                    void SetAlarmType(const std::string& _alarmType);

                    /**
                     * 判断参数 AlarmType 是否已赋值
                     * @return AlarmType 是否已赋值
                     * 
                     */
                    bool AlarmTypeHasBeenSet() const;

                    /**
                     * 获取Alarm threshold for the downward fluctuation ratio of the number of successful instances.
Alarm threshold for the upward fluctuation ratio of the number of failed instances.
                     * @return InstanceThresholdCountPercent Alarm threshold for the downward fluctuation ratio of the number of successful instances.
Alarm threshold for the upward fluctuation ratio of the number of failed instances.
                     * 
                     */
                    uint64_t GetInstanceThresholdCountPercent() const;

                    /**
                     * 设置Alarm threshold for the downward fluctuation ratio of the number of successful instances.
Alarm threshold for the upward fluctuation ratio of the number of failed instances.
                     * @param _instanceThresholdCountPercent Alarm threshold for the downward fluctuation ratio of the number of successful instances.
Alarm threshold for the upward fluctuation ratio of the number of failed instances.
                     * 
                     */
                    void SetInstanceThresholdCountPercent(const uint64_t& _instanceThresholdCountPercent);

                    /**
                     * 判断参数 InstanceThresholdCountPercent 是否已赋值
                     * @return InstanceThresholdCountPercent 是否已赋值
                     * 
                     */
                    bool InstanceThresholdCountPercentHasBeenSet() const;

                    /**
                     * 获取Cumulative instance number fluctuation threshold.
                     * @return InstanceThresholdCount Cumulative instance number fluctuation threshold.
                     * 
                     */
                    uint64_t GetInstanceThresholdCount() const;

                    /**
                     * 设置Cumulative instance number fluctuation threshold.
                     * @param _instanceThresholdCount Cumulative instance number fluctuation threshold.
                     * 
                     */
                    void SetInstanceThresholdCount(const uint64_t& _instanceThresholdCount);

                    /**
                     * 判断参数 InstanceThresholdCount 是否已赋值
                     * @return InstanceThresholdCount 是否已赋值
                     * 
                     */
                    bool InstanceThresholdCountHasBeenSet() const;

                    /**
                     * 获取Stability threshold count (debounce configuration statistical cycle count).
                     * @return StabilizeThreshold Stability threshold count (debounce configuration statistical cycle count).
                     * 
                     */
                    uint64_t GetStabilizeThreshold() const;

                    /**
                     * 设置Stability threshold count (debounce configuration statistical cycle count).
                     * @param _stabilizeThreshold Stability threshold count (debounce configuration statistical cycle count).
                     * 
                     */
                    void SetStabilizeThreshold(const uint64_t& _stabilizeThreshold);

                    /**
                     * 判断参数 StabilizeThreshold 是否已赋值
                     * @return StabilizeThreshold 是否已赋值
                     * 
                     */
                    bool StabilizeThresholdHasBeenSet() const;

                    /**
                     * 获取Stability statistical cycle (anti-shake configuration statistical cycle count).
                     * @return StabilizeStatisticsCycle Stability statistical cycle (anti-shake configuration statistical cycle count).
                     * 
                     */
                    uint64_t GetStabilizeStatisticsCycle() const;

                    /**
                     * 设置Stability statistical cycle (anti-shake configuration statistical cycle count).
                     * @param _stabilizeStatisticsCycle Stability statistical cycle (anti-shake configuration statistical cycle count).
                     * 
                     */
                    void SetStabilizeStatisticsCycle(const uint64_t& _stabilizeStatisticsCycle);

                    /**
                     * 判断参数 StabilizeStatisticsCycle 是否已赋值
                     * @return StabilizeStatisticsCycle 是否已赋值
                     * 
                     */
                    bool StabilizeStatisticsCycleHasBeenSet() const;

                    /**
                     * 获取Specifies whether to use cumulative calculation. valid values: false (consecutive), true (cumulative).
                     * @return IsCumulant Specifies whether to use cumulative calculation. valid values: false (consecutive), true (cumulative).
                     * 
                     */
                    bool GetIsCumulant() const;

                    /**
                     * 设置Specifies whether to use cumulative calculation. valid values: false (consecutive), true (cumulative).
                     * @param _isCumulant Specifies whether to use cumulative calculation. valid values: false (consecutive), true (cumulative).
                     * 
                     */
                    void SetIsCumulant(const bool& _isCumulant);

                    /**
                     * 判断参数 IsCumulant 是否已赋值
                     * @return IsCumulant 是否已赋值
                     * 
                     */
                    bool IsCumulantHasBeenSet() const;

                    /**
                     * 获取Cumulative number of instances for the current day.
Specifies the downward fluctuation of failed instance count on the day.
                     * @return InstanceCount Cumulative number of instances for the current day.
Specifies the downward fluctuation of failed instance count on the day.
                     * 
                     */
                    uint64_t GetInstanceCount() const;

                    /**
                     * 设置Cumulative number of instances for the current day.
Specifies the downward fluctuation of failed instance count on the day.
                     * @param _instanceCount Cumulative number of instances for the current day.
Specifies the downward fluctuation of failed instance count on the day.
                     * 
                     */
                    void SetInstanceCount(const uint64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     * 
                     */
                    bool InstanceCountHasBeenSet() const;

                private:

                    /**
                     * Alarm type

projectFailureInstanceUpwardFluctuationAlarm: specifies the upward fluctuation alert for failed instances.

projectSuccessInstanceDownwardFluctuationAlarm: specifies the downward fluctuation alert for successful instances.
                     */
                    std::string m_alarmType;
                    bool m_alarmTypeHasBeenSet;

                    /**
                     * Alarm threshold for the downward fluctuation ratio of the number of successful instances.
Alarm threshold for the upward fluctuation ratio of the number of failed instances.
                     */
                    uint64_t m_instanceThresholdCountPercent;
                    bool m_instanceThresholdCountPercentHasBeenSet;

                    /**
                     * Cumulative instance number fluctuation threshold.
                     */
                    uint64_t m_instanceThresholdCount;
                    bool m_instanceThresholdCountHasBeenSet;

                    /**
                     * Stability threshold count (debounce configuration statistical cycle count).
                     */
                    uint64_t m_stabilizeThreshold;
                    bool m_stabilizeThresholdHasBeenSet;

                    /**
                     * Stability statistical cycle (anti-shake configuration statistical cycle count).
                     */
                    uint64_t m_stabilizeStatisticsCycle;
                    bool m_stabilizeStatisticsCycleHasBeenSet;

                    /**
                     * Specifies whether to use cumulative calculation. valid values: false (consecutive), true (cumulative).
                     */
                    bool m_isCumulant;
                    bool m_isCumulantHasBeenSet;

                    /**
                     * Cumulative number of instances for the current day.
Specifies the downward fluctuation of failed instance count on the day.
                     */
                    uint64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_PROJECTINSTANCESTATISTICSALARMINFO_H_
