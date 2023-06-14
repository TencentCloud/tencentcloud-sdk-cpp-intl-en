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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBETOPL7CACHEDATAREQUEST_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBETOPL7CACHEDATAREQUEST_H_

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
                * DescribeTopL7CacheData request structure.
                */
                class DescribeTopL7CacheDataRequest : public AbstractModel
                {
                public:
                    DescribeTopL7CacheDataRequest();
                    ~DescribeTopL7CacheDataRequest() = default;
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
                     * 获取End time of the query (client time in RFC 3339)
                     * @return EndTime End time of the query (client time in RFC 3339)
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time of the query (client time in RFC 3339)
                     * @param _endTime End time of the query (client time in RFC 3339)
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
                     * 获取Metric for time-series data query
                     * @return MetricName Metric for time-series data query
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置Metric for time-series data query
                     * @param _metricName Metric for time-series data query
                     * 
                     */
                    void SetMetricName(const std::string& _metricName);

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     * 
                     */
                    bool MetricNameHasBeenSet() const;

                    /**
                     * 获取Specifies the number of data records to return. If `0` is passed in, all data is returned.
                     * @return Limit Specifies the number of data records to return. If `0` is passed in, all data is returned.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Specifies the number of data records to return. If `0` is passed in, all data is returned.
                     * @param _limit Specifies the number of data records to return. If `0` is passed in, all data is returned.
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
                     * 获取Time interval. Values: {min, 5min, hour, day, week}. This field is optional.
                     * @return Interval Time interval. Values: {min, 5min, hour, day, week}. This field is optional.
                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置Time interval. Values: {min, 5min, hour, day, week}. This field is optional.
                     * @param _interval Time interval. Values: {min, 5min, hour, day, week}. This field is optional.
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
                     * 获取Array of site IDs
                     * @return ZoneIds Array of site IDs
                     * 
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置Array of site IDs
                     * @param _zoneIds Array of site IDs
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
                     * 获取Filter condition
                     * @return Filters Filter condition
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter condition
                     * @param _filters Filter condition
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
                     * End time of the query (client time in RFC 3339)
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Metric for time-series data query
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * Specifies the number of data records to return. If `0` is passed in, all data is returned.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Time interval. Values: {min, 5min, hour, day, week}. This field is optional.
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * Array of site IDs
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * Filter condition
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBETOPL7CACHEDATAREQUEST_H_
