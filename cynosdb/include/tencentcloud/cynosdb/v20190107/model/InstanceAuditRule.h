/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INSTANCEAUDITRULE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INSTANCEAUDITRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/AuditRuleFilters.h>
#include <tencentcloud/cynosdb/v20190107/model/RuleTemplateInfo.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Audit rule details of the instance, which is an output parameter of the `DescribeAuditRuleWithInstanceIds` API.
                */
                class InstanceAuditRule : public AbstractModel
                {
                public:
                    InstanceAuditRule();
                    ~InstanceAuditRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceId Instance ID.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Specifies whether it is a rule-based audit. true - rule-based audit; false - comprehensive audit.
                     * @return AuditRule Specifies whether it is a rule-based audit. true - rule-based audit; false - comprehensive audit.
                     * 
                     */
                    bool GetAuditRule() const;

                    /**
                     * 设置Specifies whether it is a rule-based audit. true - rule-based audit; false - comprehensive audit.
                     * @param _auditRule Specifies whether it is a rule-based audit. true - rule-based audit; false - comprehensive audit.
                     * 
                     */
                    void SetAuditRule(const bool& _auditRule);

                    /**
                     * 判断参数 AuditRule 是否已赋值
                     * @return AuditRule 是否已赋值
                     * 
                     */
                    bool AuditRuleHasBeenSet() const;

                    /**
                     * 获取Specifies the audit rule details. valid when AuditRule=true.
                     * @return AuditRuleFilters Specifies the audit rule details. valid when AuditRule=true.
                     * 
                     */
                    std::vector<AuditRuleFilters> GetAuditRuleFilters() const;

                    /**
                     * 设置Specifies the audit rule details. valid when AuditRule=true.
                     * @param _auditRuleFilters Specifies the audit rule details. valid when AuditRule=true.
                     * 
                     */
                    void SetAuditRuleFilters(const std::vector<AuditRuleFilters>& _auditRuleFilters);

                    /**
                     * 判断参数 AuditRuleFilters 是否已赋值
                     * @return AuditRuleFilters 是否已赋值
                     * 
                     */
                    bool AuditRuleFiltersHasBeenSet() const;

                    /**
                     * 获取Whether it is an audit policy.
                     * @return OldRule Whether it is an audit policy.
                     * 
                     */
                    bool GetOldRule() const;

                    /**
                     * 设置Whether it is an audit policy.
                     * @param _oldRule Whether it is an audit policy.
                     * 
                     */
                    void SetOldRule(const bool& _oldRule);

                    /**
                     * 判断参数 OldRule 是否已赋值
                     * @return OldRule 是否已赋值
                     * 
                     */
                    bool OldRuleHasBeenSet() const;

                    /**
                     * 获取The rule template details of the instance application.
                     * @return RuleTemplates The rule template details of the instance application.
                     * 
                     */
                    std::vector<RuleTemplateInfo> GetRuleTemplates() const;

                    /**
                     * 设置The rule template details of the instance application.
                     * @param _ruleTemplates The rule template details of the instance application.
                     * 
                     */
                    void SetRuleTemplates(const std::vector<RuleTemplateInfo>& _ruleTemplates);

                    /**
                     * 判断参数 RuleTemplates 是否已赋值
                     * @return RuleTemplates 是否已赋值
                     * 
                     */
                    bool RuleTemplatesHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Specifies whether it is a rule-based audit. true - rule-based audit; false - comprehensive audit.
                     */
                    bool m_auditRule;
                    bool m_auditRuleHasBeenSet;

                    /**
                     * Specifies the audit rule details. valid when AuditRule=true.
                     */
                    std::vector<AuditRuleFilters> m_auditRuleFilters;
                    bool m_auditRuleFiltersHasBeenSet;

                    /**
                     * Whether it is an audit policy.
                     */
                    bool m_oldRule;
                    bool m_oldRuleHasBeenSet;

                    /**
                     * The rule template details of the instance application.
                     */
                    std::vector<RuleTemplateInfo> m_ruleTemplates;
                    bool m_ruleTemplatesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INSTANCEAUDITRULE_H_
