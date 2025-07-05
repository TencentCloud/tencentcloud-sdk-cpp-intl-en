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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBERUMLOGLISTREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBERUMLOGLISTREQUEST_H_

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
                * DescribeRumLogList request structure.
                */
                class DescribeRumLogListRequest : public AbstractModel
                {
                public:
                    DescribeRumLogListRequest();
                    ~DescribeRumLogListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Sorting order (required). Valid values: `desc`, `asc`.
                     * @return OrderBy Sorting order (required). Valid values: `desc`, `asc`.
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Sorting order (required). Valid values: `desc`, `asc`.
                     * @param _orderBy Sorting order (required). Valid values: `desc`, `asc`.
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取Start time in milliseconds. It is in timestamp format and is required.
                     * @return StartTime Start time in milliseconds. It is in timestamp format and is required.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time in milliseconds. It is in timestamp format and is required.
                     * @param _startTime Start time in milliseconds. It is in timestamp format and is required.
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
                     * 获取The number of raw logs returned for a single query. This parameter is required. Maximum value: `100`.
                     * @return Limit The number of raw logs returned for a single query. This parameter is required. Maximum value: `100`.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置The number of raw logs returned for a single query. This parameter is required. Maximum value: `100`.
                     * @param _limit The number of raw logs returned for a single query. This parameter is required. Maximum value: `100`.
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
                     * 获取Page number
                     * @return Page Page number
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置Page number
                     * @param _page Page number
                     * 
                     */
                    void SetPage(const int64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取Query statement, which is required and can contain up to 4,096 characters.
                     * @return Query Query statement, which is required and can contain up to 4,096 characters.
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置Query statement, which is required and can contain up to 4,096 characters.
                     * @param _query Query statement, which is required and can contain up to 4,096 characters.
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
                     * 获取End time in milliseconds. It is in timestamp format and is required.
                     * @return EndTime End time in milliseconds. It is in timestamp format and is required.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time in milliseconds. It is in timestamp format and is required.
                     * @param _endTime End time in milliseconds. It is in timestamp format and is required.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

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

                private:

                    /**
                     * Sorting order (required). Valid values: `desc`, `asc`.
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * Start time in milliseconds. It is in timestamp format and is required.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * The number of raw logs returned for a single query. This parameter is required. Maximum value: `100`.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Page number
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * Query statement, which is required and can contain up to 4,096 characters.
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * End time in milliseconds. It is in timestamp format and is required.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Project ID (required)
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBERUMLOGLISTREQUEST_H_
