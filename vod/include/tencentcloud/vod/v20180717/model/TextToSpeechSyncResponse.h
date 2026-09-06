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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_TEXTTOSPEECHSYNCRESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_TEXTTOSPEECHSYNCRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * TextToSpeechSync response structure.
                */
                class TextToSpeechSyncResponse : public AbstractModel
                {
                public:
                    TextToSpeechSyncResponse();
                    ~TextToSpeechSyncResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>base64-encoded synthetic audio in wav format.</p>
                     * @return AudioData <p>base64-encoded synthetic audio in wav format.</p>
                     * 
                     */
                    std::string GetAudioData() const;

                    /**
                     * 判断参数 AudioData 是否已赋值
                     * @return AudioData 是否已赋值
                     * 
                     */
                    bool AudioDataHasBeenSet() const;

                    /**
                     * 获取<p>Synthetic audio URL. It is valid for 24 hours.</p>
                     * @return AudioUrl <p>Synthetic audio URL. It is valid for 24 hours.</p>
                     * 
                     */
                    std::string GetAudioUrl() const;

                    /**
                     * 判断参数 AudioUrl 是否已赋值
                     * @return AudioUrl 是否已赋值
                     * 
                     */
                    bool AudioUrlHasBeenSet() const;

                    /**
                     * 获取<p>Extended information in the format of a JSON string. </p><p>duration: Duration of the resulting audio, in seconds.</p>
                     * @return ExtInfo <p>Extended information in the format of a JSON string. </p><p>duration: Duration of the resulting audio, in seconds.</p>
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 判断参数 ExtInfo 是否已赋值
                     * @return ExtInfo 是否已赋值
                     * 
                     */
                    bool ExtInfoHasBeenSet() const;

                private:

                    /**
                     * <p>base64-encoded synthetic audio in wav format.</p>
                     */
                    std::string m_audioData;
                    bool m_audioDataHasBeenSet;

                    /**
                     * <p>Synthetic audio URL. It is valid for 24 hours.</p>
                     */
                    std::string m_audioUrl;
                    bool m_audioUrlHasBeenSet;

                    /**
                     * <p>Extended information in the format of a JSON string. </p><p>duration: Duration of the resulting audio, in seconds.</p>
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_TEXTTOSPEECHSYNCRESPONSE_H_
