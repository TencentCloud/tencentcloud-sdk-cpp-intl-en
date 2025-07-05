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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_AUDITRULETEMPLATEINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_AUDITRULETEMPLATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Details of an audit rule template
                */
                class AuditRuleTemplateInfo : public AbstractModel
                {
                public:
                    AuditRuleTemplateInfo();
                    ~AuditRuleTemplateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rule template ID
                     * @return RuleTemplateId Rule template ID
                     * 
                     */
                    std::string GetRuleTemplateId() const;

                    /**
                     * 设置Rule template ID
                     * @param _ruleTemplateId Rule template ID
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
                     * 获取Rule template name
                     * @return RuleTemplateName Rule template name
                     * 
                     */
                    std::string GetRuleTemplateName() const;

                    /**
                     * 设置Rule template name
                     * @param _ruleTemplateName Rule template name
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
                     * 获取Filter of the rule template
                     * @return RuleFilters Filter of the rule template
                     * 
                     */
                    std::vector<RuleFilters> GetRuleFilters() const;

                    /**
                     * 设置Filter of the rule template
                     * @param _ruleFilters Filter of the rule template
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
                     * 获取Creation time of a rule template
                     * @return CreateAt Creation time of a rule template
                     * 
                     */
                    std::string GetCreateAt() const;

                    /**
                     * 设置Creation time of a rule template
                     * @param _createAt Creation time of a rule template
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
                     * 获取Rule template modification time.
                     * @return UpdateAt Rule template modification time.
                     * 
                     */
                    std::string GetUpdateAt() const;

                    /**
                     * 设置Rule template modification time.
                     * @param _updateAt Rule template modification time.
                     * 
                     */
                    void SetUpdateAt(const std::string& _updateAt);

                    /**
                     * 判断参数 UpdateAt 是否已赋值
                     * @return UpdateAt 是否已赋值
                     * 
                     */
                    bool UpdateAtHasBeenSet() const;

                    /**
                     * 获取Alarm level. valid values: 1 (low risk), 2 (medium risk), 3 (high risk).
                     * @return AlarmLevel Alarm level. valid values: 1 (low risk), 2 (medium risk), 3 (high risk).
                     * 
                     */
                    uint64_t GetAlarmLevel() const;

                    /**
                     * 设置Alarm level. valid values: 1 (low risk), 2 (medium risk), 3 (high risk).
                     * @param _alarmLevel Alarm level. valid values: 1 (low risk), 2 (medium risk), 3 (high risk).
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
                     * 获取Alarm policy. 0 - no alert, 1 - alert.
                     * @return AlarmPolicy Alarm policy. 0 - no alert, 1 - alert.
                     * 
                     */
                    uint64_t GetAlarmPolicy() const;

                    /**
                     * 设置Alarm policy. 0 - no alert, 1 - alert.
                     * @param _alarmPolicy Alarm policy. 0 - no alert, 1 - alert.
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
                     * 获取Template status. 0 - no task, 1 - modifying.
                     * @return Status Template status. 0 - no task, 1 - modifying.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Template status. 0 - no task, 1 - modifying.
                     * @param _status Template status. 0 - no task, 1 - modifying.
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
                     * 获取Template application is used in which instances.
                     * @return AffectedInstances Template application is used in which instances.
                     * 
                     */
                    std::vector<std::string> GetAffectedInstances() const;

                    /**
                     * 设置Template application is used in which instances.
                     * @param _affectedInstances Template application is used in which instances.
                     * 
                     */
                    void SetAffectedInstances(const std::vector<std::string>& _affectedInstances);

                    /**
                     * 判断参数 AffectedInstances 是否已赋值
                     * @return AffectedInstances 是否已赋值
                     * 
                     */
                    bool AffectedInstancesHasBeenSet() const;

                private:

                    /**
                     * Rule template ID
                     */
                    std::string m_ruleTemplateId;
                    bool m_ruleTemplateIdHasBeenSet;

                    /**
                     * Rule template name
                     */
                    std::string m_ruleTemplateName;
                    bool m_ruleTemplateNameHasBeenSet;

                    /**
                     * Filter of the rule template
                     */
                    std::vector<RuleFilters> m_ruleFilters;
                    bool m_ruleFiltersHasBeenSet;

                    /**
                     * Rule template description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Creation time of a rule template
                     */
                    std::string m_createAt;
                    bool m_createAtHasBeenSet;

                    /**
                     * Rule template modification time.
                     */
                    std::string m_updateAt;
                    bool m_updateAtHasBeenSet;

                    /**
                     * Alarm level. valid values: 1 (low risk), 2 (medium risk), 3 (high risk).
                     */
                    uint64_t m_alarmLevel;
                    bool m_alarmLevelHasBeenSet;

                    /**
                     * Alarm policy. 0 - no alert, 1 - alert.
                     */
                    uint64_t m_alarmPolicy;
                    bool m_alarmPolicyHasBeenSet;

                    /**
                     * Template status. 0 - no task, 1 - modifying.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Template application is used in which instances.
                     */
                    std::vector<std::string> m_affectedInstances;
                    bool m_affectedInstancesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_AUDITRULETEMPLATEINFO_H_
