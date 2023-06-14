/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_CLOSESECURITYPOLICYREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_CLOSESECURITYPOLICYREQUEST_H_

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
                * CloseSecurityPolicy request structure.
                */
                class CloseSecurityPolicyRequest : public AbstractModel
                {
                public:
                    CloseSecurityPolicyRequest();
                    ~CloseSecurityPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Connection ID
                     * @return ProxyId Connection ID
                     * 
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置Connection ID
                     * @param _proxyId Connection ID
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
                     * 获取Security group policy ID
                     * @return PolicyId Security group policy ID
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置Security group policy ID
                     * @param _policyId Security group policy ID
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
                     * Connection ID
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * Security group policy ID
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_CLOSESECURITYPOLICYREQUEST_H_
