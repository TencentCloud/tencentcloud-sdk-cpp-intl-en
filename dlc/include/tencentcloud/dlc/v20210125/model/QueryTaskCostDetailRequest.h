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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_QUERYTASKCOSTDETAILREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_QUERYTASKCOSTDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/Filter.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * QueryTaskCostDetail request structure.
                */
                class QueryTaskCostDetailRequest : public AbstractModel
                {
                public:
                    QueryTaskCostDetailRequest();
                    ~QueryTaskCostDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Filter criteria. The following filter types are supported. The parameter Name should be one of them. The maximum number of values that can be filtered by task-id is 50. The values that can be filtered by other parameter filters should not be more than 5.
task-id - String - (accurate filtering of task IDs). The example of the value of task-id is e386471f-139a-4e59-877f-50ece8135b99.
task-state - String - (filtering task status); valid values: 0 (initializing), 1 (running), 2 (successful), and -1 (failed).
task-sql-keyword - String - (fuzzy filtering of the keywords of SQL statements); the example of the value is DROP TABLE.
task-operator- string (filtering sub-UIN)
                     * @return Filters Filter criteria. The following filter types are supported. The parameter Name should be one of them. The maximum number of values that can be filtered by task-id is 50. The values that can be filtered by other parameter filters should not be more than 5.
task-id - String - (accurate filtering of task IDs). The example of the value of task-id is e386471f-139a-4e59-877f-50ece8135b99.
task-state - String - (filtering task status); valid values: 0 (initializing), 1 (running), 2 (successful), and -1 (failed).
task-sql-keyword - String - (fuzzy filtering of the keywords of SQL statements); the example of the value is DROP TABLE.
task-operator- string (filtering sub-UIN)
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter criteria. The following filter types are supported. The parameter Name should be one of them. The maximum number of values that can be filtered by task-id is 50. The values that can be filtered by other parameter filters should not be more than 5.
task-id - String - (accurate filtering of task IDs). The example of the value of task-id is e386471f-139a-4e59-877f-50ece8135b99.
task-state - String - (filtering task status); valid values: 0 (initializing), 1 (running), 2 (successful), and -1 (failed).
task-sql-keyword - String - (fuzzy filtering of the keywords of SQL statements); the example of the value is DROP TABLE.
task-operator- string (filtering sub-UIN)
                     * @param _filters Filter criteria. The following filter types are supported. The parameter Name should be one of them. The maximum number of values that can be filtered by task-id is 50. The values that can be filtered by other parameter filters should not be more than 5.
task-id - String - (accurate filtering of task IDs). The example of the value of task-id is e386471f-139a-4e59-877f-50ece8135b99.
task-state - String - (filtering task status); valid values: 0 (initializing), 1 (running), 2 (successful), and -1 (failed).
task-sql-keyword - String - (fuzzy filtering of the keywords of SQL statements); the example of the value is DROP TABLE.
task-operator- string (filtering sub-UIN)
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
                     * 获取Start time, and the format is yyyy-mm-dd HH:MM:SS. It is the current moment 45 days ago by default.
                     * @return StartTime Start time, and the format is yyyy-mm-dd HH:MM:SS. It is the current moment 45 days ago by default.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time, and the format is yyyy-mm-dd HH:MM:SS. It is the current moment 45 days ago by default.
                     * @param _startTime Start time, and the format is yyyy-mm-dd HH:MM:SS. It is the current moment 45 days ago by default.
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
                     * 获取End time, and the format is yyyy-mm-dd HH:MM:SS. The time span is longer than 0 day but shorter than or equal to 30 days. Data within the recent 45 days can be queried. It is the current moment by default.
                     * @return EndTime End time, and the format is yyyy-mm-dd HH:MM:SS. The time span is longer than 0 day but shorter than or equal to 30 days. Data within the recent 45 days can be queried. It is the current moment by default.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time, and the format is yyyy-mm-dd HH:MM:SS. The time span is longer than 0 day but shorter than or equal to 30 days. Data within the recent 45 days can be queried. It is the current moment by default.
                     * @param _endTime End time, and the format is yyyy-mm-dd HH:MM:SS. The time span is longer than 0 day but shorter than or equal to 30 days. Data within the recent 45 days can be queried. It is the current moment by default.
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
                     * 获取Data engine name, used for selecting
                     * @return DataEngineName Data engine name, used for selecting
                     * 
                     */
                    std::string GetDataEngineName() const;

                    /**
                     * 设置Data engine name, used for selecting
                     * @param _dataEngineName Data engine name, used for selecting
                     * 
                     */
                    void SetDataEngineName(const std::string& _dataEngineName);

                    /**
                     * 判断参数 DataEngineName 是否已赋值
                     * @return DataEngineName 是否已赋值
                     * 
                     */
                    bool DataEngineNameHasBeenSet() const;

                    /**
                     * 获取Identifier on the next page
                     * @return SearchAfter Identifier on the next page
                     * 
                     */
                    std::string GetSearchAfter() const;

                    /**
                     * 设置Identifier on the next page
                     * @param _searchAfter Identifier on the next page
                     * 
                     */
                    void SetSearchAfter(const std::string& _searchAfter);

                    /**
                     * 判断参数 SearchAfter 是否已赋值
                     * @return SearchAfter 是否已赋值
                     * 
                     */
                    bool SearchAfterHasBeenSet() const;

                    /**
                     * 获取Size of each page
                     * @return PageSize Size of each page
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置Size of each page
                     * @param _pageSize Size of each page
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * Filter criteria. The following filter types are supported. The parameter Name should be one of them. The maximum number of values that can be filtered by task-id is 50. The values that can be filtered by other parameter filters should not be more than 5.
task-id - String - (accurate filtering of task IDs). The example of the value of task-id is e386471f-139a-4e59-877f-50ece8135b99.
task-state - String - (filtering task status); valid values: 0 (initializing), 1 (running), 2 (successful), and -1 (failed).
task-sql-keyword - String - (fuzzy filtering of the keywords of SQL statements); the example of the value is DROP TABLE.
task-operator- string (filtering sub-UIN)
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Start time, and the format is yyyy-mm-dd HH:MM:SS. It is the current moment 45 days ago by default.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time, and the format is yyyy-mm-dd HH:MM:SS. The time span is longer than 0 day but shorter than or equal to 30 days. Data within the recent 45 days can be queried. It is the current moment by default.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Data engine name, used for selecting
                     */
                    std::string m_dataEngineName;
                    bool m_dataEngineNameHasBeenSet;

                    /**
                     * Identifier on the next page
                     */
                    std::string m_searchAfter;
                    bool m_searchAfterHasBeenSet;

                    /**
                     * Size of each page
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_QUERYTASKCOSTDETAILREQUEST_H_
