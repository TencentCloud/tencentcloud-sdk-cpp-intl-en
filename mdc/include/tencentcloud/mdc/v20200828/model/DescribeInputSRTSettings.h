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

#ifndef TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBEINPUTSRTSETTINGS_H_
#define TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBEINPUTSRTSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdc/v20200828/model/SRTSourceAddressResp.h>
#include <tencentcloud/mdc/v20200828/model/SRTFECSimpleOptions.h>


namespace TencentCloud
{
    namespace Mdc
    {
        namespace V20200828
        {
            namespace Model
            {
                /**
                * Query the input SRT configuration information.
                */
                class DescribeInputSRTSettings : public AbstractModel
                {
                public:
                    DescribeInputSRTSettings();
                    ~DescribeInputSRTSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Decryption key.
                     * @return Passphrase Decryption key.
                     * 
                     */
                    std::string GetPassphrase() const;

                    /**
                     * 设置Decryption key.
                     * @param _passphrase Decryption key.
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
                     * 获取Key length.
                     * @return PbKeyLen Key length.
                     * 
                     */
                    int64_t GetPbKeyLen() const;

                    /**
                     * 设置Key length.
                     * @param _pbKeyLen Key length.
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
                     * 获取SRT peer address.
                     * @return SourceAddresses SRT peer address.
                     * 
                     */
                    std::vector<SRTSourceAddressResp> GetSourceAddresses() const;

                    /**
                     * 设置SRT peer address.
                     * @param _sourceAddresses SRT peer address.
                     * 
                     */
                    void SetSourceAddresses(const std::vector<SRTSourceAddressResp>& _sourceAddresses);

                    /**
                     * 判断参数 SourceAddresses 是否已赋值
                     * @return SourceAddresses 是否已赋值
                     * 
                     */
                    bool SourceAddressesHasBeenSet() const;

                    /**
                     * 获取FEC settings
                     * @return FEC FEC settings
                     * 
                     */
                    SRTFECSimpleOptions GetFEC() const;

                    /**
                     * 设置FEC settings
                     * @param _fEC FEC settings
                     * 
                     */
                    void SetFEC(const SRTFECSimpleOptions& _fEC);

                    /**
                     * 判断参数 FEC 是否已赋值
                     * @return FEC 是否已赋值
                     * 
                     */
                    bool FECHasBeenSet() const;

                private:

                    /**
                     * SRT mode.
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

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
                     * Decryption key.
                     */
                    std::string m_passphrase;
                    bool m_passphraseHasBeenSet;

                    /**
                     * Key length.
                     */
                    int64_t m_pbKeyLen;
                    bool m_pbKeyLenHasBeenSet;

                    /**
                     * SRT peer address.
                     */
                    std::vector<SRTSourceAddressResp> m_sourceAddresses;
                    bool m_sourceAddressesHasBeenSet;

                    /**
                     * FEC settings
                     */
                    SRTFECSimpleOptions m_fEC;
                    bool m_fECHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBEINPUTSRTSETTINGS_H_
