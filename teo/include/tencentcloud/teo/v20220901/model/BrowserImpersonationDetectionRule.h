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
                     * 获取Browser spoofing identification rule ID. rule ID supports different rule configuration operations: <li> <b>add</b> a new rule: ID is empty or without specifying the ID parameter;</li> <li> <b>modify</b> an existing rule: specify the rule ID that needs to be updated/modified;</li> <li> <b>delete</b> an existing rule: existing Rules not included in the Rules list of the BrowserImpersonationDetection parameter will be deleted.</li>.
                     * @return Id Browser spoofing identification rule ID. rule ID supports different rule configuration operations: <li> <b>add</b> a new rule: ID is empty or without specifying the ID parameter;</li> <li> <b>modify</b> an existing rule: specify the rule ID that needs to be updated/modified;</li> <li> <b>delete</b> an existing rule: existing Rules not included in the Rules list of the BrowserImpersonationDetection parameter will be deleted.</li>.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Browser spoofing identification rule ID. rule ID supports different rule configuration operations: <li> <b>add</b> a new rule: ID is empty or without specifying the ID parameter;</li> <li> <b>modify</b> an existing rule: specify the rule ID that needs to be updated/modified;</li> <li> <b>delete</b> an existing rule: existing Rules not included in the Rules list of the BrowserImpersonationDetection parameter will be deleted.</li>.
                     * @param _id Browser spoofing identification rule ID. rule ID supports different rule configuration operations: <li> <b>add</b> a new rule: ID is empty or without specifying the ID parameter;</li> <li> <b>modify</b> an existing rule: specify the rule ID that needs to be updated/modified;</li> <li> <b>delete</b> an existing rule: existing Rules not included in the Rules list of the BrowserImpersonationDetection parameter will be deleted.</li>.
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
                     * 获取Specifies the name of the browser spoofing identification rule.
                     * @return Name Specifies the name of the browser spoofing identification rule.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Specifies the name of the browser spoofing identification rule.
                     * @param _name Specifies the name of the browser spoofing identification rule.
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
                     * 获取Whether browser spoofing detection is enabled. valid values: <li>on: enabled;</li><li>off: disabled.</li>.
                     * @return Enabled Whether browser spoofing detection is enabled. valid values: <li>on: enabled;</li><li>off: disabled.</li>.
                     * 
                     */
                    std::string GetEnabled() const;

                    /**
                     * 设置Whether browser spoofing detection is enabled. valid values: <li>on: enabled;</li><li>off: disabled.</li>.
                     * @param _enabled Whether browser spoofing detection is enabled. valid values: <li>on: enabled;</li><li>off: disabled.</li>.
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
                     * 获取Specifies the specific content of browser spoofing identification rules, which only support configuration of request Method (Method), request Path (Path), and request URL, and must comply with expression grammar. for detailed specifications, please refer to the product document.
                     * @return Condition Specifies the specific content of browser spoofing identification rules, which only support configuration of request Method (Method), request Path (Path), and request URL, and must comply with expression grammar. for detailed specifications, please refer to the product document.
                     * 
                     */
                    std::string GetCondition() const;

                    /**
                     * 设置Specifies the specific content of browser spoofing identification rules, which only support configuration of request Method (Method), request Path (Path), and request URL, and must comply with expression grammar. for detailed specifications, please refer to the product document.
                     * @param _condition Specifies the specific content of browser spoofing identification rules, which only support configuration of request Method (Method), request Path (Path), and request URL, and must comply with expression grammar. for detailed specifications, please refer to the product document.
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
                     * 获取Describes the handling method for browser spoofing identification rules, including Cookie verification, session tracking configuration, and client behavior validation configuration.
                     * @return Action Describes the handling method for browser spoofing identification rules, including Cookie verification, session tracking configuration, and client behavior validation configuration.
                     * 
                     */
                    BrowserImpersonationDetectionAction GetAction() const;

                    /**
                     * 设置Describes the handling method for browser spoofing identification rules, including Cookie verification, session tracking configuration, and client behavior validation configuration.
                     * @param _action Describes the handling method for browser spoofing identification rules, including Cookie verification, session tracking configuration, and client behavior validation configuration.
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
                     * Browser spoofing identification rule ID. rule ID supports different rule configuration operations: <li> <b>add</b> a new rule: ID is empty or without specifying the ID parameter;</li> <li> <b>modify</b> an existing rule: specify the rule ID that needs to be updated/modified;</li> <li> <b>delete</b> an existing rule: existing Rules not included in the Rules list of the BrowserImpersonationDetection parameter will be deleted.</li>.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Specifies the name of the browser spoofing identification rule.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Whether browser spoofing detection is enabled. valid values: <li>on: enabled;</li><li>off: disabled.</li>.
                     */
                    std::string m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * Specifies the specific content of browser spoofing identification rules, which only support configuration of request Method (Method), request Path (Path), and request URL, and must comply with expression grammar. for detailed specifications, please refer to the product document.
                     */
                    std::string m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * Describes the handling method for browser spoofing identification rules, including Cookie verification, session tracking configuration, and client behavior validation configuration.
                     */
                    BrowserImpersonationDetectionAction m_action;
                    bool m_actionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_BROWSERIMPERSONATIONDETECTIONRULE_H_
