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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBETRANSMITSTATISRESPONSE_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBETRANSMITSTATISRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeTransmitStatis response structure.
                */
                class DescribeTransmitStatisResponse : public AbstractModel
                {
                public:
                    DescribeTransmitStatisResponse();
                    ~DescribeTransmitStatisResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取If `MetricName` is `traffic`, this field indicates the inbound traffic bandwidth in bps;
If `MetricName` is `pkg`, this field indicates the inbound packet rate in pps;
                     * @return InDataList If `MetricName` is `traffic`, this field indicates the inbound traffic bandwidth in bps;
If `MetricName` is `pkg`, this field indicates the inbound packet rate in pps;
                     */
                    std::vector<double> GetInDataList() const;

                    /**
                     * 判断参数 InDataList 是否已赋值
                     * @return InDataList 是否已赋值
                     */
                    bool InDataListHasBeenSet() const;

                    /**
                     * 获取If `MetricName` is `traffic`, this field indicates the outbound traffic bandwidth in bps;
If `MetricName` is `pkg`, this field indicates the outbound packet rate in pps;
                     * @return OutDataList If `MetricName` is `traffic`, this field indicates the outbound traffic bandwidth in bps;
If `MetricName` is `pkg`, this field indicates the outbound packet rate in pps;
                     */
                    std::vector<double> GetOutDataList() const;

                    /**
                     * 判断参数 OutDataList 是否已赋值
                     * @return OutDataList 是否已赋值
                     */
                    bool OutDataListHasBeenSet() const;

                    /**
                     * 获取Metric name:
traffic: traffic bandwidth;
pkg: packet rate;
                     * @return MetricName Metric name:
traffic: traffic bandwidth;
pkg: packet rate;
                     */
                    std::string GetMetricName() const;

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     */
                    bool MetricNameHasBeenSet() const;

                private:

                    /**
                     * If `MetricName` is `traffic`, this field indicates the inbound traffic bandwidth in bps;
If `MetricName` is `pkg`, this field indicates the inbound packet rate in pps;
                     */
                    std::vector<double> m_inDataList;
                    bool m_inDataListHasBeenSet;

                    /**
                     * If `MetricName` is `traffic`, this field indicates the outbound traffic bandwidth in bps;
If `MetricName` is `pkg`, this field indicates the outbound packet rate in pps;
                     */
                    std::vector<double> m_outDataList;
                    bool m_outDataListHasBeenSet;

                    /**
                     * Metric name:
traffic: traffic bandwidth;
pkg: packet rate;
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBETRANSMITSTATISRESPONSE_H_
