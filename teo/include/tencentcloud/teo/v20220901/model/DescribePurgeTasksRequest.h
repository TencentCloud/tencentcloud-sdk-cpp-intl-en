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
                     * 获取ID of the site.
                     * @return ZoneId ID of the site.
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置ID of the site.
                     * @param ZoneId ID of the site.
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Start time of the query.
                     * @return StartTime Start time of the query.
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time of the query.
                     * @param StartTime Start time of the query.
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time of the query.
                     * @return EndTime End time of the query.
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time of the query.
                     * @param EndTime End time of the query.
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Offset for paginated queries. Default value: `0`.
                     * @return Offset Offset for paginated queries. Default value: `0`.
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset for paginated queries. Default value: `0`.
                     * @param Offset Offset for paginated queries. Default value: `0`.
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Limit on paginated queries. Default value: `20`. Maximum value: `1000`.
                     * @return Limit Limit on paginated queries. Default value: `20`. Maximum value: `1000`.
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Limit on paginated queries. Default value: `20`. Maximum value: `1000`.
                     * @param Limit Limit on paginated queries. Default value: `20`. Maximum value: `1000`.
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Filter criteria. Each filter criteria can have up to 20 entries.
<li>`job-id`:<br> Filter by the <strong>Task ID</strong>, such as 1379afjk91u32h. Only one ID can be specified.<br>Type: String<br>   Required: No<br>   Fuzzy query: Not supported<li>`target`:<br>   Filter by the <strong>resource address</strong>, such as http://www.qq.com/1.txt. Only one entry allowed.<br>   Type: String<br>   Required: No<br>   Fuzzy query: Not supported<li>`domains`:<br>   Filter by the <strong>domain name</strong>, such as www.qq.com<br>   Type: String<br>   Required: No<br>   Fuzzy query: Not supported<li>`statuses`:<br>   Filter by the <strong>task status</strong><br>   Required: No<br>   Fuzzy query: Not supported<br>   Values:<br>   `processing`: Tasks in progress<br>   `success`: Succeeded tasks<br>   `failed`: Failed tasks<br>   `timeout`: Timed-out tasks<li>`type`:<br>   Filter by the <strong>purging mode</strong>. Only one value allowed.<br>   Type: String<br>   Required: No<br>   Fuzzy query: Not supported<br>   Values:<br>   `purge_url`: Purge URLs.<br>   `purge_prefix`: Purge prefixes.<br>   `purge_all`: Purge all caches.<br>   `purge_host`: Purge hostnames.
                     * @return Filters Filter criteria. Each filter criteria can have up to 20 entries.
