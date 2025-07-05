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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBETIMINGL4DATAREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBETIMINGL4DATAREQUEST_H_

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
                * DescribeTimingL4Data request structure.
                */
                class DescribeTimingL4DataRequest : public AbstractModel
                {
                public:
                    DescribeTimingL4DataRequest();
                    ~DescribeTimingL4DataRequest() = default;
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
                     * 获取The end time. The query time range (`EndTime` - `StartTime`) must be less than or equal to 31 days.
                     * @return EndTime The end time. The query time range (`EndTime` - `StartTime`) must be less than or equal to 31 days.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置The end time. The query time range (`EndTime` - `StartTime`) must be less than or equal to 31 days.
                     * @param _endTime The end time. The query time range (`EndTime` - `StartTime`) must be less than or equal to 31 days.
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
                     * 获取Metric list. Valid values:
<Li>l4Flow_connections: number of concurrent connections;</li>
<Li>l4Flow_flux: total traffic;</li>
<Li>l4Flow_inFlux: inbound traffic;</li>
<Li>l4Flow_outFlux: outbound traffic.</li>
<Li>l4Flow_inBandwidth: inbound peak bandwidth.</li>
<Li>l4Flow_outBandwidth: outbound peak bandwidth.</li>
                     * @return MetricNames Metric list. Valid values:
<Li>l4Flow_connections: number of concurrent connections;</li>
<Li>l4Flow_flux: total traffic;</li>
<Li>l4Flow_inFlux: inbound traffic;</li>
<Li>l4Flow_outFlux: outbound traffic.</li>
<Li>l4Flow_inBandwidth: inbound peak bandwidth.</li>
<Li>l4Flow_outBandwidth: outbound peak bandwidth.</li>
                     * 
                     */
                    std::vector<std::string> GetMetricNames() const;

                    /**
                     * 设置Metric list. Valid values:
<Li>l4Flow_connections: number of concurrent connections;</li>
<Li>l4Flow_flux: total traffic;</li>
<Li>l4Flow_inFlux: inbound traffic;</li>
<Li>l4Flow_outFlux: outbound traffic.</li>
<Li>l4Flow_inBandwidth: inbound peak bandwidth.</li>
<Li>l4Flow_outBandwidth: outbound peak bandwidth.</li>
                     * @param _metricNames Metric list. Valid values:
<Li>l4Flow_connections: number of concurrent connections;</li>
<Li>l4Flow_flux: total traffic;</li>
<Li>l4Flow_inFlux: inbound traffic;</li>
<Li>l4Flow_outFlux: outbound traffic.</li>
<Li>l4Flow_inBandwidth: inbound peak bandwidth.</li>
<Li>l4Flow_outBandwidth: outbound peak bandwidth.</li>
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
                     * 获取Zone ID set. This parameter is required. A maximum of 100 zone IDs can be passed in. If you need to query data for all zones under the Tencent Cloud main account, please use "*" instead. To query account-level data, you need to have full resource permissions for all zones of this interface.
                     * @return ZoneIds Zone ID set. This parameter is required. A maximum of 100 zone IDs can be passed in. If you need to query data for all zones under the Tencent Cloud main account, please use "*" instead. To query account-level data, you need to have full resource permissions for all zones of this interface.
                     * 
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置Zone ID set. This parameter is required. A maximum of 100 zone IDs can be passed in. If you need to query data for all zones under the Tencent Cloud main account, please use "*" instead. To query account-level data, you need to have full resource permissions for all zones of this interface.
                     * @param _zoneIds Zone ID set. This parameter is required. A maximum of 100 zone IDs can be passed in. If you need to query data for all zones under the Tencent Cloud main account, please use "*" instead. To query account-level data, you need to have full resource permissions for all zones of this interface.
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
                     * 获取List of L4 proxy IDs. All L4 proxies will be selected if this field is not specified.
                     * @return ProxyIds List of L4 proxy IDs. All L4 proxies will be selected if this field is not specified.
                     * 
                     */
                    std::vector<std::string> GetProxyIds() const;

                    /**
                     * 设置List of L4 proxy IDs. All L4 proxies will be selected if this field is not specified.
                     * @param _proxyIds List of L4 proxy IDs. All L4 proxies will be selected if this field is not specified.
                     * 
                     */
                    void SetProxyIds(const std::vector<std::string>& _proxyIds);

                    /**
                     * 判断参数 ProxyIds 是否已赋值
                     * @return ProxyIds 是否已赋值
                     * 
                     */
                    bool ProxyIdsHasBeenSet() const;

                    /**
                     * 获取The query granularity. Values:
<li>`min`: 1 minute;</li>
<li>`5min`: 5 minutes;</li>
<li>`hour`: 1 hour;</li>
<li>`day`: 1 day.</li>If this field is not specified, the granularity will be determined based on the query period. <br>Period <= 1 hour: `min`; <br>1 hour < period <= 2 days: `5min`; <br>2 days < period <= 7 days: `hour`; <br>Period > 7 days: `day`.

                     * @return Interval The query granularity. Values:
<li>`min`: 1 minute;</li>
<li>`5min`: 5 minutes;</li>
<li>`hour`: 1 hour;</li>
<li>`day`: 1 day.</li>If this field is not specified, the granularity will be determined based on the query period. <br>Period <= 1 hour: `min`; <br>1 hour < period <= 2 days: `5min`; <br>2 days < period <= 7 days: `hour`; <br>Period > 7 days: `day`.

                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置The query granularity. Values:
<li>`min`: 1 minute;</li>
<li>`5min`: 5 minutes;</li>
<li>`hour`: 1 hour;</li>
<li>`day`: 1 day.</li>If this field is not specified, the granularity will be determined based on the query period. <br>Period <= 1 hour: `min`; <br>1 hour < period <= 2 days: `5min`; <br>2 days < period <= 7 days: `hour`; <br>Period > 7 days: `day`.

                     * @param _interval The query granularity. Values:
<li>`min`: 1 minute;</li>
<li>`5min`: 5 minutes;</li>
<li>`hour`: 1 hour;</li>
<li>`day`: 1 day.</li>If this field is not specified, the granularity will be determined based on the query period. <br>Period <= 1 hour: `min`; <br>1 hour < period <= 2 days: `5min`; <br>2 days < period <= 7 days: `hour`; <br>Period > 7 days: `day`.

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
<li>ruleId: filter by forwarding rule ID.</li>
<li>proxyId: filter by L4 proxy instance ID.</li>
                     * @return Filters Filter criteria. The detailed key values of filter criteria are as follows:
<li>ruleId: filter by forwarding rule ID.</li>
<li>proxyId: filter by L4 proxy instance ID.</li>
                     * 
                     */
                    std::vector<QueryCondition> GetFilters() const;

                    /**
                     * 设置Filter criteria. The detailed key values of filter criteria are as follows:
<li>ruleId: filter by forwarding rule ID.</li>
<li>proxyId: filter by L4 proxy instance ID.</li>
                     * @param _filters Filter criteria. The detailed key values of filter criteria are as follows:
<li>ruleId: filter by forwarding rule ID.</li>
<li>proxyId: filter by L4 proxy instance ID.</li>
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
                     * The end time. The query time range (`EndTime` - `StartTime`) must be less than or equal to 31 days.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Metric list. Valid values:
<Li>l4Flow_connections: number of concurrent connections;</li>
<Li>l4Flow_flux: total traffic;</li>
<Li>l4Flow_inFlux: inbound traffic;</li>
<Li>l4Flow_outFlux: outbound traffic.</li>
<Li>l4Flow_inBandwidth: inbound peak bandwidth.</li>
<Li>l4Flow_outBandwidth: outbound peak bandwidth.</li>
                     */
                    std::vector<std::string> m_metricNames;
                    bool m_metricNamesHasBeenSet;

                    /**
                     * Zone ID set. This parameter is required. A maximum of 100 zone IDs can be passed in. If you need to query data for all zones under the Tencent Cloud main account, please use "*" instead. To query account-level data, you need to have full resource permissions for all zones of this interface.
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * List of L4 proxy IDs. All L4 proxies will be selected if this field is not specified.
                     */
                    std::vector<std::string> m_proxyIds;
                    bool m_proxyIdsHasBeenSet;

                    /**
                     * The query granularity. Values:
<li>`min`: 1 minute;</li>
<li>`5min`: 5 minutes;</li>
<li>`hour`: 1 hour;</li>
<li>`day`: 1 day.</li>If this field is not specified, the granularity will be determined based on the query period. <br>Period <= 1 hour: `min`; <br>1 hour < period <= 2 days: `5min`; <br>2 days < period <= 7 days: `hour`; <br>Period > 7 days: `day`.

                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * Filter criteria. The detailed key values of filter criteria are as follows:
<li>ruleId: filter by forwarding rule ID.</li>
<li>proxyId: filter by L4 proxy instance ID.</li>
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

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBETIMINGL4DATAREQUEST_H_
