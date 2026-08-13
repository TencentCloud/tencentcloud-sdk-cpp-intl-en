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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CLONEVOICEREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CLONEVOICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/VoiceProfile.h>
#include <tencentcloud/mps/v20190612/model/SyncDubbingOutputOption.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * CloneVoice request structure.
                */
                class CloneVoiceRequest : public AbstractModel
                {
                public:
                    CloneVoiceRequest();
                    ~CloneVoiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Clone audio base64 encoding</p>
                     * @return AudioData <p>Clone audio base64 encoding</p>
                     * 
                     */
                    std::string GetAudioData() const;

                    /**
                     * 设置<p>Clone audio base64 encoding</p>
                     * @param _audioData <p>Clone audio base64 encoding</p>
                     * 
                     */
                    void SetAudioData(const std::string& _audioData);

                    /**
                     * 判断参数 AudioData 是否已赋值
                     * @return AudioData 是否已赋值
                     * 
                     */
                    bool AudioDataHasBeenSet() const;

                    /**
                     * 获取<p>Cloning audio URL. Valid when AudioData is empty.</p>
                     * @return AudioUrl <p>Cloning audio URL. Valid when AudioData is empty.</p>
                     * 
                     */
                    std::string GetAudioUrl() const;

                    /**
                     * 设置<p>Cloning audio URL. Valid when AudioData is empty.</p>
                     * @param _audioUrl <p>Cloning audio URL. Valid when AudioData is empty.</p>
                     * 
                     */
                    void SetAudioUrl(const std::string& _audioUrl);

                    /**
                     * 判断参数 AudioUrl 是否已赋值
                     * @return AudioUrl 是否已赋值
                     * 
                     */
                    bool AudioUrlHasBeenSet() const;

                    /**
                     * 获取<p>Cloning audio language. The default language is Chinese. Currently supported languages are the same as those for Text To Speech (TTS) TextLang.</p>
                     * @return AudioLang <p>Cloning audio language. The default language is Chinese. Currently supported languages are the same as those for Text To Speech (TTS) TextLang.</p>
                     * 
                     */
                    std::string GetAudioLang() const;

                    /**
                     * 设置<p>Cloning audio language. The default language is Chinese. Currently supported languages are the same as those for Text To Speech (TTS) TextLang.</p>
                     * @param _audioLang <p>Cloning audio language. The default language is Chinese. Currently supported languages are the same as those for Text To Speech (TTS) TextLang.</p>
                     * 
                     */
                    void SetAudioLang(const std::string& _audioLang);

                    /**
                     * 判断参数 AudioLang 是否已赋值
                     * @return AudioLang 是否已赋值
                     * 
                     */
                    bool AudioLangHasBeenSet() const;

                    /**
                     * 获取<p>Voice attribute. Voice type querying and match usage.</p>
                     * @return VoiceProfile <p>Voice attribute. Voice type querying and match usage.</p>
                     * 
                     */
                    VoiceProfile GetVoiceProfile() const;

                    /**
                     * 设置<p>Voice attribute. Voice type querying and match usage.</p>
                     * @param _voiceProfile <p>Voice attribute. Voice type querying and match usage.</p>
                     * 
                     */
                    void SetVoiceProfile(const VoiceProfile& _voiceProfile);

                    /**
                     * 判断参数 VoiceProfile 是否已赋值
                     * @return VoiceProfile 是否已赋值
                     * 
                     */
                    bool VoiceProfileHasBeenSet() const;

                    /**
                     * 获取<p>Audition text</p>
                     * @return Text <p>Audition text</p>
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置<p>Audition text</p>
                     * @param _text <p>Audition text</p>
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
                     * 获取<p>Language of the audition text, by default if left blank, auto-detection. Current supported languages are the same as Text To Speech.</p>
                     * @return TextLang <p>Language of the audition text, by default if left blank, auto-detection. Current supported languages are the same as Text To Speech.</p>
                     * 
                     */
                    std::string GetTextLang() const;

                    /**
                     * 设置<p>Language of the audition text, by default if left blank, auto-detection. Current supported languages are the same as Text To Speech.</p>
                     * @param _textLang <p>Language of the audition text, by default if left blank, auto-detection. Current supported languages are the same as Text To Speech.</p>
                     * 
                     */
                    void SetTextLang(const std::string& _textLang);

                    /**
                     * 判断参数 TextLang 是否已赋值
                     * @return TextLang 是否已赋值
                     * 
                     */
                    bool TextLangHasBeenSet() const;

                    /**
                     * 获取<p>Output parameters. Specifies the output audio format, etc. The default output audio format is base64.</p>
                     * @return Output <p>Output parameters. Specifies the output audio format, etc. The default output audio format is base64.</p>
                     * 
                     */
                    SyncDubbingOutputOption GetOutput() const;

                    /**
                     * 设置<p>Output parameters. Specifies the output audio format, etc. The default output audio format is base64.</p>
                     * @param _output <p>Output parameters. Specifies the output audio format, etc. The default output audio format is base64.</p>
                     * 
                     */
                    void SetOutput(const SyncDubbingOutputOption& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取<p>Extended parameters in the format of a JSON string.</p>
                     * @return ExtParam <p>Extended parameters in the format of a JSON string.</p>
                     * 
                     */
                    std::string GetExtParam() const;

                    /**
                     * 设置<p>Extended parameters in the format of a JSON string.</p>
                     * @param _extParam <p>Extended parameters in the format of a JSON string.</p>
                     * 
                     */
                    void SetExtParam(const std::string& _extParam);

                    /**
                     * 判断参数 ExtParam 是否已赋值
                     * @return ExtParam 是否已赋值
                     * 
                     */
                    bool ExtParamHasBeenSet() const;

                private:

                    /**
                     * <p>Clone audio base64 encoding</p>
                     */
                    std::string m_audioData;
                    bool m_audioDataHasBeenSet;

                    /**
                     * <p>Cloning audio URL. Valid when AudioData is empty.</p>
                     */
                    std::string m_audioUrl;
                    bool m_audioUrlHasBeenSet;

                    /**
                     * <p>Cloning audio language. The default language is Chinese. Currently supported languages are the same as those for Text To Speech (TTS) TextLang.</p>
                     */
                    std::string m_audioLang;
                    bool m_audioLangHasBeenSet;

                    /**
                     * <p>Voice attribute. Voice type querying and match usage.</p>
                     */
                    VoiceProfile m_voiceProfile;
                    bool m_voiceProfileHasBeenSet;

                    /**
                     * <p>Audition text</p>
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * <p>Language of the audition text, by default if left blank, auto-detection. Current supported languages are the same as Text To Speech.</p>
                     */
                    std::string m_textLang;
                    bool m_textLangHasBeenSet;

                    /**
                     * <p>Output parameters. Specifies the output audio format, etc. The default output audio format is base64.</p>
                     */
                    SyncDubbingOutputOption m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * <p>Extended parameters in the format of a JSON string.</p>
                     */
                    std::string m_extParam;
                    bool m_extParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CLONEVOICEREQUEST_H_
