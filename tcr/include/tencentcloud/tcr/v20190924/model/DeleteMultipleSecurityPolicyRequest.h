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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_DELETEMULTIPLESECURITYPOLICYREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_DELETEMULTIPLESECURITYPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/SecurityPolicy.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * DeleteMultipleSecurityPolicy request structure.
                */
                class DeleteMultipleSecurityPolicyRequest : public AbstractModel
                {
                public:
                    DeleteMultipleSecurityPolicyRequest();
                    ~DeleteMultipleSecurityPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return RegistryId Instance ID
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置Instance ID
                     * @param _registryId Instance ID
                     * 
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     * 
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取Security group policy
                     * @return SecurityGroupPolicySet Security group policy
                     * 
                     */
                    std::vector<SecurityPolicy> GetSecurityGroupPolicySet() const;

                    /**
                     * 设置Security group policy
                     * @param _securityGroupPolicySet Security group policy
                     * 
                     */
                    void SetSecurityGroupPolicySet(const std::vector<SecurityPolicy>& _securityGroupPolicySet);

                    /**
                     * 判断参数 SecurityGroupPolicySet 是否已赋值
                     * @return SecurityGroupPolicySet 是否已赋值
                     * 
                     */
                    bool SecurityGroupPolicySetHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * Security group policy
                     */
                    std::vector<SecurityPolicy> m_securityGroupPolicySet;
                    bool m_securityGroupPolicySetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_DELETEMULTIPLESECURITYPOLICYREQUEST_H_
