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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAAUDIOSTREAMITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAAUDIOSTREAMITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Audio stream information of VOD files
                */
                class MediaAudioStreamItem : public AbstractModel
                {
                public:
                    MediaAudioStreamItem();
                    ~MediaAudioStreamItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Audio stream bitrate, in bps.</p>
                     * @return Bitrate <p>Audio stream bitrate, in bps.</p>
                     * 
                     */
                    int64_t GetBitrate() const;

                    /**
                     * 设置<p>Audio stream bitrate, in bps.</p>
                     * @param _bitrate <p>Audio stream bitrate, in bps.</p>
                     * 
                     */
                    void SetBitrate(const int64_t& _bitrate);

                    /**
                     * 判断参数 Bitrate 是否已赋值
                     * @return Bitrate 是否已赋值
                     * 
                     */
                    bool BitrateHasBeenSet() const;

                    /**
                     * 获取<p>Sampling rate of the audio stream. Unit: hz.</p>
                     * @return SamplingRate <p>Sampling rate of the audio stream. Unit: hz.</p>
                     * 
                     */
                    int64_t GetSamplingRate() const;

                    /**
                     * 设置<p>Sampling rate of the audio stream. Unit: hz.</p>
                     * @param _samplingRate <p>Sampling rate of the audio stream. Unit: hz.</p>
                     * 
                     */
                    void SetSamplingRate(const int64_t& _samplingRate);

                    /**
                     * 判断参数 SamplingRate 是否已赋值
                     * @return SamplingRate 是否已赋值
                     * 
                     */
                    bool SamplingRateHasBeenSet() const;

                    /**
                     * 获取<p>Audio stream encoding format, for example, aac.</p>
                     * @return Codec <p>Audio stream encoding format, for example, aac.</p>
                     * 
                     */
                    std::string GetCodec() const;

                    /**
                     * 设置<p>Audio stream encoding format, for example, aac.</p>
                     * @param _codec <p>Audio stream encoding format, for example, aac.</p>
                     * 
                     */
                    void SetCodec(const std::string& _codec);

                    /**
                     * 判断参数 Codec 是否已赋值
                     * @return Codec 是否已赋值
                     * 
                     */
                    bool CodecHasBeenSet() const;

                private:

                    /**
                     * <p>Audio stream bitrate, in bps.</p>
                     */
                    int64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * <p>Sampling rate of the audio stream. Unit: hz.</p>
                     */
                    int64_t m_samplingRate;
                    bool m_samplingRateHasBeenSet;

                    /**
                     * <p>Audio stream encoding format, for example, aac.</p>
                     */
                    std::string m_codec;
                    bool m_codecHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAAUDIOSTREAMITEM_H_
