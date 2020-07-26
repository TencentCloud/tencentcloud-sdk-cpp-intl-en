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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DAYSTREAMPLAYINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DAYSTREAMPLAYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * Stream playback information
                */
                class DayStreamPlayInfo : public AbstractModel
                {
                public:
                    DayStreamPlayInfo();
                    ~DayStreamPlayInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Data point in time in the format of `yyyy-mm-dd HH:MM:SS`.
                     * @return Time Data point in time in the format of `yyyy-mm-dd HH:MM:SS`.
                     */
                    std::string GetTime() const;

                    /**
                     * 设置Data point in time in the format of `yyyy-mm-dd HH:MM:SS`.
                     * @param Time Data point in time in the format of `yyyy-mm-dd HH:MM:SS`.
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取Bandwidth in Mbps.
                     * @return Bandwidth Bandwidth in Mbps.
                     */
                    double GetBandwidth() const;

                    /**
                     * 设置Bandwidth in Mbps.
                     * @param Bandwidth Bandwidth in Mbps.
                     */
                    void SetBandwidth(const double& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取Traffic in MB.
                     * @return Flux Traffic in MB.
                     */
                    double GetFlux() const;

                    /**
                     * 设置Traffic in MB.
                     * @param Flux Traffic in MB.
                     */
                    void SetFlux(const double& _flux);

                    /**
                     * 判断参数 Flux 是否已赋值
                     * @return Flux 是否已赋值
                     */
                    bool FluxHasBeenSet() const;

                    /**
                     * 获取Number of requests.
                     * @return Request Number of requests.
                     */
                    uint64_t GetRequest() const;

                    /**
                     * 设置Number of requests.
                     * @param Request Number of requests.
                     */
                    void SetRequest(const uint64_t& _request);

                    /**
                     * 判断参数 Request 是否已赋值
                     * @return Request 是否已赋值
                     */
                    bool RequestHasBeenSet() const;

                    /**
                     * 获取Number of online viewers.
                     * @return Online Number of online viewers.
                     */
                    uint64_t GetOnline() const;

                    /**
                     * 设置Number of online viewers.
                     * @param Online Number of online viewers.
                     */
                    void SetOnline(const uint64_t& _online);

                    /**
                     * 判断参数 Online 是否已赋值
                     * @return Online 是否已赋值
                     */
                    bool OnlineHasBeenSet() const;

                private:

                    /**
                     * Data point in time in the format of `yyyy-mm-dd HH:MM:SS`.
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * Bandwidth in Mbps.
                     */
                    double m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * Traffic in MB.
                     */
                    double m_flux;
                    bool m_fluxHasBeenSet;

                    /**
                     * Number of requests.
                     */
                    uint64_t m_request;
                    bool m_requestHasBeenSet;

                    /**
                     * Number of online viewers.
                     */
                    uint64_t m_online;
                    bool m_onlineHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DAYSTREAMPLAYINFO_H_
