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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_AUDIOFORMAT_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_AUDIOFORMAT_H_

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
                * Format of TTS audio output.
                */
                class AudioFormat : public AbstractModel
                {
                public:
                    AudioFormat();
                    ~AudioFormat() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Generated audio format.

-TextToSpeechSSE streaming API.

Supports pcm. default: pcm.

-TextToSpeech non-streaming API.

Supports pcm, wav, mp3. default: pcm.
                     * @return Format Generated audio format.

-TextToSpeechSSE streaming API.

Supports pcm. default: pcm.

-TextToSpeech non-streaming API.

Supports pcm, wav, mp3. default: pcm.
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置Generated audio format.

-TextToSpeechSSE streaming API.

Supports pcm. default: pcm.

-TextToSpeech non-streaming API.

Supports pcm, wav, mp3. default: pcm.
                     * @param _format Generated audio format.

-TextToSpeechSSE streaming API.

Supports pcm. default: pcm.

-TextToSpeech non-streaming API.

Supports pcm, wav, mp3. default: pcm.
                     * 
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                    /**
                     * 获取Generated audio sample rate. default 24000.
Selectable.
- 16000
- 24000 
                     * @return SampleRate Generated audio sample rate. default 24000.
Selectable.
- 16000
- 24000 
                     * 
                     */
                    uint64_t GetSampleRate() const;

                    /**
                     * 设置Generated audio sample rate. default 24000.
Selectable.
- 16000
- 24000 
                     * @param _sampleRate Generated audio sample rate. default 24000.
Selectable.
- 16000
- 24000 
                     * 
                     */
                    void SetSampleRate(const uint64_t& _sampleRate);

                    /**
                     * 判断参数 SampleRate 是否已赋值
                     * @return SampleRate 是否已赋值
                     * 
                     */
                    bool SampleRateHasBeenSet() const;

                    /**
                     * 获取MP3 bitrate (kbps), only applicable to mp3 format. can choose: `64`, `128`, `192`, `256`. default: `128`.
                     * @return Bitrate MP3 bitrate (kbps), only applicable to mp3 format. can choose: `64`, `128`, `192`, `256`. default: `128`.
                     * 
                     */
                    uint64_t GetBitrate() const;

                    /**
                     * 设置MP3 bitrate (kbps), only applicable to mp3 format. can choose: `64`, `128`, `192`, `256`. default: `128`.
                     * @param _bitrate MP3 bitrate (kbps), only applicable to mp3 format. can choose: `64`, `128`, `192`, `256`. default: `128`.
                     * 
                     */
                    void SetBitrate(const uint64_t& _bitrate);

                    /**
                     * 判断参数 Bitrate 是否已赋值
                     * @return Bitrate 是否已赋值
                     * 
                     */
                    bool BitrateHasBeenSet() const;

                private:

                    /**
                     * Generated audio format.

-TextToSpeechSSE streaming API.

Supports pcm. default: pcm.

-TextToSpeech non-streaming API.

Supports pcm, wav, mp3. default: pcm.
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * Generated audio sample rate. default 24000.
Selectable.
- 16000
- 24000 
                     */
                    uint64_t m_sampleRate;
                    bool m_sampleRateHasBeenSet;

                    /**
                     * MP3 bitrate (kbps), only applicable to mp3 format. can choose: `64`, `128`, `192`, `256`. default: `128`.
                     */
                    uint64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_AUDIOFORMAT_H_
