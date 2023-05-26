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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESINGLEL7ANALYSISDATAREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESINGLEL7ANALYSISDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/QueryCondition.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeSingleL7AnalysisData request structure.
                */
                class DescribeSingleL7AnalysisDataRequest : public AbstractModel
                {
                public:
                    DescribeSingleL7AnalysisDataRequest();
                    ~DescribeSingleL7AnalysisDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The start time.
                     * @return StartTime The start time.
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置The start time.
                     * @param StartTime The start time.
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取The end time.
                     * @return EndTime The end time.
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置The end time.
                     * @param EndTime The end time.
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取The query metric. Values:
<li>`l7Flow_singleIpRequest`: Number of requests from a single IP.</li>
                     * @return MetricNames The query metric. Values:
<li>`l7Flow_singleIpRequest`: Number of requests from a single IP.</li>
                     */
                    std::vector<std::string> GetMetricNames() const;

                    /**
                     * 设置The query metric. Values:
<li>`l7Flow_singleIpRequest`: Number of requests from a single IP.</li>
                     * @param MetricNames The query metric. Values:
<li>`l7Flow_singleIpRequest`: Number of requests from a single IP.</li>
                     */
                    void SetMetricNames(const std::vector<std::string>& _metricNames);

                    /**
                     * 判断参数 MetricNames 是否已赋值
                     * @return MetricNames 是否已赋值
                     */
                    bool MetricNamesHasBeenSet() const;

                    /**
                     * 获取List of sites
If it’s not specified, all sites are selected by default, and the query period must be within the last 30 days. 
Enter the IDs of sites to query. The maximum query period is determined by the <a href="https://intl.cloud.tencent.com/document/product/1552/77380?from_cn_redirect=1#edgeone-.E5.A5.97.E9.A4.90">max data query period</a> of the bound plan. 
                     * @return ZoneIds List of sites
If it’s not specified, all sites are selected by default, and the query period must be within the last 30 days. 
Enter the IDs of sites to query. The maximum query period is determined by the <a href="https://intl.cloud.tencent.com/document/product/1552/77380?from_cn_redirect=1#edgeone-.E5.A5.97.E9.A4.90">max data query period</a> of the bound plan. 
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置List of sites
If it’s not specified, all sites are selected by default, and the query period must be within the last 30 days. 
Enter the IDs of sites to query. The maximum query period is determined by the <a href="https://intl.cloud.tencent.com/document/product/1552/77380?from_cn_redirect=1#edgeone-.E5.A5.97.E9.A4.90">max data query period</a> of the bound plan. 
                     * @param ZoneIds List of sites
If it’s not specified, all sites are selected by default, and the query period must be within the last 30 days. 
Enter the IDs of sites to query. The maximum query period is determined by the <a href="https://intl.cloud.tencent.com/document/product/1552/77380?from_cn_redirect=1#edgeone-.E5.A5.97.E9.A4.90">max data query period</a> of the bound plan. 
                     */
                    void SetZoneIds(const std::vector<std::string>& _zoneIds);

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     */
                    bool ZoneIdsHasBeenSet() const;

                    /**
                     * 获取Filters
<li>`country`:<br>   Filter by the specified <strong>country code</strong>. <a href="https://en.wikipedia.org/wiki/ISO_3166-1">ISO 3166</a> country codes are used.</li>
<li>`domain`:<br>u2003u2003 Filter by the specified <strong>sub-domain name</strong>, such as `test.example.com`</li>
<li>`protocol`:<br>   Filter by the specified <strong>HTTP protocol version</strong><br>   Values:<br>u2003u2003 `HTTP/1.0`: HTTP 1.0;<br>   `HTTP/1.1`: HTTP 1.1;<br>   `HTTP/2.0`: HTTP 2.0;<br>   `HTTP/3.0`: HTTP 3.0;<br>   `WebSocket`: WebSocket.</li>
<li>`socket`:<br>u2003u2003 Filter by the specified <strong>HTTP protocol type</strong><br>u2003u2003 Values:<br>u2003u2003 `HTTP`: HTTP protocol;<br>u2003u2003 `HTTPS`: HTTPS protocol;<br>u2003u2003 `QUIC`: QUIC protocol.</li>
<li>`tagKey`:<br>u2003u2003 Filter by the specified <strong>tag key</strong></li>
<li>`tagValue`:<br>u2003u2003 Filter by the specified <strong>tag value</strong></li>
                     * @return Filters Filters
<li>`country`:<br>   Filter by the specified <strong>country code</strong>. <a href="https://en.wikipedia.org/wiki/ISO_3166-1">ISO 3166</a> country codes are used.</li>
<li>`domain`:<br>u2003u2003 Filter by the specified <strong>sub-domain name</strong>, such as `test.example.com`</li>
<li>`protocol`:<br>   Filter by the specified <strong>HTTP protocol version</strong><br>   Values:<br>u2003u2003 `HTTP/1.0`: HTTP 1.0;<br>   `HTTP/1.1`: HTTP 1.1;<br>   `HTTP/2.0`: HTTP 2.0;<br>   `HTTP/3.0`: HTTP 3.0;<br>   `WebSocket`: WebSocket.</li>
<li>`socket`:<br>u2003u2003 Filter by the specified <strong>HTTP protocol type</strong><br>u2003u2003 Values:<br>u2003u2003 `HTTP`: HTTP protocol;<br>u2003u2003 `HTTPS`: HTTPS protocol;<br>u2003u2003 `QUIC`: QUIC protocol.</li>
<li>`tagKey`:<br>u2003u2003 Filter by the specified <strong>tag key</strong></li>
<li>`tagValue`:<br>u2003u2003 Filter by the specified <strong>tag value</strong></li>
                     */
                    std::vector<QueryCondition> GetFilters() const;

                    /**
                     * 设置Filters
<li>`country`:<br>   Filter by the specified <strong>country code</strong>. <a href="https://en.wikipedia.org/wiki/ISO_3166-1">ISO 3166</a> country codes are used.</li>
<li>`domain`:<br>u2003u2003 Filter by the specified <strong>sub-domain name</strong>, such as `test.example.com`</li>
<li>`protocol`:<br>   Filter by the specified <strong>HTTP protocol version</strong><br>   Values:<br>u2003u2003 `HTTP/1.0`: HTTP 1.0;<br>   `HTTP/1.1`: HTTP 1.1;<br>   `HTTP/2.0`: HTTP 2.0;<br>   `HTTP/3.0`: HTTP 3.0;<br>   `WebSocket`: WebSocket.</li>
<li>`socket`:<br>u2003u2003 Filter by the specified <strong>HTTP protocol type</strong><br>u2003u2003 Values:<br>u2003u2003 `HTTP`: HTTP protocol;<br>u2003u2003 `HTTPS`: HTTPS protocol;<br>u2003u2003 `QUIC`: QUIC protocol.</li>
<li>`tagKey`:<br>u2003u2003 Filter by the specified <strong>tag key</strong></li>
<li>`tagValue`:<br>u2003u2003 Filter by the specified <strong>tag value</strong></li>
                     * @param Filters Filters
<li>`country`:<br>   Filter by the specified <strong>country code</strong>. <a href="https://en.wikipedia.org/wiki/ISO_3166-1">ISO 3166</a> country codes are used.</li>
<li>`domain`:<br>u2003u2003 Filter by the specified <strong>sub-domain name</strong>, such as `test.example.com`</li>
<li>`protocol`:<br>   Filter by the specified <strong>HTTP protocol version</strong><br>   Values:<br>u2003u2003 `HTTP/1.0`: HTTP 1.0;<br>   `HTTP/1.1`: HTTP 1.1;<br>   `HTTP/2.0`: HTTP 2.0;<br>   `HTTP/3.0`: HTTP 3.0;<br>   `WebSocket`: WebSocket.</li>
<li>`socket`:<br>u2003u2003 Filter by the specified <strong>HTTP protocol type</strong><br>u2003u2003 Values:<br>u2003u2003 `HTTP`: HTTP protocol;<br>u2003u2003 `HTTPS`: HTTPS protocol;<br>u2003u2003 `QUIC`: QUIC protocol.</li>
<li>`tagKey`:<br>u2003u2003 Filter by the specified <strong>tag key</strong></li>
<li>`tagValue`:<br>u2003u2003 Filter by the specified <strong>tag value</strong></li>
                     */
                    void SetFilters(const std::vector<QueryCondition>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取The query granularity. Values:
<li>`min`: 1 minute;</li>
<li>`5min`: 5 minutes;</li>
<li>`hour`: 1 hour;</li>
<li>`day`: 1 day.</li>If this field is not specified, the granularity will be determined based on the query period. <br>Period ≤ 1 hour: `min`; <br>1 hour < Period ≤ 2 days: `5min`; <br>2 days < period ≤ 7 days: `hour`; <br>Period > 7 days: `day`.
                     * @return Interval The query granularity. Values:
<li>`min`: 1 minute;</li>
<li>`5min`: 5 minutes;</li>
<li>`hour`: 1 hour;</li>
<li>`day`: 1 day.</li>If this field is not specified, the granularity will be determined based on the query period. <br>Period ≤ 1 hour: `min`; <br>1 hour < Period ≤ 2 days: `5min`; <br>2 days < period ≤ 7 days: `hour`; <br>Period > 7 days: `day`.
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置The query granularity. Values:
<li>`min`: 1 minute;</li>
<li>`5min`: 5 minutes;</li>
<li>`hour`: 1 hour;</li>
<li>`day`: 1 day.</li>If this field is not specified, the granularity will be determined based on the query period. <br>Period ≤ 1 hour: `min`; <br>1 hour < Period ≤ 2 days: `5min`; <br>2 days < period ≤ 7 days: `hour`; <br>Period > 7 days: `day`.
                     * @param Interval The query granularity. Values:
<li>`min`: 1 minute;</li>
<li>`5min`: 5 minutes;</li>
<li>`hour`: 1 hour;</li>
<li>`day`: 1 day.</li>If this field is not specified, the granularity will be determined based on the query period. <br>Period ≤ 1 hour: `min`; <br>1 hour < Period ≤ 2 days: `5min`; <br>2 days < period ≤ 7 days: `hour`; <br>Period > 7 days: `day`.
                     */
                    void SetInterval(const std::string& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取Geolocation scope. Values:
<li>`overseas`: Regions outside the Chinese mainland</li>
<li>`mainland`: Chinese mainland</li>
<li>`global`: Global</li>If this field is not specified, the default value `global` is used.
                     * @return Area Geolocation scope. Values:
<li>`overseas`: Regions outside the Chinese mainland</li>
<li>`mainland`: Chinese mainland</li>
<li>`global`: Global</li>If this field is not specified, the default value `global` is used.
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Geolocation scope. Values:
<li>`overseas`: Regions outside the Chinese mainland</li>
<li>`mainland`: Chinese mainland</li>
<li>`global`: Global</li>If this field is not specified, the default value `global` is used.
                     * @param Area Geolocation scope. Values:
<li>`overseas`: Regions outside the Chinese mainland</li>
<li>`mainland`: Chinese mainland</li>
<li>`global`: Global</li>If this field is not specified, the default value `global` is used.
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     */
                    bool AreaHasBeenSet() const;

                private:

                    /**
                     * The start time.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * The end time.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * The query metric. Values:
<li>`l7Flow_singleIpRequest`: Number of requests from a single IP.</li>
                     */
                    std::vector<std::string> m_metricNames;
                    bool m_metricNamesHasBeenSet;

                    /**
                     * List of sites
If it’s not specified, all sites are selected by default, and the query period must be within the last 30 days. 
Enter the IDs of sites to query. The maximum query period is determined by the <a href="https://intl.cloud.tencent.com/document/product/1552/77380?from_cn_redirect=1#edgeone-.E5.A5.97.E9.A4.90">max data query period</a> of the bound plan. 
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * Filters
<li>`country`:<br>   Filter by the specified <strong>country code</strong>. <a href="https://en.wikipedia.org/wiki/ISO_3166-1">ISO 3166</a> country codes are used.</li>
<li>`domain`:<br>u2003u2003 Filter by the specified <strong>sub-domain name</strong>, such as `test.example.com`</li>
<li>`protocol`:<br>   Filter by the specified <strong>HTTP protocol version</strong><br>   Values:<br>u2003u2003 `HTTP/1.0`: HTTP 1.0;<br>   `HTTP/1.1`: HTTP 1.1;<br>   `HTTP/2.0`: HTTP 2.0;<br>   `HTTP/3.0`: HTTP 3.0;<br>   `WebSocket`: WebSocket.</li>
<li>`socket`:<br>u2003u2003 Filter by the specified <strong>HTTP protocol type</strong><br>u2003u2003 Values:<br>u2003u2003 `HTTP`: HTTP protocol;<br>u2003u2003 `HTTPS`: HTTPS protocol;<br>u2003u2003 `QUIC`: QUIC protocol.</li>
<li>`tagKey`:<br>u2003u2003 Filter by the specified <strong>tag key</strong></li>
<li>`tagValue`:<br>u2003u2003 Filter by the specified <strong>tag value</strong></li>
                     */
                    std::vector<QueryCondition> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * The query granularity. Values:
<li>`min`: 1 minute;</li>
<li>`5min`: 5 minutes;</li>
<li>`hour`: 1 hour;</li>
<li>`day`: 1 day.</li>If this field is not specified, the granularity will be determined based on the query period. <br>Period ≤ 1 hour: `min`; <br>1 hour < Period ≤ 2 days: `5min`; <br>2 days < period ≤ 7 days: `hour`; <br>Period > 7 days: `day`.
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * Geolocation scope. Values:
<li>`overseas`: Regions outside the Chinese mainland</li>
<li>`mainland`: Chinese mainland</li>
<li>`global`: Global</li>If this field is not specified, the default value `global` is used.
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESINGLEL7ANALYSISDATAREQUEST_H_
