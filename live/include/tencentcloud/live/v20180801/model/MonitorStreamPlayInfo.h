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
                * The playback data.
                */
                class MonitorStreamPlayInfo : public AbstractModel
                {
                public:
                    MonitorStreamPlayInfo();
                    ~MonitorStreamPlayInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The playback domain.
                     * @return PlayDomain The playback domain.
                     */
                    std::string GetPlayDomain() const;

                    /**
                     * 设置The playback domain.
                     * @param PlayDomain The playback domain.
                     */
                    void SetPlayDomain(const std::string& _playDomain);

                    /**
                     * 判断参数 PlayDomain 是否已赋值
                     * @return PlayDomain 是否已赋值
                     */
                    bool PlayDomainHasBeenSet() const;

                    /**
                     * 获取The stream ID.
                     * @return StreamName The stream ID.
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置The stream ID.
                     * @param StreamName The stream ID.
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     */
                    bool StreamNameHasBeenSet() const;

                    /**
                     * 获取The playback bitrate. `0` indicates the original bitrate.
                     * @return Rate The playback bitrate. `0` indicates the original bitrate.
                     */
                    uint64_t GetRate() const;

                    /**
                     * 设置The playback bitrate. `0` indicates the original bitrate.
                     * @param Rate The playback bitrate. `0` indicates the original bitrate.
                     */
                    void SetRate(const uint64_t& _rate);

                    /**
                     * 判断参数 Rate 是否已赋值
                     * @return Rate 是否已赋值
                     */
                    bool RateHasBeenSet() const;

                    /**
                     * 获取The playback protocol. Valid values: `Unknown`, `Flv`, `Hls`, `Rtmp`, `Huyap2p`.
                     * @return Protocol The playback protocol. Valid values: `Unknown`, `Flv`, `Hls`, `Rtmp`, `Huyap2p`.
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置The playback protocol. Valid values: `Unknown`, `Flv`, `Hls`, `Rtmp`, `Huyap2p`.
                     * @param Protocol The playback protocol. Valid values: `Unknown`, `Flv`, `Hls`, `Rtmp`, `Huyap2p`.
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取The bandwidth (Mbps).
                     * @return Bandwidth The bandwidth (Mbps).
                     */
                    double GetBandwidth() const;

                    /**
                     * 设置The bandwidth (Mbps).
                     * @param Bandwidth The bandwidth (Mbps).
                     */
                    void SetBandwidth(const double& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取The number of online users, which is represented by the number of TCP connections (data collected every minute).
                     * @return Online The number of online users, which is represented by the number of TCP connections (data collected every minute).
                     */
                    uint64_t GetOnline() const;

                    /**
                     * 设置The number of online users, which is represented by the number of TCP connections (data collected every minute).
                     * @param Online The number of online users, which is represented by the number of TCP connections (data collected every minute).
                     */
                    void SetOnline(const uint64_t& _online);

                    /**
                     * 判断参数 Online 是否已赋值
                     * @return Online 是否已赋值
                     */
                    bool OnlineHasBeenSet() const;

                    /**
                     * 获取The number of requests.
                     * @return Request The number of requests.
                     */
                    uint64_t GetRequest() const;

                    /**
                     * 设置The number of requests.
                     * @param Request The number of requests.
                     */
                    void SetRequest(const uint64_t& _request);

                    /**
                     * 判断参数 Request 是否已赋值
                     * @return Request 是否已赋值
                     */
                    bool RequestHasBeenSet() const;

                private:

                    /**
                     * The playback domain.
                     */
                    std::string m_playDomain;
                    bool m_playDomainHasBeenSet;

                    /**
                     * The stream ID.
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                    /**
                     * The playback bitrate. `0` indicates the original bitrate.
                     */
                    uint64_t m_rate;
                    bool m_rateHasBeenSet;

                    /**
                     * The playback protocol. Valid values: `Unknown`, `Flv`, `Hls`, `Rtmp`, `Huyap2p`.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * The bandwidth (Mbps).
                     */
                    double m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * The number of online users, which is represented by the number of TCP connections (data collected every minute).
                     */
                    uint64_t m_online;
                    bool m_onlineHasBeenSet;

                    /**
                     * The number of requests.
                     */
                    uint64_t m_request;
                    bool m_requestHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_MONITORSTREAMPLAYINFO_H_
