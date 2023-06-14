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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBETIMINGL7CACHEDATAREQUEST_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBETIMINGL7CACHEDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/Filter.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DescribeTimingL7CacheData request structure.
                */
                class DescribeTimingL7CacheDataRequest : public AbstractModel
                {
                public:
                    DescribeTimingL7CacheDataRequest();
                    ~DescribeTimingL7CacheDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start time of the query (client time in RFC 3339)
                     * @return StartTime Start time of the query (client time in RFC 3339)
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time of the query (client time in RFC 3339)
                     * @param _startTime Start time of the query (client time in RFC 3339)
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
                     * 获取Start time of the query (client time in RFC 3339)
                     * @return EndTime Start time of the query (client time in RFC 3339)
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Start time of the query (client time in RFC 3339)
                     * @param _endTime Start time of the query (client time in RFC 3339)
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
                     * 获取Supported metrics for data query:
`l7Cache_outFlux`: Access traffic
`l7Cache_request`: Access requests
                     * @return MetricNames Supported metrics for data query:
`l7Cache_outFlux`: Access traffic
`l7Cache_request`: Access requests
                     * 
                     */
                    std::vector<std::string> GetMetricNames() const;

                    /**
                     * 设置Supported metrics for data query:
`l7Cache_outFlux`: Access traffic
`l7Cache_request`: Access requests
                     * @param _metricNames Supported metrics for data query:
`l7Cache_outFlux`: Access traffic
`l7Cache_request`: Access requests
                     * 
                     */
                    void SetMetricNames(const std::vector<std::string>& _metricNames);

                    /**
                     * 判断参数 MetricNames 是否已赋值
                     * @return MetricNames 是否已赋值
                     * 
                     */
                    bool MetricNamesHasBeenSet() const;

                    /**
                     * 获取Time interval. Values: {min, 5min, hour, day, week}
                     * @return Interval Time interval. Values: {min, 5min, hour, day, week}
                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置Time interval. Values: {min, 5min, hour, day, week}
                     * @param _interval Time interval. Values: {min, 5min, hour, day, week}
                     * 
                     */
                    void SetInterval(const std::string& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取List of site IDs
                     * @return ZoneIds List of site IDs
                     * 
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置List of site IDs
                     * @param _zoneIds List of site IDs
                     * 
                     */
                    void SetZoneIds(const std::vector<std::string>& _zoneIds);

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     * 
                     */
                    bool ZoneIdsHasBeenSet() const;

                    /**
                     * 获取Filter condition:
{Key: "cacheType", Value: ["hit"], Operator: "equals"}: Filter by data responded from EdgeOne
{Key: "cacheType", Value: ["miss", "dynamic"], Operator: "equals"}: Filter by data responded from the origin server
                     * @return Filters Filter condition:
{Key: "cacheType", Value: ["hit"], Operator: "equals"}: Filter by data responded from EdgeOne
{Key: "cacheType", Value: ["miss", "dynamic"], Operator: "equals"}: Filter by data responded from the origin server
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter condition:
{Key: "cacheType", Value: ["hit"], Operator: "equals"}: Filter by data responded from EdgeOne
{Key: "cacheType", Value: ["miss", "dynamic"], Operator: "equals"}: Filter by data responded from the origin server
                     * @param _filters Filter condition:
{Key: "cacheType", Value: ["hit"], Operator: "equals"}: Filter by data responded from EdgeOne
{Key: "cacheType", Value: ["miss", "dynamic"], Operator: "equals"}: Filter by data responded from the origin server
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Start time of the query (client time in RFC 3339)
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Start time of the query (client time in RFC 3339)
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Supported metrics for data query:
`l7Cache_outFlux`: Access traffic
`l7Cache_request`: Access requests
                     */
                    std::vector<std::string> m_metricNames;
                    bool m_metricNamesHasBeenSet;

                    /**
                     * Time interval. Values: {min, 5min, hour, day, week}
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * List of site IDs
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * Filter condition:
{Key: "cacheType", Value: ["hit"], Operator: "equals"}: Filter by data responded from EdgeOne
{Key: "cacheType", Value: ["miss", "dynamic"], Operator: "equals"}: Filter by data responded from the origin server
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBETIMINGL7CACHEDATAREQUEST_H_
