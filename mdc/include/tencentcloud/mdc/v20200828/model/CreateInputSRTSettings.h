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

#ifndef TENCENTCLOUD_MDC_V20200828_MODEL_CREATEINPUTSRTSETTINGS_H_
#define TENCENTCLOUD_MDC_V20200828_MODEL_CREATEINPUTSRTSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdc/v20200828/model/SRTSourceAddressReq.h>


namespace TencentCloud
{
    namespace Mdc
    {
        namespace V20200828
        {
            namespace Model
            {
                /**
                * SRT configuration information of the created input.
                */
                class CreateInputSRTSettings : public AbstractModel
                {
                public:
                    CreateInputSRTSettings();
                    ~CreateInputSRTSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The SRT mode. Valid values: LISTENER (default), CALLER.
                     * @return Mode The SRT mode. Valid values: LISTENER (default), CALLER.
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置The SRT mode. Valid values: LISTENER (default), CALLER.
                     * @param _mode The SRT mode. Valid values: LISTENER (default), CALLER.
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
                     * 获取Stream ID, which can contain 0 to 512 letters, digits, and special characters (.#!:&,=_-).
                     * @return StreamId Stream ID, which can contain 0 to 512 letters, digits, and special characters (.#!:&,=_-).
                     * 
                     */
                    std::string GetStreamId() const;

                    /**
                     * 设置Stream ID, which can contain 0 to 512 letters, digits, and special characters (.#!:&,=_-).
                     * @param _streamId Stream ID, which can contain 0 to 512 letters, digits, and special characters (.#!:&,=_-).
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
                     * 获取Latency in ms. Default value: 0. Value range: [0, 3000].
                     * @return Latency Latency in ms. Default value: 0. Value range: [0, 3000].
                     * 
                     */
                    int64_t GetLatency() const;

                    /**
                     * 设置Latency in ms. Default value: 0. Value range: [0, 3000].
                     * @param _latency Latency in ms. Default value: 0. Value range: [0, 3000].
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
                     * 获取Receive latency in ms. Default value: 120. Value range: [0, 3000].
                     * @return RecvLatency Receive latency in ms. Default value: 120. Value range: [0, 3000].
                     * 
                     */
                    int64_t GetRecvLatency() const;

                    /**
                     * 设置Receive latency in ms. Default value: 120. Value range: [0, 3000].
                     * @param _recvLatency Receive latency in ms. Default value: 120. Value range: [0, 3000].
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
                     * 获取Peer latency in ms. Default value: 0. Value range: [0, 3000].
                     * @return PeerLatency Peer latency in ms. Default value: 0. Value range: [0, 3000].
                     * 
                     */
                    int64_t GetPeerLatency() const;

                    /**
                     * 设置Peer latency in ms. Default value: 0. Value range: [0, 3000].
                     * @param _peerLatency Peer latency in ms. Default value: 0. Value range: [0, 3000].
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
                     * 获取Peer timeout period in ms. Default value: 5000. Value range: [1000, 10000].
                     * @return PeerIdleTimeout Peer timeout period in ms. Default value: 5000. Value range: [1000, 10000].
                     * 
                     */
                    int64_t GetPeerIdleTimeout() const;

                    /**
                     * 设置Peer timeout period in ms. Default value: 5000. Value range: [1000, 10000].
                     * @param _peerIdleTimeout Peer timeout period in ms. Default value: 5000. Value range: [1000, 10000].
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
                     * 获取Decryption key, which is empty by default, indicating not to encrypt. Only ASCII codes can be filled. Length: [10, 79].
                     * @return Passphrase Decryption key, which is empty by default, indicating not to encrypt. Only ASCII codes can be filled. Length: [10, 79].
                     * 
                     */
                    std::string GetPassphrase() const;

                    /**
                     * 设置Decryption key, which is empty by default, indicating not to encrypt. Only ASCII codes can be filled. Length: [10, 79].
                     * @param _passphrase Decryption key, which is empty by default, indicating not to encrypt. Only ASCII codes can be filled. Length: [10, 79].
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
                     * 获取Key length. Default value: 0. Valid values: 0, 16, 24, 32.
                     * @return PbKeyLen Key length. Default value: 0. Valid values: 0, 16, 24, 32.
                     * 
                     */
                    int64_t GetPbKeyLen() const;

                    /**
                     * 设置Key length. Default value: 0. Valid values: 0, 16, 24, 32.
                     * @param _pbKeyLen Key length. Default value: 0. Valid values: 0, 16, 24, 32.
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
                     * 获取The SRT peer address, which is required if `Mode` is `CALLER`. Only one address is allowed.
                     * @return SourceAddresses The SRT peer address, which is required if `Mode` is `CALLER`. Only one address is allowed.
                     * 
                     */
                    std::vector<SRTSourceAddressReq> GetSourceAddresses() const;

                    /**
                     * 设置The SRT peer address, which is required if `Mode` is `CALLER`. Only one address is allowed.
                     * @param _sourceAddresses The SRT peer address, which is required if `Mode` is `CALLER`. Only one address is allowed.
                     * 
                     */
                    void SetSourceAddresses(const std::vector<SRTSourceAddressReq>& _sourceAddresses);

                    /**
                     * 判断参数 SourceAddresses 是否已赋值
                     * @return SourceAddresses 是否已赋值
                     * 
                     */
                    bool SourceAddressesHasBeenSet() const;

                private:

                    /**
                     * The SRT mode. Valid values: LISTENER (default), CALLER.
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * Stream ID, which can contain 0 to 512 letters, digits, and special characters (.#!:&,=_-).
                     */
                    std::string m_streamId;
                    bool m_streamIdHasBeenSet;

                    /**
                     * Latency in ms. Default value: 0. Value range: [0, 3000].
                     */
                    int64_t m_latency;
                    bool m_latencyHasBeenSet;

                    /**
                     * Receive latency in ms. Default value: 120. Value range: [0, 3000].
                     */
                    int64_t m_recvLatency;
                    bool m_recvLatencyHasBeenSet;

                    /**
                     * Peer latency in ms. Default value: 0. Value range: [0, 3000].
                     */
                    int64_t m_peerLatency;
                    bool m_peerLatencyHasBeenSet;

                    /**
                     * Peer timeout period in ms. Default value: 5000. Value range: [1000, 10000].
                     */
                    int64_t m_peerIdleTimeout;
                    bool m_peerIdleTimeoutHasBeenSet;

                    /**
                     * Decryption key, which is empty by default, indicating not to encrypt. Only ASCII codes can be filled. Length: [10, 79].
                     */
                    std::string m_passphrase;
                    bool m_passphraseHasBeenSet;

                    /**
                     * Key length. Default value: 0. Valid values: 0, 16, 24, 32.
                     */
                    int64_t m_pbKeyLen;
                    bool m_pbKeyLenHasBeenSet;

                    /**
                     * The SRT peer address, which is required if `Mode` is `CALLER`. Only one address is allowed.
                     */
                    std::vector<SRTSourceAddressReq> m_sourceAddresses;
                    bool m_sourceAddressesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_CREATEINPUTSRTSETTINGS_H_
