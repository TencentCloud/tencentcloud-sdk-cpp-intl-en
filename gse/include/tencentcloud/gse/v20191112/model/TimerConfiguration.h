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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_TIMERCONFIGURATION_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_TIMERCONFIGURATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gse/v20191112/model/TimerValue.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * The recurrence pattern of auto-scaling
                */
                class TimerConfiguration : public AbstractModel
                {
                public:
                    TimerConfiguration();
                    ~TimerConfiguration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The recurrence pattern of auto-scaling. `0`: undefined, `1`: once, `2`: daily, `3`: monthly, `4`: weekly
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return TimerType The recurrence pattern of auto-scaling. `0`: undefined, `1`: once, `2`: daily, `3`: monthly, `4`: weekly
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetTimerType() const;

                    /**
                     * 设置The recurrence pattern of auto-scaling. `0`: undefined, `1`: once, `2`: daily, `3`: monthly, `4`: weekly
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param TimerType The recurrence pattern of auto-scaling. `0`: undefined, `1`: once, `2`: daily, `3`: monthly, `4`: weekly
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetTimerType(const int64_t& _timerType);

                    /**
                     * 判断参数 TimerType 是否已赋值
                     * @return TimerType 是否已赋值
                     */
                    bool TimerTypeHasBeenSet() const;

                    /**
                     * 获取Details of the recurrence pattern of auto-scaling
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return TimerValue Details of the recurrence pattern of auto-scaling
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    TimerValue GetTimerValue() const;

                    /**
                     * 设置Details of the recurrence pattern of auto-scaling
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param TimerValue Details of the recurrence pattern of auto-scaling
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetTimerValue(const TimerValue& _timerValue);

                    /**
                     * 判断参数 TimerValue 是否已赋值
                     * @return TimerValue 是否已赋值
                     */
                    bool TimerValueHasBeenSet() const;

                    /**
                     * 获取Start time of the scheduled scaling policy
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return BeginTime Start time of the scheduled scaling policy
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置Start time of the scheduled scaling policy
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param BeginTime Start time of the scheduled scaling policy
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取End time of the scheduled scaling policy
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return EndTime End time of the scheduled scaling policy
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time of the scheduled scaling policy
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param EndTime End time of the scheduled scaling policy
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * The recurrence pattern of auto-scaling. `0`: undefined, `1`: once, `2`: daily, `3`: monthly, `4`: weekly
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_timerType;
                    bool m_timerTypeHasBeenSet;

                    /**
                     * Details of the recurrence pattern of auto-scaling
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    TimerValue m_timerValue;
                    bool m_timerValueHasBeenSet;

                    /**
                     * Start time of the scheduled scaling policy
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * End time of the scheduled scaling policy
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_TIMERCONFIGURATION_H_
