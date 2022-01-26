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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEBILLBANDWIDTHANDFLUXLISTRESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEBILLBANDWIDTHANDFLUXLISTRESPONSE_H_

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
                * DescribeBillBandwidthAndFluxList response structure.
                */
                class DescribeBillBandwidthAndFluxListResponse : public AbstractModel
                {
                public:
                    DescribeBillBandwidthAndFluxListResponse();
                    ~DescribeBillBandwidthAndFluxListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Time point of peak bandwidth value in the format of `yyyy-mm-dd HH:MM:SS`.
                     * @return PeakBandwidthTime Time point of peak bandwidth value in the format of `yyyy-mm-dd HH:MM:SS`.
                     */
                    std::string GetPeakBandwidthTime() const;

                    /**
                     * 判断参数 PeakBandwidthTime 是否已赋值
                     * @return PeakBandwidthTime 是否已赋值
                     */
                    bool PeakBandwidthTimeHasBeenSet() const;

                    /**
                     * 获取Peak bandwidth in Mbps.
                     * @return PeakBandwidth Peak bandwidth in Mbps.
                     */
                    double GetPeakBandwidth() const;

                    /**
                     * 判断参数 PeakBandwidth 是否已赋值
                     * @return PeakBandwidth 是否已赋值
                     */
                    bool PeakBandwidthHasBeenSet() const;

                    /**
                     * 获取Time point of 95th percentile bandwidth value in the format of `yyyy-mm-dd HH:MM:SS`.
                     * @return P95PeakBandwidthTime Time point of 95th percentile bandwidth value in the format of `yyyy-mm-dd HH:MM:SS`.
                     */
                    std::string GetP95PeakBandwidthTime() const;

                    /**
                     * 判断参数 P95PeakBandwidthTime 是否已赋值
                     * @return P95PeakBandwidthTime 是否已赋值
                     */
                    bool P95PeakBandwidthTimeHasBeenSet() const;

                    /**
                     * 获取95th percentile bandwidth in Mbps.
                     * @return P95PeakBandwidth 95th percentile bandwidth in Mbps.
                     */
                    double GetP95PeakBandwidth() const;

                    /**
                     * 判断参数 P95PeakBandwidth 是否已赋值
                     * @return P95PeakBandwidth 是否已赋值
                     */
                    bool P95PeakBandwidthHasBeenSet() const;

                    /**
                     * 获取Total traffic in MB.
                     * @return SumFlux Total traffic in MB.
                     */
                    double GetSumFlux() const;

                    /**
                     * 判断参数 SumFlux 是否已赋值
                     * @return SumFlux 是否已赋值
                     */
                    bool SumFluxHasBeenSet() const;

                    /**
                     * 获取Detailed data information.
                     * @return DataInfoList Detailed data information.
                     */
                    std::vector<BillDataInfo> GetDataInfoList() const;

                    /**
                     * 判断参数 DataInfoList 是否已赋值
                     * @return DataInfoList 是否已赋值
                     */
                    bool DataInfoListHasBeenSet() const;

                private:

                    /**
                     * Time point of peak bandwidth value in the format of `yyyy-mm-dd HH:MM:SS`.
                     */
                    std::string m_peakBandwidthTime;
                    bool m_peakBandwidthTimeHasBeenSet;

                    /**
                     * Peak bandwidth in Mbps.
                     */
                    double m_peakBandwidth;
                    bool m_peakBandwidthHasBeenSet;

                    /**
                     * Time point of 95th percentile bandwidth value in the format of `yyyy-mm-dd HH:MM:SS`.
                     */
                    std::string m_p95PeakBandwidthTime;
                    bool m_p95PeakBandwidthTimeHasBeenSet;

                    /**
                     * 95th percentile bandwidth in Mbps.
                     */
                    double m_p95PeakBandwidth;
                    bool m_p95PeakBandwidthHasBeenSet;

                    /**
                     * Total traffic in MB.
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

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEBILLBANDWIDTHANDFLUXLISTRESPONSE_H_
