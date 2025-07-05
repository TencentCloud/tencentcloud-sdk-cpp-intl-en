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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_CHECKBASHRULEPARAMSREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_CHECKBASHRULEPARAMSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * CheckBashRuleParams request structure.
                */
                class CheckBashRuleParamsRequest : public AbstractModel
                {
                public:
                    CheckBashRuleParamsRequest();
                    ~CheckBashRuleParamsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Verify content Name or Rule. (Use a comma to separate them if both need to be verified.)
                     * @return CheckField Verify content Name or Rule. (Use a comma to separate them if both need to be verified.)
                     * 
                     */
                    std::string GetCheckField() const;

                    /**
                     * 设置Verify content Name or Rule. (Use a comma to separate them if both need to be verified.)
                     * @param _checkField Verify content Name or Rule. (Use a comma to separate them if both need to be verified.)
                     * 
                     */
                    void SetCheckField(const std::string& _checkField);

                    /**
                     * 判断参数 CheckField 是否已赋值
                     * @return CheckField 是否已赋值
                     * 
                     */
                    bool CheckFieldHasBeenSet() const;

                    /**
                     * 获取Event ID needs to be submitted when allowlisting an event in the event list.
                     * @return EventId Event ID needs to be submitted when allowlisting an event in the event list.
                     * 
                     */
                    uint64_t GetEventId() const;

                    /**
                     * 设置Event ID needs to be submitted when allowlisting an event in the event list.
                     * @param _eventId Event ID needs to be submitted when allowlisting an event in the event list.
                     * 
                     */
                    void SetEventId(const uint64_t& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取Name of rule to be entered
                     * @return Name Name of rule to be entered
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name of rule to be entered
                     * @param _name Name of rule to be entered
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取The regular expression to be entered by the user: It must match command content corresponding to the submitted EventId.
                     * @return Rule The regular expression to be entered by the user: It must match command content corresponding to the submitted EventId.
                     * 
                     */
                    std::string GetRule() const;

                    /**
                     * 设置The regular expression to be entered by the user: It must match command content corresponding to the submitted EventId.
                     * @param _rule The regular expression to be entered by the user: It must match command content corresponding to the submitted EventId.
                     * 
                     */
                    void SetRule(const std::string& _rule);

                    /**
                     * 判断参数 Rule 是否已赋值
                     * @return Rule 是否已赋值
                     * 
                     */
                    bool RuleHasBeenSet() const;

                    /**
                     * 获取Rule ID passed during editing
                     * @return Id Rule ID passed during editing
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Rule ID passed during editing
                     * @param _id Rule ID passed during editing
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * Verify content Name or Rule. (Use a comma to separate them if both need to be verified.)
                     */
                    std::string m_checkField;
                    bool m_checkFieldHasBeenSet;

                    /**
                     * Event ID needs to be submitted when allowlisting an event in the event list.
                     */
                    uint64_t m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * Name of rule to be entered
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * The regular expression to be entered by the user: It must match command content corresponding to the submitted EventId.
                     */
                    std::string m_rule;
                    bool m_ruleHasBeenSet;

                    /**
                     * Rule ID passed during editing
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_CHECKBASHRULEPARAMSREQUEST_H_