<li>`job-id`:<br> Filter by the <strong>Task ID</strong>, such as 1379afjk91u32h. Only one ID can be specified.<br>Type: String<br>   Required: No<br>   Fuzzy query: Not supported<li>`target`:<br>   Filter by the <strong>resource address</strong>, such as http://www.qq.com/1.txt. Only one entry allowed.<br>   Type: String<br>   Required: No<br>   Fuzzy query: Not supported<li>`domains`:<br>   Filter by the <strong>domain name</strong>, such as www.qq.com<br>   Type: String<br>   Required: No<br>   Fuzzy query: Not supported<li>`statuses`:<br>   Filter by the <strong>task status</strong><br>   Required: No<br>   Fuzzy query: Not supported<br>   Values:<br>   `processing`: Tasks in progress<br>   `success`: Succeeded tasks<br>   `failed`: Failed tasks<br>   `timeout`: Timed-out tasks<li>`type`:<br>   Filter by the <strong>purging mode</strong>. Only one value allowed.<br>   Type: String<br>   Required: No<br>   Fuzzy query: Not supported<br>   Values:<br>   `purge_url`: Purge URLs.<br>   `purge_prefix`: Purge prefixes.<br>   `purge_all`: Purge all caches.<br>   `purge_host`: Purge hostnames.
                     */
                    std::vector<AdvancedFilter> GetFilters() const;

                    /**
                     * 设置Filter criteria. Each filter criteria can have up to 20 entries.
<li>`job-id`:<br> Filter by the <strong>Task ID</strong>, such as 1379afjk91u32h. Only one ID can be specified.<br>Type: String<br>   Required: No<br>   Fuzzy query: Not supported<li>`target`:<br>   Filter by the <strong>resource address</strong>, such as http://www.qq.com/1.txt. Only one entry allowed.<br>   Type: String<br>   Required: No<br>   Fuzzy query: Not supported<li>`domains`:<br>   Filter by the <strong>domain name</strong>, such as www.qq.com<br>   Type: String<br>   Required: No<br>   Fuzzy query: Not supported<li>`statuses`:<br>   Filter by the <strong>task status</strong><br>   Required: No<br>   Fuzzy query: Not supported<br>   Values:<br>   `processing`: Tasks in progress<br>   `success`: Succeeded tasks<br>   `failed`: Failed tasks<br>   `timeout`: Timed-out tasks<li>`type`:<br>   Filter by the <strong>purging mode</strong>. Only one value allowed.<br>   Type: String<br>   Required: No<br>   Fuzzy query: Not supported<br>   Values:<br>   `purge_url`: Purge URLs.<br>   `purge_prefix`: Purge prefixes.<br>   `purge_all`: Purge all caches.<br>   `purge_host`: Purge hostnames.
                     * @param Filters Filter criteria. Each filter criteria can have up to 20 entries.
<li>`job-id`:<br> Filter by the <strong>Task ID</strong>, such as 1379afjk91u32h. Only one ID can be specified.<br>Type: String<br>   Required: No<br>   Fuzzy query: Not supported<li>`target`:<br>   Filter by the <strong>resource address</strong>, such as http://www.qq.com/1.txt. Only one entry allowed.<br>   Type: String<br>   Required: No<br>   Fuzzy query: Not supported<li>`domains`:<br>   Filter by the <strong>domain name</strong>, such as www.qq.com<br>   Type: String<br>   Required: No<br>   Fuzzy query: Not supported<li>`statuses`:<br>   Filter by the <strong>task status</strong><br>   Required: No<br>   Fuzzy query: Not supported<br>   Values:<br>   `processing`: Tasks in progress<br>   `success`: Succeeded tasks<br>   `failed`: Failed tasks<br>   `timeout`: Timed-out tasks<li>`type`:<br>   Filter by the <strong>purging mode</strong>. Only one value allowed.<br>   Type: String<br>   Required: No<br>   Fuzzy query: Not supported<br>   Values:<br>   `purge_url`: Purge URLs.<br>   `purge_prefix`: Purge prefixes.<br>   `purge_all`: Purge all caches.<br>   `purge_host`: Purge hostnames.
                     */
                    void SetFilters(const std::vector<AdvancedFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * ID of the site.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Start time of the query.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time of the query.
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
                     * Filter criteria. Each filter criteria can have up to 20 entries.
<li>`job-id`:<br> Filter by the <strong>Task ID</strong>, such as 1379afjk91u32h. Only one ID can be specified.<br>Type: String<br>   Required: No<br>   Fuzzy query: Not supported<li>`target`:<br>   Filter by the <strong>resource address</strong>, such as http://www.qq.com/1.txt. Only one entry allowed.<br>   Type: String<br>   Required: No<br>   Fuzzy query: Not supported<li>`domains`:<br>   Filter by the <strong>domain name</strong>, such as www.qq.com<br>   Type: String<br>   Required: No<br>   Fuzzy query: Not supported<li>`statuses`:<br>   Filter by the <strong>task status</strong><br>   Required: No<br>   Fuzzy query: Not supported<br>   Values:<br>   `processing`: Tasks in progress<br>   `success`: Succeeded tasks<br>   `failed`: Failed tasks<br>   `timeout`: Timed-out tasks<li>`type`:<br>   Filter by the <strong>purging mode</strong>. Only one value allowed.<br>   Type: String<br>   Required: No<br>   Fuzzy query: Not supported<br>   Values:<br>   `purge_url`: Purge URLs.<br>   `purge_prefix`: Purge prefixes.<br>   `purge_all`: Purge all caches.<br>   `purge_host`: Purge hostnames.
                     */
                    std::vector<AdvancedFilter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEPURGETASKSREQUEST_H_
