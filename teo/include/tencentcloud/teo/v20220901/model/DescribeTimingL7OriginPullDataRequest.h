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
                     * 获取Site ID set. This parameter is required. A maximum of 100 zone-ids can be imported. Use `*` to query data for all sites under the Tencent Cloud root account. Querying account-level data requires permissions for all site resources in this API.
                     * @return ZoneIds Site ID set. This parameter is required. A maximum of 100 zone-ids can be imported. Use `*` to query data for all sites under the Tencent Cloud root account. Querying account-level data requires permissions for all site resources in this API.
                     * 
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置Site ID set. This parameter is required. A maximum of 100 zone-ids can be imported. Use `*` to query data for all sites under the Tencent Cloud root account. Querying account-level data requires permissions for all site resources in this API.
                     * @param _zoneIds Site ID set. This parameter is required. A maximum of 100 zone-ids can be imported. Use `*` to query data for all sites under the Tencent Cloud root account. Querying account-level data requires permissions for all site resources in this API.
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
                     * 获取Metric list. Valid values:
<ul><li>l7Flow_outFlux_hy: Request traffic from the EdgeOne node to the origin server. Unit: Byte.</li><li>l7Flow_outBandwidth_hy: Request bandwidth from the EdgeOne node to the origin server. Unit: bps.</li><li>l7Flow_request_hy: Number of requests from the EdgeOne node to the origin server. Unit: count.</li><li>l7Flow_inFlux_hy: Response traffic from the origin server to the EdgeOne node. Unit: Byte.</li><li>l7Flow_inBandwidth_hy: Response bandwidth from the origin server to the EdgeOne node. Unit: bps.</li></ul>
                     * @return MetricNames Metric list. Valid values:
<ul><li>l7Flow_outFlux_hy: Request traffic from the EdgeOne node to the origin server. Unit: Byte.</li><li>l7Flow_outBandwidth_hy: Request bandwidth from the EdgeOne node to the origin server. Unit: bps.</li><li>l7Flow_request_hy: Number of requests from the EdgeOne node to the origin server. Unit: count.</li><li>l7Flow_inFlux_hy: Response traffic from the origin server to the EdgeOne node. Unit: Byte.</li><li>l7Flow_inBandwidth_hy: Response bandwidth from the origin server to the EdgeOne node. Unit: bps.</li></ul>
                     * 
                     */
                    std::vector<std::string> GetMetricNames() const;

                    /**
                     * 设置Metric list. Valid values:
<ul><li>l7Flow_outFlux_hy: Request traffic from the EdgeOne node to the origin server. Unit: Byte.</li><li>l7Flow_outBandwidth_hy: Request bandwidth from the EdgeOne node to the origin server. Unit: bps.</li><li>l7Flow_request_hy: Number of requests from the EdgeOne node to the origin server. Unit: count.</li><li>l7Flow_inFlux_hy: Response traffic from the origin server to the EdgeOne node. Unit: Byte.</li><li>l7Flow_inBandwidth_hy: Response bandwidth from the origin server to the EdgeOne node. Unit: bps.</li></ul>
                     * @param _metricNames Metric list. Valid values:
<ul><li>l7Flow_outFlux_hy: Request traffic from the EdgeOne node to the origin server. Unit: Byte.</li><li>l7Flow_outBandwidth_hy: Request bandwidth from the EdgeOne node to the origin server. Unit: bps.</li><li>l7Flow_request_hy: Number of requests from the EdgeOne node to the origin server. Unit: count.</li><li>l7Flow_inFlux_hy: Response traffic from the origin server to the EdgeOne node. Unit: Byte.</li><li>l7Flow_inBandwidth_hy: Response bandwidth from the origin server to the EdgeOne node. Unit: bps.</li></ul>
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
                     * 获取Time granularity of the query. Valid values:
<ul><li>min: 1 minute;</li><li>5min: 5 minutes;</li><li>hour: 1 hour;</li><li>day: 1 day.</li></ul>If this parameter is not specified, the granularity will be automatically inferred based on the time range between the start time and end time. Specifically, the granularity will be min, 5min, hour, and day when the time range is within 2 hours, within 2 days, within 7 days, and exceeding 7 days, respectively.
                     * @return Interval Time granularity of the query. Valid values:
<ul><li>min: 1 minute;</li><li>5min: 5 minutes;</li><li>hour: 1 hour;</li><li>day: 1 day.</li></ul>If this parameter is not specified, the granularity will be automatically inferred based on the time range between the start time and end time. Specifically, the granularity will be min, 5min, hour, and day when the time range is within 2 hours, within 2 days, within 7 days, and exceeding 7 days, respectively.
                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置Time granularity of the query. Valid values:
<ul><li>min: 1 minute;</li><li>5min: 5 minutes;</li><li>hour: 1 hour;</li><li>day: 1 day.</li></ul>If this parameter is not specified, the granularity will be automatically inferred based on the time range between the start time and end time. Specifically, the granularity will be min, 5min, hour, and day when the time range is within 2 hours, within 2 days, within 7 days, and exceeding 7 days, respectively.
                     * @param _interval Time granularity of the query. Valid values:
<ul><li>min: 1 minute;</li><li>5min: 5 minutes;</li><li>hour: 1 hour;</li><li>day: 1 day.</li></ul>If this parameter is not specified, the granularity will be automatically inferred based on the time range between the start time and end time. Specifically, the granularity will be min, 5min, hour, and day when the time range is within 2 hours, within 2 days, within 7 days, and exceeding 7 days, respectively.
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
                     * 获取Filter criteria. Detailed filter criteria:
<ul><li><strong>domain</strong>: The requested domain name from the client. If accessing EdgeOne via a wildcard domain, the data records the wildcard domain name rather than the specific subdomain.</li><li><strong>originStatusCode</strong>: Origin status code. This filter is supported only when <code>MetricNames = ["l7Flow_request_hy"]</code>.
Valid values:<ul><li><code>1xx</code>: Status codes in the 1xx range.</li><li><code>2xx</code>: Status codes in the 2xx range.</li><li><code>3xx</code>: Status codes in the 3xx range.</li><li><code>4xx</code>: Status codes in the 4xx range.</li><li><code>5xx</code>: Status codes in the 5xx range.</li><li>Any integer in the range <code>[0, 600)</code>.</li></ul></li></ul>**Note**: When <code>DimensionName</code> is not empty, only the <code>equals</code> operator is supported.
                     * @return Filters Filter criteria. Detailed filter criteria:
<ul><li><strong>domain</strong>: The requested domain name from the client. If accessing EdgeOne via a wildcard domain, the data records the wildcard domain name rather than the specific subdomain.</li><li><strong>originStatusCode</strong>: Origin status code. This filter is supported only when <code>MetricNames = ["l7Flow_request_hy"]</code>.
Valid values:<ul><li><code>1xx</code>: Status codes in the 1xx range.</li><li><code>2xx</code>: Status codes in the 2xx range.</li><li><code>3xx</code>: Status codes in the 3xx range.</li><li><code>4xx</code>: Status codes in the 4xx range.</li><li><code>5xx</code>: Status codes in the 5xx range.</li><li>Any integer in the range <code>[0, 600)</code>.</li></ul></li></ul>**Note**: When <code>DimensionName</code> is not empty, only the <code>equals</code> operator is supported.
                     * 
                     */
                    std::vector<QueryCondition> GetFilters() const;

                    /**
                     * 设置Filter criteria. Detailed filter criteria:
<ul><li><strong>domain</strong>: The requested domain name from the client. If accessing EdgeOne via a wildcard domain, the data records the wildcard domain name rather than the specific subdomain.</li><li><strong>originStatusCode</strong>: Origin status code. This filter is supported only when <code>MetricNames = ["l7Flow_request_hy"]</code>.
Valid values:<ul><li><code>1xx</code>: Status codes in the 1xx range.</li><li><code>2xx</code>: Status codes in the 2xx range.</li><li><code>3xx</code>: Status codes in the 3xx range.</li><li><code>4xx</code>: Status codes in the 4xx range.</li><li><code>5xx</code>: Status codes in the 5xx range.</li><li>Any integer in the range <code>[0, 600)</code>.</li></ul></li></ul>**Note**: When <code>DimensionName</code> is not empty, only the <code>equals</code> operator is supported.
                     * @param _filters Filter criteria. Detailed filter criteria:
<ul><li><strong>domain</strong>: The requested domain name from the client. If accessing EdgeOne via a wildcard domain, the data records the wildcard domain name rather than the specific subdomain.</li><li><strong>originStatusCode</strong>: Origin status code. This filter is supported only when <code>MetricNames = ["l7Flow_request_hy"]</code>.
Valid values:<ul><li><code>1xx</code>: Status codes in the 1xx range.</li><li><code>2xx</code>: Status codes in the 2xx range.</li><li><code>3xx</code>: Status codes in the 3xx range.</li><li><code>4xx</code>: Status codes in the 4xx range.</li><li><code>5xx</code>: Status codes in the 5xx range.</li><li>Any integer in the range <code>[0, 600)</code>.</li></ul></li></ul>**Note**: When <code>DimensionName</code> is not empty, only the <code>equals</code> operator is supported.
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
                     * 获取Query dimension name. Valid values:
<ul><li><strong>domain</strong>: The domain name requested by the client. If EdgeOne is accessed via a wildcard domain name, the data records the wildcard domain name.
When using the domain dimension, the <code>Filters</code> parameter must include the <code>domain</code> filter item, specifying a list of up to 100 domain names.</li><li><strong>origin-status-code</strong>: Origin status code, such as 200 or 404.
This dimension is supported only when <code>MetricNames = ["l7Flow_request_hy"]</code>.</li><li><strong>origin-status-code-category</strong>: Origin status code category, such as 2xx or 4xx.
This dimension is supported only when <code>MetricNames = ["l7Flow_request_hy"]</code>.</li></ul><p>If <code>DimensionName</code> is left empty, data is aggregated by the <code>AppId</code> dimension by default, returning a single set of data.</p><p>If <code>DimensionName</code> is specified, time series data is returned grouped by the specified dimension. For example:</p><ul>When <code>DimensionName = origin-status-code</code>:<ul><li><code>TimingDataRecords.TypeKey</code> in the returned data is the specific origin status code, such as 200.</li><li><code>TimingDataRecords.TypeValue</code> in the returned data is the time series data corresponding to that status code.</li></ul></ul><p><strong>Note</strong>: When <code>DimensionName</code> is specified, concurrent calls are not allowed. Exceeding the query rate limit will return the error <code><strong>InvalidParameter.ActionInProgress</strong></code>.</p>
                     * @return DimensionName Query dimension name. Valid values:
<ul><li><strong>domain</strong>: The domain name requested by the client. If EdgeOne is accessed via a wildcard domain name, the data records the wildcard domain name.
When using the domain dimension, the <code>Filters</code> parameter must include the <code>domain</code> filter item, specifying a list of up to 100 domain names.</li><li><strong>origin-status-code</strong>: Origin status code, such as 200 or 404.
This dimension is supported only when <code>MetricNames = ["l7Flow_request_hy"]</code>.</li><li><strong>origin-status-code-category</strong>: Origin status code category, such as 2xx or 4xx.
This dimension is supported only when <code>MetricNames = ["l7Flow_request_hy"]</code>.</li></ul><p>If <code>DimensionName</code> is left empty, data is aggregated by the <code>AppId</code> dimension by default, returning a single set of data.</p><p>If <code>DimensionName</code> is specified, time series data is returned grouped by the specified dimension. For example:</p><ul>When <code>DimensionName = origin-status-code</code>:<ul><li><code>TimingDataRecords.TypeKey</code> in the returned data is the specific origin status code, such as 200.</li><li><code>TimingDataRecords.TypeValue</code> in the returned data is the time series data corresponding to that status code.</li></ul></ul><p><strong>Note</strong>: When <code>DimensionName</code> is specified, concurrent calls are not allowed. Exceeding the query rate limit will return the error <code><strong>InvalidParameter.ActionInProgress</strong></code>.</p>
                     * 
                     */
                    std::string GetDimensionName() const;

                    /**
                     * 设置Query dimension name. Valid values:
<ul><li><strong>domain</strong>: The domain name requested by the client. If EdgeOne is accessed via a wildcard domain name, the data records the wildcard domain name.
When using the domain dimension, the <code>Filters</code> parameter must include the <code>domain</code> filter item, specifying a list of up to 100 domain names.</li><li><strong>origin-status-code</strong>: Origin status code, such as 200 or 404.
This dimension is supported only when <code>MetricNames = ["l7Flow_request_hy"]</code>.</li><li><strong>origin-status-code-category</strong>: Origin status code category, such as 2xx or 4xx.
This dimension is supported only when <code>MetricNames = ["l7Flow_request_hy"]</code>.</li></ul><p>If <code>DimensionName</code> is left empty, data is aggregated by the <code>AppId</code> dimension by default, returning a single set of data.</p><p>If <code>DimensionName</code> is specified, time series data is returned grouped by the specified dimension. For example:</p><ul>When <code>DimensionName = origin-status-code</code>:<ul><li><code>TimingDataRecords.TypeKey</code> in the returned data is the specific origin status code, such as 200.</li><li><code>TimingDataRecords.TypeValue</code> in the returned data is the time series data corresponding to that status code.</li></ul></ul><p><strong>Note</strong>: When <code>DimensionName</code> is specified, concurrent calls are not allowed. Exceeding the query rate limit will return the error <code><strong>InvalidParameter.ActionInProgress</strong></code>.</p>
                     * @param _dimensionName Query dimension name. Valid values:
<ul><li><strong>domain</strong>: The domain name requested by the client. If EdgeOne is accessed via a wildcard domain name, the data records the wildcard domain name.
When using the domain dimension, the <code>Filters</code> parameter must include the <code>domain</code> filter item, specifying a list of up to 100 domain names.</li><li><strong>origin-status-code</strong>: Origin status code, such as 200 or 404.
This dimension is supported only when <code>MetricNames = ["l7Flow_request_hy"]</code>.</li><li><strong>origin-status-code-category</strong>: Origin status code category, such as 2xx or 4xx.
This dimension is supported only when <code>MetricNames = ["l7Flow_request_hy"]</code>.</li></ul><p>If <code>DimensionName</code> is left empty, data is aggregated by the <code>AppId</code> dimension by default, returning a single set of data.</p><p>If <code>DimensionName</code> is specified, time series data is returned grouped by the specified dimension. For example:</p><ul>When <code>DimensionName = origin-status-code</code>:<ul><li><code>TimingDataRecords.TypeKey</code> in the returned data is the specific origin status code, such as 200.</li><li><code>TimingDataRecords.TypeValue</code> in the returned data is the time series data corresponding to that status code.</li></ul></ul><p><strong>Note</strong>: When <code>DimensionName</code> is specified, concurrent calls are not allowed. Exceeding the query rate limit will return the error <code><strong>InvalidParameter.ActionInProgress</strong></code>.</p>
                     * 
                     */
                    void SetDimensionName(const std::string& _dimensionName);

                    /**
                     * 判断参数 DimensionName 是否已赋值
                     * @return DimensionName 是否已赋值
                     * 
                     */
                    bool DimensionNameHasBeenSet() const;

                private:

                    /**
                     * Site ID set. This parameter is required. A maximum of 100 zone-ids can be imported. Use `*` to query data for all sites under the Tencent Cloud root account. Querying account-level data requires permissions for all site resources in this API.
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * Metric list. Valid values:
<ul><li>l7Flow_outFlux_hy: Request traffic from the EdgeOne node to the origin server. Unit: Byte.</li><li>l7Flow_outBandwidth_hy: Request bandwidth from the EdgeOne node to the origin server. Unit: bps.</li><li>l7Flow_request_hy: Number of requests from the EdgeOne node to the origin server. Unit: count.</li><li>l7Flow_inFlux_hy: Response traffic from the origin server to the EdgeOne node. Unit: Byte.</li><li>l7Flow_inBandwidth_hy: Response bandwidth from the origin server to the EdgeOne node. Unit: bps.</li></ul>
                     */
                    std::vector<std::string> m_metricNames;
                    bool m_metricNamesHasBeenSet;

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
                     * Time granularity of the query. Valid values:
<ul><li>min: 1 minute;</li><li>5min: 5 minutes;</li><li>hour: 1 hour;</li><li>day: 1 day.</li></ul>If this parameter is not specified, the granularity will be automatically inferred based on the time range between the start time and end time. Specifically, the granularity will be min, 5min, hour, and day when the time range is within 2 hours, within 2 days, within 7 days, and exceeding 7 days, respectively.
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * Filter criteria. Detailed filter criteria:
<ul><li><strong>domain</strong>: The requested domain name from the client. If accessing EdgeOne via a wildcard domain, the data records the wildcard domain name rather than the specific subdomain.</li><li><strong>originStatusCode</strong>: Origin status code. This filter is supported only when <code>MetricNames = ["l7Flow_request_hy"]</code>.
Valid values:<ul><li><code>1xx</code>: Status codes in the 1xx range.</li><li><code>2xx</code>: Status codes in the 2xx range.</li><li><code>3xx</code>: Status codes in the 3xx range.</li><li><code>4xx</code>: Status codes in the 4xx range.</li><li><code>5xx</code>: Status codes in the 5xx range.</li><li>Any integer in the range <code>[0, 600)</code>.</li></ul></li></ul>**Note**: When <code>DimensionName</code> is not empty, only the <code>equals</code> operator is supported.
                     */
                    std::vector<QueryCondition> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Query dimension name. Valid values:
