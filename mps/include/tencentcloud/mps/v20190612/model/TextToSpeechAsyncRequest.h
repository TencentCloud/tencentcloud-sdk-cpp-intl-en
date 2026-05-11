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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_TEXTTOSPEECHASYNCREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_TEXTTOSPEECHASYNCREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * TextToSpeechAsync request structure.
                */
                class TextToSpeechAsyncRequest : public AbstractModel
                {
                public:
                    TextToSpeechAsyncRequest();
                    ~TextToSpeechAsyncRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Text to convert to speech.</p>
                     * @return Text <p>Text to convert to speech.</p>
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置<p>Text to convert to speech.</p>
                     * @param _text <p>Text to convert to speech.</p>
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
                     * 获取<p>Voice ID.</p>
                     * @return VoiceId <p>Voice ID.</p>
                     * 
                     */
                    std::string GetVoiceId() const;

                    /**
                     * 设置<p>Voice ID.</p>
                     * @param _voiceId <p>Voice ID.</p>
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
                     * 获取<p>Text language. The default value is Chinese.</p>
                     * @return TextLang <p>Text language. The default value is Chinese.</p>
                     * 
                     */
                    std::string GetTextLang() const;

                    /**
                     * 设置<p>Text language. The default value is Chinese.</p>
                     * @param _textLang <p>Text language. The default value is Chinese.</p>
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
                     * 获取<p>Extended parameters in the format of a JSON string.</p><p>synExt (Object): Extended text to speech parameter.<br>  duration (Float): Synthesized audio duration, in seconds. Example: 5.2.<br>  sampleRate (Integer): Synthesized audio sample rate. Default value: 16000. Supported values: [8000,16000,22050,32000,44100].<br>  pitch (Integer): -Pitch. Default value: 0 (original voice output). Value range: [-12, 12].</p><p>transExt (Object): Extended translation parameter.<br>  transInfo (Object).<br>   transDst (String): Target language, such as en.<br>  transRequirement (String): Translation requirements.</p>
                     * @return ExtParam <p>Extended parameters in the format of a JSON string.</p><p>synExt (Object): Extended text to speech parameter.<br>  duration (Float): Synthesized audio duration, in seconds. Example: 5.2.<br>  sampleRate (Integer): Synthesized audio sample rate. Default value: 16000. Supported values: [8000,16000,22050,32000,44100].<br>  pitch (Integer): -Pitch. Default value: 0 (original voice output). Value range: [-12, 12].</p><p>transExt (Object): Extended translation parameter.<br>  transInfo (Object).<br>   transDst (String): Target language, such as en.<br>  transRequirement (String): Translation requirements.</p>
                     * 
                     */
                    std::string GetExtParam() const;

                    /**
                     * 设置<p>Extended parameters in the format of a JSON string.</p><p>synExt (Object): Extended text to speech parameter.<br>  duration (Float): Synthesized audio duration, in seconds. Example: 5.2.<br>  sampleRate (Integer): Synthesized audio sample rate. Default value: 16000. Supported values: [8000,16000,22050,32000,44100].<br>  pitch (Integer): -Pitch. Default value: 0 (original voice output). Value range: [-12, 12].</p><p>transExt (Object): Extended translation parameter.<br>  transInfo (Object).<br>   transDst (String): Target language, such as en.<br>  transRequirement (String): Translation requirements.</p>
                     * @param _extParam <p>Extended parameters in the format of a JSON string.</p><p>synExt (Object): Extended text to speech parameter.<br>  duration (Float): Synthesized audio duration, in seconds. Example: 5.2.<br>  sampleRate (Integer): Synthesized audio sample rate. Default value: 16000. Supported values: [8000,16000,22050,32000,44100].<br>  pitch (Integer): -Pitch. Default value: 0 (original voice output). Value range: [-12, 12].</p><p>transExt (Object): Extended translation parameter.<br>  transInfo (Object).<br>   transDst (String): Target language, such as en.<br>  transRequirement (String): Translation requirements.</p>
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
                     * <p>Text to convert to speech.</p>
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * <p>Voice ID.</p>
                     */
                    std::string m_voiceId;
                    bool m_voiceIdHasBeenSet;

                    /**
                     * <p>Text language. The default value is Chinese.</p>
                     */
                    std::string m_textLang;
                    bool m_textLangHasBeenSet;

                    /**
                     * <p>Extended parameters in the format of a JSON string.</p><p>synExt (Object): Extended text to speech parameter.<br>  duration (Float): Synthesized audio duration, in seconds. Example: 5.2.<br>  sampleRate (Integer): Synthesized audio sample rate. Default value: 16000. Supported values: [8000,16000,22050,32000,44100].<br>  pitch (Integer): -Pitch. Default value: 0 (original voice output). Value range: [-12, 12].</p><p>transExt (Object): Extended translation parameter.<br>  transInfo (Object).<br>   transDst (String): Target language, such as en.<br>  transRequirement (String): Translation requirements.</p>
                     */
                    std::string m_extParam;
                    bool m_extParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_TEXTTOSPEECHASYNCREQUEST_H_
