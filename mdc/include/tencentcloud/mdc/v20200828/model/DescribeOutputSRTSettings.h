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

#ifndef TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBEOUTPUTSRTSETTINGS_H_
#define TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBEOUTPUTSRTSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdc/v20200828/model/SRTAddressDestination.h>
#include <tencentcloud/mdc/v20200828/model/OutputSRTSourceAddressResp.h>
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
                * Query the output SRT configuration information.
                */
                class DescribeOutputSRTSettings : public AbstractModel
                {
                public:
                    DescribeOutputSRTSettings();
                    ~DescribeOutputSRTSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Destination address list. Used when the SRT mode is CALLER.
                     * @return Destinations Destination address list. Used when the SRT mode is CALLER.
                     * 
                     */
                    std::vector<SRTAddressDestination> GetDestinations() const;

                    /**
                     * 设置Destination address list. Used when the SRT mode is CALLER.
                     * @param _destinations Destination address list. Used when the SRT mode is CALLER.
                     * 
                     */
                    void SetDestinations(const std::vector<SRTAddressDestination>& _destinations);

                    /**
                     * 判断参数 Destinations 是否已赋值
                     * @return Destinations 是否已赋值
                     * 
                     */
                    bool DestinationsHasBeenSet() const;

                    /**
                     * 获取Stream Id.
                     * @return StreamId Stream Id.
                     * 
                     */
                    std::string GetStreamId() const;

                    /**
                     * 设置Stream Id.
                     * @param _streamId Stream Id.
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
                     * 获取Delay.
                     * @return Latency Delay.
                     * 
                     */
                    int64_t GetLatency() const;

                    /**
                     * 设置Delay.
                     * @param _latency Delay.
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
                     * 获取Receive delay.
                     * @return RecvLatency Receive delay.
                     * 
                     */
                    int64_t GetRecvLatency() const;

                    /**
                     * 设置Receive delay.
                     * @param _recvLatency Receive delay.
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
                     * 获取Peer delay.
                     * @return PeerLatency Peer delay.
                     * 
                     */
                    int64_t GetPeerLatency() const;

                    /**
                     * 设置Peer delay.
                     * @param _peerLatency Peer delay.
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
                     * 获取Idle timeout period of the peer.
                     * @return PeerIdleTimeout Idle timeout period of the peer.
                     * 
                     */
                    int64_t GetPeerIdleTimeout() const;

                    /**
                     * 设置Idle timeout period of the peer.
                     * @param _peerIdleTimeout Idle timeout period of the peer.
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
                     * 获取Encryption key.
                     * @return Passphrase Encryption key.
                     * 
                     */
                    std::string GetPassphrase() const;

                    /**
                     * 设置Encryption key.
                     * @param _passphrase Encryption key.
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
                     * 获取Encryption key length.
                     * @return PbKeyLen Encryption key length.
                     * 
                     */
                    int64_t GetPbKeyLen() const;

                    /**
                     * 设置Encryption key length.
                     * @param _pbKeyLen Encryption key length.
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
                     * 获取SRT mode.
                     * @return Mode SRT mode.
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置SRT mode.
                     * @param _mode SRT mode.
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
                     * 获取Server listening address, used when the SRT mode is LISTENER.
                     * @return SourceAddresses Server listening address, used when the SRT mode is LISTENER.
                     * 
                     */
                    std::vector<OutputSRTSourceAddressResp> GetSourceAddresses() const;

                    /**
                     * 设置Server listening address, used when the SRT mode is LISTENER.
                     * @param _sourceAddresses Server listening address, used when the SRT mode is LISTENER.
                     * 
                     */
                    void SetSourceAddresses(const std::vector<OutputSRTSourceAddressResp>& _sourceAddresses);

                    /**
                     * 判断参数 SourceAddresses 是否已赋值
                     * @return SourceAddresses 是否已赋值
                     * 
                     */
                    bool SourceAddressesHasBeenSet() const;

                    /**
                     * 获取SRT FEC configuration
                     * @return FEC SRT FEC configuration
                     * 
                     */
                    SRTFECFullOptions GetFEC() const;

                    /**
                     * 设置SRT FEC configuration
                     * @param _fEC SRT FEC configuration
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
                     * Destination address list. Used when the SRT mode is CALLER.
                     */
                    std::vector<SRTAddressDestination> m_destinations;
                    bool m_destinationsHasBeenSet;

                    /**
                     * Stream Id.
                     */
                    std::string m_streamId;
                    bool m_streamIdHasBeenSet;

                    /**
                     * Delay.
                     */
                    int64_t m_latency;
                    bool m_latencyHasBeenSet;

                    /**
                     * Receive delay.
                     */
                    int64_t m_recvLatency;
                    bool m_recvLatencyHasBeenSet;

                    /**
                     * Peer delay.
                     */
                    int64_t m_peerLatency;
                    bool m_peerLatencyHasBeenSet;

                    /**
                     * Idle timeout period of the peer.
                     */
                    int64_t m_peerIdleTimeout;
                    bool m_peerIdleTimeoutHasBeenSet;

                    /**
                     * Encryption key.
                     */
                    std::string m_passphrase;
                    bool m_passphraseHasBeenSet;

                    /**
                     * Encryption key length.
                     */
                    int64_t m_pbKeyLen;
                    bool m_pbKeyLenHasBeenSet;

                    /**
                     * SRT mode.
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * Server listening address, used when the SRT mode is LISTENER.
                     */
                    std::vector<OutputSRTSourceAddressResp> m_sourceAddresses;
                    bool m_sourceAddressesHasBeenSet;

                    /**
                     * SRT FEC configuration
                     */
                    SRTFECFullOptions m_fEC;
                    bool m_fECHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBEOUTPUTSRTSETTINGS_H_
