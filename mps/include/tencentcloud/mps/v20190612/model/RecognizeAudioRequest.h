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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_RECOGNIZEAUDIOREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_RECOGNIZEAUDIOREQUEST_H_

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
                * RecognizeAudio request structure.
                */
                class RecognizeAudioRequest : public AbstractModel
                {
                public:
                    RecognizeAudioRequest();
                    ~RecognizeAudioRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Base64-encoded audio data.
                     * @return AudioData Base64-encoded audio data.
                     * 
                     */
                    std::string GetAudioData() const;

                    /**
                     * 设置Base64-encoded audio data.
                     * @param _audioData Base64-encoded audio data.
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
                     * 获取Identify the target language. If left empty, the default is auto for automatic language identification.
Note: If the automatic language recognition performance is poor, you can specify the language to improve accuracy.

Currently supported languages:
auto-identification
Simplified Chinese
en: English
Japanese
ko: Korean
vi: Vietnamese
ms: Malay
id: Indonesian
fil: Filipino
th: Thai
pt: Portuguese
tr:
ar: Arabic
es: Spanish
hi: Hindi
French
de: German
Italian
Cantonese
ru: Russian
af: Afrikaans
sq: Albanian
am: Amharic
hy: Armenian
az: Azerbaijani
eu: Basque
bn: Bengali
bs: Bosnian
bg: Bulgarian
my: Burmese
ca: Catalan
hr: Croatian
cs: Czech
da: Danish
nl: Dutch
et: Estonian
fi: Finnish
gl: Galician
ka: Georgian
el: Greek
gu: Gujarati
iw: Hebrew
hu: Hungarian
is: Icelandic
jv: Javanese
kn: Kannada
kk: Kazakh
km: Khmer
RPC
lo: Lao
lv: Latvian
lt: Lithuanian
mk: Macedonian
ml: Malayalam
mr: Marathi
mn: Mongolian
ne: Nepali
Norwegian Bokmål
fa: Persian
pl: Polish
ro: Romanian
sr: Serbian
si: Sinhalese
sk: Slovak
sl: Slovenian
Southern Sotho
su: Sundanese
sw: Swahili
sv: Swedish
ta: Tamil
te: Telugu
`ts`: Tsonga.
uk: Ukrainian
ur: Urdu
uz: Uzbek
ve: Venda
xh: isiXhosa
zu: Zulu

                     * @return Source Identify the target language. If left empty, the default is auto for automatic language identification.
Note: If the automatic language recognition performance is poor, you can specify the language to improve accuracy.

Currently supported languages:
auto-identification
Simplified Chinese
en: English
Japanese
ko: Korean
vi: Vietnamese
ms: Malay
id: Indonesian
fil: Filipino
th: Thai
pt: Portuguese
tr:
ar: Arabic
es: Spanish
hi: Hindi
French
de: German
Italian
Cantonese
ru: Russian
af: Afrikaans
sq: Albanian
am: Amharic
hy: Armenian
az: Azerbaijani
eu: Basque
bn: Bengali
bs: Bosnian
bg: Bulgarian
my: Burmese
ca: Catalan
hr: Croatian
cs: Czech
da: Danish
nl: Dutch
et: Estonian
fi: Finnish
gl: Galician
ka: Georgian
el: Greek
gu: Gujarati
iw: Hebrew
hu: Hungarian
is: Icelandic
jv: Javanese
kn: Kannada
kk: Kazakh
km: Khmer
RPC
lo: Lao
lv: Latvian
lt: Lithuanian
mk: Macedonian
ml: Malayalam
mr: Marathi
mn: Mongolian
ne: Nepali
Norwegian Bokmål
fa: Persian
pl: Polish
ro: Romanian
sr: Serbian
si: Sinhalese
sk: Slovak
sl: Slovenian
Southern Sotho
su: Sundanese
sw: Swahili
sv: Swedish
ta: Tamil
te: Telugu
`ts`: Tsonga.
uk: Ukrainian
ur: Urdu
uz: Uzbek
ve: Venda
xh: isiXhosa
zu: Zulu

                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置Identify the target language. If left empty, the default is auto for automatic language identification.
Note: If the automatic language recognition performance is poor, you can specify the language to improve accuracy.

Currently supported languages:
auto-identification
Simplified Chinese
en: English
Japanese
ko: Korean
vi: Vietnamese
ms: Malay
id: Indonesian
fil: Filipino
th: Thai
pt: Portuguese
tr:
ar: Arabic
es: Spanish
hi: Hindi
French
de: German
Italian
Cantonese
ru: Russian
af: Afrikaans
sq: Albanian
am: Amharic
hy: Armenian
az: Azerbaijani
eu: Basque
bn: Bengali
bs: Bosnian
bg: Bulgarian
my: Burmese
ca: Catalan
hr: Croatian
cs: Czech
da: Danish
nl: Dutch
et: Estonian
fi: Finnish
gl: Galician
ka: Georgian
el: Greek
gu: Gujarati
iw: Hebrew
hu: Hungarian
is: Icelandic
jv: Javanese
kn: Kannada
kk: Kazakh
km: Khmer
RPC
lo: Lao
lv: Latvian
lt: Lithuanian
mk: Macedonian
ml: Malayalam
mr: Marathi
mn: Mongolian
ne: Nepali
Norwegian Bokmål
fa: Persian
pl: Polish
ro: Romanian
sr: Serbian
si: Sinhalese
sk: Slovak
sl: Slovenian
Southern Sotho
su: Sundanese
sw: Swahili
sv: Swedish
ta: Tamil
te: Telugu
`ts`: Tsonga.
uk: Ukrainian
ur: Urdu
uz: Uzbek
ve: Venda
xh: isiXhosa
zu: Zulu

                     * @param _source Identify the target language. If left empty, the default is auto for automatic language identification.
Note: If the automatic language recognition performance is poor, you can specify the language to improve accuracy.

Currently supported languages:
auto-identification
Simplified Chinese
en: English
Japanese
ko: Korean
vi: Vietnamese
ms: Malay
id: Indonesian
fil: Filipino
th: Thai
pt: Portuguese
tr:
ar: Arabic
es: Spanish
hi: Hindi
French
de: German
Italian
Cantonese
ru: Russian
af: Afrikaans
sq: Albanian
am: Amharic
hy: Armenian
az: Azerbaijani
eu: Basque
bn: Bengali
bs: Bosnian
bg: Bulgarian
my: Burmese
ca: Catalan
hr: Croatian
cs: Czech
da: Danish
nl: Dutch
et: Estonian
fi: Finnish
gl: Galician
ka: Georgian
el: Greek
gu: Gujarati
iw: Hebrew
hu: Hungarian
is: Icelandic
jv: Javanese
kn: Kannada
kk: Kazakh
km: Khmer
RPC
lo: Lao
lv: Latvian
lt: Lithuanian
mk: Macedonian
ml: Malayalam
mr: Marathi
mn: Mongolian
ne: Nepali
Norwegian Bokmål
fa: Persian
pl: Polish
ro: Romanian
sr: Serbian
si: Sinhalese
sk: Slovak
sl: Slovenian
Southern Sotho
su: Sundanese
sw: Swahili
sv: Swedish
ta: Tamil
te: Telugu
`ts`: Tsonga.
uk: Ukrainian
ur: Urdu
uz: Uzbek
ve: Venda
xh: isiXhosa
zu: Zulu

                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取Audio data format, default is pcm

Supported formats:
pcm (mono 16-bit sampling pcm data with a 16000 sampling rate)
ogg-opus (mono Opus-encoded Ogg data with sample rates of 16000, 24000, or 48000).
                     * @return AudioFormat Audio data format, default is pcm

Supported formats:
pcm (mono 16-bit sampling pcm data with a 16000 sampling rate)
ogg-opus (mono Opus-encoded Ogg data with sample rates of 16000, 24000, or 48000).
                     * 
                     */
                    std::string GetAudioFormat() const;

                    /**
                     * 设置Audio data format, default is pcm

Supported formats:
pcm (mono 16-bit sampling pcm data with a 16000 sampling rate)
ogg-opus (mono Opus-encoded Ogg data with sample rates of 16000, 24000, or 48000).
                     * @param _audioFormat Audio data format, default is pcm

Supported formats:
pcm (mono 16-bit sampling pcm data with a 16000 sampling rate)
ogg-opus (mono Opus-encoded Ogg data with sample rates of 16000, 24000, or 48000).
                     * 
                     */
                    void SetAudioFormat(const std::string& _audioFormat);

                    /**
                     * 判断参数 AudioFormat 是否已赋值
                     * @return AudioFormat 是否已赋值
                     * 
                     */
                    bool AudioFormatHasBeenSet() const;

                    /**
                     * 获取Audio sampling rate

Supported sampling rates:
pcm 16000
ogg-opus 16000 / 24000 / 48000
                     * @return SampleRate Audio sampling rate

Supported sampling rates:
pcm 16000
ogg-opus 16000 / 24000 / 48000
                     * 
                     */
                    int64_t GetSampleRate() const;

                    /**
                     * 设置Audio sampling rate

Supported sampling rates:
pcm 16000
ogg-opus 16000 / 24000 / 48000
                     * @param _sampleRate Audio sampling rate

Supported sampling rates:
pcm 16000
ogg-opus 16000 / 24000 / 48000
                     * 
                     */
                    void SetSampleRate(const int64_t& _sampleRate);

                    /**
                     * 判断参数 SampleRate 是否已赋值
                     * @return SampleRate 是否已赋值
                     * 
                     */
                    bool SampleRateHasBeenSet() const;

                    /**
                     * 获取Extended parameter. This is left empty by default. Use this parameter for special requirements.
                     * @return UserExtPara Extended parameter. This is left empty by default. Use this parameter for special requirements.
                     * 
                     */
                    std::string GetUserExtPara() const;

                    /**
                     * 设置Extended parameter. This is left empty by default. Use this parameter for special requirements.
                     * @param _userExtPara Extended parameter. This is left empty by default. Use this parameter for special requirements.
                     * 
                     */
                    void SetUserExtPara(const std::string& _userExtPara);

                    /**
                     * 判断参数 UserExtPara 是否已赋值
                     * @return UserExtPara 是否已赋值
                     * 
                     */
                    bool UserExtParaHasBeenSet() const;

                private:

                    /**
                     * Base64-encoded audio data.
                     */
                    std::string m_audioData;
                    bool m_audioDataHasBeenSet;

                    /**
                     * Identify the target language. If left empty, the default is auto for automatic language identification.
Note: If the automatic language recognition performance is poor, you can specify the language to improve accuracy.

Currently supported languages:
auto-identification
Simplified Chinese
en: English
Japanese
ko: Korean
vi: Vietnamese
ms: Malay
id: Indonesian
fil: Filipino
th: Thai
pt: Portuguese
tr:
ar: Arabic
es: Spanish
hi: Hindi
French
de: German
Italian
Cantonese
ru: Russian
af: Afrikaans
sq: Albanian
am: Amharic
hy: Armenian
az: Azerbaijani
eu: Basque
bn: Bengali
bs: Bosnian
bg: Bulgarian
my: Burmese
ca: Catalan
hr: Croatian
cs: Czech
da: Danish
nl: Dutch
et: Estonian
fi: Finnish
gl: Galician
ka: Georgian
el: Greek
gu: Gujarati
iw: Hebrew
hu: Hungarian
is: Icelandic
jv: Javanese
kn: Kannada
kk: Kazakh
km: Khmer
RPC
lo: Lao
lv: Latvian
lt: Lithuanian
mk: Macedonian
ml: Malayalam
mr: Marathi
mn: Mongolian
ne: Nepali
Norwegian Bokmål
fa: Persian
pl: Polish
ro: Romanian
sr: Serbian
si: Sinhalese
sk: Slovak
sl: Slovenian
Southern Sotho
su: Sundanese
sw: Swahili
sv: Swedish
ta: Tamil
te: Telugu
`ts`: Tsonga.
uk: Ukrainian
ur: Urdu
uz: Uzbek
ve: Venda
xh: isiXhosa
zu: Zulu

                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * Audio data format, default is pcm

Supported formats:
pcm (mono 16-bit sampling pcm data with a 16000 sampling rate)
ogg-opus (mono Opus-encoded Ogg data with sample rates of 16000, 24000, or 48000).
                     */
                    std::string m_audioFormat;
                    bool m_audioFormatHasBeenSet;

                    /**
                     * Audio sampling rate

Supported sampling rates:
pcm 16000
ogg-opus 16000 / 24000 / 48000
                     */
                    int64_t m_sampleRate;
                    bool m_sampleRateHasBeenSet;

                    /**
                     * Extended parameter. This is left empty by default. Use this parameter for special requirements.
                     */
                    std::string m_userExtPara;
                    bool m_userExtParaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_RECOGNIZEAUDIOREQUEST_H_
