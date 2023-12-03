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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_SEARCHLOGREQUEST_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_SEARCHLOGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/eb/v20210416/model/LogFilter.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
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
                     * 获取Query start time (UNIX in ms)
                     * @return StartTime Query start time (UNIX in ms)
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置Query start time (UNIX in ms)
                     * @param _startTime Query start time (UNIX in ms)
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
                     * 获取Query end time (UNIX in ms)
                     * @return EndTime Query end time (UNIX in ms)
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置Query end time (UNIX in ms)
                     * @param _endTime Query end time (UNIX in ms)
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
                     * 获取Event bus ID
                     * @return EventBusId Event bus ID
                     * 
                     */
                    std::string GetEventBusId() const;

                    /**
                     * 设置Event bus ID
                     * @param _eventBusId Event bus ID
                     * 
                     */
                    void SetEventBusId(const std::string& _eventBusId);

                    /**
                     * 判断参数 EventBusId 是否已赋值
                     * @return EventBusId 是否已赋值
                     * 
                     */
                    bool EventBusIdHasBeenSet() const;

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
                     * 获取Logs returned per page
                     * @return Limit Logs returned per page
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Logs returned per page
                     * @param _limit Logs returned per page
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
                     * 获取Filter conditions
                     * @return Filter Filter conditions
                     * 
                     */
                    std::vector<LogFilter> GetFilter() const;

                    /**
                     * 设置Filter conditions
                     * @param _filter Filter conditions
                     * 
                     */
                    void SetFilter(const std::vector<LogFilter>& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取Sorting array
                     * @return OrderFields Sorting array
                     * 
                     */
                    std::vector<std::string> GetOrderFields() const;

                    /**
                     * 设置Sorting array
                     * @param _orderFields Sorting array
                     * 
                     */
                    void SetOrderFields(const std::vector<std::string>& _orderFields);

                    /**
                     * 判断参数 OrderFields 是否已赋值
                     * @return OrderFields 是否已赋值
                     * 
                     */
                    bool OrderFieldsHasBeenSet() const;

                    /**
                     * 获取Sorting order. Values: `asc` (earliest first); `desc` (latest first)
                     * @return OrderBy Sorting order. Values: `asc` (earliest first); `desc` (latest first)
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Sorting order. Values: `asc` (earliest first); `desc` (latest first)
                     * @param _orderBy Sorting order. Values: `asc` (earliest first); `desc` (latest first)
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                private:

                    /**
                     * Query start time (UNIX in ms)
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Query end time (UNIX in ms)
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Event bus ID
                     */
                    std::string m_eventBusId;
                    bool m_eventBusIdHasBeenSet;

                    /**
                     * Page number
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * Logs returned per page
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filter conditions
                     */
                    std::vector<LogFilter> m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * Sorting array
                     */
                    std::vector<std::string> m_orderFields;
                    bool m_orderFieldsHasBeenSet;

                    /**
                     * Sorting order. Values: `asc` (earliest first); `desc` (latest first)
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_SEARCHLOGREQUEST_H_
