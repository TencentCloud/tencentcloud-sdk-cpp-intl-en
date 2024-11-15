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
                     * 获取The metrics queried. Valid values:
<li> l7Flow_outFlux_country: statistics of the L7 EdgeOne response traffic by country/region;</li>
<li> l7Flow_outFlux_province: statistics of the L7 EdgeOne response traffic by province within the Chinese mainland;</li>
<li> l7Flow_outFlux_statusCode: statistics of the L7 EdgeOne response traffic by status code;</li>
<li> l7Flow_outFlux_domain: statistics of the L7 EdgeOne response traffic by domain name;</li>
<li> l7Flow_outFlux_url: statistics of the L7 EdgeOne response traffic by URL path;</li>
<li> l7Flow_outFlux_resourceType: statistics of the L7 EdgeOne response traffic by resource type;</li>
<li> l7Flow_outFlux_sip: statistics of the L7 EdgeOne response traffic by client IP;</li>
<li> l7Flow_outFlux_referers: statistics of the L7 EdgeOne response traffic by Referer;</li>
<li> l7Flow_outFlux_ua_device: statistics of the L7 EdgeOne response traffic by device type;</li>
<li> l7Flow_outFlux_ua_browser: statistics of the L7 EdgeOne response traffic by browser type;</li>
<li> l7Flow_outFlux_us_os: statistics of the L7 EdgeOne response traffic by operating system type;</li>
<li> l7Flow_request_country: statistics of the L7 access request count by country/region;</li>
<li> l7Flow_request_province: statistics of the L7 access request count by province within the Chinese mainland;</li>
<li> l7Flow_request_statusCode: statistics of the L7 access request count by status code;</li>
<li> l7Flow_request_domain: statistics of the L7 access request count by domain name;</li>
<li> l7Flow_request_url: statistics of the L7 access request count by URL path;</li>
<li> l7Flow_request_resourceType: statistics of the L7 access request count by resource type;</li>
<li> l7Flow_request_sip: statistics of the L7 access request count by client IP;</li>
<li> l7Flow_request_referer: statistics of the L7 access request count by Referer;</li>
<li> l7Flow_request_ua_device: statistics of the L7 access request count by device type;</li>
<li> l7Flow_request_ua_browser: statistics of the L7 access request count by browser type;</li>
<li> l7Flow_request_us_os: statistics of the L7 access request count by operating system type.</li>

                     * @return MetricName The metrics queried. Valid values:
<li> l7Flow_outFlux_country: statistics of the L7 EdgeOne response traffic by country/region;</li>
<li> l7Flow_outFlux_province: statistics of the L7 EdgeOne response traffic by province within the Chinese mainland;</li>
<li> l7Flow_outFlux_statusCode: statistics of the L7 EdgeOne response traffic by status code;</li>
<li> l7Flow_outFlux_domain: statistics of the L7 EdgeOne response traffic by domain name;</li>
<li> l7Flow_outFlux_url: statistics of the L7 EdgeOne response traffic by URL path;</li>
<li> l7Flow_outFlux_resourceType: statistics of the L7 EdgeOne response traffic by resource type;</li>
<li> l7Flow_outFlux_sip: statistics of the L7 EdgeOne response traffic by client IP;</li>
<li> l7Flow_outFlux_referers: statistics of the L7 EdgeOne response traffic by Referer;</li>
<li> l7Flow_outFlux_ua_device: statistics of the L7 EdgeOne response traffic by device type;</li>
<li> l7Flow_outFlux_ua_browser: statistics of the L7 EdgeOne response traffic by browser type;</li>
<li> l7Flow_outFlux_us_os: statistics of the L7 EdgeOne response traffic by operating system type;</li>
<li> l7Flow_request_country: statistics of the L7 access request count by country/region;</li>
<li> l7Flow_request_province: statistics of the L7 access request count by province within the Chinese mainland;</li>
<li> l7Flow_request_statusCode: statistics of the L7 access request count by status code;</li>
<li> l7Flow_request_domain: statistics of the L7 access request count by domain name;</li>
<li> l7Flow_request_url: statistics of the L7 access request count by URL path;</li>
<li> l7Flow_request_resourceType: statistics of the L7 access request count by resource type;</li>
<li> l7Flow_request_sip: statistics of the L7 access request count by client IP;</li>
<li> l7Flow_request_referer: statistics of the L7 access request count by Referer;</li>
<li> l7Flow_request_ua_device: statistics of the L7 access request count by device type;</li>
<li> l7Flow_request_ua_browser: statistics of the L7 access request count by browser type;</li>
<li> l7Flow_request_us_os: statistics of the L7 access request count by operating system type.</li>

                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置The metrics queried. Valid values:
