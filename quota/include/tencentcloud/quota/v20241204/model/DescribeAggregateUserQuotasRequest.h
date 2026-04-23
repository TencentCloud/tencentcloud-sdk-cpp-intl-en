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

#ifndef TENCENTCLOUD_QUOTA_V20241204_MODEL_DESCRIBEAGGREGATEUSERQUOTASREQUEST_H_
#define TENCENTCLOUD_QUOTA_V20241204_MODEL_DESCRIBEAGGREGATEUSERQUOTASREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/quota/v20241204/model/Filter.h>
#include <tencentcloud/quota/v20241204/model/Sort.h>
#include <tencentcloud/quota/v20241204/model/QuotaDimension.h>


namespace TencentCloud
{
    namespace Quota
    {
        namespace V20241204
        {
            namespace Model
            {
                /**
                * DescribeAggregateUserQuotas request structure.
                */
                class DescribeAggregateUserQuotasRequest : public AbstractModel
                {
                public:
                    DescribeAggregateUserQuotasRequest();
                    ~DescribeAggregateUserQuotasRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Member account. Can be empty. If empty, query the current account list.
                     * @return MemberUins Member account. Can be empty. If empty, query the current account list.
                     * 
                     */
                    std::vector<int64_t> GetMemberUins() const;

                    /**
                     * 设置Member account. Can be empty. If empty, query the current account list.
                     * @param _memberUins Member account. Can be empty. If empty, query the current account list.
                     * 
                     */
                    void SetMemberUins(const std::vector<int64_t>& _memberUins);

                    /**
                     * 判断参数 MemberUins 是否已赋值
                     * @return MemberUins 是否已赋值
                     * 
                     */
                    bool MemberUinsHasBeenSet() const;

                    /**
                     * 获取limit
                     * @return Limit limit
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置limit
                     * @param _limit limit
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
                     * 获取offset
                     * @return Offset offset
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置offset
                     * @param _offset offset
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
                     * 获取Filter
                     * @return Filter Filter
                     * 
                     */
                    std::vector<Filter> GetFilter() const;

                    /**
                     * 设置Filter
                     * @param _filter Filter
                     * 
                     */
                    void SetFilter(const std::vector<Filter>& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取sort
                     * @return Sort sort
                     * 
                     */
                    std::vector<Sort> GetSort() const;

                    /**
                     * 设置sort
                     * @param _sort sort
                     * 
                     */
                    void SetSort(const std::vector<Sort>& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取Product ID
                     * @return ProductId Product ID
                     * 
                     */
                    int64_t GetProductId() const;

                    /**
                     * 设置Product ID
                     * @param _productId Product ID
                     * 
                     */
                    void SetProductId(const int64_t& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取Quota dimension
                     * @return QuotaDimensions Quota dimension
                     * 
                     */
                    std::vector<QuotaDimension> GetQuotaDimensions() const;

                    /**
                     * 设置Quota dimension
                     * @param _quotaDimensions Quota dimension
                     * 
                     */
                    void SetQuotaDimensions(const std::vector<QuotaDimension>& _quotaDimensions);

                    /**
                     * 判断参数 QuotaDimensions 是否已赋值
                     * @return QuotaDimensions 是否已赋值
                     * 
                     */
                    bool QuotaDimensionsHasBeenSet() const;

                private:

                    /**
                     * Member account. Can be empty. If empty, query the current account list.
                     */
                    std::vector<int64_t> m_memberUins;
                    bool m_memberUinsHasBeenSet;

                    /**
                     * limit
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * offset
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Filter
                     */
                    std::vector<Filter> m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * sort
                     */
                    std::vector<Sort> m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * Product ID
                     */
                    int64_t m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * Quota dimension
                     */
                    std::vector<QuotaDimension> m_quotaDimensions;
                    bool m_quotaDimensionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_QUOTA_V20241204_MODEL_DESCRIBEAGGREGATEUSERQUOTASREQUEST_H_
