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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MULTICONDITION_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MULTICONDITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Multiple trigger conditions.
                */
                class MultiCondition : public AbstractModel
                {
                public:
                    MultiCondition();
                    ~MultiCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Trigger condition.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Condition Trigger condition.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCondition() const;

                    /**
                     * 设置Trigger condition.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _condition Trigger condition.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCondition(const std::string& _condition);

                    /**
                     * 判断参数 Condition 是否已赋值
                     * @return Condition 是否已赋值
                     * 
                     */
                    bool ConditionHasBeenSet() const;

                    /**
                     * 获取Alarm severity. 0: Warning (Warn); 1: Reminder (Info); 2: Urgent (Critical).<li> If not specified, the default is 0.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AlarmLevel Alarm severity. 0: Warning (Warn); 1: Reminder (Info); 2: Urgent (Critical).<li> If not specified, the default is 0.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetAlarmLevel() const;

                    /**
                     * 设置Alarm severity. 0: Warning (Warn); 1: Reminder (Info); 2: Urgent (Critical).<li> If not specified, the default is 0.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _alarmLevel Alarm severity. 0: Warning (Warn); 1: Reminder (Info); 2: Urgent (Critical).<li> If not specified, the default is 0.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAlarmLevel(const uint64_t& _alarmLevel);

                    /**
                     * 判断参数 AlarmLevel 是否已赋值
                     * @return AlarmLevel 是否已赋值
                     * 
                     */
                    bool AlarmLevelHasBeenSet() const;

                private:

                    /**
                     * Trigger condition.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * Alarm severity. 0: Warning (Warn); 1: Reminder (Info); 2: Urgent (Critical).<li> If not specified, the default is 0.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_alarmLevel;
                    bool m_alarmLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MULTICONDITION_H_
