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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_OWASPRULE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_OWASPRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * Owasp rule.
                */
                class OwaspRule : public AbstractModel
                {
                public:
                    OwaspRule();
                    ~OwaspRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rule ID
                     * @return RuleId Rule ID
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置Rule ID
                     * @param _ruleId Rule ID
                     * 
                     */
                    void SetRuleId(const uint64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取Rule description
                     * @return Description Rule description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Rule description
                     * @param _description Rule description
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
                     * 获取Rule switch. valid values: 0 (disabled), 1 (enabled), 2 (observation only).
                     * @return Status Rule switch. valid values: 0 (disabled), 1 (enabled), 2 (observation only).
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Rule switch. valid values: 0 (disabled), 1 (enabled), 2 (observation only).
                     * @param _status Rule switch. valid values: 0 (disabled), 1 (enabled), 2 (observation only).
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Protection level of the rule. valid values: 100 (loose), 200 (normal), 300 (strict), 400 (ultra-strict).
                     * @return Level Protection level of the rule. valid values: 100 (loose), 200 (normal), 300 (strict), 400 (ultra-strict).
                     * 
                     */
                    int64_t GetLevel() const;

                    /**
                     * 设置Protection level of the rule. valid values: 100 (loose), 200 (normal), 300 (strict), 400 (ultra-strict).
                     * @param _level Protection level of the rule. valid values: 100 (loose), 200 (normal), 300 (strict), 400 (ultra-strict).
                     * 
                     */
                    void SetLevel(const int64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取Threat level. valid values: 0 (unknown), 100 (low risk), 200 (medium risk), 300 (high risk), 400 (critical).
                     * @return VulLevel Threat level. valid values: 0 (unknown), 100 (low risk), 200 (medium risk), 300 (high risk), 400 (critical).
                     * 
                     */
                    int64_t GetVulLevel() const;

                    /**
                     * 设置Threat level. valid values: 0 (unknown), 100 (low risk), 200 (medium risk), 300 (high risk), 400 (critical).
                     * @param _vulLevel Threat level. valid values: 0 (unknown), 100 (low risk), 200 (medium risk), 300 (high risk), 400 (critical).
                     * 
                     */
                    void SetVulLevel(const int64_t& _vulLevel);

                    /**
                     * 判断参数 VulLevel 是否已赋值
                     * @return VulLevel 是否已赋值
                     * 
                     */
                    bool VulLevelHasBeenSet() const;

                    /**
                     * 获取CVE ID
                     * @return CveID CVE ID
                     * 
                     */
                    std::string GetCveID() const;

                    /**
                     * 设置CVE ID
                     * @param _cveID CVE ID
                     * 
                     */
                    void SetCveID(const std::string& _cveID);

                    /**
                     * 判断参数 CveID 是否已赋值
                     * @return CveID 是否已赋值
                     * 
                     */
                    bool CveIDHasBeenSet() const;

                    /**
                     * 获取Specifies the rule type ID.
                     * @return TypeId Specifies the rule type ID.
                     * 
                     */
                    uint64_t GetTypeId() const;

                    /**
                     * 设置Specifies the rule type ID.
                     * @param _typeId Specifies the rule type ID.
                     * 
                     */
                    void SetTypeId(const uint64_t& _typeId);

                    /**
                     * 判断参数 TypeId 是否已赋值
                     * @return TypeId 是否已赋值
                     * 
                     */
                    bool TypeIdHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateTime Creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param _createTime Creation time
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
                     * 获取Update time.
                     * @return ModifyTime Update time.
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Update time.
                     * @param _modifyTime Update time.
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
                     * 获取Whether the user is locked.
                     * @return Locked Whether the user is locked.
                     * 
                     */
                    int64_t GetLocked() const;

                    /**
                     * 设置Whether the user is locked.
                     * @param _locked Whether the user is locked.
                     * 
                     */
                    void SetLocked(const int64_t& _locked);

                    /**
                     * 判断参数 Locked 是否已赋值
                     * @return Locked 是否已赋值
                     * 
                     */
                    bool LockedHasBeenSet() const;

                    /**
                     * 获取Reason for modification

0: none (compatibility records are empty).
1: avoid false positives due to business characteristics.
2: reporting of rule-based false positives.
3: gray release of core business rules.
4: others
                     * @return Reason Reason for modification

0: none (compatibility records are empty).
1: avoid false positives due to business characteristics.
2: reporting of rule-based false positives.
3: gray release of core business rules.
4: others
                     * 
                     */
                    int64_t GetReason() const;

                    /**
                     * 设置Reason for modification

0: none (compatibility records are empty).
1: avoid false positives due to business characteristics.
2: reporting of rule-based false positives.
3: gray release of core business rules.
4: others
                     * @param _reason Reason for modification

0: none (compatibility records are empty).
1: avoid false positives due to business characteristics.
2: reporting of rule-based false positives.
3: gray release of core business rules.
4: others
                     * 
                     */
                    void SetReason(const int64_t& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                private:

                    /**
                     * Rule ID
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Rule description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Rule switch. valid values: 0 (disabled), 1 (enabled), 2 (observation only).
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Protection level of the rule. valid values: 100 (loose), 200 (normal), 300 (strict), 400 (ultra-strict).
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Threat level. valid values: 0 (unknown), 100 (low risk), 200 (medium risk), 300 (high risk), 400 (critical).
                     */
                    int64_t m_vulLevel;
                    bool m_vulLevelHasBeenSet;

                    /**
                     * CVE ID
                     */
                    std::string m_cveID;
                    bool m_cveIDHasBeenSet;

                    /**
                     * Specifies the rule type ID.
                     */
                    uint64_t m_typeId;
                    bool m_typeIdHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Update time.
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Whether the user is locked.
                     */
                    int64_t m_locked;
                    bool m_lockedHasBeenSet;

                    /**
                     * Reason for modification

0: none (compatibility records are empty).
1: avoid false positives due to business characteristics.
2: reporting of rule-based false positives.
3: gray release of core business rules.
4: others
                     */
                    int64_t m_reason;
                    bool m_reasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_OWASPRULE_H_
