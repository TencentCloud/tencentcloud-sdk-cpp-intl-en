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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_AUDIOTEMPLATEINFO_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_AUDIOTEMPLATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Audio stream configuration parameters.
                */
                class AudioTemplateInfo : public AbstractModel
                {
                public:
                    AudioTemplateInfo();
                    ~AudioTemplateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Encoding format for audio streams. optional values:.
<li>libfdk_aac.</li>
                     * @return Codec Encoding format for audio streams. optional values:.
<li>libfdk_aac.</li>
                     * 
                     */
                    std::string GetCodec() const;

                    /**
                     * 设置Encoding format for audio streams. optional values:.
<li>libfdk_aac.</li>
                     * @param _codec Encoding format for audio streams. optional values:.
<li>libfdk_aac.</li>
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
                     * 获取Audio channel quantity. valid values: <li>2: dual-channel.</li> default value: 2.
                     * @return AudioChannel Audio channel quantity. valid values: <li>2: dual-channel.</li> default value: 2.
                     * 
                     */
                    uint64_t GetAudioChannel() const;

                    /**
                     * 设置Audio channel quantity. valid values: <li>2: dual-channel.</li> default value: 2.
                     * @param _audioChannel Audio channel quantity. valid values: <li>2: dual-channel.</li> default value: 2.
                     * 
                     */
                    void SetAudioChannel(const uint64_t& _audioChannel);

                    /**
                     * 判断参数 AudioChannel 是否已赋值
                     * @return AudioChannel 是否已赋值
                     * 
                     */
                    bool AudioChannelHasBeenSet() const;

                private:

                    /**
                     * Encoding format for audio streams. optional values:.
<li>libfdk_aac.</li>
                     */
                    std::string m_codec;
                    bool m_codecHasBeenSet;

                    /**
                     * Audio channel quantity. valid values: <li>2: dual-channel.</li> default value: 2.
                     */
                    uint64_t m_audioChannel;
                    bool m_audioChannelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_AUDIOTEMPLATEINFO_H_
