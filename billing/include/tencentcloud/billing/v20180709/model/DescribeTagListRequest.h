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
                     * 获取Quantity, with the maximum value of 1,000
                     * @return Limit Quantity, with the maximum value of 1,000
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Quantity, with the maximum value of 1,000
                     * @param _limit Quantity, with the maximum value of 1,000
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
                     * 获取Pagination offset. Offset=0 indicates the first page. If Limit=100, Offset=100 indicates the second page, Offset=200 indicates the third page, and so on.
                     * @return Offset Pagination offset. Offset=0 indicates the first page. If Limit=100, Offset=100 indicates the second page, Offset=200 indicates the third page, and so on.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Pagination offset. Offset=0 indicates the first page. If Limit=100, Offset=100 indicates the second page, Offset=200 indicates the third page, and so on.
                     * @param _offset Pagination offset. Offset=0 indicates the first page. If Limit=100, Offset=100 indicates the second page, Offset=200 indicates the third page, and so on.
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
                     * 获取Cost allocation tag key, used as fuzzy search
                     * @return TagKey Cost allocation tag key, used as fuzzy search
                     * 
                     */
                    std::string GetTagKey() const;

                    /**
                     * 设置Cost allocation tag key, used as fuzzy search
                     * @param _tagKey Cost allocation tag key, used as fuzzy search
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
                     * 获取Tag type, enumeration value: 0 ordinary tag, 1 allocation tag, used for filtering. If not passed, get all tag keys.
                     * @return Status Tag type, enumeration value: 0 ordinary tag, 1 allocation tag, used for filtering. If not passed, get all tag keys.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Tag type, enumeration value: 0 ordinary tag, 1 allocation tag, used for filtering. If not passed, get all tag keys.
                     * @param _status Tag type, enumeration value: 0 ordinary tag, 1 allocation tag, used for filtering. If not passed, get all tag keys.
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
                     * 获取Sorting method, enumeration value: asc for ascending order, desc for descending order.
                     * @return OrderType Sorting method, enumeration value: asc for ascending order, desc for descending order.
                     * 
                     */
                    std::string GetOrderType() const;

                    /**
                     * 设置Sorting method, enumeration value: asc for ascending order, desc for descending order.
                     * @param _orderType Sorting method, enumeration value: asc for ascending order, desc for descending order.
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
                     * Quantity, with the maximum value of 1,000
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Pagination offset. Offset=0 indicates the first page. If Limit=100, Offset=100 indicates the second page, Offset=200 indicates the third page, and so on.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Cost allocation tag key, used as fuzzy search
                     */
                    std::string m_tagKey;
                    bool m_tagKeyHasBeenSet;

                    /**
                     * Tag type, enumeration value: 0 ordinary tag, 1 allocation tag, used for filtering. If not passed, get all tag keys.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Sorting method, enumeration value: asc for ascending order, desc for descending order.
                     */
                    std::string m_orderType;
                    bool m_orderTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBETAGLISTREQUEST_H_
