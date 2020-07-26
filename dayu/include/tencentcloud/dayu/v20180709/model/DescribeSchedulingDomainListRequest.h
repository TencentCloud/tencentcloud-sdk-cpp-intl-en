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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBESCHEDULINGDOMAINLISTREQUEST_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBESCHEDULINGDOMAINLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeSchedulingDomainList request structure.
                */
                class DescribeSchedulingDomainListRequest : public AbstractModel
                {
                public:
                    DescribeSchedulingDomainListRequest();
                    ~DescribeSchedulingDomainListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of items in a page. Returned results are not paged if you enter “0”.
                     * @return Limit Number of items in a page. Returned results are not paged if you enter “0”.
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of items in a page. Returned results are not paged if you enter “0”.
                     * @param Limit Number of items in a page. Returned results are not paged if you enter “0”.
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Starting offset of the page. Value: (number of pages - 1) * items per page
                     * @return Offset Starting offset of the page. Value: (number of pages - 1) * items per page
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Starting offset of the page. Value: (number of pages - 1) * items per page
                     * @param Offset Starting offset of the page. Value: (number of pages - 1) * items per page
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取(Optional) Filter by specific domain name
                     * @return Domain (Optional) Filter by specific domain name
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置(Optional) Filter by specific domain name
                     * @param Domain (Optional) Filter by specific domain name
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                private:

                    /**
                     * Number of items in a page. Returned results are not paged if you enter “0”.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Starting offset of the page. Value: (number of pages - 1) * items per page
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * (Optional) Filter by specific domain name
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBESCHEDULINGDOMAINLISTREQUEST_H_
