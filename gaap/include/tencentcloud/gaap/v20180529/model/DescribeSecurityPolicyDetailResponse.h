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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBESECURITYPOLICYDETAILRESPONSE_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBESECURITYPOLICYDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/SecurityPolicyRuleOut.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * DescribeSecurityPolicyDetail response structure.
                */
                class DescribeSecurityPolicyDetailResponse : public AbstractModel
                {
                public:
                    DescribeSecurityPolicyDetailResponse();
                    ~DescribeSecurityPolicyDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Connection ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProxyId Connection ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProxyId() const;

                    /**
                     * 判断参数 ProxyId 是否已赋值
                     * @return ProxyId 是否已赋值
                     * 
                     */
                    bool ProxyIdHasBeenSet() const;

                    /**
                     * 获取Security policy status:
BOUND (security policies enabled)
UNBIND (security policies disabled)
BINDING (enabling security policies)
UNBINDING (disabling security policies)
                     * @return Status Security policy status:
BOUND (security policies enabled)
UNBIND (security policies disabled)
BINDING (enabling security policies)
UNBINDING (disabling security policies)
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Default policy: ACCEPT or DROP.
                     * @return DefaultAction Default policy: ACCEPT or DROP.
                     * 
                     */
                    std::string GetDefaultAction() const;

                    /**
                     * 判断参数 DefaultAction 是否已赋值
                     * @return DefaultAction 是否已赋值
                     * 
                     */
                    bool DefaultActionHasBeenSet() const;

                    /**
                     * 获取Policy ID
                     * @return PolicyId Policy ID
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取List of rules
                     * @return RuleList List of rules
                     * 
                     */
                    std::vector<SecurityPolicyRuleOut> GetRuleList() const;

                    /**
                     * 判断参数 RuleList 是否已赋值
                     * @return RuleList 是否已赋值
                     * 
                     */
                    bool RuleListHasBeenSet() const;

                private:

                    /**
                     * Connection ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * Security policy status:
BOUND (security policies enabled)
UNBIND (security policies disabled)
BINDING (enabling security policies)
UNBINDING (disabling security policies)
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Default policy: ACCEPT or DROP.
                     */
                    std::string m_defaultAction;
                    bool m_defaultActionHasBeenSet;

                    /**
                     * Policy ID
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * List of rules
                     */
                    std::vector<SecurityPolicyRuleOut> m_ruleList;
                    bool m_ruleListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBESECURITYPOLICYDETAILRESPONSE_H_
