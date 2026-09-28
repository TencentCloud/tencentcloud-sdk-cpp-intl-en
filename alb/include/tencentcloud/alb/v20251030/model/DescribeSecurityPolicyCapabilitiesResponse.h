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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBESECURITYPOLICYCAPABILITIESRESPONSE_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBESECURITYPOLICYCAPABILITIESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/SecurityPolicyCapability.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * DescribeSecurityPolicyCapabilities response structure.
                */
                class DescribeSecurityPolicyCapabilitiesResponse : public AbstractModel
                {
                public:
                    DescribeSecurityPolicyCapabilitiesResponse();
                    ~DescribeSecurityPolicyCapabilitiesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of security policy configuration capabilities. Return all supported TLS versions and their corresponding encryption suite information in the current region.

**Return content includes:**
-Supported TLS protocol versions (for example, TLSv1.0, TLSv1.1, TLSv1.2, TLSv1.3).
-List of cipher suites supported by each TLS version.

**Usage scenario:**
-Get optional encryption suites by calling this API before creating a security policy (CreateSecurityPolicy).
-Before modifying the security policy (ModifySecurityPolicyAttributes), confirm the validity of the new configuration.

                     * @return SecurityPolicyCapabilities List of security policy configuration capabilities. Return all supported TLS versions and their corresponding encryption suite information in the current region.

**Return content includes:**
-Supported TLS protocol versions (for example, TLSv1.0, TLSv1.1, TLSv1.2, TLSv1.3).
-List of cipher suites supported by each TLS version.

**Usage scenario:**
-Get optional encryption suites by calling this API before creating a security policy (CreateSecurityPolicy).
-Before modifying the security policy (ModifySecurityPolicyAttributes), confirm the validity of the new configuration.

                     * 
                     */
                    std::vector<SecurityPolicyCapability> GetSecurityPolicyCapabilities() const;

                    /**
                     * 判断参数 SecurityPolicyCapabilities 是否已赋值
                     * @return SecurityPolicyCapabilities 是否已赋值
                     * 
                     */
                    bool SecurityPolicyCapabilitiesHasBeenSet() const;

                private:

                    /**
                     * List of security policy configuration capabilities. Return all supported TLS versions and their corresponding encryption suite information in the current region.

**Return content includes:**
-Supported TLS protocol versions (for example, TLSv1.0, TLSv1.1, TLSv1.2, TLSv1.3).
-List of cipher suites supported by each TLS version.

**Usage scenario:**
-Get optional encryption suites by calling this API before creating a security policy (CreateSecurityPolicy).
-Before modifying the security policy (ModifySecurityPolicyAttributes), confirm the validity of the new configuration.

                     */
                    std::vector<SecurityPolicyCapability> m_securityPolicyCapabilities;
                    bool m_securityPolicyCapabilitiesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBESECURITYPOLICYCAPABILITIESRESPONSE_H_
