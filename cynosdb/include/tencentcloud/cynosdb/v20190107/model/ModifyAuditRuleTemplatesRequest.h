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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYAUDITRULETEMPLATESREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYAUDITRULETEMPLATESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/RuleFilters.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * ModifyAuditRuleTemplates request structure.
                */
                class ModifyAuditRuleTemplatesRequest : public AbstractModel
                {
                public:
                    ModifyAuditRuleTemplatesRequest();
                    ~ModifyAuditRuleTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Audit rule template ID
                     * @return RuleTemplateIds Audit rule template ID
                     * 
                     */
                    std::vector<std::string> GetRuleTemplateIds() const;

                    /**
                     * 设置Audit rule template ID
                     * @param _ruleTemplateIds Audit rule template ID
                     * 
                     */
                    void SetRuleTemplateIds(const std::vector<std::string>& _ruleTemplateIds);

                    /**
                     * 判断参数 RuleTemplateIds 是否已赋值
                     * @return RuleTemplateIds 是否已赋值
                     * 
                     */
                    bool RuleTemplateIdsHasBeenSet() const;

                    /**
                     * 获取Audit rule after modification
                     * @return RuleFilters Audit rule after modification
                     * 
                     */
                    std::vector<RuleFilters> GetRuleFilters() const;

                    /**
                     * 设置Audit rule after modification
                     * @param _ruleFilters Audit rule after modification
                     * 
                     */
                    void SetRuleFilters(const std::vector<RuleFilters>& _ruleFilters);

                    /**
                     * 判断参数 RuleFilters 是否已赋值
                     * @return RuleFilters 是否已赋值
                     * 
                     */
                    bool RuleFiltersHasBeenSet() const;

                    /**
                     * 获取New name of the rule template
                     * @return RuleTemplateName New name of the rule template
                     * 
                     */
                    std::string GetRuleTemplateName() const;

                    /**
                     * 设置New name of the rule template
                     * @param _ruleTemplateName New name of the rule template
                     * 
                     */
                    void SetRuleTemplateName(const std::string& _ruleTemplateName);

                    /**
                     * 判断参数 RuleTemplateName 是否已赋值
                     * @return RuleTemplateName 是否已赋值
                     * 
                     */
                    bool RuleTemplateNameHasBeenSet() const;

                    /**
                     * 获取New description of the rule template
                     * @return Description New description of the rule template
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置New description of the rule template
                     * @param _description New description of the rule template
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
                     * 获取Alert Levels. 1 - Low Risk, 2 - Medium Risk, 3 - High Risk.
                     * @return AlarmLevel Alert Levels. 1 - Low Risk, 2 - Medium Risk, 3 - High Risk.
                     * 
                     */
                    uint64_t GetAlarmLevel() const;

                    /**
                     * 设置Alert Levels. 1 - Low Risk, 2 - Medium Risk, 3 - High Risk.
                     * @param _alarmLevel Alert Levels. 1 - Low Risk, 2 - Medium Risk, 3 - High Risk.
                     * 
                     */
                    void SetAlarmLevel(const uint64_t& _alarmLevel);

                    /**
                     * 判断参数 AlarmLevel 是否已赋值
                     * @return AlarmLevel 是否已赋值
                     * 
                     */
                    bool AlarmLevelHasBeenSet() const;

                    /**
                     * 获取Alert policy. 0 - No alert, 1 - Alert.
                     * @return AlarmPolicy Alert policy. 0 - No alert, 1 - Alert.
                     * 
                     */
                    uint64_t GetAlarmPolicy() const;

                    /**
                     * 设置Alert policy. 0 - No alert, 1 - Alert.
                     * @param _alarmPolicy Alert policy. 0 - No alert, 1 - Alert.
                     * 
                     */
                    void SetAlarmPolicy(const uint64_t& _alarmPolicy);

                    /**
                     * 判断参数 AlarmPolicy 是否已赋值
                     * @return AlarmPolicy 是否已赋值
                     * 
                     */
                    bool AlarmPolicyHasBeenSet() const;

                private:

                    /**
                     * Audit rule template ID
                     */
                    std::vector<std::string> m_ruleTemplateIds;
                    bool m_ruleTemplateIdsHasBeenSet;

                    /**
                     * Audit rule after modification
                     */
                    std::vector<RuleFilters> m_ruleFilters;
                    bool m_ruleFiltersHasBeenSet;

                    /**
                     * New name of the rule template
                     */
                    std::string m_ruleTemplateName;
                    bool m_ruleTemplateNameHasBeenSet;

                    /**
                     * New description of the rule template
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Alert Levels. 1 - Low Risk, 2 - Medium Risk, 3 - High Risk.
                     */
                    uint64_t m_alarmLevel;
                    bool m_alarmLevelHasBeenSet;

                    /**
                     * Alert policy. 0 - No alert, 1 - Alert.
                     */
                    uint64_t m_alarmPolicy;
                    bool m_alarmPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYAUDITRULETEMPLATESREQUEST_H_
