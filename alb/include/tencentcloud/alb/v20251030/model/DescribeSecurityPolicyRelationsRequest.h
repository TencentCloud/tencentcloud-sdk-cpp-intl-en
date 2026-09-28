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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBESECURITYPOLICYRELATIONSREQUEST_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBESECURITYPOLICYRELATIONSREQUEST_H_

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
                * DescribeSecurityPolicyRelations request structure.
                */
                class DescribeSecurityPolicyRelationsRequest : public AbstractModel
                {
                public:
                    DescribeSecurityPolicyRelationsRequest();
                    ~DescribeSecurityPolicyRelationsRequest() = default;
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

                private:

                    /**
                     * Security policy ID list. ID format: tls- followed by 8 alphanumeric characters.
                     */
                    std::vector<std::string> m_securityPolicyIds;
                    bool m_securityPolicyIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBESECURITYPOLICYRELATIONSREQUEST_H_
