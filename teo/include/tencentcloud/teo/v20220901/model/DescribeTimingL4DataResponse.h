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
                     * 获取Total number of query results.
                     * @return TotalCount Total number of query results.
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
                     * 获取<p>Layer 4 time series traffic Data list.<br>for different queried metrics, time series Data is returned from different parameters based on the value type.<br>currently, there are the following two value types:</p><ul><li><strong>Integer</strong>: metrics with <code>Integer</code> value type return corresponding time series Data from <code>Data.N.TypeValue</code>.<br>queried metrics <code>MetricName</code> include:<ul><li><code>l4Flow_flux</code>: total access traffic;</li><li><code>l4Flow_inFlux</code>: access inbound traffic;</li><li><code>l4Flow_outFlux</code>: access outbound traffic;</li><li><code>l4Flow_inBandwidth</code>: inbound bandwidth peak;</li><li><code>l4Flow_outBandwidth</code>: outbound bandwidth peak;</li><li><code>l4Flow_connections</code>: number of concurrent connections.</li></ul></li><li><strong>Float</strong>: metrics with <code>Float</code> value type return corresponding time series Data from <code>Data.N.FloatTypeValue</code>.<br>queried metrics <code>MetricName</code> include:<ul><li><code>l4Flow_newConnectionsRate</code>: rate of new connections.</li></ul></li>.
</ul><p>This API does not support dimension query for now. it aggregates and returns Data by root account by default, which means <code>Data.N.TypeKey = AppId</code>. AppId is the unique id of the tencent cloud root account, and N always equals 1.</p>.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @return Data <p>Layer 4 time series traffic Data list.<br>for different queried metrics, time series Data is returned from different parameters based on the value type.<br>currently, there are the following two value types:</p><ul><li><strong>Integer</strong>: metrics with <code>Integer</code> value type return corresponding time series Data from <code>Data.N.TypeValue</code>.<br>queried metrics <code>MetricName</code> include:<ul><li><code>l4Flow_flux</code>: total access traffic;</li><li><code>l4Flow_inFlux</code>: access inbound traffic;</li><li><code>l4Flow_outFlux</code>: access outbound traffic;</li><li><code>l4Flow_inBandwidth</code>: inbound bandwidth peak;</li><li><code>l4Flow_outBandwidth</code>: outbound bandwidth peak;</li><li><code>l4Flow_connections</code>: number of concurrent connections.</li></ul></li><li><strong>Float</strong>: metrics with <code>Float</code> value type return corresponding time series Data from <code>Data.N.FloatTypeValue</code>.<br>queried metrics <code>MetricName</code> include:<ul><li><code>l4Flow_newConnectionsRate</code>: rate of new connections.</li></ul></li>.
</ul><p>This API does not support dimension query for now. it aggregates and returns Data by root account by default, which means <code>Data.N.TypeKey = AppId</code>. AppId is the unique id of the tencent cloud root account, and N always equals 1.</p>.
Note: This field may return null, which indicates a failure to obtain a valid value.
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
                     * Total number of query results.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>Layer 4 time series traffic Data list.<br>for different queried metrics, time series Data is returned from different parameters based on the value type.<br>currently, there are the following two value types:</p><ul><li><strong>Integer</strong>: metrics with <code>Integer</code> value type return corresponding time series Data from <code>Data.N.TypeValue</code>.<br>queried metrics <code>MetricName</code> include:<ul><li><code>l4Flow_flux</code>: total access traffic;</li><li><code>l4Flow_inFlux</code>: access inbound traffic;</li><li><code>l4Flow_outFlux</code>: access outbound traffic;</li><li><code>l4Flow_inBandwidth</code>: inbound bandwidth peak;</li><li><code>l4Flow_outBandwidth</code>: outbound bandwidth peak;</li><li><code>l4Flow_connections</code>: number of concurrent connections.</li></ul></li><li><strong>Float</strong>: metrics with <code>Float</code> value type return corresponding time series Data from <code>Data.N.FloatTypeValue</code>.<br>queried metrics <code>MetricName</code> include:<ul><li><code>l4Flow_newConnectionsRate</code>: rate of new connections.</li></ul></li>.
</ul><p>This API does not support dimension query for now. it aggregates and returns Data by root account by default, which means <code>Data.N.TypeKey = AppId</code>. AppId is the unique id of the tencent cloud root account, and N always equals 1.</p>.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     */
                    std::vector<TimingDataRecord> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBETIMINGL4DATARESPONSE_H_
