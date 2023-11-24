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
                     * 获取The metric to query. Values:
<li>`l7Flow_outFlux`: Traffic used for EdegOne responses</li>
<li>`l7Flow_inFlux`: Traffic used for EdegOne requests</li>
<li>`l7Flow_outBandwidth`: Bandwidth used for EdegOne responses</li>
<li>`l7Flow_inBandwidth`: Bandwidth used for EdegOne requests</li>
<li>`l7Flow_hit_outFlux`: Traffic used for cache hit</li>
<li>`l7Flow_request`: Access requests</li>
<li>`l7Flow_flux`: Upstream and downstream traffic used for client access</li>
<li>`l7Flow_bandwidth`: Upstream and downstream bandwidth used for client access</li>
                     * @return MetricNames The metric to query. Values:
<li>`l7Flow_outFlux`: Traffic used for EdegOne responses</li>
<li>`l7Flow_inFlux`: Traffic used for EdegOne requests</li>
<li>`l7Flow_outBandwidth`: Bandwidth used for EdegOne responses</li>
<li>`l7Flow_inBandwidth`: Bandwidth used for EdegOne requests</li>
<li>`l7Flow_hit_outFlux`: Traffic used for cache hit</li>
<li>`l7Flow_request`: Access requests</li>
<li>`l7Flow_flux`: Upstream and downstream traffic used for client access</li>
<li>`l7Flow_bandwidth`: Upstream and downstream bandwidth used for client access</li>
                     * 
                     */
                    std::vector<std::string> GetMetricNames() const;

                    /**
                     * 设置The metric to query. Values:
<li>`l7Flow_outFlux`: Traffic used for EdegOne responses</li>
<li>`l7Flow_inFlux`: Traffic used for EdegOne requests</li>
<li>`l7Flow_outBandwidth`: Bandwidth used for EdegOne responses</li>
<li>`l7Flow_inBandwidth`: Bandwidth used for EdegOne requests</li>
<li>`l7Flow_hit_outFlux`: Traffic used for cache hit</li>
<li>`l7Flow_request`: Access requests</li>
<li>`l7Flow_flux`: Upstream and downstream traffic used for client access</li>
<li>`l7Flow_bandwidth`: Upstream and downstream bandwidth used for client access</li>
                     * @param _metricNames The metric to query. Values:
<li>`l7Flow_outFlux`: Traffic used for EdegOne responses</li>
<li>`l7Flow_inFlux`: Traffic used for EdegOne requests</li>
<li>`l7Flow_outBandwidth`: Bandwidth used for EdegOne responses</li>
<li>`l7Flow_inBandwidth`: Bandwidth used for EdegOne requests</li>
<li>`l7Flow_hit_outFlux`: Traffic used for cache hit</li>
<li>`l7Flow_request`: Access requests</li>
<li>`l7Flow_flux`: Upstream and downstream traffic used for client access</li>
<li>`l7Flow_bandwidth`: Upstream and downstream bandwidth used for client access</li>
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
                     * 获取Queried domain name set. This parameter has been discarded.
                     * @return Domains Queried domain name set. This parameter has been discarded.
                     * 
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置Queried domain name set. This parameter has been discarded.
                     * @param _domains Queried domain name set. This parameter has been discarded.
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
                     * 获取The protocol type. Values:
<li>`http`: HTTP protocol;</li>
<li>`https`: HTTPS protocol;</li>
<li>`http2`: HTTP2 protocol;</li>
<li>`all`:   All protocols. </li>If it’s not specified, `all` is used. This parameter is not yet available now.
                     * @return Protocol The protocol type. Values:
<li>`http`: HTTP protocol;</li>
<li>`https`: HTTPS protocol;</li>
<li>`http2`: HTTP2 protocol;</li>
<li>`all`:   All protocols. </li>If it’s not specified, `all` is used. This parameter is not yet available now.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置The protocol type. Values:
<li>`http`: HTTP protocol;</li>
<li>`https`: HTTPS protocol;</li>
<li>`http2`: HTTP2 protocol;</li>
<li>`all`:   All protocols. </li>If it’s not specified, `all` is used. This parameter is not yet available now.
                     * @param _protocol The protocol type. Values:
<li>`http`: HTTP protocol;</li>
<li>`https`: HTTPS protocol;</li>
<li>`http2`: HTTP2 protocol;</li>
<li>`all`:   All protocols. </li>If it’s not specified, `all` is used. This parameter is not yet available now.
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
                     * 获取The query granularity. Values:
<li>`min`: 1 minute;</li>
<li>`5min`: 5 minutes;</li>
<li>`hour`: 1 hour;</li>
<li>`day`: One day</li>If this field is not specified, the granularity will be determined based on the query period. <br>Period ≤ 1 hour: `min`; <br>1 hour < Period ≤ 2 days: `5min`; <br>2 days < period ≤ 7 days: `hour`; <br>Period > 7 days: `day`.
                     * @return Interval The query granularity. Values:
<li>`min`: 1 minute;</li>
<li>`5min`: 5 minutes;</li>
<li>`hour`: 1 hour;</li>
<li>`day`: One day</li>If this field is not specified, the granularity will be determined based on the query period. <br>Period ≤ 1 hour: `min`; <br>1 hour < Period ≤ 2 days: `5min`; <br>2 days < period ≤ 7 days: `hour`; <br>Period > 7 days: `day`.
                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置The query granularity. Values:
<li>`min`: 1 minute;</li>
<li>`5min`: 5 minutes;</li>
<li>`hour`: 1 hour;</li>
<li>`day`: One day</li>If this field is not specified, the granularity will be determined based on the query period. <br>Period ≤ 1 hour: `min`; <br>1 hour < Period ≤ 2 days: `5min`; <br>2 days < period ≤ 7 days: `hour`; <br>Period > 7 days: `day`.
                     * @param _interval The query granularity. Values:
<li>`min`: 1 minute;</li>
<li>`5min`: 5 minutes;</li>
<li>`hour`: 1 hour;</li>
<li>`day`: One day</li>If this field is not specified, the granularity will be determined based on the query period. <br>Period ≤ 1 hour: `min`; <br>1 hour < Period ≤ 2 days: `5min`; <br>2 days < period ≤ 7 days: `hour`; <br>Period > 7 days: `day`.
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
                     * 获取Filtering condition. The detailed filtering condition key values are as follows: 
<li>socket<br>    Filter based on [<strong>HTTP protocol type</strong>]. <br>    Corresponding value options: <br>    HTTP: HTTP protocol；<br>    HTTPS: HTTPS protocol;<br>    QUIC: QUIC protocol. </li>
<li>domains<br>    Filter based on [<strong>domain name</strong>]. </li>
<li>tagKey<br>    Filter based on [<strong>Tag Key</strong>]. </li>
<li>tagValue<br>    Filter based on [<strong>Tag Value</strong>]. </li>
                     * @return Filters Filtering condition. The detailed filtering condition key values are as follows: 
<li>socket<br>    Filter based on [<strong>HTTP protocol type</strong>]. <br>    Corresponding value options: <br>    HTTP: HTTP protocol；<br>    HTTPS: HTTPS protocol;<br>    QUIC: QUIC protocol. </li>
<li>domains<br>    Filter based on [<strong>domain name</strong>]. </li>
<li>tagKey<br>    Filter based on [<strong>Tag Key</strong>]. </li>
<li>tagValue<br>    Filter based on [<strong>Tag Value</strong>]. </li>
                     * 
                     */
                    std::vector<QueryCondition> GetFilters() const;

                    /**
                     * 设置Filtering condition. The detailed filtering condition key values are as follows: 
<li>socket<br>    Filter based on [<strong>HTTP protocol type</strong>]. <br>    Corresponding value options: <br>    HTTP: HTTP protocol；<br>    HTTPS: HTTPS protocol;<br>    QUIC: QUIC protocol. </li>
<li>domains<br>    Filter based on [<strong>domain name</strong>]. </li>
<li>tagKey<br>    Filter based on [<strong>Tag Key</strong>]. </li>
<li>tagValue<br>    Filter based on [<strong>Tag Value</strong>]. </li>
                     * @param _filters Filtering condition. The detailed filtering condition key values are as follows: 
<li>socket<br>    Filter based on [<strong>HTTP protocol type</strong>]. <br>    Corresponding value options: <br>    HTTP: HTTP protocol；<br>    HTTPS: HTTPS protocol;<br>    QUIC: QUIC protocol. </li>
<li>domains<br>    Filter based on [<strong>domain name</strong>]. </li>
<li>tagKey<br>    Filter based on [<strong>Tag Key</strong>]. </li>
<li>tagValue<br>    Filter based on [<strong>Tag Value</strong>]. </li>
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
                     * The metric to query. Values:
<li>`l7Flow_outFlux`: Traffic used for EdegOne responses</li>
<li>`l7Flow_inFlux`: Traffic used for EdegOne requests</li>
<li>`l7Flow_outBandwidth`: Bandwidth used for EdegOne responses</li>
<li>`l7Flow_inBandwidth`: Bandwidth used for EdegOne requests</li>
<li>`l7Flow_hit_outFlux`: Traffic used for cache hit</li>
<li>`l7Flow_request`: Access requests</li>
<li>`l7Flow_flux`: Upstream and downstream traffic used for client access</li>
<li>`l7Flow_bandwidth`: Upstream and downstream bandwidth used for client access</li>
                     */
                    std::vector<std::string> m_metricNames;
                    bool m_metricNamesHasBeenSet;

                    /**
                     * ZoneId set. This parameter is required.
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * Queried domain name set. This parameter has been discarded.
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * The protocol type. Values:
<li>`http`: HTTP protocol;</li>
<li>`https`: HTTPS protocol;</li>
<li>`http2`: HTTP2 protocol;</li>
<li>`all`:   All protocols. </li>If it’s not specified, `all` is used. This parameter is not yet available now.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * The query granularity. Values:
<li>`min`: 1 minute;</li>
<li>`5min`: 5 minutes;</li>
<li>`hour`: 1 hour;</li>
<li>`day`: One day</li>If this field is not specified, the granularity will be determined based on the query period. <br>Period ≤ 1 hour: `min`; <br>1 hour < Period ≤ 2 days: `5min`; <br>2 days < period ≤ 7 days: `hour`; <br>Period > 7 days: `day`.
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * Filtering condition. The detailed filtering condition key values are as follows: 
<li>socket<br>    Filter based on [<strong>HTTP protocol type</strong>]. <br>    Corresponding value options: <br>    HTTP: HTTP protocol；<br>    HTTPS: HTTPS protocol;<br>    QUIC: QUIC protocol. </li>
<li>domains<br>    Filter based on [<strong>domain name</strong>]. </li>
<li>tagKey<br>    Filter based on [<strong>Tag Key</strong>]. </li>
<li>tagValue<br>    Filter based on [<strong>Tag Value</strong>]. </li>
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

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEOVERVIEWL7DATAREQUEST_H_
