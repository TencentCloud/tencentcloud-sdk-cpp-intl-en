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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBETIMINGL7ANALYSISDATAREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBETIMINGL7ANALYSISDATAREQUEST_H_

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
                * DescribeTimingL7AnalysisData request structure.
                */
                class DescribeTimingL7AnalysisDataRequest : public AbstractModel
                {
                public:
                    DescribeTimingL7AnalysisDataRequest();
                    ~DescribeTimingL7AnalysisDataRequest() = default;
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
                     * 获取Indicator list. Values: 
<li>l7Flow_outFlux: Edgeone response traffic;</li>
<li>l7Flow_inFlux: Edgeone request traffic;</li>
<li>l7Flow_outBandwidth: Edgeone response bandwidth;</li>
<li>l7Flow_inBandwidth: Edgeone request bandwidth;</li>
<li>l7Flow_request: Number of access requests;</li>
<li>l7Flow_flux: Uplink + downlink traffic of access requests;< li>
<li>l7Flow_bandwidth: Uplink + downlink bandwidth of access requests. </li>
                     * @return MetricNames Indicator list. Values: 
<li>l7Flow_outFlux: Edgeone response traffic;</li>
<li>l7Flow_inFlux: Edgeone request traffic;</li>
<li>l7Flow_outBandwidth: Edgeone response bandwidth;</li>
<li>l7Flow_inBandwidth: Edgeone request bandwidth;</li>
<li>l7Flow_request: Number of access requests;</li>
<li>l7Flow_flux: Uplink + downlink traffic of access requests;< li>
<li>l7Flow_bandwidth: Uplink + downlink bandwidth of access requests. </li>
                     * 
                     */
                    std::vector<std::string> GetMetricNames() const;

                    /**
                     * 设置Indicator list. Values: 
<li>l7Flow_outFlux: Edgeone response traffic;</li>
<li>l7Flow_inFlux: Edgeone request traffic;</li>
<li>l7Flow_outBandwidth: Edgeone response bandwidth;</li>
<li>l7Flow_inBandwidth: Edgeone request bandwidth;</li>
<li>l7Flow_request: Number of access requests;</li>
<li>l7Flow_flux: Uplink + downlink traffic of access requests;< li>
<li>l7Flow_bandwidth: Uplink + downlink bandwidth of access requests. </li>
                     * @param _metricNames Indicator list. Values: 
<li>l7Flow_outFlux: Edgeone response traffic;</li>
<li>l7Flow_inFlux: Edgeone request traffic;</li>
<li>l7Flow_outBandwidth: Edgeone response bandwidth;</li>
<li>l7Flow_inBandwidth: Edgeone request bandwidth;</li>
<li>l7Flow_request: Number of access requests;</li>
<li>l7Flow_flux: Uplink + downlink traffic of access requests;< li>
<li>l7Flow_bandwidth: Uplink + downlink bandwidth of access requests. </li>
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
                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置The query granularity. Values:
<li>`min`: 1 minute;</li>
<li>`5min`: 5 minutes;</li>
<li>`hour`: 1 hour;</li>
<li>`day`: 1 day.</li>If this field is not specified, the granularity will be determined based on the query period. <br>Period ≤ 1 hour: `min`; <br>1 hour < Period ≤ 2 days: `5min`; <br>2 days < period ≤ 7 days: `hour`; <br>Period > 7 days: `day`.
                     * @param _interval The query granularity. Values:
<li>`min`: 1 minute;</li>
<li>`5min`: 5 minutes;</li>
<li>`hour`: 1 hour;</li>
<li>`day`: 1 day.</li>If this field is not specified, the granularity will be determined based on the query period. <br>Period ≤ 1 hour: `min`; <br>1 hour < Period ≤ 2 days: `5min`; <br>2 days < period ≤ 7 days: `hour`; <br>Period > 7 days: `day`.
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
                     * 获取Filters
<li>country<br>Filter by the <strong> Country/Region</strong>. The country/region follows <a href="https://baike.baidu.com/item/ISO%203166-1/5269555">ISO 3166</a> specification. </li>
<li>`province`<br>Filter by the <strong>specified province name</strong>. It’s only available when `Area` is `mainland`.</li>
<li>`isp`<br>:   Filter by the specified ISP. It’s only available when `Area` is `mainland`.<br>Values: <br>`2`: CTCC; <br>`26`: CUCC; <br>`1046`: CMCC; <br>`3947`: CTT; <br>`38`: CERNET; <br>`43`: GWBN; <br>`0`: Others.</li>
<li>`domain`<br>: Filter by the specified <strong>sub-domain name</strong>, such as `test.example.com`</li>
<li>`url`:<br>Filter by the specified <strong>URL path<strong> (such as `/content` or `content/test.jpg`.<br>If this parameter is specified, the max query period is the last 30 days.<br>The <a href="https://intl.cloud.tencent.com/document/product/1552/77380?from_cn_redirect=1#edgeone-.E5.A5.97.E9.A4.90">max data query scope stated in the service package specifications</a> of the site (if `ZoneIds` specified) becomes invalid.</li>
<li>`referer`:<br>Filter by the specified <strong>Referer header</strong>, such as `example.com`.<br>If this parameter is specified, the max query period is the last 30 days.<br>The<a href="https://intl.cloud.tencent.com/document/product/1552/77380?from_cn_redirect=1#edgeone-.E5.A5.97.E9.A4.90">max data query scope stated in the service package specifications</a> of the site (if `ZoneIds` specified) becomes invalid.</li>
<li>`resourceType`:<br>Filter by the specified <strong>resource file type</strong>, such as `jpg`, `css`. <br>Note that if this parameter is specified, the max data query period is the last 30 days. <br>The [data query scope stated in the specifications of service package]<a href="https://intl.cloud.tencent.com/document/product/1552/77380?from_cn_redirect=1#edgeone-.E5.A5.97.E9.A4.90"> related with the `ZoneIds` becomes invalid.</li>
<li>`protocol`:<br> Filter by the specified <strong>HTTP protocol</strong> version <br>Values: <br>`HTTP/1.0`: HTTP 1.0;<br>`HTTP/1.1`: HTTP 1.1;<br>`HTTP/2.0`: HTTP 2.0;<br>`HTTP/3.0`: HTTP 3.0;<br>`WebSocket`: WebSocket.</li>
<li>`socket`:<br>Filter by the specified <strong>HTTP protocol</strong> type <br>Values: <br>`HTTP`: HTTP protocol;<br>`HTTPS`: HTTPS protocol;<br>`QUIC`: QUIC protocol.</li>
<li>statusCode<br>u2003u2003 Filter by [strong> Status Code/strong>]. lt;br>u2003u2003 If you only fill in statusCode parameter, you can query data of nearly 30 days at most; br>u2003u2003 If statusCode+Zonelds parameter is filled in at the same time, the supported query data range is the smaller of a href="https://intl.cloud.tencent.com/document/product/1552/77380?from_cn_redirect=1#edgeone-.E5.A5.97.E9.A4.90"> Maximum query range of data analysis/a> and 30 days supported by package. lt;br>u2003u2003 The corresponding Value options are as follows: br>u2003u2003 1XX: Status code of type 1xx; br>u2003u2003 100:100 status code; br>u2003u2003 101:101 status code; br>u2003u2003 102:102 status code; br>u2003u2003 2XX: Status code of type 2xx; br>u2003u2003 200:200 status code; br>u2003u2003 201:201 status code; br>u2003u2003 202:202 status code; br>u2003u2003 203:203 status code; br>u2003u2003 204:204 status code; br>u2003u2003 205:205 status code; br>u2003u2003 206:206 status code; br>u2003u2003 207:207 status code; br>u2003u2003 3XX: Status code of type 3xx; br>u2003u2003 300:300 status code; br>u2003u2003 301:301 status code; br>u2003u2003 302:302 status code; br>u2003u2003 303:303 status code; br>u2003u2003 304:304 status code; br>u2003u2003 305:305 status code; br>u2003u2003 307:307 status code; br>u2003u2003 4XX: Status code of type 4xx; br>u2003u2003 400:400 status code; br>u2003u2003 401:401 status code; br>u2003u2003 402:402 status code; br>u2003u2003 403:403 status code; br>u2003u2003 404:404 status code; br>u2003u2003 405:405 status code; br>u2003u2003 406:406 status code; br>u2003u2003 407:407 status code; br>u2003u2003 408:408 status code; br>u2003u2003 409:409 status code; br>u2003u2003 410:410 status code; br>u2003u2003 411:411 status code; br>u2003u2003 412:412 status code; br>u2003u2003 412:413 Status Code; br>u2003u2003 414:414 status code; br>u2003u2003 415:415 status code; br>u2003u2003 416:416 status code; br>u2003u2003 417:417 status code; br>u2003u2003 422:422 status code; br>u2003u2003 423:423 status code; br>u2003u2003 424:424 status code; br>u2003u2003 426:426 status code; br>u2003u2003 451:451 status code; br>u2003u2003 5XX: Status code of type 5xx; br>u2003u2003 500:500 status code; br>u2003u2003 501:501 status code; br>u2003u2003 502:502 status code; br>u2003u2003 503:503 status code; br>u2003u2003 504:504 status code; br>u2003u2003 505:505 status code; br>u2003u2003 506:506 status code; br>u2003u2003 507:507 status code; br>u2003u2003 510:510 status code; br>u2003u2003 514:514 status code; br>u2003u2003 544:544 Status Code.& lt</li>
<li>`browserType`:<br>Filter by the specified <strong>browser type</strong>. <br>If this parameter is specified, the max query period is the last 30 days.<br>The <a href="https://intl.cloud.tencent.com/document/product/1552/77380?from_cn_redirect=1#edgeone-.E5.A5.97.E9.A4.90">max data query scope stated in the service package specifications</a> of the site (if `ZoneIds` specified) becomes invalid.</li><br>Values: <br>`Firefox`: Firefox browser; <br>`Chrome`: Chrome browser; <br>`Safari`: Safari browser; <br>`MicrosoftEdge`: Microsoft Edge browser; <br>`IE`: IE browser; <br>`Opera`: Opera browser; <br>`QQBrowser`: QQ browser; <br>`LBBrowser`: LB browser; <br>`MaxthonBrowser`: Maxthon browser; <br>`SouGouBrowser`: Sogou browser; <br>`BIDUBrowser`: Baidu browser; <br>`TaoBrowser`: Tao browser; <br>`UBrowser`: UC browser; <br>`Other`: Other browsers; <br>`Empty`: The browser type is not specified; <br>`Bot`: Web crawler.</li>
<li>`deviceType`:<br>Filter by the <strong>device type</strong>.<br>If this parameter is specified, the max query period is the last 30 days.<br>The <a href="https://intl.cloud.tencent.com/document/product/1552/77380?from_cn_redirect=1#edgeone-.E5.A5.97.E9.A4.90">max data query scope stated in the service package specifications</a> of the site (if `ZoneIds` specified) becomes invalid.<br>Values:<br>`TV`: TV; <br>`Tablet`: Tablet;<br>`Mobile`: Mobile phone; <br>`Desktop`: Desktop device;<br>`Other`: Other device;<br>`Empty`: Device type not specified.</li>
<li>`operatingSystemType`:<br>Filter by the <strong>operating system</strong>.<br>If this parameter is specified, the max query period is the last 30 days.<br>The <a href="https://intl.cloud.tencent.com/document/product/1552/77380?from_cn_redirect=1#edgeone-.E5.A5.97.E9.A4.90">max data query scope stated in the service package specifications</a> of the site (if `ZoneIds` specified) becomes invalid.<br>Values: <br>`Linux`: Linux OS; <br>`MacOS`: Mac OS;<br>`Android`: Android OS;<br>`IOS`: iOS OS;<br>`Windows`: Windows OS;<br>`NetBSD`: NetBSD OS;<br>`ChromiumOS`: Chromium OS; <br>`Bot`: Web crawler:<br>`Other`: Other OS;   <br>`Empty`: The OS is not specified.</li>
<li>`tlsVersion`:<br>Filter by the <strong>TLS version</strong>. <br>If this parameter is specified, the max query period is the last 30 days.<br>The <a href="https://intl.cloud.tencent.com/document/product/1552/77380?from_cn_redirect=1#edgeone-.E5.A5.97.E9.A4.90">max data query scope stated in the service package specifications</a> of the site (if `ZoneIds` specified) becomes invalid.<br>Values: <br>`TLS1.0`: TLS 1.0;<br>`TLS1.1`: TLS 1.1; <br>`TLS1.2`: TLS 1.2;<br>`TLS1.3`: TLS 1.3.</li>
<li>`ipVersion`<br>Filter by the <strong>specified IP version. <br>Values: <br>`4`: IPv4; <br>`6`: IPv6.
<li>`tagKey`<br>Filter by the <strong>Tag Key</strong>. </li>
<li>`tagValue`<br>Filter by the <strong>Tag Value</strong>. </li>
                     * @return Filters Filters
<li>country<br>Filter by the <strong> Country/Region</strong>. The country/region follows <a href="https://baike.baidu.com/item/ISO%203166-1/5269555">ISO 3166</a> specification. </li>
<li>`province`<br>Filter by the <strong>specified province name</strong>. It’s only available when `Area` is `mainland`.</li>
<li>`isp`<br>:   Filter by the specified ISP. It’s only available when `Area` is `mainland`.<br>Values: <br>`2`: CTCC; <br>`26`: CUCC; <br>`1046`: CMCC; <br>`3947`: CTT; <br>`38`: CERNET; <br>`43`: GWBN; <br>`0`: Others.</li>
<li>`domain`<br>: Filter by the specified <strong>sub-domain name</strong>, such as `test.example.com`</li>
<li>`url`:<br>Filter by the specified <strong>URL path<strong> (such as `/content` or `content/test.jpg`.<br>If this parameter is specified, the max query period is the last 30 days.<br>The <a href="https://intl.cloud.tencent.com/document/product/1552/77380?from_cn_redirect=1#edgeone-.E5.A5.97.E9.A4.90">max data query scope stated in the service package specifications</a> of the site (if `ZoneIds` specified) becomes invalid.</li>
<li>`referer`:<br>Filter by the specified <strong>Referer header</strong>, such as `example.com`.<br>If this parameter is specified, the max query period is the last 30 days.<br>The<a href="https://intl.cloud.tencent.com/document/product/1552/77380?from_cn_redirect=1#edgeone-.E5.A5.97.E9.A4.90">max data query scope stated in the service package specifications</a> of the site (if `ZoneIds` specified) becomes invalid.</li>
<li>`resourceType`:<br>Filter by the specified <strong>resource file type</strong>, such as `jpg`, `css`. <br>Note that if this parameter is specified, the max data query period is the last 30 days. <br>The [data query scope stated in the specifications of service package]<a href="https://intl.cloud.tencent.com/document/product/1552/77380?from_cn_redirect=1#edgeone-.E5.A5.97.E9.A4.90"> related with the `ZoneIds` becomes invalid.</li>
<li>`protocol`:<br> Filter by the specified <strong>HTTP protocol</strong> version <br>Values: <br>`HTTP/1.0`: HTTP 1.0;<br>`HTTP/1.1`: HTTP 1.1;<br>`HTTP/2.0`: HTTP 2.0;<br>`HTTP/3.0`: HTTP 3.0;<br>`WebSocket`: WebSocket.</li>
<li>`socket`:<br>Filter by the specified <strong>HTTP protocol</strong> type <br>Values: <br>`HTTP`: HTTP protocol;<br>`HTTPS`: HTTPS protocol;<br>`QUIC`: QUIC protocol.</li>
<li>statusCode<br>u2003u2003 Filter by [strong> Status Code/strong>]. lt;br>u2003u2003 If you only fill in statusCode parameter, you can query data of nearly 30 days at most; br>u2003u2003 If statusCode+Zonelds parameter is filled in at the same time, the supported query data range is the smaller of a href="https://intl.cloud.tencent.com/document/product/1552/77380?from_cn_redirect=1#edgeone-.E5.A5.97.E9.A4.90"> Maximum query range of data analysis/a> and 30 days supported by package. lt;br>u2003u2003 The corresponding Value options are as follows: br>u2003u2003 1XX: Status code of type 1xx; br>u2003u2003 100:100 status code; br>u2003u2003 101:101 status code; br>u2003u2003 102:102 status code; br>u2003u2003 2XX: Status code of type 2xx; br>u2003u2003 200:200 status code; br>u2003u2003 201:201 status code; br>u2003u2003 202:202 status code; br>u2003u2003 203:203 status code; br>u2003u2003 204:204 status code; br>u2003u2003 205:205 status code; br>u2003u2003 206:206 status code; br>u2003u2003 207:207 status code; br>u2003u2003 3XX: Status code of type 3xx; br>u2003u2003 300:300 status code; br>u2003u2003 301:301 status code; br>u2003u2003 302:302 status code; br>u2003u2003 303:303 status code; br>u2003u2003 304:304 status code; br>u2003u2003 305:305 status code; br>u2003u2003 307:307 status code; br>u2003u2003 4XX: Status code of type 4xx; br>u2003u2003 400:400 status code; br>u2003u2003 401:401 status code; br>u2003u2003 402:402 status code; br>u2003u2003 403:403 status code; br>u2003u2003 404:404 status code; br>u2003u2003 405:405 status code; br>u2003u2003 406:406 status code; br>u2003u2003 407:407 status code; br>u2003u2003 408:408 status code; br>u2003u2003 409:409 status code; br>u2003u2003 410:410 status code; br>u2003u2003 411:411 status code; br>u2003u2003 412:412 status code; br>u2003u2003 412:413 Status Code; br>u2003u2003 414:414 status code; br>u2003u2003 415:415 status code; br>u2003u2003 416:416 status code; br>u2003u2003 417:417 status code; br>u2003u2003 422:422 status code; br>u2003u2003 423:423 status code; br>u2003u2003 424:424 status code; br>u2003u2003 426:426 status code; br>u2003u2003 451:451 status code; br>u2003u2003 5XX: Status code of type 5xx; br>u2003u2003 500:500 status code; br>u2003u2003 501:501 status code; br>u2003u2003 502:502 status code; br>u2003u2003 503:503 status code; br>u2003u2003 504:504 status code; br>u2003u2003 505:505 status code; br>u2003u2003 506:506 status code; br>u2003u2003 507:507 status code; br>u2003u2003 510:510 status code; br>u2003u2003 514:514 status code; br>u2003u2003 544:544 Status Code.& lt</li>
<li>`browserType`:<br>Filter by the specified <strong>browser type</strong>. <br>If this parameter is specified, the max query period is the last 30 days.<br>The <a href="https://intl.cloud.tencent.com/document/product/1552/77380?from_cn_redirect=1#edgeone-.E5.A5.97.E9.A4.90">max data query scope stated in the service package specifications</a> of the site (if `ZoneIds` specified) becomes invalid.</li><br>Values: <br>`Firefox`: Firefox browser; <br>`Chrome`: Chrome browser; <br>`Safari`: Safari browser; <br>`MicrosoftEdge`: Microsoft Edge browser; <br>`IE`: IE browser; <br>`Opera`: Opera browser; <br>`QQBrowser`: QQ browser; <br>`LBBrowser`: LB browser; <br>`MaxthonBrowser`: Maxthon browser; <br>`SouGouBrowser`: Sogou browser; <br>`BIDUBrowser`: Baidu browser; <br>`TaoBrowser`: Tao browser; <br>`UBrowser`: UC browser; <br>`Other`: Other browsers; <br>`Empty`: The browser type is not specified; <br>`Bot`: Web crawler.</li>
<li>`deviceType`:<br>Filter by the <strong>device type</strong>.<br>If this parameter is specified, the max query period is the last 30 days.<br>The <a href="https://intl.cloud.tencent.com/document/product/1552/77380?from_cn_redirect=1#edgeone-.E5.A5.97.E9.A4.90">max data query scope stated in the service package specifications</a> of the site (if `ZoneIds` specified) becomes invalid.<br>Values:<br>`TV`: TV; <br>`Tablet`: Tablet;<br>`Mobile`: Mobile phone; <br>`Desktop`: Desktop device;<br>`Other`: Other device;<br>`Empty`: Device type not specified.</li>
<li>`operatingSystemType`:<br>Filter by the <strong>operating system</strong>.<br>If this parameter is specified, the max query period is the last 30 days.<br>The <a href="https://intl.cloud.tencent.com/document/product/1552/77380?from_cn_redirect=1#edgeone-.E5.A5.97.E9.A4.90">max data query scope stated in the service package specifications</a> of the site (if `ZoneIds` specified) becomes invalid.<br>Values: <br>`Linux`: Linux OS; <br>`MacOS`: Mac OS;<br>`Android`: Android OS;<br>`IOS`: iOS OS;<br>`Windows`: Windows OS;<br>`NetBSD`: NetBSD OS;<br>`ChromiumOS`: Chromium OS; <br>`Bot`: Web crawler:<br>`Other`: Other OS;   <br>`Empty`: The OS is not specified.</li>
<li>`tlsVersion`:<br>Filter by the <strong>TLS version</strong>. <br>If this parameter is specified, the max query period is the last 30 days.<br>The <a href="https://intl.cloud.tencent.com/document/product/1552/77380?from_cn_redirect=1#edgeone-.E5.A5.97.E9.A4.90">max data query scope stated in the service package specifications</a> of the site (if `ZoneIds` specified) becomes invalid.<br>Values: <br>`TLS1.0`: TLS 1.0;<br>`TLS1.1`: TLS 1.1; <br>`TLS1.2`: TLS 1.2;<br>`TLS1.3`: TLS 1.3.</li>
<li>`ipVersion`<br>Filter by the <strong>specified IP version. <br>Values: <br>`4`: IPv4; <br>`6`: IPv6.
<li>`tagKey`<br>Filter by the <strong>Tag Key</strong>. </li>
<li>`tagValue`<br>Filter by the <strong>Tag Value</strong>. </li>
                     * 
                     */
                    std::vector<QueryCondition> GetFilters() const;

                    /**
                     * 设置Filters
<li>country<br>Filter by the <strong> Country/Region</strong>. The country/region follows <a href="https://baike.baidu.com/item/ISO%203166-1/5269555">ISO 3166</a> specification. </li>
<li>`province`<br>Filter by the <strong>specified province name</strong>. It’s only available when `Area` is `mainland`.</li>
<li>`isp`<br>:   Filter by the specified ISP. It’s only available when `Area` is `mainland`.<br>Values: <br>`2`: CTCC; <br>`26`: CUCC; <br>`1046`: CMCC; <br>`3947`: CTT; <br>`38`: CERNET; <br>`43`: GWBN; <br>`0`: Others.</li>
<li>`domain`<br>: Filter by the specified <strong>sub-domain name</strong>, such as `test.example.com`</li>
<li>`url`:<br>Filter by the specified <strong>URL path<strong> (such as `/content` or `content/test.jpg`.<br>If this parameter is specified, the max query period is the last 30 days.<br>The <a href="https://intl.cloud.tencent.com/document/product/1552/77380?from_cn_redirect=1#edgeone-.E5.A5.97.E9.A4.90">max data query scope stated in the service package specifications</a> of the site (if `ZoneIds` specified) becomes invalid.</li>
<li>`referer`:<br>Filter by the specified <strong>Referer header</strong>, such as `example.com`.<br>If this parameter is specified, the max query period is the last 30 days.<br>The<a href="https://intl.cloud.tencent.com/document/product/1552/77380?from_cn_redirect=1#edgeone-.E5.A5.97.E9.A4.90">max data query scope stated in the service package specifications</a> of the site (if `ZoneIds` specified) becomes invalid.</li>
<li>`resourceType`:<br>Filter by the specified <strong>resource file type</strong>, such as `jpg`, `css`. <br>Note that if this parameter is specified, the max data query period is the last 30 days. <br>The [data query scope stated in the specifications of service package]<a href="https://intl.cloud.tencent.com/document/product/1552/77380?from_cn_redirect=1#edgeone-.E5.A5.97.E9.A4.90"> related with the `ZoneIds` becomes invalid.</li>
<li>`protocol`:<br> Filter by the specified <strong>HTTP protocol</strong> version <br>Values: <br>`HTTP/1.0`: HTTP 1.0;<br>`HTTP/1.1`: HTTP 1.1;<br>`HTTP/2.0`: HTTP 2.0;<br>`HTTP/3.0`: HTTP 3.0;<br>`WebSocket`: WebSocket.</li>
<li>`socket`:<br>Filter by the specified <strong>HTTP protocol</strong> type <br>Values: <br>`HTTP`: HTTP protocol;<br>`HTTPS`: HTTPS protocol;<br>`QUIC`: QUIC protocol.</li>
<li>statusCode<br>u2003u2003 Filter by [strong> Status Code/strong>]. lt;br>u2003u2003 If you only fill in statusCode parameter, you can query data of nearly 30 days at most; br>u2003u2003 If statusCode+Zonelds parameter is filled in at the same time, the supported query data range is the smaller of a href="https://intl.cloud.tencent.com/document/product/1552/77380?from_cn_redirect=1#edgeone-.E5.A5.97.E9.A4.90"> Maximum query range of data analysis/a> and 30 days supported by package. lt;br>u2003u2003 The corresponding Value options are as follows: br>u2003u2003 1XX: Status code of type 1xx; br>u2003u2003 100:100 status code; br>u2003u2003 101:101 status code; br>u2003u2003 102:102 status code; br>u2003u2003 2XX: Status code of type 2xx; br>u2003u2003 200:200 status code; br>u2003u2003 201:201 status code; br>u2003u2003 202:202 status code; br>u2003u2003 203:203 status code; br>u2003u2003 204:204 status code; br>u2003u2003 205:205 status code; br>u2003u2003 206:206 status code; br>u2003u2003 207:207 status code; br>u2003u2003 3XX: Status code of type 3xx; br>u2003u2003 300:300 status code; br>u2003u2003 301:301 status code; br>u2003u2003 302:302 status code; br>u2003u2003 303:303 status code; br>u2003u2003 304:304 status code; br>u2003u2003 305:305 status code; br>u2003u2003 307:307 status code; br>u2003u2003 4XX: Status code of type 4xx; br>u2003u2003 400:400 status code; br>u2003u2003 401:401 status code; br>u2003u2003 402:402 status code; br>u2003u2003 403:403 status code; br>u2003u2003 404:404 status code; br>u2003u2003 405:405 status code; br>u2003u2003 406:406 status code; br>u2003u2003 407:407 status code; br>u2003u2003 408:408 status code; br>u2003u2003 409:409 status code; br>u2003u2003 410:410 status code; br>u2003u2003 411:411 status code; br>u2003u2003 412:412 status code; br>u2003u2003 412:413 Status Code; br>u2003u2003 414:414 status code; br>u2003u2003 415:415 status code; br>u2003u2003 416:416 status code; br>u2003u2003 417:417 status code; br>u2003u2003 422:422 status code; br>u2003u2003 423:423 status code; br>u2003u2003 424:424 status code; br>u2003u2003 426:426 status code; br>u2003u2003 451:451 status code; br>u2003u2003 5XX: Status code of type 5xx; br>u2003u2003 500:500 status code; br>u2003u2003 501:501 status code; br>u2003u2003 502:502 status code; br>u2003u2003 503:503 status code; br>u2003u2003 504:504 status code; br>u2003u2003 505:505 status code; br>u2003u2003 506:506 status code; br>u2003u2003 507:507 status code; br>u2003u2003 510:510 status code; br>u2003u2003 514:514 status code; br>u2003u2003 544:544 Status Code.& lt</li>
<li>`browserType`:<br>Filter by the specified <strong>browser type</strong>. <br>If this parameter is specified, the max query period is the last 30 days.<br>The <a href="https://intl.cloud.tencent.com/document/product/1552/77380?from_cn_redirect=1#edgeone-.E5.A5.97.E9.A4.90">max data query scope stated in the service package specifications</a> of the site (if `ZoneIds` specified) becomes invalid.</li><br>Values: <br>`Firefox`: Firefox browser; <br>`Chrome`: Chrome browser; <br>`Safari`: Safari browser; <br>`MicrosoftEdge`: Microsoft Edge browser; <br>`IE`: IE browser; <br>`Opera`: Opera browser; <br>`QQBrowser`: QQ browser; <br>`LBBrowser`: LB browser; <br>`MaxthonBrowser`: Maxthon browser; <br>`SouGouBrowser`: Sogou browser; <br>`BIDUBrowser`: Baidu browser; <br>`TaoBrowser`: Tao browser; <br>`UBrowser`: UC browser; <br>`Other`: Other browsers; <br>`Empty`: The browser type is not specified; <br>`Bot`: Web crawler.</li>
<li>`deviceType`:<br>Filter by the <strong>device type</strong>.<br>If this parameter is specified, the max query period is the last 30 days.<br>The <a href="https://intl.cloud.tencent.com/document/product/1552/77380?from_cn_redirect=1#edgeone-.E5.A5.97.E9.A4.90">max data query scope stated in the service package specifications</a> of the site (if `ZoneIds` specified) becomes invalid.<br>Values:<br>`TV`: TV; <br>`Tablet`: Tablet;<br>`Mobile`: Mobile phone; <br>`Desktop`: Desktop device;<br>`Other`: Other device;<br>`Empty`: Device type not specified.</li>
<li>`operatingSystemType`:<br>Filter by the <strong>operating system</strong>.<br>If this parameter is specified, the max query period is the last 30 days.<br>The <a href="https://intl.cloud.tencent.com/document/product/1552/77380?from_cn_redirect=1#edgeone-.E5.A5.97.E9.A4.90">max data query scope stated in the service package specifications</a> of the site (if `ZoneIds` specified) becomes invalid.<br>Values: <br>`Linux`: Linux OS; <br>`MacOS`: Mac OS;<br>`Android`: Android OS;<br>`IOS`: iOS OS;<br>`Windows`: Windows OS;<br>`NetBSD`: NetBSD OS;<br>`ChromiumOS`: Chromium OS; <br>`Bot`: Web crawler:<br>`Other`: Other OS;   <br>`Empty`: The OS is not specified.</li>
<li>`tlsVersion`:<br>Filter by the <strong>TLS version</strong>. <br>If this parameter is specified, the max query period is the last 30 days.<br>The <a href="https://intl.cloud.tencent.com/document/product/1552/77380?from_cn_redirect=1#edgeone-.E5.A5.97.E9.A4.90">max data query scope stated in the service package specifications</a> of the site (if `ZoneIds` specified) becomes invalid.<br>Values: <br>`TLS1.0`: TLS 1.0;<br>`TLS1.1`: TLS 1.1; <br>`TLS1.2`: TLS 1.2;<br>`TLS1.3`: TLS 1.3.</li>
<li>`ipVersion`<br>Filter by the <strong>specified IP version. <br>Values: <br>`4`: IPv4; <br>`6`: IPv6.
<li>`tagKey`<br>Filter by the <strong>Tag Key</strong>. </li>
<li>`tagValue`<br>Filter by the <strong>Tag Value</strong>. </li>
                     * @param _filters Filters
<li>country<br>Filter by the <strong> Country/Region</strong>. The country/region follows <a href="https://baike.baidu.com/item/ISO%203166-1/5269555">ISO 3166</a> specification. </li>
<li>`province`<br>Filter by the <strong>specified province name</strong>. It’s only available when `Area` is `mainland`.</li>
<li>`isp`<br>:   Filter by the specified ISP. It’s only available when `Area` is `mainland`.<br>Values: <br>`2`: CTCC; <br>`26`: CUCC; <br>`1046`: CMCC; <br>`3947`: CTT; <br>`38`: CERNET; <br>`43`: GWBN; <br>`0`: Others.</li>
<li>`domain`<br>: Filter by the specified <strong>sub-domain name</strong>, such as `test.example.com`</li>
<li>`url`:<br>Filter by the specified <strong>URL path<strong> (such as `/content` or `content/test.jpg`.<br>If this parameter is specified, the max query period is the last 30 days.<br>The <a href="https://intl.cloud.tencent.com/document/product/1552/77380?from_cn_redirect=1#edgeone-.E5.A5.97.E9.A4.90">max data query scope stated in the service package specifications</a> of the site (if `ZoneIds` specified) becomes invalid.</li>
<li>`referer`:<br>Filter by the specified <strong>Referer header</strong>, such as `example.com`.<br>If this parameter is specified, the max query period is the last 30 days.<br>The<a href="https://intl.cloud.tencent.com/document/product/1552/77380?from_cn_redirect=1#edgeone-.E5.A5.97.E9.A4.90">max data query scope stated in the service package specifications</a> of the site (if `ZoneIds` specified) becomes invalid.</li>
<li>`resourceType`:<br>Filter by the specified <strong>resource file type</strong>, such as `jpg`, `css`. <br>Note that if this parameter is specified, the max data query period is the last 30 days. <br>The [data query scope stated in the specifications of service package]<a href="https://intl.cloud.tencent.com/document/product/1552/77380?from_cn_redirect=1#edgeone-.E5.A5.97.E9.A4.90"> related with the `ZoneIds` becomes invalid.</li>
<li>`protocol`:<br> Filter by the specified <strong>HTTP protocol</strong> version <br>Values: <br>`HTTP/1.0`: HTTP 1.0;<br>`HTTP/1.1`: HTTP 1.1;<br>`HTTP/2.0`: HTTP 2.0;<br>`HTTP/3.0`: HTTP 3.0;<br>`WebSocket`: WebSocket.</li>
<li>`socket`:<br>Filter by the specified <strong>HTTP protocol</strong> type <br>Values: <br>`HTTP`: HTTP protocol;<br>`HTTPS`: HTTPS protocol;<br>`QUIC`: QUIC protocol.</li>
<li>statusCode<br>u2003u2003 Filter by [strong> Status Code/strong>]. lt;br>u2003u2003 If you only fill in statusCode parameter, you can query data of nearly 30 days at most; br>u2003u2003 If statusCode+Zonelds parameter is filled in at the same time, the supported query data range is the smaller of a href="https://intl.cloud.tencent.com/document/product/1552/77380?from_cn_redirect=1#edgeone-.E5.A5.97.E9.A4.90"> Maximum query range of data analysis/a> and 30 days supported by package. lt;br>u2003u2003 The corresponding Value options are as follows: br>u2003u2003 1XX: Status code of type 1xx; br>u2003u2003 100:100 status code; br>u2003u2003 101:101 status code; br>u2003u2003 102:102 status code; br>u2003u2003 2XX: Status code of type 2xx; br>u2003u2003 200:200 status code; br>u2003u2003 201:201 status code; br>u2003u2003 202:202 status code; br>u2003u2003 203:203 status code; br>u2003u2003 204:204 status code; br>u2003u2003 205:205 status code; br>u2003u2003 206:206 status code; br>u2003u2003 207:207 status code; br>u2003u2003 3XX: Status code of type 3xx; br>u2003u2003 300:300 status code; br>u2003u2003 301:301 status code; br>u2003u2003 302:302 status code; br>u2003u2003 303:303 status code; br>u2003u2003 304:304 status code; br>u2003u2003 305:305 status code; br>u2003u2003 307:307 status code; br>u2003u2003 4XX: Status code of type 4xx; br>u2003u2003 400:400 status code; br>u2003u2003 401:401 status code; br>u2003u2003 402:402 status code; br>u2003u2003 403:403 status code; br>u2003u2003 404:404 status code; br>u2003u2003 405:405 status code; br>u2003u2003 406:406 status code; br>u2003u2003 407:407 status code; br>u2003u2003 408:408 status code; br>u2003u2003 409:409 status code; br>u2003u2003 410:410 status code; br>u2003u2003 411:411 status code; br>u2003u2003 412:412 status code; br>u2003u2003 412:413 Status Code; br>u2003u2003 414:414 status code; br>u2003u2003 415:415 status code; br>u2003u2003 416:416 status code; br>u2003u2003 417:417 status code; br>u2003u2003 422:422 status code; br>u2003u2003 423:423 status code; br>u2003u2003 424:424 status code; br>u2003u2003 426:426 status code; br>u2003u2003 451:451 status code; br>u2003u2003 5XX: Status code of type 5xx; br>u2003u2003 500:500 status code; br>u2003u2003 501:501 status code; br>u2003u2003 502:502 status code; br>u2003u2003 503:503 status code; br>u2003u2003 504:504 status code; br>u2003u2003 505:505 status code; br>u2003u2003 506:506 status code; br>u2003u2003 507:507 status code; br>u2003u2003 510:510 status code; br>u2003u2003 514:514 status code; br>u2003u2003 544:544 Status Code.& lt</li>
<li>`browserType`:<br>Filter by the specified <strong>browser type</strong>. <br>If this parameter is specified, the max query period is the last 30 days.<br>The <a href="https://intl.cloud.tencent.com/document/product/1552/77380?from_cn_redirect=1#edgeone-.E5.A5.97.E9.A4.90">max data query scope stated in the service package specifications</a> of the site (if `ZoneIds` specified) becomes invalid.</li><br>Values: <br>`Firefox`: Firefox browser; <br>`Chrome`: Chrome browser; <br>`Safari`: Safari browser; <br>`MicrosoftEdge`: Microsoft Edge browser; <br>`IE`: IE browser; <br>`Opera`: Opera browser; <br>`QQBrowser`: QQ browser; <br>`LBBrowser`: LB browser; <br>`MaxthonBrowser`: Maxthon browser; <br>`SouGouBrowser`: Sogou browser; <br>`BIDUBrowser`: Baidu browser; <br>`TaoBrowser`: Tao browser; <br>`UBrowser`: UC browser; <br>`Other`: Other browsers; <br>`Empty`: The browser type is not specified; <br>`Bot`: Web crawler.</li>
<li>`deviceType`:<br>Filter by the <strong>device type</strong>.<br>If this parameter is specified, the max query period is the last 30 days.<br>The <a href="https://intl.cloud.tencent.com/document/product/1552/77380?from_cn_redirect=1#edgeone-.E5.A5.97.E9.A4.90">max data query scope stated in the service package specifications</a> of the site (if `ZoneIds` specified) becomes invalid.<br>Values:<br>`TV`: TV; <br>`Tablet`: Tablet;<br>`Mobile`: Mobile phone; <br>`Desktop`: Desktop device;<br>`Other`: Other device;<br>`Empty`: Device type not specified.</li>
<li>`operatingSystemType`:<br>Filter by the <strong>operating system</strong>.<br>If this parameter is specified, the max query period is the last 30 days.<br>The <a href="https://intl.cloud.tencent.com/document/product/1552/77380?from_cn_redirect=1#edgeone-.E5.A5.97.E9.A4.90">max data query scope stated in the service package specifications</a> of the site (if `ZoneIds` specified) becomes invalid.<br>Values: <br>`Linux`: Linux OS; <br>`MacOS`: Mac OS;<br>`Android`: Android OS;<br>`IOS`: iOS OS;<br>`Windows`: Windows OS;<br>`NetBSD`: NetBSD OS;<br>`ChromiumOS`: Chromium OS; <br>`Bot`: Web crawler:<br>`Other`: Other OS;   <br>`Empty`: The OS is not specified.</li>
<li>`tlsVersion`:<br>Filter by the <strong>TLS version</strong>. <br>If this parameter is specified, the max query period is the last 30 days.<br>The <a href="https://intl.cloud.tencent.com/document/product/1552/77380?from_cn_redirect=1#edgeone-.E5.A5.97.E9.A4.90">max data query scope stated in the service package specifications</a> of the site (if `ZoneIds` specified) becomes invalid.<br>Values: <br>`TLS1.0`: TLS 1.0;<br>`TLS1.1`: TLS 1.1; <br>`TLS1.2`: TLS 1.2;<br>`TLS1.3`: TLS 1.3.</li>
<li>`ipVersion`<br>Filter by the <strong>specified IP version. <br>Values: <br>`4`: IPv4; <br>`6`: IPv6.
<li>`tagKey`<br>Filter by the <strong>Tag Key</strong>. </li>
<li>`tagValue`<br>Filter by the <strong>Tag Value</strong>. </li>
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
                     * Indicator list. Values: 
<li>l7Flow_outFlux: Edgeone response traffic;</li>
<li>l7Flow_inFlux: Edgeone request traffic;</li>
<li>l7Flow_outBandwidth: Edgeone response bandwidth;</li>
<li>l7Flow_inBandwidth: Edgeone request bandwidth;</li>
<li>l7Flow_request: Number of access requests;</li>
<li>l7Flow_flux: Uplink + downlink traffic of access requests;< li>
<li>l7Flow_bandwidth: Uplink + downlink bandwidth of access requests. </li>
                     */
                    std::vector<std::string> m_metricNames;
                    bool m_metricNamesHasBeenSet;

                    /**
                     * ZoneId set. This parameter is required.
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

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
                     * Filters
<li>country<br>Filter by the <strong> Country/Region</strong>. The country/region follows <a href="https://baike.baidu.com/item/ISO%203166-1/5269555">ISO 3166</a> specification. </li>
<li>`province`<br>Filter by the <strong>specified province name</strong>. It’s only available when `Area` is `mainland`.</li>
<li>`isp`<br>:   Filter by the specified ISP. It’s only available when `Area` is `mainland`.<br>Values: <br>`2`: CTCC; <br>`26`: CUCC; <br>`1046`: CMCC; <br>`3947`: CTT; <br>`38`: CERNET; <br>`43`: GWBN; <br>`0`: Others.</li>
<li>`domain`<br>: Filter by the specified <strong>sub-domain name</strong>, such as `test.example.com`</li>
<li>`url`:<br>Filter by the specified <strong>URL path<strong> (such as `/content` or `content/test.jpg`.<br>If this parameter is specified, the max query period is the last 30 days.<br>The <a href="https://intl.cloud.tencent.com/document/product/1552/77380?from_cn_redirect=1#edgeone-.E5.A5.97.E9.A4.90">max data query scope stated in the service package specifications</a> of the site (if `ZoneIds` specified) becomes invalid.</li>
<li>`referer`:<br>Filter by the specified <strong>Referer header</strong>, such as `example.com`.<br>If this parameter is specified, the max query period is the last 30 days.<br>The<a href="https://intl.cloud.tencent.com/document/product/1552/77380?from_cn_redirect=1#edgeone-.E5.A5.97.E9.A4.90">max data query scope stated in the service package specifications</a> of the site (if `ZoneIds` specified) becomes invalid.</li>
<li>`resourceType`:<br>Filter by the specified <strong>resource file type</strong>, such as `jpg`, `css`. <br>Note that if this parameter is specified, the max data query period is the last 30 days. <br>The [data query scope stated in the specifications of service package]<a href="https://intl.cloud.tencent.com/document/product/1552/77380?from_cn_redirect=1#edgeone-.E5.A5.97.E9.A4.90"> related with the `ZoneIds` becomes invalid.</li>
<li>`protocol`:<br> Filter by the specified <strong>HTTP protocol</strong> version <br>Values: <br>`HTTP/1.0`: HTTP 1.0;<br>`HTTP/1.1`: HTTP 1.1;<br>`HTTP/2.0`: HTTP 2.0;<br>`HTTP/3.0`: HTTP 3.0;<br>`WebSocket`: WebSocket.</li>
<li>`socket`:<br>Filter by the specified <strong>HTTP protocol</strong> type <br>Values: <br>`HTTP`: HTTP protocol;<br>`HTTPS`: HTTPS protocol;<br>`QUIC`: QUIC protocol.</li>
<li>statusCode<br>u2003u2003 Filter by [strong> Status Code/strong>]. lt;br>u2003u2003 If you only fill in statusCode parameter, you can query data of nearly 30 days at most; br>u2003u2003 If statusCode+Zonelds parameter is filled in at the same time, the supported query data range is the smaller of a href="https://intl.cloud.tencent.com/document/product/1552/77380?from_cn_redirect=1#edgeone-.E5.A5.97.E9.A4.90"> Maximum query range of data analysis/a> and 30 days supported by package. lt;br>u2003u2003 The corresponding Value options are as follows: br>u2003u2003 1XX: Status code of type 1xx; br>u2003u2003 100:100 status code; br>u2003u2003 101:101 status code; br>u2003u2003 102:102 status code; br>u2003u2003 2XX: Status code of type 2xx; br>u2003u2003 200:200 status code; br>u2003u2003 201:201 status code; br>u2003u2003 202:202 status code; br>u2003u2003 203:203 status code; br>u2003u2003 204:204 status code; br>u2003u2003 205:205 status code; br>u2003u2003 206:206 status code; br>u2003u2003 207:207 status code; br>u2003u2003 3XX: Status code of type 3xx; br>u2003u2003 300:300 status code; br>u2003u2003 301:301 status code; br>u2003u2003 302:302 status code; br>u2003u2003 303:303 status code; br>u2003u2003 304:304 status code; br>u2003u2003 305:305 status code; br>u2003u2003 307:307 status code; br>u2003u2003 4XX: Status code of type 4xx; br>u2003u2003 400:400 status code; br>u2003u2003 401:401 status code; br>u2003u2003 402:402 status code; br>u2003u2003 403:403 status code; br>u2003u2003 404:404 status code; br>u2003u2003 405:405 status code; br>u2003u2003 406:406 status code; br>u2003u2003 407:407 status code; br>u2003u2003 408:408 status code; br>u2003u2003 409:409 status code; br>u2003u2003 410:410 status code; br>u2003u2003 411:411 status code; br>u2003u2003 412:412 status code; br>u2003u2003 412:413 Status Code; br>u2003u2003 414:414 status code; br>u2003u2003 415:415 status code; br>u2003u2003 416:416 status code; br>u2003u2003 417:417 status code; br>u2003u2003 422:422 status code; br>u2003u2003 423:423 status code; br>u2003u2003 424:424 status code; br>u2003u2003 426:426 status code; br>u2003u2003 451:451 status code; br>u2003u2003 5XX: Status code of type 5xx; br>u2003u2003 500:500 status code; br>u2003u2003 501:501 status code; br>u2003u2003 502:502 status code; br>u2003u2003 503:503 status code; br>u2003u2003 504:504 status code; br>u2003u2003 505:505 status code; br>u2003u2003 506:506 status code; br>u2003u2003 507:507 status code; br>u2003u2003 510:510 status code; br>u2003u2003 514:514 status code; br>u2003u2003 544:544 Status Code.& lt</li>
<li>`browserType`:<br>Filter by the specified <strong>browser type</strong>. <br>If this parameter is specified, the max query period is the last 30 days.<br>The <a href="https://intl.cloud.tencent.com/document/product/1552/77380?from_cn_redirect=1#edgeone-.E5.A5.97.E9.A4.90">max data query scope stated in the service package specifications</a> of the site (if `ZoneIds` specified) becomes invalid.</li><br>Values: <br>`Firefox`: Firefox browser; <br>`Chrome`: Chrome browser; <br>`Safari`: Safari browser; <br>`MicrosoftEdge`: Microsoft Edge browser; <br>`IE`: IE browser; <br>`Opera`: Opera browser; <br>`QQBrowser`: QQ browser; <br>`LBBrowser`: LB browser; <br>`MaxthonBrowser`: Maxthon browser; <br>`SouGouBrowser`: Sogou browser; <br>`BIDUBrowser`: Baidu browser; <br>`TaoBrowser`: Tao browser; <br>`UBrowser`: UC browser; <br>`Other`: Other browsers; <br>`Empty`: The browser type is not specified; <br>`Bot`: Web crawler.</li>
<li>`deviceType`:<br>Filter by the <strong>device type</strong>.<br>If this parameter is specified, the max query period is the last 30 days.<br>The <a href="https://intl.cloud.tencent.com/document/product/1552/77380?from_cn_redirect=1#edgeone-.E5.A5.97.E9.A4.90">max data query scope stated in the service package specifications</a> of the site (if `ZoneIds` specified) becomes invalid.<br>Values:<br>`TV`: TV; <br>`Tablet`: Tablet;<br>`Mobile`: Mobile phone; <br>`Desktop`: Desktop device;<br>`Other`: Other device;<br>`Empty`: Device type not specified.</li>
<li>`operatingSystemType`:<br>Filter by the <strong>operating system</strong>.<br>If this parameter is specified, the max query period is the last 30 days.<br>The <a href="https://intl.cloud.tencent.com/document/product/1552/77380?from_cn_redirect=1#edgeone-.E5.A5.97.E9.A4.90">max data query scope stated in the service package specifications</a> of the site (if `ZoneIds` specified) becomes invalid.<br>Values: <br>`Linux`: Linux OS; <br>`MacOS`: Mac OS;<br>`Android`: Android OS;<br>`IOS`: iOS OS;<br>`Windows`: Windows OS;<br>`NetBSD`: NetBSD OS;<br>`ChromiumOS`: Chromium OS; <br>`Bot`: Web crawler:<br>`Other`: Other OS;   <br>`Empty`: The OS is not specified.</li>
<li>`tlsVersion`:<br>Filter by the <strong>TLS version</strong>. <br>If this parameter is specified, the max query period is the last 30 days.<br>The <a href="https://intl.cloud.tencent.com/document/product/1552/77380?from_cn_redirect=1#edgeone-.E5.A5.97.E9.A4.90">max data query scope stated in the service package specifications</a> of the site (if `ZoneIds` specified) becomes invalid.<br>Values: <br>`TLS1.0`: TLS 1.0;<br>`TLS1.1`: TLS 1.1; <br>`TLS1.2`: TLS 1.2;<br>`TLS1.3`: TLS 1.3.</li>
<li>`ipVersion`<br>Filter by the <strong>specified IP version. <br>Values: <br>`4`: IPv4; <br>`6`: IPv6.
<li>`tagKey`<br>Filter by the <strong>Tag Key</strong>. </li>
<li>`tagValue`<br>Filter by the <strong>Tag Value</strong>. </li>
                     */
                    std::vector<QueryCondition> m_filters;
                    bool m_filtersHasBeenSet;

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

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBETIMINGL7ANALYSISDATAREQUEST_H_
