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
                     * 获取<p>Start time.</p>
                     * @return StartTime <p>Start time.</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>Start time.</p>
                     * @param _startTime <p>Start time.</p>
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
                     * 获取<p>End time. The query time range (<code>EndTime</code> - <code>StartTime</code>) must be less than or equal to 31 days.</p>
                     * @return EndTime <p>End time. The query time range (<code>EndTime</code> - <code>StartTime</code>) must be less than or equal to 31 days.</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>End time. The query time range (<code>EndTime</code> - <code>StartTime</code>) must be less than or equal to 31 days.</p>
                     * @param _endTime <p>End time. The query time range (<code>EndTime</code> - <code>StartTime</code>) must be less than or equal to 31 days.</p>
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
                     * 获取<p>Metric list. Valid values:</p><li>l7Flow_outFlux: L7 EdgeOne response traffic. Measurement unit: Byte;</li><li>l7Flow_inFlux: L7 client request traffic. Measurement unit: Byte;</li><li>l7Flow_flux: L7 total access traffic (EdgeOne response + client request). Measurement unit: Byte;</li><li>l7Flow_outBandwidth: L7 EdgeOne response bandwidth. Measurement unit: bps;</li><li>l7Flow_inBandwidth: L7 client request bandwidth. Measurement unit: bps;</li><li>l7Flow_bandwidth: L7 total access bandwidth (EdgeOne response + client request). Measurement unit: bps;</li><li>l7Flow_request: L7 client request count. Measurement unit: count;</li><li>l7Flow_avgResponseTime: L7 average response time. Measurement unit: ms;</li><li>l7Flow_avgFirstByteResponseTime: L7 average first byte response time. Measurement unit: ms;</li><li>l7Flow_requestRate: L7 client request rate. Measurement unit: qps.</li>
                     * @return MetricNames <p>Metric list. Valid values:</p><li>l7Flow_outFlux: L7 EdgeOne response traffic. Measurement unit: Byte;</li><li>l7Flow_inFlux: L7 client request traffic. Measurement unit: Byte;</li><li>l7Flow_flux: L7 total access traffic (EdgeOne response + client request). Measurement unit: Byte;</li><li>l7Flow_outBandwidth: L7 EdgeOne response bandwidth. Measurement unit: bps;</li><li>l7Flow_inBandwidth: L7 client request bandwidth. Measurement unit: bps;</li><li>l7Flow_bandwidth: L7 total access bandwidth (EdgeOne response + client request). Measurement unit: bps;</li><li>l7Flow_request: L7 client request count. Measurement unit: count;</li><li>l7Flow_avgResponseTime: L7 average response time. Measurement unit: ms;</li><li>l7Flow_avgFirstByteResponseTime: L7 average first byte response time. Measurement unit: ms;</li><li>l7Flow_requestRate: L7 client request rate. Measurement unit: qps.</li>
                     * 
                     */
                    std::vector<std::string> GetMetricNames() const;

                    /**
                     * 设置<p>Metric list. Valid values:</p><li>l7Flow_outFlux: L7 EdgeOne response traffic. Measurement unit: Byte;</li><li>l7Flow_inFlux: L7 client request traffic. Measurement unit: Byte;</li><li>l7Flow_flux: L7 total access traffic (EdgeOne response + client request). Measurement unit: Byte;</li><li>l7Flow_outBandwidth: L7 EdgeOne response bandwidth. Measurement unit: bps;</li><li>l7Flow_inBandwidth: L7 client request bandwidth. Measurement unit: bps;</li><li>l7Flow_bandwidth: L7 total access bandwidth (EdgeOne response + client request). Measurement unit: bps;</li><li>l7Flow_request: L7 client request count. Measurement unit: count;</li><li>l7Flow_avgResponseTime: L7 average response time. Measurement unit: ms;</li><li>l7Flow_avgFirstByteResponseTime: L7 average first byte response time. Measurement unit: ms;</li><li>l7Flow_requestRate: L7 client request rate. Measurement unit: qps.</li>
                     * @param _metricNames <p>Metric list. Valid values:</p><li>l7Flow_outFlux: L7 EdgeOne response traffic. Measurement unit: Byte;</li><li>l7Flow_inFlux: L7 client request traffic. Measurement unit: Byte;</li><li>l7Flow_flux: L7 total access traffic (EdgeOne response + client request). Measurement unit: Byte;</li><li>l7Flow_outBandwidth: L7 EdgeOne response bandwidth. Measurement unit: bps;</li><li>l7Flow_inBandwidth: L7 client request bandwidth. Measurement unit: bps;</li><li>l7Flow_bandwidth: L7 total access bandwidth (EdgeOne response + client request). Measurement unit: bps;</li><li>l7Flow_request: L7 client request count. Measurement unit: count;</li><li>l7Flow_avgResponseTime: L7 average response time. Measurement unit: ms;</li><li>l7Flow_avgFirstByteResponseTime: L7 average first byte response time. Measurement unit: ms;</li><li>l7Flow_requestRate: L7 client request rate. Measurement unit: qps.</li>
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
                     * 获取<p>Site ID set. This parameter will change from optional to required after May 30, 2024. For details, see the notice: <a href="https://www.tencentcloud.com/document/product/1552/104902?from_cn_redirect=1">[Tencent Cloud EdgeOne] Cloud API Change Notification</a>. A maximum of 100 site IDs can be imported. To query all site data under the Tencent Cloud root account, use <code>*</code> as a replacement. Querying account-level data requires permission to all site resources of this interface.</p>
                     * @return ZoneIds <p>Site ID set. This parameter will change from optional to required after May 30, 2024. For details, see the notice: <a href="https://www.tencentcloud.com/document/product/1552/104902?from_cn_redirect=1">[Tencent Cloud EdgeOne] Cloud API Change Notification</a>. A maximum of 100 site IDs can be imported. To query all site data under the Tencent Cloud root account, use <code>*</code> as a replacement. Querying account-level data requires permission to all site resources of this interface.</p>
                     * 
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置<p>Site ID set. This parameter will change from optional to required after May 30, 2024. For details, see the notice: <a href="https://www.tencentcloud.com/document/product/1552/104902?from_cn_redirect=1">[Tencent Cloud EdgeOne] Cloud API Change Notification</a>. A maximum of 100 site IDs can be imported. To query all site data under the Tencent Cloud root account, use <code>*</code> as a replacement. Querying account-level data requires permission to all site resources of this interface.</p>
                     * @param _zoneIds <p>Site ID set. This parameter will change from optional to required after May 30, 2024. For details, see the notice: <a href="https://www.tencentcloud.com/document/product/1552/104902?from_cn_redirect=1">[Tencent Cloud EdgeOne] Cloud API Change Notification</a>. A maximum of 100 site IDs can be imported. To query all site data under the Tencent Cloud root account, use <code>*</code> as a replacement. Querying account-level data requires permission to all site resources of this interface.</p>
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
                     * 获取<p>Query time granularity.</p><p>Enumeration values:</p><ul><li>min: 1 minute</li><li>5min: 5 minutes</li><li>hour: 1 hour</li><li>day: 1 day</li></ul><p>If this parameter is not input, the granularity will be automatically calculated based on the interval between the start time and end time. Specifically, data will be queried with a granularity of min, 5min, hour, and day respectively when the period is no more than 2 hours, no more than 2 days, no more than 7 days, and over 7 days.</p>
                     * @return Interval <p>Query time granularity.</p><p>Enumeration values:</p><ul><li>min: 1 minute</li><li>5min: 5 minutes</li><li>hour: 1 hour</li><li>day: 1 day</li></ul><p>If this parameter is not input, the granularity will be automatically calculated based on the interval between the start time and end time. Specifically, data will be queried with a granularity of min, 5min, hour, and day respectively when the period is no more than 2 hours, no more than 2 days, no more than 7 days, and over 7 days.</p>
                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置<p>Query time granularity.</p><p>Enumeration values:</p><ul><li>min: 1 minute</li><li>5min: 5 minutes</li><li>hour: 1 hour</li><li>day: 1 day</li></ul><p>If this parameter is not input, the granularity will be automatically calculated based on the interval between the start time and end time. Specifically, data will be queried with a granularity of min, 5min, hour, and day respectively when the period is no more than 2 hours, no more than 2 days, no more than 7 days, and over 7 days.</p>
                     * @param _interval <p>Query time granularity.</p><p>Enumeration values:</p><ul><li>min: 1 minute</li><li>5min: 5 minutes</li><li>hour: 1 hour</li><li>day: 1 day</li></ul><p>If this parameter is not input, the granularity will be automatically calculated based on the interval between the start time and end time. Specifically, data will be queried with a granularity of min, 5min, hour, and day respectively when the period is no more than 2 hours, no more than 2 days, no more than 7 days, and over 7 days.</p>
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
                     * 获取<p>Filter conditions used when filtering data. For available filter options, refer to the <a href="https://www.tencentcloud.com/document/product/1552/98219?from_cn_redirect=1#1aaf1150-55a4-4b4d-b103-3a8317ac7945">Analytics Filter Options</a> for L7 client traffic, bandwidth, and request counts.<br>To limit the query to specific sites or content identifiers, pass the corresponding values in the <code>ZoneIds.N</code> parameter separately.</p>
                     * @return Filters <p>Filter conditions used when filtering data. For available filter options, refer to the <a href="https://www.tencentcloud.com/document/product/1552/98219?from_cn_redirect=1#1aaf1150-55a4-4b4d-b103-3a8317ac7945">Analytics Filter Options</a> for L7 client traffic, bandwidth, and request counts.<br>To limit the query to specific sites or content identifiers, pass the corresponding values in the <code>ZoneIds.N</code> parameter separately.</p>
                     * 
                     */
                    std::vector<QueryCondition> GetFilters() const;

                    /**
                     * 设置<p>Filter conditions used when filtering data. For available filter options, refer to the <a href="https://www.tencentcloud.com/document/product/1552/98219?from_cn_redirect=1#1aaf1150-55a4-4b4d-b103-3a8317ac7945">Analytics Filter Options</a> for L7 client traffic, bandwidth, and request counts.<br>To limit the query to specific sites or content identifiers, pass the corresponding values in the <code>ZoneIds.N</code> parameter separately.</p>
                     * @param _filters <p>Filter conditions used when filtering data. For available filter options, refer to the <a href="https://www.tencentcloud.com/document/product/1552/98219?from_cn_redirect=1#1aaf1150-55a4-4b4d-b103-3a8317ac7945">Analytics Filter Options</a> for L7 client traffic, bandwidth, and request counts.<br>To limit the query to specific sites or content identifiers, pass the corresponding values in the <code>ZoneIds.N</code> parameter separately.</p>
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
                     * 获取<p>The region to which the data belongs. This parameter is deprecated. To filter data by client region, use <code>Filters.country</code> instead.</p>
                     * @return Area <p>The region to which the data belongs. This parameter is deprecated. To filter data by client region, use <code>Filters.country</code> instead.</p>
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置<p>The region to which the data belongs. This parameter is deprecated. To filter data by client region, use <code>Filters.country</code> instead.</p>
                     * @param _area <p>The region to which the data belongs. This parameter is deprecated. To filter data by client region, use <code>Filters.country</code> instead.</p>
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
                     * <p>Start time.</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>End time. The query time range (<code>EndTime</code> - <code>StartTime</code>) must be less than or equal to 31 days.</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>Metric list. Valid values:</p><li>l7Flow_outFlux: L7 EdgeOne response traffic. Measurement unit: Byte;</li><li>l7Flow_inFlux: L7 client request traffic. Measurement unit: Byte;</li><li>l7Flow_flux: L7 total access traffic (EdgeOne response + client request). Measurement unit: Byte;</li><li>l7Flow_outBandwidth: L7 EdgeOne response bandwidth. Measurement unit: bps;</li><li>l7Flow_inBandwidth: L7 client request bandwidth. Measurement unit: bps;</li><li>l7Flow_bandwidth: L7 total access bandwidth (EdgeOne response + client request). Measurement unit: bps;</li><li>l7Flow_request: L7 client request count. Measurement unit: count;</li><li>l7Flow_avgResponseTime: L7 average response time. Measurement unit: ms;</li><li>l7Flow_avgFirstByteResponseTime: L7 average first byte response time. Measurement unit: ms;</li><li>l7Flow_requestRate: L7 client request rate. Measurement unit: qps.</li>
                     */
                    std::vector<std::string> m_metricNames;
                    bool m_metricNamesHasBeenSet;

                    /**
                     * <p>Site ID set. This parameter will change from optional to required after May 30, 2024. For details, see the notice: <a href="https://www.tencentcloud.com/document/product/1552/104902?from_cn_redirect=1">[Tencent Cloud EdgeOne] Cloud API Change Notification</a>. A maximum of 100 site IDs can be imported. To query all site data under the Tencent Cloud root account, use <code>*</code> as a replacement. Querying account-level data requires permission to all site resources of this interface.</p>
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * <p>Query time granularity.</p><p>Enumeration values:</p><ul><li>min: 1 minute</li><li>5min: 5 minutes</li><li>hour: 1 hour</li><li>day: 1 day</li></ul><p>If this parameter is not input, the granularity will be automatically calculated based on the interval between the start time and end time. Specifically, data will be queried with a granularity of min, 5min, hour, and day respectively when the period is no more than 2 hours, no more than 2 days, no more than 7 days, and over 7 days.</p>
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * <p>Filter conditions used when filtering data. For available filter options, refer to the <a href="https://www.tencentcloud.com/document/product/1552/98219?from_cn_redirect=1#1aaf1150-55a4-4b4d-b103-3a8317ac7945">Analytics Filter Options</a> for L7 client traffic, bandwidth, and request counts.<br>To limit the query to specific sites or content identifiers, pass the corresponding values in the <code>ZoneIds.N</code> parameter separately.</p>
                     */
                    std::vector<QueryCondition> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>The region to which the data belongs. This parameter is deprecated. To filter data by client region, use <code>Filters.country</code> instead.</p>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBETIMINGL7ANALYSISDATAREQUEST_H_
