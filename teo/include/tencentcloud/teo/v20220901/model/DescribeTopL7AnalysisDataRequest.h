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
                     * 获取Queried metric. valid values:.
<li> l7Flow_outFlux_country: specifies the l7 EdgeOne response traffic metric counted by the country/region dimension.</li>.
<li> l7Flow_outFlux_province: specifies the l7 EdgeOne response traffic metric counted by the dimension of provinces in chinese mainland.</li>.
<li> l7Flow_outFlux_statusCode: specifies the l7 EdgeOne response traffic metric by status code dimension.</li>.
<li> l7Flow_outFlux_domain: specifies the l7 EdgeOne response traffic metric counted by domain name dimension.</li>.
<li>l7Flow_outFlux_url: specifies the l7 EdgeOne response traffic metric counted by url Path dimension.</li>.
<li> l7Flow_outFlux_resourceType: specifies the l7 EdgeOne response traffic metric counted by resource type dimension.</li>.
<li> l7Flow_outFlux_sip: specifies the l7 EdgeOne response traffic metric counted by the client IP dimension.</li>.
<li>l7Flow_outFlux_referers: specifies the l7 EdgeOne response traffic statistics by Referer dimension.</li>.
<li> l7Flow_outFlux_ua_device: specifies the l7 EdgeOne response traffic metric counted by device type dimension.</li>.
<li> l7Flow_outFlux_ua_browser: specifies the l7 EdgeOne response traffic metric by browser type dimension.</li>.
<li> l7Flow_outFlux_ua_os: specifies the l7 EdgeOne response traffic metric counted by the operating system type dimension.</li>.
<li> l7Flow_outFlux_ua: specifies the l7 EdgeOne response traffic metric by User-Agent dimension statistics.</li>.
<li> l7Flow_request_country: specifies the l7 access request count metric by country/region dimension.</li>.
<li> l7Flow_request_province: specifies the l7 access request count metric by province in the chinese mainland.</li>.
<li> l7Flow_request_statusCode: specifies the l7 access request count metric by status code dimension.</li>.
<li> l7Flow_request_domain: specifies the l7 access request count metric counted by the domain name dimension.</li>.
<li> l7Flow_request_url: specifies the l7 access request count metric counted by url Path dimension. </li>.
<li> l7Flow_request_resourceType: specifies the l7 access request count metric counted by the resource type dimension.</li>.
<li> l7Flow_request_sip: specifies the l7 access request count metric counted by the client IP dimension.</li>.
<li>l7Flow_request_referer: specifies l7 access request count metrics by referer dimension.</li>.
<li> l7Flow_request_ua_device: specifies the l7 access request count metric by device type dimension.</li>.
<li> l7Flow_request_ua_browser: specifies the l7 access request count metric by browser type dimension.</li>.
<li> l7Flow_request_ua_os: specifies the l7 access request count metric counted by the operating system type dimension.</li>.
<li> l7Flow_request_ua: l7 access request count metric counted by the User-Agent dimension.</li>.
                     * @return MetricName Queried metric. valid values:.