<li> l7Flow_outFlux_country: statistics of the L7 EdgeOne response traffic by country/region;</li>
<li> l7Flow_outFlux_province: statistics of the L7 EdgeOne response traffic by province within the Chinese mainland;</li>
<li> l7Flow_outFlux_statusCode: statistics of the L7 EdgeOne response traffic by status code;</li>
<li> l7Flow_outFlux_domain: statistics of the L7 EdgeOne response traffic by domain name;</li>
<li> l7Flow_outFlux_url: statistics of the L7 EdgeOne response traffic by URL path;</li>
<li> l7Flow_outFlux_resourceType: statistics of the L7 EdgeOne response traffic by resource type;</li>
<li> l7Flow_outFlux_sip: statistics of the L7 EdgeOne response traffic by client IP;</li>
<li> l7Flow_outFlux_referers: statistics of the L7 EdgeOne response traffic by Referer;</li>
<li> l7Flow_outFlux_ua_device: statistics of the L7 EdgeOne response traffic by device type;</li>
<li> l7Flow_outFlux_ua_browser: statistics of the L7 EdgeOne response traffic by browser type;</li>
<li> l7Flow_outFlux_us_os: statistics of the L7 EdgeOne response traffic by operating system type;</li>
<li> l7Flow_request_country: statistics of the L7 access request count by country/region;</li>
<li> l7Flow_request_province: statistics of the L7 access request count by province within the Chinese mainland;</li>
<li> l7Flow_request_statusCode: statistics of the L7 access request count by status code;</li>
<li> l7Flow_request_domain: statistics of the L7 access request count by domain name;</li>
<li> l7Flow_request_url: statistics of the L7 access request count by URL path;</li>
<li> l7Flow_request_resourceType: statistics of the L7 access request count by resource type;</li>
<li> l7Flow_request_sip: statistics of the L7 access request count by client IP;</li>
<li> l7Flow_request_referer: statistics of the L7 access request count by Referer;</li>
<li> l7Flow_request_ua_device: statistics of the L7 access request count by device type;</li>
<li> l7Flow_request_ua_browser: statistics of the L7 access request count by browser type;</li>
<li> l7Flow_request_us_os: statistics of the L7 access request count by operating system type.</li>

                     * @param _metricName The metrics queried. Valid values:
<li> l7Flow_outFlux_country: statistics of the L7 EdgeOne response traffic by country/region;</li>
<li> l7Flow_outFlux_province: statistics of the L7 EdgeOne response traffic by province within the Chinese mainland;</li>
<li> l7Flow_outFlux_statusCode: statistics of the L7 EdgeOne response traffic by status code;</li>
<li> l7Flow_outFlux_domain: statistics of the L7 EdgeOne response traffic by domain name;</li>
<li> l7Flow_outFlux_url: statistics of the L7 EdgeOne response traffic by URL path;</li>
<li> l7Flow_outFlux_resourceType: statistics of the L7 EdgeOne response traffic by resource type;</li>
<li> l7Flow_outFlux_sip: statistics of the L7 EdgeOne response traffic by client IP;</li>
<li> l7Flow_outFlux_referers: statistics of the L7 EdgeOne response traffic by Referer;</li>
<li> l7Flow_outFlux_ua_device: statistics of the L7 EdgeOne response traffic by device type;</li>
<li> l7Flow_outFlux_ua_browser: statistics of the L7 EdgeOne response traffic by browser type;</li>
<li> l7Flow_outFlux_us_os: statistics of the L7 EdgeOne response traffic by operating system type;</li>
<li> l7Flow_request_country: statistics of the L7 access request count by country/region;</li>
<li> l7Flow_request_province: statistics of the L7 access request count by province within the Chinese mainland;</li>
<li> l7Flow_request_statusCode: statistics of the L7 access request count by status code;</li>
<li> l7Flow_request_domain: statistics of the L7 access request count by domain name;</li>
<li> l7Flow_request_url: statistics of the L7 access request count by URL path;</li>
<li> l7Flow_request_resourceType: statistics of the L7 access request count by resource type;</li>
<li> l7Flow_request_sip: statistics of the L7 access request count by client IP;</li>
<li> l7Flow_request_referer: statistics of the L7 access request count by Referer;</li>
<li> l7Flow_request_ua_device: statistics of the L7 access request count by device type;</li>
<li> l7Flow_request_ua_browser: statistics of the L7 access request count by browser type;</li>
<li> l7Flow_request_us_os: statistics of the L7 access request count by operating system type.</li>

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
                     * 获取Filter criteria. The detailed Key values are as follows:
