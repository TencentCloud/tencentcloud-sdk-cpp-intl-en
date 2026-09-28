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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_DELETESECURITYPOLICYREQUEST_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_DELETESECURITYPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * DeleteSecurityPolicy request structure.
                */
                class DeleteSecurityPolicyRequest : public AbstractModel
                {
                public:
                    DeleteSecurityPolicyRequest();
                    ~DeleteSecurityPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Security policy ID list. ID format: tls- followed by 8 alphanumeric characters.
                     * @return SecurityPolicyIds Security policy ID list. ID format: tls- followed by 8 alphanumeric characters.
                     * 
                     */
                    std::vector<std::string> GetSecurityPolicyIds() const;

                    /**
                     * 设置Security policy ID list. ID format: tls- followed by 8 alphanumeric characters.
                     * @param _securityPolicyIds Security policy ID list. ID format: tls- followed by 8 alphanumeric characters.
                     * 
                     */
                    void SetSecurityPolicyIds(const std::vector<std::string>& _securityPolicyIds);

                    /**
                     * 判断参数 SecurityPolicyIds 是否已赋值
                     * @return SecurityPolicyIds 是否已赋值
                     * 
                     */
                    bool SecurityPolicyIdsHasBeenSet() const;

                    /**
                     * 获取Whether to only execute a preflight request. Value:
- **true**: Execute only the preflight request without actually deleting a resource. The preflight request will verify the parameter format, permission, and whether the security policy is referenced, helping you identify potential issues before proceeding with any operations.
- **false** (default): Execute a normal request. After the precheck is passed, delete the security policy directly.

                     * @return DryRun Whether to only execute a preflight request. Value:
- **true**: Execute only the preflight request without actually deleting a resource. The preflight request will verify the parameter format, permission, and whether the security policy is referenced, helping you identify potential issues before proceeding with any operations.
- **false** (default): Execute a normal request. After the precheck is passed, delete the security policy directly.

                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置Whether to only execute a preflight request. Value:
- **true**: Execute only the preflight request without actually deleting a resource. The preflight request will verify the parameter format, permission, and whether the security policy is referenced, helping you identify potential issues before proceeding with any operations.
- **false** (default): Execute a normal request. After the precheck is passed, delete the security policy directly.

                     * @param _dryRun Whether to only execute a preflight request. Value:
- **true**: Execute only the preflight request without actually deleting a resource. The preflight request will verify the parameter format, permission, and whether the security policy is referenced, helping you identify potential issues before proceeding with any operations.
- **false** (default): Execute a normal request. After the precheck is passed, delete the security policy directly.

                     * 
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     * 
                     */
                    bool DryRunHasBeenSet() const;

                private:

                    /**
                     * Security policy ID list. ID format: tls- followed by 8 alphanumeric characters.
                     */
                    std::vector<std::string> m_securityPolicyIds;
                    bool m_securityPolicyIdsHasBeenSet;

                    /**
                     * Whether to only execute a preflight request. Value:
- **true**: Execute only the preflight request without actually deleting a resource. The preflight request will verify the parameter format, permission, and whether the security policy is referenced, helping you identify potential issues before proceeding with any operations.
- **false** (default): Execute a normal request. After the precheck is passed, delete the security policy directly.

                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_DELETESECURITYPOLICYREQUEST_H_
