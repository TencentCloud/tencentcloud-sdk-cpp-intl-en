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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEALERTRECORDHISTORYREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEALERTRECORDHISTORYREQUEST_H_

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
                * DescribeAlertRecordHistory request structure.
                */
                class DescribeAlertRecordHistoryRequest : public AbstractModel
                {
                public:
                    DescribeAlertRecordHistoryRequest();
                    ~DescribeAlertRecordHistoryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start time of the query range, which is a Unix timestamp in ms
                     * @return From Start time of the query range, which is a Unix timestamp in ms
                     * 
                     */
                    uint64_t GetFrom() const;

                    /**
                     * 设置Start time of the query range, which is a Unix timestamp in ms
                     * @param _from Start time of the query range, which is a Unix timestamp in ms
                     * 
                     */
                    void SetFrom(const uint64_t& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     * 
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取End time of the query range, which is a Unix timestamp in ms
                     * @return To End time of the query range, which is a Unix timestamp in ms
                     * 
                     */
                    uint64_t GetTo() const;

                    /**
                     * 设置End time of the query range, which is a Unix timestamp in ms
                     * @param _to End time of the query range, which is a Unix timestamp in ms
                     * 
                     */
                    void SetTo(const uint64_t& _to);

                    /**
                     * 判断参数 To 是否已赋值
                     * @return To 是否已赋值
                     * 
                     */
                    bool ToHasBeenSet() const;

                    /**
                     * 获取Page offset. Default value: 0
                     * @return Offset Page offset. Default value: 0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Page offset. Default value: 0
                     * @param _offset Page offset. Default value: 0
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
                     * 获取Maximum number of entries per page. Maximum value: 100
                     * @return Limit Maximum number of entries per page. Maximum value: 100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Maximum number of entries per page. Maximum value: 100
                     * @param _limit Maximum number of entries per page. Maximum value: 100
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
                     * 获取- alertId: Filter by alarm policy ID. Type: String; optional
- topicId: Filter by ID of monitored object. Type: String; optional
- status: Filter by alarm status. Type: String, optional. Valid values: `0` (uncleared), `1` (cleared), `2` (expired)
- alarmLevel: Filter by alarm severity. Type: String, optional. Valid values: `0` (Warn), `1` (Info), `2` (Critical)

Each request can have up to 10 `Filters` and 100 `Filter.Values`.
                     * @return Filters - alertId: Filter by alarm policy ID. Type: String; optional
- topicId: Filter by ID of monitored object. Type: String; optional
- status: Filter by alarm status. Type: String, optional. Valid values: `0` (uncleared), `1` (cleared), `2` (expired)
- alarmLevel: Filter by alarm severity. Type: String, optional. Valid values: `0` (Warn), `1` (Info), `2` (Critical)

Each request can have up to 10 `Filters` and 100 `Filter.Values`.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置- alertId: Filter by alarm policy ID. Type: String; optional
- topicId: Filter by ID of monitored object. Type: String; optional
- status: Filter by alarm status. Type: String, optional. Valid values: `0` (uncleared), `1` (cleared), `2` (expired)
- alarmLevel: Filter by alarm severity. Type: String, optional. Valid values: `0` (Warn), `1` (Info), `2` (Critical)

Each request can have up to 10 `Filters` and 100 `Filter.Values`.
                     * @param _filters - alertId: Filter by alarm policy ID. Type: String; optional
- topicId: Filter by ID of monitored object. Type: String; optional
- status: Filter by alarm status. Type: String, optional. Valid values: `0` (uncleared), `1` (cleared), `2` (expired)
- alarmLevel: Filter by alarm severity. Type: String, optional. Valid values: `0` (Warn), `1` (Info), `2` (Critical)

Each request can have up to 10 `Filters` and 100 `Filter.Values`.
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
                     * Start time of the query range, which is a Unix timestamp in ms
                     */
                    uint64_t m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * End time of the query range, which is a Unix timestamp in ms
                     */
                    uint64_t m_to;
                    bool m_toHasBeenSet;

                    /**
                     * Page offset. Default value: 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Maximum number of entries per page. Maximum value: 100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * - alertId: Filter by alarm policy ID. Type: String; optional
- topicId: Filter by ID of monitored object. Type: String; optional
- status: Filter by alarm status. Type: String, optional. Valid values: `0` (uncleared), `1` (cleared), `2` (expired)
- alarmLevel: Filter by alarm severity. Type: String, optional. Valid values: `0` (Warn), `1` (Info), `2` (Critical)

Each request can have up to 10 `Filters` and 100 `Filter.Values`.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEALERTRECORDHISTORYREQUEST_H_
