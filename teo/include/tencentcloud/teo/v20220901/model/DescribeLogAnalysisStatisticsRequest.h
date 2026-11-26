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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBELOGANALYSISSTATISTICSREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBELOGANALYSISSTATISTICSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeLogAnalysisStatistics request structure.
                */
                class DescribeLogAnalysisStatisticsRequest : public AbstractModel
                {
                public:
                    DescribeLogAnalysisStatisticsRequest();
                    ~DescribeLogAnalysisStatisticsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Site ID.</p>
                     * @return ZoneId <p>Site ID.</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>Site ID.</p>
                     * @param _zoneId <p>Site ID.</p>
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
                     * 获取<p>Data ownership region. Available values:</p><ul><li>mainland: within the Chinese mainland;</li><li>overseas: global (excluding the Chinese mainland).</li></ul>Note: If the site service area is "global availability zone", to obtain all data, query the data of mainland and overseas separately.<p></p>
                     * @return Area <p>Data ownership region. Available values:</p><ul><li>mainland: within the Chinese mainland;</li><li>overseas: global (excluding the Chinese mainland).</li></ul>Note: If the site service area is "global availability zone", to obtain all data, query the data of mainland and overseas separately.<p></p>
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置<p>Data ownership region. Available values:</p><ul><li>mainland: within the Chinese mainland;</li><li>overseas: global (excluding the Chinese mainland).</li></ul>Note: If the site service area is "global availability zone", to obtain all data, query the data of mainland and overseas separately.<p></p>
                     * @param _area <p>Data ownership region. Available values:</p><ul><li>mainland: within the Chinese mainland;</li><li>overseas: global (excluding the Chinese mainland).</li></ul>Note: If the site service area is "global availability zone", to obtain all data, query the data of mainland and overseas separately.<p></p>
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取<p>Log type. Available values:</p><ul><li> l7-access-logs: L7 access log;</li><li>web-attack: managed rule log.</li></ul>Default value: l7-access-logs.<p></p>
                     * @return LogType <p>Log type. Available values:</p><ul><li> l7-access-logs: L7 access log;</li><li>web-attack: managed rule log.</li></ul>Default value: l7-access-logs.<p></p>
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置<p>Log type. Available values:</p><ul><li> l7-access-logs: L7 access log;</li><li>web-attack: managed rule log.</li></ul>Default value: l7-access-logs.<p></p>
                     * @param _logType <p>Log type. Available values:</p><ul><li> l7-access-logs: L7 access log;</li><li>web-attack: managed rule log.</li></ul>Default value: l7-access-logs.<p></p>
                     * 
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取<p>Start time. Example value: 2020-04-29T00:00:00Z. The maximum span from the query start time to this day varies by package version. For details, see <a href="https://www.tencentcloud.com/document/product/1552/94165?from_cn_redirect=1#45435466-9103-4ff6-be22-e31717044fb2">Package Selection Comparison</a>.</p>
                     * @return StartTime <p>Start time. Example value: 2020-04-29T00:00:00Z. The maximum span from the query start time to this day varies by package version. For details, see <a href="https://www.tencentcloud.com/document/product/1552/94165?from_cn_redirect=1#45435466-9103-4ff6-be22-e31717044fb2">Package Selection Comparison</a>.</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>Start time. Example value: 2020-04-29T00:00:00Z. The maximum span from the query start time to this day varies by package version. For details, see <a href="https://www.tencentcloud.com/document/product/1552/94165?from_cn_redirect=1#45435466-9103-4ff6-be22-e31717044fb2">Package Selection Comparison</a>.</p>
                     * @param _startTime <p>Start time. Example value: 2020-04-29T00:00:00Z. The maximum span from the query start time to this day varies by package version. For details, see <a href="https://www.tencentcloud.com/document/product/1552/94165?from_cn_redirect=1#45435466-9103-4ff6-be22-e31717044fb2">Package Selection Comparison</a>.</p>
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
                     * 获取<p>End time, for example, 2020-04-30T00:00:00Z. The maximum time span from start time to end time per request is 31 days.</p>
                     * @return EndTime <p>End time, for example, 2020-04-30T00:00:00Z. The maximum time span from start time to end time per request is 31 days.</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>End time, for example, 2020-04-30T00:00:00Z. The maximum time span from start time to end time per request is 31 days.</p>
                     * @param _endTime <p>End time, for example, 2020-04-30T00:00:00Z. The maximum time span from start time to end time per request is 31 days.</p>
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
                     * 获取<p>Statistical query statement, composed of [<a href="https://www.tencentcloud.com/document/product/1552/124662?from_cn_redirect=1">retrieval criteria</a>] | [<a href="https://www.tencentcloud.com/document/product/1552/124662?from_cn_redirect=1">SQL statement</a>]. The SQL segment after the pipe character "|" is required. The retrieval criteria segment can be empty (for example, | SELECT ...), which means aggregation on full data. Maximum length: 12 KB. Default SQL Limit: 100. Maximum Limit: 10000.<br>Example:</p><p>With retrieval criteria: <code>${EdgeCacheStatus} in ['miss','other'] | select EdgeCacheStatus as status, count(*) as cnt group by status limit 2</code></p><p>Without retrieval criteria: <code>| select EdgeCacheStatus as status, count(*) as cnt group by status</code></p>
                     * @return Query <p>Statistical query statement, composed of [<a href="https://www.tencentcloud.com/document/product/1552/124662?from_cn_redirect=1">retrieval criteria</a>] | [<a href="https://www.tencentcloud.com/document/product/1552/124662?from_cn_redirect=1">SQL statement</a>]. The SQL segment after the pipe character "|" is required. The retrieval criteria segment can be empty (for example, | SELECT ...), which means aggregation on full data. Maximum length: 12 KB. Default SQL Limit: 100. Maximum Limit: 10000.<br>Example:</p><p>With retrieval criteria: <code>${EdgeCacheStatus} in ['miss','other'] | select EdgeCacheStatus as status, count(*) as cnt group by status limit 2</code></p><p>Without retrieval criteria: <code>| select EdgeCacheStatus as status, count(*) as cnt group by status</code></p>
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置<p>Statistical query statement, composed of [<a href="https://www.tencentcloud.com/document/product/1552/124662?from_cn_redirect=1">retrieval criteria</a>] | [<a href="https://www.tencentcloud.com/document/product/1552/124662?from_cn_redirect=1">SQL statement</a>]. The SQL segment after the pipe character "|" is required. The retrieval criteria segment can be empty (for example, | SELECT ...), which means aggregation on full data. Maximum length: 12 KB. Default SQL Limit: 100. Maximum Limit: 10000.<br>Example:</p><p>With retrieval criteria: <code>${EdgeCacheStatus} in ['miss','other'] | select EdgeCacheStatus as status, count(*) as cnt group by status limit 2</code></p><p>Without retrieval criteria: <code>| select EdgeCacheStatus as status, count(*) as cnt group by status</code></p>
                     * @param _query <p>Statistical query statement, composed of [<a href="https://www.tencentcloud.com/document/product/1552/124662?from_cn_redirect=1">retrieval criteria</a>] | [<a href="https://www.tencentcloud.com/document/product/1552/124662?from_cn_redirect=1">SQL statement</a>]. The SQL segment after the pipe character "|" is required. The retrieval criteria segment can be empty (for example, | SELECT ...), which means aggregation on full data. Maximum length: 12 KB. Default SQL Limit: 100. Maximum Limit: 10000.<br>Example:</p><p>With retrieval criteria: <code>${EdgeCacheStatus} in ['miss','other'] | select EdgeCacheStatus as status, count(*) as cnt group by status limit 2</code></p><p>Without retrieval criteria: <code>| select EdgeCacheStatus as status, count(*) as cnt group by status</code></p>
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                private:

                    /**
                     * <p>Site ID.</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>Data ownership region. Available values:</p><ul><li>mainland: within the Chinese mainland;</li><li>overseas: global (excluding the Chinese mainland).</li></ul>Note: If the site service area is "global availability zone", to obtain all data, query the data of mainland and overseas separately.<p></p>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * <p>Log type. Available values:</p><ul><li> l7-access-logs: L7 access log;</li><li>web-attack: managed rule log.</li></ul>Default value: l7-access-logs.<p></p>
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * <p>Start time. Example value: 2020-04-29T00:00:00Z. The maximum span from the query start time to this day varies by package version. For details, see <a href="https://www.tencentcloud.com/document/product/1552/94165?from_cn_redirect=1#45435466-9103-4ff6-be22-e31717044fb2">Package Selection Comparison</a>.</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>End time, for example, 2020-04-30T00:00:00Z. The maximum time span from start time to end time per request is 31 days.</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>Statistical query statement, composed of [<a href="https://www.tencentcloud.com/document/product/1552/124662?from_cn_redirect=1">retrieval criteria</a>] | [<a href="https://www.tencentcloud.com/document/product/1552/124662?from_cn_redirect=1">SQL statement</a>]. The SQL segment after the pipe character "|" is required. The retrieval criteria segment can be empty (for example, | SELECT ...), which means aggregation on full data. Maximum length: 12 KB. Default SQL Limit: 100. Maximum Limit: 10000.<br>Example:</p><p>With retrieval criteria: <code>${EdgeCacheStatus} in ['miss','other'] | select EdgeCacheStatus as status, count(*) as cnt group by status limit 2</code></p><p>Without retrieval criteria: <code>| select EdgeCacheStatus as status, count(*) as cnt group by status</code></p>
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBELOGANALYSISSTATISTICSREQUEST_H_
