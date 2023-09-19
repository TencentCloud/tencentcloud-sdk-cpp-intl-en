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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESPARKAPPJOBSREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESPARKAPPJOBSREQUEST_H_

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
                * DescribeSparkAppJobs request structure.
                */
                class DescribeSparkAppJobsRequest : public AbstractModel
                {
                public:
                    DescribeSparkAppJobsRequest();
                    ~DescribeSparkAppJobsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The returned results are sorted by this field.
                     * @return SortBy The returned results are sorted by this field.
                     * 
                     */
                    std::string GetSortBy() const;

                    /**
                     * 设置The returned results are sorted by this field.
                     * @param _sortBy The returned results are sorted by this field.
                     * 
                     */
                    void SetSortBy(const std::string& _sortBy);

                    /**
                     * 判断参数 SortBy 是否已赋值
                     * @return SortBy 是否已赋值
                     * 
                     */
                    bool SortByHasBeenSet() const;

                    /**
                     * 获取Descending or ascending order, such as `desc`.
                     * @return Sorting Descending or ascending order, such as `desc`.
                     * 
                     */
                    std::string GetSorting() const;

                    /**
                     * 设置Descending or ascending order, such as `desc`.
                     * @param _sorting Descending or ascending order, such as `desc`.
                     * 
                     */
                    void SetSorting(const std::string& _sorting);

                    /**
                     * 判断参数 Sorting 是否已赋值
                     * @return Sorting 是否已赋值
                     * 
                     */
                    bool SortingHasBeenSet() const;

                    /**
                     * 获取The filters. The following types are supported, and `Name` of the parameter passed in must be one of them: `spark-job-name` (job name), `spark-job-id` (job ID), `spark-app-type` (job type: `1` for batch, `2` for streaming, and `4` for SQL), `user-name` (creator), and `key-word` (job name or ID keywords for fuzzy search).
                     * @return Filters The filters. The following types are supported, and `Name` of the parameter passed in must be one of them: `spark-job-name` (job name), `spark-job-id` (job ID), `spark-app-type` (job type: `1` for batch, `2` for streaming, and `4` for SQL), `user-name` (creator), and `key-word` (job name or ID keywords for fuzzy search).
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置The filters. The following types are supported, and `Name` of the parameter passed in must be one of them: `spark-job-name` (job name), `spark-job-id` (job ID), `spark-app-type` (job type: `1` for batch, `2` for streaming, and `4` for SQL), `user-name` (creator), and `key-word` (job name or ID keywords for fuzzy search).
                     * @param _filters The filters. The following types are supported, and `Name` of the parameter passed in must be one of them: `spark-job-name` (job name), `spark-job-id` (job ID), `spark-app-type` (job type: `1` for batch, `2` for streaming, and `4` for SQL), `user-name` (creator), and `key-word` (job name or ID keywords for fuzzy search).
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
                     * 获取The update start time in the format of yyyy-mm-dd HH:MM:SS.
                     * @return StartTime The update start time in the format of yyyy-mm-dd HH:MM:SS.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置The update start time in the format of yyyy-mm-dd HH:MM:SS.
                     * @param _startTime The update start time in the format of yyyy-mm-dd HH:MM:SS.
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
                     * 获取The update end time in the format of yyyy-mm-dd HH:MM:SS.
                     * @return EndTime The update end time in the format of yyyy-mm-dd HH:MM:SS.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置The update end time in the format of yyyy-mm-dd HH:MM:SS.
                     * @param _endTime The update end time in the format of yyyy-mm-dd HH:MM:SS.
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
                     * 获取The query list offset, which defaults to 0.
                     * @return Offset The query list offset, which defaults to 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置The query list offset, which defaults to 0.
                     * @param _offset The query list offset, which defaults to 0.
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
                     * 获取The maximum number of queries allowed in the list, which defaults to 100.
                     * @return Limit The maximum number of queries allowed in the list, which defaults to 100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置The maximum number of queries allowed in the list, which defaults to 100.
                     * @param _limit The maximum number of queries allowed in the list, which defaults to 100.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * The returned results are sorted by this field.
                     */
                    std::string m_sortBy;
                    bool m_sortByHasBeenSet;

                    /**
                     * Descending or ascending order, such as `desc`.
                     */
                    std::string m_sorting;
                    bool m_sortingHasBeenSet;

                    /**
                     * The filters. The following types are supported, and `Name` of the parameter passed in must be one of them: `spark-job-name` (job name), `spark-job-id` (job ID), `spark-app-type` (job type: `1` for batch, `2` for streaming, and `4` for SQL), `user-name` (creator), and `key-word` (job name or ID keywords for fuzzy search).
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * The update start time in the format of yyyy-mm-dd HH:MM:SS.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * The update end time in the format of yyyy-mm-dd HH:MM:SS.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * The query list offset, which defaults to 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The maximum number of queries allowed in the list, which defaults to 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBESPARKAPPJOBSREQUEST_H_
