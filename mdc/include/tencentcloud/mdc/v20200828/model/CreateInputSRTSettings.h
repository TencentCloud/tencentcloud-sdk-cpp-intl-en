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
                     * 获取Stream ID, which can contain 0 to 512 letters, digits, and special characters (.#!:&,=_-).
                     * @return StreamId Stream ID, which can contain 0 to 512 letters, digits, and special characters (.#!:&,=_-).
                     */
                    std::string GetStreamId() const;

                    /**
                     * 设置Stream ID, which can contain 0 to 512 letters, digits, and special characters (.#!:&,=_-).
                     * @param StreamId Stream ID, which can contain 0 to 512 letters, digits, and special characters (.#!:&,=_-).
                     */
                    void SetStreamId(const std::string& _streamId);

                    /**
                     * 判断参数 StreamId 是否已赋值
                     * @return StreamId 是否已赋值
                     */
                    bool StreamIdHasBeenSet() const;

                    /**
                     * 获取Latency in ms. Default value: 0. Value range: [0, 3000].
                     * @return Latency Latency in ms. Default value: 0. Value range: [0, 3000].
                     */
                    int64_t GetLatency() const;

                    /**
                     * 设置Latency in ms. Default value: 0. Value range: [0, 3000].
                     * @param Latency Latency in ms. Default value: 0. Value range: [0, 3000].
                     */
                    void SetLatency(const int64_t& _latency);

                    /**
                     * 判断参数 Latency 是否已赋值
                     * @return Latency 是否已赋值
                     */
                    bool LatencyHasBeenSet() const;

                    /**
                     * 获取Receive latency in ms. Default value: 120. Value range: [0, 3000].
                     * @return RecvLatency Receive latency in ms. Default value: 120. Value range: [0, 3000].
                     */
                    int64_t GetRecvLatency() const;

                    /**
                     * 设置Receive latency in ms. Default value: 120. Value range: [0, 3000].
                     * @param RecvLatency Receive latency in ms. Default value: 120. Value range: [0, 3000].
                     */
                    void SetRecvLatency(const int64_t& _recvLatency);

                    /**
                     * 判断参数 RecvLatency 是否已赋值
                     * @return RecvLatency 是否已赋值
                     */
                    bool RecvLatencyHasBeenSet() const;

                    /**
                     * 获取Peer latency in ms. Default value: 0. Value range: [0, 3000].
                     * @return PeerLatency Peer latency in ms. Default value: 0. Value range: [0, 3000].
                     */
                    int64_t GetPeerLatency() const;

                    /**
                     * 设置Peer latency in ms. Default value: 0. Value range: [0, 3000].
                     * @param PeerLatency Peer latency in ms. Default value: 0. Value range: [0, 3000].
                     */
                    void SetPeerLatency(const int64_t& _peerLatency);

                    /**
                     * 判断参数 PeerLatency 是否已赋值
                     * @return PeerLatency 是否已赋值
                     */
                    bool PeerLatencyHasBeenSet() const;

                    /**
                     * 获取Peer timeout period in ms. Default value: 5000. Value range: [1000, 10000].
                     * @return PeerIdleTimeout Peer timeout period in ms. Default value: 5000. Value range: [1000, 10000].
                     */
                    int64_t GetPeerIdleTimeout() const;

                    /**
                     * 设置Peer timeout period in ms. Default value: 5000. Value range: [1000, 10000].
                     * @param PeerIdleTimeout Peer timeout period in ms. Default value: 5000. Value range: [1000, 10000].
                     */
                    void SetPeerIdleTimeout(const int64_t& _peerIdleTimeout);

                    /**
                     * 判断参数 PeerIdleTimeout 是否已赋值
                     * @return PeerIdleTimeout 是否已赋值
                     */
                    bool PeerIdleTimeoutHasBeenSet() const;

                    /**
                     * 获取Decryption key, which is empty by default, indicating not to encrypt. Only ASCII codes can be filled. Length: [10, 79].
                     * @return Passphrase Decryption key, which is empty by default, indicating not to encrypt. Only ASCII codes can be filled. Length: [10, 79].
                     */
                    std::string GetPassphrase() const;

                    /**
                     * 设置Decryption key, which is empty by default, indicating not to encrypt. Only ASCII codes can be filled. Length: [10, 79].
                     * @param Passphrase Decryption key, which is empty by default, indicating not to encrypt. Only ASCII codes can be filled. Length: [10, 79].
                     */
                    void SetPassphrase(const std::string& _passphrase);

                    /**
                     * 判断参数 Passphrase 是否已赋值
                     * @return Passphrase 是否已赋值
                     */
                    bool PassphraseHasBeenSet() const;

                    /**
                     * 获取Key length. Default value: 0. Valid values: 0, 16, 24, 32.
                     * @return PbKeyLen Key length. Default value: 0. Valid values: 0, 16, 24, 32.
                     */
                    int64_t GetPbKeyLen() const;

                    /**
                     * 设置Key length. Default value: 0. Valid values: 0, 16, 24, 32.
                     * @param PbKeyLen Key length. Default value: 0. Valid values: 0, 16, 24, 32.
                     */
                    void SetPbKeyLen(const int64_t& _pbKeyLen);

                    /**
                     * 判断参数 PbKeyLen 是否已赋值
                     * @return PbKeyLen 是否已赋值
                     */
                    bool PbKeyLenHasBeenSet() const;

                private:

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_CREATEINPUTSRTSETTINGS_H_
