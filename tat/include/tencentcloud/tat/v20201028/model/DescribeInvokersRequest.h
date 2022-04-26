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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_DESCRIBEINVOKERSREQUEST_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_DESCRIBEINVOKERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tat/v20201028/model/Filter.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * DescribeInvokers request structure.
                */
                class DescribeInvokersRequest : public AbstractModel
                {
                public:
                    DescribeInvokersRequest();
                    ~DescribeInvokersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of invoker IDs.
                     * @return InvokerIds List of invoker IDs.
                     */
                    std::vector<std::string> GetInvokerIds() const;

                    /**
                     * 设置List of invoker IDs.
                     * @param InvokerIds List of invoker IDs.
                     */
                    void SetInvokerIds(const std::vector<std::string>& _invokerIds);

                    /**
                     * 判断参数 InvokerIds 是否已赋值
                     * @return InvokerIds 是否已赋值
                     */
                    bool InvokerIdsHasBeenSet() const;

                    /**
                     * 获取Filter conditions:

<li> `invoker-id` - String - Required: No - (Filter condition) Filter by the invoker ID.
<li> `command-id` - String - Required: No - (Filter condition) Filter by the command ID.
<li> `type` - String - Required: No - (Filter condition) Filter by the invoker type.
                     * @return Filters Filter conditions:

<li> `invoker-id` - String - Required: No - (Filter condition) Filter by the invoker ID.
<li> `command-id` - String - Required: No - (Filter condition) Filter by the command ID.
<li> `type` - String - Required: No - (Filter condition) Filter by the invoker type.
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter conditions:

<li> `invoker-id` - String - Required: No - (Filter condition) Filter by the invoker ID.
<li> `command-id` - String - Required: No - (Filter condition) Filter by the command ID.
<li> `type` - String - Required: No - (Filter condition) Filter by the invoker type.
                     * @param Filters Filter conditions:

<li> `invoker-id` - String - Required: No - (Filter condition) Filter by the invoker ID.
<li> `command-id` - String - Required: No - (Filter condition) Filter by the command ID.
<li> `type` - String - Required: No - (Filter condition) Filter by the invoker type.
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Number of returned results. Default value: 20. Maximum value: 100.
                     * @return Limit Number of returned results. Default value: 20. Maximum value: 100.
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of returned results. Default value: 20. Maximum value: 100.
                     * @param Limit Number of returned results. Default value: 20. Maximum value: 100.
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Offset. Default value: 0.
                     * @return Offset Offset. Default value: 0.
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0.
                     * @param Offset Offset. Default value: 0.
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * List of invoker IDs.
                     */
                    std::vector<std::string> m_invokerIds;
                    bool m_invokerIdsHasBeenSet;

                    /**
                     * Filter conditions:

<li> `invoker-id` - String - Required: No - (Filter condition) Filter by the invoker ID.
<li> `command-id` - String - Required: No - (Filter condition) Filter by the command ID.
<li> `type` - String - Required: No - (Filter condition) Filter by the invoker type.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Number of returned results. Default value: 20. Maximum value: 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_DESCRIBEINVOKERSREQUEST_H_
