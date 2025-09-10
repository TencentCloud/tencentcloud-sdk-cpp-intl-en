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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYOWASPRULESTATUSREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYOWASPRULESTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyOwaspRuleStatus request structure.
                */
                class ModifyOwaspRuleStatusRequest : public AbstractModel
                {
                public:
                    ModifyOwaspRuleStatusRequest();
                    ~ModifyOwaspRuleStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Domain name
                     * @return Domain Domain name
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name
                     * @param _domain Domain name
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Rule switch. valid values: 0 (disabled), 1 (enabled), 2 (observation only).
                     * @return RuleStatus Rule switch. valid values: 0 (disabled), 1 (enabled), 2 (observation only).
                     * 
                     */
                    int64_t GetRuleStatus() const;

                    /**
                     * 设置Rule switch. valid values: 0 (disabled), 1 (enabled), 2 (observation only).
                     * @param _ruleStatus Rule switch. valid values: 0 (disabled), 1 (enabled), 2 (observation only).
                     * 
                     */
                    void SetRuleStatus(const int64_t& _ruleStatus);

                    /**
                     * 判断参数 RuleStatus 是否已赋值
                     * @return RuleStatus 是否已赋值
                     * 
                     */
                    bool RuleStatusHasBeenSet() const;

                    /**
                     * 获取Specifies whether to select all.
                     * @return SelectAll Specifies whether to select all.
                     * 
                     */
                    bool GetSelectAll() const;

                    /**
                     * 设置Specifies whether to select all.
                     * @param _selectAll Specifies whether to select all.
                     * 
                     */
                    void SetSelectAll(const bool& _selectAll);

                    /**
                     * 判断参数 SelectAll 是否已赋值
                     * @return SelectAll 是否已赋值
                     * 
                     */
                    bool SelectAllHasBeenSet() const;

                    /**
                     * 获取Rule ID list
                     * @return RuleIDs Rule ID list
                     * 
                     */
                    std::vector<std::string> GetRuleIDs() const;

                    /**
                     * 设置Rule ID list
                     * @param _ruleIDs Rule ID list
                     * 
                     */
                    void SetRuleIDs(const std::vector<std::string>& _ruleIDs);

                    /**
                     * 判断参数 RuleIDs 是否已赋值
                     * @return RuleIDs 是否已赋值
                     * 
                     */
                    bool RuleIDsHasBeenSet() const;

                    /**
                     * 获取If reverse requires the input of data type.
                     * @return TypeId If reverse requires the input of data type.
                     * 
                     */
                    uint64_t GetTypeId() const;

                    /**
                     * 设置If reverse requires the input of data type.
                     * @param _typeId If reverse requires the input of data type.
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
                     * 获取Reason for modification. valid values: 0: none (compatibility record is empty). 1: avoid false positives due to business characteristics. 2: reporting of rule-based false positives. 3: gray release of core business rules. 4: others.
                     * @return Reason Reason for modification. valid values: 0: none (compatibility record is empty). 1: avoid false positives due to business characteristics. 2: reporting of rule-based false positives. 3: gray release of core business rules. 4: others.
                     * 
                     */
                    int64_t GetReason() const;

                    /**
                     * 设置Reason for modification. valid values: 0: none (compatibility record is empty). 1: avoid false positives due to business characteristics. 2: reporting of rule-based false positives. 3: gray release of core business rules. 4: others.
                     * @param _reason Reason for modification. valid values: 0: none (compatibility record is empty). 1: avoid false positives due to business characteristics. 2: reporting of rule-based false positives. 3: gray release of core business rules. 4: others.
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
                     * Domain name
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Rule switch. valid values: 0 (disabled), 1 (enabled), 2 (observation only).
                     */
                    int64_t m_ruleStatus;
                    bool m_ruleStatusHasBeenSet;

                    /**
                     * Specifies whether to select all.
                     */
                    bool m_selectAll;
                    bool m_selectAllHasBeenSet;

                    /**
                     * Rule ID list
                     */
                    std::vector<std::string> m_ruleIDs;
                    bool m_ruleIDsHasBeenSet;

                    /**
                     * If reverse requires the input of data type.
                     */
                    uint64_t m_typeId;
                    bool m_typeIdHasBeenSet;

                    /**
                     * Reason for modification. valid values: 0: none (compatibility record is empty). 1: avoid false positives due to business characteristics. 2: reporting of rule-based false positives. 3: gray release of core business rules. 4: others.
                     */
                    int64_t m_reason;
                    bool m_reasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYOWASPRULESTATUSREQUEST_H_
