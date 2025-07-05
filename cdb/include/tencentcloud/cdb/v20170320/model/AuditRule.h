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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_AUDITRULE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_AUDITRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/AuditFilter.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * Audit rule
                */
                class AuditRule : public AbstractModel
                {
                public:
                    AuditRule();
                    ~AuditRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Audit rule ID
                     * @return RuleId Audit rule ID
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置Audit rule ID
                     * @param _ruleId Audit rule ID
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
                     * 获取Creation time of audit rule in the format of 2019-03-20 17:09:13
                     * @return CreateTime Creation time of audit rule in the format of 2019-03-20 17:09:13
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time of audit rule in the format of 2019-03-20 17:09:13
                     * @param _createTime Creation time of audit rule in the format of 2019-03-20 17:09:13
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Last modified time of audit rule in the format of 2019-03-20 17:09:13
                     * @return ModifyTime Last modified time of audit rule in the format of 2019-03-20 17:09:13
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Last modified time of audit rule in the format of 2019-03-20 17:09:13
                     * @param _modifyTime Last modified time of audit rule in the format of 2019-03-20 17:09:13
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取Audit rule name
Note: This field may return `null`, indicating that no valid value was found.
                     * @return RuleName Audit rule name
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置Audit rule name
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _ruleName Audit rule name
Note: This field may return `null`, indicating that no valid value was found.
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
                     * 获取Audit rule description
Note: This field may return `null`, indicating that no valid value was found.
                     * @return Description Audit rule description
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Audit rule description
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _description Audit rule description
Note: This field may return `null`, indicating that no valid value was found.
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
                     * 获取Audit rule filters
Note: This field may return `null`, indicating that no valid value was found.
                     * @return RuleFilters Audit rule filters
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::vector<AuditFilter> GetRuleFilters() const;

                    /**
                     * 设置Audit rule filters
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _ruleFilters Audit rule filters
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetRuleFilters(const std::vector<AuditFilter>& _ruleFilters);

                    /**
                     * 判断参数 RuleFilters 是否已赋值
                     * @return RuleFilters 是否已赋值
                     * 
                     */
                    bool RuleFiltersHasBeenSet() const;

                    /**
                     * 获取Whether to enable full audit
                     * @return AuditAll Whether to enable full audit
                     * 
                     */
                    bool GetAuditAll() const;

                    /**
                     * 设置Whether to enable full audit
                     * @param _auditAll Whether to enable full audit
                     * 
                     */
                    void SetAuditAll(const bool& _auditAll);

                    /**
                     * 判断参数 AuditAll 是否已赋值
                     * @return AuditAll 是否已赋值
                     * 
                     */
                    bool AuditAllHasBeenSet() const;

                private:

                    /**
                     * Audit rule ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Creation time of audit rule in the format of 2019-03-20 17:09:13
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Last modified time of audit rule in the format of 2019-03-20 17:09:13
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Audit rule name
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * Audit rule description
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Audit rule filters
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<AuditFilter> m_ruleFilters;
                    bool m_ruleFiltersHasBeenSet;

                    /**
                     * Whether to enable full audit
                     */
                    bool m_auditAll;
                    bool m_auditAllHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_AUDITRULE_H_
