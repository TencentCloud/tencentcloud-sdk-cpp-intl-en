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
                     * 获取The end time.
                     * @return EndTime The end time.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置The end time.
                     * @param _endTime The end time.
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
                     * 获取The query metric. Values:
<li>`l7Cache_outFlux`: Response traffic.</li>
<li>`l7Cache_request`: Response requests.</li>
<li>`l7Cache_outBandwidth`: Response bandwidth.</li>
                     * @return MetricNames The query metric. Values:
<li>`l7Cache_outFlux`: Response traffic.</li>
<li>`l7Cache_request`: Response requests.</li>
<li>`l7Cache_outBandwidth`: Response bandwidth.</li>
                     * 
                     */
                    std::vector<std::string> GetMetricNames() const;

                    /**
                     * 设置The query metric. Values:
<li>`l7Cache_outFlux`: Response traffic.</li>
<li>`l7Cache_request`: Response requests.</li>
<li>`l7Cache_outBandwidth`: Response bandwidth.</li>
                     * @param _metricNames The query metric. Values:
<li>`l7Cache_outFlux`: Response traffic.</li>
<li>`l7Cache_request`: Response requests.</li>
<li>`l7Cache_outBandwidth`: Response bandwidth.</li>
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
                     * 获取ZoneId set. This parameter is required.
                     * @return ZoneIds ZoneId set. This parameter is required.
                     * 
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置ZoneId set. This parameter is required.
                     * @param _zoneIds ZoneId set. This parameter is required.
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
                     * 获取Filter conditions. See below for details: 
<li>`domain`<br>   Filter by the <strong>sub-domain name</strong>, such as `test.example.com`<br>   Type: String<br>   Required: No</li>
<li>`url`<br>   Filter by the <strong>URL</strong>, such as `/content`. The query period cannot exceed 30 days. <br>   Type: String<br>   Required: No</li>
<li>`resourceType`<br>   Filter by the <strong>resource file type</strong>, such as `jpg`, `png`. The query period cannot exceed 30 days.<br>  Type: String<br>   Required: No</li>
<li>cacheType<br>  Filter by the <strong>cache hit result</strong>.<br> Type: String<br>   Required: No<br>   Values: <br>   `hit`: Cache hit; <br>   `dynamic`: Resource non-cacheable; <br>   `miss`: Cache miss</li>
<li>`statusCode`<br>   Filter by the <strong> status code</strong>. The query period  cannot exceed 30 days. <br>   Type: String<br>   Required: No<br>   Values: <br>   `1XX`: All 1xx status codes;<br>   `100`: 100 status code;<br>   `101`: 101 status code;<br>   `102`: 102 status code;<br>   `2XX`: All 2xx status codes;<br>   `200`: 200 status code;<br>   `201`: 201 status code;<br>   `202`: 202 status code;<br>   `203`: 203 status code;<br>   `204`: 204 status code;<br>   `205`: 205 status code;<br>   `206`: 206 status code;<br>   `207`: 207 status code;<br>   `3XX`: All 3xx status codes;<br>   `300`: 300 status code;<br>   `301`: 301 status code;<br>   `302`: 302 status code;<br>   `303`: 303 status code;<br>   `304`: 304 status code;<br>   `305`: 305 status code;<br>   `307`: 307 status code;<br>   `4XX`: All 4xx status codes;<br>   `400`: 400 status code;<br>   `401`: 401 status code;<br>   `402`: 402 status code;<br>   `403`: 403 status code;<br>   `404`: 404 status code;<br>   `405`: 405 status code;<br>   `406`: 406 status code;<br>   `407`: 407 status code;<br>   `408`: 408 status code;<br>   `409`: 409 status code;<br>   `410`: 410 status code;<br>   `411`: 411 status code;<br>   `412`: 412 status code;<br>   `412`: 413 status code;<br>   `414`: 414 status code;<br>   `415`: 415 status code;<br>   `416`: 416 status code;<br>   `417`: 417 status code;<br>  `422`: 422 status code;<br>   `423`: 423 status code;<br>   `424`: 424 status code;<br>   `426`: 426 status code;<br>   `451`: 451 status code;<br>   `5XX`: All 5xx status codes;<br>   `500`: 500 status code;<br>   `501`: 501 status code;<br>   `502`: 502 status code;<br>   `503`: 503 status code;<br>   `504`: 504 status code;<br>   `505`: 505 status code;<br>   `506`: 506 status code;<br>   `507`: 507 status code;<br>   `510`: 510 status code;<br>   `514`: 514 status code;<br>   `544`: 544 status code.</li>
<li>`tagKey`:<br>   Filter by the <strong>tag key</strong><br>   Type: String<br>   Required: No</li>
<li>`tagValue`<br>   Filter by the <strong>tag value</strong><br>   Type: String<br>   Required: No</li>
                     * @return Filters Filter conditions. See below for details: 
<li>`domain`<br>   Filter by the <strong>sub-domain name</strong>, such as `test.example.com`<br>   Type: String<br>   Required: No</li>
<li>`url`<br>   Filter by the <strong>URL</strong>, such as `/content`. The query period cannot exceed 30 days. <br>   Type: String<br>   Required: No</li>
<li>`resourceType`<br>   Filter by the <strong>resource file type</strong>, such as `jpg`, `png`. The query period cannot exceed 30 days.<br>  Type: String<br>   Required: No</li>
<li>cacheType<br>  Filter by the <strong>cache hit result</strong>.<br> Type: String<br>   Required: No<br>   Values: <br>   `hit`: Cache hit; <br>   `dynamic`: Resource non-cacheable; <br>   `miss`: Cache miss</li>
<li>`statusCode`<br>   Filter by the <strong> status code</strong>. The query period  cannot exceed 30 days. <br>   Type: String<br>   Required: No<br>   Values: <br>   `1XX`: All 1xx status codes;<br>   `100`: 100 status code;<br>   `101`: 101 status code;<br>   `102`: 102 status code;<br>   `2XX`: All 2xx status codes;<br>   `200`: 200 status code;<br>   `201`: 201 status code;<br>   `202`: 202 status code;<br>   `203`: 203 status code;<br>   `204`: 204 status code;<br>   `205`: 205 status code;<br>   `206`: 206 status code;<br>   `207`: 207 status code;<br>   `3XX`: All 3xx status codes;<br>   `300`: 300 status code;<br>   `301`: 301 status code;<br>   `302`: 302 status code;<br>   `303`: 303 status code;<br>   `304`: 304 status code;<br>   `305`: 305 status code;<br>   `307`: 307 status code;<br>   `4XX`: All 4xx status codes;<br>   `400`: 400 status code;<br>   `401`: 401 status code;<br>   `402`: 402 status code;<br>   `403`: 403 status code;<br>   `404`: 404 status code;<br>   `405`: 405 status code;<br>   `406`: 406 status code;<br>   `407`: 407 status code;<br>   `408`: 408 status code;<br>   `409`: 409 status code;<br>   `410`: 410 status code;<br>   `411`: 411 status code;<br>   `412`: 412 status code;<br>   `412`: 413 status code;<br>   `414`: 414 status code;<br>   `415`: 415 status code;<br>   `416`: 416 status code;<br>   `417`: 417 status code;<br>  `422`: 422 status code;<br>   `423`: 423 status code;<br>   `424`: 424 status code;<br>   `426`: 426 status code;<br>   `451`: 451 status code;<br>   `5XX`: All 5xx status codes;<br>   `500`: 500 status code;<br>   `501`: 501 status code;<br>   `502`: 502 status code;<br>   `503`: 503 status code;<br>   `504`: 504 status code;<br>   `505`: 505 status code;<br>   `506`: 506 status code;<br>   `507`: 507 status code;<br>   `510`: 510 status code;<br>   `514`: 514 status code;<br>   `544`: 544 status code.</li>
<li>`tagKey`:<br>   Filter by the <strong>tag key</strong><br>   Type: String<br>   Required: No</li>
<li>`tagValue`<br>   Filter by the <strong>tag value</strong><br>   Type: String<br>   Required: No</li>
                     * 
                     */
                    std::vector<QueryCondition> GetFilters() const;

                    /**
                     * 设置Filter conditions. See below for details: 
<li>`domain`<br>   Filter by the <strong>sub-domain name</strong>, such as `test.example.com`<br>   Type: String<br>   Required: No</li>
<li>`url`<br>   Filter by the <strong>URL</strong>, such as `/content`. The query period cannot exceed 30 days. <br>   Type: String<br>   Required: No</li>
<li>`resourceType`<br>   Filter by the <strong>resource file type</strong>, such as `jpg`, `png`. The query period cannot exceed 30 days.<br>  Type: String<br>   Required: No</li>
<li>cacheType<br>  Filter by the <strong>cache hit result</strong>.<br> Type: String<br>   Required: No<br>   Values: <br>   `hit`: Cache hit; <br>   `dynamic`: Resource non-cacheable; <br>   `miss`: Cache miss</li>
<li>`statusCode`<br>   Filter by the <strong> status code</strong>. The query period  cannot exceed 30 days. <br>   Type: String<br>   Required: No<br>   Values: <br>   `1XX`: All 1xx status codes;<br>   `100`: 100 status code;<br>   `101`: 101 status code;<br>   `102`: 102 status code;<br>   `2XX`: All 2xx status codes;<br>   `200`: 200 status code;<br>   `201`: 201 status code;<br>   `202`: 202 status code;<br>   `203`: 203 status code;<br>   `204`: 204 status code;<br>   `205`: 205 status code;<br>   `206`: 206 status code;<br>   `207`: 207 status code;<br>   `3XX`: All 3xx status codes;<br>   `300`: 300 status code;<br>   `301`: 301 status code;<br>   `302`: 302 status code;<br>   `303`: 303 status code;<br>   `304`: 304 status code;<br>   `305`: 305 status code;<br>   `307`: 307 status code;<br>   `4XX`: All 4xx status codes;<br>   `400`: 400 status code;<br>   `401`: 401 status code;<br>   `402`: 402 status code;<br>   `403`: 403 status code;<br>   `404`: 404 status code;<br>   `405`: 405 status code;<br>   `406`: 406 status code;<br>   `407`: 407 status code;<br>   `408`: 408 status code;<br>   `409`: 409 status code;<br>   `410`: 410 status code;<br>   `411`: 411 status code;<br>   `412`: 412 status code;<br>   `412`: 413 status code;<br>   `414`: 414 status code;<br>   `415`: 415 status code;<br>   `416`: 416 status code;<br>   `417`: 417 status code;<br>  `422`: 422 status code;<br>   `423`: 423 status code;<br>   `424`: 424 status code;<br>   `426`: 426 status code;<br>   `451`: 451 status code;<br>   `5XX`: All 5xx status codes;<br>   `500`: 500 status code;<br>   `501`: 501 status code;<br>   `502`: 502 status code;<br>   `503`: 503 status code;<br>   `504`: 504 status code;<br>   `505`: 505 status code;<br>   `506`: 506 status code;<br>   `507`: 507 status code;<br>   `510`: 510 status code;<br>   `514`: 514 status code;<br>   `544`: 544 status code.</li>
<li>`tagKey`:<br>   Filter by the <strong>tag key</strong><br>   Type: String<br>   Required: No</li>
<li>`tagValue`<br>   Filter by the <strong>tag value</strong><br>   Type: String<br>   Required: No</li>
                     * @param _filters Filter conditions. See below for details: 
<li>`domain`<br>   Filter by the <strong>sub-domain name</strong>, such as `test.example.com`<br>   Type: String<br>   Required: No</li>
<li>`url`<br>   Filter by the <strong>URL</strong>, such as `/content`. The query period cannot exceed 30 days. <br>   Type: String<br>   Required: No</li>
<li>`resourceType`<br>   Filter by the <strong>resource file type</strong>, such as `jpg`, `png`. The query period cannot exceed 30 days.<br>  Type: String<br>   Required: No</li>
<li>cacheType<br>  Filter by the <strong>cache hit result</strong>.<br> Type: String<br>   Required: No<br>   Values: <br>   `hit`: Cache hit; <br>   `dynamic`: Resource non-cacheable; <br>   `miss`: Cache miss</li>
<li>`statusCode`<br>   Filter by the <strong> status code</strong>. The query period  cannot exceed 30 days. <br>   Type: String<br>   Required: No<br>   Values: <br>   `1XX`: All 1xx status codes;<br>   `100`: 100 status code;<br>   `101`: 101 status code;<br>   `102`: 102 status code;<br>   `2XX`: All 2xx status codes;<br>   `200`: 200 status code;<br>   `201`: 201 status code;<br>   `202`: 202 status code;<br>   `203`: 203 status code;<br>   `204`: 204 status code;<br>   `205`: 205 status code;<br>   `206`: 206 status code;<br>   `207`: 207 status code;<br>   `3XX`: All 3xx status codes;<br>   `300`: 300 status code;<br>   `301`: 301 status code;<br>   `302`: 302 status code;<br>   `303`: 303 status code;<br>   `304`: 304 status code;<br>   `305`: 305 status code;<br>   `307`: 307 status code;<br>   `4XX`: All 4xx status codes;<br>   `400`: 400 status code;<br>   `401`: 401 status code;<br>   `402`: 402 status code;<br>   `403`: 403 status code;<br>   `404`: 404 status code;<br>   `405`: 405 status code;<br>   `406`: 406 status code;<br>   `407`: 407 status code;<br>   `408`: 408 status code;<br>   `409`: 409 status code;<br>   `410`: 410 status code;<br>   `411`: 411 status code;<br>   `412`: 412 status code;<br>   `412`: 413 status code;<br>   `414`: 414 status code;<br>   `415`: 415 status code;<br>   `416`: 416 status code;<br>   `417`: 417 status code;<br>  `422`: 422 status code;<br>   `423`: 423 status code;<br>   `424`: 424 status code;<br>   `426`: 426 status code;<br>   `451`: 451 status code;<br>   `5XX`: All 5xx status codes;<br>   `500`: 500 status code;<br>   `501`: 501 status code;<br>   `502`: 502 status code;<br>   `503`: 503 status code;<br>   `504`: 504 status code;<br>   `505`: 505 status code;<br>   `506`: 506 status code;<br>   `507`: 507 status code;<br>   `510`: 510 status code;<br>   `514`: 514 status code;<br>   `544`: 544 status code.</li>
<li>`tagKey`:<br>   Filter by the <strong>tag key</strong><br>   Type: String<br>   Required: No</li>
<li>`tagValue`<br>   Filter by the <strong>tag value</strong><br>   Type: String<br>   Required: No</li>
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
                     * 获取The query time granularity. Values:
<li>`min`: 1 minute;</li>
<li>`5min`: 5 minutes;</li>
<li>`hour`: 1 hour;</li>
<li>`day`: 1 day.</li>If this field is not specified, the granularity will be determined based on the interval between the start time and end time as follows: 1-minute granularity applies for a 1-hour interval, 5-minute granularity for a 2-day interval, 1-hour granularity for a 7-day interval, and 1-day granularity for an interval of over 7 days.
                     * @return Interval The query time granularity. Values:
<li>`min`: 1 minute;</li>
<li>`5min`: 5 minutes;</li>
<li>`hour`: 1 hour;</li>
<li>`day`: 1 day.</li>If this field is not specified, the granularity will be determined based on the interval between the start time and end time as follows: 1-minute granularity applies for a 1-hour interval, 5-minute granularity for a 2-day interval, 1-hour granularity for a 7-day interval, and 1-day granularity for an interval of over 7 days.
                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置The query time granularity. Values:
<li>`min`: 1 minute;</li>
<li>`5min`: 5 minutes;</li>
<li>`hour`: 1 hour;</li>
<li>`day`: 1 day.</li>If this field is not specified, the granularity will be determined based on the interval between the start time and end time as follows: 1-minute granularity applies for a 1-hour interval, 5-minute granularity for a 2-day interval, 1-hour granularity for a 7-day interval, and 1-day granularity for an interval of over 7 days.
                     * @param _interval The query time granularity. Values:
<li>`min`: 1 minute;</li>
<li>`5min`: 5 minutes;</li>
<li>`hour`: 1 hour;</li>
<li>`day`: 1 day.</li>If this field is not specified, the granularity will be determined based on the interval between the start time and end time as follows: 1-minute granularity applies for a 1-hour interval, 5-minute granularity for a 2-day interval, 1-hour granularity for a 7-day interval, and 1-day granularity for an interval of over 7 days.
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
                     * 获取Geolocation scope. Values:
<li>`overseas`: Regions outside the Chinese mainland</li>
<li>`mainland`: Chinese mainland</li>
<li>`global`: Global</li>If this field is not specified, the default value `global` is used.
                     * @return Area Geolocation scope. Values:
<li>`overseas`: Regions outside the Chinese mainland</li>
<li>`mainland`: Chinese mainland</li>
<li>`global`: Global</li>If this field is not specified, the default value `global` is used.
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Geolocation scope. Values:
<li>`overseas`: Regions outside the Chinese mainland</li>
<li>`mainland`: Chinese mainland</li>
<li>`global`: Global</li>If this field is not specified, the default value `global` is used.
                     * @param _area Geolocation scope. Values:
<li>`overseas`: Regions outside the Chinese mainland</li>
<li>`mainland`: Chinese mainland</li>
<li>`global`: Global</li>If this field is not specified, the default value `global` is used.
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
                     * The end time.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * The query metric. Values:
<li>`l7Cache_outFlux`: Response traffic.</li>
<li>`l7Cache_request`: Response requests.</li>
<li>`l7Cache_outBandwidth`: Response bandwidth.</li>
                     */
                    std::vector<std::string> m_metricNames;
                    bool m_metricNamesHasBeenSet;

                    /**
                     * ZoneId set. This parameter is required.
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * Filter conditions. See below for details: 
<li>`domain`<br>   Filter by the <strong>sub-domain name</strong>, such as `test.example.com`<br>   Type: String<br>   Required: No</li>
<li>`url`<br>   Filter by the <strong>URL</strong>, such as `/content`. The query period cannot exceed 30 days. <br>   Type: String<br>   Required: No</li>
<li>`resourceType`<br>   Filter by the <strong>resource file type</strong>, such as `jpg`, `png`. The query period cannot exceed 30 days.<br>  Type: String<br>   Required: No</li>
<li>cacheType<br>  Filter by the <strong>cache hit result</strong>.<br> Type: String<br>   Required: No<br>   Values: <br>   `hit`: Cache hit; <br>   `dynamic`: Resource non-cacheable; <br>   `miss`: Cache miss</li>
<li>`statusCode`<br>   Filter by the <strong> status code</strong>. The query period  cannot exceed 30 days. <br>   Type: String<br>   Required: No<br>   Values: <br>   `1XX`: All 1xx status codes;<br>   `100`: 100 status code;<br>   `101`: 101 status code;<br>   `102`: 102 status code;<br>   `2XX`: All 2xx status codes;<br>   `200`: 200 status code;<br>   `201`: 201 status code;<br>   `202`: 202 status code;<br>   `203`: 203 status code;<br>   `204`: 204 status code;<br>   `205`: 205 status code;<br>   `206`: 206 status code;<br>   `207`: 207 status code;<br>   `3XX`: All 3xx status codes;<br>   `300`: 300 status code;<br>   `301`: 301 status code;<br>   `302`: 302 status code;<br>   `303`: 303 status code;<br>   `304`: 304 status code;<br>   `305`: 305 status code;<br>   `307`: 307 status code;<br>   `4XX`: All 4xx status codes;<br>   `400`: 400 status code;<br>   `401`: 401 status code;<br>   `402`: 402 status code;<br>   `403`: 403 status code;<br>   `404`: 404 status code;<br>   `405`: 405 status code;<br>   `406`: 406 status code;<br>   `407`: 407 status code;<br>   `408`: 408 status code;<br>   `409`: 409 status code;<br>   `410`: 410 status code;<br>   `411`: 411 status code;<br>   `412`: 412 status code;<br>   `412`: 413 status code;<br>   `414`: 414 status code;<br>   `415`: 415 status code;<br>   `416`: 416 status code;<br>   `417`: 417 status code;<br>  `422`: 422 status code;<br>   `423`: 423 status code;<br>   `424`: 424 status code;<br>   `426`: 426 status code;<br>   `451`: 451 status code;<br>   `5XX`: All 5xx status codes;<br>   `500`: 500 status code;<br>   `501`: 501 status code;<br>   `502`: 502 status code;<br>   `503`: 503 status code;<br>   `504`: 504 status code;<br>   `505`: 505 status code;<br>   `506`: 506 status code;<br>   `507`: 507 status code;<br>   `510`: 510 status code;<br>   `514`: 514 status code;<br>   `544`: 544 status code.</li>
<li>`tagKey`:<br>   Filter by the <strong>tag key</strong><br>   Type: String<br>   Required: No</li>
<li>`tagValue`<br>   Filter by the <strong>tag value</strong><br>   Type: String<br>   Required: No</li>
                     */
                    std::vector<QueryCondition> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * The query time granularity. Values:
<li>`min`: 1 minute;</li>
<li>`5min`: 5 minutes;</li>
<li>`hour`: 1 hour;</li>
<li>`day`: 1 day.</li>If this field is not specified, the granularity will be determined based on the interval between the start time and end time as follows: 1-minute granularity applies for a 1-hour interval, 5-minute granularity for a 2-day interval, 1-hour granularity for a 7-day interval, and 1-day granularity for an interval of over 7 days.
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

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBETIMINGL7CACHEDATAREQUEST_H_