<li>country: Filter by country/region. The country/region follows the <a href="https://baike.baidu.com/item/ISO%203166-1/5269555">ISO 3166-1 alpha-2</a> standard. Example value: CN.</li>
<li>province: Filter by province. This parameter is supported only when the service area is the Chinese mainland. For province codes, refer to the <a href="https://intl.cloud.tencent.com/document/product/228/6316?from_cn_redirect=1#.E5.8C.BA.E5.9F.9F-.2F-.E8.BF.90.E8.90.A5.E5.95.86.E6.98.A0.E5.B0.84.E8.A1.A8">Mapping Table of Provinces Within the Chinese Mainland</a>. Example value: 22.</li>
<li>isp: Filter by ISP. This parameter is supported only when the service area is the Chinese mainland. Valid values are as follows:<br> 2: China Telecom;<br> 26: China Unicom;<br> 1046: China Mobile;<br> 3947: China Tietong;<br> 38: CERNET;<br> 43: Great Wall Broadband;<br> 0: other ISPs.</li>
<li>domain: Filter by subdomain name. Example value: www.example.com.</li>
<li>url: Filter by URL path. Example value: /content or /content/test.jpg. If the url parameter is input, up to 30 days of data can be queried.</li>
<li>referer: Filter by Referer request header. Example value: http://www.example.com/. If the referer parameter is input, up to 30 days of data can be queried.</li>
<li>resourceType: Filter by resource type, which is generally the file suffix. Example value: .jpg. If the resourceType parameter is input, up to 30 days of data can be queried;</li>
<li>protocol: Filter by HTTP protocol version. Valid values are as follows:<br> HTTP/1.0;<br> HTTP/1.1;<br> HTTP/2.0;<br> HTTP/3;<br> WebSocket.</li>
<li>socket: Filter by HTTP protocol type. Valid values are as follows:<br> HTTP: HTTP protocol;<br> HTTPS: HTTPS protocol;<br> QUIC: QUIC protocol.</li>
<li>statusCode: Filter by edge status code. If the statusCode parameter is input, up to 30 days of data can be queried. Valid values are as follows:<br> 1XX: 1xx status code;<br> 2XX: 2xx status code;<br> 3XX: 3xx status code;<br> 4XX: 4xx status code;<br> 5XX: 5xx status code;<br> An integer within the range [0,600).</li>
<li>browserType: Filter by browser type. If the browserType parameter is input, up to 30 days of data can be queried. Valid values are as follows:<br> Firefox: Firefox browser;<br> Chrome: Chrome browser;<br> Safari: Safari browser;<br> Other: other browser types;<br> Empty: The browser type is empty;<br> Bot: search engine crawler;<br> MicrosoftEdge: Microsoft Edge browser;<br> IE: IE browser;<br> Opera: Opera browser;<br> QQBrowser: QQ browser;<br> LBBrowser: LB browser;<br> MaxthonBrowser: Maxthon browser;<br> SouGouBrowser: Sogou browser;<br> BIDUBrowser: Baidu browser;<br> TaoBrowser: Tao browser;<br> UBrowser: UC browser.</li>
<li>deviceType: Filter by device type. If the deviceType parameter is input, up to 30 days of data can be queried. Valid values are as follows:<br> TV: TV device;<br> Tablet: tablet device;<br> Mobile: mobile device;<br> Desktop: desktop device;<br> Other: other device types;<br> Empty: The device type is empty.</li>
<li>operatingSystemType: Filter by operating system type. If the operatingSystemType parameter is input, up to 30 days of data can be queried. Valid values are as follows:<br> Linux: Linux operating system;<br> MacOS: MacOS operating system;<br> Android: Android operating system;<br> IOS: iOS operating system;<br> Windows: Windows operating system;<br> NetBSD: NetBSD;<br> ChromiumOS: ChromiumOS;<br> Bot: search engine crawler;<br> Other: other types of operating systems;<br> Empty: The operating system is empty.</li>
<li>tlsVersion: Filter by TLS version. If the tlsVersion parameter is input, up to 30 days of data can be queried. Valid values are as follows:<br> TLS1.0;<br> TLS1.1;<br> TLS1.2;<br> TLS1.3.</li>
<li>ipVersion: Filter by IP version. Valid values are as follows:<br> 4: IPv4;<br> 6: IPv6.</li>
<li>cacheType: Filter by cache status. Valid values are as follows:<br> hit: The request hits the EdgeOne node cache and the resources are provided by the node cache. A partial cache hit for resources is also recorded as hit.<br> miss: The request does not hit the EdgeOne node cache and the resources are provided by the origin server.<br> dynamic: The requested resources cannot be cached or are not configured with node cache and are provided by the origin server.<br> other: unrecognizable cache status. Requests responded to by edge functions are recorded as other.</li>
<li>clientIp: Filter by client IP.</li>
                     * @return Filters Filter criteria. The detailed Key values are as follows:
