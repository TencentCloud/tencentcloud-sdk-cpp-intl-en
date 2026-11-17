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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBELLMWAFPROTECTRULESREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBELLMWAFPROTECTRULESREQUEST_H_

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
                * DescribeLLMWafProtectRules request structure.
                */
                class DescribeLLMWafProtectRulesRequest : public AbstractModel
                {
                public:
                    DescribeLLMWafProtectRulesRequest();
                    ~DescribeLLMWafProtectRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>In SDK mode, pass ServiceId (choose either this or Domain).</p>
                     * @return ServiceId <p>In SDK mode, pass ServiceId (choose either this or Domain).</p>
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置<p>In SDK mode, pass ServiceId (choose either this or Domain).</p>
                     * @param _serviceId <p>In SDK mode, pass ServiceId (choose either this or Domain).</p>
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取<p>Instance id</p>
                     * @return InstanceId <p>Instance id</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance id</p>
                     * @param _instanceId <p>Instance id</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>Rule type.</p>
                     * @return RuleType <p>Rule type.</p>
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置<p>Rule type.</p>
                     * @param _ruleType <p>Rule type.</p>
                     * 
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取<p>In domain mode, pass Domain (choose either this or ServiceId).</p>
                     * @return Domain <p>In domain mode, pass Domain (choose either this or ServiceId).</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>In domain mode, pass Domain (choose either this or ServiceId).</p>
                     * @param _domain <p>In domain mode, pass Domain (choose either this or ServiceId).</p>
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                private:

                    /**
                     * <p>In SDK mode, pass ServiceId (choose either this or Domain).</p>
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * <p>Instance id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Rule type.</p>
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * <p>In domain mode, pass Domain (choose either this or ServiceId).</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBELLMWAFPROTECTRULESREQUEST_H_
