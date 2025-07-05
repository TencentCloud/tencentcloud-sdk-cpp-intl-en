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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBECMQQUEUESREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBECMQQUEUESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/Filter.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DescribeCmqQueues request structure.
                */
                class DescribeCmqQueuesRequest : public AbstractModel
                {
                public:
                    DescribeCmqQueuesRequest();
                    ~DescribeCmqQueuesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Starting position of a queue list to be returned on the current page in case of paginated return. If a value is entered, `limit` must be specified. If this parameter is left empty, 0 will be used by default.
                     * @return Offset Starting position of a queue list to be returned on the current page in case of paginated return. If a value is entered, `limit` must be specified. If this parameter is left empty, 0 will be used by default.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Starting position of a queue list to be returned on the current page in case of paginated return. If a value is entered, `limit` must be specified. If this parameter is left empty, 0 will be used by default.
                     * @param _offset Starting position of a queue list to be returned on the current page in case of paginated return. If a value is entered, `limit` must be specified. If this parameter is left empty, 0 will be used by default.
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
                     * 获取The number of queues to be returned per page in case of paginated return. If this parameter is not passed in, 20 will be used by default. Maximum value: 50.
                     * @return Limit The number of queues to be returned per page in case of paginated return. If this parameter is not passed in, 20 will be used by default. Maximum value: 50.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置The number of queues to be returned per page in case of paginated return. If this parameter is not passed in, 20 will be used by default. Maximum value: 50.
                     * @param _limit The number of queues to be returned per page in case of paginated return. If this parameter is not passed in, 20 will be used by default. Maximum value: 50.
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
                     * 获取Filter by `QueueName`
                     * @return QueueName Filter by `QueueName`
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置Filter by `QueueName`
                     * @param _queueName Filter by `QueueName`
                     * 
                     */
                    void SetQueueName(const std::string& _queueName);

                    /**
                     * 判断参数 QueueName 是否已赋值
                     * @return QueueName 是否已赋值
                     * 
                     */
                    bool QueueNameHasBeenSet() const;

                    /**
                     * 获取Filter by CMQ queue name.
                     * @return QueueNameList Filter by CMQ queue name.
                     * 
                     */
                    std::vector<std::string> GetQueueNameList() const;

                    /**
                     * 设置Filter by CMQ queue name.
                     * @param _queueNameList Filter by CMQ queue name.
                     * 
                     */
                    void SetQueueNameList(const std::vector<std::string>& _queueNameList);

                    /**
                     * 判断参数 QueueNameList 是否已赋值
                     * @return QueueNameList 是否已赋值
                     * 
                     */
                    bool QueueNameListHasBeenSet() const;

                    /**
                     * 获取For filtering by tag, this parameter must be set to `true`.
                     * @return IsTagFilter For filtering by tag, this parameter must be set to `true`.
                     * 
                     */
                    bool GetIsTagFilter() const;

                    /**
                     * 设置For filtering by tag, this parameter must be set to `true`.
                     * @param _isTagFilter For filtering by tag, this parameter must be set to `true`.
                     * 
                     */
                    void SetIsTagFilter(const bool& _isTagFilter);

                    /**
                     * 判断参数 IsTagFilter 是否已赋值
                     * @return IsTagFilter 是否已赋值
                     * 
                     */
                    bool IsTagFilterHasBeenSet() const;

                    /**
                     * 获取Filter. Currently, you can filter by tag. The tag name must be prefixed with “tag:”, such as “tag: owner”, “tag: environment”, or “tag: business”.
                     * @return Filters Filter. Currently, you can filter by tag. The tag name must be prefixed with “tag:”, such as “tag: owner”, “tag: environment”, or “tag: business”.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter. Currently, you can filter by tag. The tag name must be prefixed with “tag:”, such as “tag: owner”, “tag: environment”, or “tag: business”.
                     * @param _filters Filter. Currently, you can filter by tag. The tag name must be prefixed with “tag:”, such as “tag: owner”, “tag: environment”, or “tag: business”.
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Starting position of a queue list to be returned on the current page in case of paginated return. If a value is entered, `limit` must be specified. If this parameter is left empty, 0 will be used by default.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The number of queues to be returned per page in case of paginated return. If this parameter is not passed in, 20 will be used by default. Maximum value: 50.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filter by `QueueName`
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * Filter by CMQ queue name.
                     */
                    std::vector<std::string> m_queueNameList;
                    bool m_queueNameListHasBeenSet;

                    /**
                     * For filtering by tag, this parameter must be set to `true`.
                     */
                    bool m_isTagFilter;
                    bool m_isTagFilterHasBeenSet;

                    /**
                     * Filter. Currently, you can filter by tag. The tag name must be prefixed with “tag:”, such as “tag: owner”, “tag: environment”, or “tag: business”.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBECMQQUEUESREQUEST_H_
