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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MANAGEDRULEDETAIL_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MANAGEDRULEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Details of managed rules
                */
                class ManagedRuleDetail : public AbstractModel
                {
                public:
                    ManagedRuleDetail();
                    ~ManagedRuleDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Managed rule Id.
                     * @return RuleId Managed rule Id.
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置Managed rule Id.
                     * @param _ruleId Managed rule Id.
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
                     * 获取Protection level of the managed rule. Valid values: <li>low: low risk. This rule has lower risk and is suitable for access scenarios in very strict control environments. Rules at this level may cause considerable false alarms;</li><li>medium: medium-risk. This rule has normal risk and is suitable for strict protection scenarios;</li><li>high: high-risk. This rule has relatively high risk and will not generate false alarms in most scenarios;</li><li>extreme: ultra-high risk. This rule has extremely high risk and basically will not generate false alarms;</li>
                     * @return RiskLevel Protection level of the managed rule. Valid values: <li>low: low risk. This rule has lower risk and is suitable for access scenarios in very strict control environments. Rules at this level may cause considerable false alarms;</li><li>medium: medium-risk. This rule has normal risk and is suitable for strict protection scenarios;</li><li>high: high-risk. This rule has relatively high risk and will not generate false alarms in most scenarios;</li><li>extreme: ultra-high risk. This rule has extremely high risk and basically will not generate false alarms;</li>
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置Protection level of the managed rule. Valid values: <li>low: low risk. This rule has lower risk and is suitable for access scenarios in very strict control environments. Rules at this level may cause considerable false alarms;</li><li>medium: medium-risk. This rule has normal risk and is suitable for strict protection scenarios;</li><li>high: high-risk. This rule has relatively high risk and will not generate false alarms in most scenarios;</li><li>extreme: ultra-high risk. This rule has extremely high risk and basically will not generate false alarms;</li>
                     * @param _riskLevel Protection level of the managed rule. Valid values: <li>low: low risk. This rule has lower risk and is suitable for access scenarios in very strict control environments. Rules at this level may cause considerable false alarms;</li><li>medium: medium-risk. This rule has normal risk and is suitable for strict protection scenarios;</li><li>high: high-risk. This rule has relatively high risk and will not generate false alarms in most scenarios;</li><li>extreme: ultra-high risk. This rule has extremely high risk and basically will not generate false alarms;</li>
                     * 
                     */
                    void SetRiskLevel(const std::string& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取Rule description.
                     * @return Description Rule description.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Rule description.
                     * @param _description Rule description.
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
                     * 获取Rule tag. Some types of rules do not have tags.
                     * @return Tags Rule tag. Some types of rules do not have tags.
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置Rule tag. Some types of rules do not have tags.
                     * @param _tags Rule tag. Some types of rules do not have tags.
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Rule version.
                     * @return RuleVersion Rule version.
                     * 
                     */
                    std::string GetRuleVersion() const;

                    /**
                     * 设置Rule version.
                     * @param _ruleVersion Rule version.
                     * 
                     */
                    void SetRuleVersion(const std::string& _ruleVersion);

                    /**
                     * 判断参数 RuleVersion 是否已赋值
                     * @return RuleVersion 是否已赋值
                     * 
                     */
                    bool RuleVersionHasBeenSet() const;

                private:

                    /**
                     * Managed rule Id.
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Protection level of the managed rule. Valid values: <li>low: low risk. This rule has lower risk and is suitable for access scenarios in very strict control environments. Rules at this level may cause considerable false alarms;</li><li>medium: medium-risk. This rule has normal risk and is suitable for strict protection scenarios;</li><li>high: high-risk. This rule has relatively high risk and will not generate false alarms in most scenarios;</li><li>extreme: ultra-high risk. This rule has extremely high risk and basically will not generate false alarms;</li>
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * Rule description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Rule tag. Some types of rules do not have tags.
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Rule version.
                     */
                    std::string m_ruleVersion;
                    bool m_ruleVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MANAGEDRULEDETAIL_H_
