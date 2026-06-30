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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBECDNDATAREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBECDNDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * DescribeCdnData request structure.
                */
                class DescribeCdnDataRequest : public AbstractModel
                {
                public:
                    DescribeCdnDataRequest();
                    ~DescribeCdnDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start time of the query, e.g., 2018-09-04 10:40:00.
The specified start time will be rounded down based on the granularity parameter `Interval`. For example, if you set the start time to 2018-09-04 10:40:00 with 1-hour granularity, the time will be rounded down to 2018-09-04 10:00:00.
The period between the start time and end time can be up to 90 days.
                     * @return StartTime Start time of the query, e.g., 2018-09-04 10:40:00.
The specified start time will be rounded down based on the granularity parameter `Interval`. For example, if you set the start time to 2018-09-04 10:40:00 with 1-hour granularity, the time will be rounded down to 2018-09-04 10:00:00.
The period between the start time and end time can be up to 90 days.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time of the query, e.g., 2018-09-04 10:40:00.
The specified start time will be rounded down based on the granularity parameter `Interval`. For example, if you set the start time to 2018-09-04 10:40:00 with 1-hour granularity, the time will be rounded down to 2018-09-04 10:00:00.
The period between the start time and end time can be up to 90 days.
                     * @param _startTime Start time of the query, e.g., 2018-09-04 10:40:00.
The specified start time will be rounded down based on the granularity parameter `Interval`. For example, if you set the start time to 2018-09-04 10:40:00 with 1-hour granularity, the time will be rounded down to 2018-09-04 10:00:00.
The period between the start time and end time can be up to 90 days.
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
                     * 获取End time of the query, e.g. 2018-09-04 10:40:00.
The specified end time will be rounded down based on the granularity parameter `Interval`. For example, if you set the end time to 2018-09-04 10:40:00 with 1-hour granularity, the time will be rounded down to 2018-09-04 10:00:00.
The period between the start time and end time can be up to 90 days.
                     * @return EndTime End time of the query, e.g. 2018-09-04 10:40:00.
The specified end time will be rounded down based on the granularity parameter `Interval`. For example, if you set the end time to 2018-09-04 10:40:00 with 1-hour granularity, the time will be rounded down to 2018-09-04 10:00:00.
The period between the start time and end time can be up to 90 days.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time of the query, e.g. 2018-09-04 10:40:00.
The specified end time will be rounded down based on the granularity parameter `Interval`. For example, if you set the end time to 2018-09-04 10:40:00 with 1-hour granularity, the time will be rounded down to 2018-09-04 10:00:00.
The period between the start time and end time can be up to 90 days.
                     * @param _endTime End time of the query, e.g. 2018-09-04 10:40:00.
The specified end time will be rounded down based on the granularity parameter `Interval`. For example, if you set the end time to 2018-09-04 10:40:00 with 1-hour granularity, the time will be rounded down to 2018-09-04 10:00:00.
The period between the start time and end time can be up to 90 days.
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
                     * 获取Specifies the metric to query, which can be:
`flux`: Traffic (in bytes)
`fluxIn`: Upstream traffic (in bytes), only used for the `ecdn` product
`fluxOut`: Downstream traffic (in bytes), only used for the `ecdn` product
`bandwidth`: Bandwidth (in bps)
`bandwidthIn`: Upstream bandwidth (in bps), only used for the `ecdn` product
`bandwidthOut`: Downstream bandwidth (in bps), only used for the `ecdn` product
`request`: Number of requests
`hitRequest`: Number of hit requests
`requestHitRate`: Request hit rate (in % with two decimal digits)
`hitFlux`: Hit traffic (in bytes)
`fluxHitRate`: Traffic hit rate (in % with two decimal digits)
`statusCode`: Status code. The aggregate data for 2xx, 3xx, 4xx, and 5xx status codes will be returned (in entries)
`2xx`: Returns the aggregate list of 2xx status codes and the data for status codes starting with 2 (in entries)
`3xx`: Returns the aggregate list of 3xx status codes and the data for status codes starting with 3 (in entries)
`4xx`: Returns the aggregate list of 4xx status codes and the data for status codes starting with 4 (in entries)
`5xx`: Returns the aggregate list of 5xx status codes and the data for status codes starting with 5 (in entries)
Specifies the status code to query. The return will be empty if the status code has never been generated.
                     * @return Metric Specifies the metric to query, which can be:
`flux`: Traffic (in bytes)
`fluxIn`: Upstream traffic (in bytes), only used for the `ecdn` product
`fluxOut`: Downstream traffic (in bytes), only used for the `ecdn` product
`bandwidth`: Bandwidth (in bps)
`bandwidthIn`: Upstream bandwidth (in bps), only used for the `ecdn` product
`bandwidthOut`: Downstream bandwidth (in bps), only used for the `ecdn` product
`request`: Number of requests
`hitRequest`: Number of hit requests
`requestHitRate`: Request hit rate (in % with two decimal digits)
`hitFlux`: Hit traffic (in bytes)
`fluxHitRate`: Traffic hit rate (in % with two decimal digits)
`statusCode`: Status code. The aggregate data for 2xx, 3xx, 4xx, and 5xx status codes will be returned (in entries)
`2xx`: Returns the aggregate list of 2xx status codes and the data for status codes starting with 2 (in entries)
`3xx`: Returns the aggregate list of 3xx status codes and the data for status codes starting with 3 (in entries)
`4xx`: Returns the aggregate list of 4xx status codes and the data for status codes starting with 4 (in entries)
`5xx`: Returns the aggregate list of 5xx status codes and the data for status codes starting with 5 (in entries)
Specifies the status code to query. The return will be empty if the status code has never been generated.
                     * 
                     */
                    std::string GetMetric() const;

                    /**
                     * 设置Specifies the metric to query, which can be:
`flux`: Traffic (in bytes)
`fluxIn`: Upstream traffic (in bytes), only used for the `ecdn` product
`fluxOut`: Downstream traffic (in bytes), only used for the `ecdn` product
`bandwidth`: Bandwidth (in bps)
`bandwidthIn`: Upstream bandwidth (in bps), only used for the `ecdn` product
`bandwidthOut`: Downstream bandwidth (in bps), only used for the `ecdn` product
`request`: Number of requests
`hitRequest`: Number of hit requests
`requestHitRate`: Request hit rate (in % with two decimal digits)
`hitFlux`: Hit traffic (in bytes)
`fluxHitRate`: Traffic hit rate (in % with two decimal digits)
`statusCode`: Status code. The aggregate data for 2xx, 3xx, 4xx, and 5xx status codes will be returned (in entries)
`2xx`: Returns the aggregate list of 2xx status codes and the data for status codes starting with 2 (in entries)
`3xx`: Returns the aggregate list of 3xx status codes and the data for status codes starting with 3 (in entries)
`4xx`: Returns the aggregate list of 4xx status codes and the data for status codes starting with 4 (in entries)
`5xx`: Returns the aggregate list of 5xx status codes and the data for status codes starting with 5 (in entries)
Specifies the status code to query. The return will be empty if the status code has never been generated.
                     * @param _metric Specifies the metric to query, which can be:
`flux`: Traffic (in bytes)
`fluxIn`: Upstream traffic (in bytes), only used for the `ecdn` product
`fluxOut`: Downstream traffic (in bytes), only used for the `ecdn` product
`bandwidth`: Bandwidth (in bps)
`bandwidthIn`: Upstream bandwidth (in bps), only used for the `ecdn` product
`bandwidthOut`: Downstream bandwidth (in bps), only used for the `ecdn` product
`request`: Number of requests
`hitRequest`: Number of hit requests
`requestHitRate`: Request hit rate (in % with two decimal digits)
`hitFlux`: Hit traffic (in bytes)
`fluxHitRate`: Traffic hit rate (in % with two decimal digits)
`statusCode`: Status code. The aggregate data for 2xx, 3xx, 4xx, and 5xx status codes will be returned (in entries)
`2xx`: Returns the aggregate list of 2xx status codes and the data for status codes starting with 2 (in entries)
`3xx`: Returns the aggregate list of 3xx status codes and the data for status codes starting with 3 (in entries)
`4xx`: Returns the aggregate list of 4xx status codes and the data for status codes starting with 4 (in entries)
`5xx`: Returns the aggregate list of 5xx status codes and the data for status codes starting with 5 (in entries)
Specifies the status code to query. The return will be empty if the status code has never been generated.
                     * 
                     */
                    void SetMetric(const std::string& _metric);

                    /**
                     * 判断参数 Metric 是否已赋值
                     * @return Metric 是否已赋值
                     * 
                     */
                    bool MetricHasBeenSet() const;

                    /**
                     * 获取Specifies the list of domain names to be queried
You can specify one or more domain names.
Up to 30 domain names can be queried in one request.
If this parameter is not specified, it means to query all domain names under the current account.
                     * @return Domains Specifies the list of domain names to be queried
You can specify one or more domain names.
Up to 30 domain names can be queried in one request.
If this parameter is not specified, it means to query all domain names under the current account.
                     * 
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置Specifies the list of domain names to be queried
You can specify one or more domain names.
Up to 30 domain names can be queried in one request.
If this parameter is not specified, it means to query all domain names under the current account.
                     * @param _domains Specifies the list of domain names to be queried
You can specify one or more domain names.
Up to 30 domain names can be queried in one request.
If this parameter is not specified, it means to query all domain names under the current account.
                     * 
                     */
                    void SetDomains(const std::vector<std::string>& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     * 
                     */
                    bool DomainsHasBeenSet() const;

                    /**
                     * 获取Specifies the project ID to be queried. [Check project ID in the console](https://console.cloud.tencent.com/project)
Note that `Project` will be ignored if `Domains` is specified.
                     * @return Project Specifies the project ID to be queried. [Check project ID in the console](https://console.cloud.tencent.com/project)
Note that `Project` will be ignored if `Domains` is specified.
                     * 
                     */
                    int64_t GetProject() const;

                    /**
                     * 设置Specifies the project ID to be queried. [Check project ID in the console](https://console.cloud.tencent.com/project)
Note that `Project` will be ignored if `Domains` is specified.
                     * @param _project Specifies the project ID to be queried. [Check project ID in the console](https://console.cloud.tencent.com/project)
Note that `Project` will be ignored if `Domains` is specified.
                     * 
                     */
                    void SetProject(const int64_t& _project);

                    /**
                     * 判断参数 Project 是否已赋值
                     * @return Project 是否已赋值
                     * 
                     */
                    bool ProjectHasBeenSet() const;

                    /**
                     * 获取Sampling interval. The available options vary for different query period. See below: 
`min`: Return data with 1-minute granularity. It’s available when the query period is  within 24 hours and `Area` is `mainland`.
`5min`: Return data with 5-minute granularity. It’s available when the query period is within 31 days.
`hour`: Return data with 1-hour granularity. It’s available when the query period is within 31 days.
`day`: Return data with 1-day granularity. It’s available when the query period is longer than 31 days.
                     * @return Interval Sampling interval. The available options vary for different query period. See below: 
`min`: Return data with 1-minute granularity. It’s available when the query period is  within 24 hours and `Area` is `mainland`.
`5min`: Return data with 5-minute granularity. It’s available when the query period is within 31 days.
`hour`: Return data with 1-hour granularity. It’s available when the query period is within 31 days.
`day`: Return data with 1-day granularity. It’s available when the query period is longer than 31 days.
                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置Sampling interval. The available options vary for different query period. See below: 
`min`: Return data with 1-minute granularity. It’s available when the query period is  within 24 hours and `Area` is `mainland`.
`5min`: Return data with 5-minute granularity. It’s available when the query period is within 31 days.
`hour`: Return data with 1-hour granularity. It’s available when the query period is within 31 days.
`day`: Return data with 1-day granularity. It’s available when the query period is longer than 31 days.
                     * @param _interval Sampling interval. The available options vary for different query period. See below: 
`min`: Return data with 1-minute granularity. It’s available when the query period is  within 24 hours and `Area` is `mainland`.
`5min`: Return data with 5-minute granularity. It’s available when the query period is within 31 days.
`hour`: Return data with 1-hour granularity. It’s available when the query period is within 31 days.
`day`: Return data with 1-day granularity. It’s available when the query period is longer than 31 days.
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
                     * 获取Queries multiple domain names and returns aggregated data by default (false).
Specifies as required to be true, returns detailed data for each Domain (statusCode, 2xx, 3xx, 4xx, 5xx metrics not currently supported).
                     * @return Detail Queries multiple domain names and returns aggregated data by default (false).
Specifies as required to be true, returns detailed data for each Domain (statusCode, 2xx, 3xx, 4xx, 5xx metrics not currently supported).
                     * 
                     */
                    bool GetDetail() const;

                    /**
                     * 设置Queries multiple domain names and returns aggregated data by default (false).
Specifies as required to be true, returns detailed data for each Domain (statusCode, 2xx, 3xx, 4xx, 5xx metrics not currently supported).
                     * @param _detail Queries multiple domain names and returns aggregated data by default (false).
Specifies as required to be true, returns detailed data for each Domain (statusCode, 2xx, 3xx, 4xx, 5xx metrics not currently supported).
                     * 
                     */
                    void SetDetail(const bool& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     * 
                     */
                    bool DetailHasBeenSet() const;

                    /**
                     * 获取Specifies an ISP when you query the CDN data within the Chinese mainland. If this is left blank, all ISPs will be queried.
To view ISP codes, see [ISP Code Mappings](https://intl.cloud.tencent.com/document/product/228/6316?from_cn_redirect=1#.E5.8C.BA.E5.9F.9F-.2F-.E8.BF.90.E8.90.A5.E5.95.86.E6.98.A0.E5.B0.84.E8.A1.A8)
Note that only one of `District`, `Isp` and `IpProtocol` can be specified.
                     * @return Isp Specifies an ISP when you query the CDN data within the Chinese mainland. If this is left blank, all ISPs will be queried.
To view ISP codes, see [ISP Code Mappings](https://intl.cloud.tencent.com/document/product/228/6316?from_cn_redirect=1#.E5.8C.BA.E5.9F.9F-.2F-.E8.BF.90.E8.90.A5.E5.95.86.E6.98.A0.E5.B0.84.E8.A1.A8)
Note that only one of `District`, `Isp` and `IpProtocol` can be specified.
                     * 
                     */
                    int64_t GetIsp() const;

                    /**
                     * 设置Specifies an ISP when you query the CDN data within the Chinese mainland. If this is left blank, all ISPs will be queried.
To view ISP codes, see [ISP Code Mappings](https://intl.cloud.tencent.com/document/product/228/6316?from_cn_redirect=1#.E5.8C.BA.E5.9F.9F-.2F-.E8.BF.90.E8.90.A5.E5.95.86.E6.98.A0.E5.B0.84.E8.A1.A8)
Note that only one of `District`, `Isp` and `IpProtocol` can be specified.
                     * @param _isp Specifies an ISP when you query the CDN data within the Chinese mainland. If this is left blank, all ISPs will be queried.
To view ISP codes, see [ISP Code Mappings](https://intl.cloud.tencent.com/document/product/228/6316?from_cn_redirect=1#.E5.8C.BA.E5.9F.9F-.2F-.E8.BF.90.E8.90.A5.E5.95.86.E6.98.A0.E5.B0.84.E8.A1.A8)
Note that only one of `District`, `Isp` and `IpProtocol` can be specified.
                     * 
                     */
                    void SetIsp(const int64_t& _isp);

                    /**
                     * 判断参数 Isp 是否已赋值
                     * @return Isp 是否已赋值
                     * 
                     */
                    bool IspHasBeenSet() const;

                    /**
                     * 获取Specifies a province when you query the CDN data within the Chinese mainland. If this is left blank, all provinces will be queried.
Specifies a country/region when you query the CDN data outside the Chinese mainland. If this is left blank, all countries/regions will be queried.
To view codes of provinces or countries/regions, see [Province Code Mappings](https://intl.cloud.tencent.com/document/product/228/6316?from_cn_redirect=1#.E5.8C.BA.E5.9F.9F-.2F-.E8.BF.90.E8.90.A5.E5.95.86.E6.98.A0.E5.B0.84.E8.A1.A8).
When `Area` is `mainland`, you can query by the province. Note that only one of `District`, `Isp` and `IpProtocol` can be specified.
                     * @return District Specifies a province when you query the CDN data within the Chinese mainland. If this is left blank, all provinces will be queried.
Specifies a country/region when you query the CDN data outside the Chinese mainland. If this is left blank, all countries/regions will be queried.
To view codes of provinces or countries/regions, see [Province Code Mappings](https://intl.cloud.tencent.com/document/product/228/6316?from_cn_redirect=1#.E5.8C.BA.E5.9F.9F-.2F-.E8.BF.90.E8.90.A5.E5.95.86.E6.98.A0.E5.B0.84.E8.A1.A8).
When `Area` is `mainland`, you can query by the province. Note that only one of `District`, `Isp` and `IpProtocol` can be specified.
                     * 
                     */
                    int64_t GetDistrict() const;

                    /**
                     * 设置Specifies a province when you query the CDN data within the Chinese mainland. If this is left blank, all provinces will be queried.
Specifies a country/region when you query the CDN data outside the Chinese mainland. If this is left blank, all countries/regions will be queried.
To view codes of provinces or countries/regions, see [Province Code Mappings](https://intl.cloud.tencent.com/document/product/228/6316?from_cn_redirect=1#.E5.8C.BA.E5.9F.9F-.2F-.E8.BF.90.E8.90.A5.E5.95.86.E6.98.A0.E5.B0.84.E8.A1.A8).
When `Area` is `mainland`, you can query by the province. Note that only one of `District`, `Isp` and `IpProtocol` can be specified.
                     * @param _district Specifies a province when you query the CDN data within the Chinese mainland. If this is left blank, all provinces will be queried.
Specifies a country/region when you query the CDN data outside the Chinese mainland. If this is left blank, all countries/regions will be queried.
To view codes of provinces or countries/regions, see [Province Code Mappings](https://intl.cloud.tencent.com/document/product/228/6316?from_cn_redirect=1#.E5.8C.BA.E5.9F.9F-.2F-.E8.BF.90.E8.90.A5.E5.95.86.E6.98.A0.E5.B0.84.E8.A1.A8).
When `Area` is `mainland`, you can query by the province. Note that only one of `District`, `Isp` and `IpProtocol` can be specified.
                     * 
                     */
                    void SetDistrict(const int64_t& _district);

                    /**
                     * 判断参数 District 是否已赋值
                     * @return District 是否已赋值
                     * 
                     */
                    bool DistrictHasBeenSet() const;

                    /**
                     * 获取Specifies the protocol to be queried; if you leave it blank, all protocols will be queried.
`all`: All protocols
`http`: Query HTTP data
`https`: Query HTTPS data
                     * @return Protocol Specifies the protocol to be queried; if you leave it blank, all protocols will be queried.
`all`: All protocols
`http`: Query HTTP data
`https`: Query HTTPS data
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Specifies the protocol to be queried; if you leave it blank, all protocols will be queried.
`all`: All protocols
`http`: Query HTTP data
`https`: Query HTTPS data
                     * @param _protocol Specifies the protocol to be queried; if you leave it blank, all protocols will be queried.
`all`: All protocols
`http`: Query HTTP data
`https`: Query HTTPS data
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Specifies the data source to be queried. It’s only open to beta users now. 
                     * @return DataSource Specifies the data source to be queried. It’s only open to beta users now. 
                     * 
                     */
                    std::string GetDataSource() const;

                    /**
                     * 设置Specifies the data source to be queried. It’s only open to beta users now. 
                     * @param _dataSource Specifies the data source to be queried. It’s only open to beta users now. 
                     * 
                     */
                    void SetDataSource(const std::string& _dataSource);

                    /**
                     * 判断参数 DataSource 是否已赋值
                     * @return DataSource 是否已赋值
                     * 
                     */
                    bool DataSourceHasBeenSet() const;

                    /**
                     * 获取Specifies the IP protocol to be queried. If it’s not specified, data of all IP protocols are returned.
`all`: All protocols
`ipv4`: Query IPv4 data
`ipv6`: Query IPv6 data
If `IpProtocol` is specified, `District` parameter can not be specified at the same time.
Note: `ipv4` and `ipv6` are only available to beta users. 
                     * @return IpProtocol Specifies the IP protocol to be queried. If it’s not specified, data of all IP protocols are returned.
`all`: All protocols
`ipv4`: Query IPv4 data
`ipv6`: Query IPv6 data
If `IpProtocol` is specified, `District` parameter can not be specified at the same time.
Note: `ipv4` and `ipv6` are only available to beta users. 
                     * 
                     */
                    std::string GetIpProtocol() const;

                    /**
                     * 设置Specifies the IP protocol to be queried. If it’s not specified, data of all IP protocols are returned.
`all`: All protocols
`ipv4`: Query IPv4 data
`ipv6`: Query IPv6 data
If `IpProtocol` is specified, `District` parameter can not be specified at the same time.
Note: `ipv4` and `ipv6` are only available to beta users. 
                     * @param _ipProtocol Specifies the IP protocol to be queried. If it’s not specified, data of all IP protocols are returned.
`all`: All protocols
`ipv4`: Query IPv4 data
`ipv6`: Query IPv6 data
If `IpProtocol` is specified, `District` parameter can not be specified at the same time.
Note: `ipv4` and `ipv6` are only available to beta users. 
                     * 
                     */
                    void SetIpProtocol(const std::string& _ipProtocol);

                    /**
                     * 判断参数 IpProtocol 是否已赋值
                     * @return IpProtocol 是否已赋值
                     * 
                     */
                    bool IpProtocolHasBeenSet() const;

                    /**
                     * 获取Specifies the service area. If it’s not specified, CDN data of the Chinese mainland are returned.
`mainland`: Query CDN data in the Chinese mainland.
`overseas`: Query CDN data outside the Chinese mainland.
                     * @return Area Specifies the service area. If it’s not specified, CDN data of the Chinese mainland are returned.
`mainland`: Query CDN data in the Chinese mainland.
`overseas`: Query CDN data outside the Chinese mainland.
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Specifies the service area. If it’s not specified, CDN data of the Chinese mainland are returned.
`mainland`: Query CDN data in the Chinese mainland.
`overseas`: Query CDN data outside the Chinese mainland.
                     * @param _area Specifies the service area. If it’s not specified, CDN data of the Chinese mainland are returned.
`mainland`: Query CDN data in the Chinese mainland.
`overseas`: Query CDN data outside the Chinese mainland.
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取Specify whether to query by the region of the server or client. This parameter is valid only when `Area` is `overseas`.
`server`: Query by the location of server (Tencent Cloud CDN nodes)
`client`: Query by the location of the client (where the request devices are located)
                     * @return AreaType Specify whether to query by the region of the server or client. This parameter is valid only when `Area` is `overseas`.
`server`: Query by the location of server (Tencent Cloud CDN nodes)
`client`: Query by the location of the client (where the request devices are located)
                     * 
                     */
                    std::string GetAreaType() const;

                    /**
                     * 设置Specify whether to query by the region of the server or client. This parameter is valid only when `Area` is `overseas`.
`server`: Query by the location of server (Tencent Cloud CDN nodes)
`client`: Query by the location of the client (where the request devices are located)
                     * @param _areaType Specify whether to query by the region of the server or client. This parameter is valid only when `Area` is `overseas`.
`server`: Query by the location of server (Tencent Cloud CDN nodes)
`client`: Query by the location of the client (where the request devices are located)
                     * 
                     */
                    void SetAreaType(const std::string& _areaType);

                    /**
                     * 判断参数 AreaType 是否已赋值
                     * @return AreaType 是否已赋值
                     * 
                     */
                    bool AreaTypeHasBeenSet() const;

                    /**
                     * 获取Specifies the product to query, either `cdn` (default) or `ecdn`.
                     * @return Product Specifies the product to query, either `cdn` (default) or `ecdn`.
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置Specifies the product to query, either `cdn` (default) or `ecdn`.
                     * @param _product Specifies the product to query, either `cdn` (default) or `ecdn`.
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取Specifies a time zone to query. The default time zone is UTC+08:00.
                     * @return TimeZone Specifies a time zone to query. The default time zone is UTC+08:00.
                     * 
                     */
                    std::string GetTimeZone() const;

                    /**
                     * 设置Specifies a time zone to query. The default time zone is UTC+08:00.
                     * @param _timeZone Specifies a time zone to query. The default time zone is UTC+08:00.
                     * 
                     */
                    void SetTimeZone(const std::string& _timeZone);

                    /**
                     * 判断参数 TimeZone 是否已赋值
                     * @return TimeZone 是否已赋值
                     * 
                     */
                    bool TimeZoneHasBeenSet() const;

                private:

                    /**
                     * Start time of the query, e.g., 2018-09-04 10:40:00.
The specified start time will be rounded down based on the granularity parameter `Interval`. For example, if you set the start time to 2018-09-04 10:40:00 with 1-hour granularity, the time will be rounded down to 2018-09-04 10:00:00.
The period between the start time and end time can be up to 90 days.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time of the query, e.g. 2018-09-04 10:40:00.
The specified end time will be rounded down based on the granularity parameter `Interval`. For example, if you set the end time to 2018-09-04 10:40:00 with 1-hour granularity, the time will be rounded down to 2018-09-04 10:00:00.
The period between the start time and end time can be up to 90 days.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Specifies the metric to query, which can be:
`flux`: Traffic (in bytes)
`fluxIn`: Upstream traffic (in bytes), only used for the `ecdn` product
`fluxOut`: Downstream traffic (in bytes), only used for the `ecdn` product
`bandwidth`: Bandwidth (in bps)
`bandwidthIn`: Upstream bandwidth (in bps), only used for the `ecdn` product
`bandwidthOut`: Downstream bandwidth (in bps), only used for the `ecdn` product
`request`: Number of requests
`hitRequest`: Number of hit requests
`requestHitRate`: Request hit rate (in % with two decimal digits)
`hitFlux`: Hit traffic (in bytes)
`fluxHitRate`: Traffic hit rate (in % with two decimal digits)
`statusCode`: Status code. The aggregate data for 2xx, 3xx, 4xx, and 5xx status codes will be returned (in entries)
`2xx`: Returns the aggregate list of 2xx status codes and the data for status codes starting with 2 (in entries)
`3xx`: Returns the aggregate list of 3xx status codes and the data for status codes starting with 3 (in entries)
`4xx`: Returns the aggregate list of 4xx status codes and the data for status codes starting with 4 (in entries)
`5xx`: Returns the aggregate list of 5xx status codes and the data for status codes starting with 5 (in entries)
Specifies the status code to query. The return will be empty if the status code has never been generated.
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                    /**
                     * Specifies the list of domain names to be queried
You can specify one or more domain names.
Up to 30 domain names can be queried in one request.
If this parameter is not specified, it means to query all domain names under the current account.
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * Specifies the project ID to be queried. [Check project ID in the console](https://console.cloud.tencent.com/project)
Note that `Project` will be ignored if `Domains` is specified.
                     */
                    int64_t m_project;
                    bool m_projectHasBeenSet;

                    /**
                     * Sampling interval. The available options vary for different query period. See below: 
`min`: Return data with 1-minute granularity. It’s available when the query period is  within 24 hours and `Area` is `mainland`.
`5min`: Return data with 5-minute granularity. It’s available when the query period is within 31 days.
`hour`: Return data with 1-hour granularity. It’s available when the query period is within 31 days.
`day`: Return data with 1-day granularity. It’s available when the query period is longer than 31 days.
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * Queries multiple domain names and returns aggregated data by default (false).
Specifies as required to be true, returns detailed data for each Domain (statusCode, 2xx, 3xx, 4xx, 5xx metrics not currently supported).
                     */
                    bool m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * Specifies an ISP when you query the CDN data within the Chinese mainland. If this is left blank, all ISPs will be queried.
To view ISP codes, see [ISP Code Mappings](https://intl.cloud.tencent.com/document/product/228/6316?from_cn_redirect=1#.E5.8C.BA.E5.9F.9F-.2F-.E8.BF.90.E8.90.A5.E5.95.86.E6.98.A0.E5.B0.84.E8.A1.A8)
Note that only one of `District`, `Isp` and `IpProtocol` can be specified.
                     */
                    int64_t m_isp;
                    bool m_ispHasBeenSet;

                    /**
                     * Specifies a province when you query the CDN data within the Chinese mainland. If this is left blank, all provinces will be queried.
Specifies a country/region when you query the CDN data outside the Chinese mainland. If this is left blank, all countries/regions will be queried.
To view codes of provinces or countries/regions, see [Province Code Mappings](https://intl.cloud.tencent.com/document/product/228/6316?from_cn_redirect=1#.E5.8C.BA.E5.9F.9F-.2F-.E8.BF.90.E8.90.A5.E5.95.86.E6.98.A0.E5.B0.84.E8.A1.A8).
When `Area` is `mainland`, you can query by the province. Note that only one of `District`, `Isp` and `IpProtocol` can be specified.
                     */
                    int64_t m_district;
                    bool m_districtHasBeenSet;

                    /**
                     * Specifies the protocol to be queried; if you leave it blank, all protocols will be queried.
`all`: All protocols
`http`: Query HTTP data
`https`: Query HTTPS data
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Specifies the data source to be queried. It’s only open to beta users now. 
                     */
                    std::string m_dataSource;
                    bool m_dataSourceHasBeenSet;

                    /**
                     * Specifies the IP protocol to be queried. If it’s not specified, data of all IP protocols are returned.
`all`: All protocols
`ipv4`: Query IPv4 data
`ipv6`: Query IPv6 data
If `IpProtocol` is specified, `District` parameter can not be specified at the same time.
Note: `ipv4` and `ipv6` are only available to beta users. 
                     */
                    std::string m_ipProtocol;
                    bool m_ipProtocolHasBeenSet;

                    /**
                     * Specifies the service area. If it’s not specified, CDN data of the Chinese mainland are returned.
`mainland`: Query CDN data in the Chinese mainland.
`overseas`: Query CDN data outside the Chinese mainland.
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Specify whether to query by the region of the server or client. This parameter is valid only when `Area` is `overseas`.
`server`: Query by the location of server (Tencent Cloud CDN nodes)
`client`: Query by the location of the client (where the request devices are located)
                     */
                    std::string m_areaType;
                    bool m_areaTypeHasBeenSet;

                    /**
                     * Specifies the product to query, either `cdn` (default) or `ecdn`.
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * Specifies a time zone to query. The default time zone is UTC+08:00.
                     */
                    std::string m_timeZone;
                    bool m_timeZoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBECDNDATAREQUEST_H_
