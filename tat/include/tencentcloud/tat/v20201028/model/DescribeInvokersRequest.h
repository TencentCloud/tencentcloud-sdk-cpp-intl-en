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
                     * 获取Executor ID list.

The maximum per request is 100.

Parameters must not be specified simultaneously `InvokerIds` and `Filters`.

                     * @return InvokerIds Executor ID list.

The maximum per request is 100.

Parameters must not be specified simultaneously `InvokerIds` and `Filters`.

                     * 
                     */
                    std::vector<std::string> GetInvokerIds() const;

                    /**
                     * 设置Executor ID list.

The maximum per request is 100.

Parameters must not be specified simultaneously `InvokerIds` and `Filters`.

                     * @param _invokerIds Executor ID list.

The maximum per request is 100.

Parameters must not be specified simultaneously `InvokerIds` and `Filters`.

                     * 
                     */
                    void SetInvokerIds(const std::vector<std::string>& _invokerIds);

                    /**
                     * 判断参数 InvokerIds 是否已赋值
                     * @return InvokerIds 是否已赋值
                     * 
                     */
                    bool InvokerIdsHasBeenSet() const;

                    /**
                     * 获取Filter criteria:.

- invoker-id - String - required: no - (filter condition) filter by executor id.
-command-id - String - required: no - (filter condition) filters commands by id. you can obtain the id through the [DescribeCommands (query command details)](https://www.tencentcloud.com/document/api/1340/52681?from_cn_redirect=1) api.
- invoker-type - String - required: no - (filter condition) filter by the executor type. currently only support SCHEDULE.

The maximum number of `Filters` per request is 10, and that of `Filter.Values` is 5. the `InvokerIds` and `Filters` parameters cannot be specified at the same time.
                     * @return Filters Filter criteria:.

- invoker-id - String - required: no - (filter condition) filter by executor id.
-command-id - String - required: no - (filter condition) filters commands by id. you can obtain the id through the [DescribeCommands (query command details)](https://www.tencentcloud.com/document/api/1340/52681?from_cn_redirect=1) api.
- invoker-type - String - required: no - (filter condition) filter by the executor type. currently only support SCHEDULE.

The maximum number of `Filters` per request is 10, and that of `Filter.Values` is 5. the `InvokerIds` and `Filters` parameters cannot be specified at the same time.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter criteria:.

- invoker-id - String - required: no - (filter condition) filter by executor id.
-command-id - String - required: no - (filter condition) filters commands by id. you can obtain the id through the [DescribeCommands (query command details)](https://www.tencentcloud.com/document/api/1340/52681?from_cn_redirect=1) api.
- invoker-type - String - required: no - (filter condition) filter by the executor type. currently only support SCHEDULE.

The maximum number of `Filters` per request is 10, and that of `Filter.Values` is 5. the `InvokerIds` and `Filters` parameters cannot be specified at the same time.
                     * @param _filters Filter criteria:.

- invoker-id - String - required: no - (filter condition) filter by executor id.
-command-id - String - required: no - (filter condition) filters commands by id. you can obtain the id through the [DescribeCommands (query command details)](https://www.tencentcloud.com/document/api/1340/52681?from_cn_redirect=1) api.
- invoker-type - String - required: no - (filter condition) filter by the executor type. currently only support SCHEDULE.

The maximum number of `Filters` per request is 10, and that of `Filter.Values` is 5. the `InvokerIds` and `Filters` parameters cannot be specified at the same time.
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Number of returned results. Default value: 20. Maximum value: 100.
                     * @return Limit Number of returned results. Default value: 20. Maximum value: 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of returned results. Default value: 20. Maximum value: 100.
                     * @param _limit Number of returned results. Default value: 20. Maximum value: 100.
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
                     * 获取Offset. Default value: 0.
                     * @return Offset Offset. Default value: 0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0.
                     * @param _offset Offset. Default value: 0.
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * Executor ID list.

The maximum per request is 100.

Parameters must not be specified simultaneously `InvokerIds` and `Filters`.

                     */
                    std::vector<std::string> m_invokerIds;
                    bool m_invokerIdsHasBeenSet;

                    /**
                     * Filter criteria:.

- invoker-id - String - required: no - (filter condition) filter by executor id.
-command-id - String - required: no - (filter condition) filters commands by id. you can obtain the id through the [DescribeCommands (query command details)](https://www.tencentcloud.com/document/api/1340/52681?from_cn_redirect=1) api.
- invoker-type - String - required: no - (filter condition) filter by the executor type. currently only support SCHEDULE.

The maximum number of `Filters` per request is 10, and that of `Filter.Values` is 5. the `InvokerIds` and `Filters` parameters cannot be specified at the same time.
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
