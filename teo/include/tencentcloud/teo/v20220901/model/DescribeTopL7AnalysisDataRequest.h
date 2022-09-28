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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBETOPL7ANALYSISDATAREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBETOPL7ANALYSISDATAREQUEST_H_

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
                * DescribeTopL7AnalysisData request structure.
                */
                class DescribeTopL7AnalysisDataRequest : public AbstractModel
                {
                public:
                    DescribeTopL7AnalysisDataRequest();
                    ~DescribeTopL7AnalysisDataRequest() = default;
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
<li>`l7Flow_outFlux_country`: Country the request came from;</li>
<li>`l7Flow_outFlux_statusCode`: Status code of the request;</li>
<li>`l7Flow_outFlux_domain`: Domain name of the request;</li>
<li>`l7Flow_outFlux_url`: URL of the request;</li>
<li>`l7Flow_outFlux_resourceType`: Resource type;</li>
<li>`l7Flow_outFlux_sip`: Client IP;</li>
<li>`l7Flow_outFlux_referers`: Refer header;</li>
<li>`l7Flow_outFlux_ua_device`: Device type;</li>
<li>`l7Flow_outFlux_ua_browser`: Browser type;</li>
<li>`l7Flow_outFlux_us_os`: OS type;</li>
                     * @return MetricName The query metric. Values:
<li>`l7Flow_outFlux_country`: Country the request came from;</li>
<li>`l7Flow_outFlux_statusCode`: Status code of the request;</li>
<li>`l7Flow_outFlux_domain`: Domain name of the request;</li>
<li>`l7Flow_outFlux_url`: URL of the request;</li>
<li>`l7Flow_outFlux_resourceType`: Resource type;</li>
<li>`l7Flow_outFlux_sip`: Client IP;</li>
<li>`l7Flow_outFlux_referers`: Refer header;</li>
<li>`l7Flow_outFlux_ua_device`: Device type;</li>
<li>`l7Flow_outFlux_ua_browser`: Browser type;</li>
<li>`l7Flow_outFlux_us_os`: OS type;</li>
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置The query metric. Values:
<li>`l7Flow_outFlux_country`: Country the request came from;</li>
<li>`l7Flow_outFlux_statusCode`: Status code of the request;</li>
<li>`l7Flow_outFlux_domain`: Domain name of the request;</li>
<li>`l7Flow_outFlux_url`: URL of the request;</li>
<li>`l7Flow_outFlux_resourceType`: Resource type;</li>
<li>`l7Flow_outFlux_sip`: Client IP;</li>
<li>`l7Flow_outFlux_referers`: Refer header;</li>
<li>`l7Flow_outFlux_ua_device`: Device type;</li>
<li>`l7Flow_outFlux_ua_browser`: Browser type;</li>
<li>`l7Flow_outFlux_us_os`: OS type;</li>
                     * @param MetricName The query metric. Values:
<li>`l7Flow_outFlux_country`: Country the request came from;</li>
<li>`l7Flow_outFlux_statusCode`: Status code of the request;</li>
<li>`l7Flow_outFlux_domain`: Domain name of the request;</li>
<li>`l7Flow_outFlux_url`: URL of the request;</li>
<li>`l7Flow_outFlux_resourceType`: Resource type;</li>
<li>`l7Flow_outFlux_sip`: Client IP;</li>
<li>`l7Flow_outFlux_referers`: Refer header;</li>
<li>`l7Flow_outFlux_ua_device`: Device type;</li>
<li>`l7Flow_outFlux_ua_browser`: Browser type;</li>
<li>`l7Flow_outFlux_us_os`: OS type;</li>
                     */
                    void SetMetricName(const std::string& _metricName);

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     */
                    bool MetricNameHasBeenSet() const;

                    /**
                     * 获取List of sites to be queried. All sites will be selected if this field is not specified.
                     * @return ZoneIds List of sites to be queried. All sites will be selected if this field is not specified.
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置List of sites to be queried. All sites will be selected if this field is not specified.
                     * @param ZoneIds List of sites to be queried. All sites will be selected if this field is not specified.
                     */
                    void SetZoneIds(const std::vector<std::string>& _zoneIds);

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     */
                    bool ZoneIdsHasBeenSet() const;

                    /**
                     * 获取Queries the top n rows of data. Maximum value: 1000. Top 10 rows of data will be queried if this field is not specified.
                     * @return Limit Queries the top n rows of data. Maximum value: 1000. Top 10 rows of data will be queried if this field is not specified.
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Queries the top n rows of data. Maximum value: 1000. Top 10 rows of data will be queried if this field is not specified.
                     * @param Limit Queries the top n rows of data. Maximum value: 1000. Top 10 rows of data will be queried if this field is not specified.
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取The key of the parameter QueryCondition, which is used to specify a filter. Values:
<li>`country`: Country/Region;</li>
<li>`domain`: Domain name;</li>
<li>`protocol`: Protocol type;</li>
<li>`resourceType`: Resource type;</li>
<li>`statusCode`: Status code;</li>
<li>`browserType`: Browser type;</li>
<li>`deviceType`: Device type;</li>
<li>`operatingSystemType`: OS type;</li>
<li>`tlsVersion`: TLS version;</li>
<li>`url`: URL address;</li>
<li>`referer`: Refer header;</li>
<li>`ipVersion`: IP version;</li>
<li>`tagKey`: Tag key;</li>
<li>`tagValue`: Tag value.</li>
                     * @return Filters The key of the parameter QueryCondition, which is used to specify a filter. Values:
<li>`country`: Country/Region;</li>
<li>`domain`: Domain name;</li>
<li>`protocol`: Protocol type;</li>
<li>`resourceType`: Resource type;</li>
<li>`statusCode`: Status code;</li>
<li>`browserType`: Browser type;</li>
<li>`deviceType`: Device type;</li>
<li>`operatingSystemType`: OS type;</li>
<li>`tlsVersion`: TLS version;</li>
<li>`url`: URL address;</li>
<li>`referer`: Refer header;</li>
<li>`ipVersion`: IP version;</li>
<li>`tagKey`: Tag key;</li>
<li>`tagValue`: Tag value.</li>
                     */
                    std::vector<QueryCondition> GetFilters() const;

                    /**
                     * 设置The key of the parameter QueryCondition, which is used to specify a filter. Values:
<li>`country`: Country/Region;</li>
<li>`domain`: Domain name;</li>
<li>`protocol`: Protocol type;</li>
<li>`resourceType`: Resource type;</li>
<li>`statusCode`: Status code;</li>
<li>`browserType`: Browser type;</li>
<li>`deviceType`: Device type;</li>
<li>`operatingSystemType`: OS type;</li>
<li>`tlsVersion`: TLS version;</li>
<li>`url`: URL address;</li>
<li>`referer`: Refer header;</li>
<li>`ipVersion`: IP version;</li>
<li>`tagKey`: Tag key;</li>
<li>`tagValue`: Tag value.</li>
                     * @param Filters The key of the parameter QueryCondition, which is used to specify a filter. Values:
<li>`country`: Country/Region;</li>
<li>`domain`: Domain name;</li>
<li>`protocol`: Protocol type;</li>
<li>`resourceType`: Resource type;</li>
<li>`statusCode`: Status code;</li>
<li>`browserType`: Browser type;</li>
<li>`deviceType`: Device type;</li>
<li>`operatingSystemType`: OS type;</li>
<li>`tlsVersion`: TLS version;</li>
<li>`url`: URL address;</li>
<li>`referer`: Refer header;</li>
<li>`ipVersion`: IP version;</li>
<li>`tagKey`: Tag key;</li>
<li>`tagValue`: Tag value.</li>
                     */
                    void SetFilters(const std::vector<QueryCondition>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取The query time granularity. Values:
<li>`min`: 1 minute;</li>
<li>`5min`: 5 minute;</li>
<li>`hour`: 1 hour;</li>
<li>`day`: 1 day.</li>If this field is not specified, the granularity will be determined based on the interval between the start time and end time as follows: 1-minute granularity applies for a 1-hour interval, 5-minute granularity for a 2-day interval, 1-hour granularity for a 7-day interval, and 1-day granularity for an interval of over 7 days.
                     * @return Interval The query time granularity. Values:
<li>`min`: 1 minute;</li>
<li>`5min`: 5 minute;</li>
<li>`hour`: 1 hour;</li>
<li>`day`: 1 day.</li>If this field is not specified, the granularity will be determined based on the interval between the start time and end time as follows: 1-minute granularity applies for a 1-hour interval, 5-minute granularity for a 2-day interval, 1-hour granularity for a 7-day interval, and 1-day granularity for an interval of over 7 days.
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置The query time granularity. Values:
<li>`min`: 1 minute;</li>
<li>`5min`: 5 minute;</li>
<li>`hour`: 1 hour;</li>
<li>`day`: 1 day.</li>If this field is not specified, the granularity will be determined based on the interval between the start time and end time as follows: 1-minute granularity applies for a 1-hour interval, 5-minute granularity for a 2-day interval, 1-hour granularity for a 7-day interval, and 1-day granularity for an interval of over 7 days.
                     * @param Interval The query time granularity. Values:
<li>`min`: 1 minute;</li>
<li>`5min`: 5 minute;</li>
<li>`hour`: 1 hour;</li>
<li>`day`: 1 day.</li>If this field is not specified, the granularity will be determined based on the interval between the start time and end time as follows: 1-minute granularity applies for a 1-hour interval, 5-minute granularity for a 2-day interval, 1-hour granularity for a 7-day interval, and 1-day granularity for an interval of over 7 days.
                     */
                    void SetInterval(const std::string& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取Data storage region. Values:
<li>`overseas`: Global (outside the Chinese mainland);</li>
<li>`mainland`: Chinese mainland.</li>If this field is not specified, the data storage region will be determined based on the user’s location.
                     * @return Area Data storage region. Values:
<li>`overseas`: Global (outside the Chinese mainland);</li>
<li>`mainland`: Chinese mainland.</li>If this field is not specified, the data storage region will be determined based on the user’s location.
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Data storage region. Values:
<li>`overseas`: Global (outside the Chinese mainland);</li>
<li>`mainland`: Chinese mainland.</li>If this field is not specified, the data storage region will be determined based on the user’s location.
                     * @param Area Data storage region. Values:
<li>`overseas`: Global (outside the Chinese mainland);</li>
<li>`mainland`: Chinese mainland.</li>If this field is not specified, the data storage region will be determined based on the user’s location.
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
<li>`l7Flow_outFlux_country`: Country the request came from;</li>
<li>`l7Flow_outFlux_statusCode`: Status code of the request;</li>
<li>`l7Flow_outFlux_domain`: Domain name of the request;</li>
<li>`l7Flow_outFlux_url`: URL of the request;</li>
<li>`l7Flow_outFlux_resourceType`: Resource type;</li>
<li>`l7Flow_outFlux_sip`: Client IP;</li>
<li>`l7Flow_outFlux_referers`: Refer header;</li>
<li>`l7Flow_outFlux_ua_device`: Device type;</li>
<li>`l7Flow_outFlux_ua_browser`: Browser type;</li>
<li>`l7Flow_outFlux_us_os`: OS type;</li>
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * List of sites to be queried. All sites will be selected if this field is not specified.
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * Queries the top n rows of data. Maximum value: 1000. Top 10 rows of data will be queried if this field is not specified.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * The key of the parameter QueryCondition, which is used to specify a filter. Values:
<li>`country`: Country/Region;</li>
<li>`domain`: Domain name;</li>
<li>`protocol`: Protocol type;</li>
<li>`resourceType`: Resource type;</li>
<li>`statusCode`: Status code;</li>
<li>`browserType`: Browser type;</li>
<li>`deviceType`: Device type;</li>
<li>`operatingSystemType`: OS type;</li>
<li>`tlsVersion`: TLS version;</li>
<li>`url`: URL address;</li>
<li>`referer`: Refer header;</li>
<li>`ipVersion`: IP version;</li>
<li>`tagKey`: Tag key;</li>
<li>`tagValue`: Tag value.</li>
                     */
                    std::vector<QueryCondition> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * The query time granularity. Values:
<li>`min`: 1 minute;</li>
<li>`5min`: 5 minute;</li>
<li>`hour`: 1 hour;</li>
<li>`day`: 1 day.</li>If this field is not specified, the granularity will be determined based on the interval between the start time and end time as follows: 1-minute granularity applies for a 1-hour interval, 5-minute granularity for a 2-day interval, 1-hour granularity for a 7-day interval, and 1-day granularity for an interval of over 7 days.
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * Data storage region. Values:
<li>`overseas`: Global (outside the Chinese mainland);</li>
<li>`mainland`: Chinese mainland.</li>If this field is not specified, the data storage region will be determined based on the user’s location.
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBETOPL7ANALYSISDATAREQUEST_H_
