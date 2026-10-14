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

#ifndef TENCENTCLOUD_MDC_V20200828_MODEL_CREATEOUTPUTSRTSETTINGS_H_
#define TENCENTCLOUD_MDC_V20200828_MODEL_CREATEOUTPUTSRTSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdc/v20200828/model/CreateOutputSrtSettingsDestinations.h>
#include <tencentcloud/mdc/v20200828/model/SRTFECFullOptions.h>


namespace TencentCloud
{
    namespace Mdc
    {
        namespace V20200828
        {
            namespace Model
            {
                /**
                * Create the SRT configuration for the output of a media transmission stream.
                */
                class CreateOutputSrtSettings : public AbstractModel
                {
                public:
                    CreateOutputSrtSettings();
                    ~CreateOutputSrtSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Target address for push. Required when Mode is CALLER. Only 1 group can be filled in.
                     * @return Destinations Target address for push. Required when Mode is CALLER. Only 1 group can be filled in.
                     * 
                     */
                    std::vector<CreateOutputSrtSettingsDestinations> GetDestinations() const;

                    /**
                     * 设置Target address for push. Required when Mode is CALLER. Only 1 group can be filled in.
                     * @param _destinations Target address for push. Required when Mode is CALLER. Only 1 group can be filled in.
                     * 
                     */
                    void SetDestinations(const std::vector<CreateOutputSrtSettingsDestinations>& _destinations);

                    /**
                     * 判断参数 Destinations 是否已赋值
                     * @return Destinations 是否已赋值
                     * 
                     */
                    bool DestinationsHasBeenSet() const;

                    /**
                     * 获取SRT mode. Valid values: `LISTENER` and `CALLER`. Default value: `CALLER`.
                     * @return Mode SRT mode. Valid values: `LISTENER` and `CALLER`. Default value: `CALLER`.
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置SRT mode. Valid values: `LISTENER` and `CALLER`. Default value: `CALLER`.
                     * @param _mode SRT mode. Valid values: `LISTENER` and `CALLER`. Default value: `CALLER`.
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取Stream Id for SRT retransmission. It can contain upper- and lower-case letters, digits, and special characters (.#!:&,=_-), with a length of 0 to 512.
                     * @return StreamId Stream Id for SRT retransmission. It can contain upper- and lower-case letters, digits, and special characters (.#!:&,=_-), with a length of 0 to 512.
                     * 
                     */
                    std::string GetStreamId() const;

                    /**
                     * 设置Stream Id for SRT retransmission. It can contain upper- and lower-case letters, digits, and special characters (.#!:&,=_-), with a length of 0 to 512.
                     * @param _streamId Stream Id for SRT retransmission. It can contain upper- and lower-case letters, digits, and special characters (.#!:&,=_-), with a length of 0 to 512.
                     * 
                     */
                    void SetStreamId(const std::string& _streamId);

                    /**
                     * 判断参数 StreamId 是否已赋值
                     * @return StreamId 是否已赋值
                     * 
                     */
                    bool StreamIdHasBeenSet() const;

                    /**
                     * 获取Total delay for SRT retransmission. Default value: 0. Unit: ms. Range: [0, 3000]. This parameter simultaneously sets the sender and recipient delays (recvlatency and peerlatency) to the same value. Recommended configuration: at least 3 times the RTT to ensure effective handling of packet retransmission and confirmation during network congestion.
                     * @return Latency Total delay for SRT retransmission. Default value: 0. Unit: ms. Range: [0, 3000]. This parameter simultaneously sets the sender and recipient delays (recvlatency and peerlatency) to the same value. Recommended configuration: at least 3 times the RTT to ensure effective handling of packet retransmission and confirmation during network congestion.
                     * 
                     */
                    int64_t GetLatency() const;

                    /**
                     * 设置Total delay for SRT retransmission. Default value: 0. Unit: ms. Range: [0, 3000]. This parameter simultaneously sets the sender and recipient delays (recvlatency and peerlatency) to the same value. Recommended configuration: at least 3 times the RTT to ensure effective handling of packet retransmission and confirmation during network congestion.
                     * @param _latency Total delay for SRT retransmission. Default value: 0. Unit: ms. Range: [0, 3000]. This parameter simultaneously sets the sender and recipient delays (recvlatency and peerlatency) to the same value. Recommended configuration: at least 3 times the RTT to ensure effective handling of packet retransmission and confirmation during network congestion.
                     * 
                     */
                    void SetLatency(const int64_t& _latency);

