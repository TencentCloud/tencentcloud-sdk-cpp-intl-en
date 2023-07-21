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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBETOPICSREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBETOPICSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/Filter.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeTopics request structure.
                */
                class DescribeTopicsRequest : public AbstractModel
                {
                public:
                    DescribeTopicsRequest();
                    ~DescribeTopicsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<li>topicName: Filter by **log topic name**. Fuzzy match is implemented by default. You can use the `PreciseSearch` parameter to set exact match. Type: String. Required. No. <br><li>logsetName: Filter by **logset name**. Fuzzy match is implemented by default. You can use the `PreciseSearch` parameter to set exact match. Type: String. Required: No. <br><li>topicId: Filter by **log topic ID**. Type: String. Required: No. <br><li>logsetId: Filter by **logset ID**. You can call `DescribeLogsets` to query the list of created logsets or log in to the console to view them. You can also call `CreateLogset` to create a logset. Type: String. Required: No. <br><li>tagKey: Filter by **tag key**. Type: String. Required: No. <br><li>tag:tagKey: Filter by **tag key-value pair**. The `tagKey` should be replaced with a specified tag key, such as `tag:exampleKey`. Type: String. Required: No. <br><li>storageType: Filter by **log topic storage type**. Valid values: `hot` (standard storage) and `cold` (IA storage). Type: String. Required: No. Each request can have up to 10 `Filters` and 100 `Filter.Values`.
                     * @return Filters <li>topicName: Filter by **log topic name**. Fuzzy match is implemented by default. You can use the `PreciseSearch` parameter to set exact match. Type: String. Required. No. <br><li>logsetName: Filter by **logset name**. Fuzzy match is implemented by default. You can use the `PreciseSearch` parameter to set exact match. Type: String. Required: No. <br><li>topicId: Filter by **log topic ID**. Type: String. Required: No. <br><li>logsetId: Filter by **logset ID**. You can call `DescribeLogsets` to query the list of created logsets or log in to the console to view them. You can also call `CreateLogset` to create a logset. Type: String. Required: No. <br><li>tagKey: Filter by **tag key**. Type: String. Required: No. <br><li>tag:tagKey: Filter by **tag key-value pair**. The `tagKey` should be replaced with a specified tag key, such as `tag:exampleKey`. Type: String. Required: No. <br><li>storageType: Filter by **log topic storage type**. Valid values: `hot` (standard storage) and `cold` (IA storage). Type: String. Required: No. Each request can have up to 10 `Filters` and 100 `Filter.Values`.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<li>topicName: Filter by **log topic name**. Fuzzy match is implemented by default. You can use the `PreciseSearch` parameter to set exact match. Type: String. Required. No. <br><li>logsetName: Filter by **logset name**. Fuzzy match is implemented by default. You can use the `PreciseSearch` parameter to set exact match. Type: String. Required: No. <br><li>topicId: Filter by **log topic ID**. Type: String. Required: No. <br><li>logsetId: Filter by **logset ID**. You can call `DescribeLogsets` to query the list of created logsets or log in to the console to view them. You can also call `CreateLogset` to create a logset. Type: String. Required: No. <br><li>tagKey: Filter by **tag key**. Type: String. Required: No. <br><li>tag:tagKey: Filter by **tag key-value pair**. The `tagKey` should be replaced with a specified tag key, such as `tag:exampleKey`. Type: String. Required: No. <br><li>storageType: Filter by **log topic storage type**. Valid values: `hot` (standard storage) and `cold` (IA storage). Type: String. Required: No. Each request can have up to 10 `Filters` and 100 `Filter.Values`.
                     * @param _filters <li>topicName: Filter by **log topic name**. Fuzzy match is implemented by default. You can use the `PreciseSearch` parameter to set exact match. Type: String. Required. No. <br><li>logsetName: Filter by **logset name**. Fuzzy match is implemented by default. You can use the `PreciseSearch` parameter to set exact match. Type: String. Required: No. <br><li>topicId: Filter by **log topic ID**. Type: String. Required: No. <br><li>logsetId: Filter by **logset ID**. You can call `DescribeLogsets` to query the list of created logsets or log in to the console to view them. You can also call `CreateLogset` to create a logset. Type: String. Required: No. <br><li>tagKey: Filter by **tag key**. Type: String. Required: No. <br><li>tag:tagKey: Filter by **tag key-value pair**. The `tagKey` should be replaced with a specified tag key, such as `tag:exampleKey`. Type: String. Required: No. <br><li>storageType: Filter by **log topic storage type**. Valid values: `hot` (standard storage) and `cold` (IA storage). Type: String. Required: No. Each request can have up to 10 `Filters` and 100 `Filter.Values`.
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
                     * 获取Page offset. Default value: 0.
                     * @return Offset Page offset. Default value: 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Page offset. Default value: 0.
                     * @param _offset Page offset. Default value: 0.
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
                     * 获取Maximum number of entries per page. Default value: 20. Maximum value: 100.
                     * @return Limit Maximum number of entries per page. Default value: 20. Maximum value: 100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Maximum number of entries per page. Default value: 20. Maximum value: 100.
                     * @param _limit Maximum number of entries per page. Default value: 20. Maximum value: 100.
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
                     * 获取Match mode for `Filters` fields.
- 0: Fuzzy match for `topicName` and `logsetName`. This is the default value.
- 1: Exact match for `topicName`.
- 2: Exact match for `logsetName`.
- 3: Exact match for `topicName` and `logsetName`.
                     * @return PreciseSearch Match mode for `Filters` fields.
- 0: Fuzzy match for `topicName` and `logsetName`. This is the default value.
- 1: Exact match for `topicName`.
- 2: Exact match for `logsetName`.
- 3: Exact match for `topicName` and `logsetName`.
                     * 
                     */
                    uint64_t GetPreciseSearch() const;

                    /**
                     * 设置Match mode for `Filters` fields.
- 0: Fuzzy match for `topicName` and `logsetName`. This is the default value.
- 1: Exact match for `topicName`.
- 2: Exact match for `logsetName`.
- 3: Exact match for `topicName` and `logsetName`.
                     * @param _preciseSearch Match mode for `Filters` fields.
- 0: Fuzzy match for `topicName` and `logsetName`. This is the default value.
- 1: Exact match for `topicName`.
- 2: Exact match for `logsetName`.
- 3: Exact match for `topicName` and `logsetName`.
                     * 
                     */
                    void SetPreciseSearch(const uint64_t& _preciseSearch);

                    /**
                     * 判断参数 PreciseSearch 是否已赋值
                     * @return PreciseSearch 是否已赋值
                     * 
                     */
                    bool PreciseSearchHasBeenSet() const;

                    /**
                     * 获取Topic type
- 0 (default): Log topic.
- 1: Metric topic.

                     * @return BizType Topic type
- 0 (default): Log topic.
- 1: Metric topic.

                     * 
                     */
                    uint64_t GetBizType() const;

                    /**
                     * 设置Topic type
- 0 (default): Log topic.
- 1: Metric topic.

                     * @param _bizType Topic type
- 0 (default): Log topic.
- 1: Metric topic.

                     * 
                     */
                    void SetBizType(const uint64_t& _bizType);

                    /**
                     * 判断参数 BizType 是否已赋值
                     * @return BizType 是否已赋值
                     * 
                     */
                    bool BizTypeHasBeenSet() const;

                private:

                    /**
                     * <li>topicName: Filter by **log topic name**. Fuzzy match is implemented by default. You can use the `PreciseSearch` parameter to set exact match. Type: String. Required. No. <br><li>logsetName: Filter by **logset name**. Fuzzy match is implemented by default. You can use the `PreciseSearch` parameter to set exact match. Type: String. Required: No. <br><li>topicId: Filter by **log topic ID**. Type: String. Required: No. <br><li>logsetId: Filter by **logset ID**. You can call `DescribeLogsets` to query the list of created logsets or log in to the console to view them. You can also call `CreateLogset` to create a logset. Type: String. Required: No. <br><li>tagKey: Filter by **tag key**. Type: String. Required: No. <br><li>tag:tagKey: Filter by **tag key-value pair**. The `tagKey` should be replaced with a specified tag key, such as `tag:exampleKey`. Type: String. Required: No. <br><li>storageType: Filter by **log topic storage type**. Valid values: `hot` (standard storage) and `cold` (IA storage). Type: String. Required: No. Each request can have up to 10 `Filters` and 100 `Filter.Values`.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Page offset. Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Maximum number of entries per page. Default value: 20. Maximum value: 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Match mode for `Filters` fields.
- 0: Fuzzy match for `topicName` and `logsetName`. This is the default value.
- 1: Exact match for `topicName`.
- 2: Exact match for `logsetName`.
- 3: Exact match for `topicName` and `logsetName`.
                     */
                    uint64_t m_preciseSearch;
                    bool m_preciseSearchHasBeenSet;

                    /**
                     * Topic type
- 0 (default): Log topic.
- 1: Metric topic.

                     */
                    uint64_t m_bizType;
                    bool m_bizTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBETOPICSREQUEST_H_
