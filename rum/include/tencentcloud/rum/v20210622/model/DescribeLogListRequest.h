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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBELOGLISTREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBELOGLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeLogList request structure.
                */
                class DescribeLogListRequest : public AbstractModel
                {
                public:
                    DescribeLogListRequest();
                    ~DescribeLogListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Sorting order (required). Valid values: `desc`, `asc`.
                     * @return Sort Sorting order (required). Valid values: `desc`, `asc`.
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置Sorting order (required). Valid values: `desc`, `asc`.
                     * @param _sort Sorting order (required). Valid values: `desc`, `asc`.
                     * 
                     */
                    void SetSort(const std::string& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取This parameter is required. Valid values: `searchlog`, `histogram`.
                     * @return ActionType This parameter is required. Valid values: `searchlog`, `histogram`.
                     * 
                     */
                    std::string GetActionType() const;

                    /**
                     * 设置This parameter is required. Valid values: `searchlog`, `histogram`.
                     * @param _actionType This parameter is required. Valid values: `searchlog`, `histogram`.
                     * 
                     */
                    void SetActionType(const std::string& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     * 
                     */
                    bool ActionTypeHasBeenSet() const;

                    /**
                     * 获取Project ID (required)
                     * @return ID Project ID (required)
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置Project ID (required)
                     * @param _iD Project ID (required)
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取Start time (required)
                     * @return StartTime Start time (required)
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time (required)
                     * @param _startTime Start time (required)
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取The number of raw logs returned for a single query. This parameter is required. Maximum value: 100.
                     * @return Limit The number of raw logs returned for a single query. This parameter is required. Maximum value: 100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置The number of raw logs returned for a single query. This parameter is required. Maximum value: 100.
                     * @param _limit The number of raw logs returned for a single query. This parameter is required. Maximum value: 100.
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
                     * 获取Context, which is used to load more logs. Pass through the last `Context` value returned to get more log content (up to 10,000 raw logs). It will expire after 1 hour
                     * @return Context Context, which is used to load more logs. Pass through the last `Context` value returned to get more log content (up to 10,000 raw logs). It will expire after 1 hour
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 设置Context, which is used to load more logs. Pass through the last `Context` value returned to get more log content (up to 10,000 raw logs). It will expire after 1 hour
                     * @param _context Context, which is used to load more logs. Pass through the last `Context` value returned to get more log content (up to 10,000 raw logs). It will expire after 1 hour
                     * 
                     */
                    void SetContext(const std::string& _context);

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     * 
                     */
                    bool ContextHasBeenSet() const;

                    /**
                     * 获取Query statement, which is required and can contain up to 4,096 characters, such as "id:120001 AND type:\"log\"".
                     * @return Query Query statement, which is required and can contain up to 4,096 characters, such as "id:120001 AND type:\"log\"".
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置Query statement, which is required and can contain up to 4,096 characters, such as "id:120001 AND type:\"log\"".
                     * @param _query Query statement, which is required and can contain up to 4,096 characters, such as "id:120001 AND type:\"log\"".
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取End time (required)
                     * @return EndTime End time (required)
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time (required)
                     * @param _endTime End time (required)
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * Sorting order (required). Valid values: `desc`, `asc`.
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * This parameter is required. Valid values: `searchlog`, `histogram`.
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * Project ID (required)
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * Start time (required)
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * The number of raw logs returned for a single query. This parameter is required. Maximum value: 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Context, which is used to load more logs. Pass through the last `Context` value returned to get more log content (up to 10,000 raw logs). It will expire after 1 hour
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * Query statement, which is required and can contain up to 4,096 characters, such as "id:120001 AND type:\"log\"".
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * End time (required)
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBELOGLISTREQUEST_H_
