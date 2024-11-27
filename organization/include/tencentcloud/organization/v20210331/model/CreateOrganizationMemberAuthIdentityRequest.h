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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEORGANIZATIONMEMBERAUTHIDENTITYREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEORGANIZATIONMEMBERAUTHIDENTITYREQUEST_H_

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
                * CreateOrganizationMemberAuthIdentity request structure.
                */
                class CreateOrganizationMemberAuthIdentityRequest : public AbstractModel
                {
                public:
                    CreateOrganizationMemberAuthIdentityRequest();
                    ~CreateOrganizationMemberAuthIdentityRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Member UIN list, including up to 10 items.
                     * @return MemberUins Member UIN list, including up to 10 items.
                     * 
                     */
                    std::vector<uint64_t> GetMemberUins() const;

                    /**
                     * 设置Member UIN list, including up to 10 items.
                     * @param _memberUins Member UIN list, including up to 10 items.
                     * 
                     */
                    void SetMemberUins(const std::vector<uint64_t>& _memberUins);

                    /**
                     * 判断参数 MemberUins 是否已赋值
                     * @return MemberUins 是否已赋值
                     * 
                     */
                    bool MemberUinsHasBeenSet() const;

                    /**
                     * 获取Identity ID list, including up to 5 items, which can be obtained through [ListOrganizationIdentity](https://intl.cloud.tencent.com/document/product/850/82934?from_cn_redirect=1).
                     * @return IdentityIds Identity ID list, including up to 5 items, which can be obtained through [ListOrganizationIdentity](https://intl.cloud.tencent.com/document/product/850/82934?from_cn_redirect=1).
                     * 
                     */
                    std::vector<uint64_t> GetIdentityIds() const;

                    /**
                     * 设置Identity ID list, including up to 5 items, which can be obtained through [ListOrganizationIdentity](https://intl.cloud.tencent.com/document/product/850/82934?from_cn_redirect=1).
                     * @param _identityIds Identity ID list, including up to 5 items, which can be obtained through [ListOrganizationIdentity](https://intl.cloud.tencent.com/document/product/850/82934?from_cn_redirect=1).
                     * 
                     */
                    void SetIdentityIds(const std::vector<uint64_t>& _identityIds);

                    /**
                     * 判断参数 IdentityIds 是否已赋值
                     * @return IdentityIds 是否已赋值
                     * 
                     */
                    bool IdentityIdsHasBeenSet() const;

                private:

                    /**
                     * Member UIN list, including up to 10 items.
                     */
                    std::vector<uint64_t> m_memberUins;
                    bool m_memberUinsHasBeenSet;

                    /**
                     * Identity ID list, including up to 5 items, which can be obtained through [ListOrganizationIdentity](https://intl.cloud.tencent.com/document/product/850/82934?from_cn_redirect=1).
                     */
                    std::vector<uint64_t> m_identityIds;
                    bool m_identityIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEORGANIZATIONMEMBERAUTHIDENTITYREQUEST_H_
