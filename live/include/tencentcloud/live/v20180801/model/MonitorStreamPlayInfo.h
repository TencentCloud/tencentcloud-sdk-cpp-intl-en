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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_MONITORSTREAMPLAYINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_MONITORSTREAMPLAYINFO_H_

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
                * Monitored playback data
                */
                class MonitorStreamPlayInfo : public AbstractModel
                {
                public:
                    MonitorStreamPlayInfo();
                    ~MonitorStreamPlayInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Playback domain name.
                     * @return PlayDomain Playback domain name.
                     */
                    std::string GetPlayDomain() const;

                    /**
                     * 设置Playback domain name.
                     * @param PlayDomain Playback domain name.
                     */
                    void SetPlayDomain(const std::string& _playDomain);

                    /**
                     * 判断参数 PlayDomain 是否已赋值
                     * @return PlayDomain 是否已赋值
                     */
                    bool PlayDomainHasBeenSet() const;

                    /**
                     * 获取Stream ID.
                     * @return StreamName Stream ID.
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置Stream ID.
                     * @param StreamName Stream ID.
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     */
                    bool StreamNameHasBeenSet() const;

                    /**
                     * 获取Playback bitrate. 0 indicates the original bitrate.
                     * @return Rate Playback bitrate. 0 indicates the original bitrate.
                     */
                    uint64_t GetRate() const;

                    /**
                     * 设置Playback bitrate. 0 indicates the original bitrate.
                     * @param Rate Playback bitrate. 0 indicates the original bitrate.
                     */
                    void SetRate(const uint64_t& _rate);

                    /**
                     * 判断参数 Rate 是否已赋值
                     * @return Rate 是否已赋值
                     */
                    bool RateHasBeenSet() const;

                    /**
                     * 获取Playback protocol. Valid values: Unknown, Flv, Hls, Rtmp, Huyap2p.
                     * @return Protocol Playback protocol. Valid values: Unknown, Flv, Hls, Rtmp, Huyap2p.
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Playback protocol. Valid values: Unknown, Flv, Hls, Rtmp, Huyap2p.
                     * @param Protocol Playback protocol. Valid values: Unknown, Flv, Hls, Rtmp, Huyap2p.
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

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
                     * 获取Number of online viewers. A data point is sampled per minute, and the number of TCP connections across the sample points is calculated.
                     * @return Online Number of online viewers. A data point is sampled per minute, and the number of TCP connections across the sample points is calculated.
                     */
                    uint64_t GetOnline() const;

                    /**
                     * 设置Number of online viewers. A data point is sampled per minute, and the number of TCP connections across the sample points is calculated.
                     * @param Online Number of online viewers. A data point is sampled per minute, and the number of TCP connections across the sample points is calculated.
                     */
                    void SetOnline(const uint64_t& _online);

                    /**
                     * 判断参数 Online 是否已赋值
                     * @return Online 是否已赋值
                     */
                    bool OnlineHasBeenSet() const;

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

                private:

                    /**
                     * Playback domain name.
                     */
                    std::string m_playDomain;
                    bool m_playDomainHasBeenSet;

                    /**
                     * Stream ID.
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                    /**
                     * Playback bitrate. 0 indicates the original bitrate.
                     */
                    uint64_t m_rate;
                    bool m_rateHasBeenSet;

                    /**
                     * Playback protocol. Valid values: Unknown, Flv, Hls, Rtmp, Huyap2p.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Bandwidth in Mbps.
                     */
                    double m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * Number of online viewers. A data point is sampled per minute, and the number of TCP connections across the sample points is calculated.
                     */
                    uint64_t m_online;
                    bool m_onlineHasBeenSet;

                    /**
                     * Number of requests.
                     */
                    uint64_t m_request;
                    bool m_requestHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_MONITORSTREAMPLAYINFO_H_
