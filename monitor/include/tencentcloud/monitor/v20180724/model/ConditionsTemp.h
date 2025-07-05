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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_CONDITIONSTEMP_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_CONDITIONSTEMP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/AlarmPolicyCondition.h>
#include <tencentcloud/monitor/v20180724/model/AlarmPolicyEventCondition.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Alarm trigger condition template
                */
                class ConditionsTemp : public AbstractModel
                {
                public:
                    ConditionsTemp();
                    ~ConditionsTemp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Template name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TemplateName Template name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置Template name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _templateName Template name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTemplateName(const std::string& _templateName);

                    /**
                     * 判断参数 TemplateName 是否已赋值
                     * @return TemplateName 是否已赋值
                     * 
                     */
                    bool TemplateNameHasBeenSet() const;

                    /**
                     * 获取Metric trigger condition
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Condition Metric trigger condition
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AlarmPolicyCondition GetCondition() const;

                    /**
                     * 设置Metric trigger condition
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _condition Metric trigger condition
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCondition(const AlarmPolicyCondition& _condition);

                    /**
                     * 判断参数 Condition 是否已赋值
                     * @return Condition 是否已赋值
                     * 
                     */
                    bool ConditionHasBeenSet() const;

                    /**
                     * 获取Event trigger condition
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return EventCondition Event trigger condition
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AlarmPolicyEventCondition GetEventCondition() const;

                    /**
                     * 设置Event trigger condition
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _eventCondition Event trigger condition
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEventCondition(const AlarmPolicyEventCondition& _eventCondition);

                    /**
                     * 判断参数 EventCondition 是否已赋值
                     * @return EventCondition 是否已赋值
                     * 
                     */
                    bool EventConditionHasBeenSet() const;

                private:

                    /**
                     * Template name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * Metric trigger condition
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    AlarmPolicyCondition m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * Event trigger condition
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    AlarmPolicyEventCondition m_eventCondition;
                    bool m_eventConditionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_CONDITIONSTEMP_H_
