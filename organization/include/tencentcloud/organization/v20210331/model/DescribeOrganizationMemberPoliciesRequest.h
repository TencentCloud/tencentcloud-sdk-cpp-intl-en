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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEORGANIZATIONMEMBERPOLICIESREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEORGANIZATIONMEMBERPOLICIESREQUEST_H_

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
                * DescribeOrganizationMemberPolicies request structure.
                */
                class DescribeOrganizationMemberPoliciesRequest : public AbstractModel
                {
                public:
                    DescribeOrganizationMemberPoliciesRequest();
                    ~DescribeOrganizationMemberPoliciesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Offset.
                     * @return Offset Offset.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset.
                     * @param _offset Offset.
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
                     * 获取Maximum number of returned results. Maximum value: `50`.
                     * @return Limit Maximum number of returned results. Maximum value: `50`.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Maximum number of returned results. Maximum value: `50`.
                     * @param _limit Maximum number of returned results. Maximum value: `50`.
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
                     * 获取Member UIN.
                     * @return MemberUin Member UIN.
                     * 
                     */
                    int64_t GetMemberUin() const;

                    /**
                     * 设置Member UIN.
                     * @param _memberUin Member UIN.
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
                     * 获取Search keyword, which can be the policy name or description.
                     * @return SearchKey Search keyword, which can be the policy name or description.
                     * 
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置Search keyword, which can be the policy name or description.
                     * @param _searchKey Search keyword, which can be the policy name or description.
                     * 
                     */
                    void SetSearchKey(const std::string& _searchKey);

                    /**
                     * 判断参数 SearchKey 是否已赋值
                     * @return SearchKey 是否已赋值
                     * 
                     */
                    bool SearchKeyHasBeenSet() const;

                private:

                    /**
                     * Offset.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Maximum number of returned results. Maximum value: `50`.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Member UIN.
                     */
                    int64_t m_memberUin;
                    bool m_memberUinHasBeenSet;

                    /**
                     * Search keyword, which can be the policy name or description.
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBEORGANIZATIONMEMBERPOLICIESREQUEST_H_
