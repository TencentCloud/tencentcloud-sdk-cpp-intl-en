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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_SCREENTASKINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_SCREENTASKINFO_H_

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
                * Operations and Maintenance Dashboard Task Display
                */
                class ScreenTaskInfo : public AbstractModel
                {
                public:
                    ScreenTaskInfo();
                    ~ScreenTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Statistical Indicator 0: All Instances, 1: Current Day, 2: Yesterday
                     * @return CountTag Statistical Indicator 0: All Instances, 1: Current Day, 2: Yesterday
                     * 
                     */
                    uint64_t GetCountTag() const;

                    /**
                     * 设置Statistical Indicator 0: All Instances, 1: Current Day, 2: Yesterday
                     * @param _countTag Statistical Indicator 0: All Instances, 1: Current Day, 2: Yesterday
                     * 
                     */
                    void SetCountTag(const uint64_t& _countTag);

                    /**
                     * 判断参数 CountTag 是否已赋值
                     * @return CountTag 是否已赋值
                     * 
                     */
                    bool CountTagHasBeenSet() const;

                    /**
                     * 获取Total numberNote: This field may return null, indicating that no valid value can be obtained.
                     * @return TotalNum Total numberNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetTotalNum() const;

                    /**
                     * 设置Total numberNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _totalNum Total numberNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTotalNum(const uint64_t& _totalNum);

                    /**
                     * 判断参数 TotalNum 是否已赋值
                     * @return TotalNum 是否已赋值
                     * 
                     */
                    bool TotalNumHasBeenSet() const;

                    /**
                     * 获取RunningNote: This field may return null, indicating that no valid value can be obtained.
                     * @return RunningNum RunningNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetRunningNum() const;

                    /**
                     * 设置RunningNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _runningNum RunningNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRunningNum(const uint64_t& _runningNum);

                    /**
                     * 判断参数 RunningNum 是否已赋值
                     * @return RunningNum 是否已赋值
                     * 
                     */
                    bool RunningNumHasBeenSet() const;

                    /**
                     * 获取StoppingNote: This field may return null, indicating that no valid value can be obtained.
                     * @return StoppingNum StoppingNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetStoppingNum() const;

                    /**
                     * 设置StoppingNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _stoppingNum StoppingNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetStoppingNum(const uint64_t& _stoppingNum);

                    /**
                     * 判断参数 StoppingNum 是否已赋值
                     * @return StoppingNum 是否已赋值
                     * 
                     */
                    bool StoppingNumHasBeenSet() const;

                    /**
                     * 获取StoppedNote: This field may return null, indicating that no valid value can be obtained.
                     * @return StoppedNum StoppedNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetStoppedNum() const;

                    /**
                     * 设置StoppedNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _stoppedNum StoppedNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetStoppedNum(const uint64_t& _stoppedNum);

                    /**
                     * 判断参数 StoppedNum 是否已赋值
                     * @return StoppedNum 是否已赋值
                     * 
                     */
                    bool StoppedNumHasBeenSet() const;

                    /**
                     * 获取Pause
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return FrozenNum Pause
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetFrozenNum() const;

                    /**
                     * 设置Pause
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _frozenNum Pause
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetFrozenNum(const uint64_t& _frozenNum);

                    /**
                     * 判断参数 FrozenNum 是否已赋值
                     * @return FrozenNum 是否已赋值
                     * 
                     */
                    bool FrozenNumHasBeenSet() const;

                    /**
                     * 获取Annual task
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return YearNum Annual task
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetYearNum() const;

                    /**
                     * 设置Annual task
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _yearNum Annual task
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetYearNum(const uint64_t& _yearNum);

                    /**
                     * 判断参数 YearNum 是否已赋值
                     * @return YearNum 是否已赋值
                     * 
                     */
                    bool YearNumHasBeenSet() const;

                    /**
                     * 获取Monthly task
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return MonthNum Monthly task
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetMonthNum() const;

                    /**
                     * 设置Monthly task
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _monthNum Monthly task
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetMonthNum(const uint64_t& _monthNum);

                    /**
                     * 判断参数 MonthNum 是否已赋值
                     * @return MonthNum 是否已赋值
                     * 
                     */
                    bool MonthNumHasBeenSet() const;

                    /**
                     * 获取Weekly task
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return WeekNum Weekly task
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetWeekNum() const;

                    /**
                     * 设置Weekly task
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _weekNum Weekly task
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetWeekNum(const uint64_t& _weekNum);

                    /**
                     * 判断参数 WeekNum 是否已赋值
                     * @return WeekNum 是否已赋值
                     * 
                     */
                    bool WeekNumHasBeenSet() const;

                    /**
                     * 获取Daily task
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return DayNum Daily task
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetDayNum() const;

                    /**
                     * 设置Daily task
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _dayNum Daily task
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDayNum(const uint64_t& _dayNum);

                    /**
                     * 判断参数 DayNum 是否已赋值
                     * @return DayNum 是否已赋值
                     * 
                     */
                    bool DayNumHasBeenSet() const;

                    /**
                     * 获取Hourly task
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return HourNum Hourly task
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetHourNum() const;

                    /**
                     * 设置Hourly task
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _hourNum Hourly task
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetHourNum(const uint64_t& _hourNum);

                    /**
                     * 判断参数 HourNum 是否已赋值
                     * @return HourNum 是否已赋值
                     * 
                     */
                    bool HourNumHasBeenSet() const;

                    /**
                     * 获取Minute Task
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return MinuteNum Minute Task
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetMinuteNum() const;

                    /**
                     * 设置Minute Task
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _minuteNum Minute Task
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetMinuteNum(const uint64_t& _minuteNum);

                    /**
                     * 判断参数 MinuteNum 是否已赋值
                     * @return MinuteNum 是否已赋值
                     * 
                     */
                    bool MinuteNumHasBeenSet() const;

                private:

                    /**
                     * Statistical Indicator 0: All Instances, 1: Current Day, 2: Yesterday
                     */
                    uint64_t m_countTag;
                    bool m_countTagHasBeenSet;

                    /**
                     * Total numberNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_totalNum;
                    bool m_totalNumHasBeenSet;

                    /**
                     * RunningNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_runningNum;
                    bool m_runningNumHasBeenSet;

                    /**
                     * StoppingNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_stoppingNum;
                    bool m_stoppingNumHasBeenSet;

                    /**
                     * StoppedNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_stoppedNum;
                    bool m_stoppedNumHasBeenSet;

                    /**
                     * Pause
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_frozenNum;
                    bool m_frozenNumHasBeenSet;

                    /**
                     * Annual task
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_yearNum;
                    bool m_yearNumHasBeenSet;

                    /**
                     * Monthly task
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_monthNum;
                    bool m_monthNumHasBeenSet;

                    /**
                     * Weekly task
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_weekNum;
                    bool m_weekNumHasBeenSet;

                    /**
                     * Daily task
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_dayNum;
                    bool m_dayNumHasBeenSet;

                    /**
                     * Hourly task
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_hourNum;
                    bool m_hourNumHasBeenSet;

                    /**
                     * Minute Task
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_minuteNum;
                    bool m_minuteNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_SCREENTASKINFO_H_
