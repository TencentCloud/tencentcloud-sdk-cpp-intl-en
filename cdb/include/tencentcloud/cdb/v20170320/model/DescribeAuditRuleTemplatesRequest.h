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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEAUDITRULETEMPLATESREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEAUDITRULETEMPLATESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeAuditRuleTemplates request structure.
                */
                class DescribeAuditRuleTemplatesRequest : public AbstractModel
                {
                public:
                    DescribeAuditRuleTemplatesRequest();
                    ~DescribeAuditRuleTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Rule template ID.
                     * @return RuleTemplateIds Rule template ID.
                     * 
                     */
                    std::vector<std::string> GetRuleTemplateIds() const;

                    /**
                     * 设置Rule template ID.
                     * @param _ruleTemplateIds Rule template ID.
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
                     * 获取Rule template name.
                     * @return RuleTemplateNames Rule template name.
                     * 
                     */
                    std::vector<std::string> GetRuleTemplateNames() const;

                    /**
                     * 设置Rule template name.
                     * @param _ruleTemplateNames Rule template name.
                     * 
                     */
                    void SetRuleTemplateNames(const std::vector<std::string>& _ruleTemplateNames);

                    /**
                     * 判断参数 RuleTemplateNames 是否已赋值
                     * @return RuleTemplateNames 是否已赋值
                     * 
                     */
                    bool RuleTemplateNamesHasBeenSet() const;

                    /**
                     * 获取Number of entries to return per request. Default value: 20. Maximum value: 1000.
                     * @return Limit Number of entries to return per request. Default value: 20. Maximum value: 1000.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of entries to return per request. Default value: 20. Maximum value: 1000.
                     * @param _limit Number of entries to return per request. Default value: 20. Maximum value: 1000.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Offset. Default value: 0.
                     * @return Offset Offset. Default value: 0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0.
                     * @param _offset Offset. Default value: 0.
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

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

                private:

                    /**
                     * Rule template ID.
                     */
                    std::vector<std::string> m_ruleTemplateIds;
                    bool m_ruleTemplateIdsHasBeenSet;

                    /**
                     * Rule template name.
                     */
                    std::vector<std::string> m_ruleTemplateNames;
                    bool m_ruleTemplateNamesHasBeenSet;

                    /**
                     * Number of entries to return per request. Default value: 20. Maximum value: 1000.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEAUDITRULETEMPLATESREQUEST_H_
