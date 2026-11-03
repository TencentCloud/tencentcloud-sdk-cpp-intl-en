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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_BROWSERIMPERSONATIONDETECTIONRULE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_BROWSERIMPERSONATIONDETECTIONRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/BrowserImpersonationDetectionAction.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Browser spoofing identification rule (formerly active feature detection rule).
                */
                class BrowserImpersonationDetectionRule : public AbstractModel
                {
                public:
                    BrowserImpersonationDetectionRule();
                    ~BrowserImpersonationDetectionRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID of the browser spoofing identification rule.<br>You can perform different rule configuration operations by rule ID:<br> <li> <b>Add</b> a new rule: leave the ID empty or unspecified;</li><li><b>Modify</b> an existing rule: specify the rule ID that needs to be updated/modified;</li><li><b>Delete</b> an existing rule: existing rules not included in the Rules list in the BrowserImpersonationDetection parameter will be deleted.</li>
                     * @return Id ID of the browser spoofing identification rule.<br>You can perform different rule configuration operations by rule ID:<br> <li> <b>Add</b> a new rule: leave the ID empty or unspecified;</li><li><b>Modify</b> an existing rule: specify the rule ID that needs to be updated/modified;</li><li><b>Delete</b> an existing rule: existing rules not included in the Rules list in the BrowserImpersonationDetection parameter will be deleted.</li>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置ID of the browser spoofing identification rule.<br>You can perform different rule configuration operations by rule ID:<br> <li> <b>Add</b> a new rule: leave the ID empty or unspecified;</li><li><b>Modify</b> an existing rule: specify the rule ID that needs to be updated/modified;</li><li><b>Delete</b> an existing rule: existing rules not included in the Rules list in the BrowserImpersonationDetection parameter will be deleted.</li>
                     * @param _id ID of the browser spoofing identification rule.<br>You can perform different rule configuration operations by rule ID:<br> <li> <b>Add</b> a new rule: leave the ID empty or unspecified;</li><li><b>Modify</b> an existing rule: specify the rule ID that needs to be updated/modified;</li><li><b>Delete</b> an existing rule: existing rules not included in the Rules list in the BrowserImpersonationDetection parameter will be deleted.</li>
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
                     * 获取Name of the browser spoofing identification rule.
                     * @return Name Name of the browser spoofing identification rule.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name of the browser spoofing identification rule.
                     * @param _name Name of the browser spoofing identification rule.
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
                     * 获取Whether to enable the browser forgery identification rule. Valid values: <li>on: enable;</li><li>off: disable.</li>
                     * @return Enabled Whether to enable the browser forgery identification rule. Valid values: <li>on: enable;</li><li>off: disable.</li>
                     * 
                     */
                    std::string GetEnabled() const;

                    /**
                     * 设置Whether to enable the browser forgery identification rule. Valid values: <li>on: enable;</li><li>off: disable.</li>
                     * @param _enabled Whether to enable the browser forgery identification rule. Valid values: <li>on: enable;</li><li>off: disable.</li>
                     * 
                     */
                    void SetEnabled(const std::string& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取Specific content of the browser spoofing identification rule. It only supports the configuration of request Method, request Path, and request URL, which must comply with expression syntax. For detailed specifications, see the product document.
                     * @return Condition Specific content of the browser spoofing identification rule. It only supports the configuration of request Method, request Path, and request URL, which must comply with expression syntax. For detailed specifications, see the product document.
                     * 
                     */
                    std::string GetCondition() const;

                    /**
                     * 设置Specific content of the browser spoofing identification rule. It only supports the configuration of request Method, request Path, and request URL, which must comply with expression syntax. For detailed specifications, see the product document.
                     * @param _condition Specific content of the browser spoofing identification rule. It only supports the configuration of request Method, request Path, and request URL, which must comply with expression syntax. For detailed specifications, see the product document.
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
                     * 获取Handling method for browser spoofing identification rules, including Cookie verification, session tracking configuration, and client behavior validation configuration.
                     * @return Action Handling method for browser spoofing identification rules, including Cookie verification, session tracking configuration, and client behavior validation configuration.
                     * 
                     */
                    BrowserImpersonationDetectionAction GetAction() const;

                    /**
                     * 设置Handling method for browser spoofing identification rules, including Cookie verification, session tracking configuration, and client behavior validation configuration.
                     * @param _action Handling method for browser spoofing identification rules, including Cookie verification, session tracking configuration, and client behavior validation configuration.
                     * 
                     */
                    void SetAction(const BrowserImpersonationDetectionAction& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                private:

                    /**
                     * ID of the browser spoofing identification rule.<br>You can perform different rule configuration operations by rule ID:<br> <li> <b>Add</b> a new rule: leave the ID empty or unspecified;</li><li><b>Modify</b> an existing rule: specify the rule ID that needs to be updated/modified;</li><li><b>Delete</b> an existing rule: existing rules not included in the Rules list in the BrowserImpersonationDetection parameter will be deleted.</li>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Name of the browser spoofing identification rule.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Whether to enable the browser forgery identification rule. Valid values: <li>on: enable;</li><li>off: disable.</li>
                     */
                    std::string m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * Specific content of the browser spoofing identification rule. It only supports the configuration of request Method, request Path, and request URL, which must comply with expression syntax. For detailed specifications, see the product document.
                     */
                    std::string m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * Handling method for browser spoofing identification rules, including Cookie verification, session tracking configuration, and client behavior validation configuration.
                     */
                    BrowserImpersonationDetectionAction m_action;
                    bool m_actionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_BROWSERIMPERSONATIONDETECTIONRULE_H_
