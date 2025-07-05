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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_SEARCHLOGREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_SEARCHLOGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * SearchLog request structure.
                */
                class SearchLogRequest : public AbstractModel
                {
                public:
                    SearchLogRequest();
                    ~SearchLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start time for logs to be searched and analyzed, which is a Unix timestamp in milliseconds
                     * @return StartTime Start time for logs to be searched and analyzed, which is a Unix timestamp in milliseconds
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置Start time for logs to be searched and analyzed, which is a Unix timestamp in milliseconds
                     * @param _startTime Start time for logs to be searched and analyzed, which is a Unix timestamp in milliseconds
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time for logs to be searched and analyzed, which is a Unix timestamp in milliseconds
                     * @return EndTime End time for logs to be searched and analyzed, which is a Unix timestamp in milliseconds
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置End time for logs to be searched and analyzed, which is a Unix timestamp in milliseconds
                     * @param _endTime End time for logs to be searched and analyzed, which is a Unix timestamp in milliseconds
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Statement for search and analysis, with a maximum length of 12 KB
                     * @return QueryString Statement for search and analysis, with a maximum length of 12 KB
                     * 
                     */
                    std::string GetQueryString() const;

                    /**
                     * 设置Statement for search and analysis, with a maximum length of 12 KB
                     * @param _queryString Statement for search and analysis, with a maximum length of 12 KB
                     * 
                     */
                    void SetQueryString(const std::string& _queryString);

                    /**
                     * 判断参数 QueryString 是否已赋值
                     * @return QueryString 是否已赋值
                     * 
                     */
                    bool QueryStringHasBeenSet() const;

                    /**
                     * 获取Number of raw logs returned for a single query. Maximum value: 1000. The Context parameter can be used to obtain subsequent logs.
                     * @return Count Number of raw logs returned for a single query. Maximum value: 1000. The Context parameter can be used to obtain subsequent logs.
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置Number of raw logs returned for a single query. Maximum value: 1000. The Context parameter can be used to obtain subsequent logs.
                     * @param _count Number of raw logs returned for a single query. Maximum value: 1000. The Context parameter can be used to obtain subsequent logs.
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取Order for returning the raw logs. Valid values: asc (ascending), desc (descending). Default value: desc.
                     * @return Sort Order for returning the raw logs. Valid values: asc (ascending), desc (descending). Default value: desc.
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置Order for returning the raw logs. Valid values: asc (ascending), desc (descending). Default value: desc.
                     * @param _sort Order for returning the raw logs. Valid values: asc (ascending), desc (descending). Default value: desc.
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
                     * 获取Pass the Context value returned by the last API call to retrieve more subsequent logs. A total of up to 10,000 raw logs can be obtained, with a validity period of 1 hour.
                     * @return Context Pass the Context value returned by the last API call to retrieve more subsequent logs. A total of up to 10,000 raw logs can be obtained, with a validity period of 1 hour.
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 设置Pass the Context value returned by the last API call to retrieve more subsequent logs. A total of up to 10,000 raw logs can be obtained, with a validity period of 1 hour.
                     * @param _context Pass the Context value returned by the last API call to retrieve more subsequent logs. A total of up to 10,000 raw logs can be obtained, with a validity period of 1 hour.
                     * 
                     */
                    void SetContext(const std::string& _context);

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     * 
                     */
                    bool ContextHasBeenSet() const;

                private:

                    /**
                     * Start time for logs to be searched and analyzed, which is a Unix timestamp in milliseconds
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time for logs to be searched and analyzed, which is a Unix timestamp in milliseconds
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Statement for search and analysis, with a maximum length of 12 KB
                     */
                    std::string m_queryString;
                    bool m_queryStringHasBeenSet;

                    /**
                     * Number of raw logs returned for a single query. Maximum value: 1000. The Context parameter can be used to obtain subsequent logs.
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Order for returning the raw logs. Valid values: asc (ascending), desc (descending). Default value: desc.
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * Pass the Context value returned by the last API call to retrieve more subsequent logs. A total of up to 10,000 raw logs can be obtained, with a validity period of 1 hour.
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_SEARCHLOGREQUEST_H_
