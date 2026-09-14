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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AUDIOTEMPLATEINFOFORUPDATE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AUDIOTEMPLATEINFOFORUPDATE_H_

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
                * Audio stream configuration parameters
                */
                class AudioTemplateInfoForUpdate : public AbstractModel
                {
                public:
                    AudioTemplateInfoForUpdate();
                    ~AudioTemplateInfoForUpdate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Codec 
                     * 
                     */
                    std::string GetCodec() const;

                    /**
                     * 设置
                     * @param _codec 
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
                     * 获取
                     * @return Bitrate 
                     * 
                     */
                    int64_t GetBitrate() const;

                    /**
                     * 设置
                     * @param _bitrate 
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
                     * 获取
                     * @return SampleRate 
                     * 
                     */
                    uint64_t GetSampleRate() const;

                    /**
                     * 设置
                     * @param _sampleRate 
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
                     * 获取
                     * @return AudioChannel 
                     * 
                     */
                    int64_t GetAudioChannel() const;

                    /**
                     * 设置
                     * @param _audioChannel 
                     * 
                     */
                    void SetAudioChannel(const int64_t& _audioChannel);

                    /**
                     * 判断参数 AudioChannel 是否已赋值
                     * @return AudioChannel 是否已赋值
                     * 
                     */
                    bool AudioChannelHasBeenSet() const;

                    /**
                     * 获取
                     * @return StreamSelects 
                     * 
                     */
                    std::vector<int64_t> GetStreamSelects() const;

                    /**
                     * 设置
                     * @param _streamSelects 
                     * 
                     */
                    void SetStreamSelects(const std::vector<int64_t>& _streamSelects);

                    /**
                     * 判断参数 StreamSelects 是否已赋值
                     * @return StreamSelects 是否已赋值
                     * 
                     */
                    bool StreamSelectsHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_codec;
                    bool m_codecHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_sampleRate;
                    bool m_sampleRateHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_audioChannel;
                    bool m_audioChannelHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<int64_t> m_streamSelects;
                    bool m_streamSelectsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AUDIOTEMPLATEINFOFORUPDATE_H_
