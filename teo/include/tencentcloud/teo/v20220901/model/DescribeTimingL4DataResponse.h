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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBETIMINGL4DATARESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBETIMINGL4DATARESPONSE_H_

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
                * DescribeTimingL4Data response structure.
                */
                class DescribeTimingL4DataResponse : public AbstractModel
                {
                public:
                    DescribeTimingL4DataResponse();
                    ~DescribeTimingL4DataResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of entries in the query result.
                     * @return TotalCount Total number of entries in the query result.
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
                     * 获取<p>List of L4 time series traffic data.<br>For different queried metrics, time series data is returned from different parameters based on the metric value type.<br>The existing value types are as follows:</p><ul><li><strong>Integer</strong>: Metrics of the <code>Integer</code> value type return corresponding time series data from <code>Data.N.TypeValue</code>.<br>The corresponding queried metrics <code>MetricName</code> are:<ul><li><code>l4Flow_flux</code>: total access traffic;</li><li><code>l4Flow_inFlux</code>: access inbound traffic;</li><li><code>l4Flow_outFlux</code>: access outbound traffic;</li><li><code>l4Flow_inBandwidth</code>: inbound bandwidth peak;</li><li><code>l4Flow_outBandwidth</code>: outbound bandwidth peak;</li><li><code>l4Flow_connections</code>: number of concurrent connections.</li></ul></li><li><strong>Float</strong>: Metrics of the <code>Float</code> value type return corresponding time series data from <code>Data.N.FloatTypeValue</code>.<br>The corresponding queried metric <code>MetricName</code> is:<ul><li><code>l4Flow_newConnectionsRate</code>: rate of new connections.</li></ul></li></ul>
</ul><p>This interface does not support dimension query. By default, data is aggregated by root account and returned, that is, <code>Data.N.TypeKey = AppId</code>. AppId is the unique identifier of the Tencent Cloud root account, and N is always equal to 1.</p>
                     * @return Data <p>List of L4 time series traffic data.<br>For different queried metrics, time series data is returned from different parameters based on the metric value type.<br>The existing value types are as follows:</p><ul><li><strong>Integer</strong>: Metrics of the <code>Integer</code> value type return corresponding time series data from <code>Data.N.TypeValue</code>.<br>The corresponding queried metrics <code>MetricName</code> are:<ul><li><code>l4Flow_flux</code>: total access traffic;</li><li><code>l4Flow_inFlux</code>: access inbound traffic;</li><li><code>l4Flow_outFlux</code>: access outbound traffic;</li><li><code>l4Flow_inBandwidth</code>: inbound bandwidth peak;</li><li><code>l4Flow_outBandwidth</code>: outbound bandwidth peak;</li><li><code>l4Flow_connections</code>: number of concurrent connections.</li></ul></li><li><strong>Float</strong>: Metrics of the <code>Float</code> value type return corresponding time series data from <code>Data.N.FloatTypeValue</code>.<br>The corresponding queried metric <code>MetricName</code> is:<ul><li><code>l4Flow_newConnectionsRate</code>: rate of new connections.</li></ul></li></ul>
</ul><p>This interface does not support dimension query. By default, data is aggregated by root account and returned, that is, <code>Data.N.TypeKey = AppId</code>. AppId is the unique identifier of the Tencent Cloud root account, and N is always equal to 1.</p>
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
                     * Total number of entries in the query result.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>List of L4 time series traffic data.<br>For different queried metrics, time series data is returned from different parameters based on the metric value type.<br>The existing value types are as follows:</p><ul><li><strong>Integer</strong>: Metrics of the <code>Integer</code> value type return corresponding time series data from <code>Data.N.TypeValue</code>.<br>The corresponding queried metrics <code>MetricName</code> are:<ul><li><code>l4Flow_flux</code>: total access traffic;</li><li><code>l4Flow_inFlux</code>: access inbound traffic;</li><li><code>l4Flow_outFlux</code>: access outbound traffic;</li><li><code>l4Flow_inBandwidth</code>: inbound bandwidth peak;</li><li><code>l4Flow_outBandwidth</code>: outbound bandwidth peak;</li><li><code>l4Flow_connections</code>: number of concurrent connections.</li></ul></li><li><strong>Float</strong>: Metrics of the <code>Float</code> value type return corresponding time series data from <code>Data.N.FloatTypeValue</code>.<br>The corresponding queried metric <code>MetricName</code> is:<ul><li><code>l4Flow_newConnectionsRate</code>: rate of new connections.</li></ul></li></ul>
</ul><p>This interface does not support dimension query. By default, data is aggregated by root account and returned, that is, <code>Data.N.TypeKey = AppId</code>. AppId is the unique identifier of the Tencent Cloud root account, and N is always equal to 1.</p>
                     */
                    std::vector<TimingDataRecord> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBETIMINGL4DATARESPONSE_H_
