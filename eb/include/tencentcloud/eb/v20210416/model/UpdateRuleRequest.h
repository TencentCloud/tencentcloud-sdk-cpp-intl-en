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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_UPDATERULEREQUEST_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_UPDATERULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
        {
            namespace Model
            {
                /**
                * UpdateRule request structure.
                */
                class UpdateRuleRequest : public AbstractModel
                {
                public:
                    UpdateRuleRequest();
                    ~UpdateRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Event rule ID
                     * @return RuleId Event rule ID
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置Event rule ID
                     * @param _ruleId Event rule ID
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取Event bus ID
                     * @return EventBusId Event bus ID
                     * 
                     */
                    std::string GetEventBusId() const;

                    /**
                     * 设置Event bus ID
                     * @param _eventBusId Event bus ID
                     * 
                     */
                    void SetEventBusId(const std::string& _eventBusId);

                    /**
                     * 判断参数 EventBusId 是否已赋值
                     * @return EventBusId 是否已赋值
                     * 
                     */
                    bool EventBusIdHasBeenSet() const;

                    /**
                     * 获取Switch.
                     * @return Enable Switch.
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置Switch.
                     * @param _enable Switch.
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取Rule description, which can contain up to 200 characters of any type.
                     * @return Description Rule description, which can contain up to 200 characters of any type.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Rule description, which can contain up to 200 characters of any type.
                     * @param _description Rule description, which can contain up to 200 characters of any type.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取See [CKafka Target](https://intl.cloud.tencent.com/document/product/1359/56084?from_cn_redirect=1)
                     * @return EventPattern See [CKafka Target](https://intl.cloud.tencent.com/document/product/1359/56084?from_cn_redirect=1)
                     * 
                     */
                    std::string GetEventPattern() const;

                    /**
                     * 设置See [CKafka Target](https://intl.cloud.tencent.com/document/product/1359/56084?from_cn_redirect=1)
                     * @param _eventPattern See [CKafka Target](https://intl.cloud.tencent.com/document/product/1359/56084?from_cn_redirect=1)
                     * 
                     */
                    void SetEventPattern(const std::string& _eventPattern);

                    /**
                     * 判断参数 EventPattern 是否已赋值
                     * @return EventPattern 是否已赋值
                     * 
                     */
                    bool EventPatternHasBeenSet() const;

                    /**
                     * 获取Event rule name, which can contain 2–60 letters, digits, underscores, and hyphens and must start with a letter and end with a digit or letter
                     * @return RuleName Event rule name, which can contain 2–60 letters, digits, underscores, and hyphens and must start with a letter and end with a digit or letter
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Event rule name, which can contain 2–60 letters, digits, underscores, and hyphens and must start with a letter and end with a digit or letter
                     * @param _ruleName Event rule name, which can contain 2–60 letters, digits, underscores, and hyphens and must start with a letter and end with a digit or letter
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                private:

                    /**
                     * Event rule ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Event bus ID
                     */
                    std::string m_eventBusId;
                    bool m_eventBusIdHasBeenSet;

                    /**
                     * Switch.
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * Rule description, which can contain up to 200 characters of any type.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * See [CKafka Target](https://intl.cloud.tencent.com/document/product/1359/56084?from_cn_redirect=1)
                     */
                    std::string m_eventPattern;
                    bool m_eventPatternHasBeenSet;

                    /**
                     * Event rule name, which can contain 2–60 letters, digits, underscores, and hyphens and must start with a letter and end with a digit or letter
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_UPDATERULEREQUEST_H_
