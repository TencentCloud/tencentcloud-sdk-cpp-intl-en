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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SYNCDUBBINGREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SYNCDUBBINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
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
                * SyncDubbing request structure.
                */
                class SyncDubbingRequest : public AbstractModel
                {
                public:
                    SyncDubbingRequest();
                    ~SyncDubbingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Text for the synthesis. This is required for text to speech. The text cannot exceed 2000 characters in length.
                     * @return Text Text for the synthesis. This is required for text to speech. The text cannot exceed 2000 characters in length.
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置Text for the synthesis. This is required for text to speech. The text cannot exceed 2000 characters in length.
                     * @param _text Text for the synthesis. This is required for text to speech. The text cannot exceed 2000 characters in length.
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
                     * 获取Text language. This defaults to zh (Chinese) if left empty.
Supported languages:
zh: Chinese.
en: English.
ja: Japanese.
de: German.
fr: French.
ko: Korean.
ru: Russian.
uk: Ukrainian.
pt: Portuguese.
it: Italian.
es: Spanish.
id: Indonesian.
nl: Dutch.
tr: Turkish.
fil: Filipino.
ms: Malay.
el: Greek.
fi: Finnish.
hr: Croatian.
sk: Slovak.
pl: Polish.
sv: Swedish.
hi: Hindi.
bg: Bulgarian.
ro: Romanian.
ar: Arabic.
cs: Czech.
da: Danish.
ta: Tamil.
hun: Hungarian.
vi: Vietnamese.
no: Norwegian.
yue: Cantonese.
th: Thai.
he: Hebrew.
ca: Catalan.
nn: Nynorsk.
af: Afrikaans.
fa: Persian.
sl: Slovenian.

                     * @return TextLang Text language. This defaults to zh (Chinese) if left empty.
Supported languages:
zh: Chinese.
en: English.
ja: Japanese.
de: German.
fr: French.
ko: Korean.
ru: Russian.
uk: Ukrainian.
pt: Portuguese.
it: Italian.
es: Spanish.
id: Indonesian.
nl: Dutch.
tr: Turkish.
fil: Filipino.
ms: Malay.
el: Greek.
fi: Finnish.
hr: Croatian.
sk: Slovak.
pl: Polish.
sv: Swedish.
hi: Hindi.
bg: Bulgarian.
ro: Romanian.
ar: Arabic.
cs: Czech.
da: Danish.
ta: Tamil.
hun: Hungarian.
vi: Vietnamese.
no: Norwegian.
yue: Cantonese.
th: Thai.
he: Hebrew.
ca: Catalan.
nn: Nynorsk.
af: Afrikaans.
fa: Persian.
sl: Slovenian.

                     * 
                     */
                    std::string GetTextLang() const;

                    /**
                     * 设置Text language. This defaults to zh (Chinese) if left empty.
Supported languages:
zh: Chinese.
en: English.
ja: Japanese.
de: German.
fr: French.
ko: Korean.
ru: Russian.
uk: Ukrainian.
pt: Portuguese.
it: Italian.
es: Spanish.
id: Indonesian.
nl: Dutch.
tr: Turkish.
fil: Filipino.
ms: Malay.
el: Greek.
fi: Finnish.
hr: Croatian.
sk: Slovak.
pl: Polish.
sv: Swedish.
hi: Hindi.
bg: Bulgarian.
ro: Romanian.
ar: Arabic.
cs: Czech.
da: Danish.
ta: Tamil.
hun: Hungarian.
vi: Vietnamese.
no: Norwegian.
yue: Cantonese.
th: Thai.
he: Hebrew.
ca: Catalan.
nn: Nynorsk.
af: Afrikaans.
fa: Persian.
sl: Slovenian.

                     * @param _textLang Text language. This defaults to zh (Chinese) if left empty.
Supported languages:
zh: Chinese.
en: English.
ja: Japanese.
de: German.
fr: French.
ko: Korean.
ru: Russian.
uk: Ukrainian.
pt: Portuguese.
it: Italian.
es: Spanish.
id: Indonesian.
nl: Dutch.
tr: Turkish.
fil: Filipino.
ms: Malay.
el: Greek.
fi: Finnish.
hr: Croatian.
sk: Slovak.
pl: Polish.
sv: Swedish.
hi: Hindi.
bg: Bulgarian.
ro: Romanian.
ar: Arabic.
cs: Czech.
da: Danish.
ta: Tamil.
hun: Hungarian.
vi: Vietnamese.
no: Norwegian.
yue: Cantonese.
th: Thai.
he: Hebrew.
ca: Catalan.
nn: Nynorsk.
af: Afrikaans.
fa: Persian.
sl: Slovenian.

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
                     * 获取Voice type ID. This is required for synthesis with a specific voice type. System voice types and voice type cloning are supported.
                     * @return VoiceId Voice type ID. This is required for synthesis with a specific voice type. System voice types and voice type cloning are supported.
                     * 
                     */
                    std::string GetVoiceId() const;

                    /**
                     * 设置Voice type ID. This is required for synthesis with a specific voice type. System voice types and voice type cloning are supported.
                     * @param _voiceId Voice type ID. This is required for synthesis with a specific voice type. System voice types and voice type cloning are supported.
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
                     * 获取Base64-encoded audio for cloning.
                     * @return AudioData Base64-encoded audio for cloning.
                     * 
                     */
                    std::string GetAudioData() const;

                    /**
                     * 设置Base64-encoded audio for cloning.
                     * @param _audioData Base64-encoded audio for cloning.
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
                     * 获取Cloning audio language. The default language is Chinese.
Supported languages are the same as those for TextLang.
                     * @return AudioLang Cloning audio language. The default language is Chinese.
Supported languages are the same as those for TextLang.
                     * 
                     */
                    std::string GetAudioLang() const;

                    /**
                     * 设置Cloning audio language. The default language is Chinese.
Supported languages are the same as those for TextLang.
                     * @param _audioLang Cloning audio language. The default language is Chinese.
Supported languages are the same as those for TextLang.
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
                     * 获取Extended parameters in the format of a JSON string.
                     * @return ExtParam Extended parameters in the format of a JSON string.
                     * 
                     */
                    std::string GetExtParam() const;

                    /**
                     * 设置Extended parameters in the format of a JSON string.
                     * @param _extParam Extended parameters in the format of a JSON string.
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
                     * Text for the synthesis. This is required for text to speech. The text cannot exceed 2000 characters in length.
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * Text language. This defaults to zh (Chinese) if left empty.
Supported languages:
zh: Chinese.
en: English.
ja: Japanese.
de: German.
fr: French.
ko: Korean.
ru: Russian.
uk: Ukrainian.
pt: Portuguese.
it: Italian.
es: Spanish.
id: Indonesian.
nl: Dutch.
tr: Turkish.
fil: Filipino.
ms: Malay.
el: Greek.
fi: Finnish.
hr: Croatian.
sk: Slovak.
pl: Polish.
sv: Swedish.
hi: Hindi.
bg: Bulgarian.
ro: Romanian.
ar: Arabic.
cs: Czech.
da: Danish.
ta: Tamil.
hun: Hungarian.
vi: Vietnamese.
no: Norwegian.
yue: Cantonese.
th: Thai.
he: Hebrew.
ca: Catalan.
nn: Nynorsk.
af: Afrikaans.
fa: Persian.
sl: Slovenian.

                     */
                    std::string m_textLang;
                    bool m_textLangHasBeenSet;

                    /**
                     * Voice type ID. This is required for synthesis with a specific voice type. System voice types and voice type cloning are supported.
                     */
                    std::string m_voiceId;
                    bool m_voiceIdHasBeenSet;

                    /**
                     * Base64-encoded audio for cloning.
                     */
                    std::string m_audioData;
                    bool m_audioDataHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_audioUrl;
                    bool m_audioUrlHasBeenSet;

                    /**
                     * Cloning audio language. The default language is Chinese.
Supported languages are the same as those for TextLang.
                     */
                    std::string m_audioLang;
                    bool m_audioLangHasBeenSet;

                    /**
                     * 
                     */
                    SyncDubbingOutputOption m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * Extended parameters in the format of a JSON string.
                     */
                    std::string m_extParam;
                    bool m_extParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SYNCDUBBINGREQUEST_H_
