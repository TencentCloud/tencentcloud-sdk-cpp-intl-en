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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYUSERSIGNATURERULEREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYUSERSIGNATURERULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/ReqUserRule.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * ModifyUserSignatureRule request structure.
                */
                class ModifyUserSignatureRuleRequest : public AbstractModel
                {
                public:
                    ModifyUserSignatureRuleRequest();
                    ~ModifyUserSignatureRuleRequest() = default;
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
                     * 获取Main class ID
                     * @return MainClassID Main class ID
                     * 
                     */
                    std::string GetMainClassID() const;

                    /**
                     * 设置Main class ID
                     * @param _mainClassID Main class ID
                     * 
                     */
                    void SetMainClassID(const std::string& _mainClassID);

                    /**
                     * 判断参数 MainClassID 是否已赋值
                     * @return MainClassID 是否已赋值
                     * 
                     */
                    bool MainClassIDHasBeenSet() const;

                    /**
                     * 获取Main class switch 0=off, 1=on, 2=alarm only
                     * @return Status Main class switch 0=off, 1=on, 2=alarm only
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Main class switch 0=off, 1=on, 2=alarm only
                     * @param _status Main class switch 0=off, 1=on, 2=alarm only
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
                     * 获取List of rules issued for modification
                     * @return RuleID List of rules issued for modification
                     * 
                     */
                    std::vector<ReqUserRule> GetRuleID() const;

                    /**
                     * 设置List of rules issued for modification
                     * @param _ruleID List of rules issued for modification
                     * 
                     */
                    void SetRuleID(const std::vector<ReqUserRule>& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     * 
                     */
                    bool RuleIDHasBeenSet() const;

                private:

                    /**
                     * Domain name
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Main class ID
                     */
                    std::string m_mainClassID;
                    bool m_mainClassIDHasBeenSet;

                    /**
                     * Main class switch 0=off, 1=on, 2=alarm only
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * List of rules issued for modification
                     */
                    std::vector<ReqUserRule> m_ruleID;
                    bool m_ruleIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYUSERSIGNATURERULEREQUEST_H_
