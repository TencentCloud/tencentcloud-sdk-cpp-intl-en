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
                     * 获取Queries start time, such as 2018-09-04 10:40:00; the returned result is later than or equal to the specified time.
According to the specified time granularity, forward rounding is applied; for example, if the query end time is 2018-09-04 10:40:00 and the query time granularity is 1 hour, the time for the first returned entry will be 2018-09-04 10:00:00.
The gap between the start time and end time should be less than or equal to 90 days.
                     * @return StartTime Queries start time, such as 2018-09-04 10:40:00; the returned result is later than or equal to the specified time.
According to the specified time granularity, forward rounding is applied; for example, if the query end time is 2018-09-04 10:40:00 and the query time granularity is 1 hour, the time for the first returned entry will be 2018-09-04 10:00:00.
The gap between the start time and end time should be less than or equal to 90 days.
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Queries start time, such as 2018-09-04 10:40:00; the returned result is later than or equal to the specified time.
According to the specified time granularity, forward rounding is applied; for example, if the query end time is 2018-09-04 10:40:00 and the query time granularity is 1 hour, the time for the first returned entry will be 2018-09-04 10:00:00.
The gap between the start time and end time should be less than or equal to 90 days.
                     * @param StartTime Queries start time, such as 2018-09-04 10:40:00; the returned result is later than or equal to the specified time.
According to the specified time granularity, forward rounding is applied; for example, if the query end time is 2018-09-04 10:40:00 and the query time granularity is 1 hour, the time for the first returned entry will be 2018-09-04 10:00:00.
The gap between the start time and end time should be less than or equal to 90 days.
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Queries end time, such as 2018-09-04 10:40:00; the returned result is earlier than or equal to the specified time.
According to the specified time granularity, forward rounding is applied; for example, if the query start time is 2018-09-04 10:40:00 and the query time granularity is 1 hour, the time for the last returned entry will be 2018-09-04 10:00:00.
The gap between the start time and end time should be less than or equal to 90 days.
                     * @return EndTime Queries end time, such as 2018-09-04 10:40:00; the returned result is earlier than or equal to the specified time.
According to the specified time granularity, forward rounding is applied; for example, if the query start time is 2018-09-04 10:40:00 and the query time granularity is 1 hour, the time for the last returned entry will be 2018-09-04 10:00:00.
The gap between the start time and end time should be less than or equal to 90 days.
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Queries end time, such as 2018-09-04 10:40:00; the returned result is earlier than or equal to the specified time.
According to the specified time granularity, forward rounding is applied; for example, if the query start time is 2018-09-04 10:40:00 and the query time granularity is 1 hour, the time for the last returned entry will be 2018-09-04 10:00:00.
The gap between the start time and end time should be less than or equal to 90 days.
                     * @param EndTime Queries end time, such as 2018-09-04 10:40:00; the returned result is earlier than or equal to the specified time.
According to the specified time granularity, forward rounding is applied; for example, if the query start time is 2018-09-04 10:40:00 and the query time granularity is 1 hour, the time for the last returned entry will be 2018-09-04 10:00:00.
The gap between the start time and end time should be less than or equal to 90 days.
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Specifies the query metric, which can be:
flux: traffic (in bytes)
bandwidth: bandwidth (in bps)
request: number of requests
fluxHitRate: traffic hit rate (in %)
statusCode: status code. The aggregate data for 2xx, 3xx, 4xx, and 5xx status codes will be returned (in entries)
2xx: Returns the aggregate list of 2xx status codes and the data for status codes starting with 2 (in entries)
3xx: Returns the aggregate list of 3xx status codes and the data for status codes starting with 3 (in entries)
4xx: Returns the aggregate list of 4xx status codes and the data for status codes starting with 4 (in entries)
5xx: Returns the aggregate list of 5xx status codes and the data for status codes starting with 5 (in entries)
It is supported to specify a status code for query. The return will be empty if the status code has never been generated.
                     * @return Metric Specifies the query metric, which can be:
