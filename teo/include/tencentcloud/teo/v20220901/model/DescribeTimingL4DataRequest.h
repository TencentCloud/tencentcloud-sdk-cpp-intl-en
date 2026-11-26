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
                     * 获取End time. The query time range (`EndTime` - `StartTime`) must be up to 31 days.
                     * @return EndTime End time. The query time range (`EndTime` - `StartTime`) must be up to 31 days.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time. The query time range (`EndTime` - `StartTime`) must be up to 31 days.
                     * @param _endTime End time. The query time range (`EndTime` - `StartTime`) must be up to 31 days.
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
<ul><li>**l4Flow_flux**: Total access traffic, unit: Byte, metric value type: Integer;</li>
<li>**l4Flow_inFlux**: Access inbound traffic, unit: Byte, metric value type: Integer;</li>
<li>**l4Flow_outFlux**: Access outbound traffic, unit: Byte, metric value type: Integer;</li>
<li>**l4Flow_inBandwidth**: Inbound bandwidth peak for access, unit: bps, metric value type: Integer;</li>
<li>**l4Flow_outBandwidth**: Outbound access bandwidth peak, unit: bps, metric value type: Integer;</li>
<li>**l4Flow_connections**: Number of concurrent connections, unit: count, metric value type: Integer;</li>
<li>**l4Flow_newConnectionsRate**: Rate of new connections, unit: connections/second, metric value type: Float, rounded to two decimal places.</li></ul>**Note**:<ul><li>Metrics of the <code>Integer</code> value type will return corresponding time series data from <code>Data.N.TypeValue</code>;</li>
<li>Metrics of the <code>Float</code> value type return corresponding time series data from <code>Data.N.FloatTypeValue</code>.</li></ul>
                     * @return MetricNames Queried metric. Valid values:
