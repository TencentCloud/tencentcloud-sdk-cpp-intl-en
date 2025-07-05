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


namespace TencentCloud
{
    namespace Mdc
    {
        namespace V20200828
        {
            namespace Model
            {
                /**
                * The SRT configuration of the output to create.
                */
                class CreateOutputSrtSettings : public AbstractModel
                {
                public:
                    CreateOutputSrtSettings();
                    ~CreateOutputSrtSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The relay destination address, which is required if `Mode` is `CALLER`. Only one address is allowed.
                     * @return Destinations The relay destination address, which is required if `Mode` is `CALLER`. Only one address is allowed.
                     * 
                     */
                    std::vector<CreateOutputSrtSettingsDestinations> GetDestinations() const;

                    /**
                     * 设置The relay destination address, which is required if `Mode` is `CALLER`. Only one address is allowed.
                     * @param _destinations The relay destination address, which is required if `Mode` is `CALLER`. Only one address is allowed.
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
                     * 获取The stream ID for relay, which can contain 0 to 512 letters, digits, and special characters (.#!:&,=_-).
                     * @return StreamId The stream ID for relay, which can contain 0 to 512 letters, digits, and special characters (.#!:&,=_-).
                     * 
                     */
                    std::string GetStreamId() const;

                    /**
                     * 设置The stream ID for relay, which can contain 0 to 512 letters, digits, and special characters (.#!:&,=_-).
                     * @param _streamId The stream ID for relay, which can contain 0 to 512 letters, digits, and special characters (.#!:&,=_-).
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
                     * 获取The total latency (ms) of SRT relay. Value range: [0, 3000]. Default: 0.
                     * @return Latency The total latency (ms) of SRT relay. Value range: [0, 3000]. Default: 0.
                     * 
                     */
                    int64_t GetLatency() const;

                    /**
                     * 设置The total latency (ms) of SRT relay. Value range: [0, 3000]. Default: 0.
                     * @param _latency The total latency (ms) of SRT relay. Value range: [0, 3000]. Default: 0.
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
                     * 获取The receive latency (ms) of SRT relay. Value range: [0, 3000]. Default: 120.
                     * @return RecvLatency The receive latency (ms) of SRT relay. Value range: [0, 3000]. Default: 120.
                     * 
                     */
                    int64_t GetRecvLatency() const;

                    /**
                     * 设置The receive latency (ms) of SRT relay. Value range: [0, 3000]. Default: 120.
                     * @param _recvLatency The receive latency (ms) of SRT relay. Value range: [0, 3000]. Default: 120.
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
                     * 获取The peer-to-peer latency (ms) of SRT relay. Value range: [0, 3000]. Default: 0.
                     * @return PeerLatency The peer-to-peer latency (ms) of SRT relay. Value range: [0, 3000]. Default: 0.
                     * 
                     */
                    int64_t GetPeerLatency() const;

                    /**
                     * 设置The peer-to-peer latency (ms) of SRT relay. Value range: [0, 3000]. Default: 0.
                     * @param _peerLatency The peer-to-peer latency (ms) of SRT relay. Value range: [0, 3000]. Default: 0.
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
                     * 获取The timeout period (ms) for the SRT relay peer. Value range: [1000, 10000]. Default: 5000.
                     * @return PeerIdleTimeout The timeout period (ms) for the SRT relay peer. Value range: [1000, 10000]. Default: 5000.
                     * 
                     */
                    int64_t GetPeerIdleTimeout() const;

                    /**
                     * 设置The timeout period (ms) for the SRT relay peer. Value range: [1000, 10000]. Default: 5000.
                     * @param _peerIdleTimeout The timeout period (ms) for the SRT relay peer. Value range: [1000, 10000]. Default: 5000.
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
                     * 获取The encryption key for SRT relay, which is empty by default, indicating not to encrypt. Only ASCII codes are allowed. Length: [10, 79].
                     * @return Passphrase The encryption key for SRT relay, which is empty by default, indicating not to encrypt. Only ASCII codes are allowed. Length: [10, 79].
                     * 
                     */
                    std::string GetPassphrase() const;

                    /**
                     * 设置The encryption key for SRT relay, which is empty by default, indicating not to encrypt. Only ASCII codes are allowed. Length: [10, 79].
                     * @param _passphrase The encryption key for SRT relay, which is empty by default, indicating not to encrypt. Only ASCII codes are allowed. Length: [10, 79].
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
                     * 获取The key length for SRT relay. Valid values: 0 (default), 16, 24, 32.
                     * @return PbKeyLen The key length for SRT relay. Valid values: 0 (default), 16, 24, 32.
                     * 
                     */
                    int64_t GetPbKeyLen() const;

                    /**
                     * 设置The key length for SRT relay. Valid values: 0 (default), 16, 24, 32.
                     * @param _pbKeyLen The key length for SRT relay. Valid values: 0 (default), 16, 24, 32.
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
                     * 获取The SRT mode. Valid values: LISTENER, CALLER (default).
                     * @return Mode The SRT mode. Valid values: LISTENER, CALLER (default).
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置The SRT mode. Valid values: LISTENER, CALLER (default).
                     * @param _mode The SRT mode. Valid values: LISTENER, CALLER (default).
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                private:

                    /**
                     * The relay destination address, which is required if `Mode` is `CALLER`. Only one address is allowed.
                     */
                    std::vector<CreateOutputSrtSettingsDestinations> m_destinations;
                    bool m_destinationsHasBeenSet;

                    /**
                     * The stream ID for relay, which can contain 0 to 512 letters, digits, and special characters (.#!:&,=_-).
                     */
                    std::string m_streamId;
                    bool m_streamIdHasBeenSet;

                    /**
                     * The total latency (ms) of SRT relay. Value range: [0, 3000]. Default: 0.
                     */
                    int64_t m_latency;
                    bool m_latencyHasBeenSet;

                    /**
                     * The receive latency (ms) of SRT relay. Value range: [0, 3000]. Default: 120.
                     */
                    int64_t m_recvLatency;
                    bool m_recvLatencyHasBeenSet;

                    /**
                     * The peer-to-peer latency (ms) of SRT relay. Value range: [0, 3000]. Default: 0.
                     */
                    int64_t m_peerLatency;
                    bool m_peerLatencyHasBeenSet;

                    /**
                     * The timeout period (ms) for the SRT relay peer. Value range: [1000, 10000]. Default: 5000.
                     */
                    int64_t m_peerIdleTimeout;
                    bool m_peerIdleTimeoutHasBeenSet;

                    /**
                     * The encryption key for SRT relay, which is empty by default, indicating not to encrypt. Only ASCII codes are allowed. Length: [10, 79].
                     */
                    std::string m_passphrase;
                    bool m_passphraseHasBeenSet;

                    /**
                     * The key length for SRT relay. Valid values: 0 (default), 16, 24, 32.
                     */
                    int64_t m_pbKeyLen;
                    bool m_pbKeyLenHasBeenSet;

                    /**
                     * The SRT mode. Valid values: LISTENER, CALLER (default).
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_CREATEOUTPUTSRTSETTINGS_H_
