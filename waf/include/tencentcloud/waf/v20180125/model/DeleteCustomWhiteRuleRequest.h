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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DELETECUSTOMWHITERULEREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DELETECUSTOMWHITERULEREQUEST_H_

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
                * DeleteCustomWhiteRule request structure.
                */
                class DeleteCustomWhiteRuleRequest : public AbstractModel
                {
                public:
                    DeleteCustomWhiteRuleRequest();
                    ~DeleteCustomWhiteRuleRequest() = default;
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
                    uint64_t GetRuleId() const;

                    /**
                     * 设置Deleted rule ID
                     * @param _ruleId Deleted rule ID
                     * 
                     */
                    void SetRuleId(const uint64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                private:

                    /**
                     * Deleted domain
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Deleted rule ID
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DELETECUSTOMWHITERULEREQUEST_H_
