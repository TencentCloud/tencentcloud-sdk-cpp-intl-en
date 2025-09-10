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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYOWASPRULETYPELEVELREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYOWASPRULETYPELEVELREQUEST_H_

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
                * ModifyOwaspRuleTypeLevel request structure.
                */
                class ModifyOwaspRuleTypeLevelRequest : public AbstractModel
                {
                public:
                    ModifyOwaspRuleTypeLevelRequest();
                    ~ModifyOwaspRuleTypeLevelRequest() = default;
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
                     * 获取Rule type ID list.
                     * @return TypeIDs Rule type ID list.
                     * 
                     */
                    std::vector<std::string> GetTypeIDs() const;

                    /**
                     * 设置Rule type ID list.
                     * @param _typeIDs Rule type ID list.
                     * 
                     */
                    void SetTypeIDs(const std::vector<std::string>& _typeIDs);

                    /**
                     * 判断参数 TypeIDs 是否已赋值
                     * @return TypeIDs 是否已赋值
                     * 
                     */
                    bool TypeIDsHasBeenSet() const;

                    /**
                     * 获取Protection level of the rule. valid values: 100 (loose), 200 (normal), 300 (strict), 400 (ultra-strict).
                     * @return RuleTypeLevel Protection level of the rule. valid values: 100 (loose), 200 (normal), 300 (strict), 400 (ultra-strict).
                     * 
                     */
                    int64_t GetRuleTypeLevel() const;

                    /**
                     * 设置Protection level of the rule. valid values: 100 (loose), 200 (normal), 300 (strict), 400 (ultra-strict).
                     * @param _ruleTypeLevel Protection level of the rule. valid values: 100 (loose), 200 (normal), 300 (strict), 400 (ultra-strict).
                     * 
                     */
                    void SetRuleTypeLevel(const int64_t& _ruleTypeLevel);

                    /**
                     * 判断参数 RuleTypeLevel 是否已赋值
                     * @return RuleTypeLevel 是否已赋值
                     * 
                     */
                    bool RuleTypeLevelHasBeenSet() const;

                private:

                    /**
                     * Domain name
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Rule type ID list.
                     */
                    std::vector<std::string> m_typeIDs;
                    bool m_typeIDsHasBeenSet;

                    /**
                     * Protection level of the rule. valid values: 100 (loose), 200 (normal), 300 (strict), 400 (ultra-strict).
                     */
                    int64_t m_ruleTypeLevel;
                    bool m_ruleTypeLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYOWASPRULETYPELEVELREQUEST_H_
