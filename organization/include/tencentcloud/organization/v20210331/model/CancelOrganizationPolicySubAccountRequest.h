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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CANCELORGANIZATIONPOLICYSUBACCOUNTREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CANCELORGANIZATIONPOLICYSUBACCOUNTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * CancelOrganizationPolicySubAccount request structure.
                */
                class CancelOrganizationPolicySubAccountRequest : public AbstractModel
                {
                public:
                    CancelOrganizationPolicySubAccountRequest();
                    ~CancelOrganizationPolicySubAccountRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Policy ID.
                     * @return PolicyId Policy ID.
                     * 
                     */
                    int64_t GetPolicyId() const;

                    /**
                     * 设置Policy ID.
                     * @param _policyId Policy ID.
                     * 
                     */
                    void SetPolicyId(const int64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取List of sub-account UINs of the organization administrator. A maximum of 5 UINs is supported.
                     * @return OrgSubAccountUins List of sub-account UINs of the organization administrator. A maximum of 5 UINs is supported.
                     * 
                     */
                    std::vector<int64_t> GetOrgSubAccountUins() const;

                    /**
                     * 设置List of sub-account UINs of the organization administrator. A maximum of 5 UINs is supported.
                     * @param _orgSubAccountUins List of sub-account UINs of the organization administrator. A maximum of 5 UINs is supported.
                     * 
                     */
                    void SetOrgSubAccountUins(const std::vector<int64_t>& _orgSubAccountUins);

                    /**
                     * 判断参数 OrgSubAccountUins 是否已赋值
                     * @return OrgSubAccountUins 是否已赋值
                     * 
                     */
                    bool OrgSubAccountUinsHasBeenSet() const;

                private:

                    /**
                     * Policy ID.
                     */
                    int64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * List of sub-account UINs of the organization administrator. A maximum of 5 UINs is supported.
                     */
                    std::vector<int64_t> m_orgSubAccountUins;
                    bool m_orgSubAccountUinsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CANCELORGANIZATIONPOLICYSUBACCOUNTREQUEST_H_
