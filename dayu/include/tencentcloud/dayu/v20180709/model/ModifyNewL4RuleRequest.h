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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_MODIFYNEWL4RULEREQUEST_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_MODIFYNEWL4RULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dayu/v20180709/model/L4RuleEntry.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * ModifyNewL4Rule request structure.
                */
                class ModifyNewL4RuleRequest : public AbstractModel
                {
                public:
                    ModifyNewL4RuleRequest();
                    ~ModifyNewL4RuleRequest() = default;
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
                     * 获取Forwarding rule.
                     * @return Rule Forwarding rule.
                     * 
                     */
                    L4RuleEntry GetRule() const;

                    /**
                     * 设置Forwarding rule.
                     * @param _rule Forwarding rule.
                     * 
                     */
                    void SetRule(const L4RuleEntry& _rule);

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
                     * Forwarding rule.
                     */
                    L4RuleEntry m_rule;
                    bool m_ruleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_MODIFYNEWL4RULEREQUEST_H_
