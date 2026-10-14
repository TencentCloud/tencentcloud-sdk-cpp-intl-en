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
                * Configuration message of the created input SRT.
                */
                class CreateInputSRTSettings : public AbstractModel
                {
                public:
                    CreateInputSRTSettings();
                    ~CreateInputSRTSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取SRT mode. Options: [LISTENER|CALLER]. Default value: LISTENER.
                     * @return Mode SRT mode. Options: [LISTENER|CALLER]. Default value: LISTENER.
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置SRT mode. Options: [LISTENER|CALLER]. Default value: LISTENER.
                     * @param _mode SRT mode. Options: [LISTENER|CALLER]. Default value: LISTENER.
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
                     * 获取Stream Id. It can contain upper- and lower-case letters, digits, and special characters (.#!:&,=_-), with a length of 0 to 512. For the specific format, see: https://github.com/Haivision/srt/blob/master/docs/features/access-control.md#standard-keys.	
                     * @return StreamId Stream Id. It can contain upper- and lower-case letters, digits, and special characters (.#!:&,=_-), with a length of 0 to 512. For the specific format, see: https://github.com/Haivision/srt/blob/master/docs/features/access-control.md#standard-keys.	
                     * 
                     */
                    std::string GetStreamId() const;

                    /**
                     * 设置Stream Id. It can contain upper- and lower-case letters, digits, and special characters (.#!:&,=_-), with a length of 0 to 512. For the specific format, see: https://github.com/Haivision/srt/blob/master/docs/features/access-control.md#standard-keys.	
                     * @param _streamId Stream Id. It can contain upper- and lower-case letters, digits, and special characters (.#!:&,=_-), with a length of 0 to 512. For the specific format, see: https://github.com/Haivision/srt/blob/master/docs/features/access-control.md#standard-keys.	
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
                     * 获取Delay. Default value: 0. Unit: ms. Range: [0, 3000].
                     * @return Latency Delay. Default value: 0. Unit: ms. Range: [0, 3000].
                     * 
                     */
                    int64_t GetLatency() const;

                    /**
                     * 设置Delay. Default value: 0. Unit: ms. Range: [0, 3000].
                     * @param _latency Delay. Default value: 0. Unit: ms. Range: [0, 3000].
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
                     * 获取Receive latency. Default value: 120. Unit: ms. Range: [0, 3000].
                     * @return RecvLatency Receive latency. Default value: 120. Unit: ms. Range: [0, 3000].
                     * 
                     */
                    int64_t GetRecvLatency() const;

                    /**
                     * 设置Receive latency. Default value: 120. Unit: ms. Range: [0, 3000].
                     * @param _recvLatency Receive latency. Default value: 120. Unit: ms. Range: [0, 3000].
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
                     * 获取Peer delay. Default value: 0. Unit: ms. Range: [0, 3000].
                     * @return PeerLatency Peer delay. Default value: 0. Unit: ms. Range: [0, 3000].
                     * 
                     */
                    int64_t GetPeerLatency() const;

                    /**
                     * 设置Peer delay. Default value: 0. Unit: ms. Range: [0, 3000].
                     * @param _peerLatency Peer delay. Default value: 0. Unit: ms. Range: [0, 3000].
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
                     * 获取Peer timeout. Default value: 5000 ms. Range: [1000, 10000].
                     * @return PeerIdleTimeout Peer timeout. Default value: 5000 ms. Range: [1000, 10000].
                     * 
                     */
                    int64_t GetPeerIdleTimeout() const;

                    /**
                     * 设置Peer timeout. Default value: 5000 ms. Range: [1000, 10000].
                     * @param _peerIdleTimeout Peer timeout. Default value: 5000 ms. Range: [1000, 10000].
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
                     * 获取Decryption key. Empty by default, which means not encrypted. Only ascii characters are supported. Length range: [10, 79].
                     * @return Passphrase Decryption key. Empty by default, which means not encrypted. Only ascii characters are supported. Length range: [10, 79].
                     * 
                     */
                    std::string GetPassphrase() const;

                    /**
                     * 设置Decryption key. Empty by default, which means not encrypted. Only ascii characters are supported. Length range: [10, 79].
                     * @param _passphrase Decryption key. Empty by default, which means not encrypted. Only ascii characters are supported. Length range: [10, 79].
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
                     * 获取Key length. Default value: 0. Options: [0|16|24|32].
                     * @return PbKeyLen Key length. Default value: 0. Options: [0|16|24|32].
                     * 
                     */
                    int64_t GetPbKeyLen() const;

                    /**
                     * 设置Key length. Default value: 0. Options: [0|16|24|32].
                     * @param _pbKeyLen Key length. Default value: 0. Options: [0|16|24|32].
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
                     * 获取SRT peer address. Required when Mode is CALLER, and can only contain 1 group.
                     * @return SourceAddresses SRT peer address. Required when Mode is CALLER, and can only contain 1 group.
                     * 
                     */
                    std::vector<SRTSourceAddressReq> GetSourceAddresses() const;

                    /**
                     * 设置SRT peer address. Required when Mode is CALLER, and can only contain 1 group.
                     * @param _sourceAddresses SRT peer address. Required when Mode is CALLER, and can only contain 1 group.
                     * 
                     */
                    void SetSourceAddresses(const std::vector<SRTSourceAddressReq>& _sourceAddresses);

                    /**
                     * 判断参数 SourceAddresses 是否已赋值
                     * @return SourceAddresses 是否已赋值
                     * 
                     */
                    bool SourceAddressesHasBeenSet() const;

                    /**
                     * 获取SRT FEC settings
                     * @return FEC SRT FEC settings
                     * 
                     */
                    SRTFECSimpleOptions GetFEC() const;

                    /**
                     * 设置SRT FEC settings
                     * @param _fEC SRT FEC settings
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
                     * SRT mode. Options: [LISTENER|CALLER]. Default value: LISTENER.
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * Stream Id. It can contain upper- and lower-case letters, digits, and special characters (.#!:&,=_-), with a length of 0 to 512. For the specific format, see: https://github.com/Haivision/srt/blob/master/docs/features/access-control.md#standard-keys.	
                     */
                    std::string m_streamId;
                    bool m_streamIdHasBeenSet;

                    /**
                     * Delay. Default value: 0. Unit: ms. Range: [0, 3000].
                     */
                    int64_t m_latency;
                    bool m_latencyHasBeenSet;

                    /**
                     * Receive latency. Default value: 120. Unit: ms. Range: [0, 3000].
                     */
                    int64_t m_recvLatency;
                    bool m_recvLatencyHasBeenSet;

                    /**
                     * Peer delay. Default value: 0. Unit: ms. Range: [0, 3000].
                     */
                    int64_t m_peerLatency;
                    bool m_peerLatencyHasBeenSet;

                    /**
                     * Peer timeout. Default value: 5000 ms. Range: [1000, 10000].
                     */
                    int64_t m_peerIdleTimeout;
                    bool m_peerIdleTimeoutHasBeenSet;

                    /**
                     * Decryption key. Empty by default, which means not encrypted. Only ascii characters are supported. Length range: [10, 79].
                     */
                    std::string m_passphrase;
                    bool m_passphraseHasBeenSet;

                    /**
                     * Key length. Default value: 0. Options: [0|16|24|32].
                     */
                    int64_t m_pbKeyLen;
                    bool m_pbKeyLenHasBeenSet;

                    /**
                     * SRT peer address. Required when Mode is CALLER, and can only contain 1 group.
                     */
                    std::vector<SRTSourceAddressReq> m_sourceAddresses;
                    bool m_sourceAddressesHasBeenSet;

                    /**
                     * SRT FEC settings
                     */
                    SRTFECSimpleOptions m_fEC;
                    bool m_fECHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDC_V20200828_MODEL_CREATEINPUTSRTSETTINGS_H_
