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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBETIMINGL7ANALYSISDATARESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBETIMINGL7ANALYSISDATARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/TimingDataRecord.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeTimingL7AnalysisData response structure.
                */
                class DescribeTimingL7AnalysisDataResponse : public AbstractModel
                {
                public:
                    DescribeTimingL7AnalysisDataResponse();
                    ~DescribeTimingL7AnalysisDataResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Total number of entries in the query result.</p>
                     * @return TotalCount <p>Total number of entries in the query result.</p>
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取<p>List of seven-layer time series traffic data.<br>For different queried metrics, time series data is returned from different parameters based on the metric value type.<br>Currently, there are the following two value types:</p><ul>  <li><strong>Integer</strong>: Metrics of the <code>Integer</code> value type return corresponding time series data from <code>Data.N.TypeValue</code>.<br>The corresponding queried metrics <code>MetricName</code> are:    <ul>      <li><code>l7Flow_outFlux</code>: L7 EdgeOne response traffic, unit: Byte;</li>      <li><code>l7Flow_inFlux</code>: L7 client request traffic, unit: Byte;</li>      <li><code>l7Flow_flux</code>: L7 total access traffic (EdgeOne response + client request), unit: Byte;</li>      <li><code>l7Flow_outBandwidth</code>: L7 EdgeOne response bandwidth, unit: bps;</li>      <li><code>l7Flow_inBandwidth</code>: L7 client request bandwidth, unit: bps;</li>      <li><code>l7Flow_bandwidth</code>: L7 total access bandwidth (EdgeOne response + client request), unit: bps;</li>      <li><code>l7Flow_request</code>: L7 access request count, unit: times;</li>      <li><code>l7Flow_avgResponseTime</code>: L7 average access response time, unit: ms;</li>      <li><code>l7Flow_avgFirstByteResponseTime</code>: L7 average first byte response time, unit: ms.</li>    </ul>  </li>  <li><strong>Float</strong>: Metrics of the <code>Float</code> value type return corresponding time series data from <code>Data.N.FloatTypeValue</code>.<br>The corresponding queried metric <code>MetricName</code> is:    <ul>      <li><code>l7Flow_requestRate</code>: L7 access request rate, unit: qps.</li>    </ul>  </li></ul>
                     * @return Data <p>List of seven-layer time series traffic data.<br>For different queried metrics, time series data is returned from different parameters based on the metric value type.<br>Currently, there are the following two value types:</p><ul>  <li><strong>Integer</strong>: Metrics of the <code>Integer</code> value type return corresponding time series data from <code>Data.N.TypeValue</code>.<br>The corresponding queried metrics <code>MetricName</code> are:    <ul>      <li><code>l7Flow_outFlux</code>: L7 EdgeOne response traffic, unit: Byte;</li>      <li><code>l7Flow_inFlux</code>: L7 client request traffic, unit: Byte;</li>      <li><code>l7Flow_flux</code>: L7 total access traffic (EdgeOne response + client request), unit: Byte;</li>      <li><code>l7Flow_outBandwidth</code>: L7 EdgeOne response bandwidth, unit: bps;</li>      <li><code>l7Flow_inBandwidth</code>: L7 client request bandwidth, unit: bps;</li>      <li><code>l7Flow_bandwidth</code>: L7 total access bandwidth (EdgeOne response + client request), unit: bps;</li>      <li><code>l7Flow_request</code>: L7 access request count, unit: times;</li>      <li><code>l7Flow_avgResponseTime</code>: L7 average access response time, unit: ms;</li>      <li><code>l7Flow_avgFirstByteResponseTime</code>: L7 average first byte response time, unit: ms.</li>    </ul>  </li>  <li><strong>Float</strong>: Metrics of the <code>Float</code> value type return corresponding time series data from <code>Data.N.FloatTypeValue</code>.<br>The corresponding queried metric <code>MetricName</code> is:    <ul>      <li><code>l7Flow_requestRate</code>: L7 access request rate, unit: qps.</li>    </ul>  </li></ul>
                     * 
                     */
                    std::vector<TimingDataRecord> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * <p>Total number of entries in the query result.</p>
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>List of seven-layer time series traffic data.<br>For different queried metrics, time series data is returned from different parameters based on the metric value type.<br>Currently, there are the following two value types:</p><ul>  <li><strong>Integer</strong>: Metrics of the <code>Integer</code> value type return corresponding time series data from <code>Data.N.TypeValue</code>.<br>The corresponding queried metrics <code>MetricName</code> are:    <ul>      <li><code>l7Flow_outFlux</code>: L7 EdgeOne response traffic, unit: Byte;</li>      <li><code>l7Flow_inFlux</code>: L7 client request traffic, unit: Byte;</li>      <li><code>l7Flow_flux</code>: L7 total access traffic (EdgeOne response + client request), unit: Byte;</li>      <li><code>l7Flow_outBandwidth</code>: L7 EdgeOne response bandwidth, unit: bps;</li>      <li><code>l7Flow_inBandwidth</code>: L7 client request bandwidth, unit: bps;</li>      <li><code>l7Flow_bandwidth</code>: L7 total access bandwidth (EdgeOne response + client request), unit: bps;</li>      <li><code>l7Flow_request</code>: L7 access request count, unit: times;</li>      <li><code>l7Flow_avgResponseTime</code>: L7 average access response time, unit: ms;</li>      <li><code>l7Flow_avgFirstByteResponseTime</code>: L7 average first byte response time, unit: ms.</li>    </ul>  </li>  <li><strong>Float</strong>: Metrics of the <code>Float</code> value type return corresponding time series data from <code>Data.N.FloatTypeValue</code>.<br>The corresponding queried metric <code>MetricName</code> is:    <ul>      <li><code>l7Flow_requestRate</code>: L7 access request rate, unit: qps.</li>    </ul>  </li></ul>
                     */
                    std::vector<TimingDataRecord> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBETIMINGL7ANALYSISDATARESPONSE_H_
