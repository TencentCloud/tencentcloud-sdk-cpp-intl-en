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
                     * 获取
                     * @return AudioData 
                     * 
                     */
                    std::string GetAudioData() const;

                    /**
                     * 设置
                     * @param _audioData 
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
                     * 获取
                     * @return AudioUrl 
                     * 
                     */
                    std::string GetAudioUrl() const;

                    /**
                     * 设置
                     * @param _audioUrl 
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
                     * 获取
                     * @return AudioLang 
                     * 
                     */
                    std::string GetAudioLang() const;

                    /**
                     * 设置
                     * @param _audioLang 
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
                     * 获取
                     * @return VoiceProfile 
                     * 
                     */
                    VoiceProfile GetVoiceProfile() const;

                    /**
                     * 设置
                     * @param _voiceProfile 
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
                     * 获取
                     * @return Text 
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置
                     * @param _text 
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
                     * 获取
                     * @return TextLang 
                     * 
                     */
                    std::string GetTextLang() const;

                    /**
                     * 设置
                     * @param _textLang 
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
                     * 获取
                     * @return Output 
                     * 
                     */
                    SyncDubbingOutputOption GetOutput() const;

                    /**
                     * 设置
                     * @param _output 
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
                     * 获取
                     * @return ExtParam 
                     * 
                     */
                    std::string GetExtParam() const;

                    /**
                     * 设置
                     * @param _extParam 
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
                     * 
                     */
                    std::string m_audioData;
                    bool m_audioDataHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_audioUrl;
                    bool m_audioUrlHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_audioLang;
                    bool m_audioLangHasBeenSet;

                    /**
                     * 
                     */
                    VoiceProfile m_voiceProfile;
                    bool m_voiceProfileHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_textLang;
                    bool m_textLangHasBeenSet;

                    /**
                     * 
                     */
                    SyncDubbingOutputOption m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_extParam;
                    bool m_extParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CLONEVOICEREQUEST_H_
