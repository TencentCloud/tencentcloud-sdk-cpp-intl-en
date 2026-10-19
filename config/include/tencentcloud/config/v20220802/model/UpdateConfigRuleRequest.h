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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_UPDATECONFIGRULEREQUEST_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_UPDATECONFIGRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/config/v20220802/model/TriggerType.h>
#include <tencentcloud/config/v20220802/model/InputParameter.h>
#include <tencentcloud/config/v20220802/model/Tag.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * UpdateConfigRule request structure.
                */
                class UpdateConfigRuleRequest : public AbstractModel
                {
                public:
                    UpdateConfigRuleRequest();
                    ~UpdateConfigRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Trigger types, supporting up to two types.</p>
                     * @return TriggerType <p>Trigger types, supporting up to two types.</p>
                     * 
                     */
                    std::vector<TriggerType> GetTriggerType() const;

                    /**
                     * 设置<p>Trigger types, supporting up to two types.</p>
                     * @param _triggerType <p>Trigger types, supporting up to two types.</p>
                     * 
                     */
                    void SetTriggerType(const std::vector<TriggerType>& _triggerType);

                    /**
                     * 判断参数 TriggerType 是否已赋值
                     * @return TriggerType 是否已赋值
                     * 
                     */
                    bool TriggerTypeHasBeenSet() const;

                    /**
                     * 获取<p>Risk level. Valid values:<br>1: high-risk<br>2: medium-risk<br>3: low risk</p>
                     * @return RiskLevel <p>Risk level. Valid values:<br>1: high-risk<br>2: medium-risk<br>3: low risk</p>
                     * 
                     */
                    uint64_t GetRiskLevel() const;

                    /**
                     * 设置<p>Risk level. Valid values:<br>1: high-risk<br>2: medium-risk<br>3: low risk</p>
                     * @param _riskLevel <p>Risk level. Valid values:<br>1: high-risk<br>2: medium-risk<br>3: low risk</p>
                     * 
                     */
                    void SetRiskLevel(const uint64_t& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取<p>Rule ID.</p>
                     * @return RuleId <p>Rule ID.</p>
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置<p>Rule ID.</p>
                     * @param _ruleId <p>Rule ID.</p>
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
                     * 获取<p>rule name</p>
                     * @return RuleName <p>rule name</p>
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置<p>rule name</p>
                     * @param _ruleName <p>rule name</p>
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取<p>Input parameters.</p>
                     * @return InputParameter <p>Input parameters.</p>
                     * 
                     */
                    std::vector<InputParameter> GetInputParameter() const;

                    /**
                     * 设置<p>Input parameters.</p>
                     * @param _inputParameter <p>Input parameters.</p>
                     * 
                     */
                    void SetInputParameter(const std::vector<InputParameter>& _inputParameter);

                    /**
                     * 判断参数 InputParameter 是否已赋值
                     * @return InputParameter 是否已赋值
                     * 
                     */
                    bool InputParameterHasBeenSet() const;

                    /**
                     * 获取<p>Description.</p>
                     * @return Description <p>Description.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Description.</p>
                     * @param _description <p>Description.</p>
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
                     * 获取<p>Rule evaluation region scope. The rule only applies to resources in specified regions. Supported regions are those returned by config:ListResourceRegions.</p>
                     * @return RegionsScope <p>Rule evaluation region scope. The rule only applies to resources in specified regions. Supported regions are those returned by config:ListResourceRegions.</p>
                     * 
                     */
                    std::vector<std::string> GetRegionsScope() const;

                    /**
                     * 设置<p>Rule evaluation region scope. The rule only applies to resources in specified regions. Supported regions are those returned by config:ListResourceRegions.</p>
                     * @param _regionsScope <p>Rule evaluation region scope. The rule only applies to resources in specified regions. Supported regions are those returned by config:ListResourceRegions.</p>
                     * 
                     */
                    void SetRegionsScope(const std::vector<std::string>& _regionsScope);

                    /**
                     * 判断参数 RegionsScope 是否已赋值
                     * @return RegionsScope 是否已赋值
                     * 
                     */
                    bool RegionsScopeHasBeenSet() const;

                    /**
                     * 获取<p>Rule evaluation tag scope. The rule only applies to resources bound with specified tags.</p>
                     * @return TagsScope <p>Rule evaluation tag scope. The rule only applies to resources bound with specified tags.</p>
                     * 
                     */
                    std::vector<Tag> GetTagsScope() const;

                    /**
                     * 设置<p>Rule evaluation tag scope. The rule only applies to resources bound with specified tags.</p>
                     * @param _tagsScope <p>Rule evaluation tag scope. The rule only applies to resources bound with specified tags.</p>
                     * 
                     */
                    void SetTagsScope(const std::vector<Tag>& _tagsScope);

                    /**
                     * 判断参数 TagsScope 是否已赋值
                     * @return TagsScope 是否已赋值
                     * 
                     */
                    bool TagsScopeHasBeenSet() const;

                    /**
                     * 获取<p>The rule is invalid for the specified resource ID, meaning that evaluation will not be performed on this resource.</p>
                     * @return ExcludeResourceIdsScope <p>The rule is invalid for the specified resource ID, meaning that evaluation will not be performed on this resource.</p>
                     * 
                     */
                    std::vector<std::string> GetExcludeResourceIdsScope() const;

                    /**
                     * 设置<p>The rule is invalid for the specified resource ID, meaning that evaluation will not be performed on this resource.</p>
                     * @param _excludeResourceIdsScope <p>The rule is invalid for the specified resource ID, meaning that evaluation will not be performed on this resource.</p>
                     * 
                     */
                    void SetExcludeResourceIdsScope(const std::vector<std::string>& _excludeResourceIdsScope);

                    /**
                     * 判断参数 ExcludeResourceIdsScope 是否已赋值
                     * @return ExcludeResourceIdsScope 是否已赋值
                     * 
                     */
                    bool ExcludeResourceIdsScopeHasBeenSet() const;

                private:

                    /**
                     * <p>Trigger types, supporting up to two types.</p>
                     */
                    std::vector<TriggerType> m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * <p>Risk level. Valid values:<br>1: high-risk<br>2: medium-risk<br>3: low risk</p>
                     */
                    uint64_t m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * <p>Rule ID.</p>
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * <p>rule name</p>
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * <p>Input parameters.</p>
                     */
                    std::vector<InputParameter> m_inputParameter;
                    bool m_inputParameterHasBeenSet;

                    /**
                     * <p>Description.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Rule evaluation region scope. The rule only applies to resources in specified regions. Supported regions are those returned by config:ListResourceRegions.</p>
                     */
                    std::vector<std::string> m_regionsScope;
                    bool m_regionsScopeHasBeenSet;

                    /**
                     * <p>Rule evaluation tag scope. The rule only applies to resources bound with specified tags.</p>
                     */
                    std::vector<Tag> m_tagsScope;
                    bool m_tagsScopeHasBeenSet;

                    /**
                     * <p>The rule is invalid for the specified resource ID, meaning that evaluation will not be performed on this resource.</p>
                     */
                    std::vector<std::string> m_excludeResourceIdsScope;
                    bool m_excludeResourceIdsScopeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_UPDATECONFIGRULEREQUEST_H_
