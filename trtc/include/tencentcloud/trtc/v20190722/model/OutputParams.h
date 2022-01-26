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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_OUTPUTPARAMS_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_OUTPUTPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * MCU On-Cloud MixTranscoding output parameters
                */
                class OutputParams : public AbstractModel
                {
                public:
                    OutputParams();
                    ~OutputParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Custom live stream ID, which must be different from the ID of relayed stream.
                     * @return StreamId Custom live stream ID, which must be different from the ID of relayed stream.
                     */
                    std::string GetStreamId() const;

                    /**
                     * 设置Custom live stream ID, which must be different from the ID of relayed stream.
                     * @param StreamId Custom live stream ID, which must be different from the ID of relayed stream.
                     */
                    void SetStreamId(const std::string& _streamId);

                    /**
                     * 判断参数 StreamId 是否已赋值
                     * @return StreamId 是否已赋值
                     */
                    bool StreamIdHasBeenSet() const;

                    /**
                     * 获取Value range: [0, 1]. If it is 0, live streams are audio and video; if it is 1, live streams are only audio. Default value: 0.
                     * @return PureAudioStream Value range: [0, 1]. If it is 0, live streams are audio and video; if it is 1, live streams are only audio. Default value: 0.
                     */
                    uint64_t GetPureAudioStream() const;

                    /**
                     * 设置Value range: [0, 1]. If it is 0, live streams are audio and video; if it is 1, live streams are only audio. Default value: 0.
                     * @param PureAudioStream Value range: [0, 1]. If it is 0, live streams are audio and video; if it is 1, live streams are only audio. Default value: 0.
                     */
                    void SetPureAudioStream(const uint64_t& _pureAudioStream);

                    /**
                     * 判断参数 PureAudioStream 是否已赋值
                     * @return PureAudioStream 是否已赋值
                     */
                    bool PureAudioStreamHasBeenSet() const;

                    /**
                     * 获取Prefix of custom recording file names. Please enable the recording feature in the TRTC console first. https://intl.cloud.tencent.com/document/product/647/50768?from_cn_redirect=1
                     * @return RecordId Prefix of custom recording file names. Please enable the recording feature in the TRTC console first. https://intl.cloud.tencent.com/document/product/647/50768?from_cn_redirect=1
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置Prefix of custom recording file names. Please enable the recording feature in the TRTC console first. https://intl.cloud.tencent.com/document/product/647/50768?from_cn_redirect=1
                     * @param RecordId Prefix of custom recording file names. Please enable the recording feature in the TRTC console first. https://intl.cloud.tencent.com/document/product/647/50768?from_cn_redirect=1
                     */
                    void SetRecordId(const std::string& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     */
                    bool RecordIdHasBeenSet() const;

                    /**
                     * 获取Whether to record audio only. Valid values: 0, 1. `0`: no meaning; `1`: records into MP3 files. This parameter is not recommended. Instead, you are advised to create an audio-only recording template in the TRTC console.
                     * @return RecordAudioOnly Whether to record audio only. Valid values: 0, 1. `0`: no meaning; `1`: records into MP3 files. This parameter is not recommended. Instead, you are advised to create an audio-only recording template in the TRTC console.
                     */
                    uint64_t GetRecordAudioOnly() const;

                    /**
                     * 设置Whether to record audio only. Valid values: 0, 1. `0`: no meaning; `1`: records into MP3 files. This parameter is not recommended. Instead, you are advised to create an audio-only recording template in the TRTC console.
                     * @param RecordAudioOnly Whether to record audio only. Valid values: 0, 1. `0`: no meaning; `1`: records into MP3 files. This parameter is not recommended. Instead, you are advised to create an audio-only recording template in the TRTC console.
                     */
                    void SetRecordAudioOnly(const uint64_t& _recordAudioOnly);

                    /**
                     * 判断参数 RecordAudioOnly 是否已赋值
                     * @return RecordAudioOnly 是否已赋值
                     */
                    bool RecordAudioOnlyHasBeenSet() const;

                private:

                    /**
                     * Custom live stream ID, which must be different from the ID of relayed stream.
                     */
                    std::string m_streamId;
                    bool m_streamIdHasBeenSet;

                    /**
                     * Value range: [0, 1]. If it is 0, live streams are audio and video; if it is 1, live streams are only audio. Default value: 0.
                     */
                    uint64_t m_pureAudioStream;
                    bool m_pureAudioStreamHasBeenSet;

                    /**
                     * Prefix of custom recording file names. Please enable the recording feature in the TRTC console first. https://intl.cloud.tencent.com/document/product/647/50768?from_cn_redirect=1
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * Whether to record audio only. Valid values: 0, 1. `0`: no meaning; `1`: records into MP3 files. This parameter is not recommended. Instead, you are advised to create an audio-only recording template in the TRTC console.
                     */
                    uint64_t m_recordAudioOnly;
                    bool m_recordAudioOnlyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_OUTPUTPARAMS_H_