<ul><li>**l4Flow_flux**: Total access traffic, unit: Byte, metric value type: Integer;</li>
<li>**l4Flow_inFlux**: Access inbound traffic, unit: Byte, metric value type: Integer;</li>
<li>**l4Flow_outFlux**: Access outbound traffic, unit: Byte, metric value type: Integer;</li>
<li>**l4Flow_inBandwidth**: Inbound bandwidth peak for access, unit: bps, metric value type: Integer;</li>
<li>**l4Flow_outBandwidth**: Outbound access bandwidth peak, unit: bps, metric value type: Integer;</li>
<li>**l4Flow_connections**: Number of concurrent connections, unit: count, metric value type: Integer;</li>
<li>**l4Flow_newConnectionsRate**: Rate of new connections, unit: connections/second, metric value type: Float, rounded to two decimal places.</li></ul>**Note**:<ul><li>Metrics of the <code>Integer</code> value type will return corresponding time series data from <code>Data.N.TypeValue</code>;</li>
<li>Metrics of the <code>Float</code> value type return corresponding time series data from <code>Data.N.FloatTypeValue</code>.</li></ul>
                     * 
                     */
                    std::vector<std::string> GetMetricNames() const;

                    /**
                     * 设置Queried metric. Valid values:
<ul><li>**l4Flow_flux**: Total access traffic, unit: Byte, metric value type: Integer;</li>
<li>**l4Flow_inFlux**: Access inbound traffic, unit: Byte, metric value type: Integer;</li>
<li>**l4Flow_outFlux**: Access outbound traffic, unit: Byte, metric value type: Integer;</li>
<li>**l4Flow_inBandwidth**: Inbound bandwidth peak for access, unit: bps, metric value type: Integer;</li>
<li>**l4Flow_outBandwidth**: Outbound access bandwidth peak, unit: bps, metric value type: Integer;</li>
<li>**l4Flow_connections**: Number of concurrent connections, unit: count, metric value type: Integer;</li>
<li>**l4Flow_newConnectionsRate**: Rate of new connections, unit: connections/second, metric value type: Float, rounded to two decimal places.</li></ul>**Note**:<ul><li>Metrics of the <code>Integer</code> value type will return corresponding time series data from <code>Data.N.TypeValue</code>;</li>
<li>Metrics of the <code>Float</code> value type return corresponding time series data from <code>Data.N.FloatTypeValue</code>.</li></ul>
                     * @param _metricNames Queried metric. Valid values:
<ul><li>**l4Flow_flux**: Total access traffic, unit: Byte, metric value type: Integer;</li>
<li>**l4Flow_inFlux**: Access inbound traffic, unit: Byte, metric value type: Integer;</li>
<li>**l4Flow_outFlux**: Access outbound traffic, unit: Byte, metric value type: Integer;</li>
<li>**l4Flow_inBandwidth**: Inbound bandwidth peak for access, unit: bps, metric value type: Integer;</li>
<li>**l4Flow_outBandwidth**: Outbound access bandwidth peak, unit: bps, metric value type: Integer;</li>
<li>**l4Flow_connections**: Number of concurrent connections, unit: count, metric value type: Integer;</li>
<li>**l4Flow_newConnectionsRate**: Rate of new connections, unit: connections/second, metric value type: Float, rounded to two decimal places.</li></ul>**Note**:<ul><li>Metrics of the <code>Integer</code> value type will return corresponding time series data from <code>Data.N.TypeValue</code>;</li>
<li>Metrics of the <code>Float</code> value type return corresponding time series data from <code>Data.N.FloatTypeValue</code>.</li></ul>
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
                     * 获取Site ID. This parameter will change from selectable to required after May 30, 2024. For details, see the announcement: [Tencent Cloud EdgeOne Cloud API Change Notification](https://www.tencentcloud.com/document/product/1552/104902?from_cn_redirect=1).
Import up to 100 site IDs. To query data of all sites under the Tencent Cloud root account, use `*` instead. To query account-level data, you must have permissions for all site resources of this interface.
                     * @return ZoneIds Site ID. This parameter will change from selectable to required after May 30, 2024. For details, see the announcement: [Tencent Cloud EdgeOne Cloud API Change Notification](https://www.tencentcloud.com/document/product/1552/104902?from_cn_redirect=1).
Import up to 100 site IDs. To query data of all sites under the Tencent Cloud root account, use `*` instead. To query account-level data, you must have permissions for all site resources of this interface.
                     * 
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置Site ID. This parameter will change from selectable to required after May 30, 2024. For details, see the announcement: [Tencent Cloud EdgeOne Cloud API Change Notification](https://www.tencentcloud.com/document/product/1552/104902?from_cn_redirect=1).
Import up to 100 site IDs. To query data of all sites under the Tencent Cloud root account, use `*` instead. To query account-level data, you must have permissions for all site resources of this interface.
                     * @param _zoneIds Site ID. This parameter will change from selectable to required after May 30, 2024. For details, see the announcement: [Tencent Cloud EdgeOne Cloud API Change Notification](https://www.tencentcloud.com/document/product/1552/104902?from_cn_redirect=1).
Import up to 100 site IDs. To query data of all sites under the Tencent Cloud root account, use `*` instead. To query account-level data, you must have permissions for all site resources of this interface.
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
                     * 获取Layer-4 instance list. If not specified, it means select all instances.
                     * @return ProxyIds Layer-4 instance list. If not specified, it means select all instances.
                     * 
                     */
                    std::vector<std::string> GetProxyIds() const;

                    /**
                     * 设置Layer-4 instance list. If not specified, it means select all instances.
                     * @param _proxyIds Layer-4 instance list. If not specified, it means select all instances.
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
                     * 获取Time granularity of the query. Valid values:
<ul><li>**min**: 1 minute;</li>
<li>**5min**: 5 minutes;</li>
<li>**hour**: 1 hour;</li>
<li>**day**: 1 day.</li></ul>If this parameter is not input, the granularity will be automatically calculated based on the interval between the start time and end time. Specifically, data will be queried with a granularity of <code>min</code>, <code>5min</code>, <code>hour</code>, and <code>day</code> respectively when the period is no more than 1 hour, no more than 2 days, no more than 7 days, and over 7 days.
                     * @return Interval Time granularity of the query. Valid values:
<ul><li>**min**: 1 minute;</li>
<li>**5min**: 5 minutes;</li>
<li>**hour**: 1 hour;</li>
<li>**day**: 1 day.</li></ul>If this parameter is not input, the granularity will be automatically calculated based on the interval between the start time and end time. Specifically, data will be queried with a granularity of <code>min</code>, <code>5min</code>, <code>hour</code>, and <code>day</code> respectively when the period is no more than 1 hour, no more than 2 days, no more than 7 days, and over 7 days.
                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置Time granularity of the query. Valid values:
<ul><li>**min**: 1 minute;</li>
<li>**5min**: 5 minutes;</li>
<li>**hour**: 1 hour;</li>
<li>**day**: 1 day.</li></ul>If this parameter is not input, the granularity will be automatically calculated based on the interval between the start time and end time. Specifically, data will be queried with a granularity of <code>min</code>, <code>5min</code>, <code>hour</code>, and <code>day</code> respectively when the period is no more than 1 hour, no more than 2 days, no more than 7 days, and over 7 days.
                     * @param _interval Time granularity of the query. Valid values:
<ul><li>**min**: 1 minute;</li>
<li>**5min**: 5 minutes;</li>
<li>**hour**: 1 hour;</li>
<li>**day**: 1 day.</li></ul>If this parameter is not input, the granularity will be automatically calculated based on the interval between the start time and end time. Specifically, data will be queried with a granularity of <code>min</code>, <code>5min</code>, <code>hour</code>, and <code>day</code> respectively when the period is no more than 1 hour, no more than 2 days, no more than 7 days, and over 7 days.
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
<ul><li>**ruleId**: Filter by forwarding rule ID.</li>
<li>**proxyId**: filter by L4 proxy instance ID.</li></ul>
                     * @return Filters Filter criteria. The detailed Key values of filter criteria are as follows:
<ul><li>**ruleId**: Filter by forwarding rule ID.</li>
<li>**proxyId**: filter by L4 proxy instance ID.</li></ul>
                     * 
                     */
                    std::vector<QueryCondition> GetFilters() const;

                    /**
                     * 设置Filter criteria. The detailed Key values of filter criteria are as follows:
<ul><li>**ruleId**: Filter by forwarding rule ID.</li>
<li>**proxyId**: filter by L4 proxy instance ID.</li></ul>
                     * @param _filters Filter criteria. The detailed Key values of filter criteria are as follows:
<ul><li>**ruleId**: Filter by forwarding rule ID.</li>
<li>**proxyId**: filter by L4 proxy instance ID.</li></ul>
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
                     * 获取Data ownership region. Deprecated. Filter data by client region in Filters.country.
                     * @return Area Data ownership region. Deprecated. Filter data by client region in Filters.country.
                     * @deprecated
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Data ownership region. Deprecated. Filter data by client region in Filters.country.
                     * @param _area Data ownership region. Deprecated. Filter data by client region in Filters.country.
                     * @deprecated
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * @deprecated
                     */
                    bool AreaHasBeenSet() const;

                private:

                    /**
                     * Start time.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time. The query time range (`EndTime` - `StartTime`) must be up to 31 days.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Queried metric. Valid values:
<ul><li>**l4Flow_flux**: Total access traffic, unit: Byte, metric value type: Integer;</li>
<li>**l4Flow_inFlux**: Access inbound traffic, unit: Byte, metric value type: Integer;</li>
<li>**l4Flow_outFlux**: Access outbound traffic, unit: Byte, metric value type: Integer;</li>
<li>**l4Flow_inBandwidth**: Inbound bandwidth peak for access, unit: bps, metric value type: Integer;</li>
<li>**l4Flow_outBandwidth**: Outbound access bandwidth peak, unit: bps, metric value type: Integer;</li>
<li>**l4Flow_connections**: Number of concurrent connections, unit: count, metric value type: Integer;</li>
<li>**l4Flow_newConnectionsRate**: Rate of new connections, unit: connections/second, metric value type: Float, rounded to two decimal places.</li></ul>**Note**:<ul><li>Metrics of the <code>Integer</code> value type will return corresponding time series data from <code>Data.N.TypeValue</code>;</li>
<li>Metrics of the <code>Float</code> value type return corresponding time series data from <code>Data.N.FloatTypeValue</code>.</li></ul>
                     */
                    std::vector<std::string> m_metricNames;
                    bool m_metricNamesHasBeenSet;

                    /**
                     * Site ID. This parameter will change from selectable to required after May 30, 2024. For details, see the announcement: [Tencent Cloud EdgeOne Cloud API Change Notification](https://www.tencentcloud.com/document/product/1552/104902?from_cn_redirect=1).
Import up to 100 site IDs. To query data of all sites under the Tencent Cloud root account, use `*` instead. To query account-level data, you must have permissions for all site resources of this interface.
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * Layer-4 instance list. If not specified, it means select all instances.
                     */
                    std::vector<std::string> m_proxyIds;
                    bool m_proxyIdsHasBeenSet;

                    /**
                     * Time granularity of the query. Valid values:
<ul><li>**min**: 1 minute;</li>
<li>**5min**: 5 minutes;</li>
<li>**hour**: 1 hour;</li>
<li>**day**: 1 day.</li></ul>If this parameter is not input, the granularity will be automatically calculated based on the interval between the start time and end time. Specifically, data will be queried with a granularity of <code>min</code>, <code>5min</code>, <code>hour</code>, and <code>day</code> respectively when the period is no more than 1 hour, no more than 2 days, no more than 7 days, and over 7 days.
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * Filter criteria. The detailed Key values of filter criteria are as follows:
<ul><li>**ruleId**: Filter by forwarding rule ID.</li>
<li>**proxyId**: filter by L4 proxy instance ID.</li></ul>
                     */
                    std::vector<QueryCondition> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Data ownership region. Deprecated. Filter data by client region in Filters.country.
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBETIMINGL4DATAREQUEST_H_