<li>country: Filter by country/region. The country/region follows the <a href="https://baike.baidu.com/item/ISO%203166-1/5269555">ISO 3166-1 alpha-2</a> standard. Example value: CN.</li>
<li>province: Filter by province. This parameter is supported only when the service area is the Chinese mainland. For province codes, refer to the <a href="https://intl.cloud.tencent.com/document/product/228/6316?from_cn_redirect=1#.E5.8C.BA.E5.9F.9F-.2F-.E8.BF.90.E8.90.A5.E5.95.86.E6.98.A0.E5.B0.84.E8.A1.A8">Mapping Table of Provinces Within the Chinese Mainland</a>. Example value: 22.</li>
<li>isp: Filter by ISP. This parameter is supported only when the service area is the Chinese mainland. Valid values are as follows:<br> 2: China Telecom;<br> 26: China Unicom;<br> 1046: China Mobile;<br> 3947: China Tietong;<br> 38: CERNET;<br> 43: Great Wall Broadband;<br> 0: other ISPs.</li>
<li>domain: Filter by subdomain name. Example value: www.example.com.</li>
<li>url: Filter by URL path. Example value: /content or /content/test.jpg. If the url parameter is input, up to 30 days of data can be queried.</li>
<li>referer: Filter by Referer request header. Example value: http://www.example.com/. If the referer parameter is input, up to 30 days of data can be queried.</li>
<li>resourceType: Filter by resource type, which is generally the file suffix. Example value: .jpg. If the resourceType parameter is input, up to 30 days of data can be queried;</li>
<li>protocol: Filter by HTTP protocol version. Valid values are as follows:<br> HTTP/1.0;<br> HTTP/1.1;<br> HTTP/2.0;<br> HTTP/3;<br> WebSocket.</li>
<li>socket: Filter by HTTP protocol type. Valid values are as follows:<br> HTTP: HTTP protocol;<br> HTTPS: HTTPS protocol;<br> QUIC: QUIC protocol.</li>
<li>statusCode: Filter by edge status code. If the statusCode parameter is input, up to 30 days of data can be queried. Valid values are as follows:<br> 1XX: 1xx status code;<br> 2XX: 2xx status code;<br> 3XX: 3xx status code;<br> 4XX: 4xx status code;<br> 5XX: 5xx status code;<br> An integer within the range [0,600).</li>
<li>browserType: Filter by browser type. If the browserType parameter is input, up to 30 days of data can be queried. Valid values are as follows:<br> Firefox: Firefox browser;<br> Chrome: Chrome browser;<br> Safari: Safari browser;<br> Other: other browser types;<br> Empty: The browser type is empty;<br> Bot: search engine crawler;<br> MicrosoftEdge: Microsoft Edge browser;<br> IE: IE browser;<br> Opera: Opera browser;<br> QQBrowser: QQ browser;<br> LBBrowser: LB browser;<br> MaxthonBrowser: Maxthon browser;<br> SouGouBrowser: Sogou browser;<br> BIDUBrowser: Baidu browser;<br> TaoBrowser: Tao browser;<br> UBrowser: UC browser.</li>
<li>deviceType: Filter by device type. If the deviceType parameter is input, up to 30 days of data can be queried. Valid values are as follows:<br> TV: TV device;<br> Tablet: tablet device;<br> Mobile: mobile device;<br> Desktop: desktop device;<br> Other: other device types;<br> Empty: The device type is empty.</li>
<li>operatingSystemType: Filter by operating system type. If the operatingSystemType parameter is input, up to 30 days of data can be queried. Valid values are as follows:<br> Linux: Linux operating system;<br> MacOS: MacOS operating system;<br> Android: Android operating system;<br> IOS: iOS operating system;<br> Windows: Windows operating system;<br> NetBSD: NetBSD;<br> ChromiumOS: ChromiumOS;<br> Bot: search engine crawler;<br> Other: other types of operating systems;<br> Empty: The operating system is empty.</li>
<li>tlsVersion: Filter by TLS version. If the tlsVersion parameter is input, up to 30 days of data can be queried. Valid values are as follows:<br> TLS1.0;<br> TLS1.1;<br> TLS1.2;<br> TLS1.3.</li>
<li>ipVersion: Filter by IP version. Valid values are as follows:<br> 4: IPv4;<br> 6: IPv6.</li>
<li>cacheType: Filter by cache status. Valid values are as follows:<br> hit: The request hits the EdgeOne node cache and the resources are provided by the node cache. A partial cache hit for resources is also recorded as hit.<br> miss: The request does not hit the EdgeOne node cache and the resources are provided by the origin server.<br> dynamic: The requested resources cannot be cached or are not configured with node cache and are provided by the origin server.<br> other: unrecognizable cache status. Requests responded to by edge functions are recorded as other.</li>
<li>clientIp: Filter by client IP.</li>
                     * 
                     */
                    std::vector<QueryCondition> GetFilters() const;

                    /**
                     * 设置Filter criteria. The detailed Key values are as follows:
<li>country: Filter by country/region. The country/region follows the <a href="https://baike.baidu.com/item/ISO%203166-1/5269555">ISO 3166-1 alpha-2</a> standard. Example value: CN.</li>
<li>province: Filter by province. This parameter is supported only when the service area is the Chinese mainland. For province codes, refer to the <a href="https://intl.cloud.tencent.com/document/product/228/6316?from_cn_redirect=1#.E5.8C.BA.E5.9F.9F-.2F-.E8.BF.90.E8.90.A5.E5.95.86.E6.98.A0.E5.B0.84.E8.A1.A8">Mapping Table of Provinces Within the Chinese Mainland</a>. Example value: 22.</li>
<li>isp: Filter by ISP. This parameter is supported only when the service area is the Chinese mainland. Valid values are as follows:<br> 2: China Telecom;<br> 26: China Unicom;<br> 1046: China Mobile;<br> 3947: China Tietong;<br> 38: CERNET;<br> 43: Great Wall Broadband;<br> 0: other ISPs.</li>
<li>domain: Filter by subdomain name. Example value: www.example.com.</li>
<li>url: Filter by URL path. Example value: /content or /content/test.jpg. If the url parameter is input, up to 30 days of data can be queried.</li>
<li>referer: Filter by Referer request header. Example value: http://www.example.com/. If the referer parameter is input, up to 30 days of data can be queried.</li>
<li>resourceType: Filter by resource type, which is generally the file suffix. Example value: .jpg. If the resourceType parameter is input, up to 30 days of data can be queried;</li>
<li>protocol: Filter by HTTP protocol version. Valid values are as follows:<br> HTTP/1.0;<br> HTTP/1.1;<br> HTTP/2.0;<br> HTTP/3;<br> WebSocket.</li>
<li>socket: Filter by HTTP protocol type. Valid values are as follows:<br> HTTP: HTTP protocol;<br> HTTPS: HTTPS protocol;<br> QUIC: QUIC protocol.</li>
<li>statusCode: Filter by edge status code. If the statusCode parameter is input, up to 30 days of data can be queried. Valid values are as follows:<br> 1XX: 1xx status code;<br> 2XX: 2xx status code;<br> 3XX: 3xx status code;<br> 4XX: 4xx status code;<br> 5XX: 5xx status code;<br> An integer within the range [0,600).</li>
<li>browserType: Filter by browser type. If the browserType parameter is input, up to 30 days of data can be queried. Valid values are as follows:<br> Firefox: Firefox browser;<br> Chrome: Chrome browser;<br> Safari: Safari browser;<br> Other: other browser types;<br> Empty: The browser type is empty;<br> Bot: search engine crawler;<br> MicrosoftEdge: Microsoft Edge browser;<br> IE: IE browser;<br> Opera: Opera browser;<br> QQBrowser: QQ browser;<br> LBBrowser: LB browser;<br> MaxthonBrowser: Maxthon browser;<br> SouGouBrowser: Sogou browser;<br> BIDUBrowser: Baidu browser;<br> TaoBrowser: Tao browser;<br> UBrowser: UC browser.</li>
<li>deviceType: Filter by device type. If the deviceType parameter is input, up to 30 days of data can be queried. Valid values are as follows:<br> TV: TV device;<br> Tablet: tablet device;<br> Mobile: mobile device;<br> Desktop: desktop device;<br> Other: other device types;<br> Empty: The device type is empty.</li>
<li>operatingSystemType: Filter by operating system type. If the operatingSystemType parameter is input, up to 30 days of data can be queried. Valid values are as follows:<br> Linux: Linux operating system;<br> MacOS: MacOS operating system;<br> Android: Android operating system;<br> IOS: iOS operating system;<br> Windows: Windows operating system;<br> NetBSD: NetBSD;<br> ChromiumOS: ChromiumOS;<br> Bot: search engine crawler;<br> Other: other types of operating systems;<br> Empty: The operating system is empty.</li>
<li>tlsVersion: Filter by TLS version. If the tlsVersion parameter is input, up to 30 days of data can be queried. Valid values are as follows:<br> TLS1.0;<br> TLS1.1;<br> TLS1.2;<br> TLS1.3.</li>
<li>ipVersion: Filter by IP version. Valid values are as follows:<br> 4: IPv4;<br> 6: IPv6.</li>
<li>cacheType: Filter by cache status. Valid values are as follows:<br> hit: The request hits the EdgeOne node cache and the resources are provided by the node cache. A partial cache hit for resources is also recorded as hit.<br> miss: The request does not hit the EdgeOne node cache and the resources are provided by the origin server.<br> dynamic: The requested resources cannot be cached or are not configured with node cache and are provided by the origin server.<br> other: unrecognizable cache status. Requests responded to by edge functions are recorded as other.</li>
<li>clientIp: Filter by client IP.</li>
                     * @param _filters Filter criteria. The detailed Key values are as follows:
<li>country: Filter by country/region. The country/region follows the <a href="https://baike.baidu.com/item/ISO%203166-1/5269555">ISO 3166-1 alpha-2</a> standard. Example value: CN.</li>
<li>province: Filter by province. This parameter is supported only when the service area is the Chinese mainland. For province codes, refer to the <a href="https://intl.cloud.tencent.com/document/product/228/6316?from_cn_redirect=1#.E5.8C.BA.E5.9F.9F-.2F-.E8.BF.90.E8.90.A5.E5.95.86.E6.98.A0.E5.B0.84.E8.A1.A8">Mapping Table of Provinces Within the Chinese Mainland</a>. Example value: 22.</li>
<li>isp: Filter by ISP. This parameter is supported only when the service area is the Chinese mainland. Valid values are as follows:<br> 2: China Telecom;<br> 26: China Unicom;<br> 1046: China Mobile;<br> 3947: China Tietong;<br> 38: CERNET;<br> 43: Great Wall Broadband;<br> 0: other ISPs.</li>
<li>domain: Filter by subdomain name. Example value: www.example.com.</li>
<li>url: Filter by URL path. Example value: /content or /content/test.jpg. If the url parameter is input, up to 30 days of data can be queried.</li>
<li>referer: Filter by Referer request header. Example value: http://www.example.com/. If the referer parameter is input, up to 30 days of data can be queried.</li>
<li>resourceType: Filter by resource type, which is generally the file suffix. Example value: .jpg. If the resourceType parameter is input, up to 30 days of data can be queried;</li>
<li>protocol: Filter by HTTP protocol version. Valid values are as follows:<br> HTTP/1.0;<br> HTTP/1.1;<br> HTTP/2.0;<br> HTTP/3;<br> WebSocket.</li>
<li>socket: Filter by HTTP protocol type. Valid values are as follows:<br> HTTP: HTTP protocol;<br> HTTPS: HTTPS protocol;<br> QUIC: QUIC protocol.</li>
<li>statusCode: Filter by edge status code. If the statusCode parameter is input, up to 30 days of data can be queried. Valid values are as follows:<br> 1XX: 1xx status code;<br> 2XX: 2xx status code;<br> 3XX: 3xx status code;<br> 4XX: 4xx status code;<br> 5XX: 5xx status code;<br> An integer within the range [0,600).</li>
<li>browserType: Filter by browser type. If the browserType parameter is input, up to 30 days of data can be queried. Valid values are as follows:<br> Firefox: Firefox browser;<br> Chrome: Chrome browser;<br> Safari: Safari browser;<br> Other: other browser types;<br> Empty: The browser type is empty;<br> Bot: search engine crawler;<br> MicrosoftEdge: Microsoft Edge browser;<br> IE: IE browser;<br> Opera: Opera browser;<br> QQBrowser: QQ browser;<br> LBBrowser: LB browser;<br> MaxthonBrowser: Maxthon browser;<br> SouGouBrowser: Sogou browser;<br> BIDUBrowser: Baidu browser;<br> TaoBrowser: Tao browser;<br> UBrowser: UC browser.</li>
<li>deviceType: Filter by device type. If the deviceType parameter is input, up to 30 days of data can be queried. Valid values are as follows:<br> TV: TV device;<br> Tablet: tablet device;<br> Mobile: mobile device;<br> Desktop: desktop device;<br> Other: other device types;<br> Empty: The device type is empty.</li>
<li>operatingSystemType: Filter by operating system type. If the operatingSystemType parameter is input, up to 30 days of data can be queried. Valid values are as follows:<br> Linux: Linux operating system;<br> MacOS: MacOS operating system;<br> Android: Android operating system;<br> IOS: iOS operating system;<br> Windows: Windows operating system;<br> NetBSD: NetBSD;<br> ChromiumOS: ChromiumOS;<br> Bot: search engine crawler;<br> Other: other types of operating systems;<br> Empty: The operating system is empty.</li>
<li>tlsVersion: Filter by TLS version. If the tlsVersion parameter is input, up to 30 days of data can be queried. Valid values are as follows:<br> TLS1.0;<br> TLS1.1;<br> TLS1.2;<br> TLS1.3.</li>
<li>ipVersion: Filter by IP version. Valid values are as follows:<br> 4: IPv4;<br> 6: IPv6.</li>
<li>cacheType: Filter by cache status. Valid values are as follows:<br> hit: The request hits the EdgeOne node cache and the resources are provided by the node cache. A partial cache hit for resources is also recorded as hit.<br> miss: The request does not hit the EdgeOne node cache and the resources are provided by the origin server.<br> dynamic: The requested resources cannot be cached or are not configured with node cache and are provided by the origin server.<br> other: unrecognizable cache status. Requests responded to by edge functions are recorded as other.</li>
<li>clientIp: Filter by client IP.</li>
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
                     * 获取Data region. Values:
<li>overseas: Regions outside the Chinese mainland</li>
<li>mainland: Chinese mainland</li>
<li>global: Global</li>If this field is not specified, the default value `global` is used.
                     * @return Area Data region. Values:
<li>overseas: Regions outside the Chinese mainland</li>
<li>mainland: Chinese mainland</li>
<li>global: Global</li>If this field is not specified, the default value `global` is used.
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Data region. Values:
<li>overseas: Regions outside the Chinese mainland</li>
<li>mainland: Chinese mainland</li>
<li>global: Global</li>If this field is not specified, the default value `global` is used.
                     * @param _area Data region. Values:
<li>overseas: Regions outside the Chinese mainland</li>
<li>mainland: Chinese mainland</li>
<li>global: Global</li>If this field is not specified, the default value `global` is used.
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
                     * The metrics queried. Valid values:
<li> l7Flow_outFlux_country: statistics of the L7 EdgeOne response traffic by country/region;</li>
<li> l7Flow_outFlux_province: statistics of the L7 EdgeOne response traffic by province within the Chinese mainland;</li>
<li> l7Flow_outFlux_statusCode: statistics of the L7 EdgeOne response traffic by status code;</li>
<li> l7Flow_outFlux_domain: statistics of the L7 EdgeOne response traffic by domain name;</li>
<li> l7Flow_outFlux_url: statistics of the L7 EdgeOne response traffic by URL path;</li>
<li> l7Flow_outFlux_resourceType: statistics of the L7 EdgeOne response traffic by resource type;</li>
<li> l7Flow_outFlux_sip: statistics of the L7 EdgeOne response traffic by client IP;</li>
<li> l7Flow_outFlux_referers: statistics of the L7 EdgeOne response traffic by Referer;</li>
<li> l7Flow_outFlux_ua_device: statistics of the L7 EdgeOne response traffic by device type;</li>
<li> l7Flow_outFlux_ua_browser: statistics of the L7 EdgeOne response traffic by browser type;</li>
<li> l7Flow_outFlux_us_os: statistics of the L7 EdgeOne response traffic by operating system type;</li>
<li> l7Flow_request_country: statistics of the L7 access request count by country/region;</li>
<li> l7Flow_request_province: statistics of the L7 access request count by province within the Chinese mainland;</li>
<li> l7Flow_request_statusCode: statistics of the L7 access request count by status code;</li>
<li> l7Flow_request_domain: statistics of the L7 access request count by domain name;</li>
<li> l7Flow_request_url: statistics of the L7 access request count by URL path;</li>
<li> l7Flow_request_resourceType: statistics of the L7 access request count by resource type;</li>
<li> l7Flow_request_sip: statistics of the L7 access request count by client IP;</li>
<li> l7Flow_request_referer: statistics of the L7 access request count by Referer;</li>
<li> l7Flow_request_ua_device: statistics of the L7 access request count by device type;</li>
<li> l7Flow_request_ua_browser: statistics of the L7 access request count by browser type;</li>
<li> l7Flow_request_us_os: statistics of the L7 access request count by operating system type.</li>

                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * ZoneId set. This parameter is required.
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * Indicates the top N data to be queried. The maximum value is 1000. If this parameter is not input, the default value is 10, indicating querying the top 10 data.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Filter criteria. The detailed Key values are as follows:
<li>country: Filter by country/region. The country/region follows the <a href="https://baike.baidu.com/item/ISO%203166-1/5269555">ISO 3166-1 alpha-2</a> standard. Example value: CN.</li>
<li>province: Filter by province. This parameter is supported only when the service area is the Chinese mainland. For province codes, refer to the <a href="https://intl.cloud.tencent.com/document/product/228/6316?from_cn_redirect=1#.E5.8C.BA.E5.9F.9F-.2F-.E8.BF.90.E8.90.A5.E5.95.86.E6.98.A0.E5.B0.84.E8.A1.A8">Mapping Table of Provinces Within the Chinese Mainland</a>. Example value: 22.</li>
<li>isp: Filter by ISP. This parameter is supported only when the service area is the Chinese mainland. Valid values are as follows:<br> 2: China Telecom;<br> 26: China Unicom;<br> 1046: China Mobile;<br> 3947: China Tietong;<br> 38: CERNET;<br> 43: Great Wall Broadband;<br> 0: other ISPs.</li>
<li>domain: Filter by subdomain name. Example value: www.example.com.</li>
<li>url: Filter by URL path. Example value: /content or /content/test.jpg. If the url parameter is input, up to 30 days of data can be queried.</li>
<li>referer: Filter by Referer request header. Example value: http://www.example.com/. If the referer parameter is input, up to 30 days of data can be queried.</li>
<li>resourceType: Filter by resource type, which is generally the file suffix. Example value: .jpg. If the resourceType parameter is input, up to 30 days of data can be queried;</li>
<li>protocol: Filter by HTTP protocol version. Valid values are as follows:<br> HTTP/1.0;<br> HTTP/1.1;<br> HTTP/2.0;<br> HTTP/3;<br> WebSocket.</li>
<li>socket: Filter by HTTP protocol type. Valid values are as follows:<br> HTTP: HTTP protocol;<br> HTTPS: HTTPS protocol;<br> QUIC: QUIC protocol.</li>
<li>statusCode: Filter by edge status code. If the statusCode parameter is input, up to 30 days of data can be queried. Valid values are as follows:<br> 1XX: 1xx status code;<br> 2XX: 2xx status code;<br> 3XX: 3xx status code;<br> 4XX: 4xx status code;<br> 5XX: 5xx status code;<br> An integer within the range [0,600).</li>
<li>browserType: Filter by browser type. If the browserType parameter is input, up to 30 days of data can be queried. Valid values are as follows:<br> Firefox: Firefox browser;<br> Chrome: Chrome browser;<br> Safari: Safari browser;<br> Other: other browser types;<br> Empty: The browser type is empty;<br> Bot: search engine crawler;<br> MicrosoftEdge: Microsoft Edge browser;<br> IE: IE browser;<br> Opera: Opera browser;<br> QQBrowser: QQ browser;<br> LBBrowser: LB browser;<br> MaxthonBrowser: Maxthon browser;<br> SouGouBrowser: Sogou browser;<br> BIDUBrowser: Baidu browser;<br> TaoBrowser: Tao browser;<br> UBrowser: UC browser.</li>
<li>deviceType: Filter by device type. If the deviceType parameter is input, up to 30 days of data can be queried. Valid values are as follows:<br> TV: TV device;<br> Tablet: tablet device;<br> Mobile: mobile device;<br> Desktop: desktop device;<br> Other: other device types;<br> Empty: The device type is empty.</li>
<li>operatingSystemType: Filter by operating system type. If the operatingSystemType parameter is input, up to 30 days of data can be queried. Valid values are as follows:<br> Linux: Linux operating system;<br> MacOS: MacOS operating system;<br> Android: Android operating system;<br> IOS: iOS operating system;<br> Windows: Windows operating system;<br> NetBSD: NetBSD;<br> ChromiumOS: ChromiumOS;<br> Bot: search engine crawler;<br> Other: other types of operating systems;<br> Empty: The operating system is empty.</li>
<li>tlsVersion: Filter by TLS version. If the tlsVersion parameter is input, up to 30 days of data can be queried. Valid values are as follows:<br> TLS1.0;<br> TLS1.1;<br> TLS1.2;<br> TLS1.3.</li>
<li>ipVersion: Filter by IP version. Valid values are as follows:<br> 4: IPv4;<br> 6: IPv6.</li>
<li>cacheType: Filter by cache status. Valid values are as follows:<br> hit: The request hits the EdgeOne node cache and the resources are provided by the node cache. A partial cache hit for resources is also recorded as hit.<br> miss: The request does not hit the EdgeOne node cache and the resources are provided by the origin server.<br> dynamic: The requested resources cannot be cached or are not configured with node cache and are provided by the origin server.<br> other: unrecognizable cache status. Requests responded to by edge functions are recorded as other.</li>
<li>clientIp: Filter by client IP.</li>
                     */
                    std::vector<QueryCondition> m_filters;
                    bool m_filtersHasBeenSet;

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
                     * Data region. Values:
<li>overseas: Regions outside the Chinese mainland</li>
<li>mainland: Chinese mainland</li>
<li>global: Global</li>If this field is not specified, the default value `global` is used.
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBETOPL7ANALYSISDATAREQUEST_H_
