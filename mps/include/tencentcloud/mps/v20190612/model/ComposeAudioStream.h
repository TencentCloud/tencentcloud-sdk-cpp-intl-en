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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSEAUDIOSTREAM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSEAUDIOSTREAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * The audio stream information of a video editing/compositing task.
                */
                class ComposeAudioStream : public AbstractModel
                {
                public:
                    ComposeAudioStream();
                    ~ComposeAudioStream() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The codec of the audio stream. Valid values:
<li>`AAC`: AAC (default), which is used for the MP4 container. </li>
<li>`MP3`: MP3 codec, which is used for the MP3 container. </li>
                     * @return Codec The codec of the audio stream. Valid values:
<li>`AAC`: AAC (default), which is used for the MP4 container. </li>
<li>`MP3`: MP3 codec, which is used for the MP3 container. </li>
                     * 
                     */
                    std::string GetCodec() const;

                    /**
                     * 设置The codec of the audio stream. Valid values:
<li>`AAC`: AAC (default), which is used for the MP4 container. </li>
<li>`MP3`: MP3 codec, which is used for the MP3 container. </li>
                     * @param _codec The codec of the audio stream. Valid values:
<li>`AAC`: AAC (default), which is used for the MP4 container. </li>
<li>`MP3`: MP3 codec, which is used for the MP3 container. </li>
                     * 
                     */
                    void SetCodec(const std::string& _codec);

                    /**
                     * 判断参数 Codec 是否已赋值
                     * @return Codec 是否已赋值
                     * 
                     */
                    bool CodecHasBeenSet() const;

                    /**
                     * 获取The sample rate (Hz) of the audio stream.
<li>16000 (default)</li>
<li>32000</li>
<li>44100</li>
<li>48000</li>
                     * @return SampleRate The sample rate (Hz) of the audio stream.
<li>16000 (default)</li>
<li>32000</li>
<li>44100</li>
<li>48000</li>
                     * 
                     */
                    int64_t GetSampleRate() const;

                    /**
                     * 设置The sample rate (Hz) of the audio stream.
<li>16000 (default)</li>
<li>32000</li>
<li>44100</li>
<li>48000</li>
                     * @param _sampleRate The sample rate (Hz) of the audio stream.
<li>16000 (default)</li>
<li>32000</li>
<li>44100</li>
<li>48000</li>
                     * 
                     */
                    void SetSampleRate(const int64_t& _sampleRate);

                    /**
                     * 判断参数 SampleRate 是否已赋值
                     * @return SampleRate 是否已赋值
                     * 
                     */
                    bool SampleRateHasBeenSet() const;

                    /**
                     * 获取The number of sound channels. Valid values:
u200c<li>`1`: Mono. </li>
<li>`2`: Dual (default). </li>
                     * @return AudioChannel The number of sound channels. Valid values:
u200c<li>`1`: Mono. </li>
<li>`2`: Dual (default). </li>
                     * 
                     */
                    int64_t GetAudioChannel() const;

                    /**
                     * 设置The number of sound channels. Valid values:
u200c<li>`1`: Mono. </li>
<li>`2`: Dual (default). </li>
                     * @param _audioChannel The number of sound channels. Valid values:
u200c<li>`1`: Mono. </li>
<li>`2`: Dual (default). </li>
                     * 
                     */
                    void SetAudioChannel(const int64_t& _audioChannel);

                    /**
                     * 判断参数 AudioChannel 是否已赋值
                     * @return AudioChannel 是否已赋值
                     * 
                     */
                    bool AudioChannelHasBeenSet() const;

                private:

                    /**
                     * The codec of the audio stream. Valid values:
<li>`AAC`: AAC (default), which is used for the MP4 container. </li>
<li>`MP3`: MP3 codec, which is used for the MP3 container. </li>
                     */
                    std::string m_codec;
                    bool m_codecHasBeenSet;

                    /**
                     * The sample rate (Hz) of the audio stream.
<li>16000 (default)</li>
<li>32000</li>
<li>44100</li>
<li>48000</li>
                     */
                    int64_t m_sampleRate;
                    bool m_sampleRateHasBeenSet;

                    /**
                     * The number of sound channels. Valid values:
u200c<li>`1`: Mono. </li>
<li>`2`: Dual (default). </li>
                     */
                    int64_t m_audioChannel;
                    bool m_audioChannelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSEAUDIOSTREAM_H_
