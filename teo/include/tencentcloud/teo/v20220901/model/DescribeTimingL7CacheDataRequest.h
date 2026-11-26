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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBETIMINGL7CACHEDATAREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBETIMINGL7CACHEDATAREQUEST_H_

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
                * DescribeTimingL7CacheData request structure.
                */
                class DescribeTimingL7CacheDataRequest : public AbstractModel
                {
                public:
                    DescribeTimingL7CacheDataRequest();
                    ~DescribeTimingL7CacheDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start time.
                     * @return StartTime Start time.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time.
                     * @param _startTime Start time.
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
                     * 获取End time.
                     * @return EndTime End time.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time.
                     * @param _endTime End time.
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
<li>l7Cache_outFlux: response traffic;</li>
<li>l7Cache_request: number of response requests;</li>
<li> l7Cache_outBandwidth: response bandwidth.</li>
                     * @return MetricNames Queried metric. Valid values:
<li>l7Cache_outFlux: response traffic;</li>
<li>l7Cache_request: number of response requests;</li>
<li> l7Cache_outBandwidth: response bandwidth.</li>
                     * 
                     */
                    std::vector<std::string> GetMetricNames() const;

                    /**
                     * 设置Queried metric. Valid values:
<li>l7Cache_outFlux: response traffic;</li>
<li>l7Cache_request: number of response requests;</li>
<li> l7Cache_outBandwidth: response bandwidth.</li>
                     * @param _metricNames Queried metric. Valid values:
<li>l7Cache_outFlux: response traffic;</li>
<li>l7Cache_request: number of response requests;</li>
<li> l7Cache_outBandwidth: response bandwidth.</li>
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
                     * 获取Site ID set. This parameter is required.
                     * @return ZoneIds Site ID set. This parameter is required.
                     * 
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置Site ID set. This parameter is required.
                     * @param _zoneIds Site ID set. This parameter is required.
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
                     * 获取Filter criteria. The detailed filter criteria are as follows:
<li>domain<br>   Filter by [<strong>subdomain</strong>]. The subdomain format is test.example.com.<br>   Type: String<br>   Required: No</li>
<li>url<br>   Filter by <strong>URL</strong>. This parameter supports only a 30-day time range. The URL format is /content.<br>   Type: String<br>   Required: No</li>
<li>resourceType<br>        Filter by [<strong>resource type</strong>]. This parameter supports only a 30-day time range. Resource types include jpg and png.<br>        Type: String<br>        Required: No</li>
<li>cacheType<br>        Filter by <strong>cache type</strong>.<br>        Type: String<br>        Required: No<br>        Options:<br>        hit: cache hit;<br>        dynamic: non-cacheable resource;<br>        miss: cache miss.</li>
<li>statusCode<br>   Filter by <strong>status code</strong>. This parameter supports only a 30-day time range.<br>   Type: String<br>   Required: No<br>   Options:<br>   1XX: 1xx status codes;<br>   100: 100 status code;<br>   101: 101 status code;<br>   102: 102 status code;<br>   2XX: 2xx status codes;<br>   200: 200 status code;<br>   201: 201 status code;<br>   202: 202 status code;<br>   203: 203 status code;<br>   204: 204 status code;<br>   100: 100 status code;<br>   206: 206 status code;<br>   207: 207 status code;<br>   3XX: 3xx status codes;<br>   300: 300 status code;<br>   301: 301 status code;<br>   302: 302 status code;<br>   303: 303 status code;<br>   304: 304 status code;<br>   305: 305 status code;<br>   307: 307 status code;<br>   4XX: 4xx status codes;<br>   400: 400 status code;<br>   401: 401 status code;<br>   402: 402 status code;<br>   403: 403 status code;<br>   404: 404 status code;<br>   405: 405 status code;<br>   406: 406 status code;<br>   407: 407 status code;<br>   408: 408 status code;<br>   409: 409 status code;<br>   410: 410 status code;<br>   411: 411 status code;<br>   412: 412 status code;<br>   412: 413 status code;<br>   414: 414 status code;<br>   415: 415 status code;<br>   416: 416 status code;<br>   417: 417 status code;<br>   422: 422 status code;<br>   423: 423 status code;<br>   424: 424 status code;<br>   426: 426 status code;<br>   451: 451 status code;<br>   5XX: 5xx status codes;<br>   500: 500 status code;<br>   501: 501 status code;<br>   502: 502 status code;<br>   503: 503 status code;<br>   504: 504 status code;<br>   505: 505 status code;<br>   506: 506 status code;<br>   507: 507 status code;<br>   510: 510 status code;<br>   514: 514 status code;<br>   544: 544 status code.</li>
<li>tagKey<br>   Filter by [<strong>tag key</strong>].<br>   Type: String<br>   Required: No</li>
<li>tagValue<br>?? Filter by [<strong>tag value</strong>].<br>?? Type: String<br>?? Required: No</li>
                     * @return Filters Filter criteria. The detailed filter criteria are as follows:
<li>domain<br>   Filter by [<strong>subdomain</strong>]. The subdomain format is test.example.com.<br>   Type: String<br>   Required: No</li>
<li>url<br>   Filter by <strong>URL</strong>. This parameter supports only a 30-day time range. The URL format is /content.<br>   Type: String<br>   Required: No</li>
<li>resourceType<br>        Filter by [<strong>resource type</strong>]. This parameter supports only a 30-day time range. Resource types include jpg and png.<br>        Type: String<br>        Required: No</li>
<li>cacheType<br>        Filter by <strong>cache type</strong>.<br>        Type: String<br>        Required: No<br>        Options:<br>        hit: cache hit;<br>        dynamic: non-cacheable resource;<br>        miss: cache miss.</li>
<li>statusCode<br>   Filter by <strong>status code</strong>. This parameter supports only a 30-day time range.<br>   Type: String<br>   Required: No<br>   Options:<br>   1XX: 1xx status codes;<br>   100: 100 status code;<br>   101: 101 status code;<br>   102: 102 status code;<br>   2XX: 2xx status codes;<br>   200: 200 status code;<br>   201: 201 status code;<br>   202: 202 status code;<br>   203: 203 status code;<br>   204: 204 status code;<br>   100: 100 status code;<br>   206: 206 status code;<br>   207: 207 status code;<br>   3XX: 3xx status codes;<br>   300: 300 status code;<br>   301: 301 status code;<br>   302: 302 status code;<br>   303: 303 status code;<br>   304: 304 status code;<br>   305: 305 status code;<br>   307: 307 status code;<br>   4XX: 4xx status codes;<br>   400: 400 status code;<br>   401: 401 status code;<br>   402: 402 status code;<br>   403: 403 status code;<br>   404: 404 status code;<br>   405: 405 status code;<br>   406: 406 status code;<br>   407: 407 status code;<br>   408: 408 status code;<br>   409: 409 status code;<br>   410: 410 status code;<br>   411: 411 status code;<br>   412: 412 status code;<br>   412: 413 status code;<br>   414: 414 status code;<br>   415: 415 status code;<br>   416: 416 status code;<br>   417: 417 status code;<br>   422: 422 status code;<br>   423: 423 status code;<br>   424: 424 status code;<br>   426: 426 status code;<br>   451: 451 status code;<br>   5XX: 5xx status codes;<br>   500: 500 status code;<br>   501: 501 status code;<br>   502: 502 status code;<br>   503: 503 status code;<br>   504: 504 status code;<br>   505: 505 status code;<br>   506: 506 status code;<br>   507: 507 status code;<br>   510: 510 status code;<br>   514: 514 status code;<br>   544: 544 status code.</li>
<li>tagKey<br>   Filter by [<strong>tag key</strong>].<br>   Type: String<br>   Required: No</li>
<li>tagValue<br>?? Filter by [<strong>tag value</strong>].<br>?? Type: String<br>?? Required: No</li>
                     * 
                     */
                    std::vector<QueryCondition> GetFilters() const;

                    /**
                     * 设置Filter criteria. The detailed filter criteria are as follows:
<li>domain<br>   Filter by [<strong>subdomain</strong>]. The subdomain format is test.example.com.<br>   Type: String<br>   Required: No</li>
<li>url<br>   Filter by <strong>URL</strong>. This parameter supports only a 30-day time range. The URL format is /content.<br>   Type: String<br>   Required: No</li>
<li>resourceType<br>        Filter by [<strong>resource type</strong>]. This parameter supports only a 30-day time range. Resource types include jpg and png.<br>        Type: String<br>        Required: No</li>
<li>cacheType<br>        Filter by <strong>cache type</strong>.<br>        Type: String<br>        Required: No<br>        Options:<br>        hit: cache hit;<br>        dynamic: non-cacheable resource;<br>        miss: cache miss.</li>
<li>statusCode<br>   Filter by <strong>status code</strong>. This parameter supports only a 30-day time range.<br>   Type: String<br>   Required: No<br>   Options:<br>   1XX: 1xx status codes;<br>   100: 100 status code;<br>   101: 101 status code;<br>   102: 102 status code;<br>   2XX: 2xx status codes;<br>   200: 200 status code;<br>   201: 201 status code;<br>   202: 202 status code;<br>   203: 203 status code;<br>   204: 204 status code;<br>   100: 100 status code;<br>   206: 206 status code;<br>   207: 207 status code;<br>   3XX: 3xx status codes;<br>   300: 300 status code;<br>   301: 301 status code;<br>   302: 302 status code;<br>   303: 303 status code;<br>   304: 304 status code;<br>   305: 305 status code;<br>   307: 307 status code;<br>   4XX: 4xx status codes;<br>   400: 400 status code;<br>   401: 401 status code;<br>   402: 402 status code;<br>   403: 403 status code;<br>   404: 404 status code;<br>   405: 405 status code;<br>   406: 406 status code;<br>   407: 407 status code;<br>   408: 408 status code;<br>   409: 409 status code;<br>   410: 410 status code;<br>   411: 411 status code;<br>   412: 412 status code;<br>   412: 413 status code;<br>   414: 414 status code;<br>   415: 415 status code;<br>   416: 416 status code;<br>   417: 417 status code;<br>   422: 422 status code;<br>   423: 423 status code;<br>   424: 424 status code;<br>   426: 426 status code;<br>   451: 451 status code;<br>   5XX: 5xx status codes;<br>   500: 500 status code;<br>   501: 501 status code;<br>   502: 502 status code;<br>   503: 503 status code;<br>   504: 504 status code;<br>   505: 505 status code;<br>   506: 506 status code;<br>   507: 507 status code;<br>   510: 510 status code;<br>   514: 514 status code;<br>   544: 544 status code.</li>
<li>tagKey<br>   Filter by [<strong>tag key</strong>].<br>   Type: String<br>   Required: No</li>
<li>tagValue<br>?? Filter by [<strong>tag value</strong>].<br>?? Type: String<br>?? Required: No</li>
                     * @param _filters Filter criteria. The detailed filter criteria are as follows:
<li>domain<br>   Filter by [<strong>subdomain</strong>]. The subdomain format is test.example.com.<br>   Type: String<br>   Required: No</li>
<li>url<br>   Filter by <strong>URL</strong>. This parameter supports only a 30-day time range. The URL format is /content.<br>   Type: String<br>   Required: No</li>
<li>resourceType<br>        Filter by [<strong>resource type</strong>]. This parameter supports only a 30-day time range. Resource types include jpg and png.<br>        Type: String<br>        Required: No</li>
<li>cacheType<br>        Filter by <strong>cache type</strong>.<br>        Type: String<br>        Required: No<br>        Options:<br>        hit: cache hit;<br>        dynamic: non-cacheable resource;<br>        miss: cache miss.</li>
<li>statusCode<br>   Filter by <strong>status code</strong>. This parameter supports only a 30-day time range.<br>   Type: String<br>   Required: No<br>   Options:<br>   1XX: 1xx status codes;<br>   100: 100 status code;<br>   101: 101 status code;<br>   102: 102 status code;<br>   2XX: 2xx status codes;<br>   200: 200 status code;<br>   201: 201 status code;<br>   202: 202 status code;<br>   203: 203 status code;<br>   204: 204 status code;<br>   100: 100 status code;<br>   206: 206 status code;<br>   207: 207 status code;<br>   3XX: 3xx status codes;<br>   300: 300 status code;<br>   301: 301 status code;<br>   302: 302 status code;<br>   303: 303 status code;<br>   304: 304 status code;<br>   305: 305 status code;<br>   307: 307 status code;<br>   4XX: 4xx status codes;<br>   400: 400 status code;<br>   401: 401 status code;<br>   402: 402 status code;<br>   403: 403 status code;<br>   404: 404 status code;<br>   405: 405 status code;<br>   406: 406 status code;<br>   407: 407 status code;<br>   408: 408 status code;<br>   409: 409 status code;<br>   410: 410 status code;<br>   411: 411 status code;<br>   412: 412 status code;<br>   412: 413 status code;<br>   414: 414 status code;<br>   415: 415 status code;<br>   416: 416 status code;<br>   417: 417 status code;<br>   422: 422 status code;<br>   423: 423 status code;<br>   424: 424 status code;<br>   426: 426 status code;<br>   451: 451 status code;<br>   5XX: 5xx status codes;<br>   500: 500 status code;<br>   501: 501 status code;<br>   502: 502 status code;<br>   503: 503 status code;<br>   504: 504 status code;<br>   505: 505 status code;<br>   506: 506 status code;<br>   507: 507 status code;<br>   510: 510 status code;<br>   514: 514 status code;<br>   544: 544 status code.</li>
<li>tagKey<br>   Filter by [<strong>tag key</strong>].<br>   Type: String<br>   Required: No</li>
<li>tagValue<br>?? Filter by [<strong>tag value</strong>].<br>?? Type: String<br>?? Required: No</li>
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
                     * 获取Time granularity of the query. Optional values:
<li>min: 1-minute time granularity;</li>
<li>5min: 5-minute time granularity;</li>
<li>hour: 1-hour time granularity;</li>
<li>day: 1-day time granularity.</li>If this parameter is not input, the granularity will be automatically calculated based on the interval between the start time and end time. Specifically, data will be queried with a granularity of min, 5min, hour, and day respectively when the period is no more than 1 hour, no more than 2 days, no more than 7 days, and over 7 days.
                     * @return Interval Time granularity of the query. Optional values:
<li>min: 1-minute time granularity;</li>
<li>5min: 5-minute time granularity;</li>
<li>hour: 1-hour time granularity;</li>
<li>day: 1-day time granularity.</li>If this parameter is not input, the granularity will be automatically calculated based on the interval between the start time and end time. Specifically, data will be queried with a granularity of min, 5min, hour, and day respectively when the period is no more than 1 hour, no more than 2 days, no more than 7 days, and over 7 days.
                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置Time granularity of the query. Optional values:
<li>min: 1-minute time granularity;</li>
<li>5min: 5-minute time granularity;</li>
<li>hour: 1-hour time granularity;</li>
<li>day: 1-day time granularity.</li>If this parameter is not input, the granularity will be automatically calculated based on the interval between the start time and end time. Specifically, data will be queried with a granularity of min, 5min, hour, and day respectively when the period is no more than 1 hour, no more than 2 days, no more than 7 days, and over 7 days.
                     * @param _interval Time granularity of the query. Optional values:
<li>min: 1-minute time granularity;</li>
<li>5min: 5-minute time granularity;</li>
<li>hour: 1-hour time granularity;</li>
<li>day: 1-day time granularity.</li>If this parameter is not input, the granularity will be automatically calculated based on the interval between the start time and end time. Specifically, data will be queried with a granularity of min, 5min, hour, and day respectively when the period is no more than 1 hour, no more than 2 days, no more than 7 days, and over 7 days.
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
                     * 获取Data ownership region. Valid values:
<li>overseas: global (excluding the Chinese mainland) data;</li>
<li>mainland: Chinese mainland data;</li>
<li>global: global data.</li>If this parameter is not input, the default value `global` is used.
                     * @return Area Data ownership region. Valid values:
<li>overseas: global (excluding the Chinese mainland) data;</li>
<li>mainland: Chinese mainland data;</li>
<li>global: global data.</li>If this parameter is not input, the default value `global` is used.
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Data ownership region. Valid values:
<li>overseas: global (excluding the Chinese mainland) data;</li>
<li>mainland: Chinese mainland data;</li>
<li>global: global data.</li>If this parameter is not input, the default value `global` is used.
                     * @param _area Data ownership region. Valid values:
<li>overseas: global (excluding the Chinese mainland) data;</li>
<li>mainland: Chinese mainland data;</li>
<li>global: global data.</li>If this parameter is not input, the default value `global` is used.
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
                     * Start time.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Queried metric. Valid values:
<li>l7Cache_outFlux: response traffic;</li>
<li>l7Cache_request: number of response requests;</li>
<li> l7Cache_outBandwidth: response bandwidth.</li>
                     */
                    std::vector<std::string> m_metricNames;
                    bool m_metricNamesHasBeenSet;

                    /**
                     * Site ID set. This parameter is required.
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * Filter criteria. The detailed filter criteria are as follows:
<li>domain<br>   Filter by [<strong>subdomain</strong>]. The subdomain format is test.example.com.<br>   Type: String<br>   Required: No</li>
<li>url<br>   Filter by <strong>URL</strong>. This parameter supports only a 30-day time range. The URL format is /content.<br>   Type: String<br>   Required: No</li>
<li>resourceType<br>        Filter by [<strong>resource type</strong>]. This parameter supports only a 30-day time range. Resource types include jpg and png.<br>        Type: String<br>        Required: No</li>
<li>cacheType<br>        Filter by <strong>cache type</strong>.<br>        Type: String<br>        Required: No<br>        Options:<br>        hit: cache hit;<br>        dynamic: non-cacheable resource;<br>        miss: cache miss.</li>
<li>statusCode<br>   Filter by <strong>status code</strong>. This parameter supports only a 30-day time range.<br>   Type: String<br>   Required: No<br>   Options:<br>   1XX: 1xx status codes;<br>   100: 100 status code;<br>   101: 101 status code;<br>   102: 102 status code;<br>   2XX: 2xx status codes;<br>   200: 200 status code;<br>   201: 201 status code;<br>   202: 202 status code;<br>   203: 203 status code;<br>   204: 204 status code;<br>   100: 100 status code;<br>   206: 206 status code;<br>   207: 207 status code;<br>   3XX: 3xx status codes;<br>   300: 300 status code;<br>   301: 301 status code;<br>   302: 302 status code;<br>   303: 303 status code;<br>   304: 304 status code;<br>   305: 305 status code;<br>   307: 307 status code;<br>   4XX: 4xx status codes;<br>   400: 400 status code;<br>   401: 401 status code;<br>   402: 402 status code;<br>   403: 403 status code;<br>   404: 404 status code;<br>   405: 405 status code;<br>   406: 406 status code;<br>   407: 407 status code;<br>   408: 408 status code;<br>   409: 409 status code;<br>   410: 410 status code;<br>   411: 411 status code;<br>   412: 412 status code;<br>   412: 413 status code;<br>   414: 414 status code;<br>   415: 415 status code;<br>   416: 416 status code;<br>   417: 417 status code;<br>   422: 422 status code;<br>   423: 423 status code;<br>   424: 424 status code;<br>   426: 426 status code;<br>   451: 451 status code;<br>   5XX: 5xx status codes;<br>   500: 500 status code;<br>   501: 501 status code;<br>   502: 502 status code;<br>   503: 503 status code;<br>   504: 504 status code;<br>   505: 505 status code;<br>   506: 506 status code;<br>   507: 507 status code;<br>   510: 510 status code;<br>   514: 514 status code;<br>   544: 544 status code.</li>
<li>tagKey<br>   Filter by [<strong>tag key</strong>].<br>   Type: String<br>   Required: No</li>
<li>tagValue<br>?? Filter by [<strong>tag value</strong>].<br>?? Type: String<br>?? Required: No</li>
                     */
                    std::vector<QueryCondition> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Time granularity of the query. Optional values:
<li>min: 1-minute time granularity;</li>
<li>5min: 5-minute time granularity;</li>
<li>hour: 1-hour time granularity;</li>
<li>day: 1-day time granularity.</li>If this parameter is not input, the granularity will be automatically calculated based on the interval between the start time and end time. Specifically, data will be queried with a granularity of min, 5min, hour, and day respectively when the period is no more than 1 hour, no more than 2 days, no more than 7 days, and over 7 days.
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * Data ownership region. Valid values:
<li>overseas: global (excluding the Chinese mainland) data;</li>
<li>mainland: Chinese mainland data;</li>
<li>global: global data.</li>If this parameter is not input, the default value `global` is used.
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBETIMINGL7CACHEDATAREQUEST_H_
