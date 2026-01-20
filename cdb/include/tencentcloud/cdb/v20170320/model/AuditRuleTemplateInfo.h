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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_AUDITRULETEMPLATEINFO_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_AUDITRULETEMPLATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Details of an audit rule template.
                */
                class AuditRuleTemplateInfo : public AbstractModel
                {
                public:
                    AuditRuleTemplateInfo();
                    ~AuditRuleTemplateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rule template ID.
                     * @return RuleTemplateId Rule template ID.
                     * 
                     */
                    std::string GetRuleTemplateId() const;

                    /**
                     * 设置Rule template ID.
                     * @param _ruleTemplateId Rule template ID.
                     * 
                     */
                    void SetRuleTemplateId(const std::string& _ruleTemplateId);

                    /**
                     * 判断参数 RuleTemplateId 是否已赋值
                     * @return RuleTemplateId 是否已赋值
                     * 
                     */
                    bool RuleTemplateIdHasBeenSet() const;

                    /**
                     * 获取Rule template name.
                     * @return RuleTemplateName Rule template name.
                     * 
                     */
                    std::string GetRuleTemplateName() const;

                    /**
                     * 设置Rule template name.
                     * @param _ruleTemplateName Rule template name.
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
                     * 获取Filter conditions of the rule template.
                     * @return RuleFilters Filter conditions of the rule template.
                     * 
                     */
                    std::vector<RuleFilters> GetRuleFilters() const;

                    /**
                     * 设置Filter conditions of the rule template.
                     * @param _ruleFilters Filter conditions of the rule template.
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
                     * 获取Rule template description.
                     * @return Description Rule template description.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Rule template description.
                     * @param _description Rule template description.
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
                     * 获取Rule template creation time.
                     * @return CreateAt Rule template creation time.
                     * 
                     */
                    std::string GetCreateAt() const;

                    /**
                     * 设置Rule template creation time.
                     * @param _createAt Rule template creation time.
                     * 
                     */
                    void SetCreateAt(const std::string& _createAt);

                    /**
                     * 判断参数 CreateAt 是否已赋值
                     * @return CreateAt 是否已赋值
                     * 
                     */
                    bool CreateAtHasBeenSet() const;

                    /**
                     * 获取Alarm level. Valid values: 1 - Low risk, 2 - Medium risk, 3 - High risk.
                     * @return AlarmLevel Alarm level. Valid values: 1 - Low risk, 2 - Medium risk, 3 - High risk.
                     * 
                     */
                    uint64_t GetAlarmLevel() const;

                    /**
                     * 设置Alarm level. Valid values: 1 - Low risk, 2 - Medium risk, 3 - High risk.
                     * @param _alarmLevel Alarm level. Valid values: 1 - Low risk, 2 - Medium risk, 3 - High risk.
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
                     * 获取Alarm policy. Valid values: 0 - Alarm disabled, 1 - Alarm enabled.
                     * @return AlarmPolicy Alarm policy. Valid values: 0 - Alarm disabled, 1 - Alarm enabled.
                     * 
                     */
                    uint64_t GetAlarmPolicy() const;

                    /**
                     * 设置Alarm policy. Valid values: 0 - Alarm disabled, 1 - Alarm enabled.
                     * @param _alarmPolicy Alarm policy. Valid values: 0 - Alarm disabled, 1 - Alarm enabled.
                     * 
                     */
                    void SetAlarmPolicy(const uint64_t& _alarmPolicy);

                    /**
                     * 判断参数 AlarmPolicy 是否已赋值
                     * @return AlarmPolicy 是否已赋值
                     * 
                     */
                    bool AlarmPolicyHasBeenSet() const;

                    /**
                     * 获取Instances to which this rule template is applied.
                     * @return AffectedInstances Instances to which this rule template is applied.
                     * 
                     */
                    std::vector<std::string> GetAffectedInstances() const;

                    /**
                     * 设置Instances to which this rule template is applied.
                     * @param _affectedInstances Instances to which this rule template is applied.
                     * 
                     */
                    void SetAffectedInstances(const std::vector<std::string>& _affectedInstances);

                    /**
                     * 判断参数 AffectedInstances 是否已赋值
                     * @return AffectedInstances 是否已赋值
                     * 
                     */
                    bool AffectedInstancesHasBeenSet() const;

                    /**
                     * 获取Template status. Valid values: 0 - No task, 1 - modifying.
                     * @return Status Template status. Valid values: 0 - No task, 1 - modifying.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Template status. Valid values: 0 - No task, 1 - modifying.
                     * @param _status Template status. Valid values: 0 - No task, 1 - modifying.
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Template update time.
                     * @return UpdateAt Template update time.
                     * 
                     */
                    std::string GetUpdateAt() const;

                    /**
                     * 设置Template update time.
                     * @param _updateAt Template update time.
                     * 
                     */
                    void SetUpdateAt(const std::string& _updateAt);

                    /**
                     * 判断参数 UpdateAt 是否已赋值
                     * @return UpdateAt 是否已赋值
                     * 
                     */
                    bool UpdateAtHasBeenSet() const;

                private:

                    /**
                     * Rule template ID.
                     */
                    std::string m_ruleTemplateId;
                    bool m_ruleTemplateIdHasBeenSet;

                    /**
                     * Rule template name.
                     */
                    std::string m_ruleTemplateName;
                    bool m_ruleTemplateNameHasBeenSet;

                    /**
                     * Filter conditions of the rule template.
                     */
                    std::vector<RuleFilters> m_ruleFilters;
                    bool m_ruleFiltersHasBeenSet;

                    /**
                     * Rule template description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Rule template creation time.
                     */
                    std::string m_createAt;
                    bool m_createAtHasBeenSet;

                    /**
                     * Alarm level. Valid values: 1 - Low risk, 2 - Medium risk, 3 - High risk.
                     */
                    uint64_t m_alarmLevel;
                    bool m_alarmLevelHasBeenSet;

                    /**
                     * Alarm policy. Valid values: 0 - Alarm disabled, 1 - Alarm enabled.
                     */
                    uint64_t m_alarmPolicy;
                    bool m_alarmPolicyHasBeenSet;

                    /**
                     * Instances to which this rule template is applied.
                     */
                    std::vector<std::string> m_affectedInstances;
                    bool m_affectedInstancesHasBeenSet;

                    /**
                     * Template status. Valid values: 0 - No task, 1 - modifying.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Template update time.
                     */
                    std::string m_updateAt;
                    bool m_updateAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_AUDITRULETEMPLATEINFO_H_
