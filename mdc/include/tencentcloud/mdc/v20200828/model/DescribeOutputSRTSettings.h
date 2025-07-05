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


namespace TencentCloud
{
    namespace Mdc
    {
        namespace V20200828
        {
            namespace Model
            {
                /**
                * SRT configuration information of the queried output.
                */
                class DescribeOutputSRTSettings : public AbstractModel
                {
                public:
                    DescribeOutputSRTSettings();
                    ~DescribeOutputSRTSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取A list of the destination addresses for relay. This parameter is valid if `Mode` is `CALLER`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Destinations A list of the destination addresses for relay. This parameter is valid if `Mode` is `CALLER`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<SRTAddressDestination> GetDestinations() const;

                    /**
                     * 设置A list of the destination addresses for relay. This parameter is valid if `Mode` is `CALLER`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _destinations A list of the destination addresses for relay. This parameter is valid if `Mode` is `CALLER`.
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Stream ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return StreamId Stream ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStreamId() const;

                    /**
                     * 设置Stream ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _streamId Stream ID.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Latency.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Latency Latency.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetLatency() const;

                    /**
                     * 设置Latency.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _latency Latency.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Receive latency.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return RecvLatency Receive latency.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRecvLatency() const;

                    /**
                     * 设置Receive latency.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _recvLatency Receive latency.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Peer latency.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return PeerLatency Peer latency.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetPeerLatency() const;

                    /**
                     * 设置Peer latency.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _peerLatency Peer latency.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Peer idle timeout period.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return PeerIdleTimeout Peer idle timeout period.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetPeerIdleTimeout() const;

                    /**
                     * 设置Peer idle timeout period.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _peerIdleTimeout Peer idle timeout period.
Note: this field may return null, indicating that no valid values can be obtained.
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
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Passphrase Encryption key.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPassphrase() const;

                    /**
                     * 设置Encryption key.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _passphrase Encryption key.
Note: this field may return null, indicating that no valid values can be obtained.
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
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return PbKeyLen Encryption key length.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetPbKeyLen() const;

                    /**
                     * 设置Encryption key length.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _pbKeyLen Encryption key length.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取The SRT mode.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Mode The SRT mode.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置The SRT mode.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _mode The SRT mode.
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取The server’s listen address, which is valid if `Mode` is `LISTENER`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return SourceAddresses The server’s listen address, which is valid if `Mode` is `LISTENER`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<OutputSRTSourceAddressResp> GetSourceAddresses() const;

                    /**
                     * 设置The server’s listen address, which is valid if `Mode` is `LISTENER`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _sourceAddresses The server’s listen address, which is valid if `Mode` is `LISTENER`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSourceAddresses(const std::vector<OutputSRTSourceAddressResp>& _sourceAddresses);

                    /**
                     * 判断参数 SourceAddresses 是否已赋值
                     * @return SourceAddresses 是否已赋值
                     * 
                     */
                    bool SourceAddressesHasBeenSet() const;

                private:

                    /**
                     * A list of the destination addresses for relay. This parameter is valid if `Mode` is `CALLER`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<SRTAddressDestination> m_destinations;
                    bool m_destinationsHasBeenSet;

                    /**
                     * Stream ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_streamId;
                    bool m_streamIdHasBeenSet;

                    /**
                     * Latency.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_latency;
                    bool m_latencyHasBeenSet;

                    /**
                     * Receive latency.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_recvLatency;
                    bool m_recvLatencyHasBeenSet;

                    /**
                     * Peer latency.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_peerLatency;
                    bool m_peerLatencyHasBeenSet;

                    /**
                     * Peer idle timeout period.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_peerIdleTimeout;
                    bool m_peerIdleTimeoutHasBeenSet;

                    /**
                     * Encryption key.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_passphrase;
                    bool m_passphraseHasBeenSet;

                    /**
                     * Encryption key length.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_pbKeyLen;
                    bool m_pbKeyLenHasBeenSet;

                    /**
                     * The SRT mode.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * The server’s listen address, which is valid if `Mode` is `LISTENER`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<OutputSRTSourceAddressResp> m_sourceAddresses;
                    bool m_sourceAddressesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_DESCRIBEOUTPUTSRTSETTINGS_H_
