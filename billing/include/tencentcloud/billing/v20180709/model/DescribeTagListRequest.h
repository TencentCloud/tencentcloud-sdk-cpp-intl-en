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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBETAGLISTREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBETAGLISTREQUEST_H_

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
                * DescribeTagList request structure.
                */
                class DescribeTagListRequest : public AbstractModel
                {
                public:
                    DescribeTagListRequest();
                    ~DescribeTagListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The number of entries returned at a time. The maximum value is `1000`.
                     * @return Limit The number of entries returned at a time. The maximum value is `1000`.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置The number of entries returned at a time. The maximum value is `1000`.
                     * @param _limit The number of entries returned at a time. The maximum value is `1000`.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Pagination offset. If `Offset` is `0`, it indicates the first page. When `Limit` is `100`, if `Offset` is `100`, it indicates the second page; if `Offset` is `200`, it indicates the third page, and so on.
                     * @return Offset Pagination offset. If `Offset` is `0`, it indicates the first page. When `Limit` is `100`, if `Offset` is `100`, it indicates the second page; if `Offset` is `200`, it indicates the third page, and so on.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Pagination offset. If `Offset` is `0`, it indicates the first page. When `Limit` is `100`, if `Offset` is `100`, it indicates the second page; if `Offset` is `200`, it indicates the third page, and so on.
                     * @param _offset Pagination offset. If `Offset` is `0`, it indicates the first page. When `Limit` is `100`, if `Offset` is `100`, it indicates the second page; if `Offset` is `200`, it indicates the third page, and so on.
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Cost allocation tag key, used for fuzzy search.
                     * @return TagKey Cost allocation tag key, used for fuzzy search.
                     * 
                     */
                    std::string GetTagKey() const;

                    /**
                     * 设置Cost allocation tag key, used for fuzzy search.
                     * @param _tagKey Cost allocation tag key, used for fuzzy search.
                     * 
                     */
                    void SetTagKey(const std::string& _tagKey);

                    /**
                     * 判断参数 TagKey 是否已赋值
                     * @return TagKey 是否已赋值
                     * 
                     */
                    bool TagKeyHasBeenSet() const;

                    /**
                     * 获取Tag type, used for tag filtering. Valid values: `0` (general tags), `1` (cost allocation tags). If it is not specified, all tag keys will be queried.
                     * @return Status Tag type, used for tag filtering. Valid values: `0` (general tags), `1` (cost allocation tags). If it is not specified, all tag keys will be queried.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Tag type, used for tag filtering. Valid values: `0` (general tags), `1` (cost allocation tags). If it is not specified, all tag keys will be queried.
                     * @param _status Tag type, used for tag filtering. Valid values: `0` (general tags), `1` (cost allocation tags). If it is not specified, all tag keys will be queried.
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Sorting order. Valid values: `asc` (ascending order), `desc` (descending order).
                     * @return OrderType Sorting order. Valid values: `asc` (ascending order), `desc` (descending order).
                     * 
                     */
                    std::string GetOrderType() const;

                    /**
                     * 设置Sorting order. Valid values: `asc` (ascending order), `desc` (descending order).
                     * @param _orderType Sorting order. Valid values: `asc` (ascending order), `desc` (descending order).
                     * 
                     */
                    void SetOrderType(const std::string& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                private:

                    /**
                     * The number of entries returned at a time. The maximum value is `1000`.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Pagination offset. If `Offset` is `0`, it indicates the first page. When `Limit` is `100`, if `Offset` is `100`, it indicates the second page; if `Offset` is `200`, it indicates the third page, and so on.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Cost allocation tag key, used for fuzzy search.
                     */
                    std::string m_tagKey;
                    bool m_tagKeyHasBeenSet;

                    /**
                     * Tag type, used for tag filtering. Valid values: `0` (general tags), `1` (cost allocation tags). If it is not specified, all tag keys will be queried.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Sorting order. Valid values: `asc` (ascending order), `desc` (descending order).
                     */
                    std::string m_orderType;
                    bool m_orderTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBETAGLISTREQUEST_H_