<ul><li><strong>domain</strong>: The domain name requested by the client. If EdgeOne is accessed via a wildcard domain name, the data records the wildcard domain name.
When using the domain dimension, the <code>Filters</code> parameter must include the <code>domain</code> filter item, specifying a list of up to 100 domain names.</li><li><strong>origin-status-code</strong>: Origin status code, such as 200 or 404.
This dimension is supported only when <code>MetricNames = ["l7Flow_request_hy"]</code>.</li><li><strong>origin-status-code-category</strong>: Origin status code category, such as 2xx or 4xx.
This dimension is supported only when <code>MetricNames = ["l7Flow_request_hy"]</code>.</li></ul><p>If <code>DimensionName</code> is left empty, data is aggregated by the <code>AppId</code> dimension by default, returning a single set of data.</p><p>If <code>DimensionName</code> is specified, time series data is returned grouped by the specified dimension. For example:</p><ul>When <code>DimensionName = origin-status-code</code>:<ul><li><code>TimingDataRecords.TypeKey</code> in the returned data is the specific origin status code, such as 200.</li><li><code>TimingDataRecords.TypeValue</code> in the returned data is the time series data corresponding to that status code.</li></ul></ul><p><strong>Note</strong>: When <code>DimensionName</code> is specified, concurrent calls are not allowed. Exceeding the query rate limit will return the error <code><strong>InvalidParameter.ActionInProgress</strong></code>.</p>
                     */
                    std::string m_dimensionName;
                    bool m_dimensionNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBETIMINGL7ORIGINPULLDATAREQUEST_H_
