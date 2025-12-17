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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBETIMINGL7ORIGINPULLDATAREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBETIMINGL7ORIGINPULLDATAREQUEST_H_

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
                * DescribeTimingL7OriginPullData request structure.
                */
                class DescribeTimingL7OriginPullDataRequest : public AbstractModel
                {
                public:
                    DescribeTimingL7OriginPullDataRequest();
                    ~DescribeTimingL7OriginPullDataRequest() = default;
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
                     * 获取End time. The query time range (`EndTime` - `StartTime`) must be less than or equal to 31 days.
                     * @return EndTime End time. The query time range (`EndTime` - `StartTime`) must be less than or equal to 31 days.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time. The query time range (`EndTime` - `StartTime`) must be less than or equal to 31 days.
                     * @param _endTime End time. The query time range (`EndTime` - `StartTime`) must be less than or equal to 31 days.
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
<li>l7Flow_outFlux_hy: specifies the request traffic from the EdgeOne node to the origin server. Unit: byte.</li>
<li>l7Flow_outBandwidth_hy: specifies the request bandwidth from EdgeOne node to origin server. Unit: bps.</li>
<li>l7Flow_request_hy: specifies the request count from EdgeOne node to origin server. Unit: times.</li>
<li>l7Flow_inFlux_hy: specifies the response traffic from the origin server to the EdgeOne node. Unit: byte.</li>
<li>l7Flow_inBandwidth_hy: specifies the response bandwidth from the origin server to the EdgeOne node. Unit: bps.</li>

                     * @return MetricNames Metric list. Valid values:.
<li>l7Flow_outFlux_hy: specifies the request traffic from the EdgeOne node to the origin server. Unit: byte.</li>
<li>l7Flow_outBandwidth_hy: specifies the request bandwidth from EdgeOne node to origin server. Unit: bps.</li>
<li>l7Flow_request_hy: specifies the request count from EdgeOne node to origin server. Unit: times.</li>
<li>l7Flow_inFlux_hy: specifies the response traffic from the origin server to the EdgeOne node. Unit: byte.</li>
<li>l7Flow_inBandwidth_hy: specifies the response bandwidth from the origin server to the EdgeOne node. Unit: bps.</li>

                     * 
                     */
                    std::vector<std::string> GetMetricNames() const;

                    /**
                     * 设置Metric list. Valid values:.
<li>l7Flow_outFlux_hy: specifies the request traffic from the EdgeOne node to the origin server. Unit: byte.</li>
<li>l7Flow_outBandwidth_hy: specifies the request bandwidth from EdgeOne node to origin server. Unit: bps.</li>
<li>l7Flow_request_hy: specifies the request count from EdgeOne node to origin server. Unit: times.</li>
<li>l7Flow_inFlux_hy: specifies the response traffic from the origin server to the EdgeOne node. Unit: byte.</li>
<li>l7Flow_inBandwidth_hy: specifies the response bandwidth from the origin server to the EdgeOne node. Unit: bps.</li>

                     * @param _metricNames Metric list. Valid values:.
<li>l7Flow_outFlux_hy: specifies the request traffic from the EdgeOne node to the origin server. Unit: byte.</li>
<li>l7Flow_outBandwidth_hy: specifies the request bandwidth from EdgeOne node to origin server. Unit: bps.</li>
<li>l7Flow_request_hy: specifies the request count from EdgeOne node to origin server. Unit: times.</li>
<li>l7Flow_inFlux_hy: specifies the response traffic from the origin server to the EdgeOne node. Unit: byte.</li>
<li>l7Flow_inBandwidth_hy: specifies the response bandwidth from the origin server to the EdgeOne node. Unit: bps.</li>

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
                     * 获取Site ID set. This parameter is required. A maximum of 100 zone-ids can be imported. Use `*` to query data for all sites under the Tencent Cloud root account. Querying account-level data requires permissions for all site resources in this interface.
                     * @return ZoneIds Site ID set. This parameter is required. A maximum of 100 zone-ids can be imported. Use `*` to query data for all sites under the Tencent Cloud root account. Querying account-level data requires permissions for all site resources in this interface.
                     * 
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置Site ID set. This parameter is required. A maximum of 100 zone-ids can be imported. Use `*` to query data for all sites under the Tencent Cloud root account. Querying account-level data requires permissions for all site resources in this interface.
                     * @param _zoneIds Site ID set. This parameter is required. A maximum of 100 zone-ids can be imported. Use `*` to query data for all sites under the Tencent Cloud root account. Querying account-level data requires permissions for all site resources in this interface.
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
                     * 获取Time granularity of the query. Valid values:
<Li>min: 1 minute.</li><Li>5min: 5 minutes;</li><Li>hour: 1 hour;</li><li>day: 1 day.</li>If this parameter is not input, the granularity will be automatically calculated based on the interval between the start time and end time. Specifically, data will be queried with a granularity of min, 5min, hour, and day respectively when the period is no more than 2 hours, no more than 2 days, no more than 7 days, and over 7 days.
                     * @return Interval Time granularity of the query. Valid values:
<Li>min: 1 minute.</li><Li>5min: 5 minutes;</li><Li>hour: 1 hour;</li><li>day: 1 day.</li>If this parameter is not input, the granularity will be automatically calculated based on the interval between the start time and end time. Specifically, data will be queried with a granularity of min, 5min, hour, and day respectively when the period is no more than 2 hours, no more than 2 days, no more than 7 days, and over 7 days.
                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置Time granularity of the query. Valid values:
<Li>min: 1 minute.</li><Li>5min: 5 minutes;</li><Li>hour: 1 hour;</li><li>day: 1 day.</li>If this parameter is not input, the granularity will be automatically calculated based on the interval between the start time and end time. Specifically, data will be queried with a granularity of min, 5min, hour, and day respectively when the period is no more than 2 hours, no more than 2 days, no more than 7 days, and over 7 days.
                     * @param _interval Time granularity of the query. Valid values:
<Li>min: 1 minute.</li><Li>5min: 5 minutes;</li><Li>hour: 1 hour;</li><li>day: 1 day.</li>If this parameter is not input, the granularity will be automatically calculated based on the interval between the start time and end time. Specifically, data will be queried with a granularity of min, 5min, hour, and day respectively when the period is no more than 2 hours, no more than 2 days, no more than 7 days, and over 7 days.
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
                     * 获取Filter conditions. Details:
<li>domain: specifies the domain name in client requests. When the domain is onboarded via a wildcard, the recorded value is the wildcard domain itself, not the specific subdomain.</li>
                     * @return Filters Filter conditions. Details:
<li>domain: specifies the domain name in client requests. When the domain is onboarded via a wildcard, the recorded value is the wildcard domain itself, not the specific subdomain.</li>
                     * 
                     */
                    std::vector<QueryCondition> GetFilters() const;

                    /**
                     * 设置Filter conditions. Details:
<li>domain: specifies the domain name in client requests. When the domain is onboarded via a wildcard, the recorded value is the wildcard domain itself, not the specific subdomain.</li>
                     * @param _filters Filter conditions. Details:
<li>domain: specifies the domain name in client requests. When the domain is onboarded via a wildcard, the recorded value is the wildcard domain itself, not the specific subdomain.</li>
                     * 
                     */
                    void SetFilters(const std::vector<QueryCondition>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Start time.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time. The query time range (`EndTime` - `StartTime`) must be less than or equal to 31 days.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Metric list. Valid values:.
<li>l7Flow_outFlux_hy: specifies the request traffic from the EdgeOne node to the origin server. Unit: byte.</li>
<li>l7Flow_outBandwidth_hy: specifies the request bandwidth from EdgeOne node to origin server. Unit: bps.</li>
<li>l7Flow_request_hy: specifies the request count from EdgeOne node to origin server. Unit: times.</li>
<li>l7Flow_inFlux_hy: specifies the response traffic from the origin server to the EdgeOne node. Unit: byte.</li>
<li>l7Flow_inBandwidth_hy: specifies the response bandwidth from the origin server to the EdgeOne node. Unit: bps.</li>

                     */
                    std::vector<std::string> m_metricNames;
                    bool m_metricNamesHasBeenSet;

                    /**
                     * Site ID set. This parameter is required. A maximum of 100 zone-ids can be imported. Use `*` to query data for all sites under the Tencent Cloud root account. Querying account-level data requires permissions for all site resources in this interface.
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * Time granularity of the query. Valid values:
<Li>min: 1 minute.</li><Li>5min: 5 minutes;</li><Li>hour: 1 hour;</li><li>day: 1 day.</li>If this parameter is not input, the granularity will be automatically calculated based on the interval between the start time and end time. Specifically, data will be queried with a granularity of min, 5min, hour, and day respectively when the period is no more than 2 hours, no more than 2 days, no more than 7 days, and over 7 days.
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * Filter conditions. Details:
<li>domain: specifies the domain name in client requests. When the domain is onboarded via a wildcard, the recorded value is the wildcard domain itself, not the specific subdomain.</li>
                     */
                    std::vector<QueryCondition> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBETIMINGL7ORIGINPULLDATAREQUEST_H_
