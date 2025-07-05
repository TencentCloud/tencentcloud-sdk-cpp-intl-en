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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEORGANIZATIONMEMBERAUTHIDENTITIESREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEORGANIZATIONMEMBERAUTHIDENTITIESREQUEST_H_

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
                * DescribeOrganizationMemberAuthIdentities request structure.
                */
                class DescribeOrganizationMemberAuthIdentitiesRequest : public AbstractModel
                {
                public:
                    DescribeOrganizationMemberAuthIdentitiesRequest();
                    ~DescribeOrganizationMemberAuthIdentitiesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Offset, which is an integer multiple of the value of `Limit`. Default value: `0`.
                     * @return Offset Offset, which is an integer multiple of the value of `Limit`. Default value: `0`.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset, which is an integer multiple of the value of `Limit`. Default value: `0`.
                     * @param _offset Offset, which is an integer multiple of the value of `Limit`. Default value: `0`.
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Limit, which defaults to `10`. Value range: 1-50.
                     * @return Limit Limit, which defaults to `10`. Value range: 1-50.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Limit, which defaults to `10`. Value range: 1-50.
                     * @param _limit Limit, which defaults to `10`. Value range: 1-50.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Uin of the organization member. At least one of the input parameters MemberUin and IdentityId must be entered.
                     * @return MemberUin Uin of the organization member. At least one of the input parameters MemberUin and IdentityId must be entered.
                     * 
                     */
                    int64_t GetMemberUin() const;

                    /**
                     * 设置Uin of the organization member. At least one of the input parameters MemberUin and IdentityId must be entered.
                     * @param _memberUin Uin of the organization member. At least one of the input parameters MemberUin and IdentityId must be entered.
                     * 
                     */
                    void SetMemberUin(const int64_t& _memberUin);

                    /**
                     * 判断参数 MemberUin 是否已赋值
                     * @return MemberUin 是否已赋值
                     * 
                     */
                    bool MemberUinHasBeenSet() const;

                    /**
                     * 获取Identity ID. At least one of the input parameters MemberUin and IdentityId must be provided. It can be obtained through [ListOrganizationIdentity](https://intl.cloud.tencent.com/document/product/850/82934?from_cn_redirect=1).
                     * @return IdentityId Identity ID. At least one of the input parameters MemberUin and IdentityId must be provided. It can be obtained through [ListOrganizationIdentity](https://intl.cloud.tencent.com/document/product/850/82934?from_cn_redirect=1).
                     * 
                     */
                    uint64_t GetIdentityId() const;

                    /**
                     * 设置Identity ID. At least one of the input parameters MemberUin and IdentityId must be provided. It can be obtained through [ListOrganizationIdentity](https://intl.cloud.tencent.com/document/product/850/82934?from_cn_redirect=1).
                     * @param _identityId Identity ID. At least one of the input parameters MemberUin and IdentityId must be provided. It can be obtained through [ListOrganizationIdentity](https://intl.cloud.tencent.com/document/product/850/82934?from_cn_redirect=1).
                     * 
                     */
                    void SetIdentityId(const uint64_t& _identityId);

                    /**
                     * 判断参数 IdentityId 是否已赋值
                     * @return IdentityId 是否已赋值
                     * 
                     */
                    bool IdentityIdHasBeenSet() const;

                private:

                    /**
                     * Offset, which is an integer multiple of the value of `Limit`. Default value: `0`.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Limit, which defaults to `10`. Value range: 1-50.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Uin of the organization member. At least one of the input parameters MemberUin and IdentityId must be entered.
                     */
                    int64_t m_memberUin;
                    bool m_memberUinHasBeenSet;

                    /**
                     * Identity ID. At least one of the input parameters MemberUin and IdentityId must be provided. It can be obtained through [ListOrganizationIdentity](https://intl.cloud.tencent.com/document/product/850/82934?from_cn_redirect=1).
                     */
                    uint64_t m_identityId;
                    bool m_identityIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEORGANIZATIONMEMBERAUTHIDENTITIESREQUEST_H_
