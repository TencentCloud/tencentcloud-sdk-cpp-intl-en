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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYINSPECTIONSETTINGSREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYINSPECTIONSETTINGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/InspectionTaskSettings.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * ModifyInspectionSettings request structure.
                */
                class ModifyInspectionSettingsRequest : public AbstractModel
                {
                public:
                    ModifyInspectionSettingsRequest();
                    ~ModifyInspectionSettingsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceId Instance ID.
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
                     * 获取Inspection type, FixedTime or RealTime.
                     * @return Type Inspection type, FixedTime or RealTime.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Inspection type, FixedTime or RealTime.
                     * @param _type Inspection type, FixedTime or RealTime.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Task configurations.
                     * @return Settings Task configurations.
                     * 
                     */
                    std::vector<InspectionTaskSettings> GetSettings() const;

                    /**
                     * 设置Task configurations.
                     * @param _settings Task configurations.
                     * 
                     */
                    void SetSettings(const std::vector<InspectionTaskSettings>& _settings);

                    /**
                     * 判断参数 Settings 是否已赋值
                     * @return Settings 是否已赋值
                     * 
                     */
                    bool SettingsHasBeenSet() const;

                    /**
                     * 获取Start timestamp.
                     * @return StartTime Start timestamp.
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置Start timestamp.
                     * @param _startTime Start timestamp.
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End timestamp.
                     * @return EndTime End timestamp.
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置End timestamp.
                     * @param _endTime End timestamp.
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Inspection cycle, such as EveryDay, EveryWeek or EveryMonth.
                     * @return Strategy Inspection cycle, such as EveryDay, EveryWeek or EveryMonth.
                     * 
                     */
                    std::string GetStrategy() const;

                    /**
                     * 设置Inspection cycle, such as EveryDay, EveryWeek or EveryMonth.
                     * @param _strategy Inspection cycle, such as EveryDay, EveryWeek or EveryMonth.
                     * 
                     */
                    void SetStrategy(const std::string& _strategy);

                    /**
                     * 判断参数 Strategy 是否已赋值
                     * @return Strategy 是否已赋值
                     * 
                     */
                    bool StrategyHasBeenSet() const;

                    /**
                     * 获取Start time of each day.
                     * @return Clock Start time of each day.
                     * 
                     */
                    std::string GetClock() const;

                    /**
                     * 设置Start time of each day.
                     * @param _clock Start time of each day.
                     * 
                     */
                    void SetClock(const std::string& _clock);

                    /**
                     * 判断参数 Clock 是否已赋值
                     * @return Clock 是否已赋值
                     * 
                     */
                    bool ClockHasBeenSet() const;

                    /**
                     * 获取Day of the week.
                     * @return DayOfWeek Day of the week.
                     * 
                     */
                    std::string GetDayOfWeek() const;

                    /**
                     * 设置Day of the week.
                     * @param _dayOfWeek Day of the week.
                     * 
                     */
                    void SetDayOfWeek(const std::string& _dayOfWeek);

                    /**
                     * 判断参数 DayOfWeek 是否已赋值
                     * @return DayOfWeek 是否已赋值
                     * 
                     */
                    bool DayOfWeekHasBeenSet() const;

                    /**
                     * 获取Number of the day in a month.
                     * @return DayOfMonth Number of the day in a month.
                     * 
                     */
                    std::string GetDayOfMonth() const;

                    /**
                     * 设置Number of the day in a month.
                     * @param _dayOfMonth Number of the day in a month.
                     * 
                     */
                    void SetDayOfMonth(const std::string& _dayOfMonth);

                    /**
                     * 判断参数 DayOfMonth 是否已赋值
                     * @return DayOfMonth 是否已赋值
                     * 
                     */
                    bool DayOfMonthHasBeenSet() const;

                    /**
                     * 获取Inspection job ID.
                     * @return JobId Inspection job ID.
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置Inspection job ID.
                     * @param _jobId Inspection job ID.
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Inspection type, FixedTime or RealTime.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Task configurations.
                     */
                    std::vector<InspectionTaskSettings> m_settings;
                    bool m_settingsHasBeenSet;

                    /**
                     * Start timestamp.
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End timestamp.
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Inspection cycle, such as EveryDay, EveryWeek or EveryMonth.
                     */
                    std::string m_strategy;
                    bool m_strategyHasBeenSet;

                    /**
                     * Start time of each day.
                     */
                    std::string m_clock;
                    bool m_clockHasBeenSet;

                    /**
                     * Day of the week.
                     */
                    std::string m_dayOfWeek;
                    bool m_dayOfWeekHasBeenSet;

                    /**
                     * Number of the day in a month.
                     */
                    std::string m_dayOfMonth;
                    bool m_dayOfMonthHasBeenSet;

                    /**
                     * Inspection job ID.
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYINSPECTIONSETTINGSREQUEST_H_
