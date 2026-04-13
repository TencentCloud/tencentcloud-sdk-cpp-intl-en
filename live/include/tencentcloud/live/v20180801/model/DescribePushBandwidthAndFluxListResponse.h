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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEPUSHBANDWIDTHANDFLUXLISTRESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEPUSHBANDWIDTHANDFLUXLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/BillDataInfo.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribePushBandwidthAndFluxList response structure.
                */
                class DescribePushBandwidthAndFluxListResponse : public AbstractModel
                {
                public:
                    DescribePushBandwidthAndFluxListResponse();
                    ~DescribePushBandwidthAndFluxListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Peak bandwidth timestamp, using UTC time format, e.g., 2019-01-08T10:00:00Z. Note: Beijing time value equals UTC time value + 8 hours, expressed in ISO 8601 standard format. For details, refer to ISO Date Format Description.(https://cloud.tencent.com/document/product/266/11732#I)
                     * @return PeakBandwidthTime Peak bandwidth timestamp, using UTC time format, e.g., 2019-01-08T10:00:00Z. Note: Beijing time value equals UTC time value + 8 hours, expressed in ISO 8601 standard format. For details, refer to ISO Date Format Description.(https://cloud.tencent.com/document/product/266/11732#I)
                     * 
                     */
                    std::string GetPeakBandwidthTime() const;

                    /**
                     * 判断参数 PeakBandwidthTime 是否已赋值
                     * @return PeakBandwidthTime 是否已赋值
                     * 
                     */
                    bool PeakBandwidthTimeHasBeenSet() const;

                    /**
                     * 获取Peak bandwidth, measured in Mbps.
                     * @return PeakBandwidth Peak bandwidth, measured in Mbps.
                     * 
                     */
                    double GetPeakBandwidth() const;

                    /**
                     * 判断参数 PeakBandwidth 是否已赋值
                     * @return PeakBandwidth 是否已赋值
                     * 
                     */
                    bool PeakBandwidthHasBeenSet() const;

                    /**
                     * 获取95th percentile peak bandwidth timestamp, using UTC time format, e.g., 2019-01-08T10:00:00Z. Note: Beijing time value equals UTC time value + 8 hours, expressed in ISO 8601 standard format. For details, refer to ISO Date Format Description.(https://cloud.tencent.com/document/product/266/11732#I).
                     * @return P95PeakBandwidthTime 95th percentile peak bandwidth timestamp, using UTC time format, e.g., 2019-01-08T10:00:00Z. Note: Beijing time value equals UTC time value + 8 hours, expressed in ISO 8601 standard format. For details, refer to ISO Date Format Description.(https://cloud.tencent.com/document/product/266/11732#I).
                     * 
                     */
                    std::string GetP95PeakBandwidthTime() const;

                    /**
                     * 判断参数 P95PeakBandwidthTime 是否已赋值
                     * @return P95PeakBandwidthTime 是否已赋值
                     * 
                     */
                    bool P95PeakBandwidthTimeHasBeenSet() const;

                    /**
                     * 获取95th percentile peak bandwidth, measured in Mbps.
                     * @return P95PeakBandwidth 95th percentile peak bandwidth, measured in Mbps.
                     * 
                     */
                    double GetP95PeakBandwidth() const;

                    /**
                     * 判断参数 P95PeakBandwidth 是否已赋值
                     * @return P95PeakBandwidth 是否已赋值
                     * 
                     */
                    bool P95PeakBandwidthHasBeenSet() const;

                    /**
                     * 获取Total traffic, measured in MB.
                     * @return SumFlux Total traffic, measured in MB.
                     * 
                     */
                    double GetSumFlux() const;

                    /**
                     * 判断参数 SumFlux 是否已赋值
                     * @return SumFlux 是否已赋值
                     * 
                     */
                    bool SumFluxHasBeenSet() const;

                    /**
                     * 获取Detailed data information.
                     * @return DataInfoList Detailed data information.
                     * 
                     */
                    std::vector<BillDataInfo> GetDataInfoList() const;

                    /**
                     * 判断参数 DataInfoList 是否已赋值
                     * @return DataInfoList 是否已赋值
                     * 
                     */
                    bool DataInfoListHasBeenSet() const;

                private:

                    /**
                     * Peak bandwidth timestamp, using UTC time format, e.g., 2019-01-08T10:00:00Z. Note: Beijing time value equals UTC time value + 8 hours, expressed in ISO 8601 standard format. For details, refer to ISO Date Format Description.(https://cloud.tencent.com/document/product/266/11732#I)
                     */
                    std::string m_peakBandwidthTime;
                    bool m_peakBandwidthTimeHasBeenSet;

                    /**
                     * Peak bandwidth, measured in Mbps.
                     */
                    double m_peakBandwidth;
                    bool m_peakBandwidthHasBeenSet;

                    /**
                     * 95th percentile peak bandwidth timestamp, using UTC time format, e.g., 2019-01-08T10:00:00Z. Note: Beijing time value equals UTC time value + 8 hours, expressed in ISO 8601 standard format. For details, refer to ISO Date Format Description.(https://cloud.tencent.com/document/product/266/11732#I).
                     */
                    std::string m_p95PeakBandwidthTime;
                    bool m_p95PeakBandwidthTimeHasBeenSet;

                    /**
                     * 95th percentile peak bandwidth, measured in Mbps.
                     */
                    double m_p95PeakBandwidth;
                    bool m_p95PeakBandwidthHasBeenSet;

                    /**
                     * Total traffic, measured in MB.
                     */
                    double m_sumFlux;
                    bool m_sumFluxHasBeenSet;

                    /**
                     * Detailed data information.
                     */
                    std::vector<BillDataInfo> m_dataInfoList;
                    bool m_dataInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEPUSHBANDWIDTHANDFLUXLISTRESPONSE_H_