flux: traffic (in bytes)
bandwidth: bandwidth (in bps)
request: number of requests
fluxHitRate: traffic hit rate (in %)
statusCode: status code. The aggregate data for 2xx, 3xx, 4xx, and 5xx status codes will be returned (in entries)
2xx: Returns the aggregate list of 2xx status codes and the data for status codes starting with 2 (in entries)
3xx: Returns the aggregate list of 3xx status codes and the data for status codes starting with 3 (in entries)
4xx: Returns the aggregate list of 4xx status codes and the data for status codes starting with 4 (in entries)
5xx: Returns the aggregate list of 5xx status codes and the data for status codes starting with 5 (in entries)
It is supported to specify a status code for query. The return will be empty if the status code has never been generated.
                     */
                    std::string GetMetric() const;

                    /**
                     * 设置Specifies the query metric, which can be:
flux: traffic (in bytes)
bandwidth: bandwidth (in bps)
request: number of requests
fluxHitRate: traffic hit rate (in %)
statusCode: status code. The aggregate data for 2xx, 3xx, 4xx, and 5xx status codes will be returned (in entries)
2xx: Returns the aggregate list of 2xx status codes and the data for status codes starting with 2 (in entries)
3xx: Returns the aggregate list of 3xx status codes and the data for status codes starting with 3 (in entries)
4xx: Returns the aggregate list of 4xx status codes and the data for status codes starting with 4 (in entries)
5xx: Returns the aggregate list of 5xx status codes and the data for status codes starting with 5 (in entries)
It is supported to specify a status code for query. The return will be empty if the status code has never been generated.
                     * @param Metric Specifies the query metric, which can be:
flux: traffic (in bytes)
bandwidth: bandwidth (in bps)
request: number of requests
fluxHitRate: traffic hit rate (in %)
statusCode: status code. The aggregate data for 2xx, 3xx, 4xx, and 5xx status codes will be returned (in entries)
2xx: Returns the aggregate list of 2xx status codes and the data for status codes starting with 2 (in entries)
3xx: Returns the aggregate list of 3xx status codes and the data for status codes starting with 3 (in entries)
4xx: Returns the aggregate list of 4xx status codes and the data for status codes starting with 4 (in entries)
5xx: Returns the aggregate list of 5xx status codes and the data for status codes starting with 5 (in entries)
It is supported to specify a status code for query. The return will be empty if the status code has never been generated.
                     */
                    void SetMetric(const std::string& _metric);

                    /**
                     * 判断参数 Metric 是否已赋值
                     * @return Metric 是否已赋值
                     */
                    bool MetricHasBeenSet() const;

                    /**
                     * 获取Specifies the list of domain names to be queried
Up to 30 domain names can be queried at a time
                     * @return Domains Specifies the list of domain names to be queried
Up to 30 domain names can be queried at a time
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置Specifies the list of domain names to be queried
Up to 30 domain names can be queried at a time
                     * @param Domains Specifies the list of domain names to be queried
Up to 30 domain names can be queried at a time
                     */
                    void SetDomains(const std::vector<std::string>& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     */
                    bool DomainsHasBeenSet() const;

                    /**
                     * 获取Specifies the project ID to be queried, which can be viewed [here](https://console.cloud.tencent.com/project)
Please note that if domain names are specified, this parameter will be ignored.
                     * @return Project Specifies the project ID to be queried, which can be viewed [here](https://console.cloud.tencent.com/project)
Please note that if domain names are specified, this parameter will be ignored.
                     */
                    int64_t GetProject() const;

                    /**
                     * 设置Specifies the project ID to be queried, which can be viewed [here](https://console.cloud.tencent.com/project)
Please note that if domain names are specified, this parameter will be ignored.
                     * @param Project Specifies the project ID to be queried, which can be viewed [here](https://console.cloud.tencent.com/project)
Please note that if domain names are specified, this parameter will be ignored.
                     */
                    void SetProject(const int64_t& _project);

                    /**
                     * 判断参数 Project 是否已赋值
                     * @return Project 是否已赋值
                     */
                    bool ProjectHasBeenSet() const;

                    /**
                     * 获取Time granularity; valid values:
`min`: data with 1-minute granularity is returned when the queried period is no longer than 24 hours. This value is not supported if the service region you want to query is outside Mainland China;
`5min`: data with 5-minute granularity is returned when the queried period is no longer than 31 days;
`hour`: data with 1-hour granularity is returned when the queried period is no longer than 31 days;
`day`: data with 1-day granularity is returned when the queried period is longer than 31 days.
                     * @return Interval Time granularity; valid values:
`min`: data with 1-minute granularity is returned when the queried period is no longer than 24 hours. This value is not supported if the service region you want to query is outside Mainland China;
`5min`: data with 5-minute granularity is returned when the queried period is no longer than 31 days;
`hour`: data with 1-hour granularity is returned when the queried period is no longer than 31 days;
`day`: data with 1-day granularity is returned when the queried period is longer than 31 days.
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置Time granularity; valid values:
`min`: data with 1-minute granularity is returned when the queried period is no longer than 24 hours. This value is not supported if the service region you want to query is outside Mainland China;
`5min`: data with 5-minute granularity is returned when the queried period is no longer than 31 days;
`hour`: data with 1-hour granularity is returned when the queried period is no longer than 31 days;
`day`: data with 1-day granularity is returned when the queried period is longer than 31 days.
                     * @param Interval Time granularity; valid values:
`min`: data with 1-minute granularity is returned when the queried period is no longer than 24 hours. This value is not supported if the service region you want to query is outside Mainland China;
`5min`: data with 5-minute granularity is returned when the queried period is no longer than 31 days;
`hour`: data with 1-hour granularity is returned when the queried period is no longer than 31 days;
`day`: data with 1-day granularity is returned when the queried period is longer than 31 days.
                     */
                    void SetInterval(const std::string& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取The aggregate data for multiple domain names is returned by default (false) during a multi-domain-name query.
You can set it to true to return the details for each Domain (the statusCode metric is currently not supported)
                     * @return Detail The aggregate data for multiple domain names is returned by default (false) during a multi-domain-name query.
You can set it to true to return the details for each Domain (the statusCode metric is currently not supported)
                     */
                    bool GetDetail() const;

                    /**
                     * 设置The aggregate data for multiple domain names is returned by default (false) during a multi-domain-name query.
You can set it to true to return the details for each Domain (the statusCode metric is currently not supported)
                     * @param Detail The aggregate data for multiple domain names is returned by default (false) during a multi-domain-name query.
You can set it to true to return the details for each Domain (the statusCode metric is currently not supported)
                     */
                    void SetDetail(const bool& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     */
                    bool DetailHasBeenSet() const;

                    /**
                     * 获取Specifies an ISP when you query the CDN data within Mainland China. If this is left blank, all ISPs will be queried.
To view ISP codes, see [ISP Code Mappings](https://cloud.tencent.com/document/product/228/6316#.E5.8C.BA.E5.9F.9F-.2F-.E8.BF.90.E8.90.A5.E5.95.86.E6.98.A0.E5.B0.84.E8.A1.A8)
If you have specified an ISP, you cannot specify a province or an IP protocol for the same query.
                     * @return Isp Specifies an ISP when you query the CDN data within Mainland China. If this is left blank, all ISPs will be queried.
To view ISP codes, see [ISP Code Mappings](https://cloud.tencent.com/document/product/228/6316#.E5.8C.BA.E5.9F.9F-.2F-.E8.BF.90.E8.90.A5.E5.95.86.E6.98.A0.E5.B0.84.E8.A1.A8)
If you have specified an ISP, you cannot specify a province or an IP protocol for the same query.
                     */
                    int64_t GetIsp() const;

                    /**
                     * 设置Specifies an ISP when you query the CDN data within Mainland China. If this is left blank, all ISPs will be queried.
To view ISP codes, see [ISP Code Mappings](https://cloud.tencent.com/document/product/228/6316#.E5.8C.BA.E5.9F.9F-.2F-.E8.BF.90.E8.90.A5.E5.95.86.E6.98.A0.E5.B0.84.E8.A1.A8)
If you have specified an ISP, you cannot specify a province or an IP protocol for the same query.
                     * @param Isp Specifies an ISP when you query the CDN data within Mainland China. If this is left blank, all ISPs will be queried.
To view ISP codes, see [ISP Code Mappings](https://cloud.tencent.com/document/product/228/6316#.E5.8C.BA.E5.9F.9F-.2F-.E8.BF.90.E8.90.A5.E5.95.86.E6.98.A0.E5.B0.84.E8.A1.A8)
If you have specified an ISP, you cannot specify a province or an IP protocol for the same query.
                     */
                    void SetIsp(const int64_t& _isp);

                    /**
                     * 判断参数 Isp 是否已赋值
                     * @return Isp 是否已赋值
                     */
                    bool IspHasBeenSet() const;

                    /**
                     * 获取Specifies a province when you query the CDN data within Mainland China. If this is left blank, all provinces will be queried.
Specifies a country/region when you query the CDN data outside Mainland China. If this is left blank, all countries/regions will be queried.
To view codes of provinces or countries/regions, see [Province Code Mappings](https://cloud.tencent.com/document/product/228/6316#.E5.8C.BA.E5.9F.9F-.2F-.E8.BF.90.E8.90.A5.E5.95.86.E6.98.A0.E5.B0.84.E8.A1.A8)
If you have specified a province for your query on CDN data within mainland China, you cannot specify an ISP or an IP protocol for the same query.
                     * @return District Specifies a province when you query the CDN data within Mainland China. If this is left blank, all provinces will be queried.
Specifies a country/region when you query the CDN data outside Mainland China. If this is left blank, all countries/regions will be queried.
To view codes of provinces or countries/regions, see [Province Code Mappings](https://cloud.tencent.com/document/product/228/6316#.E5.8C.BA.E5.9F.9F-.2F-.E8.BF.90.E8.90.A5.E5.95.86.E6.98.A0.E5.B0.84.E8.A1.A8)
If you have specified a province for your query on CDN data within mainland China, you cannot specify an ISP or an IP protocol for the same query.
                     */
                    int64_t GetDistrict() const;

                    /**
                     * 设置Specifies a province when you query the CDN data within Mainland China. If this is left blank, all provinces will be queried.
Specifies a country/region when you query the CDN data outside Mainland China. If this is left blank, all countries/regions will be queried.
To view codes of provinces or countries/regions, see [Province Code Mappings](https://cloud.tencent.com/document/product/228/6316#.E5.8C.BA.E5.9F.9F-.2F-.E8.BF.90.E8.90.A5.E5.95.86.E6.98.A0.E5.B0.84.E8.A1.A8)
If you have specified a province for your query on CDN data within mainland China, you cannot specify an ISP or an IP protocol for the same query.
                     * @param District Specifies a province when you query the CDN data within Mainland China. If this is left blank, all provinces will be queried.
Specifies a country/region when you query the CDN data outside Mainland China. If this is left blank, all countries/regions will be queried.
To view codes of provinces or countries/regions, see [Province Code Mappings](https://cloud.tencent.com/document/product/228/6316#.E5.8C.BA.E5.9F.9F-.2F-.E8.BF.90.E8.90.A5.E5.95.86.E6.98.A0.E5.B0.84.E8.A1.A8)
If you have specified a province for your query on CDN data within mainland China, you cannot specify an ISP or an IP protocol for the same query.
                     */
                    void SetDistrict(const int64_t& _district);

                    /**
                     * 判断参数 District 是否已赋值
                     * @return District 是否已赋值
                     */
                    bool DistrictHasBeenSet() const;

                    /**
                     * 获取Specifies the protocol to be queried; if you leave it blank, all protocols will be queried.
all: All protocols
http: specifies the HTTP metric to be queried
https: specifies the HTTPS metric to be queried
                     * @return Protocol Specifies the protocol to be queried; if you leave it blank, all protocols will be queried.
all: All protocols
http: specifies the HTTP metric to be queried
https: specifies the HTTPS metric to be queried
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Specifies the protocol to be queried; if you leave it blank, all protocols will be queried.
all: All protocols
http: specifies the HTTP metric to be queried
https: specifies the HTTPS metric to be queried
                     * @param Protocol Specifies the protocol to be queried; if you leave it blank, all protocols will be queried.
all: All protocols
http: specifies the HTTP metric to be queried
https: specifies the HTTPS metric to be queried
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Specifies the data source to be queried, which can be seen as the whitelist function.
                     * @return DataSource Specifies the data source to be queried, which can be seen as the whitelist function.
                     */
                    std::string GetDataSource() const;

                    /**
                     * 设置Specifies the data source to be queried, which can be seen as the whitelist function.
                     * @param DataSource Specifies the data source to be queried, which can be seen as the whitelist function.
                     */
                    void SetDataSource(const std::string& _dataSource);

                    /**
                     * 判断参数 DataSource 是否已赋值
                     * @return DataSource 是否已赋值
                     */
                    bool DataSourceHasBeenSet() const;

                    /**
                     * 获取Specified IP protocol to be queried. If this parameter is left empty, all protocols will be queried
all: all protocols
ipv4: specifies to query IPv4 metrics
ipv6: specifies to query IPv6 metrics
If the IP protocol to be queried is specified, the district and ISP cannot be specified at the same time
Note: non-IPv6 whitelisted users cannot specify `ipv4` and `ipv6` for query
                     * @return IpProtocol Specified IP protocol to be queried. If this parameter is left empty, all protocols will be queried
all: all protocols
ipv4: specifies to query IPv4 metrics
ipv6: specifies to query IPv6 metrics
If the IP protocol to be queried is specified, the district and ISP cannot be specified at the same time
Note: non-IPv6 whitelisted users cannot specify `ipv4` and `ipv6` for query
                     */
                    std::string GetIpProtocol() const;

                    /**
                     * 设置Specified IP protocol to be queried. If this parameter is left empty, all protocols will be queried
all: all protocols
ipv4: specifies to query IPv4 metrics
ipv6: specifies to query IPv6 metrics
If the IP protocol to be queried is specified, the district and ISP cannot be specified at the same time
Note: non-IPv6 whitelisted users cannot specify `ipv4` and `ipv6` for query
                     * @param IpProtocol Specified IP protocol to be queried. If this parameter is left empty, all protocols will be queried
all: all protocols
ipv4: specifies to query IPv4 metrics
ipv6: specifies to query IPv6 metrics
If the IP protocol to be queried is specified, the district and ISP cannot be specified at the same time
Note: non-IPv6 whitelisted users cannot specify `ipv4` and `ipv6` for query
                     */
                    void SetIpProtocol(const std::string& _ipProtocol);

                    /**
                     * 判断参数 IpProtocol 是否已赋值
                     * @return IpProtocol 是否已赋值
                     */
                    bool IpProtocolHasBeenSet() const;

                    /**
                     * 获取Specifies a service region. If this value is left blank, CDN data within Mainland China will be queried.
`mainland`: specifies to query CDN data within Mainland China;
`overseas`: specifies to query CDN data outside Mainland China.
                     * @return Area Specifies a service region. If this value is left blank, CDN data within Mainland China will be queried.
`mainland`: specifies to query CDN data within Mainland China;
`overseas`: specifies to query CDN data outside Mainland China.
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Specifies a service region. If this value is left blank, CDN data within Mainland China will be queried.
`mainland`: specifies to query CDN data within Mainland China;
`overseas`: specifies to query CDN data outside Mainland China.
                     * @param Area Specifies a service region. If this value is left blank, CDN data within Mainland China will be queried.
`mainland`: specifies to query CDN data within Mainland China;
`overseas`: specifies to query CDN data outside Mainland China.
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取Specifies a region type for your query on CDN data outside Mainland China. If this parameter is left blank, data on the service region will be queried. This parameter is valid only when `Area` is `overseas`.
`server`: specifies to query data on the service region where Tencent Cloud CDN nodes are located;
`client`: specifies to query data on the client region where the request devices are located.
                     * @return AreaType Specifies a region type for your query on CDN data outside Mainland China. If this parameter is left blank, data on the service region will be queried. This parameter is valid only when `Area` is `overseas`.
`server`: specifies to query data on the service region where Tencent Cloud CDN nodes are located;
`client`: specifies to query data on the client region where the request devices are located.
                     */
                    std::string GetAreaType() const;

                    /**
                     * 设置Specifies a region type for your query on CDN data outside Mainland China. If this parameter is left blank, data on the service region will be queried. This parameter is valid only when `Area` is `overseas`.
`server`: specifies to query data on the service region where Tencent Cloud CDN nodes are located;
`client`: specifies to query data on the client region where the request devices are located.
                     * @param AreaType Specifies a region type for your query on CDN data outside Mainland China. If this parameter is left blank, data on the service region will be queried. This parameter is valid only when `Area` is `overseas`.
`server`: specifies to query data on the service region where Tencent Cloud CDN nodes are located;
`client`: specifies to query data on the client region where the request devices are located.
                     */
                    void SetAreaType(const std::string& _areaType);

                    /**
                     * 判断参数 AreaType 是否已赋值
                     * @return AreaType 是否已赋值
                     */
                    bool AreaTypeHasBeenSet() const;

                private:

                    /**
                     * Queries start time, such as 2018-09-04 10:40:00; the returned result is later than or equal to the specified time.
According to the specified time granularity, forward rounding is applied; for example, if the query end time is 2018-09-04 10:40:00 and the query time granularity is 1 hour, the time for the first returned entry will be 2018-09-04 10:00:00.
The gap between the start time and end time should be less than or equal to 90 days.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Queries end time, such as 2018-09-04 10:40:00; the returned result is earlier than or equal to the specified time.
According to the specified time granularity, forward rounding is applied; for example, if the query start time is 2018-09-04 10:40:00 and the query time granularity is 1 hour, the time for the last returned entry will be 2018-09-04 10:00:00.
The gap between the start time and end time should be less than or equal to 90 days.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Specifies the query metric, which can be:
flux: traffic (in bytes)
bandwidth: bandwidth (in bps)
request: number of requests
fluxHitRate: traffic hit rate (in %)
statusCode: status code. The aggregate data for 2xx, 3xx, 4xx, and 5xx status codes will be returned (in entries)
2xx: Returns the aggregate list of 2xx status codes and the data for status codes starting with 2 (in entries)
3xx: Returns the aggregate list of 3xx status codes and the data for status codes starting with 3 (in entries)
4xx: Returns the aggregate list of 4xx status codes and the data for status codes starting with 4 (in entries)
5xx: Returns the aggregate list of 5xx status codes and the data for status codes starting with 5 (in entries)
It is supported to specify a status code for query. The return will be empty if the status code has never been generated.
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                    /**
                     * Specifies the list of domain names to be queried
Up to 30 domain names can be queried at a time
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * Specifies the project ID to be queried, which can be viewed [here](https://console.cloud.tencent.com/project)
Please note that if domain names are specified, this parameter will be ignored.
                     */
                    int64_t m_project;
                    bool m_projectHasBeenSet;

                    /**
                     * Time granularity; valid values:
`min`: data with 1-minute granularity is returned when the queried period is no longer than 24 hours. This value is not supported if the service region you want to query is outside Mainland China;
`5min`: data with 5-minute granularity is returned when the queried period is no longer than 31 days;
`hour`: data with 1-hour granularity is returned when the queried period is no longer than 31 days;
`day`: data with 1-day granularity is returned when the queried period is longer than 31 days.
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * The aggregate data for multiple domain names is returned by default (false) during a multi-domain-name query.
You can set it to true to return the details for each Domain (the statusCode metric is currently not supported)
                     */
                    bool m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * Specifies an ISP when you query the CDN data within Mainland China. If this is left blank, all ISPs will be queried.
To view ISP codes, see [ISP Code Mappings](https://cloud.tencent.com/document/product/228/6316#.E5.8C.BA.E5.9F.9F-.2F-.E8.BF.90.E8.90.A5.E5.95.86.E6.98.A0.E5.B0.84.E8.A1.A8)
If you have specified an ISP, you cannot specify a province or an IP protocol for the same query.
                     */
                    int64_t m_isp;
                    bool m_ispHasBeenSet;

                    /**
                     * Specifies a province when you query the CDN data within Mainland China. If this is left blank, all provinces will be queried.
Specifies a country/region when you query the CDN data outside Mainland China. If this is left blank, all countries/regions will be queried.
To view codes of provinces or countries/regions, see [Province Code Mappings](https://cloud.tencent.com/document/product/228/6316#.E5.8C.BA.E5.9F.9F-.2F-.E8.BF.90.E8.90.A5.E5.95.86.E6.98.A0.E5.B0.84.E8.A1.A8)
If you have specified a province for your query on CDN data within mainland China, you cannot specify an ISP or an IP protocol for the same query.
                     */
                    int64_t m_district;
                    bool m_districtHasBeenSet;

                    /**
                     * Specifies the protocol to be queried; if you leave it blank, all protocols will be queried.
all: All protocols
http: specifies the HTTP metric to be queried
https: specifies the HTTPS metric to be queried
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Specifies the data source to be queried, which can be seen as the whitelist function.
                     */
                    std::string m_dataSource;
                    bool m_dataSourceHasBeenSet;

                    /**
                     * Specified IP protocol to be queried. If this parameter is left empty, all protocols will be queried
all: all protocols
ipv4: specifies to query IPv4 metrics
ipv6: specifies to query IPv6 metrics
If the IP protocol to be queried is specified, the district and ISP cannot be specified at the same time
Note: non-IPv6 whitelisted users cannot specify `ipv4` and `ipv6` for query
                     */
                    std::string m_ipProtocol;
                    bool m_ipProtocolHasBeenSet;

                    /**
                     * Specifies a service region. If this value is left blank, CDN data within Mainland China will be queried.
`mainland`: specifies to query CDN data within Mainland China;
`overseas`: specifies to query CDN data outside Mainland China.
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Specifies a region type for your query on CDN data outside Mainland China. If this parameter is left blank, data on the service region will be queried. This parameter is valid only when `Area` is `overseas`.
`server`: specifies to query data on the service region where Tencent Cloud CDN nodes are located;
`client`: specifies to query data on the client region where the request devices are located.
                     */
                    std::string m_areaType;
                    bool m_areaTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBECDNDATAREQUEST_H_
