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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_LISTTOPDATAREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_LISTTOPDATAREQUEST_H_

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
                * ListTopData request structure.
                */
                class ListTopDataRequest : public AbstractModel
                {
                public:
                    ListTopDataRequest();
                    ~ListTopDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Query start time in the format of `yyyy-MM-dd HH:mm:ss`
Only supports data query at daily granularity. The date in the input parameter is used as the start date.
If the specified start date is greater than 00:00:00, it will be rounded down to 00:00:00 on the date. For example, if `StartTime` is 2018-09-04 10:40:00, it will be rounded down to 2018-09-04 00:00:00.
Only data from the last 90 days will be queried.
                     * @return StartTime Query start time in the format of `yyyy-MM-dd HH:mm:ss`
Only supports data query at daily granularity. The date in the input parameter is used as the start date.
If the specified start date is greater than 00:00:00, it will be rounded down to 00:00:00 on the date. For example, if `StartTime` is 2018-09-04 10:40:00, it will be rounded down to 2018-09-04 00:00:00.
Only data from the last 90 days will be queried.
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Query start time in the format of `yyyy-MM-dd HH:mm:ss`
Only supports data query at daily granularity. The date in the input parameter is used as the start date.
If the specified start date is greater than 00:00:00, it will be rounded down to 00:00:00 on the date. For example, if `StartTime` is 2018-09-04 10:40:00, it will be rounded down to 2018-09-04 00:00:00.
Only data from the last 90 days will be queried.
                     * @param StartTime Query start time in the format of `yyyy-MM-dd HH:mm:ss`
Only supports data query at daily granularity. The date in the input parameter is used as the start date.
If the specified start date is greater than 00:00:00, it will be rounded down to 00:00:00 on the date. For example, if `StartTime` is 2018-09-04 10:40:00, it will be rounded down to 2018-09-04 00:00:00.
Only data from the last 90 days will be queried.
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Query end time in the format of `yyyy-MM-dd HH:mm:ss`
Only supports data query at daily granularity. The date in the input parameter is used as the end date.
If the specified end date is smaller than 23:59:59, it will be rounded up to 23:59:59 on the date. For example, if `EndTime` is 2018-09-05 22:40:00, it will be rounded up to 2018-09-05 23:59:59.
`EndTime` must be later than or equal to `StartTime`
                     * @return EndTime Query end time in the format of `yyyy-MM-dd HH:mm:ss`
Only supports data query at daily granularity. The date in the input parameter is used as the end date.
If the specified end date is smaller than 23:59:59, it will be rounded up to 23:59:59 on the date. For example, if `EndTime` is 2018-09-05 22:40:00, it will be rounded up to 2018-09-05 23:59:59.
`EndTime` must be later than or equal to `StartTime`
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Query end time in the format of `yyyy-MM-dd HH:mm:ss`
Only supports data query at daily granularity. The date in the input parameter is used as the end date.
If the specified end date is smaller than 23:59:59, it will be rounded up to 23:59:59 on the date. For example, if `EndTime` is 2018-09-05 22:40:00, it will be rounded up to 2018-09-05 23:59:59.
`EndTime` must be later than or equal to `StartTime`
                     * @param EndTime Query end time in the format of `yyyy-MM-dd HH:mm:ss`
Only supports data query at daily granularity. The date in the input parameter is used as the end date.
If the specified end date is smaller than 23:59:59, it will be rounded up to 23:59:59 on the date. For example, if `EndTime` is 2018-09-05 22:40:00, it will be rounded up to 2018-09-05 23:59:59.
`EndTime` must be later than or equal to `StartTime`
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Objects to be sorted. Valid values:
`url`: Sort by access URL (URLs carrying no parameters). Supported filters are `flux` and `request`.
`district`: sorts provinces or countries/regions. Supported filters are `flux` and `request`.
`isp`: sorts ISPs. Supported filters are `flux` and `request`.
`host`: Sort by domain name access data. Supported filters are `flux`, `request`, `bandwidth`, `fluxHitRate`, and `statusCode` (2XX, 3XX, 4XX, 5XX).
`originHost`: Sort by domain name origin-pull data. Supported filters are `flux`, `request`, `bandwidth`, and `OriginStatusCode` (origin_2XX, origin_3XX, origin_4XX, origin_5XX).
                     * @return Metric Objects to be sorted. Valid values:
`url`: Sort by access URL (URLs carrying no parameters). Supported filters are `flux` and `request`.
`district`: sorts provinces or countries/regions. Supported filters are `flux` and `request`.
`isp`: sorts ISPs. Supported filters are `flux` and `request`.
`host`: Sort by domain name access data. Supported filters are `flux`, `request`, `bandwidth`, `fluxHitRate`, and `statusCode` (2XX, 3XX, 4XX, 5XX).
`originHost`: Sort by domain name origin-pull data. Supported filters are `flux`, `request`, `bandwidth`, and `OriginStatusCode` (origin_2XX, origin_3XX, origin_4XX, origin_5XX).
                     */
                    std::string GetMetric() const;

                    /**
                     * 设置Objects to be sorted. Valid values:
`url`: Sort by access URL (URLs carrying no parameters). Supported filters are `flux` and `request`.
`district`: sorts provinces or countries/regions. Supported filters are `flux` and `request`.
`isp`: sorts ISPs. Supported filters are `flux` and `request`.
`host`: Sort by domain name access data. Supported filters are `flux`, `request`, `bandwidth`, `fluxHitRate`, and `statusCode` (2XX, 3XX, 4XX, 5XX).
`originHost`: Sort by domain name origin-pull data. Supported filters are `flux`, `request`, `bandwidth`, and `OriginStatusCode` (origin_2XX, origin_3XX, origin_4XX, origin_5XX).
                     * @param Metric Objects to be sorted. Valid values:
`url`: Sort by access URL (URLs carrying no parameters). Supported filters are `flux` and `request`.
`district`: sorts provinces or countries/regions. Supported filters are `flux` and `request`.
`isp`: sorts ISPs. Supported filters are `flux` and `request`.
`host`: Sort by domain name access data. Supported filters are `flux`, `request`, `bandwidth`, `fluxHitRate`, and `statusCode` (2XX, 3XX, 4XX, 5XX).
`originHost`: Sort by domain name origin-pull data. Supported filters are `flux`, `request`, `bandwidth`, and `OriginStatusCode` (origin_2XX, origin_3XX, origin_4XX, origin_5XX).
                     */
                    void SetMetric(const std::string& _metric);

                    /**
                     * 判断参数 Metric 是否已赋值
                     * @return Metric 是否已赋值
                     */
                    bool MetricHasBeenSet() const;

                    /**
                     * 获取Metric name used for sorting:
flux: If Metric is `host`, it indicates the access traffic; if Metric is `originHost`, it indicates the origin-pull traffic.
bandwidth: If Metric is `host`, it indicates the access bandwidth; if Metric is `originHost`, it indicates the origin-pull bandwidth.
request: If Metric is `host`, it indicates the number of access requests; if Metric is `originHost`, it indicates the number of origin-pull requests.
fluxHitRate: Average traffic hit rate
2XX: access 2XX status code
3XX: access 3XX status code
4XX: access 4XX status code
5XX: access 5XX status code
origin_2XX: origin-pull 2XX status code
origin_3XX: origin-pull 3XX status code
origin_4XX: origin-pull 4XX status code
origin_5XX: origin-pull 5XX status code
statusCode: statistics of a specific access status code which is specified in the `Code` parameter.
OriginStatusCode: statistics of a specific origin-pull status code which is specified in the `Code` parameter.
                     * @return Filter Metric name used for sorting:
flux: If Metric is `host`, it indicates the access traffic; if Metric is `originHost`, it indicates the origin-pull traffic.
bandwidth: If Metric is `host`, it indicates the access bandwidth; if Metric is `originHost`, it indicates the origin-pull bandwidth.
request: If Metric is `host`, it indicates the number of access requests; if Metric is `originHost`, it indicates the number of origin-pull requests.
fluxHitRate: Average traffic hit rate
2XX: access 2XX status code
3XX: access 3XX status code
4XX: access 4XX status code
5XX: access 5XX status code
origin_2XX: origin-pull 2XX status code
origin_3XX: origin-pull 3XX status code
origin_4XX: origin-pull 4XX status code
origin_5XX: origin-pull 5XX status code
statusCode: statistics of a specific access status code which is specified in the `Code` parameter.
OriginStatusCode: statistics of a specific origin-pull status code which is specified in the `Code` parameter.
                     */
                    std::string GetFilter() const;

                    /**
                     * 设置Metric name used for sorting:
flux: If Metric is `host`, it indicates the access traffic; if Metric is `originHost`, it indicates the origin-pull traffic.
bandwidth: If Metric is `host`, it indicates the access bandwidth; if Metric is `originHost`, it indicates the origin-pull bandwidth.
request: If Metric is `host`, it indicates the number of access requests; if Metric is `originHost`, it indicates the number of origin-pull requests.
fluxHitRate: Average traffic hit rate
2XX: access 2XX status code
3XX: access 3XX status code
4XX: access 4XX status code
5XX: access 5XX status code
origin_2XX: origin-pull 2XX status code
origin_3XX: origin-pull 3XX status code
origin_4XX: origin-pull 4XX status code
origin_5XX: origin-pull 5XX status code
statusCode: statistics of a specific access status code which is specified in the `Code` parameter.
OriginStatusCode: statistics of a specific origin-pull status code which is specified in the `Code` parameter.
                     * @param Filter Metric name used for sorting:
flux: If Metric is `host`, it indicates the access traffic; if Metric is `originHost`, it indicates the origin-pull traffic.
bandwidth: If Metric is `host`, it indicates the access bandwidth; if Metric is `originHost`, it indicates the origin-pull bandwidth.
request: If Metric is `host`, it indicates the number of access requests; if Metric is `originHost`, it indicates the number of origin-pull requests.
fluxHitRate: Average traffic hit rate
2XX: access 2XX status code
3XX: access 3XX status code
4XX: access 4XX status code
5XX: access 5XX status code
origin_2XX: origin-pull 2XX status code
origin_3XX: origin-pull 3XX status code
origin_4XX: origin-pull 4XX status code
origin_5XX: origin-pull 5XX status code
statusCode: statistics of a specific access status code which is specified in the `Code` parameter.
OriginStatusCode: statistics of a specific origin-pull status code which is specified in the `Code` parameter.
                     */
                    void SetFilter(const std::string& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取Specifies the list of domain names to be queried; up to 30 domain names can be queried at a time.
                     * @return Domains Specifies the list of domain names to be queried; up to 30 domain names can be queried at a time.
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置Specifies the list of domain names to be queried; up to 30 domain names can be queried at a time.
                     * @param Domains Specifies the list of domain names to be queried; up to 30 domain names can be queried at a time.
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
                     * 获取The sorted results of all domain names are returned by default (false) during a multi-domain-name query
If `Metric` is `url`, `path`, `district`, or `isp` and `Filter` is `flux` or `request`, it can be set to `true` to return the sorted results of each domain.
                     * @return Detail The sorted results of all domain names are returned by default (false) during a multi-domain-name query
If `Metric` is `url`, `path`, `district`, or `isp` and `Filter` is `flux` or `request`, it can be set to `true` to return the sorted results of each domain.
                     */
                    bool GetDetail() const;

                    /**
                     * 设置The sorted results of all domain names are returned by default (false) during a multi-domain-name query
If `Metric` is `url`, `path`, `district`, or `isp` and `Filter` is `flux` or `request`, it can be set to `true` to return the sorted results of each domain.
                     * @param Detail The sorted results of all domain names are returned by default (false) during a multi-domain-name query
If `Metric` is `url`, `path`, `district`, or `isp` and `Filter` is `flux` or `request`, it can be set to `true` to return the sorted results of each domain.
                     */
                    void SetDetail(const bool& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     */
                    bool DetailHasBeenSet() const;

                    /**
                     * 获取When Filter is `statusCode` or `OriginStatusCode`, enter a code to query and sort results.
                     * @return Code When Filter is `statusCode` or `OriginStatusCode`, enter a code to query and sort results.
                     */
                    std::string GetCode() const;

                    /**
                     * 设置When Filter is `statusCode` or `OriginStatusCode`, enter a code to query and sort results.
                     * @param Code When Filter is `statusCode` or `OriginStatusCode`, enter a code to query and sort results.
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取Specifies the service region. If this value is left blank, it means to query CDN data within the Chinese mainland.
`mainland`: Query CDN data in the Chinese mainland.
`overseas`: Query CDN data outside the Chinese mainland. Supported metrics are `url`, `district`, `host`, and `originHost`. If `Metric` is `originHost`, supported filters are `flux`, `request`, and `bandwidth`.
                     * @return Area Specifies the service region. If this value is left blank, it means to query CDN data within the Chinese mainland.
`mainland`: Query CDN data in the Chinese mainland.
`overseas`: Query CDN data outside the Chinese mainland. Supported metrics are `url`, `district`, `host`, and `originHost`. If `Metric` is `originHost`, supported filters are `flux`, `request`, and `bandwidth`.
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Specifies the service region. If this value is left blank, it means to query CDN data within the Chinese mainland.
`mainland`: Query CDN data in the Chinese mainland.
`overseas`: Query CDN data outside the Chinese mainland. Supported metrics are `url`, `district`, `host`, and `originHost`. If `Metric` is `originHost`, supported filters are `flux`, `request`, and `bandwidth`.
                     * @param Area Specifies the service region. If this value is left blank, it means to query CDN data within the Chinese mainland.
`mainland`: Query CDN data in the Chinese mainland.
`overseas`: Query CDN data outside the Chinese mainland. Supported metrics are `url`, `district`, `host`, and `originHost`. If `Metric` is `originHost`, supported filters are `flux`, `request`, and `bandwidth`.
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取Specifies a region type for the query. If it is left blank, data of the service region will be queried. This parameter is only valid when `Area` is `overseas` and `Metric` is `district` or `host`.
`server`: Query by the location of server (Tencent Cloud CDN nodes).
`client`: Query data of the client region where the request devices are located; if `Metric` is `host`, supported filters are `flux`, `request`, and `bandwidth`.
                     * @return AreaType Specifies a region type for the query. If it is left blank, data of the service region will be queried. This parameter is only valid when `Area` is `overseas` and `Metric` is `district` or `host`.
`server`: Query by the location of server (Tencent Cloud CDN nodes).
`client`: Query data of the client region where the request devices are located; if `Metric` is `host`, supported filters are `flux`, `request`, and `bandwidth`.
                     */
                    std::string GetAreaType() const;

                    /**
                     * 设置Specifies a region type for the query. If it is left blank, data of the service region will be queried. This parameter is only valid when `Area` is `overseas` and `Metric` is `district` or `host`.
`server`: Query by the location of server (Tencent Cloud CDN nodes).
`client`: Query data of the client region where the request devices are located; if `Metric` is `host`, supported filters are `flux`, `request`, and `bandwidth`.
                     * @param AreaType Specifies a region type for the query. If it is left blank, data of the service region will be queried. This parameter is only valid when `Area` is `overseas` and `Metric` is `district` or `host`.
`server`: Query by the location of server (Tencent Cloud CDN nodes).
`client`: Query data of the client region where the request devices are located; if `Metric` is `host`, supported filters are `flux`, `request`, and `bandwidth`.
                     */
                    void SetAreaType(const std::string& _areaType);

                    /**
                     * 判断参数 AreaType 是否已赋值
                     * @return AreaType 是否已赋值
                     */
                    bool AreaTypeHasBeenSet() const;

                    /**
                     * 获取Specifies the product to query, either `cdn` (default) or `ecdn`.
                     * @return Product Specifies the product to query, either `cdn` (default) or `ecdn`.
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置Specifies the product to query, either `cdn` (default) or `ecdn`.
                     * @param Product Specifies the product to query, either `cdn` (default) or `ecdn`.
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取Returns the first N data entries. The default value is 100 if this parameter is not specified, whereas 1000 if `Metric` is `url`.
                     * @return Limit Returns the first N data entries. The default value is 100 if this parameter is not specified, whereas 1000 if `Metric` is `url`.
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Returns the first N data entries. The default value is 100 if this parameter is not specified, whereas 1000 if `Metric` is `url`.
                     * @param Limit Returns the first N data entries. The default value is 100 if this parameter is not specified, whereas 1000 if `Metric` is `url`.
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Query start time in the format of `yyyy-MM-dd HH:mm:ss`
Only supports data query at daily granularity. The date in the input parameter is used as the start date.
If the specified start date is greater than 00:00:00, it will be rounded down to 00:00:00 on the date. For example, if `StartTime` is 2018-09-04 10:40:00, it will be rounded down to 2018-09-04 00:00:00.
Only data from the last 90 days will be queried.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Query end time in the format of `yyyy-MM-dd HH:mm:ss`
Only supports data query at daily granularity. The date in the input parameter is used as the end date.
If the specified end date is smaller than 23:59:59, it will be rounded up to 23:59:59 on the date. For example, if `EndTime` is 2018-09-05 22:40:00, it will be rounded up to 2018-09-05 23:59:59.
`EndTime` must be later than or equal to `StartTime`
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Objects to be sorted. Valid values:
`url`: Sort by access URL (URLs carrying no parameters). Supported filters are `flux` and `request`.
`district`: sorts provinces or countries/regions. Supported filters are `flux` and `request`.
`isp`: sorts ISPs. Supported filters are `flux` and `request`.
`host`: Sort by domain name access data. Supported filters are `flux`, `request`, `bandwidth`, `fluxHitRate`, and `statusCode` (2XX, 3XX, 4XX, 5XX).
`originHost`: Sort by domain name origin-pull data. Supported filters are `flux`, `request`, `bandwidth`, and `OriginStatusCode` (origin_2XX, origin_3XX, origin_4XX, origin_5XX).
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                    /**
                     * Metric name used for sorting:
flux: If Metric is `host`, it indicates the access traffic; if Metric is `originHost`, it indicates the origin-pull traffic.
bandwidth: If Metric is `host`, it indicates the access bandwidth; if Metric is `originHost`, it indicates the origin-pull bandwidth.
request: If Metric is `host`, it indicates the number of access requests; if Metric is `originHost`, it indicates the number of origin-pull requests.
fluxHitRate: Average traffic hit rate
2XX: access 2XX status code
3XX: access 3XX status code
4XX: access 4XX status code
5XX: access 5XX status code
origin_2XX: origin-pull 2XX status code
origin_3XX: origin-pull 3XX status code
origin_4XX: origin-pull 4XX status code
origin_5XX: origin-pull 5XX status code
statusCode: statistics of a specific access status code which is specified in the `Code` parameter.
OriginStatusCode: statistics of a specific origin-pull status code which is specified in the `Code` parameter.
                     */
                    std::string m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * Specifies the list of domain names to be queried; up to 30 domain names can be queried at a time.
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
                     * The sorted results of all domain names are returned by default (false) during a multi-domain-name query
If `Metric` is `url`, `path`, `district`, or `isp` and `Filter` is `flux` or `request`, it can be set to `true` to return the sorted results of each domain.
                     */
                    bool m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * When Filter is `statusCode` or `OriginStatusCode`, enter a code to query and sort results.
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * Specifies the service region. If this value is left blank, it means to query CDN data within the Chinese mainland.
`mainland`: Query CDN data in the Chinese mainland.
`overseas`: Query CDN data outside the Chinese mainland. Supported metrics are `url`, `district`, `host`, and `originHost`. If `Metric` is `originHost`, supported filters are `flux`, `request`, and `bandwidth`.
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Specifies a region type for the query. If it is left blank, data of the service region will be queried. This parameter is only valid when `Area` is `overseas` and `Metric` is `district` or `host`.
`server`: Query by the location of server (Tencent Cloud CDN nodes).
`client`: Query data of the client region where the request devices are located; if `Metric` is `host`, supported filters are `flux`, `request`, and `bandwidth`.
                     */
                    std::string m_areaType;
                    bool m_areaTypeHasBeenSet;

                    /**
                     * Specifies the product to query, either `cdn` (default) or `ecdn`.
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * Returns the first N data entries. The default value is 100 if this parameter is not specified, whereas 1000 if `Metric` is `url`.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_LISTTOPDATAREQUEST_H_