<li> l7Flow_outFlux_country: specifies the l7 EdgeOne response traffic metric counted by the country/region dimension.</li>.
<li> l7Flow_outFlux_province: specifies the l7 EdgeOne response traffic metric counted by the dimension of provinces in chinese mainland.</li>.
<li> l7Flow_outFlux_statusCode: specifies the l7 EdgeOne response traffic metric by status code dimension.</li>.
<li> l7Flow_outFlux_domain: specifies the l7 EdgeOne response traffic metric counted by domain name dimension.</li>.
<li>l7Flow_outFlux_url: specifies the l7 EdgeOne response traffic metric counted by url Path dimension.</li>.
<li> l7Flow_outFlux_resourceType: specifies the l7 EdgeOne response traffic metric counted by resource type dimension.</li>.
<li> l7Flow_outFlux_sip: specifies the l7 EdgeOne response traffic metric counted by the client IP dimension.</li>.
<li>l7Flow_outFlux_referers: specifies the l7 EdgeOne response traffic statistics by Referer dimension.</li>.
<li> l7Flow_outFlux_ua_device: specifies the l7 EdgeOne response traffic metric counted by device type dimension.</li>.
<li> l7Flow_outFlux_ua_browser: specifies the l7 EdgeOne response traffic metric by browser type dimension.</li>.
<li> l7Flow_outFlux_ua_os: specifies the l7 EdgeOne response traffic metric counted by the operating system type dimension.</li>.
<li> l7Flow_outFlux_ua: specifies the l7 EdgeOne response traffic metric by User-Agent dimension statistics.</li>.
<li> l7Flow_request_country: specifies the l7 access request count metric by country/region dimension.</li>.
<li> l7Flow_request_province: specifies the l7 access request count metric by province in the chinese mainland.</li>.
<li> l7Flow_request_statusCode: specifies the l7 access request count metric by status code dimension.</li>.
<li> l7Flow_request_domain: specifies the l7 access request count metric counted by the domain name dimension.</li>.
<li> l7Flow_request_url: specifies the l7 access request count metric counted by url Path dimension. </li>.
<li> l7Flow_request_resourceType: specifies the l7 access request count metric counted by the resource type dimension.</li>.
<li> l7Flow_request_sip: specifies the l7 access request count metric counted by the client IP dimension.</li>.
<li>l7Flow_request_referer: specifies l7 access request count metrics by referer dimension.</li>.
<li> l7Flow_request_ua_device: specifies the l7 access request count metric by device type dimension.</li>.
<li> l7Flow_request_ua_browser: specifies the l7 access request count metric by browser type dimension.</li>.
<li> l7Flow_request_ua_os: specifies the l7 access request count metric counted by the operating system type dimension.</li>.
<li> l7Flow_request_ua: l7 access request count metric counted by the User-Agent dimension.</li>.
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置Queried metric. valid values:.
<li> l7Flow_outFlux_country: specifies the l7 EdgeOne response traffic metric counted by the country/region dimension.</li>.
<li> l7Flow_outFlux_province: specifies the l7 EdgeOne response traffic metric counted by the dimension of provinces in chinese mainland.</li>.
<li> l7Flow_outFlux_statusCode: specifies the l7 EdgeOne response traffic metric by status code dimension.</li>.
<li> l7Flow_outFlux_domain: specifies the l7 EdgeOne response traffic metric counted by domain name dimension.</li>.
<li>l7Flow_outFlux_url: specifies the l7 EdgeOne response traffic metric counted by url Path dimension.</li>.
<li> l7Flow_outFlux_resourceType: specifies the l7 EdgeOne response traffic metric counted by resource type dimension.</li>.
<li> l7Flow_outFlux_sip: specifies the l7 EdgeOne response traffic metric counted by the client IP dimension.</li>.
<li>l7Flow_outFlux_referers: specifies the l7 EdgeOne response traffic statistics by Referer dimension.</li>.
<li> l7Flow_outFlux_ua_device: specifies the l7 EdgeOne response traffic metric counted by device type dimension.</li>.
<li> l7Flow_outFlux_ua_browser: specifies the l7 EdgeOne response traffic metric by browser type dimension.</li>.
<li> l7Flow_outFlux_ua_os: specifies the l7 EdgeOne response traffic metric counted by the operating system type dimension.</li>.
<li> l7Flow_outFlux_ua: specifies the l7 EdgeOne response traffic metric by User-Agent dimension statistics.</li>.
<li> l7Flow_request_country: specifies the l7 access request count metric by country/region dimension.</li>.
<li> l7Flow_request_province: specifies the l7 access request count metric by province in the chinese mainland.</li>.
<li> l7Flow_request_statusCode: specifies the l7 access request count metric by status code dimension.</li>.
<li> l7Flow_request_domain: specifies the l7 access request count metric counted by the domain name dimension.</li>.
<li> l7Flow_request_url: specifies the l7 access request count metric counted by url Path dimension. </li>.
<li> l7Flow_request_resourceType: specifies the l7 access request count metric counted by the resource type dimension.</li>.
<li> l7Flow_request_sip: specifies the l7 access request count metric counted by the client IP dimension.</li>.
<li>l7Flow_request_referer: specifies l7 access request count metrics by referer dimension.</li>.
<li> l7Flow_request_ua_device: specifies the l7 access request count metric by device type dimension.</li>.
<li> l7Flow_request_ua_browser: specifies the l7 access request count metric by browser type dimension.</li>.
<li> l7Flow_request_ua_os: specifies the l7 access request count metric counted by the operating system type dimension.</li>.
<li> l7Flow_request_ua: l7 access request count metric counted by the User-Agent dimension.</li>.
                     * @param _metricName Queried metric. valid values:.
<li> l7Flow_outFlux_country: specifies the l7 EdgeOne response traffic metric counted by the country/region dimension.</li>.
<li> l7Flow_outFlux_province: specifies the l7 EdgeOne response traffic metric counted by the dimension of provinces in chinese mainland.</li>.
<li> l7Flow_outFlux_statusCode: specifies the l7 EdgeOne response traffic metric by status code dimension.</li>.
<li> l7Flow_outFlux_domain: specifies the l7 EdgeOne response traffic metric counted by domain name dimension.</li>.
<li>l7Flow_outFlux_url: specifies the l7 EdgeOne response traffic metric counted by url Path dimension.</li>.
<li> l7Flow_outFlux_resourceType: specifies the l7 EdgeOne response traffic metric counted by resource type dimension.</li>.
<li> l7Flow_outFlux_sip: specifies the l7 EdgeOne response traffic metric counted by the client IP dimension.</li>.
<li>l7Flow_outFlux_referers: specifies the l7 EdgeOne response traffic statistics by Referer dimension.</li>.
<li> l7Flow_outFlux_ua_device: specifies the l7 EdgeOne response traffic metric counted by device type dimension.</li>.
<li> l7Flow_outFlux_ua_browser: specifies the l7 EdgeOne response traffic metric by browser type dimension.</li>.
<li> l7Flow_outFlux_ua_os: specifies the l7 EdgeOne response traffic metric counted by the operating system type dimension.</li>.
<li> l7Flow_outFlux_ua: specifies the l7 EdgeOne response traffic metric by User-Agent dimension statistics.</li>.
<li> l7Flow_request_country: specifies the l7 access request count metric by country/region dimension.</li>.
<li> l7Flow_request_province: specifies the l7 access request count metric by province in the chinese mainland.</li>.
<li> l7Flow_request_statusCode: specifies the l7 access request count metric by status code dimension.</li>.
<li> l7Flow_request_domain: specifies the l7 access request count metric counted by the domain name dimension.</li>.
<li> l7Flow_request_url: specifies the l7 access request count metric counted by url Path dimension. </li>.
<li> l7Flow_request_resourceType: specifies the l7 access request count metric counted by the resource type dimension.</li>.
<li> l7Flow_request_sip: specifies the l7 access request count metric counted by the client IP dimension.</li>.
<li>l7Flow_request_referer: specifies l7 access request count metrics by referer dimension.</li>.
<li> l7Flow_request_ua_device: specifies the l7 access request count metric by device type dimension.</li>.
<li> l7Flow_request_ua_browser: specifies the l7 access request count metric by browser type dimension.</li>.
<li> l7Flow_request_ua_os: specifies the l7 access request count metric counted by the operating system type dimension.</li>.
<li> l7Flow_request_ua: l7 access request count metric counted by the User-Agent dimension.</li>.
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
                     * 获取Site ID list. The parameter will change from optional to mandatory after May 30, 2024.Refer to [Cloud API Change Notification](https://www.tencentcloud.com/document/product/1145/59980).  A maximum of 100 site IDs can be imported. Use `*` to query data for all sites under the Tencent Cloud root account. To query account-level data, you must have resource permissions for all sites in this API.
                     * @return ZoneIds Site ID list. The parameter will change from optional to mandatory after May 30, 2024.Refer to [Cloud API Change Notification](https://www.tencentcloud.com/document/product/1145/59980).  A maximum of 100 site IDs can be imported. Use `*` to query data for all sites under the Tencent Cloud root account. To query account-level data, you must have resource permissions for all sites in this API.
                     * 
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置Site ID list. The parameter will change from optional to mandatory after May 30, 2024.Refer to [Cloud API Change Notification](https://www.tencentcloud.com/document/product/1145/59980).  A maximum of 100 site IDs can be imported. Use `*` to query data for all sites under the Tencent Cloud root account. To query account-level data, you must have resource permissions for all sites in this API.
                     * @param _zoneIds Site ID list. The parameter will change from optional to mandatory after May 30, 2024.Refer to [Cloud API Change Notification](https://www.tencentcloud.com/document/product/1145/59980).  A maximum of 100 site IDs can be imported. Use `*` to query data for all sites under the Tencent Cloud root account. To query account-level data, you must have resource permissions for all sites in this API.
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
                     * 获取Filter criteria used when filtering data. valid values refer to the available filter options for L7 access traffic, bandwidth, and request count in the [metric analysis filtering condition description](https://www.tencentcloud.comom/document/product/1552/98219?from_cn_redirect=1#1aaf1150-55a4-4b4d-b103-3a8317ac7945).
If needed, limit the site or content identifier by importing the corresponding value in the `ZoneIds.N` parameter.
                     * @return Filters Filter criteria used when filtering data. valid values refer to the available filter options for L7 access traffic, bandwidth, and request count in the [metric analysis filtering condition description](https://www.tencentcloud.comom/document/product/1552/98219?from_cn_redirect=1#1aaf1150-55a4-4b4d-b103-3a8317ac7945).
If needed, limit the site or content identifier by importing the corresponding value in the `ZoneIds.N` parameter.
                     * 
                     */
                    std::vector<QueryCondition> GetFilters() const;

                    /**
                     * 设置Filter criteria used when filtering data. valid values refer to the available filter options for L7 access traffic, bandwidth, and request count in the [metric analysis filtering condition description](https://www.tencentcloud.comom/document/product/1552/98219?from_cn_redirect=1#1aaf1150-55a4-4b4d-b103-3a8317ac7945).
If needed, limit the site or content identifier by importing the corresponding value in the `ZoneIds.N` parameter.
                     * @param _filters Filter criteria used when filtering data. valid values refer to the available filter options for L7 access traffic, bandwidth, and request count in the [metric analysis filtering condition description](https://www.tencentcloud.comom/document/product/1552/98219?from_cn_redirect=1#1aaf1150-55a4-4b4d-b103-3a8317ac7945).
If needed, limit the site or content identifier by importing the corresponding value in the `ZoneIds.N` parameter.
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
                     * 获取Query time granularity. this parameter is invalid. to be deprecated.
                     * @return Interval Query time granularity. this parameter is invalid. to be deprecated.
                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置Query time granularity. this parameter is invalid. to be deprecated.
                     * @param _interval Query time granularity. this parameter is invalid. to be deprecated.
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
                     * 获取Data ownership region. this parameter is deprecated. please filter data by client region in `Filters.country`.
                     * @return Area Data ownership region. this parameter is deprecated. please filter data by client region in `Filters.country`.
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Data ownership region. this parameter is deprecated. please filter data by client region in `Filters.country`.
                     * @param _area Data ownership region. this parameter is deprecated. please filter data by client region in `Filters.country`.
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
                     * Queried metric. valid values:.
<li> l7Flow_outFlux_country: specifies the l7 EdgeOne response traffic metric counted by the country/region dimension.</li>.
<li> l7Flow_outFlux_province: specifies the l7 EdgeOne response traffic metric counted by the dimension of provinces in chinese mainland.</li>.
<li> l7Flow_outFlux_statusCode: specifies the l7 EdgeOne response traffic metric by status code dimension.</li>.
<li> l7Flow_outFlux_domain: specifies the l7 EdgeOne response traffic metric counted by domain name dimension.</li>.
<li>l7Flow_outFlux_url: specifies the l7 EdgeOne response traffic metric counted by url Path dimension.</li>.
<li> l7Flow_outFlux_resourceType: specifies the l7 EdgeOne response traffic metric counted by resource type dimension.</li>.
<li> l7Flow_outFlux_sip: specifies the l7 EdgeOne response traffic metric counted by the client IP dimension.</li>.
<li>l7Flow_outFlux_referers: specifies the l7 EdgeOne response traffic statistics by Referer dimension.</li>.
<li> l7Flow_outFlux_ua_device: specifies the l7 EdgeOne response traffic metric counted by device type dimension.</li>.
<li> l7Flow_outFlux_ua_browser: specifies the l7 EdgeOne response traffic metric by browser type dimension.</li>.
<li> l7Flow_outFlux_ua_os: specifies the l7 EdgeOne response traffic metric counted by the operating system type dimension.</li>.
<li> l7Flow_outFlux_ua: specifies the l7 EdgeOne response traffic metric by User-Agent dimension statistics.</li>.
<li> l7Flow_request_country: specifies the l7 access request count metric by country/region dimension.</li>.
<li> l7Flow_request_province: specifies the l7 access request count metric by province in the chinese mainland.</li>.
<li> l7Flow_request_statusCode: specifies the l7 access request count metric by status code dimension.</li>.
<li> l7Flow_request_domain: specifies the l7 access request count metric counted by the domain name dimension.</li>.
<li> l7Flow_request_url: specifies the l7 access request count metric counted by url Path dimension. </li>.
<li> l7Flow_request_resourceType: specifies the l7 access request count metric counted by the resource type dimension.</li>.
<li> l7Flow_request_sip: specifies the l7 access request count metric counted by the client IP dimension.</li>.
<li>l7Flow_request_referer: specifies l7 access request count metrics by referer dimension.</li>.
<li> l7Flow_request_ua_device: specifies the l7 access request count metric by device type dimension.</li>.
<li> l7Flow_request_ua_browser: specifies the l7 access request count metric by browser type dimension.</li>.
<li> l7Flow_request_ua_os: specifies the l7 access request count metric counted by the operating system type dimension.</li>.
<li> l7Flow_request_ua: l7 access request count metric counted by the User-Agent dimension.</li>.
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * Site ID list. The parameter will change from optional to mandatory after May 30, 2024.Refer to [Cloud API Change Notification](https://www.tencentcloud.com/document/product/1145/59980).  A maximum of 100 site IDs can be imported. Use `*` to query data for all sites under the Tencent Cloud root account. To query account-level data, you must have resource permissions for all sites in this API.
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * Indicates the top N data to be queried. The maximum value is 1000. If this parameter is not input, the default value is 10, indicating querying the top 10 data.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filter criteria used when filtering data. valid values refer to the available filter options for L7 access traffic, bandwidth, and request count in the [metric analysis filtering condition description](https://www.tencentcloud.comom/document/product/1552/98219?from_cn_redirect=1#1aaf1150-55a4-4b4d-b103-3a8317ac7945).
If needed, limit the site or content identifier by importing the corresponding value in the `ZoneIds.N` parameter.
                     */
                    std::vector<QueryCondition> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Query time granularity. this parameter is invalid. to be deprecated.
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * Data ownership region. this parameter is deprecated. please filter data by client region in `Filters.country`.
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBETOPL7ANALYSISDATAREQUEST_H_
