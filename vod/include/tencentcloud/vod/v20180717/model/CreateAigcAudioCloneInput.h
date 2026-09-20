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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCAUDIOCLONEINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCAUDIOCLONEINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AigcAudioCloneInputFileInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Create AIGC voice clone input information.
                */
                class CreateAigcAudioCloneInput : public AbstractModel
                {
                public:
                    CreateAigcAudioCloneInput();
                    ~CreateAigcAudioCloneInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Original audio file. The model will use the voice type of the audio passed in this parameter as an example to clone the timbre.</p>
                     * @return AudioFileInfo <p>Original audio file. The model will use the voice type of the audio passed in this parameter as an example to clone the timbre.</p>
                     * 
                     */
                    AigcAudioCloneInputFileInfo GetAudioFileInfo() const;

                    /**
                     * 设置<p>Original audio file. The model will use the voice type of the audio passed in this parameter as an example to clone the timbre.</p>
                     * @param _audioFileInfo <p>Original audio file. The model will use the voice type of the audio passed in this parameter as an example to clone the timbre.</p>
                     * 
                     */
                    void SetAudioFileInfo(const AigcAudioCloneInputFileInfo& _audioFileInfo);

                    /**
                     * 判断参数 AudioFileInfo 是否已赋值
                     * @return AudioFileInfo 是否已赋值
                     * 
                     */
                    bool AudioFileInfoHasBeenSet() const;

                    /**
                     * 获取<p>Custom Voice ID.</p>
                     * @return VoiceId <p>Custom Voice ID.</p>
                     * 
                     */
                    std::string GetVoiceId() const;

                    /**
                     * 设置<p>Custom Voice ID.</p>
                     * @param _voiceId <p>Custom Voice ID.</p>
                     * 
                     */
                    void SetVoiceId(const std::string& _voiceId);

                    /**
                     * 判断参数 VoiceId 是否已赋值
                     * @return VoiceId 是否已赋值
                     * 
                     */
                    bool VoiceIdHasBeenSet() const;

                    /**
                     * 获取<p>Clone audition parameter.</p>
                     * @return Text <p>Clone audition parameter.</p>
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置<p>Clone audition parameter.</p>
                     * @param _text <p>Clone audition parameter.</p>
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取<p>Sample audio for voice replication.</p>
                     * @return PromptAudioFileInfo <p>Sample audio for voice replication.</p>
                     * 
                     */
                    AigcAudioCloneInputFileInfo GetPromptAudioFileInfo() const;

                    /**
                     * 设置<p>Sample audio for voice replication.</p>
                     * @param _promptAudioFileInfo <p>Sample audio for voice replication.</p>
                     * 
                     */
                    void SetPromptAudioFileInfo(const AigcAudioCloneInputFileInfo& _promptAudioFileInfo);

                    /**
                     * 判断参数 PromptAudioFileInfo 是否已赋值
                     * @return PromptAudioFileInfo 是否已赋值
                     * 
                     */
                    bool PromptAudioFileInfoHasBeenSet() const;

                    /**
                     * 获取<p>Text content corresponding to the sample audio.</p>
                     * @return PromptText <p>Text content corresponding to the sample audio.</p>
                     * 
                     */
                    std::string GetPromptText() const;

                    /**
                     * 设置<p>Text content corresponding to the sample audio.</p>
                     * @param _promptText <p>Text content corresponding to the sample audio.</p>
                     * 
                     */
                    void SetPromptText(const std::string& _promptText);

                    /**
                     * 判断参数 PromptText 是否已赋值
                     * @return PromptText 是否已赋值
                     * 
                     */
                    bool PromptTextHasBeenSet() const;

                    /**
                     * 获取<p>Pass-through parameter.</p>
                     * @return Payload <p>Pass-through parameter.</p>
                     * 
                     */
                    std::string GetPayload() const;

                    /**
                     * 设置<p>Pass-through parameter.</p>
                     * @param _payload <p>Pass-through parameter.</p>
                     * 
                     */
                    void SetPayload(const std::string& _payload);

                    /**
                     * 判断参数 Payload 是否已赋值
                     * @return Payload 是否已赋值
                     * 
                     */
                    bool PayloadHasBeenSet() const;

                private:

                    /**
                     * <p>Original audio file. The model will use the voice type of the audio passed in this parameter as an example to clone the timbre.</p>
                     */
                    AigcAudioCloneInputFileInfo m_audioFileInfo;
                    bool m_audioFileInfoHasBeenSet;

                    /**
                     * <p>Custom Voice ID.</p>
                     */
                    std::string m_voiceId;
                    bool m_voiceIdHasBeenSet;

                    /**
                     * <p>Clone audition parameter.</p>
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * <p>Sample audio for voice replication.</p>
                     */
                    AigcAudioCloneInputFileInfo m_promptAudioFileInfo;
                    bool m_promptAudioFileInfoHasBeenSet;

                    /**
                     * <p>Text content corresponding to the sample audio.</p>
                     */
                    std::string m_promptText;
                    bool m_promptTextHasBeenSet;

                    /**
                     * <p>Pass-through parameter.</p>
                     */
                    std::string m_payload;
                    bool m_payloadHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCAUDIOCLONEINPUT_H_
