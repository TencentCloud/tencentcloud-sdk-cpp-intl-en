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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYCUSTOMRULESTATUSREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYCUSTOMRULESTATUSREQUEST_H_

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
                * ModifyCustomRuleStatus request structure.
                */
                class ModifyCustomRuleStatusRequest : public AbstractModel
                {
                public:
                    ModifyCustomRuleStatusRequest();
                    ~ModifyCustomRuleStatusRequest() = default;
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
                     * 获取Status of the switch: 1 is On, 0 is Off
                     * @return Status Status of the switch: 1 is On, 0 is Off
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Status of the switch: 1 is On, 0 is Off
                     * @param _status Status of the switch: 1 is On, 0 is Off
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
                     * 获取Rule ID
                     * @return DomainRuleIdList Rule ID
                     * 
                     */
                    std::vector<DomainRuleId> GetDomainRuleIdList() const;

                    /**
                     * 设置Rule ID
                     * @param _domainRuleIdList Rule ID
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
                     * Domain name
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Rule ID
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Status of the switch: 1 is On, 0 is Off
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Version of WAF. clb-waf indicates CLB WAF; sparta-waf indicates SaaS WAF. sparta-waf by default.
                     */
                    std::string m_edition;
                    bool m_editionHasBeenSet;

                    /**
                     * Rule ID
                     */
                    std::vector<DomainRuleId> m_domainRuleIdList;
                    bool m_domainRuleIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYCUSTOMRULESTATUSREQUEST_H_
