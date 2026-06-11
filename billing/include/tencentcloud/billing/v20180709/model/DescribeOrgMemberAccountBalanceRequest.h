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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEORGMEMBERACCOUNTBALANCEREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEORGMEMBERACCOUNTBALANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeOrgMemberAccountBalance request structure.
                */
                class DescribeOrgMemberAccountBalanceRequest : public AbstractModel
                {
                public:
                    DescribeOrgMemberAccountBalanceRequest();
                    ~DescribeOrgMemberAccountBalanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Page number</p><p>Default value: 1</p><p>Value ranges from 1</p>
                     * @return PageNumber <p>Page number</p><p>Default value: 1</p><p>Value ranges from 1</p>
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置<p>Page number</p><p>Default value: 1</p><p>Value ranges from 1</p>
                     * @param _pageNumber <p>Page number</p><p>Default value: 1</p><p>Value ranges from 1</p>
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取<p>Page size</p><p>Value ranges from 1 to 10</p><p>Default value: 10</p>
                     * @return PageSize <p>Page size</p><p>Value ranges from 1 to 10</p><p>Default value: 10</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>Page size</p><p>Value ranges from 1 to 10</p><p>Default value: 10</p>
                     * @param _pageSize <p>Page size</p><p>Value ranges from 1 to 10</p><p>Default value: 10</p>
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取<p>Member uin list</p><p>Input parameter limit: Elements must be pure digits and the number of elements cannot be greater than 10</p><p>Return the account balance information of all members within the organization when empty, and return the account balance information of specified members when not empty</p>
                     * @return MemberUins <p>Member uin list</p><p>Input parameter limit: Elements must be pure digits and the number of elements cannot be greater than 10</p><p>Return the account balance information of all members within the organization when empty, and return the account balance information of specified members when not empty</p>
                     * 
                     */
                    std::vector<std::string> GetMemberUins() const;

                    /**
                     * 设置<p>Member uin list</p><p>Input parameter limit: Elements must be pure digits and the number of elements cannot be greater than 10</p><p>Return the account balance information of all members within the organization when empty, and return the account balance information of specified members when not empty</p>
                     * @param _memberUins <p>Member uin list</p><p>Input parameter limit: Elements must be pure digits and the number of elements cannot be greater than 10</p><p>Return the account balance information of all members within the organization when empty, and return the account balance information of specified members when not empty</p>
                     * 
                     */
                    void SetMemberUins(const std::vector<std::string>& _memberUins);

                    /**
                     * 判断参数 MemberUins 是否已赋值
                     * @return MemberUins 是否已赋值
                     * 
                     */
                    bool MemberUinsHasBeenSet() const;

                private:

                    /**
                     * <p>Page number</p><p>Default value: 1</p><p>Value ranges from 1</p>
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>Page size</p><p>Value ranges from 1 to 10</p><p>Default value: 10</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>Member uin list</p><p>Input parameter limit: Elements must be pure digits and the number of elements cannot be greater than 10</p><p>Return the account balance information of all members within the organization when empty, and return the account balance information of specified members when not empty</p>
                     */
                    std::vector<std::string> m_memberUins;
                    bool m_memberUinsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEORGMEMBERACCOUNTBALANCEREQUEST_H_
