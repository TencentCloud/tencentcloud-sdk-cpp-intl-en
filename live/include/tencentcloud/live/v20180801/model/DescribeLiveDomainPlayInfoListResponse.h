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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEDOMAINPLAYINFOLISTRESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEDOMAINPLAYINFOLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/DomainInfoList.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeLiveDomainPlayInfoList response structure.
                */
                class DescribeLiveDomainPlayInfoListResponse : public AbstractModel
                {
                public:
                    DescribeLiveDomainPlayInfoListResponse();
                    ~DescribeLiveDomainPlayInfoListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取Data time in the format of `yyyy-mm-dd HH:MM:SS`.
                     * @return Time Data time in the format of `yyyy-mm-dd HH:MM:SS`.
                     */
                    std::string GetTime() const;

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取Real-time total bandwidth.
                     * @return TotalBandwidth Real-time total bandwidth.
                     */
                    double GetTotalBandwidth() const;

                    /**
                     * 判断参数 TotalBandwidth 是否已赋值
                     * @return TotalBandwidth 是否已赋值
                     */
                    bool TotalBandwidthHasBeenSet() const;

                    /**
                     * 获取Real-time total traffic.
                     * @return TotalFlux Real-time total traffic.
                     */
                    double GetTotalFlux() const;

                    /**
                     * 判断参数 TotalFlux 是否已赋值
                     * @return TotalFlux 是否已赋值
                     */
                    bool TotalFluxHasBeenSet() const;

                    /**
                     * 获取Total number of requests.
                     * @return TotalRequest Total number of requests.
                     */
                    uint64_t GetTotalRequest() const;

                    /**
                     * 判断参数 TotalRequest 是否已赋值
                     * @return TotalRequest 是否已赋值
                     */
                    bool TotalRequestHasBeenSet() const;

                    /**
                     * 获取Real-time total number of connections.
                     * @return TotalOnline Real-time total number of connections.
                     */
                    uint64_t GetTotalOnline() const;

                    /**
                     * 判断参数 TotalOnline 是否已赋值
                     * @return TotalOnline 是否已赋值
                     */
                    bool TotalOnlineHasBeenSet() const;

                    /**
                     * 获取Data by domain name.
                     * @return DomainInfoList Data by domain name.
                     */
                    std::vector<DomainInfoList> GetDomainInfoList() const;

                    /**
                     * 判断参数 DomainInfoList 是否已赋值
                     * @return DomainInfoList 是否已赋值
                     */
                    bool DomainInfoListHasBeenSet() const;

                private:

                    /**
                     * Data time in the format of `yyyy-mm-dd HH:MM:SS`.
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * Real-time total bandwidth.
                     */
                    double m_totalBandwidth;
                    bool m_totalBandwidthHasBeenSet;

                    /**
                     * Real-time total traffic.
                     */
                    double m_totalFlux;
                    bool m_totalFluxHasBeenSet;

                    /**
                     * Total number of requests.
                     */
                    uint64_t m_totalRequest;
                    bool m_totalRequestHasBeenSet;

                    /**
                     * Real-time total number of connections.
                     */
                    uint64_t m_totalOnline;
                    bool m_totalOnlineHasBeenSet;

                    /**
                     * Data by domain name.
                     */
                    std::vector<DomainInfoList> m_domainInfoList;
                    bool m_domainInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEDOMAINPLAYINFOLISTRESPONSE_H_
