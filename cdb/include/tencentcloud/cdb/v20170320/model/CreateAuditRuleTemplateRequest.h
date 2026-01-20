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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_CREATEAUDITRULETEMPLATEREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_CREATEAUDITRULETEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/RuleFilters.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * CreateAuditRuleTemplate request structure.
                */
                class CreateAuditRuleTemplateRequest : public AbstractModel
                {
                public:
                    CreateAuditRuleTemplateRequest();
                    ~CreateAuditRuleTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Audit rule.
                     * @return RuleFilters Audit rule.
                     * 
                     */
                    std::vector<RuleFilters> GetRuleFilters() const;

                    /**
                     * 设置Audit rule.
                     * @param _ruleFilters Audit rule.
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
                     * 获取Rule template name. Up to 30 characters are allowed.
                     * @return RuleTemplateName Rule template name. Up to 30 characters are allowed.
                     * 
                     */
                    std::string GetRuleTemplateName() const;

                    /**
                     * 设置Rule template name. Up to 30 characters are allowed.
                     * @param _ruleTemplateName Rule template name. Up to 30 characters are allowed.
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
                     * 获取Rule template description. Up to 200 characters are allowed.
                     * @return Description Rule template description. Up to 200 characters are allowed.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Rule template description. Up to 200 characters are allowed.
                     * @param _description Rule template description. Up to 200 characters are allowed.
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
                     * 获取Alarm level. Valid values: 1 - Low risk, 2 - Medium risk, 3 - High risk. Default value: 1.
                     * @return AlarmLevel Alarm level. Valid values: 1 - Low risk, 2 - Medium risk, 3 - High risk. Default value: 1.
                     * 
                     */
                    uint64_t GetAlarmLevel() const;

                    /**
                     * 设置Alarm level. Valid values: 1 - Low risk, 2 - Medium risk, 3 - High risk. Default value: 1.
                     * @param _alarmLevel Alarm level. Valid values: 1 - Low risk, 2 - Medium risk, 3 - High risk. Default value: 1.
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
                     * 获取Alarm policy. Valid values: 0 - Alarm disabled, 1 - Alarm enabled. Default value: 0.
                     * @return AlarmPolicy Alarm policy. Valid values: 0 - Alarm disabled, 1 - Alarm enabled. Default value: 0.
                     * 
                     */
                    uint64_t GetAlarmPolicy() const;

                    /**
                     * 设置Alarm policy. Valid values: 0 - Alarm disabled, 1 - Alarm enabled. Default value: 0.
                     * @param _alarmPolicy Alarm policy. Valid values: 0 - Alarm disabled, 1 - Alarm enabled. Default value: 0.
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
                     * Audit rule.
                     */
                    std::vector<RuleFilters> m_ruleFilters;
                    bool m_ruleFiltersHasBeenSet;

                    /**
                     * Rule template name. Up to 30 characters are allowed.
                     */
                    std::string m_ruleTemplateName;
                    bool m_ruleTemplateNameHasBeenSet;

                    /**
                     * Rule template description. Up to 200 characters are allowed.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Alarm level. Valid values: 1 - Low risk, 2 - Medium risk, 3 - High risk. Default value: 1.
                     */
                    uint64_t m_alarmLevel;
                    bool m_alarmLevelHasBeenSet;

                    /**
                     * Alarm policy. Valid values: 0 - Alarm disabled, 1 - Alarm enabled. Default value: 0.
                     */
                    uint64_t m_alarmPolicy;
                    bool m_alarmPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_CREATEAUDITRULETEMPLATEREQUEST_H_
