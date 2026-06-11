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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_CHECKBASHPOLICYPARAMSREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_CHECKBASHPOLICYPARAMSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/PolicyRules.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * CheckBashPolicyParams request structure.
                */
                class CheckBashPolicyParamsRequest : public AbstractModel
                {
                public:
                    CheckBashPolicyParamsRequest();
                    ~CheckBashPolicyParamsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Verify content field, use commas to separate if necessary to detect multiple fields
<li>Name Policy name</li>
<li>Process</li>
<li>Name PProcess Parent process</li>
<li>Name AProcess Ancestor process</li>

                     * @return CheckField Verify content field, use commas to separate if necessary to detect multiple fields
<li>Name Policy name</li>
<li>Process</li>
<li>Name PProcess Parent process</li>
<li>Name AProcess Ancestor process</li>

                     * 
                     */
                    std::string GetCheckField() const;

                    /**
                     * 设置Verify content field, use commas to separate if necessary to detect multiple fields
<li>Name Policy name</li>
<li>Process</li>
<li>Name PProcess Parent process</li>
<li>Name AProcess Ancestor process</li>

                     * @param _checkField Verify content field, use commas to separate if necessary to detect multiple fields
<li>Name Policy name</li>
<li>Process</li>
<li>Name PProcess Parent process</li>
<li>Name AProcess Ancestor process</li>

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
                     * 获取This field is not in maintenance. If you fill in this parameter, it will automatically replace to Rules.Process.

                     * @return Rule This field is not in maintenance. If you fill in this parameter, it will automatically replace to Rules.Process.

                     * 
                     */
                    std::string GetRule() const;

                    /**
                     * 设置This field is not in maintenance. If you fill in this parameter, it will automatically replace to Rules.Process.

                     * @param _rule This field is not in maintenance. If you fill in this parameter, it will automatically replace to Rules.Process.

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

                    /**
                     * 获取Rule expression
                     * @return Rules Rule expression
                     * 
                     */
                    PolicyRules GetRules() const;

                    /**
                     * 设置Rule expression
                     * @param _rules Rule expression
                     * 
                     */
                    void SetRules(const PolicyRules& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                private:

                    /**
                     * Verify content field, use commas to separate if necessary to detect multiple fields
<li>Name Policy name</li>
<li>Process</li>
<li>Name PProcess Parent process</li>
<li>Name AProcess Ancestor process</li>

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
                     * This field is not in maintenance. If you fill in this parameter, it will automatically replace to Rules.Process.

                     */
                    std::string m_rule;
                    bool m_ruleHasBeenSet;

                    /**
                     * Rule ID passed during editing
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Rule expression
                     */
                    PolicyRules m_rules;
                    bool m_rulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_CHECKBASHPOLICYPARAMSREQUEST_H_
