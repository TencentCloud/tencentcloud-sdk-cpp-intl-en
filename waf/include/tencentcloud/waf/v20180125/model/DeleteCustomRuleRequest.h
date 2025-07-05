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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DELETECUSTOMRULEREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DELETECUSTOMRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/DomainRuleId.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DeleteCustomRule request structure.
                */
                class DeleteCustomRuleRequest : public AbstractModel
                {
                public:
                    DeleteCustomRuleRequest();
                    ~DeleteCustomRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Deleted domain
                     * @return Domain Deleted domain
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Deleted domain
                     * @param _domain Deleted domain
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
                     * 获取Deleted rule ID
                     * @return RuleId Deleted rule ID
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置Deleted rule ID
                     * @param _ruleId Deleted rule ID
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
                     * 获取Version of WAF. clb-waf indicates CLB WAF; sparta-waf indicates SaaS WAF. sparta-waf by default.
                     * @return Edition Version of WAF. clb-waf indicates CLB WAF; sparta-waf indicates SaaS WAF. sparta-waf by default.
                     * 
                     */
                    std::string GetEdition() const;

                    /**
                     * 设置Version of WAF. clb-waf indicates CLB WAF; sparta-waf indicates SaaS WAF. sparta-waf by default.
                     * @param _edition Version of WAF. clb-waf indicates CLB WAF; sparta-waf indicates SaaS WAF. sparta-waf by default.
                     * 
                     */
                    void SetEdition(const std::string& _edition);

                    /**
                     * 判断参数 Edition 是否已赋值
                     * @return Edition 是否已赋值
                     * 
                     */
                    bool EditionHasBeenSet() const;

                    /**
                     * 获取List of rules to be deleted in batches
                     * @return DomainRuleIdList List of rules to be deleted in batches
                     * 
                     */
                    std::vector<DomainRuleId> GetDomainRuleIdList() const;

                    /**
                     * 设置List of rules to be deleted in batches
                     * @param _domainRuleIdList List of rules to be deleted in batches
                     * 
                     */
                    void SetDomainRuleIdList(const std::vector<DomainRuleId>& _domainRuleIdList);

                    /**
                     * 判断参数 DomainRuleIdList 是否已赋值
                     * @return DomainRuleIdList 是否已赋值
                     * 
                     */
                    bool DomainRuleIdListHasBeenSet() const;

                private:

                    /**
                     * Deleted domain
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Deleted rule ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Version of WAF. clb-waf indicates CLB WAF; sparta-waf indicates SaaS WAF. sparta-waf by default.
                     */
                    std::string m_edition;
                    bool m_editionHasBeenSet;

                    /**
                     * List of rules to be deleted in batches
                     */
                    std::vector<DomainRuleId> m_domainRuleIdList;
                    bool m_domainRuleIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DELETECUSTOMRULEREQUEST_H_