                    /**
                     * 判断参数 Latency 是否已赋值
                     * @return Latency 是否已赋值
                     * 
                     */
                    bool LatencyHasBeenSet() const;

                    /**
                     * 获取Receive latency for SRT relay. Default value: 120. Unit: ms. Range: [0, 3000].
This parameter indicates the time length for the recipient to cache data packets.
                     * @return RecvLatency Receive latency for SRT relay. Default value: 120. Unit: ms. Range: [0, 3000].
This parameter indicates the time length for the recipient to cache data packets.
                     * 
                     */
                    int64_t GetRecvLatency() const;

                    /**
                     * 设置Receive latency for SRT relay. Default value: 120. Unit: ms. Range: [0, 3000].
This parameter indicates the time length for the recipient to cache data packets.
                     * @param _recvLatency Receive latency for SRT relay. Default value: 120. Unit: ms. Range: [0, 3000].
This parameter indicates the time length for the recipient to cache data packets.
                     * 
                     */
                    void SetRecvLatency(const int64_t& _recvLatency);

                    /**
                     * 判断参数 RecvLatency 是否已赋值
                     * @return RecvLatency 是否已赋值
                     * 
                     */
                    bool RecvLatencyHasBeenSet() const;

                    /**
                     * 获取Peer delay for SRT retransmission. Default value: 0. Unit: ms. Range: [0, 3000].
This parameter is set by the sender to inform the recipient of the expected buffer time for delay.
                     * @return PeerLatency Peer delay for SRT retransmission. Default value: 0. Unit: ms. Range: [0, 3000].
This parameter is set by the sender to inform the recipient of the expected buffer time for delay.
                     * 
                     */
                    int64_t GetPeerLatency() const;

                    /**
                     * 设置Peer delay for SRT retransmission. Default value: 0. Unit: ms. Range: [0, 3000].
This parameter is set by the sender to inform the recipient of the expected buffer time for delay.
                     * @param _peerLatency Peer delay for SRT retransmission. Default value: 0. Unit: ms. Range: [0, 3000].
This parameter is set by the sender to inform the recipient of the expected buffer time for delay.
                     * 
                     */
                    void SetPeerLatency(const int64_t& _peerLatency);

                    /**
                     * 判断参数 PeerLatency 是否已赋值
                     * @return PeerLatency 是否已赋值
                     * 
                     */
                    bool PeerLatencyHasBeenSet() const;

                    /**
                     * 获取Idle timeout for SRT relay. Default value: 5000 ms. Range: [1000, 10000].
If there is no activity on a connection within the set timeout period, it will be closed.
                     * @return PeerIdleTimeout Idle timeout for SRT relay. Default value: 5000 ms. Range: [1000, 10000].
If there is no activity on a connection within the set timeout period, it will be closed.
                     * 
                     */
                    int64_t GetPeerIdleTimeout() const;

                    /**
                     * 设置Idle timeout for SRT relay. Default value: 5000 ms. Range: [1000, 10000].
If there is no activity on a connection within the set timeout period, it will be closed.
                     * @param _peerIdleTimeout Idle timeout for SRT relay. Default value: 5000 ms. Range: [1000, 10000].
If there is no activity on a connection within the set timeout period, it will be closed.
                     * 
                     */
                    void SetPeerIdleTimeout(const int64_t& _peerIdleTimeout);

                    /**
                     * 判断参数 PeerIdleTimeout 是否已赋值
                     * @return PeerIdleTimeout 是否已赋值
                     * 
                     */
                    bool PeerIdleTimeoutHasBeenSet() const;

                    /**
                     * 获取Encryption key for SRT retweet. It is empty by default, indicating not encrypted. Only ascii characters are allowed, with a length of [10, 79].
                     * @return Passphrase Encryption key for SRT retweet. It is empty by default, indicating not encrypted. Only ascii characters are allowed, with a length of [10, 79].
                     * 
                     */
                    std::string GetPassphrase() const;

