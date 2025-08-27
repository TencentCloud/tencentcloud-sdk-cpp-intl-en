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
                     * 获取Metric list. Valid values:
<Li>l7Flow_outFlux: L7 EdgeOne response traffic. Unit: byte;</li><Li>l7Flow_inFlux: L7 client request traffic. Unit: byte;</li><Li>l7Flow_flux: L7 total traffic (including EdgeOne response traffic and client request traffic). Unit: byte;</li><Li>l7Flow_outBandwidth: L7 EdgeOne response bandwidth. Unit: bps;</li><Li>l7Flow_inBandwidth: L7 client request bandwidth. Unit: bps;</li><Li>l7Flow_bandwidth: L7 total bandwidth (including EdgeOne response bandwidth and client request bandwidth). Unit: bps;</li><Li>l7Flow_request: L7 request count. Unit: times;</li><Li>l7Flow_avgResponseTime: Average L7 edge response time. Unit: ms (milliseconds);</li><Li>l7Flow_avgFirstByteResponseTime: Average L7 edge first byte response time. Unit: ms.</li>
                     * @return MetricNames Metric list. Valid values:
<Li>l7Flow_outFlux: L7 EdgeOne response traffic. Unit: byte;</li><Li>l7Flow_inFlux: L7 client request traffic. Unit: byte;</li><Li>l7Flow_flux: L7 total traffic (including EdgeOne response traffic and client request traffic). Unit: byte;</li><Li>l7Flow_outBandwidth: L7 EdgeOne response bandwidth. Unit: bps;</li><Li>l7Flow_inBandwidth: L7 client request bandwidth. Unit: bps;</li><Li>l7Flow_bandwidth: L7 total bandwidth (including EdgeOne response bandwidth and client request bandwidth). Unit: bps;</li><Li>l7Flow_request: L7 request count. Unit: times;</li><Li>l7Flow_avgResponseTime: Average L7 edge response time. Unit: ms (milliseconds);</li><Li>l7Flow_avgFirstByteResponseTime: Average L7 edge first byte response time. Unit: ms.</li>
                     * 
                     */
                    std::vector<std::string> GetMetricNames() const;

                    /**
                     * 设置Metric list. Valid values:
<Li>l7Flow_outFlux: L7 EdgeOne response traffic. Unit: byte;</li><Li>l7Flow_inFlux: L7 client request traffic. Unit: byte;</li><Li>l7Flow_flux: L7 total traffic (including EdgeOne response traffic and client request traffic). Unit: byte;</li><Li>l7Flow_outBandwidth: L7 EdgeOne response bandwidth. Unit: bps;</li><Li>l7Flow_inBandwidth: L7 client request bandwidth. Unit: bps;</li><Li>l7Flow_bandwidth: L7 total bandwidth (including EdgeOne response bandwidth and client request bandwidth). Unit: bps;</li><Li>l7Flow_request: L7 request count. Unit: times;</li><Li>l7Flow_avgResponseTime: Average L7 edge response time. Unit: ms (milliseconds);</li><Li>l7Flow_avgFirstByteResponseTime: Average L7 edge first byte response time. Unit: ms.</li>
                     * @param _metricNames Metric list. Valid values:
<Li>l7Flow_outFlux: L7 EdgeOne response traffic. Unit: byte;</li><Li>l7Flow_inFlux: L7 client request traffic. Unit: byte;</li><Li>l7Flow_flux: L7 total traffic (including EdgeOne response traffic and client request traffic). Unit: byte;</li><Li>l7Flow_outBandwidth: L7 EdgeOne response bandwidth. Unit: bps;</li><Li>l7Flow_inBandwidth: L7 client request bandwidth. Unit: bps;</li><Li>l7Flow_bandwidth: L7 total bandwidth (including EdgeOne response bandwidth and client request bandwidth). Unit: bps;</li><Li>l7Flow_request: L7 request count. Unit: times;</li><Li>l7Flow_avgResponseTime: Average L7 edge response time. Unit: ms (milliseconds);</li><Li>l7Flow_avgFirstByteResponseTime: Average L7 edge first byte response time. Unit: ms.</li>
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
                     * 获取Site ID list. This parameter is required. A maximum of 100 site IDs can be imported. Use `*` to query data for all sites under the Tencent Cloud root account. To query account-level data, you must have resource permissions for all sites in this API.
                     * @return ZoneIds Site ID list. This parameter is required. A maximum of 100 site IDs can be imported. Use `*` to query data for all sites under the Tencent Cloud root account. To query account-level data, you must have resource permissions for all sites in this API.
                     * 
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置Site ID list. This parameter is required. A maximum of 100 site IDs can be imported. Use `*` to query data for all sites under the Tencent Cloud root account. To query account-level data, you must have resource permissions for all sites in this API.
                     * @param _zoneIds Site ID list. This parameter is required. A maximum of 100 site IDs can be imported. Use `*` to query data for all sites under the Tencent Cloud root account. To query account-level data, you must have resource permissions for all sites in this API.
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
                     * 获取Filtering conditions used when querying data. Refer to the [Filtering Conditions for Analytics](https://www.tencentcloud.com/document/product/1145/56985) document for the available filters applicable to L7 client traffic, bandwidth and requests.  
To restrict results by zone or content identifier, input the corresponding values via the `ZoneIds.N` parameter.
                     * @return Filters Filtering conditions used when querying data. Refer to the [Filtering Conditions for Analytics](https://www.tencentcloud.com/document/product/1145/56985) document for the available filters applicable to L7 client traffic, bandwidth and requests.  
To restrict results by zone or content identifier, input the corresponding values via the `ZoneIds.N` parameter.
                     * 
                     */
                    std::vector<QueryCondition> GetFilters() const;

                    /**
                     * 设置Filtering conditions used when querying data. Refer to the [Filtering Conditions for Analytics](https://www.tencentcloud.com/document/product/1145/56985) document for the available filters applicable to L7 client traffic, bandwidth and requests.  
To restrict results by zone or content identifier, input the corresponding values via the `ZoneIds.N` parameter.
                     * @param _filters Filtering conditions used when querying data. Refer to the [Filtering Conditions for Analytics](https://www.tencentcloud.com/document/product/1145/56985) document for the available filters applicable to L7 client traffic, bandwidth and requests.  
To restrict results by zone or content identifier, input the corresponding values via the `ZoneIds.N` parameter.
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
                     * 获取Data region. This parameter is deprecated. Please filter data by client region in `Filters.country`.
                     * @return Area Data region. This parameter is deprecated. Please filter data by client region in `Filters.country`.
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Data region. This parameter is deprecated. Please filter data by client region in `Filters.country`.
                     * @param _area Data region. This parameter is deprecated. Please filter data by client region in `Filters.country`.
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
                     * End time. The query time range (`EndTime` - `StartTime`) must be less than or equal to 31 days.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Metric list. Valid values:
<Li>l7Flow_outFlux: L7 EdgeOne response traffic. Unit: byte;</li><Li>l7Flow_inFlux: L7 client request traffic. Unit: byte;</li><Li>l7Flow_flux: L7 total traffic (including EdgeOne response traffic and client request traffic). Unit: byte;</li><Li>l7Flow_outBandwidth: L7 EdgeOne response bandwidth. Unit: bps;</li><Li>l7Flow_inBandwidth: L7 client request bandwidth. Unit: bps;</li><Li>l7Flow_bandwidth: L7 total bandwidth (including EdgeOne response bandwidth and client request bandwidth). Unit: bps;</li><Li>l7Flow_request: L7 request count. Unit: times;</li><Li>l7Flow_avgResponseTime: Average L7 edge response time. Unit: ms (milliseconds);</li><Li>l7Flow_avgFirstByteResponseTime: Average L7 edge first byte response time. Unit: ms.</li>
                     */
                    std::vector<std::string> m_metricNames;
                    bool m_metricNamesHasBeenSet;

                    /**
                     * Site ID list. This parameter is required. A maximum of 100 site IDs can be imported. Use `*` to query data for all sites under the Tencent Cloud root account. To query account-level data, you must have resource permissions for all sites in this API.
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
                     * Filtering conditions used when querying data. Refer to the [Filtering Conditions for Analytics](https://www.tencentcloud.com/document/product/1145/56985) document for the available filters applicable to L7 client traffic, bandwidth and requests.  
To restrict results by zone or content identifier, input the corresponding values via the `ZoneIds.N` parameter.
                     */
                    std::vector<QueryCondition> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Data region. This parameter is deprecated. Please filter data by client region in `Filters.country`.
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBETIMINGL7ANALYSISDATAREQUEST_H_
