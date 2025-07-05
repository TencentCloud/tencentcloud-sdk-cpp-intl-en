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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_UPDATEORGANIZATIONIDENTITYREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_UPDATEORGANIZATIONIDENTITYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/organization/v20210331/model/IdentityPolicy.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * UpdateOrganizationIdentity request structure.
                */
                class UpdateOrganizationIdentityRequest : public AbstractModel
                {
                public:
                    UpdateOrganizationIdentityRequest();
                    ~UpdateOrganizationIdentityRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Identity ID, which can be obtained through [ListOrganizationIdentity](https://intl.cloud.tencent.com/document/product/850/82934?from_cn_redirect=1).
                     * @return IdentityId Identity ID, which can be obtained through [ListOrganizationIdentity](https://intl.cloud.tencent.com/document/product/850/82934?from_cn_redirect=1).
                     * 
                     */
                    uint64_t GetIdentityId() const;

                    /**
                     * 设置Identity ID, which can be obtained through [ListOrganizationIdentity](https://intl.cloud.tencent.com/document/product/850/82934?from_cn_redirect=1).
                     * @param _identityId Identity ID, which can be obtained through [ListOrganizationIdentity](https://intl.cloud.tencent.com/document/product/850/82934?from_cn_redirect=1).
                     * 
                     */
                    void SetIdentityId(const uint64_t& _identityId);

                    /**
                     * 判断参数 IdentityId 是否已赋值
                     * @return IdentityId 是否已赋值
                     * 
                     */
                    bool IdentityIdHasBeenSet() const;

                    /**
                     * 获取Identity description.
                     * @return Description Identity description.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Identity description.
                     * @param _description Identity description.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Identity policy.
                     * @return IdentityPolicy Identity policy.
                     * 
                     */
                    std::vector<IdentityPolicy> GetIdentityPolicy() const;

                    /**
                     * 设置Identity policy.
                     * @param _identityPolicy Identity policy.
                     * 
                     */
                    void SetIdentityPolicy(const std::vector<IdentityPolicy>& _identityPolicy);

                    /**
                     * 判断参数 IdentityPolicy 是否已赋值
                     * @return IdentityPolicy 是否已赋值
                     * 
                     */
                    bool IdentityPolicyHasBeenSet() const;

                private:

                    /**
                     * Identity ID, which can be obtained through [ListOrganizationIdentity](https://intl.cloud.tencent.com/document/product/850/82934?from_cn_redirect=1).
                     */
                    uint64_t m_identityId;
                    bool m_identityIdHasBeenSet;

                    /**
                     * Identity description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Identity policy.
                     */
                    std::vector<IdentityPolicy> m_identityPolicy;
                    bool m_identityPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_UPDATEORGANIZATIONIDENTITYREQUEST_H_
