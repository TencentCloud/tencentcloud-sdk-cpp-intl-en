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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBETASKSREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBETASKSREQUEST_H_

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
                * DescribeTasks request structure.
                */
                class DescribeTasksRequest : public AbstractModel
                {
                public:
                    DescribeTasksRequest();
                    ~DescribeTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of returned results. Default value: 10. Maximum value: 100.
                     * @return Limit Number of returned results. Default value: 10. Maximum value: 100.
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of returned results. Default value: 10. Maximum value: 100.
                     * @param Limit Number of returned results. Default value: 10. Maximum value: 100.
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Offset. Default value: 0.
                     * @return Offset Offset. Default value: 0.
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0.
                     * @param Offset Offset. Default value: 0.
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Filter. The following filters are supported, and the `Name` input parameter must be one of them. Up to 50 `task-id` values can be filtered, while up to 5 other parameters can be filtered in total.
task-id - String - (filter by task ID). `task-id` format: e386471f-139a-4e59-877f-50ece8135b99.
task-state - String - (filter exactly by task status). Valid values: `0` (initial), `1` (running), `2` (succeeded), `-1` (failed).
task-sql-keyword - String - (filter fuzzily by SQL statement keyword, such as `DROP TABLE`).
task-operator- string (filter by sub-UIN)
task-kind - string (filter by task type)
                     * @return Filters Filter. The following filters are supported, and the `Name` input parameter must be one of them. Up to 50 `task-id` values can be filtered, while up to 5 other parameters can be filtered in total.
task-id - String - (filter by task ID). `task-id` format: e386471f-139a-4e59-877f-50ece8135b99.
task-state - String - (filter exactly by task status). Valid values: `0` (initial), `1` (running), `2` (succeeded), `-1` (failed).
task-sql-keyword - String - (filter fuzzily by SQL statement keyword, such as `DROP TABLE`).
task-operator- string (filter by sub-UIN)
task-kind - string (filter by task type)
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter. The following filters are supported, and the `Name` input parameter must be one of them. Up to 50 `task-id` values can be filtered, while up to 5 other parameters can be filtered in total.
task-id - String - (filter by task ID). `task-id` format: e386471f-139a-4e59-877f-50ece8135b99.
task-state - String - (filter exactly by task status). Valid values: `0` (initial), `1` (running), `2` (succeeded), `-1` (failed).
task-sql-keyword - String - (filter fuzzily by SQL statement keyword, such as `DROP TABLE`).
task-operator- string (filter by sub-UIN)
task-kind - string (filter by task type)
                     * @param Filters Filter. The following filters are supported, and the `Name` input parameter must be one of them. Up to 50 `task-id` values can be filtered, while up to 5 other parameters can be filtered in total.
task-id - String - (filter by task ID). `task-id` format: e386471f-139a-4e59-877f-50ece8135b99.
task-state - String - (filter exactly by task status). Valid values: `0` (initial), `1` (running), `2` (succeeded), `-1` (failed).
task-sql-keyword - String - (filter fuzzily by SQL statement keyword, such as `DROP TABLE`).
task-operator- string (filter by sub-UIN)
task-kind - string (filter by task type)
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Sorting field. Valid values: `create-time` (default value), `update-time`.
                     * @return SortBy Sorting field. Valid values: `create-time` (default value), `update-time`.
                     */
                    std::string GetSortBy() const;

                    /**
                     * 设置Sorting field. Valid values: `create-time` (default value), `update-time`.
                     * @param SortBy Sorting field. Valid values: `create-time` (default value), `update-time`.
                     */
                    void SetSortBy(const std::string& _sortBy);

                    /**
                     * 判断参数 SortBy 是否已赋值
                     * @return SortBy 是否已赋值
                     */
                    bool SortByHasBeenSet() const;

                    /**
                     * 获取Sorting order. Valid values: `asc` (ascending order), `desc` (descending order). Default value: `asc`.
                     * @return Sorting Sorting order. Valid values: `asc` (ascending order), `desc` (descending order). Default value: `asc`.
                     */
                    std::string GetSorting() const;

                    /**
                     * 设置Sorting order. Valid values: `asc` (ascending order), `desc` (descending order). Default value: `asc`.
                     * @param Sorting Sorting order. Valid values: `asc` (ascending order), `desc` (descending order). Default value: `asc`.
                     */
                    void SetSorting(const std::string& _sorting);

                    /**
                     * 判断参数 Sorting 是否已赋值
                     * @return Sorting 是否已赋值
                     */
                    bool SortingHasBeenSet() const;

                    /**
                     * 获取Start time in the format of `yyyy-mm-dd HH:MM:SS`, which is the current time seven days ago by default.
                     * @return StartTime Start time in the format of `yyyy-mm-dd HH:MM:SS`, which is the current time seven days ago by default.
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time in the format of `yyyy-mm-dd HH:MM:SS`, which is the current time seven days ago by default.
                     * @param StartTime Start time in the format of `yyyy-mm-dd HH:MM:SS`, which is the current time seven days ago by default.
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time in the format of `yyyy-mm-dd HH:MM:SS`, which is the current time by default. The time span is (0, 30] days. Data in the last 45 days can be queried.
                     * @return EndTime End time in the format of `yyyy-mm-dd HH:MM:SS`, which is the current time by default. The time span is (0, 30] days. Data in the last 45 days can be queried.
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time in the format of `yyyy-mm-dd HH:MM:SS`, which is the current time by default. The time span is (0, 30] days. Data in the last 45 days can be queried.
                     * @param EndTime End time in the format of `yyyy-mm-dd HH:MM:SS`, which is the current time by default. The time span is (0, 30] days. Data in the last 45 days can be queried.
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Filter by compute resource name
                     * @return DataEngineName Filter by compute resource name
                     */
                    std::string GetDataEngineName() const;

                    /**
                     * 设置Filter by compute resource name
                     * @param DataEngineName Filter by compute resource name
                     */
                    void SetDataEngineName(const std::string& _dataEngineName);

                    /**
                     * 判断参数 DataEngineName 是否已赋值
                     * @return DataEngineName 是否已赋值
                     */
                    bool DataEngineNameHasBeenSet() const;

                private:

                    /**
                     * Number of returned results. Default value: 10. Maximum value: 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset. Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Filter. The following filters are supported, and the `Name` input parameter must be one of them. Up to 50 `task-id` values can be filtered, while up to 5 other parameters can be filtered in total.
task-id - String - (filter by task ID). `task-id` format: e386471f-139a-4e59-877f-50ece8135b99.
task-state - String - (filter exactly by task status). Valid values: `0` (initial), `1` (running), `2` (succeeded), `-1` (failed).
task-sql-keyword - String - (filter fuzzily by SQL statement keyword, such as `DROP TABLE`).
task-operator- string (filter by sub-UIN)
task-kind - string (filter by task type)
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Sorting field. Valid values: `create-time` (default value), `update-time`.
                     */
                    std::string m_sortBy;
                    bool m_sortByHasBeenSet;

                    /**
                     * Sorting order. Valid values: `asc` (ascending order), `desc` (descending order). Default value: `asc`.
                     */
                    std::string m_sorting;
                    bool m_sortingHasBeenSet;

                    /**
                     * Start time in the format of `yyyy-mm-dd HH:MM:SS`, which is the current time seven days ago by default.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time in the format of `yyyy-mm-dd HH:MM:SS`, which is the current time by default. The time span is (0, 30] days. Data in the last 45 days can be queried.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Filter by compute resource name
                     */
                    std::string m_dataEngineName;
                    bool m_dataEngineNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBETASKSREQUEST_H_
