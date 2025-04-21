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
                     * 获取Metric list. Valid values:.
<Li>l7Flow_outFlux: L7 EdgeOne response traffic. Unit: byte;</li>
<Li>l7Flow_inFlux: L7 client request traffic. Unit: byte;</li>
<Li>l7Flow_flux: L7 total traffic (including EdgeOne response traffic and client request traffic). Unit: byte;</li>
<Li>l7Flow_outBandwidth: L7 EdgeOne response bandwidth. Unit: bps;</li>
<Li>l7Flow_inBandwidth: L7 client request bandwidth. Unit: bps;</li>
<Li>l7Flow_bandwidth: L7 total bandwidth (including EdgeOne response bandwidth and client request bandwidth). Unit: bps;</li>
<Li>l7Flow_request: L7 request count. Unit: times;</li>
<Li>l7Flow_avgResponseTime: Average L7 edge response time. Unit: ms (milliseconds);</li>
<Li>l7Flow_avgFirstByteResponseTime: Average L7 edge first byte response time. Unit: ms.</li>
                     * @return MetricNames Metric list. Valid values:.
<Li>l7Flow_outFlux: L7 EdgeOne response traffic. Unit: byte;</li>
<Li>l7Flow_inFlux: L7 client request traffic. Unit: byte;</li>
<Li>l7Flow_flux: L7 total traffic (including EdgeOne response traffic and client request traffic). Unit: byte;</li>
<Li>l7Flow_outBandwidth: L7 EdgeOne response bandwidth. Unit: bps;</li>
<Li>l7Flow_inBandwidth: L7 client request bandwidth. Unit: bps;</li>
<Li>l7Flow_bandwidth: L7 total bandwidth (including EdgeOne response bandwidth and client request bandwidth). Unit: bps;</li>
<Li>l7Flow_request: L7 request count. Unit: times;</li>
<Li>l7Flow_avgResponseTime: Average L7 edge response time. Unit: ms (milliseconds);</li>
<Li>l7Flow_avgFirstByteResponseTime: Average L7 edge first byte response time. Unit: ms.</li>
                     * 
                     */
                    std::vector<std::string> GetMetricNames() const;

                    /**
                     * 设置Metric list. Valid values:.
<Li>l7Flow_outFlux: L7 EdgeOne response traffic. Unit: byte;</li>
<Li>l7Flow_inFlux: L7 client request traffic. Unit: byte;</li>
<Li>l7Flow_flux: L7 total traffic (including EdgeOne response traffic and client request traffic). Unit: byte;</li>
<Li>l7Flow_outBandwidth: L7 EdgeOne response bandwidth. Unit: bps;</li>
<Li>l7Flow_inBandwidth: L7 client request bandwidth. Unit: bps;</li>
<Li>l7Flow_bandwidth: L7 total bandwidth (including EdgeOne response bandwidth and client request bandwidth). Unit: bps;</li>
<Li>l7Flow_request: L7 request count. Unit: times;</li>
<Li>l7Flow_avgResponseTime: Average L7 edge response time. Unit: ms (milliseconds);</li>
<Li>l7Flow_avgFirstByteResponseTime: Average L7 edge first byte response time. Unit: ms.</li>
                     * @param _metricNames Metric list. Valid values:.
<Li>l7Flow_outFlux: L7 EdgeOne response traffic. Unit: byte;</li>
<Li>l7Flow_inFlux: L7 client request traffic. Unit: byte;</li>
<Li>l7Flow_flux: L7 total traffic (including EdgeOne response traffic and client request traffic). Unit: byte;</li>
<Li>l7Flow_outBandwidth: L7 EdgeOne response bandwidth. Unit: bps;</li>
<Li>l7Flow_inBandwidth: L7 client request bandwidth. Unit: bps;</li>
<Li>l7Flow_bandwidth: L7 total bandwidth (including EdgeOne response bandwidth and client request bandwidth). Unit: bps;</li>
<Li>l7Flow_request: L7 request count. Unit: times;</li>
<Li>l7Flow_avgResponseTime: Average L7 edge response time. Unit: ms (milliseconds);</li>
<Li>l7Flow_avgFirstByteResponseTime: Average L7 edge first byte response time. Unit: ms.</li>
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
                     * 获取Zone ID set. This parameter is required.
                     * @return ZoneIds Zone ID set. This parameter is required.
                     * 
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置Zone ID set. This parameter is required.
                     * @param _zoneIds Zone ID set. This parameter is required.
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
                     * 获取Query period granularity. Valid values:
<li>min: 1 minute;</li>
<li>5min: 5 minutes;</li>
<li>hour: 1 hour;</li>
<li>day: 1 day.</li>If this parameter is not filled in, the granularity will be automatically calculated based on the interval between the start time and end time. Specifically, data will be queried with a granularity of min, 5min, hour, and day respectively when the period is no more than 2 hours, no more than 2 days, no more than 7 days, and over 7 days.
                     * @return Interval Query period granularity. Valid values:
<li>min: 1 minute;</li>
<li>5min: 5 minutes;</li>
<li>hour: 1 hour;</li>
<li>day: 1 day.</li>If this parameter is not filled in, the granularity will be automatically calculated based on the interval between the start time and end time. Specifically, data will be queried with a granularity of min, 5min, hour, and day respectively when the period is no more than 2 hours, no more than 2 days, no more than 7 days, and over 7 days.
                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置Query period granularity. Valid values:
<li>min: 1 minute;</li>
<li>5min: 5 minutes;</li>
<li>hour: 1 hour;</li>
<li>day: 1 day.</li>If this parameter is not filled in, the granularity will be automatically calculated based on the interval between the start time and end time. Specifically, data will be queried with a granularity of min, 5min, hour, and day respectively when the period is no more than 2 hours, no more than 2 days, no more than 7 days, and over 7 days.
                     * @param _interval Query period granularity. Valid values:
<li>min: 1 minute;</li>
<li>5min: 5 minutes;</li>
<li>hour: 1 hour;</li>
<li>day: 1 day.</li>If this parameter is not filled in, the granularity will be automatically calculated based on the interval between the start time and end time. Specifically, data will be queried with a granularity of min, 5min, hour, and day respectively when the period is no more than 2 hours, no more than 2 days, no more than 7 days, and over 7 days.
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
                     * 获取Filter criteria. The detailed key values of filter criteria are as follows:
<li>country: filter by country/region. The country/region follows the <a href="https://baike.baidu.com/item/ISO%203166-1/5269555">ISO 3166-1 alpha-2</a> standard. Example value: CN.</li>
<li>province: filter by province. This parameter is supported only when the service area is the chinese mainland. refer to the <a href="https://intl.cloud.tencent.com/document/product/228/6316?from_cn_redirect=1#.E5.8C.BA.E5.9F.9F-.2F-.E8.BF.90.E8.90.a5.E5.95.86.E6.98.a0.E5.B0.84.E8.a1.a8">mapping table of provinces within the chinese mainland</a> for province codes. Example value: 22.</li>
<li>isp: filter by isp. This parameter only supports the service area of chinese mainland. The corresponding value options are as follows:<br> 2: china telecom;<br> 26: china unicom;<br> 1046: cmcc;<br> 3947: china tietong;<br> 38: china education network;<br> 43: great wall broadband;<br> 0: other isp.</li>
<Li>domain: filter by subdomain. Example value: www.example.com.</li>
<li>url: filter by url Path. Example value: /content or /content/test.jpg. If you fill in url parameters, you can query the data of the last 30 days at most.</li>
<Li>referer: filter by referer request header. Example value: http://www.example.com/. If the referer parameter is provided, up to 30 days of data can be queried.</li>
<li>resourceType: filter by resource type. The resource type is generally a file suffix. Example value: .jpg. If the resourceType parameter is provided, data from the last 30 days can be queried at most;</li>
<li>protocol: filter by HTTP protocol version. The corresponding value options are as follows:<br> HTTP/1.0;<br> HTTP/1.1;<br> HTTP/2.0;<br> HTTP/3;<br> WebSocket.</li>
<li>socket: filter by HTTP protocol type. The corresponding value options are as follows:<br>HTTP: hypertext transfer protocol;<br>HTTPS: HTTPS protocol;<br>QUIC: QUIC protocol.</li>
<li>statusCode: filter by edge status code. If the statusCode parameter is filled in, data from the last 30 days can be queried at most. The corresponding value options are as follows:<br> 1XX: 1XX type status codes;<br> 2XX: 2XX type status codes;<br> 3XX: 3XX type status codes;<br> 4XX: 4XX type status codes;<br> 5XX: 5XX type status codes;<br> integers within the range [0,600).</li>
<li>browserType: filter by browser type. If the browserType parameter is filled in, data from the last 30 days can be queried at most. The options for The corresponding value are as follows:<br> Firefox: Firefox browser;<br> Chrome: Chrome browser;<br> Safari: Safari browser;<br> Other: Other browser types;<br> Empty: browser type is Empty;<br> Bot: search engine crawler;<br> MicrosoftEdge: microsoft edge browser;<br> IE: IE browser;<br> Opera: Opera browser;<br> QQBrowser: QQ browser;<br> LBBrowser: LB browser;<br> MaxthonBrowser: Maxthon browser;<br> SouGouBrowser: sogou browser;<br> BIDUBrowser: BIDUBrowser;<br> TaoBrowser: TaoBrowser;<br> UBrowser: UC browser.</li>
<li>deviceType: filter by device type. If the deviceType parameter is filled in, data from the last 30 days can be queried at most. The options for The corresponding value are as follows:<br> TV: TV device;<br> Tablet: Tablet device;<br> Mobile: Mobile device;<br> Desktop: Desktop device;<br> Other: Other device type;<br> Empty: device type Empty.</li>
<li>operatingSystemType: filter by operating system type. If the operatingSystemType parameter is filled in, data from the last 30 days can be queried at most. The options for The corresponding value are as follows:<br> Linux: Linux operating system;<br> MacOS: MacOS operating system;<br> Android: Android operating system;<br> IOS: IOS operating system;<br> Windows: Windows operating system;<br> NetBSD: NetBSD;<br> ChromiumOS: ChromiumOS;<br> Bot: Bot: search engine crawler;<br> Other: Other types of operating systems;<br> Empty: operating system is Empty.</li>
<li>tlsVersion: filter by TLS version. If the tlsVersion parameter is input, data from the last 30 days can be queried at most. The options for The corresponding value are as follows:<br> TLS1.0;<br> TLS1.1;<br> TLS1.2;<br> TLS1.3.</li>
<li>ipVersion: filter by IP version. The options for the corresponding value are as follows:<br> 4: IPv4;<br> 6: IPv6.</li>
<li>cacheType: filter by cache status. The options for The corresponding value are as follows:<br>hit: request hits EdgeOne node cache, and resources are provided by node cache. partial cache hit for resources is also recorded as hit.<br>miss: request does not hit EdgeOne node cache, and resources are provided by the origin server.<br>dynamic: requested resources cannot be cached/unconfigured to be cached by node cache, and resources are provided by the origin server.<br>other: unrecognizable cache status. requests responded to by edge functions are recorded as other.</li>
<li>clientIp: filter by client IP. If the clientIp parameter is filled in, data from the last 30 days can be queried at most.</li>
<li>userAgent: filter by User-Agent request header. If the userAgent parameter is filled in, data from the last 30 days can be queried at most.</li>

                     * @return Filters Filter criteria. The detailed key values of filter criteria are as follows:
<li>country: filter by country/region. The country/region follows the <a href="https://baike.baidu.com/item/ISO%203166-1/5269555">ISO 3166-1 alpha-2</a> standard. Example value: CN.</li>
<li>province: filter by province. This parameter is supported only when the service area is the chinese mainland. refer to the <a href="https://intl.cloud.tencent.com/document/product/228/6316?from_cn_redirect=1#.E5.8C.BA.E5.9F.9F-.2F-.E8.BF.90.E8.90.a5.E5.95.86.E6.98.a0.E5.B0.84.E8.a1.a8">mapping table of provinces within the chinese mainland</a> for province codes. Example value: 22.</li>
<li>isp: filter by isp. This parameter only supports the service area of chinese mainland. The corresponding value options are as follows:<br> 2: china telecom;<br> 26: china unicom;<br> 1046: cmcc;<br> 3947: china tietong;<br> 38: china education network;<br> 43: great wall broadband;<br> 0: other isp.</li>
<Li>domain: filter by subdomain. Example value: www.example.com.</li>
<li>url: filter by url Path. Example value: /content or /content/test.jpg. If you fill in url parameters, you can query the data of the last 30 days at most.</li>
<Li>referer: filter by referer request header. Example value: http://www.example.com/. If the referer parameter is provided, up to 30 days of data can be queried.</li>
<li>resourceType: filter by resource type. The resource type is generally a file suffix. Example value: .jpg. If the resourceType parameter is provided, data from the last 30 days can be queried at most;</li>
<li>protocol: filter by HTTP protocol version. The corresponding value options are as follows:<br> HTTP/1.0;<br> HTTP/1.1;<br> HTTP/2.0;<br> HTTP/3;<br> WebSocket.</li>
<li>socket: filter by HTTP protocol type. The corresponding value options are as follows:<br>HTTP: hypertext transfer protocol;<br>HTTPS: HTTPS protocol;<br>QUIC: QUIC protocol.</li>
<li>statusCode: filter by edge status code. If the statusCode parameter is filled in, data from the last 30 days can be queried at most. The corresponding value options are as follows:<br> 1XX: 1XX type status codes;<br> 2XX: 2XX type status codes;<br> 3XX: 3XX type status codes;<br> 4XX: 4XX type status codes;<br> 5XX: 5XX type status codes;<br> integers within the range [0,600).</li>
<li>browserType: filter by browser type. If the browserType parameter is filled in, data from the last 30 days can be queried at most. The options for The corresponding value are as follows:<br> Firefox: Firefox browser;<br> Chrome: Chrome browser;<br> Safari: Safari browser;<br> Other: Other browser types;<br> Empty: browser type is Empty;<br> Bot: search engine crawler;<br> MicrosoftEdge: microsoft edge browser;<br> IE: IE browser;<br> Opera: Opera browser;<br> QQBrowser: QQ browser;<br> LBBrowser: LB browser;<br> MaxthonBrowser: Maxthon browser;<br> SouGouBrowser: sogou browser;<br> BIDUBrowser: BIDUBrowser;<br> TaoBrowser: TaoBrowser;<br> UBrowser: UC browser.</li>
<li>deviceType: filter by device type. If the deviceType parameter is filled in, data from the last 30 days can be queried at most. The options for The corresponding value are as follows:<br> TV: TV device;<br> Tablet: Tablet device;<br> Mobile: Mobile device;<br> Desktop: Desktop device;<br> Other: Other device type;<br> Empty: device type Empty.</li>
<li>operatingSystemType: filter by operating system type. If the operatingSystemType parameter is filled in, data from the last 30 days can be queried at most. The options for The corresponding value are as follows:<br> Linux: Linux operating system;<br> MacOS: MacOS operating system;<br> Android: Android operating system;<br> IOS: IOS operating system;<br> Windows: Windows operating system;<br> NetBSD: NetBSD;<br> ChromiumOS: ChromiumOS;<br> Bot: Bot: search engine crawler;<br> Other: Other types of operating systems;<br> Empty: operating system is Empty.</li>
<li>tlsVersion: filter by TLS version. If the tlsVersion parameter is input, data from the last 30 days can be queried at most. The options for The corresponding value are as follows:<br> TLS1.0;<br> TLS1.1;<br> TLS1.2;<br> TLS1.3.</li>
<li>ipVersion: filter by IP version. The options for the corresponding value are as follows:<br> 4: IPv4;<br> 6: IPv6.</li>
<li>cacheType: filter by cache status. The options for The corresponding value are as follows:<br>hit: request hits EdgeOne node cache, and resources are provided by node cache. partial cache hit for resources is also recorded as hit.<br>miss: request does not hit EdgeOne node cache, and resources are provided by the origin server.<br>dynamic: requested resources cannot be cached/unconfigured to be cached by node cache, and resources are provided by the origin server.<br>other: unrecognizable cache status. requests responded to by edge functions are recorded as other.</li>
<li>clientIp: filter by client IP. If the clientIp parameter is filled in, data from the last 30 days can be queried at most.</li>
<li>userAgent: filter by User-Agent request header. If the userAgent parameter is filled in, data from the last 30 days can be queried at most.</li>

                     * 
                     */
                    std::vector<QueryCondition> GetFilters() const;

                    /**
                     * 设置Filter criteria. The detailed key values of filter criteria are as follows:
<li>country: filter by country/region. The country/region follows the <a href="https://baike.baidu.com/item/ISO%203166-1/5269555">ISO 3166-1 alpha-2</a> standard. Example value: CN.</li>
<li>province: filter by province. This parameter is supported only when the service area is the chinese mainland. refer to the <a href="https://intl.cloud.tencent.com/document/product/228/6316?from_cn_redirect=1#.E5.8C.BA.E5.9F.9F-.2F-.E8.BF.90.E8.90.a5.E5.95.86.E6.98.a0.E5.B0.84.E8.a1.a8">mapping table of provinces within the chinese mainland</a> for province codes. Example value: 22.</li>
<li>isp: filter by isp. This parameter only supports the service area of chinese mainland. The corresponding value options are as follows:<br> 2: china telecom;<br> 26: china unicom;<br> 1046: cmcc;<br> 3947: china tietong;<br> 38: china education network;<br> 43: great wall broadband;<br> 0: other isp.</li>
<Li>domain: filter by subdomain. Example value: www.example.com.</li>
<li>url: filter by url Path. Example value: /content or /content/test.jpg. If you fill in url parameters, you can query the data of the last 30 days at most.</li>
<Li>referer: filter by referer request header. Example value: http://www.example.com/. If the referer parameter is provided, up to 30 days of data can be queried.</li>
<li>resourceType: filter by resource type. The resource type is generally a file suffix. Example value: .jpg. If the resourceType parameter is provided, data from the last 30 days can be queried at most;</li>
<li>protocol: filter by HTTP protocol version. The corresponding value options are as follows:<br> HTTP/1.0;<br> HTTP/1.1;<br> HTTP/2.0;<br> HTTP/3;<br> WebSocket.</li>
<li>socket: filter by HTTP protocol type. The corresponding value options are as follows:<br>HTTP: hypertext transfer protocol;<br>HTTPS: HTTPS protocol;<br>QUIC: QUIC protocol.</li>
<li>statusCode: filter by edge status code. If the statusCode parameter is filled in, data from the last 30 days can be queried at most. The corresponding value options are as follows:<br> 1XX: 1XX type status codes;<br> 2XX: 2XX type status codes;<br> 3XX: 3XX type status codes;<br> 4XX: 4XX type status codes;<br> 5XX: 5XX type status codes;<br> integers within the range [0,600).</li>
<li>browserType: filter by browser type. If the browserType parameter is filled in, data from the last 30 days can be queried at most. The options for The corresponding value are as follows:<br> Firefox: Firefox browser;<br> Chrome: Chrome browser;<br> Safari: Safari browser;<br> Other: Other browser types;<br> Empty: browser type is Empty;<br> Bot: search engine crawler;<br> MicrosoftEdge: microsoft edge browser;<br> IE: IE browser;<br> Opera: Opera browser;<br> QQBrowser: QQ browser;<br> LBBrowser: LB browser;<br> MaxthonBrowser: Maxthon browser;<br> SouGouBrowser: sogou browser;<br> BIDUBrowser: BIDUBrowser;<br> TaoBrowser: TaoBrowser;<br> UBrowser: UC browser.</li>
<li>deviceType: filter by device type. If the deviceType parameter is filled in, data from the last 30 days can be queried at most. The options for The corresponding value are as follows:<br> TV: TV device;<br> Tablet: Tablet device;<br> Mobile: Mobile device;<br> Desktop: Desktop device;<br> Other: Other device type;<br> Empty: device type Empty.</li>
<li>operatingSystemType: filter by operating system type. If the operatingSystemType parameter is filled in, data from the last 30 days can be queried at most. The options for The corresponding value are as follows:<br> Linux: Linux operating system;<br> MacOS: MacOS operating system;<br> Android: Android operating system;<br> IOS: IOS operating system;<br> Windows: Windows operating system;<br> NetBSD: NetBSD;<br> ChromiumOS: ChromiumOS;<br> Bot: Bot: search engine crawler;<br> Other: Other types of operating systems;<br> Empty: operating system is Empty.</li>
<li>tlsVersion: filter by TLS version. If the tlsVersion parameter is input, data from the last 30 days can be queried at most. The options for The corresponding value are as follows:<br> TLS1.0;<br> TLS1.1;<br> TLS1.2;<br> TLS1.3.</li>
<li>ipVersion: filter by IP version. The options for the corresponding value are as follows:<br> 4: IPv4;<br> 6: IPv6.</li>
<li>cacheType: filter by cache status. The options for The corresponding value are as follows:<br>hit: request hits EdgeOne node cache, and resources are provided by node cache. partial cache hit for resources is also recorded as hit.<br>miss: request does not hit EdgeOne node cache, and resources are provided by the origin server.<br>dynamic: requested resources cannot be cached/unconfigured to be cached by node cache, and resources are provided by the origin server.<br>other: unrecognizable cache status. requests responded to by edge functions are recorded as other.</li>
<li>clientIp: filter by client IP. If the clientIp parameter is filled in, data from the last 30 days can be queried at most.</li>
<li>userAgent: filter by User-Agent request header. If the userAgent parameter is filled in, data from the last 30 days can be queried at most.</li>

                     * @param _filters Filter criteria. The detailed key values of filter criteria are as follows:
<li>country: filter by country/region. The country/region follows the <a href="https://baike.baidu.com/item/ISO%203166-1/5269555">ISO 3166-1 alpha-2</a> standard. Example value: CN.</li>
<li>province: filter by province. This parameter is supported only when the service area is the chinese mainland. refer to the <a href="https://intl.cloud.tencent.com/document/product/228/6316?from_cn_redirect=1#.E5.8C.BA.E5.9F.9F-.2F-.E8.BF.90.E8.90.a5.E5.95.86.E6.98.a0.E5.B0.84.E8.a1.a8">mapping table of provinces within the chinese mainland</a> for province codes. Example value: 22.</li>
<li>isp: filter by isp. This parameter only supports the service area of chinese mainland. The corresponding value options are as follows:<br> 2: china telecom;<br> 26: china unicom;<br> 1046: cmcc;<br> 3947: china tietong;<br> 38: china education network;<br> 43: great wall broadband;<br> 0: other isp.</li>
<Li>domain: filter by subdomain. Example value: www.example.com.</li>
<li>url: filter by url Path. Example value: /content or /content/test.jpg. If you fill in url parameters, you can query the data of the last 30 days at most.</li>
<Li>referer: filter by referer request header. Example value: http://www.example.com/. If the referer parameter is provided, up to 30 days of data can be queried.</li>
<li>resourceType: filter by resource type. The resource type is generally a file suffix. Example value: .jpg. If the resourceType parameter is provided, data from the last 30 days can be queried at most;</li>
<li>protocol: filter by HTTP protocol version. The corresponding value options are as follows:<br> HTTP/1.0;<br> HTTP/1.1;<br> HTTP/2.0;<br> HTTP/3;<br> WebSocket.</li>
<li>socket: filter by HTTP protocol type. The corresponding value options are as follows:<br>HTTP: hypertext transfer protocol;<br>HTTPS: HTTPS protocol;<br>QUIC: QUIC protocol.</li>
<li>statusCode: filter by edge status code. If the statusCode parameter is filled in, data from the last 30 days can be queried at most. The corresponding value options are as follows:<br> 1XX: 1XX type status codes;<br> 2XX: 2XX type status codes;<br> 3XX: 3XX type status codes;<br> 4XX: 4XX type status codes;<br> 5XX: 5XX type status codes;<br> integers within the range [0,600).</li>
<li>browserType: filter by browser type. If the browserType parameter is filled in, data from the last 30 days can be queried at most. The options for The corresponding value are as follows:<br> Firefox: Firefox browser;<br> Chrome: Chrome browser;<br> Safari: Safari browser;<br> Other: Other browser types;<br> Empty: browser type is Empty;<br> Bot: search engine crawler;<br> MicrosoftEdge: microsoft edge browser;<br> IE: IE browser;<br> Opera: Opera browser;<br> QQBrowser: QQ browser;<br> LBBrowser: LB browser;<br> MaxthonBrowser: Maxthon browser;<br> SouGouBrowser: sogou browser;<br> BIDUBrowser: BIDUBrowser;<br> TaoBrowser: TaoBrowser;<br> UBrowser: UC browser.</li>
<li>deviceType: filter by device type. If the deviceType parameter is filled in, data from the last 30 days can be queried at most. The options for The corresponding value are as follows:<br> TV: TV device;<br> Tablet: Tablet device;<br> Mobile: Mobile device;<br> Desktop: Desktop device;<br> Other: Other device type;<br> Empty: device type Empty.</li>
<li>operatingSystemType: filter by operating system type. If the operatingSystemType parameter is filled in, data from the last 30 days can be queried at most. The options for The corresponding value are as follows:<br> Linux: Linux operating system;<br> MacOS: MacOS operating system;<br> Android: Android operating system;<br> IOS: IOS operating system;<br> Windows: Windows operating system;<br> NetBSD: NetBSD;<br> ChromiumOS: ChromiumOS;<br> Bot: Bot: search engine crawler;<br> Other: Other types of operating systems;<br> Empty: operating system is Empty.</li>
<li>tlsVersion: filter by TLS version. If the tlsVersion parameter is input, data from the last 30 days can be queried at most. The options for The corresponding value are as follows:<br> TLS1.0;<br> TLS1.1;<br> TLS1.2;<br> TLS1.3.</li>
<li>ipVersion: filter by IP version. The options for the corresponding value are as follows:<br> 4: IPv4;<br> 6: IPv6.</li>
<li>cacheType: filter by cache status. The options for The corresponding value are as follows:<br>hit: request hits EdgeOne node cache, and resources are provided by node cache. partial cache hit for resources is also recorded as hit.<br>miss: request does not hit EdgeOne node cache, and resources are provided by the origin server.<br>dynamic: requested resources cannot be cached/unconfigured to be cached by node cache, and resources are provided by the origin server.<br>other: unrecognizable cache status. requests responded to by edge functions are recorded as other.</li>
<li>clientIp: filter by client IP. If the clientIp parameter is filled in, data from the last 30 days can be queried at most.</li>
<li>userAgent: filter by User-Agent request header. If the userAgent parameter is filled in, data from the last 30 days can be queried at most.</li>

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
                     * 获取Data ownership region. This parameter is deprecated. Please filter data by client region in Filters.country.
                     * @return Area Data ownership region. This parameter is deprecated. Please filter data by client region in Filters.country.
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Data ownership region. This parameter is deprecated. Please filter data by client region in Filters.country.
                     * @param _area Data ownership region. This parameter is deprecated. Please filter data by client region in Filters.country.
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
                     * Metric list. Valid values:.
<Li>l7Flow_outFlux: L7 EdgeOne response traffic. Unit: byte;</li>
<Li>l7Flow_inFlux: L7 client request traffic. Unit: byte;</li>
<Li>l7Flow_flux: L7 total traffic (including EdgeOne response traffic and client request traffic). Unit: byte;</li>
<Li>l7Flow_outBandwidth: L7 EdgeOne response bandwidth. Unit: bps;</li>
<Li>l7Flow_inBandwidth: L7 client request bandwidth. Unit: bps;</li>
<Li>l7Flow_bandwidth: L7 total bandwidth (including EdgeOne response bandwidth and client request bandwidth). Unit: bps;</li>
<Li>l7Flow_request: L7 request count. Unit: times;</li>
<Li>l7Flow_avgResponseTime: Average L7 edge response time. Unit: ms (milliseconds);</li>
<Li>l7Flow_avgFirstByteResponseTime: Average L7 edge first byte response time. Unit: ms.</li>
                     */
                    std::vector<std::string> m_metricNames;
                    bool m_metricNamesHasBeenSet;

                    /**
                     * Zone ID set. This parameter is required.
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * Query period granularity. Valid values:
<li>min: 1 minute;</li>
<li>5min: 5 minutes;</li>
<li>hour: 1 hour;</li>
<li>day: 1 day.</li>If this parameter is not filled in, the granularity will be automatically calculated based on the interval between the start time and end time. Specifically, data will be queried with a granularity of min, 5min, hour, and day respectively when the period is no more than 2 hours, no more than 2 days, no more than 7 days, and over 7 days.
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * Filter criteria. The detailed key values of filter criteria are as follows:
<li>country: filter by country/region. The country/region follows the <a href="https://baike.baidu.com/item/ISO%203166-1/5269555">ISO 3166-1 alpha-2</a> standard. Example value: CN.</li>
<li>province: filter by province. This parameter is supported only when the service area is the chinese mainland. refer to the <a href="https://intl.cloud.tencent.com/document/product/228/6316?from_cn_redirect=1#.E5.8C.BA.E5.9F.9F-.2F-.E8.BF.90.E8.90.a5.E5.95.86.E6.98.a0.E5.B0.84.E8.a1.a8">mapping table of provinces within the chinese mainland</a> for province codes. Example value: 22.</li>
<li>isp: filter by isp. This parameter only supports the service area of chinese mainland. The corresponding value options are as follows:<br> 2: china telecom;<br> 26: china unicom;<br> 1046: cmcc;<br> 3947: china tietong;<br> 38: china education network;<br> 43: great wall broadband;<br> 0: other isp.</li>
<Li>domain: filter by subdomain. Example value: www.example.com.</li>
<li>url: filter by url Path. Example value: /content or /content/test.jpg. If you fill in url parameters, you can query the data of the last 30 days at most.</li>
<Li>referer: filter by referer request header. Example value: http://www.example.com/. If the referer parameter is provided, up to 30 days of data can be queried.</li>
<li>resourceType: filter by resource type. The resource type is generally a file suffix. Example value: .jpg. If the resourceType parameter is provided, data from the last 30 days can be queried at most;</li>
<li>protocol: filter by HTTP protocol version. The corresponding value options are as follows:<br> HTTP/1.0;<br> HTTP/1.1;<br> HTTP/2.0;<br> HTTP/3;<br> WebSocket.</li>
<li>socket: filter by HTTP protocol type. The corresponding value options are as follows:<br>HTTP: hypertext transfer protocol;<br>HTTPS: HTTPS protocol;<br>QUIC: QUIC protocol.</li>
<li>statusCode: filter by edge status code. If the statusCode parameter is filled in, data from the last 30 days can be queried at most. The corresponding value options are as follows:<br> 1XX: 1XX type status codes;<br> 2XX: 2XX type status codes;<br> 3XX: 3XX type status codes;<br> 4XX: 4XX type status codes;<br> 5XX: 5XX type status codes;<br> integers within the range [0,600).</li>
<li>browserType: filter by browser type. If the browserType parameter is filled in, data from the last 30 days can be queried at most. The options for The corresponding value are as follows:<br> Firefox: Firefox browser;<br> Chrome: Chrome browser;<br> Safari: Safari browser;<br> Other: Other browser types;<br> Empty: browser type is Empty;<br> Bot: search engine crawler;<br> MicrosoftEdge: microsoft edge browser;<br> IE: IE browser;<br> Opera: Opera browser;<br> QQBrowser: QQ browser;<br> LBBrowser: LB browser;<br> MaxthonBrowser: Maxthon browser;<br> SouGouBrowser: sogou browser;<br> BIDUBrowser: BIDUBrowser;<br> TaoBrowser: TaoBrowser;<br> UBrowser: UC browser.</li>
<li>deviceType: filter by device type. If the deviceType parameter is filled in, data from the last 30 days can be queried at most. The options for The corresponding value are as follows:<br> TV: TV device;<br> Tablet: Tablet device;<br> Mobile: Mobile device;<br> Desktop: Desktop device;<br> Other: Other device type;<br> Empty: device type Empty.</li>
<li>operatingSystemType: filter by operating system type. If the operatingSystemType parameter is filled in, data from the last 30 days can be queried at most. The options for The corresponding value are as follows:<br> Linux: Linux operating system;<br> MacOS: MacOS operating system;<br> Android: Android operating system;<br> IOS: IOS operating system;<br> Windows: Windows operating system;<br> NetBSD: NetBSD;<br> ChromiumOS: ChromiumOS;<br> Bot: Bot: search engine crawler;<br> Other: Other types of operating systems;<br> Empty: operating system is Empty.</li>
<li>tlsVersion: filter by TLS version. If the tlsVersion parameter is input, data from the last 30 days can be queried at most. The options for The corresponding value are as follows:<br> TLS1.0;<br> TLS1.1;<br> TLS1.2;<br> TLS1.3.</li>
<li>ipVersion: filter by IP version. The options for the corresponding value are as follows:<br> 4: IPv4;<br> 6: IPv6.</li>
<li>cacheType: filter by cache status. The options for The corresponding value are as follows:<br>hit: request hits EdgeOne node cache, and resources are provided by node cache. partial cache hit for resources is also recorded as hit.<br>miss: request does not hit EdgeOne node cache, and resources are provided by the origin server.<br>dynamic: requested resources cannot be cached/unconfigured to be cached by node cache, and resources are provided by the origin server.<br>other: unrecognizable cache status. requests responded to by edge functions are recorded as other.</li>
<li>clientIp: filter by client IP. If the clientIp parameter is filled in, data from the last 30 days can be queried at most.</li>
<li>userAgent: filter by User-Agent request header. If the userAgent parameter is filled in, data from the last 30 days can be queried at most.</li>

                     */
                    std::vector<QueryCondition> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Data ownership region. This parameter is deprecated. Please filter data by client region in Filters.country.
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBETIMINGL7ANALYSISDATAREQUEST_H_
