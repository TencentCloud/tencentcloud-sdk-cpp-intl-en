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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEPREFETCHTASKSREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEPREFETCHTASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/AdvancedFilter.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribePrefetchTasks request structure.
                */
                class DescribePrefetchTasksRequest : public AbstractModel
                {
                public:
                    DescribePrefetchTasksRequest();
                    ~DescribePrefetchTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ZoneId. The parameter is required.
                     * @return ZoneId ZoneId. The parameter is required.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置ZoneId. The parameter is required.
                     * @param _zoneId ZoneId. The parameter is required.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Start time of the query. Either time or job-id is required.
                     * @return StartTime Start time of the query. Either time or job-id is required.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time of the query. Either time or job-id is required.
                     * @param _startTime Start time of the query. Either time or job-id is required.
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
                     * 获取End time of the query. Either time or job-id is required.
                     * @return EndTime End time of the query. Either time or job-id is required.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time of the query. Either time or job-id is required.
                     * @param _endTime End time of the query. Either time or job-id is required.
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
                     * 获取Offset for paginated queries. Default value: `0`.
                     * @return Offset Offset for paginated queries. Default value: `0`.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset for paginated queries. Default value: `0`.
                     * @param _offset Offset for paginated queries. Default value: `0`.
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
                     * 获取Limit on paginated queries. Default value: `20`. Maximum value: `1000`.
                     * @return Limit Limit on paginated queries. Default value: `20`. Maximum value: `1000`.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Limit on paginated queries. Default value: `20`. Maximum value: `1000`.
                     * @param _limit Limit on paginated queries. Default value: `20`. Maximum value: `1000`.
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
                     * 获取Filtering condition. The maximum value of Filters.Values is 20. Detailed filtering conditions: 
<li>job-id<br> Filter based on task ID.  job-id format: 1379afjk91u32h. Multiple values are not supported, Fuzzy search is not supported. </li>
<li>target<br> Filter based on target resource information. target format: http://www.qq.com/1.txt. Multiple values are not supported, Fuzzy search is not supported. </li>
<li>domains<br> Filter based on domain name. domains format: www.qq.com. Fuzzy search is not supported.</li>
<li>statuses<br> Filter based on task status.  Fuzzy search is not supported. Options:<br> processing: Processing<br> success: Success<br> failed: Failure<br> timeout: Timeout</li>
                     * @return Filters Filtering condition. The maximum value of Filters.Values is 20. Detailed filtering conditions: 
<li>job-id<br> Filter based on task ID.  job-id format: 1379afjk91u32h. Multiple values are not supported, Fuzzy search is not supported. </li>
<li>target<br> Filter based on target resource information. target format: http://www.qq.com/1.txt. Multiple values are not supported, Fuzzy search is not supported. </li>
<li>domains<br> Filter based on domain name. domains format: www.qq.com. Fuzzy search is not supported.</li>
<li>statuses<br> Filter based on task status.  Fuzzy search is not supported. Options:<br> processing: Processing<br> success: Success<br> failed: Failure<br> timeout: Timeout</li>
                     * 
                     */
                    std::vector<AdvancedFilter> GetFilters() const;

                    /**
                     * 设置Filtering condition. The maximum value of Filters.Values is 20. Detailed filtering conditions: 
<li>job-id<br> Filter based on task ID.  job-id format: 1379afjk91u32h. Multiple values are not supported, Fuzzy search is not supported. </li>
<li>target<br> Filter based on target resource information. target format: http://www.qq.com/1.txt. Multiple values are not supported, Fuzzy search is not supported. </li>
<li>domains<br> Filter based on domain name. domains format: www.qq.com. Fuzzy search is not supported.</li>
<li>statuses<br> Filter based on task status.  Fuzzy search is not supported. Options:<br> processing: Processing<br> success: Success<br> failed: Failure<br> timeout: Timeout</li>
                     * @param _filters Filtering condition. The maximum value of Filters.Values is 20. Detailed filtering conditions: 
<li>job-id<br> Filter based on task ID.  job-id format: 1379afjk91u32h. Multiple values are not supported, Fuzzy search is not supported. </li>
<li>target<br> Filter based on target resource information. target format: http://www.qq.com/1.txt. Multiple values are not supported, Fuzzy search is not supported. </li>
<li>domains<br> Filter based on domain name. domains format: www.qq.com. Fuzzy search is not supported.</li>
<li>statuses<br> Filter based on task status.  Fuzzy search is not supported. Options:<br> processing: Processing<br> success: Success<br> failed: Failure<br> timeout: Timeout</li>
                     * 
                     */
                    void SetFilters(const std::vector<AdvancedFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * ZoneId. The parameter is required.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Start time of the query. Either time or job-id is required.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time of the query. Either time or job-id is required.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Offset for paginated queries. Default value: `0`.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Limit on paginated queries. Default value: `20`. Maximum value: `1000`.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filtering condition. The maximum value of Filters.Values is 20. Detailed filtering conditions: 
<li>job-id<br> Filter based on task ID.  job-id format: 1379afjk91u32h. Multiple values are not supported, Fuzzy search is not supported. </li>
<li>target<br> Filter based on target resource information. target format: http://www.qq.com/1.txt. Multiple values are not supported, Fuzzy search is not supported. </li>
<li>domains<br> Filter based on domain name. domains format: www.qq.com. Fuzzy search is not supported.</li>
<li>statuses<br> Filter based on task status.  Fuzzy search is not supported. Options:<br> processing: Processing<br> success: Success<br> failed: Failure<br> timeout: Timeout</li>
                     */
                    std::vector<AdvancedFilter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEPREFETCHTASKSREQUEST_H_
