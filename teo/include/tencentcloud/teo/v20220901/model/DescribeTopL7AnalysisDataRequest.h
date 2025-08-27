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
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置The start time.
                     * @param _startTime The start time.
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
                     * 获取End time. The query time range (`EndTime` - `StartTime`) must be less than or equal to 31 days.
                     * @return EndTime End time. The query time range (`EndTime` - `StartTime`) must be less than or equal to 31 days.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time. The query time range (`EndTime` - `StartTime`) must be less than or equal to 31 days.
                     * @param _endTime End time. The query time range (`EndTime` - `StartTime`) must be less than or equal to 31 days.
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
                     * 获取Queried metric. Valid values:
<li> l7Flow_outFlux_country: L7 EdgeOne response traffic aggregated by the country/region dimension;</li>
<li> l7Flow_outFlux_province: L7 EdgeOne response traffic aggregated by the dimension of provinces in chinese mainland;</li>
<li> l7Flow_outFlux_statusCode: L7 EdgeOne response traffic aggregated by the status code dimension;</li>
<li> l7Flow_outFlux_domain: L7 EdgeOne response traffic aggregated by the domain name dimension;</li>
<li>l7Flow_outFlux_url: L7 EdgeOne response traffic aggregated by url path dimension.</li>
<li> l7Flow_outFlux_resourceType: L7 EdgeOne response traffic aggregated by the resource type dimension;</li>
<li> l7Flow_outFlux_sip: L7 EdgeOne response traffic aggregated by the client IP dimension;</li>
<li>l7Flow_outFlux_referers: L7 EdgeOne response traffic aggregated by referer dimension.</li>
<li> l7Flow_outFlux_ua_device: L7 EdgeOne response traffic aggregated by the device type dimension;</li>
<li> l7Flow_outFlux_ua_browser: L7 EdgeOne response traffic aggregated by the browser type dimension;</li>
<li> l7Flow_outFlux_ua_os: L7 EdgeOne response traffic aggregated by the operating system type dimension;</li>
<li> l7Flow_outFlux_ua: L7 EdgeOne response traffic aggregated by the User-Agent dimension;</li>
<li> l7Flow_request_country: L7 request count aggregated by the country/region dimension;</li>
<li> l7Flow_request_province: L7 request count aggregated by the dimension of provinces in the chinese mainland;</li>
<li> l7Flow_request_statusCode: L7 request count aggregated by the status code dimension;</li>
<li> l7Flow_request_domain: L7 request count aggregated by the domain name dimension;</li>
<li>l7Flow_request_url: L7 request count aggregated by url Path dimension.</li>
<li> l7Flow_request_resourceType: L7 request count aggregated by resource type dimension;</li>
<li> l7Flow_request_sip: L7 request count aggregated by the client IP dimension;</li>
<li>l7Flow_request_referer: L7 request count aggregated by referer dimension.</li>
<li> l7Flow_request_ua_device: L7 request count aggregated by the device type dimension;</li>
<li> l7Flow_request_ua_browser: L7 request count aggregated by the browser type dimension;</li>
<li> l7Flow_request_ua_os: L7 request count aggregated by the operating system type dimension.</li>
<li> l7Flow_request_ua: L7 request count aggregated by the User-Agent dimension.</li>
                     * @return MetricName Queried metric. Valid values:
<li> l7Flow_outFlux_country: L7 EdgeOne response traffic aggregated by the country/region dimension;</li>
<li> l7Flow_outFlux_province: L7 EdgeOne response traffic aggregated by the dimension of provinces in chinese mainland;</li>
<li> l7Flow_outFlux_statusCode: L7 EdgeOne response traffic aggregated by the status code dimension;</li>
<li> l7Flow_outFlux_domain: L7 EdgeOne response traffic aggregated by the domain name dimension;</li>
<li>l7Flow_outFlux_url: L7 EdgeOne response traffic aggregated by url path dimension.</li>
<li> l7Flow_outFlux_resourceType: L7 EdgeOne response traffic aggregated by the resource type dimension;</li>
<li> l7Flow_outFlux_sip: L7 EdgeOne response traffic aggregated by the client IP dimension;</li>
<li>l7Flow_outFlux_referers: L7 EdgeOne response traffic aggregated by referer dimension.</li>
<li> l7Flow_outFlux_ua_device: L7 EdgeOne response traffic aggregated by the device type dimension;</li>
<li> l7Flow_outFlux_ua_browser: L7 EdgeOne response traffic aggregated by the browser type dimension;</li>
<li> l7Flow_outFlux_ua_os: L7 EdgeOne response traffic aggregated by the operating system type dimension;</li>
<li> l7Flow_outFlux_ua: L7 EdgeOne response traffic aggregated by the User-Agent dimension;</li>
<li> l7Flow_request_country: L7 request count aggregated by the country/region dimension;</li>
<li> l7Flow_request_province: L7 request count aggregated by the dimension of provinces in the chinese mainland;</li>
<li> l7Flow_request_statusCode: L7 request count aggregated by the status code dimension;</li>
<li> l7Flow_request_domain: L7 request count aggregated by the domain name dimension;</li>
<li>l7Flow_request_url: L7 request count aggregated by url Path dimension.</li>
<li> l7Flow_request_resourceType: L7 request count aggregated by resource type dimension;</li>
<li> l7Flow_request_sip: L7 request count aggregated by the client IP dimension;</li>
<li>l7Flow_request_referer: L7 request count aggregated by referer dimension.</li>
<li> l7Flow_request_ua_device: L7 request count aggregated by the device type dimension;</li>
<li> l7Flow_request_ua_browser: L7 request count aggregated by the browser type dimension;</li>
<li> l7Flow_request_ua_os: L7 request count aggregated by the operating system type dimension.</li>
<li> l7Flow_request_ua: L7 request count aggregated by the User-Agent dimension.</li>
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置Queried metric. Valid values:
<li> l7Flow_outFlux_country: L7 EdgeOne response traffic aggregated by the country/region dimension;</li>
<li> l7Flow_outFlux_province: L7 EdgeOne response traffic aggregated by the dimension of provinces in chinese mainland;</li>
<li> l7Flow_outFlux_statusCode: L7 EdgeOne response traffic aggregated by the status code dimension;</li>
<li> l7Flow_outFlux_domain: L7 EdgeOne response traffic aggregated by the domain name dimension;</li>
<li>l7Flow_outFlux_url: L7 EdgeOne response traffic aggregated by url path dimension.</li>
<li> l7Flow_outFlux_resourceType: L7 EdgeOne response traffic aggregated by the resource type dimension;</li>
<li> l7Flow_outFlux_sip: L7 EdgeOne response traffic aggregated by the client IP dimension;</li>
<li>l7Flow_outFlux_referers: L7 EdgeOne response traffic aggregated by referer dimension.</li>
<li> l7Flow_outFlux_ua_device: L7 EdgeOne response traffic aggregated by the device type dimension;</li>
<li> l7Flow_outFlux_ua_browser: L7 EdgeOne response traffic aggregated by the browser type dimension;</li>
<li> l7Flow_outFlux_ua_os: L7 EdgeOne response traffic aggregated by the operating system type dimension;</li>
<li> l7Flow_outFlux_ua: L7 EdgeOne response traffic aggregated by the User-Agent dimension;</li>
<li> l7Flow_request_country: L7 request count aggregated by the country/region dimension;</li>
<li> l7Flow_request_province: L7 request count aggregated by the dimension of provinces in the chinese mainland;</li>
<li> l7Flow_request_statusCode: L7 request count aggregated by the status code dimension;</li>
<li> l7Flow_request_domain: L7 request count aggregated by the domain name dimension;</li>
<li>l7Flow_request_url: L7 request count aggregated by url Path dimension.</li>
<li> l7Flow_request_resourceType: L7 request count aggregated by resource type dimension;</li>
<li> l7Flow_request_sip: L7 request count aggregated by the client IP dimension;</li>
<li>l7Flow_request_referer: L7 request count aggregated by referer dimension.</li>
<li> l7Flow_request_ua_device: L7 request count aggregated by the device type dimension;</li>
<li> l7Flow_request_ua_browser: L7 request count aggregated by the browser type dimension;</li>
<li> l7Flow_request_ua_os: L7 request count aggregated by the operating system type dimension.</li>
<li> l7Flow_request_ua: L7 request count aggregated by the User-Agent dimension.</li>
                     * @param _metricName Queried metric. Valid values:
<li> l7Flow_outFlux_country: L7 EdgeOne response traffic aggregated by the country/region dimension;</li>
<li> l7Flow_outFlux_province: L7 EdgeOne response traffic aggregated by the dimension of provinces in chinese mainland;</li>
<li> l7Flow_outFlux_statusCode: L7 EdgeOne response traffic aggregated by the status code dimension;</li>
<li> l7Flow_outFlux_domain: L7 EdgeOne response traffic aggregated by the domain name dimension;</li>
<li>l7Flow_outFlux_url: L7 EdgeOne response traffic aggregated by url path dimension.</li>
<li> l7Flow_outFlux_resourceType: L7 EdgeOne response traffic aggregated by the resource type dimension;</li>
<li> l7Flow_outFlux_sip: L7 EdgeOne response traffic aggregated by the client IP dimension;</li>
<li>l7Flow_outFlux_referers: L7 EdgeOne response traffic aggregated by referer dimension.</li>
<li> l7Flow_outFlux_ua_device: L7 EdgeOne response traffic aggregated by the device type dimension;</li>
<li> l7Flow_outFlux_ua_browser: L7 EdgeOne response traffic aggregated by the browser type dimension;</li>
<li> l7Flow_outFlux_ua_os: L7 EdgeOne response traffic aggregated by the operating system type dimension;</li>
<li> l7Flow_outFlux_ua: L7 EdgeOne response traffic aggregated by the User-Agent dimension;</li>
<li> l7Flow_request_country: L7 request count aggregated by the country/region dimension;</li>
<li> l7Flow_request_province: L7 request count aggregated by the dimension of provinces in the chinese mainland;</li>
<li> l7Flow_request_statusCode: L7 request count aggregated by the status code dimension;</li>
<li> l7Flow_request_domain: L7 request count aggregated by the domain name dimension;</li>
<li>l7Flow_request_url: L7 request count aggregated by url Path dimension.</li>
<li> l7Flow_request_resourceType: L7 request count aggregated by resource type dimension;</li>
<li> l7Flow_request_sip: L7 request count aggregated by the client IP dimension;</li>
<li>l7Flow_request_referer: L7 request count aggregated by referer dimension.</li>
<li> l7Flow_request_ua_device: L7 request count aggregated by the device type dimension;</li>
<li> l7Flow_request_ua_browser: L7 request count aggregated by the browser type dimension;</li>
<li> l7Flow_request_ua_os: L7 request count aggregated by the operating system type dimension.</li>
<li> l7Flow_request_ua: L7 request count aggregated by the User-Agent dimension.</li>
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
                     * 获取Site ID list. This parameter is required. A maximum of 100 site IDs can be imported. Use `*` to query data for all sites under the Tencent Cloud root account. To query account-level data, you must have resource permissions for all sites in this API.
                     * @return ZoneIds Site ID list. This parameter is required. A maximum of 100 site IDs can be imported. Use `*` to query data for all sites under the Tencent Cloud root account. To query account-level data, you must have resource permissions for all sites in this API.
                     * 
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置Site ID list. This parameter is required. A maximum of 100 site IDs can be imported. Use `*` to query data for all sites under the Tencent Cloud root account. To query account-level data, you must have resource permissions for all sites in this API.
                     * @param _zoneIds Site ID list. This parameter is required. A maximum of 100 site IDs can be imported. Use `*` to query data for all sites under the Tencent Cloud root account. To query account-level data, you must have resource permissions for all sites in this API.
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
                     * 获取Indicates the top N data to be queried. The maximum value is 1000. If this parameter is not input, the default value is 10, indicating querying the top 10 data.
                     * @return Limit Indicates the top N data to be queried. The maximum value is 1000. If this parameter is not input, the default value is 10, indicating querying the top 10 data.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Indicates the top N data to be queried. The maximum value is 1000. If this parameter is not input, the default value is 10, indicating querying the top 10 data.
                     * @param _limit Indicates the top N data to be queried. The maximum value is 1000. If this parameter is not input, the default value is 10, indicating querying the top 10 data.
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
                     * 获取Filtering conditions used when querying data. Refer to the [Filtering Conditions for Analytics](https://www.tencentcloud.com/document/product/1145/56985) document for the available filters applicable to L7 client traffic, bandwidth and requests.  
                     * @return Filters Filtering conditions used when querying data. Refer to the [Filtering Conditions for Analytics](https://www.tencentcloud.com/document/product/1145/56985) document for the available filters applicable to L7 client traffic, bandwidth and requests.  
                     * 
                     */
                    std::vector<QueryCondition> GetFilters() const;

                    /**
                     * 设置Filtering conditions used when querying data. Refer to the [Filtering Conditions for Analytics](https://www.tencentcloud.com/document/product/1145/56985) document for the available filters applicable to L7 client traffic, bandwidth and requests.  
                     * @param _filters Filtering conditions used when querying data. Refer to the [Filtering Conditions for Analytics](https://www.tencentcloud.com/document/product/1145/56985) document for the available filters applicable to L7 client traffic, bandwidth and requests.  
                     * 
                     */
                    void SetFilters(const std::vector<QueryCondition>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Query time granularity. This parameter is deprecated.
                     * @return Interval Query time granularity. This parameter is deprecated.
                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置Query time granularity. This parameter is deprecated.
                     * @param _interval Query time granularity. This parameter is deprecated.
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
                     * 获取Data region. This parameter is deprecated. Please filter data by client region in `Filters.country`.
                     * @return Area Data region. This parameter is deprecated. Please filter data by client region in `Filters.country`.
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Data region. This parameter is deprecated. Please filter data by client region in `Filters.country`.
                     * @param _area Data region. This parameter is deprecated. Please filter data by client region in `Filters.country`.
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                private:

                    /**
                     * The start time.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time. The query time range (`EndTime` - `StartTime`) must be less than or equal to 31 days.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Queried metric. Valid values:
<li> l7Flow_outFlux_country: L7 EdgeOne response traffic aggregated by the country/region dimension;</li>
<li> l7Flow_outFlux_province: L7 EdgeOne response traffic aggregated by the dimension of provinces in chinese mainland;</li>
<li> l7Flow_outFlux_statusCode: L7 EdgeOne response traffic aggregated by the status code dimension;</li>
<li> l7Flow_outFlux_domain: L7 EdgeOne response traffic aggregated by the domain name dimension;</li>
<li>l7Flow_outFlux_url: L7 EdgeOne response traffic aggregated by url path dimension.</li>
<li> l7Flow_outFlux_resourceType: L7 EdgeOne response traffic aggregated by the resource type dimension;</li>
<li> l7Flow_outFlux_sip: L7 EdgeOne response traffic aggregated by the client IP dimension;</li>
<li>l7Flow_outFlux_referers: L7 EdgeOne response traffic aggregated by referer dimension.</li>
<li> l7Flow_outFlux_ua_device: L7 EdgeOne response traffic aggregated by the device type dimension;</li>
<li> l7Flow_outFlux_ua_browser: L7 EdgeOne response traffic aggregated by the browser type dimension;</li>
<li> l7Flow_outFlux_ua_os: L7 EdgeOne response traffic aggregated by the operating system type dimension;</li>
<li> l7Flow_outFlux_ua: L7 EdgeOne response traffic aggregated by the User-Agent dimension;</li>
<li> l7Flow_request_country: L7 request count aggregated by the country/region dimension;</li>
<li> l7Flow_request_province: L7 request count aggregated by the dimension of provinces in the chinese mainland;</li>
<li> l7Flow_request_statusCode: L7 request count aggregated by the status code dimension;</li>
<li> l7Flow_request_domain: L7 request count aggregated by the domain name dimension;</li>
<li>l7Flow_request_url: L7 request count aggregated by url Path dimension.</li>
<li> l7Flow_request_resourceType: L7 request count aggregated by resource type dimension;</li>
<li> l7Flow_request_sip: L7 request count aggregated by the client IP dimension;</li>
<li>l7Flow_request_referer: L7 request count aggregated by referer dimension.</li>
<li> l7Flow_request_ua_device: L7 request count aggregated by the device type dimension;</li>
<li> l7Flow_request_ua_browser: L7 request count aggregated by the browser type dimension;</li>
<li> l7Flow_request_ua_os: L7 request count aggregated by the operating system type dimension.</li>
<li> l7Flow_request_ua: L7 request count aggregated by the User-Agent dimension.</li>
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * Site ID list. This parameter is required. A maximum of 100 site IDs can be imported. Use `*` to query data for all sites under the Tencent Cloud root account. To query account-level data, you must have resource permissions for all sites in this API.
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * Indicates the top N data to be queried. The maximum value is 1000. If this parameter is not input, the default value is 10, indicating querying the top 10 data.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filtering conditions used when querying data. Refer to the [Filtering Conditions for Analytics](https://www.tencentcloud.com/document/product/1145/56985) document for the available filters applicable to L7 client traffic, bandwidth and requests.  
                     */
                    std::vector<QueryCondition> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Query time granularity. This parameter is deprecated.
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * Data region. This parameter is deprecated. Please filter data by client region in `Filters.country`.
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBETOPL7ANALYSISDATAREQUEST_H_
