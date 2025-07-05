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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEPURGETASKSREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEPURGETASKSREQUEST_H_

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
                * DescribePurgeTasks request structure.
                */
                class DescribePurgeTasksRequest : public AbstractModel
                {
                public:
                    DescribePurgeTasksRequest();
                    ~DescribePurgeTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Site ID. This parameter is required.
                     * @return ZoneId Site ID. This parameter is required.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Site ID. This parameter is required.
                     * @param _zoneId Site ID. This parameter is required.
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
                     * 获取Offset of paginated query. Default value: 0.
                     * @return Offset Offset of paginated query. Default value: 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset of paginated query. Default value: 0.
                     * @param _offset Offset of paginated query. Default value: 0.
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
                     * 获取Number limit of paginated query. Default value: 20. Maximum value: 1000.
                     * @return Limit Number limit of paginated query. Default value: 20. Maximum value: 1000.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number limit of paginated query. Default value: 20. Maximum value: 1000.
                     * @param _limit Number limit of paginated query. Default value: 20. Maximum value: 1000.
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
                     * 获取Filter criteria. The maximum number of Filters.Values is 20. The detailed filter criteria are as follows:
<li>job-id: Filter by task ID in the format like 1379afjk91u32h. Multiple values and fuzzy queries are not supported.</li>
<li>target: Filter by target resource information in the format like http://www.qq.com/1.txt or tag1. Multiple values are not supported yet. Fuzzy queries are supported.</li>
<li>domains: Filter by domain name in the format like www.qq.com. Fuzzy queries are not supported.</li>
<li>statuses: Filter by task status. Fuzzy queries are not supported. Options:<br>?? processing: processing<br>?? success: successful<br>?? failed: failed<br>?? timeout: timed out</li>
<li>type: Filter by cache clearance type. Multiple values and fuzzy queries are not supported yet. Options: <br>?? purge_url: URL<br>?? purge_prefix: prefix<br>?? purge_all: all cached content<br>?? purge_host: Hostname<br>?? purge_cache_tag: CacheTag</li>
                     * @return Filters Filter criteria. The maximum number of Filters.Values is 20. The detailed filter criteria are as follows:
<li>job-id: Filter by task ID in the format like 1379afjk91u32h. Multiple values and fuzzy queries are not supported.</li>
<li>target: Filter by target resource information in the format like http://www.qq.com/1.txt or tag1. Multiple values are not supported yet. Fuzzy queries are supported.</li>
<li>domains: Filter by domain name in the format like www.qq.com. Fuzzy queries are not supported.</li>
<li>statuses: Filter by task status. Fuzzy queries are not supported. Options:<br>?? processing: processing<br>?? success: successful<br>?? failed: failed<br>?? timeout: timed out</li>
<li>type: Filter by cache clearance type. Multiple values and fuzzy queries are not supported yet. Options: <br>?? purge_url: URL<br>?? purge_prefix: prefix<br>?? purge_all: all cached content<br>?? purge_host: Hostname<br>?? purge_cache_tag: CacheTag</li>
                     * 
                     */
                    std::vector<AdvancedFilter> GetFilters() const;

                    /**
                     * 设置Filter criteria. The maximum number of Filters.Values is 20. The detailed filter criteria are as follows:
<li>job-id: Filter by task ID in the format like 1379afjk91u32h. Multiple values and fuzzy queries are not supported.</li>
<li>target: Filter by target resource information in the format like http://www.qq.com/1.txt or tag1. Multiple values are not supported yet. Fuzzy queries are supported.</li>
<li>domains: Filter by domain name in the format like www.qq.com. Fuzzy queries are not supported.</li>
<li>statuses: Filter by task status. Fuzzy queries are not supported. Options:<br>?? processing: processing<br>?? success: successful<br>?? failed: failed<br>?? timeout: timed out</li>
<li>type: Filter by cache clearance type. Multiple values and fuzzy queries are not supported yet. Options: <br>?? purge_url: URL<br>?? purge_prefix: prefix<br>?? purge_all: all cached content<br>?? purge_host: Hostname<br>?? purge_cache_tag: CacheTag</li>
                     * @param _filters Filter criteria. The maximum number of Filters.Values is 20. The detailed filter criteria are as follows:
<li>job-id: Filter by task ID in the format like 1379afjk91u32h. Multiple values and fuzzy queries are not supported.</li>
<li>target: Filter by target resource information in the format like http://www.qq.com/1.txt or tag1. Multiple values are not supported yet. Fuzzy queries are supported.</li>
<li>domains: Filter by domain name in the format like www.qq.com. Fuzzy queries are not supported.</li>
<li>statuses: Filter by task status. Fuzzy queries are not supported. Options:<br>?? processing: processing<br>?? success: successful<br>?? failed: failed<br>?? timeout: timed out</li>
<li>type: Filter by cache clearance type. Multiple values and fuzzy queries are not supported yet. Options: <br>?? purge_url: URL<br>?? purge_prefix: prefix<br>?? purge_all: all cached content<br>?? purge_host: Hostname<br>?? purge_cache_tag: CacheTag</li>
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
                     * Site ID. This parameter is required.
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
                     * Offset of paginated query. Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number limit of paginated query. Default value: 20. Maximum value: 1000.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filter criteria. The maximum number of Filters.Values is 20. The detailed filter criteria are as follows:
<li>job-id: Filter by task ID in the format like 1379afjk91u32h. Multiple values and fuzzy queries are not supported.</li>
<li>target: Filter by target resource information in the format like http://www.qq.com/1.txt or tag1. Multiple values are not supported yet. Fuzzy queries are supported.</li>
<li>domains: Filter by domain name in the format like www.qq.com. Fuzzy queries are not supported.</li>
<li>statuses: Filter by task status. Fuzzy queries are not supported. Options:<br>?? processing: processing<br>?? success: successful<br>?? failed: failed<br>?? timeout: timed out</li>
<li>type: Filter by cache clearance type. Multiple values and fuzzy queries are not supported yet. Options: <br>?? purge_url: URL<br>?? purge_prefix: prefix<br>?? purge_all: all cached content<br>?? purge_host: Hostname<br>?? purge_cache_tag: CacheTag</li>
                     */
                    std::vector<AdvancedFilter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEPURGETASKSREQUEST_H_
