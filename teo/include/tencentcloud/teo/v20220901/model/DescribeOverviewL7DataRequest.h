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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEOVERVIEWL7DATAREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEOVERVIEWL7DATAREQUEST_H_

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
                * DescribeOverviewL7Data request structure.
                */
                class DescribeOverviewL7DataRequest : public AbstractModel
                {
                public:
                    DescribeOverviewL7DataRequest();
                    ~DescribeOverviewL7DataRequest() = default;
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
<li>l7Flow_outFlux: EdgeOne response traffic;</li>
<li>l7Flow_inFlux: EdgeOne request traffic;</li>
<li>l7Flow_outBandwidth: EdgeOne response bandwidth;</li>
<li>l7Flow_inBandwidth: EdgeOne request traffic;</li>
<li>l7Flow_hit_outFlux: cache hit traffic;</li>
<li>l7Flow_request: number of access requests;</li>
<li>l7Flow_flux: upstream and downstream traffic of access requests;</li>
<li>l7Flow_bandwidth: upstream and downstream bandwidths of access requests.</li>
                     * @return MetricNames Queried metric. Valid values:
<li>l7Flow_outFlux: EdgeOne response traffic;</li>
<li>l7Flow_inFlux: EdgeOne request traffic;</li>
<li>l7Flow_outBandwidth: EdgeOne response bandwidth;</li>
<li>l7Flow_inBandwidth: EdgeOne request traffic;</li>
<li>l7Flow_hit_outFlux: cache hit traffic;</li>
<li>l7Flow_request: number of access requests;</li>
<li>l7Flow_flux: upstream and downstream traffic of access requests;</li>
<li>l7Flow_bandwidth: upstream and downstream bandwidths of access requests.</li>
                     * 
                     */
                    std::vector<std::string> GetMetricNames() const;

                    /**
                     * 设置Queried metric. Valid values:
<li>l7Flow_outFlux: EdgeOne response traffic;</li>
<li>l7Flow_inFlux: EdgeOne request traffic;</li>
<li>l7Flow_outBandwidth: EdgeOne response bandwidth;</li>
<li>l7Flow_inBandwidth: EdgeOne request traffic;</li>
<li>l7Flow_hit_outFlux: cache hit traffic;</li>
<li>l7Flow_request: number of access requests;</li>
<li>l7Flow_flux: upstream and downstream traffic of access requests;</li>
<li>l7Flow_bandwidth: upstream and downstream bandwidths of access requests.</li>
                     * @param _metricNames Queried metric. Valid values:
<li>l7Flow_outFlux: EdgeOne response traffic;</li>
<li>l7Flow_inFlux: EdgeOne request traffic;</li>
<li>l7Flow_outBandwidth: EdgeOne response bandwidth;</li>
<li>l7Flow_inBandwidth: EdgeOne request traffic;</li>
<li>l7Flow_hit_outFlux: cache hit traffic;</li>
<li>l7Flow_request: number of access requests;</li>
<li>l7Flow_flux: upstream and downstream traffic of access requests;</li>
<li>l7Flow_bandwidth: upstream and downstream bandwidths of access requests.</li>
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
                     * 获取Queried domain name set. This parameter has been deprecated.
                     * @return Domains Queried domain name set. This parameter has been deprecated.
                     * 
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置Queried domain name set. This parameter has been deprecated.
                     * @param _domains Queried domain name set. This parameter has been deprecated.
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
                     * 获取Protocol type of the query. Valid values:
<li>http: HTTP protocol;</li>
<li>https: HTTPS protocol;</li>
<li>http2: HTTP/2 protocol;</li>
<li>all: all protocols.</li>If this parameter is not input, the default value `all` is used. This parameter is not yet effective.
                     * @return Protocol Protocol type of the query. Valid values:
<li>http: HTTP protocol;</li>
<li>https: HTTPS protocol;</li>
<li>http2: HTTP/2 protocol;</li>
<li>all: all protocols.</li>If this parameter is not input, the default value `all` is used. This parameter is not yet effective.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Protocol type of the query. Valid values:
<li>http: HTTP protocol;</li>
<li>https: HTTPS protocol;</li>
<li>http2: HTTP/2 protocol;</li>
<li>all: all protocols.</li>If this parameter is not input, the default value `all` is used. This parameter is not yet effective.
                     * @param _protocol Protocol type of the query. Valid values:
<li>http: HTTP protocol;</li>
<li>https: HTTPS protocol;</li>
<li>http2: HTTP/2 protocol;</li>
<li>all: all protocols.</li>If this parameter is not input, the default value `all` is used. This parameter is not yet effective.
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
                     * 获取Time granularity of the query. Valid values:
<li>min: 1 minute;</li>
<li>5min: 5 minutes;</li>
<li>hour: 1 hour;</li>
<li>day: 1 day.</li>If this parameter is not input, the granularity will be automatically inferred based on the interval between the start time and end time. Specifically, the granularity value is min, 5min, hour, and day respectively for queries of data within 1 hour, within 2 days, within 7 days, and over 7 days.
                     * @return Interval Time granularity of the query. Valid values:
<li>min: 1 minute;</li>
<li>5min: 5 minutes;</li>
<li>hour: 1 hour;</li>
<li>day: 1 day.</li>If this parameter is not input, the granularity will be automatically inferred based on the interval between the start time and end time. Specifically, the granularity value is min, 5min, hour, and day respectively for queries of data within 1 hour, within 2 days, within 7 days, and over 7 days.
                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置Time granularity of the query. Valid values:
<li>min: 1 minute;</li>
<li>5min: 5 minutes;</li>
<li>hour: 1 hour;</li>
<li>day: 1 day.</li>If this parameter is not input, the granularity will be automatically inferred based on the interval between the start time and end time. Specifically, the granularity value is min, 5min, hour, and day respectively for queries of data within 1 hour, within 2 days, within 7 days, and over 7 days.
                     * @param _interval Time granularity of the query. Valid values:
<li>min: 1 minute;</li>
<li>5min: 5 minutes;</li>
<li>hour: 1 hour;</li>
<li>day: 1 day.</li>If this parameter is not input, the granularity will be automatically inferred based on the interval between the start time and end time. Specifically, the granularity value is min, 5min, hour, and day respectively for queries of data within 1 hour, within 2 days, within 7 days, and over 7 days.
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
                     * 获取Filter criteria. The detailed Key values of filter criteria are as follows:
<li>socket:<br>   Filter by [<strong>HTTP protocol type</strong>].<br>   Valid values:<br>   HTTP: HTTP protocol; <br>   HTTPS: HTTPS protocol;<br>   QUIC: QUIC protocol.</li>
<li>domain<br>?? Filter by [<strong>domain name</strong>].</li>
<li>tagKey<br>?? Filter by [<strong>tag key</strong>].</li>
<li>tagValue<br>?? Filter by [<strong>tag value</strong>].</li>
                     * @return Filters Filter criteria. The detailed Key values of filter criteria are as follows:
<li>socket:<br>   Filter by [<strong>HTTP protocol type</strong>].<br>   Valid values:<br>   HTTP: HTTP protocol; <br>   HTTPS: HTTPS protocol;<br>   QUIC: QUIC protocol.</li>
<li>domain<br>?? Filter by [<strong>domain name</strong>].</li>
<li>tagKey<br>?? Filter by [<strong>tag key</strong>].</li>
<li>tagValue<br>?? Filter by [<strong>tag value</strong>].</li>
                     * 
                     */
                    std::vector<QueryCondition> GetFilters() const;

                    /**
                     * 设置Filter criteria. The detailed Key values of filter criteria are as follows:
<li>socket:<br>   Filter by [<strong>HTTP protocol type</strong>].<br>   Valid values:<br>   HTTP: HTTP protocol; <br>   HTTPS: HTTPS protocol;<br>   QUIC: QUIC protocol.</li>
<li>domain<br>?? Filter by [<strong>domain name</strong>].</li>
<li>tagKey<br>?? Filter by [<strong>tag key</strong>].</li>
<li>tagValue<br>?? Filter by [<strong>tag value</strong>].</li>
                     * @param _filters Filter criteria. The detailed Key values of filter criteria are as follows:
<li>socket:<br>   Filter by [<strong>HTTP protocol type</strong>].<br>   Valid values:<br>   HTTP: HTTP protocol; <br>   HTTPS: HTTPS protocol;<br>   QUIC: QUIC protocol.</li>
<li>domain<br>?? Filter by [<strong>domain name</strong>].</li>
<li>tagKey<br>?? Filter by [<strong>tag key</strong>].</li>
<li>tagValue<br>?? Filter by [<strong>tag value</strong>].</li>
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
                     * 获取Data ownership area. Valid values:
<li>overseas: global (excluding the Chinese mainland) data;</li>
<li>mainland: Chinese mainland data;</li>
<li>global: global data.</li>If this parameter is not input, the default value `global` is used.
                     * @return Area Data ownership area. Valid values:
<li>overseas: global (excluding the Chinese mainland) data;</li>
<li>mainland: Chinese mainland data;</li>
<li>global: global data.</li>If this parameter is not input, the default value `global` is used.
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Data ownership area. Valid values:
<li>overseas: global (excluding the Chinese mainland) data;</li>
<li>mainland: Chinese mainland data;</li>
<li>global: global data.</li>If this parameter is not input, the default value `global` is used.
                     * @param _area Data ownership area. Valid values:
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
<li>l7Flow_outFlux: EdgeOne response traffic;</li>
<li>l7Flow_inFlux: EdgeOne request traffic;</li>
<li>l7Flow_outBandwidth: EdgeOne response bandwidth;</li>
<li>l7Flow_inBandwidth: EdgeOne request traffic;</li>
<li>l7Flow_hit_outFlux: cache hit traffic;</li>
<li>l7Flow_request: number of access requests;</li>
<li>l7Flow_flux: upstream and downstream traffic of access requests;</li>
<li>l7Flow_bandwidth: upstream and downstream bandwidths of access requests.</li>
                     */
                    std::vector<std::string> m_metricNames;
                    bool m_metricNamesHasBeenSet;

                    /**
                     * Site ID set. This parameter is required.
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * Queried domain name set. This parameter has been deprecated.
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * Protocol type of the query. Valid values:
<li>http: HTTP protocol;</li>
<li>https: HTTPS protocol;</li>
<li>http2: HTTP/2 protocol;</li>
<li>all: all protocols.</li>If this parameter is not input, the default value `all` is used. This parameter is not yet effective.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Time granularity of the query. Valid values:
<li>min: 1 minute;</li>
<li>5min: 5 minutes;</li>
<li>hour: 1 hour;</li>
<li>day: 1 day.</li>If this parameter is not input, the granularity will be automatically inferred based on the interval between the start time and end time. Specifically, the granularity value is min, 5min, hour, and day respectively for queries of data within 1 hour, within 2 days, within 7 days, and over 7 days.
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * Filter criteria. The detailed Key values of filter criteria are as follows:
<li>socket:<br>   Filter by [<strong>HTTP protocol type</strong>].<br>   Valid values:<br>   HTTP: HTTP protocol; <br>   HTTPS: HTTPS protocol;<br>   QUIC: QUIC protocol.</li>
<li>domain<br>?? Filter by [<strong>domain name</strong>].</li>
<li>tagKey<br>?? Filter by [<strong>tag key</strong>].</li>
<li>tagValue<br>?? Filter by [<strong>tag value</strong>].</li>
                     */
                    std::vector<QueryCondition> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Data ownership area. Valid values:
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

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEOVERVIEWL7DATAREQUEST_H_
