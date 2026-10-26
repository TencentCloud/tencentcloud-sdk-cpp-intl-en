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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_EFFECTIVETIME_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_EFFECTIVETIME_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * Effective period
                */
                class EffectiveTime : public AbstractModel
                {
                public:
                    EffectiveTime();
                    ~EffectiveTime() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Start time</p><p>Parameter format: hh:mm:ss</p>
                     * @return BeginTime <p>Start time</p><p>Parameter format: hh:mm:ss</p>
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置<p>Start time</p><p>Parameter format: hh:mm:ss</p>
                     * @param _beginTime <p>Start time</p><p>Parameter format: hh:mm:ss</p>
                     * 
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取<p>End time</p><p>Parameter format: hh:mm:ss</p>
                     * @return EndTime <p>End time</p><p>Parameter format: hh:mm:ss</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>End time</p><p>Parameter format: hh:mm:ss</p>
                     * @param _endTime <p>End time</p><p>Parameter format: hh:mm:ss</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>Repetition cycle: 1-Monday 2-Tuesday 3-Wednesday 4-Thursday 5-Friday 6-Saturday 7-Sunday</p><p>Value range: [1, 7]</p>
                     * @return WeekDay <p>Repetition cycle: 1-Monday 2-Tuesday 3-Wednesday 4-Thursday 5-Friday 6-Saturday 7-Sunday</p><p>Value range: [1, 7]</p>
                     * 
                     */
                    int64_t GetWeekDay() const;

                    /**
                     * 设置<p>Repetition cycle: 1-Monday 2-Tuesday 3-Wednesday 4-Thursday 5-Friday 6-Saturday 7-Sunday</p><p>Value range: [1, 7]</p>
                     * @param _weekDay <p>Repetition cycle: 1-Monday 2-Tuesday 3-Wednesday 4-Thursday 5-Friday 6-Saturday 7-Sunday</p><p>Value range: [1, 7]</p>
                     * 
                     */
                    void SetWeekDay(const int64_t& _weekDay);

                    /**
                     * 判断参数 WeekDay 是否已赋值
                     * @return WeekDay 是否已赋值
                     * 
                     */
                    bool WeekDayHasBeenSet() const;

                private:

                    /**
                     * <p>Start time</p><p>Parameter format: hh:mm:ss</p>
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * <p>End time</p><p>Parameter format: hh:mm:ss</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>Repetition cycle: 1-Monday 2-Tuesday 3-Wednesday 4-Thursday 5-Friday 6-Saturday 7-Sunday</p><p>Value range: [1, 7]</p>
                     */
                    int64_t m_weekDay;
                    bool m_weekDayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_EFFECTIVETIME_H_