                    /**
                     * 设置Encryption key for SRT retweet. It is empty by default, indicating not encrypted. Only ascii characters are allowed, with a length of [10, 79].
                     * @param _passphrase Encryption key for SRT retweet. It is empty by default, indicating not encrypted. Only ascii characters are allowed, with a length of [10, 79].
                     * 
                     */
                    void SetPassphrase(const std::string& _passphrase);

                    /**
                     * 判断参数 Passphrase 是否已赋值
                     * @return Passphrase 是否已赋值
                     * 
                     */
                    bool PassphraseHasBeenSet() const;

                    /**
                     * 获取Key length for SRT retransmission. Default value: 0. Options: [0|16|24|32].
                     * @return PbKeyLen Key length for SRT retransmission. Default value: 0. Options: [0|16|24|32].
                     * 
                     */
                    int64_t GetPbKeyLen() const;

                    /**
                     * 设置Key length for SRT retransmission. Default value: 0. Options: [0|16|24|32].
                     * @param _pbKeyLen Key length for SRT retransmission. Default value: 0. Options: [0|16|24|32].
                     * 
                     */
                    void SetPbKeyLen(const int64_t& _pbKeyLen);

                    /**
                     * 判断参数 PbKeyLen 是否已赋值
                     * @return PbKeyLen 是否已赋值
                     * 
                     */
                    bool PbKeyLenHasBeenSet() const;

                    /**
                     * 获取SRT FEC settings
                     * @return FEC SRT FEC settings
                     * 
                     */
                    SRTFECFullOptions GetFEC() const;

                    /**
                     * 设置SRT FEC settings
                     * @param _fEC SRT FEC settings
                     * 
                     */
                    void SetFEC(const SRTFECFullOptions& _fEC);

                    /**
                     * 判断参数 FEC 是否已赋值
                     * @return FEC 是否已赋值
                     * 
                     */
                    bool FECHasBeenSet() const;

                private:

                    /**
                     * Target address for push. Required when Mode is CALLER. Only 1 group can be filled in.
                     */
                    std::vector<CreateOutputSrtSettingsDestinations> m_destinations;
                    bool m_destinationsHasBeenSet;

                    /**
                     * SRT mode. Valid values: `LISTENER` and `CALLER`. Default value: `CALLER`.
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * Stream Id for SRT retransmission. It can contain upper- and lower-case letters, digits, and special characters (.#!:&,=_-), with a length of 0 to 512.
                     */
                    std::string m_streamId;
                    bool m_streamIdHasBeenSet;

                    /**
                     * Total delay for SRT retransmission. Default value: 0. Unit: ms. Range: [0, 3000]. This parameter simultaneously sets the sender and recipient delays (recvlatency and peerlatency) to the same value. Recommended configuration: at least 3 times the RTT to ensure effective handling of packet retransmission and confirmation during network congestion.
                     */
                    int64_t m_latency;
                    bool m_latencyHasBeenSet;

                    /**
                     * Receive latency for SRT relay. Default value: 120. Unit: ms. Range: [0, 3000].
This parameter indicates the time length for the recipient to cache data packets.
                     */
                    int64_t m_recvLatency;
                    bool m_recvLatencyHasBeenSet;

                    /**
                     * Peer delay for SRT retransmission. Default value: 0. Unit: ms. Range: [0, 3000].
This parameter is set by the sender to inform the recipient of the expected buffer time for delay.
                     */
                    int64_t m_peerLatency;
                    bool m_peerLatencyHasBeenSet;

                    /**
                     * Idle timeout for SRT relay. Default value: 5000 ms. Range: [1000, 10000].
If there is no activity on a connection within the set timeout period, it will be closed.
                     */
                    int64_t m_peerIdleTimeout;
                    bool m_peerIdleTimeoutHasBeenSet;

                    /**
                     * Encryption key for SRT retweet. It is empty by default, indicating not encrypted. Only ascii characters are allowed, with a length of [10, 79].
                     */
                    std::string m_passphrase;
                    bool m_passphraseHasBeenSet;

                    /**
                     * Key length for SRT retransmission. Default value: 0. Options: [0|16|24|32].
                     */
                    int64_t m_pbKeyLen;
                    bool m_pbKeyLenHasBeenSet;

                    /**
                     * SRT FEC settings
                     */
                    SRTFECFullOptions m_fEC;
                    bool m_fECHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_CREATEOUTPUTSRTSETTINGS_H_
