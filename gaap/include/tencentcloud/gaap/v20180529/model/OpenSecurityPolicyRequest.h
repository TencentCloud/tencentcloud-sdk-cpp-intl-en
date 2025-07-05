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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_OPENSECURITYPOLICYREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_OPENSECURITYPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * OpenSecurityPolicy request structure.
                */
                class OpenSecurityPolicyRequest : public AbstractModel
                {
                public:
                    OpenSecurityPolicyRequest();
                    ~OpenSecurityPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the connections requiring enabled security policies.
                     * @return ProxyId ID of the connections requiring enabled security policies.
                     * 
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置ID of the connections requiring enabled security policies.
                     * @param _proxyId ID of the connections requiring enabled security policies.
                     * 
                     */
                    void SetProxyId(const std::string& _proxyId);

                    /**
                     * 判断参数 ProxyId 是否已赋值
                     * @return ProxyId 是否已赋值
                     * 
                     */
                    bool ProxyIdHasBeenSet() const;

                    /**
                     * 获取Security policy ID
                     * @return PolicyId Security policy ID
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置Security policy ID
                     * @param _policyId Security policy ID
                     * 
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                private:

                    /**
                     * ID of the connections requiring enabled security policies.
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * Security policy ID
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_OPENSECURITYPOLICYREQUEST_H_
