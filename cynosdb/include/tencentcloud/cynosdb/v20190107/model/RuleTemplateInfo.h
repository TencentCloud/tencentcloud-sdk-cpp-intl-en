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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_RULETEMPLATEINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_RULETEMPLATEINFO_H_

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
                * 
                */
                class RuleTemplateInfo : public AbstractModel
                {
                public:
                    RuleTemplateInfo();
                    ~RuleTemplateInfo() = default;
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
                     * 获取The rule content.
                     * @return RuleFilters The rule content.
                     * 
                     */
                    std::vector<RuleFilters> GetRuleFilters() const;

                    /**
                     * 设置The rule content.
                     * @param _ruleFilters The rule content.
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
                     * 获取Alarm level. valid values: 1 (low risk), 2 (medium risk), 3 (high risk).
                     * @return AlarmLevel Alarm level. valid values: 1 (low risk), 2 (medium risk), 3 (high risk).
                     * 
                     */
                    int64_t GetAlarmLevel() const;

                    /**
                     * 设置Alarm level. valid values: 1 (low risk), 2 (medium risk), 3 (high risk).
                     * @param _alarmLevel Alarm level. valid values: 1 (low risk), 2 (medium risk), 3 (high risk).
                     * 
                     */
                    void SetAlarmLevel(const int64_t& _alarmLevel);

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
                    int64_t GetAlarmPolicy() const;

                    /**
                     * 设置Alarm policy. 0 - no alert, 1 - alert.
                     * @param _alarmPolicy Alarm policy. 0 - no alert, 1 - alert.
                     * 
                     */
                    void SetAlarmPolicy(const int64_t& _alarmPolicy);

                    /**
                     * 判断参数 AlarmPolicy 是否已赋值
                     * @return AlarmPolicy 是否已赋值
                     * 
                     */
                    bool AlarmPolicyHasBeenSet() const;

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
                     * The rule content.
                     */
                    std::vector<RuleFilters> m_ruleFilters;
                    bool m_ruleFiltersHasBeenSet;

                    /**
                     * Alarm level. valid values: 1 (low risk), 2 (medium risk), 3 (high risk).
                     */
                    int64_t m_alarmLevel;
                    bool m_alarmLevelHasBeenSet;

                    /**
                     * Alarm policy. 0 - no alert, 1 - alert.
                     */
                    int64_t m_alarmPolicy;
                    bool m_alarmPolicyHasBeenSet;

                    /**
                     * Rule description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_RULETEMPLATEINFO_H_
