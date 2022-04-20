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
                     * 获取<br><li> `topicName` filters by **log topic name**. Type: String. Required: No<br><li> `logsetName` filters by **logset name**. Type: String. Required: No<br><li> `topicId` filters by **log topic ID**. Type: String. Required: No<br><li> `logsetId` filters by **logset ID**. You can call DescribeLogsets to query the list of created logsets or log in to the console to view them. You can also call CreateLogset to create a logset. Type: String. Required: No<br><li> `tagKey` filters by **tag key**. Type: String. Required: No<br><li> `tag:tagKey` filters by **tag key-value pair**. The tagKey should be replaced with a specified tag key, such as tag:exampleKey. Type: String. Required: No<br><li> `storageType` filters by **log topic storage type**. Valid values: `hot` (real-time storage); `cold`: (IA storage). Type: String. Required: No. Each request can contain up to 10 `Filters` and 100 `Filter.Values`.
                     * @return Filters <br><li> `topicName` filters by **log topic name**. Type: String. Required: No<br><li> `logsetName` filters by **logset name**. Type: String. Required: No<br><li> `topicId` filters by **log topic ID**. Type: String. Required: No<br><li> `logsetId` filters by **logset ID**. You can call DescribeLogsets to query the list of created logsets or log in to the console to view them. You can also call CreateLogset to create a logset. Type: String. Required: No<br><li> `tagKey` filters by **tag key**. Type: String. Required: No<br><li> `tag:tagKey` filters by **tag key-value pair**. The tagKey should be replaced with a specified tag key, such as tag:exampleKey. Type: String. Required: No<br><li> `storageType` filters by **log topic storage type**. Valid values: `hot` (real-time storage); `cold`: (IA storage). Type: String. Required: No. Each request can contain up to 10 `Filters` and 100 `Filter.Values`.
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<br><li> `topicName` filters by **log topic name**. Type: String. Required: No<br><li> `logsetName` filters by **logset name**. Type: String. Required: No<br><li> `topicId` filters by **log topic ID**. Type: String. Required: No<br><li> `logsetId` filters by **logset ID**. You can call DescribeLogsets to query the list of created logsets or log in to the console to view them. You can also call CreateLogset to create a logset. Type: String. Required: No<br><li> `tagKey` filters by **tag key**. Type: String. Required: No<br><li> `tag:tagKey` filters by **tag key-value pair**. The tagKey should be replaced with a specified tag key, such as tag:exampleKey. Type: String. Required: No<br><li> `storageType` filters by **log topic storage type**. Valid values: `hot` (real-time storage); `cold`: (IA storage). Type: String. Required: No. Each request can contain up to 10 `Filters` and 100 `Filter.Values`.
                     * @param Filters <br><li> `topicName` filters by **log topic name**. Type: String. Required: No<br><li> `logsetName` filters by **logset name**. Type: String. Required: No<br><li> `topicId` filters by **log topic ID**. Type: String. Required: No<br><li> `logsetId` filters by **logset ID**. You can call DescribeLogsets to query the list of created logsets or log in to the console to view them. You can also call CreateLogset to create a logset. Type: String. Required: No<br><li> `tagKey` filters by **tag key**. Type: String. Required: No<br><li> `tag:tagKey` filters by **tag key-value pair**. The tagKey should be replaced with a specified tag key, such as tag:exampleKey. Type: String. Required: No<br><li> `storageType` filters by **log topic storage type**. Valid values: `hot` (real-time storage); `cold`: (IA storage). Type: String. Required: No. Each request can contain up to 10 `Filters` and 100 `Filter.Values`.
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Page offset. Default value: 0.
                     * @return Offset Page offset. Default value: 0.
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Page offset. Default value: 0.
                     * @param Offset Page offset. Default value: 0.
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Maximum number of entries per page. Default value: 20. Maximum value: 100.
                     * @return Limit Maximum number of entries per page. Default value: 20. Maximum value: 100.
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Maximum number of entries per page. Default value: 20. Maximum value: 100.
                     * @param Limit Maximum number of entries per page. Default value: 20. Maximum value: 100.
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * <br><li> `topicName` filters by **log topic name**. Type: String. Required: No<br><li> `logsetName` filters by **logset name**. Type: String. Required: No<br><li> `topicId` filters by **log topic ID**. Type: String. Required: No<br><li> `logsetId` filters by **logset ID**. You can call DescribeLogsets to query the list of created logsets or log in to the console to view them. You can also call CreateLogset to create a logset. Type: String. Required: No<br><li> `tagKey` filters by **tag key**. Type: String. Required: No<br><li> `tag:tagKey` filters by **tag key-value pair**. The tagKey should be replaced with a specified tag key, such as tag:exampleKey. Type: String. Required: No<br><li> `storageType` filters by **log topic storage type**. Valid values: `hot` (real-time storage); `cold`: (IA storage). Type: String. Required: No. Each request can contain up to 10 `Filters` and 100 `Filter.Values`.
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBETOPICSREQUEST_H_
