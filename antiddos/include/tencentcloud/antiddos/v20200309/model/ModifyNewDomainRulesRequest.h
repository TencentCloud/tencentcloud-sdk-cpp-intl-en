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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_MODIFYNEWDOMAINRULESREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_MODIFYNEWDOMAINRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/NewL7RuleEntry.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * ModifyNewDomainRules request structure.
                */
                class ModifyNewDomainRulesRequest : public AbstractModel
                {
                public:
                    ModifyNewDomainRulesRequest();
                    ~ModifyNewDomainRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Anti-DDoS service type (`bgpip`: Anti-DDoS Advanced).
                     * @return Business Anti-DDoS service type (`bgpip`: Anti-DDoS Advanced).
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置Anti-DDoS service type (`bgpip`: Anti-DDoS Advanced).
                     * @param _business Anti-DDoS service type (`bgpip`: Anti-DDoS Advanced).
                     * 
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取Anti-DDoS instance ID.
                     * @return Id Anti-DDoS instance ID.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Anti-DDoS instance ID.
                     * @param _id Anti-DDoS instance ID.
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Domain name forwarding rule.
                     * @return Rule Domain name forwarding rule.
                     * 
                     */
                    NewL7RuleEntry GetRule() const;

                    /**
                     * 设置Domain name forwarding rule.
                     * @param _rule Domain name forwarding rule.
                     * 
                     */
                    void SetRule(const NewL7RuleEntry& _rule);

                    /**
                     * 判断参数 Rule 是否已赋值
                     * @return Rule 是否已赋值
                     * 
                     */
                    bool RuleHasBeenSet() const;

                private:

                    /**
                     * Anti-DDoS service type (`bgpip`: Anti-DDoS Advanced).
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * Anti-DDoS instance ID.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Domain name forwarding rule.
                     */
                    NewL7RuleEntry m_rule;
                    bool m_ruleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_MODIFYNEWDOMAINRULESREQUEST_H_
