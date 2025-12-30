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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_RAWSMARTSUBTITLEPARAMETER_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_RAWSMARTSUBTITLEPARAMETER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AsrHotWordsConfigure.h>
#include <tencentcloud/mps/v20190612/model/SelectingSubtitleAreasConfig.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Custom smart subtitle parameter.
                */
                class RawSmartSubtitleParameter : public AbstractModel
                {
                public:
                    RawSmartSubtitleParameter();
                    ~RawSmartSubtitleParameter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Smart subtitle language type.
0: source language
1: target language
2: source language + target language
The value can only be 0 when TranslateSwitch is set to OFF. The value can only be 1 or 2 when TranslateSwitch is set to ON.
                     * @return SubtitleType Smart subtitle language type.
0: source language
1: target language
2: source language + target language
The value can only be 0 when TranslateSwitch is set to OFF. The value can only be 1 or 2 when TranslateSwitch is set to ON.
                     * 
                     */
                    int64_t GetSubtitleType() const;

                    /**
                     * 设置Smart subtitle language type.
0: source language
1: target language
2: source language + target language
The value can only be 0 when TranslateSwitch is set to OFF. The value can only be 1 or 2 when TranslateSwitch is set to ON.
                     * @param _subtitleType Smart subtitle language type.
0: source language
1: target language
2: source language + target language
The value can only be 0 when TranslateSwitch is set to OFF. The value can only be 1 or 2 when TranslateSwitch is set to ON.
                     * 
                     */
                    void SetSubtitleType(const int64_t& _subtitleType);

                    /**
                     * 判断参数 SubtitleType 是否已赋值
                     * @return SubtitleType 是否已赋值
                     * 
                     */
                    bool SubtitleTypeHasBeenSet() const;

                    /**
                     * 获取Source language of the video with smart subtitles.
OCR recognition only supports the following languages:
`zh_en`: Chinese and English.
`multi`: others.
ASR recognition and pure subtitle translation currently support the following languages:
`auto`: automatic recognition (it is only supported in pure subtitle translation).
`zh`: Simplified Chinese.
`en`: English.
`ja`: Japanese.
`ko`: Korean.
`zh-PY`: Chinese, English, and Cantonese.
`zh_medical`: Chinese (medical scenario).
`vi`: Vietnamese.
`ms`: Malay.
`id`: Indonesian.
`fil`: Filipino.
`th`: Thai.
`pt`: Portuguese.
`tr`: Turkish.
`ar`: Arabic.
`es`: Spanish.
`hi`: Hindi.
`fr`: French.
`de`: German.
`it`: Italian.
`zh_dialect`: Chinese dialect.
`zh_en`: Chinese and English.
`yue`: Cantonese.
`ru`: Russian.
`prime_zh`: Chinese, English, and Chinese dialects.
`af-ZA`: Afrikaans (South Africa).
`sq-AL`: Albanian (Albania).
`am-ET`: Amharic (Ethiopia).
`ar-DZ`: Arabic (Algeria).
`ar-BH`: Arabic (Bahrain).
`ar-EG`: Arabic (Egypt).
`ar-IQ`: Arabic (Iraq).
`ar-IL`: Arabic (Israel).
`ar-JO`: Arabic (Jordan).
`ar-KW`: Arabic (Kuwait).
`ar-LB`: Arabic (Lebanon).
`ar-MR`: Arabic (Mauritania).
`ar-MA`: Arabic (Morocco).
`ar-OM`: Arabic (Oman).
`ar-QA`: Arabic (Qatar).
`ar-SA`: Arabic (Saudi Arabia).
`ar-PS`: Arabic (State of Palestine).
`ar-SY`: Arabic (Syria).
`ar-TN`: Arabic (Tunisia).
`ar-AE`: Arabic (United Arab Emirates).
`ar-YE`: Arabic (Yemen).
`hy-AM`: Armenian (Armenia).
`az-AZ`: Azerbaijani (Azerbaijan).
`eu-ES`: Basque (Spain).
`bn-BD`: Bengali (Bangladesh).
`bn-IN`: Bengali (India).
`bs-BA`: Bosnian (Bosnia and Herzegovina).
`bg-BG`: Bulgarian (Bulgaria).
`my-MM`: Burmese (Myanmar).
`ca-ES`: Catalan (Spain).
`hr-HR`: Croatian (Croatia).
`cs-CZ`: Czech (Czech Republic).
`da-DK`: Danish (Denmark).
`nl-BE`: Dutch (Belgium).
`nl-NL`: Dutch (Holland).
`en-AU`: English (Australia).
`en-CA`: English (Canada).
`en-GH`: English (Ghana).
`en-HK`: English (Hong Kong (China)).
`en-IN`: English (India).
`en-IE`: English (Ireland).
`en-KE`: English (Kenya).
`en-NZ`: English (New Zealand).
`en-NG`: English (Nigeria).
`en-PK`: English (Pakistan).
`en-PH`: English (Philippines).
`en-SG`: English (Singapore).
`en-ZA`: English (South Africa).
`en-TZ`: English (Tanzania).
`en-GB`: English (UK).
`en-US`: English (US).
`et-EE`: Estonian (Estonia).
`fil-PH`: Filipino (Philippines).
`fi-FI`: Finnish (Finland).
`fr-BE`: French (Belgium).
`fr-CA`: French (Canada).
`fr-FR`: French (France).
`fr-CH`: French (Switzerland).
`gl-ES`: Galician (Spain).
`ka-GE`: Georgian (Georgia).
`el-GR`: Greek (Greece).
`gu-IN`: Gujarati (India).
`iw-IL`: Hebrew (Israel).
`hi-IN`: Hindi (India).
`hu-HU`: Hungarian (Hungary).
`is-IS`: Icelandic (Iceland).
`id-ID`: Indonesian (Indonesia).
`it-IT`: Italian (Italy).
`it-CH`: Italian (Switzerland).
`ja-JP`: Japanese (Japan).
`jv-ID`: Javanese (Indonesia).
`kn-IN`: Kannada (India).
`kk-KZ`: Kazakh (Kazakhstan).
`km-KH`: Khmer (Cambodia).
`rw-RW`: Kinyarwanda (Rwanda).
`ko-KR`: Korean (South Korea).
`lo-LA`: Lao (Laos).
`lv-LV`: Latvian (Latvia).
`lt-LT`: Lithuanian (Lithuania).
`mk-MK`: Macedonian (North Macedonia).
`ms-MY`: Malay (Malaysia).
`ml-IN`: Malayalam (India).
`mr-IN`: Marathi (India).
`mn-MN`: Mongolian (Mongolia).
`ne-NP`: Nepali (Nepal).
`no-NO`: Bokmål Norwegian (Norway).
`fa-IR`: Persian (Iran).
`pl-PL`: Polish (Poland).
`pt-BR`: Portuguese (Brazil).
`pt-PT`: Portuguese (Portugal).
`ro-RO`: Romanian (Romania).
`ru-RU`: Russian (Russia).
`sr-RS`: Serbian (Serbia).
`si-LK`: Sinhalese (Sri Lanka).
`sk-SK`: Slovak (Slovakia).
`sl-SI`: Slovenian (Slovenia).
`st-ZA`: Sesotho (South Africa).
`es-AR`: Spanish (Argentina).
`es-BO`: Spanish (Bolivia).
`es-CL`: Spanish (Chile).
`es-CO`: Spanish (Colombia).
`es-CR`: Spanish (Costa Rica).
`es-DO`: Spanish (Dominican Republic).
`es-EC`: Spanish (Ecuador).
`es-SV`: Spanish (El Salvador).
`es-GT`: Spanish (Guatemala).
`es-HN`: Spanish (Honduras).
`es-MX`: Spanish (Mexico).
`es-NI`: Spanish (Nicaragua).
`es-PA`: Spanish (Panama).
`es-PY`: Spanish (Paraguay).
`es-PE`: Spanish (Peru).
`es-PR`: Spanish (Puerto Rico).
`es-ES`: Spanish (Spain).
`es-US`: Spanish (US).
`es-UY`: Spanish (Uruguay).
`es-VE`: Spanish (Venezuela).
`su-ID`: Sundanese (Indonesia).
`sw-KE`: Swahili (Kenya).
`sw-TZ`: Swahili (Tanzania).
`sv-SE`: Swedish (Sweden).
`ta-IN`: Tamil (India).
`ta-MY`: Tamil (Malaysia).
`ta-SG`: Tamil (Singapore).
`ta-LK`: Tamil (Sri Lanka).
`te-IN`: Telugu (India).
`th-TH`: Thai (Thailand).
`ts-ZA`: Tsonga (South Africa).
`tr-TR`: Turkish (Turkey).
`uk-UA`: Ukrainian (Ukraine).
`ur-IN`: Urdu (India).
`ur-PK`: Urdu (Pakistan).
`uz-UZ`: Uzbek (Uzbekistan).
`ve-ZA`: Venda (South Africa).
`vi-VN`: Vietnamese (Vietnam).
`xh-ZA`: Xhosa (South Africa).
`zu-ZA`: Zulu (South Africa).

                     * @return VideoSrcLanguage Source language of the video with smart subtitles.
OCR recognition only supports the following languages:
`zh_en`: Chinese and English.
`multi`: others.
ASR recognition and pure subtitle translation currently support the following languages:
`auto`: automatic recognition (it is only supported in pure subtitle translation).
`zh`: Simplified Chinese.
`en`: English.
`ja`: Japanese.
`ko`: Korean.
`zh-PY`: Chinese, English, and Cantonese.
`zh_medical`: Chinese (medical scenario).
`vi`: Vietnamese.
`ms`: Malay.
`id`: Indonesian.
`fil`: Filipino.
`th`: Thai.
`pt`: Portuguese.
`tr`: Turkish.
`ar`: Arabic.
`es`: Spanish.
`hi`: Hindi.
`fr`: French.
`de`: German.
`it`: Italian.
`zh_dialect`: Chinese dialect.
`zh_en`: Chinese and English.
`yue`: Cantonese.
`ru`: Russian.
`prime_zh`: Chinese, English, and Chinese dialects.
`af-ZA`: Afrikaans (South Africa).
`sq-AL`: Albanian (Albania).
`am-ET`: Amharic (Ethiopia).
`ar-DZ`: Arabic (Algeria).
`ar-BH`: Arabic (Bahrain).
`ar-EG`: Arabic (Egypt).
`ar-IQ`: Arabic (Iraq).
`ar-IL`: Arabic (Israel).
`ar-JO`: Arabic (Jordan).
`ar-KW`: Arabic (Kuwait).
`ar-LB`: Arabic (Lebanon).
`ar-MR`: Arabic (Mauritania).
`ar-MA`: Arabic (Morocco).
`ar-OM`: Arabic (Oman).
`ar-QA`: Arabic (Qatar).
`ar-SA`: Arabic (Saudi Arabia).
`ar-PS`: Arabic (State of Palestine).
`ar-SY`: Arabic (Syria).
`ar-TN`: Arabic (Tunisia).
`ar-AE`: Arabic (United Arab Emirates).
`ar-YE`: Arabic (Yemen).
`hy-AM`: Armenian (Armenia).
`az-AZ`: Azerbaijani (Azerbaijan).
`eu-ES`: Basque (Spain).
`bn-BD`: Bengali (Bangladesh).
`bn-IN`: Bengali (India).
`bs-BA`: Bosnian (Bosnia and Herzegovina).
`bg-BG`: Bulgarian (Bulgaria).
`my-MM`: Burmese (Myanmar).
`ca-ES`: Catalan (Spain).
`hr-HR`: Croatian (Croatia).
`cs-CZ`: Czech (Czech Republic).
`da-DK`: Danish (Denmark).
`nl-BE`: Dutch (Belgium).
`nl-NL`: Dutch (Holland).
`en-AU`: English (Australia).
`en-CA`: English (Canada).
`en-GH`: English (Ghana).
`en-HK`: English (Hong Kong (China)).
`en-IN`: English (India).
`en-IE`: English (Ireland).
`en-KE`: English (Kenya).
`en-NZ`: English (New Zealand).
`en-NG`: English (Nigeria).
`en-PK`: English (Pakistan).
`en-PH`: English (Philippines).
`en-SG`: English (Singapore).
`en-ZA`: English (South Africa).
`en-TZ`: English (Tanzania).
`en-GB`: English (UK).
`en-US`: English (US).
`et-EE`: Estonian (Estonia).
`fil-PH`: Filipino (Philippines).
`fi-FI`: Finnish (Finland).
`fr-BE`: French (Belgium).
`fr-CA`: French (Canada).
`fr-FR`: French (France).
`fr-CH`: French (Switzerland).
`gl-ES`: Galician (Spain).
`ka-GE`: Georgian (Georgia).
`el-GR`: Greek (Greece).
`gu-IN`: Gujarati (India).
`iw-IL`: Hebrew (Israel).
`hi-IN`: Hindi (India).
`hu-HU`: Hungarian (Hungary).
`is-IS`: Icelandic (Iceland).
`id-ID`: Indonesian (Indonesia).
`it-IT`: Italian (Italy).
`it-CH`: Italian (Switzerland).
`ja-JP`: Japanese (Japan).
`jv-ID`: Javanese (Indonesia).
`kn-IN`: Kannada (India).
`kk-KZ`: Kazakh (Kazakhstan).
`km-KH`: Khmer (Cambodia).
`rw-RW`: Kinyarwanda (Rwanda).
`ko-KR`: Korean (South Korea).
`lo-LA`: Lao (Laos).
`lv-LV`: Latvian (Latvia).
`lt-LT`: Lithuanian (Lithuania).
`mk-MK`: Macedonian (North Macedonia).
`ms-MY`: Malay (Malaysia).
`ml-IN`: Malayalam (India).
`mr-IN`: Marathi (India).
`mn-MN`: Mongolian (Mongolia).
`ne-NP`: Nepali (Nepal).
`no-NO`: Bokmål Norwegian (Norway).
`fa-IR`: Persian (Iran).
`pl-PL`: Polish (Poland).
`pt-BR`: Portuguese (Brazil).
`pt-PT`: Portuguese (Portugal).
`ro-RO`: Romanian (Romania).
`ru-RU`: Russian (Russia).
`sr-RS`: Serbian (Serbia).
`si-LK`: Sinhalese (Sri Lanka).
`sk-SK`: Slovak (Slovakia).
`sl-SI`: Slovenian (Slovenia).
`st-ZA`: Sesotho (South Africa).
`es-AR`: Spanish (Argentina).
`es-BO`: Spanish (Bolivia).
`es-CL`: Spanish (Chile).
`es-CO`: Spanish (Colombia).
`es-CR`: Spanish (Costa Rica).
`es-DO`: Spanish (Dominican Republic).
`es-EC`: Spanish (Ecuador).
`es-SV`: Spanish (El Salvador).
`es-GT`: Spanish (Guatemala).
`es-HN`: Spanish (Honduras).
`es-MX`: Spanish (Mexico).
`es-NI`: Spanish (Nicaragua).
`es-PA`: Spanish (Panama).
`es-PY`: Spanish (Paraguay).
`es-PE`: Spanish (Peru).
`es-PR`: Spanish (Puerto Rico).
`es-ES`: Spanish (Spain).
`es-US`: Spanish (US).
`es-UY`: Spanish (Uruguay).
`es-VE`: Spanish (Venezuela).
`su-ID`: Sundanese (Indonesia).
`sw-KE`: Swahili (Kenya).
`sw-TZ`: Swahili (Tanzania).
`sv-SE`: Swedish (Sweden).
`ta-IN`: Tamil (India).
`ta-MY`: Tamil (Malaysia).
`ta-SG`: Tamil (Singapore).
`ta-LK`: Tamil (Sri Lanka).
`te-IN`: Telugu (India).
`th-TH`: Thai (Thailand).
`ts-ZA`: Tsonga (South Africa).
`tr-TR`: Turkish (Turkey).
`uk-UA`: Ukrainian (Ukraine).
`ur-IN`: Urdu (India).
`ur-PK`: Urdu (Pakistan).
`uz-UZ`: Uzbek (Uzbekistan).
`ve-ZA`: Venda (South Africa).
`vi-VN`: Vietnamese (Vietnam).
`xh-ZA`: Xhosa (South Africa).
`zu-ZA`: Zulu (South Africa).

                     * 
                     */
                    std::string GetVideoSrcLanguage() const;

                    /**
                     * 设置Source language of the video with smart subtitles.
OCR recognition only supports the following languages:
`zh_en`: Chinese and English.
`multi`: others.
ASR recognition and pure subtitle translation currently support the following languages:
`auto`: automatic recognition (it is only supported in pure subtitle translation).
`zh`: Simplified Chinese.
`en`: English.
`ja`: Japanese.
`ko`: Korean.
`zh-PY`: Chinese, English, and Cantonese.
`zh_medical`: Chinese (medical scenario).
`vi`: Vietnamese.
`ms`: Malay.
`id`: Indonesian.
`fil`: Filipino.
`th`: Thai.
`pt`: Portuguese.
`tr`: Turkish.
`ar`: Arabic.
`es`: Spanish.
`hi`: Hindi.
`fr`: French.
`de`: German.
`it`: Italian.
`zh_dialect`: Chinese dialect.
`zh_en`: Chinese and English.
`yue`: Cantonese.
`ru`: Russian.
`prime_zh`: Chinese, English, and Chinese dialects.
`af-ZA`: Afrikaans (South Africa).
`sq-AL`: Albanian (Albania).
`am-ET`: Amharic (Ethiopia).
`ar-DZ`: Arabic (Algeria).
`ar-BH`: Arabic (Bahrain).
`ar-EG`: Arabic (Egypt).
`ar-IQ`: Arabic (Iraq).
`ar-IL`: Arabic (Israel).
`ar-JO`: Arabic (Jordan).
`ar-KW`: Arabic (Kuwait).
`ar-LB`: Arabic (Lebanon).
`ar-MR`: Arabic (Mauritania).
`ar-MA`: Arabic (Morocco).
`ar-OM`: Arabic (Oman).
`ar-QA`: Arabic (Qatar).
`ar-SA`: Arabic (Saudi Arabia).
`ar-PS`: Arabic (State of Palestine).
`ar-SY`: Arabic (Syria).
`ar-TN`: Arabic (Tunisia).
`ar-AE`: Arabic (United Arab Emirates).
`ar-YE`: Arabic (Yemen).
`hy-AM`: Armenian (Armenia).
`az-AZ`: Azerbaijani (Azerbaijan).
`eu-ES`: Basque (Spain).
`bn-BD`: Bengali (Bangladesh).
`bn-IN`: Bengali (India).
`bs-BA`: Bosnian (Bosnia and Herzegovina).
`bg-BG`: Bulgarian (Bulgaria).
`my-MM`: Burmese (Myanmar).
`ca-ES`: Catalan (Spain).
`hr-HR`: Croatian (Croatia).
`cs-CZ`: Czech (Czech Republic).
`da-DK`: Danish (Denmark).
`nl-BE`: Dutch (Belgium).
`nl-NL`: Dutch (Holland).
`en-AU`: English (Australia).
`en-CA`: English (Canada).
`en-GH`: English (Ghana).
`en-HK`: English (Hong Kong (China)).
`en-IN`: English (India).
`en-IE`: English (Ireland).
`en-KE`: English (Kenya).
`en-NZ`: English (New Zealand).
`en-NG`: English (Nigeria).
`en-PK`: English (Pakistan).
`en-PH`: English (Philippines).
`en-SG`: English (Singapore).
`en-ZA`: English (South Africa).
`en-TZ`: English (Tanzania).
`en-GB`: English (UK).
`en-US`: English (US).
`et-EE`: Estonian (Estonia).
`fil-PH`: Filipino (Philippines).
`fi-FI`: Finnish (Finland).
`fr-BE`: French (Belgium).
`fr-CA`: French (Canada).
`fr-FR`: French (France).
`fr-CH`: French (Switzerland).
`gl-ES`: Galician (Spain).
`ka-GE`: Georgian (Georgia).
`el-GR`: Greek (Greece).
`gu-IN`: Gujarati (India).
`iw-IL`: Hebrew (Israel).
`hi-IN`: Hindi (India).
`hu-HU`: Hungarian (Hungary).
`is-IS`: Icelandic (Iceland).
`id-ID`: Indonesian (Indonesia).
`it-IT`: Italian (Italy).
`it-CH`: Italian (Switzerland).
`ja-JP`: Japanese (Japan).
`jv-ID`: Javanese (Indonesia).
`kn-IN`: Kannada (India).
`kk-KZ`: Kazakh (Kazakhstan).
`km-KH`: Khmer (Cambodia).
`rw-RW`: Kinyarwanda (Rwanda).
`ko-KR`: Korean (South Korea).
`lo-LA`: Lao (Laos).
`lv-LV`: Latvian (Latvia).
`lt-LT`: Lithuanian (Lithuania).
`mk-MK`: Macedonian (North Macedonia).
`ms-MY`: Malay (Malaysia).
`ml-IN`: Malayalam (India).
`mr-IN`: Marathi (India).
`mn-MN`: Mongolian (Mongolia).
`ne-NP`: Nepali (Nepal).
`no-NO`: Bokmål Norwegian (Norway).
`fa-IR`: Persian (Iran).
`pl-PL`: Polish (Poland).
`pt-BR`: Portuguese (Brazil).
`pt-PT`: Portuguese (Portugal).
`ro-RO`: Romanian (Romania).
`ru-RU`: Russian (Russia).
`sr-RS`: Serbian (Serbia).
`si-LK`: Sinhalese (Sri Lanka).
`sk-SK`: Slovak (Slovakia).
`sl-SI`: Slovenian (Slovenia).
`st-ZA`: Sesotho (South Africa).
`es-AR`: Spanish (Argentina).
`es-BO`: Spanish (Bolivia).
`es-CL`: Spanish (Chile).
`es-CO`: Spanish (Colombia).
`es-CR`: Spanish (Costa Rica).
`es-DO`: Spanish (Dominican Republic).
`es-EC`: Spanish (Ecuador).
`es-SV`: Spanish (El Salvador).
`es-GT`: Spanish (Guatemala).
`es-HN`: Spanish (Honduras).
`es-MX`: Spanish (Mexico).
`es-NI`: Spanish (Nicaragua).
`es-PA`: Spanish (Panama).
`es-PY`: Spanish (Paraguay).
`es-PE`: Spanish (Peru).
`es-PR`: Spanish (Puerto Rico).
`es-ES`: Spanish (Spain).
`es-US`: Spanish (US).
`es-UY`: Spanish (Uruguay).
`es-VE`: Spanish (Venezuela).
`su-ID`: Sundanese (Indonesia).
`sw-KE`: Swahili (Kenya).
`sw-TZ`: Swahili (Tanzania).
`sv-SE`: Swedish (Sweden).
`ta-IN`: Tamil (India).
`ta-MY`: Tamil (Malaysia).
`ta-SG`: Tamil (Singapore).
`ta-LK`: Tamil (Sri Lanka).
`te-IN`: Telugu (India).
`th-TH`: Thai (Thailand).
`ts-ZA`: Tsonga (South Africa).
`tr-TR`: Turkish (Turkey).
`uk-UA`: Ukrainian (Ukraine).
`ur-IN`: Urdu (India).
`ur-PK`: Urdu (Pakistan).
`uz-UZ`: Uzbek (Uzbekistan).
`ve-ZA`: Venda (South Africa).
`vi-VN`: Vietnamese (Vietnam).
`xh-ZA`: Xhosa (South Africa).
`zu-ZA`: Zulu (South Africa).

                     * @param _videoSrcLanguage Source language of the video with smart subtitles.
OCR recognition only supports the following languages:
`zh_en`: Chinese and English.
`multi`: others.
ASR recognition and pure subtitle translation currently support the following languages:
`auto`: automatic recognition (it is only supported in pure subtitle translation).
`zh`: Simplified Chinese.
`en`: English.
`ja`: Japanese.
`ko`: Korean.
`zh-PY`: Chinese, English, and Cantonese.
`zh_medical`: Chinese (medical scenario).
`vi`: Vietnamese.
`ms`: Malay.
`id`: Indonesian.
`fil`: Filipino.
`th`: Thai.
`pt`: Portuguese.
`tr`: Turkish.
`ar`: Arabic.
`es`: Spanish.
`hi`: Hindi.
`fr`: French.
`de`: German.
`it`: Italian.
`zh_dialect`: Chinese dialect.
`zh_en`: Chinese and English.
`yue`: Cantonese.
`ru`: Russian.
`prime_zh`: Chinese, English, and Chinese dialects.
`af-ZA`: Afrikaans (South Africa).
`sq-AL`: Albanian (Albania).
`am-ET`: Amharic (Ethiopia).
`ar-DZ`: Arabic (Algeria).
`ar-BH`: Arabic (Bahrain).
`ar-EG`: Arabic (Egypt).
`ar-IQ`: Arabic (Iraq).
`ar-IL`: Arabic (Israel).
`ar-JO`: Arabic (Jordan).
`ar-KW`: Arabic (Kuwait).
`ar-LB`: Arabic (Lebanon).
`ar-MR`: Arabic (Mauritania).
`ar-MA`: Arabic (Morocco).
`ar-OM`: Arabic (Oman).
`ar-QA`: Arabic (Qatar).
`ar-SA`: Arabic (Saudi Arabia).
`ar-PS`: Arabic (State of Palestine).
`ar-SY`: Arabic (Syria).
`ar-TN`: Arabic (Tunisia).
`ar-AE`: Arabic (United Arab Emirates).
`ar-YE`: Arabic (Yemen).
`hy-AM`: Armenian (Armenia).
`az-AZ`: Azerbaijani (Azerbaijan).
`eu-ES`: Basque (Spain).
`bn-BD`: Bengali (Bangladesh).
`bn-IN`: Bengali (India).
`bs-BA`: Bosnian (Bosnia and Herzegovina).
`bg-BG`: Bulgarian (Bulgaria).
`my-MM`: Burmese (Myanmar).
`ca-ES`: Catalan (Spain).
`hr-HR`: Croatian (Croatia).
`cs-CZ`: Czech (Czech Republic).
`da-DK`: Danish (Denmark).
`nl-BE`: Dutch (Belgium).
`nl-NL`: Dutch (Holland).
`en-AU`: English (Australia).
`en-CA`: English (Canada).
`en-GH`: English (Ghana).
`en-HK`: English (Hong Kong (China)).
`en-IN`: English (India).
`en-IE`: English (Ireland).
`en-KE`: English (Kenya).
`en-NZ`: English (New Zealand).
`en-NG`: English (Nigeria).
`en-PK`: English (Pakistan).
`en-PH`: English (Philippines).
`en-SG`: English (Singapore).
`en-ZA`: English (South Africa).
`en-TZ`: English (Tanzania).
`en-GB`: English (UK).
`en-US`: English (US).
`et-EE`: Estonian (Estonia).
`fil-PH`: Filipino (Philippines).
`fi-FI`: Finnish (Finland).
`fr-BE`: French (Belgium).
`fr-CA`: French (Canada).
`fr-FR`: French (France).
`fr-CH`: French (Switzerland).
`gl-ES`: Galician (Spain).
`ka-GE`: Georgian (Georgia).
`el-GR`: Greek (Greece).
`gu-IN`: Gujarati (India).
`iw-IL`: Hebrew (Israel).
`hi-IN`: Hindi (India).
`hu-HU`: Hungarian (Hungary).
`is-IS`: Icelandic (Iceland).
`id-ID`: Indonesian (Indonesia).
`it-IT`: Italian (Italy).
`it-CH`: Italian (Switzerland).
`ja-JP`: Japanese (Japan).
`jv-ID`: Javanese (Indonesia).
`kn-IN`: Kannada (India).
`kk-KZ`: Kazakh (Kazakhstan).
`km-KH`: Khmer (Cambodia).
`rw-RW`: Kinyarwanda (Rwanda).
`ko-KR`: Korean (South Korea).
`lo-LA`: Lao (Laos).
`lv-LV`: Latvian (Latvia).
`lt-LT`: Lithuanian (Lithuania).
`mk-MK`: Macedonian (North Macedonia).
`ms-MY`: Malay (Malaysia).
`ml-IN`: Malayalam (India).
`mr-IN`: Marathi (India).
`mn-MN`: Mongolian (Mongolia).
`ne-NP`: Nepali (Nepal).
`no-NO`: Bokmål Norwegian (Norway).
`fa-IR`: Persian (Iran).
`pl-PL`: Polish (Poland).
`pt-BR`: Portuguese (Brazil).
`pt-PT`: Portuguese (Portugal).
`ro-RO`: Romanian (Romania).
`ru-RU`: Russian (Russia).
`sr-RS`: Serbian (Serbia).
`si-LK`: Sinhalese (Sri Lanka).
`sk-SK`: Slovak (Slovakia).
`sl-SI`: Slovenian (Slovenia).
`st-ZA`: Sesotho (South Africa).
`es-AR`: Spanish (Argentina).
`es-BO`: Spanish (Bolivia).
`es-CL`: Spanish (Chile).
`es-CO`: Spanish (Colombia).
`es-CR`: Spanish (Costa Rica).
`es-DO`: Spanish (Dominican Republic).
`es-EC`: Spanish (Ecuador).
`es-SV`: Spanish (El Salvador).
`es-GT`: Spanish (Guatemala).
`es-HN`: Spanish (Honduras).
`es-MX`: Spanish (Mexico).
`es-NI`: Spanish (Nicaragua).
`es-PA`: Spanish (Panama).
`es-PY`: Spanish (Paraguay).
`es-PE`: Spanish (Peru).
`es-PR`: Spanish (Puerto Rico).
`es-ES`: Spanish (Spain).
`es-US`: Spanish (US).
`es-UY`: Spanish (Uruguay).
`es-VE`: Spanish (Venezuela).
`su-ID`: Sundanese (Indonesia).
`sw-KE`: Swahili (Kenya).
`sw-TZ`: Swahili (Tanzania).
`sv-SE`: Swedish (Sweden).
`ta-IN`: Tamil (India).
`ta-MY`: Tamil (Malaysia).
`ta-SG`: Tamil (Singapore).
`ta-LK`: Tamil (Sri Lanka).
`te-IN`: Telugu (India).
`th-TH`: Thai (Thailand).
`ts-ZA`: Tsonga (South Africa).
`tr-TR`: Turkish (Turkey).
`uk-UA`: Ukrainian (Ukraine).
`ur-IN`: Urdu (India).
`ur-PK`: Urdu (Pakistan).
`uz-UZ`: Uzbek (Uzbekistan).
`ve-ZA`: Venda (South Africa).
`vi-VN`: Vietnamese (Vietnam).
`xh-ZA`: Xhosa (South Africa).
`zu-ZA`: Zulu (South Africa).

                     * 
                     */
                    void SetVideoSrcLanguage(const std::string& _videoSrcLanguage);

                    /**
                     * 判断参数 VideoSrcLanguage 是否已赋值
                     * @return VideoSrcLanguage 是否已赋值
                     * 
                     */
                    bool VideoSrcLanguageHasBeenSet() const;

                    /**
                     * 获取Smart subtitle file format:
- Under the ASR recognition and translation processing type:
     - vtt: WebVTT format subtitle.
     - srt: SRT format subtitle.
     - Unspecified or left blank: no subtitle file generated.
- Under the pure subtitle translation processing type:
    - original: consistent with the source file.
    - vtt: WebVTT format subtitle.
    - srt: SRT format subtitle.
- Under the OCR recognition and translation processing type:
     - vtt: WebVTT format subtitle.
     - srt: SRT format subtitle.
**Note**:
- For ASR recognition mode, when 2 or more languages are involved in translation, this field cannot be unspecified or left blank.
- For pure subtitle translation and OCR recognition mode, this field cannot be unspecified or left blank.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubtitleFormat Smart subtitle file format:
- Under the ASR recognition and translation processing type:
     - vtt: WebVTT format subtitle.
     - srt: SRT format subtitle.
     - Unspecified or left blank: no subtitle file generated.
- Under the pure subtitle translation processing type:
    - original: consistent with the source file.
    - vtt: WebVTT format subtitle.
    - srt: SRT format subtitle.
- Under the OCR recognition and translation processing type:
     - vtt: WebVTT format subtitle.
     - srt: SRT format subtitle.
**Note**:
- For ASR recognition mode, when 2 or more languages are involved in translation, this field cannot be unspecified or left blank.
- For pure subtitle translation and OCR recognition mode, this field cannot be unspecified or left blank.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubtitleFormat() const;

                    /**
                     * 设置Smart subtitle file format:
- Under the ASR recognition and translation processing type:
     - vtt: WebVTT format subtitle.
     - srt: SRT format subtitle.
     - Unspecified or left blank: no subtitle file generated.
- Under the pure subtitle translation processing type:
    - original: consistent with the source file.
    - vtt: WebVTT format subtitle.
    - srt: SRT format subtitle.
- Under the OCR recognition and translation processing type:
     - vtt: WebVTT format subtitle.
     - srt: SRT format subtitle.
**Note**:
- For ASR recognition mode, when 2 or more languages are involved in translation, this field cannot be unspecified or left blank.
- For pure subtitle translation and OCR recognition mode, this field cannot be unspecified or left blank.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _subtitleFormat Smart subtitle file format:
- Under the ASR recognition and translation processing type:
     - vtt: WebVTT format subtitle.
     - srt: SRT format subtitle.
     - Unspecified or left blank: no subtitle file generated.
- Under the pure subtitle translation processing type:
    - original: consistent with the source file.
    - vtt: WebVTT format subtitle.
    - srt: SRT format subtitle.
- Under the OCR recognition and translation processing type:
     - vtt: WebVTT format subtitle.
     - srt: SRT format subtitle.
**Note**:
- For ASR recognition mode, when 2 or more languages are involved in translation, this field cannot be unspecified or left blank.
- For pure subtitle translation and OCR recognition mode, this field cannot be unspecified or left blank.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSubtitleFormat(const std::string& _subtitleFormat);

                    /**
                     * 判断参数 SubtitleFormat 是否已赋值
                     * @return SubtitleFormat 是否已赋值
                     * 
                     */
                    bool SubtitleFormatHasBeenSet() const;

                    /**
                     * 获取Subtitle translation switch.
`ON`: translation enabled.
`OFF`: translation disabled.
**Note**: For pure subtitle translation mode, the default value is enabled if the field is unspecified. The field cannot be left blank or set to `OFF`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TranslateSwitch Subtitle translation switch.
`ON`: translation enabled.
`OFF`: translation disabled.
**Note**: For pure subtitle translation mode, the default value is enabled if the field is unspecified. The field cannot be left blank or set to `OFF`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTranslateSwitch() const;

                    /**
                     * 设置Subtitle translation switch.
`ON`: translation enabled.
`OFF`: translation disabled.
**Note**: For pure subtitle translation mode, the default value is enabled if the field is unspecified. The field cannot be left blank or set to `OFF`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _translateSwitch Subtitle translation switch.
`ON`: translation enabled.
`OFF`: translation disabled.
**Note**: For pure subtitle translation mode, the default value is enabled if the field is unspecified. The field cannot be left blank or set to `OFF`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTranslateSwitch(const std::string& _translateSwitch);

                    /**
                     * 判断参数 TranslateSwitch 是否已赋值
                     * @return TranslateSwitch 是否已赋值
                     * 
                     */
                    bool TranslateSwitchHasBeenSet() const;

                    /**
                     * 获取Target language for subtitle translation.
This field is valid when the value of TranslateSwitch is ON. List of translation languages:
`ab`: Abkhaz language.
`ace`: Acehnese.
`ach`: Acholi.
`af`: Afrikaans.
`ak`: Twi (Akan).
`am`: Amharic.
`ar`: Arabic.
`as`: Assamese.
`ay`: Aymara.
`az`: Azerbaijani.
`ba`: Bashkir.
`ban`: Balinese.
`bbc`: Batak Toba.
`bem`: Bemba.
`bew`: Betawi.
`bg`: Bulgarian.
`bho`: Bhojpuri.
`bik`: Bikol.
`bm`: Bambara.
`bn`: Bengali.
`br`: Breton.
`bs`: Bosnian.
`btx`: Batak Karo.
`bts`: Batak Simalungun.
`bua`: Buryat.
`ca`: Catalan.
`ceb`: Cebuano.
`cgg`: Kiga
`chm`: Meadow Mari language.
`ckb`: Kurdish (Sorani).
`cnh`: Hakha Chin.
`co`: Corsican.
`crh`: Crimean Tatar.
`crs`: Seychellois Creole.
`cs`: Czech.
`cv`: Chuvash.
`cy`: Welsh.
`da`: Danish.
`de`: German.
`din`: Dinka.
`doi`: Dogri.
`dov`: Dombe.
`dv`: Divehi.
`dz`: Dzongkha.
`ee`: Ewe.
`el`: Greek.
`en`: English.
`eo`: Esperanto.
`es`: Spanish.
`et`: Estonian.
`eu`: Basque.
`fa`: Persian.
`ff`: Fula.
`fi`: Finnish.
`fil`: Filipino (Tagalog).
`fj`: Fijian.
`fr`: French.
`fr-CA`: French (Canada).
`fr-FR`: French (France).
`fy`: Frisian.
`ga`: Irish.
`gaa`: Ga.
`gd`: Scottish Gaelic.
`gl`: Galician.
`gn`: Guaraní.
`gom`: Goan Konkani.
`gu`: Gujarati.
`gv`: Manx.
`ha`: Hausa.
`haw`: Hawaiian.
`he`: Hebrew.
`hi`: Hindi.
`hil`: Hiligaynon.
`hmn`: Hmong.
`hr`: Croatian.
`hrx`: Hunsrik.
`ht`: Haitian Creole.
`hu`: Hungarian.
`hy`: Armenian.
`id`: Indonesian.
`ig`: Igbo.
`ilo`: Iloko.
`is`: Icelandic.
`it`: Italian.
`iw`: Hebrew.
`ja`: Japanese.
`jv`: Javanese.
`jw`: Javanese.
`ka`: Georgian.
`kk`: Kazakh.
`km`: Khmer.
`kn`: Kannada.
`ko`: Korean.
`kri`: Krio.
`ku`: Kurdish (Kurmanji).
`ktu`: Kituba.
`ky`: Kirghiz.
`la`: Latin.
`lb`: Luxembourgish.
`lg`: Ganda (Luganda).
`li`: Limburgish.
`lij`: Ligurian.
`lmo`: Lombard.
`ln`: Lingala.
`lo`: Lao.
`lt`: Lithuanian.
`ltg`: Latgalian.
`luo`: Luo.
`lus`: Mizo.
`lv`: Latvian.
`mai`: Maithili.
`mak`: Makassar.
`mg`: Malagasy.
`mi`: Maori.
`min`: Minangkabau.
`mk`: Macedonian.
`ml`: Malayalam.
`mn`: Mongolian.
`mr`: Marathi.
`ms`: Malay.
`mt`: Maltese.
`my`: Burmese.
`ne`: Nepali.
`new`: Newar.
`nl`: Dutch.
`no`: Norwegian.
`nr`: Ndebele (South).
`nso`: Northern Sotho (Sepedi).
`nus`: Nuer.
`ny`: Chichewa (Nyanja).
`oc`: Occitan.
`om`: Oromo.
`or`: Odia.
`pa`: Punjabi.
`pag`: Pangasinan.
`pam`: Kapampangan.
`pap`: Papiamento.
`pl`: Polish.
`ps`: Pashto.
`pt`: Portuguese.
`pt-BR`: Portuguese (Brazil).
`pt-PT`: Portuguese (Portugal).
`qu`: Quechuan.
`ro`: Romanian.
`rom`: Romani.
`rn`: Rundi.
`ru`: Russian.
`rw`: Kinyarwanda.
`sa`: Sanskrit.
`scn`: Sicilian.
`sd`: Sindhi.
`sg`: Sango.
`shn`: Shan.
`si`: Sinhalese.
`sk`: Slovak.
`sl`: Slovene.
`sm`: Samoan.
`sn`: Shona.
`so`: Somali.
`sq`: Albanian.
`sr`: Serbian.
`ss`: Swati.
`st`: Sesotho.
`su`: Sundanese.
`sv`: Swedish.
`sw`: Swahili.
`szl`: Silesian.
`ta`: Tamil.
`te`: Telugu.
`tet`: Tetum.
`tg`: Tajik.
`th`: Thai.
`ti`: Tigrinya.
`tk`: Turkmen.
`tl`: Filipino (Tagalog).
`tn`: Tswana.
`tr`: Turkish.
`ts`: Tsonga.
`tt`: Tatar.
`ug`: Uyghur.
`uk`: Ukrainian.
`ur`: Urdu.
`uz`: Uzbek.
`vi`: Vietnamese.
`xh`: Xhosa.
`yi`: Yiddish.
`yo`: Yoruba.
`yua`: Yucatec Maya.
`yue`: Cantonese.
`zh`: Simplified Chinese.
`zh-TW`: Chinese (Traditional).
`zu`: Zulu.
**Note**: Use `/` to separate multiple languages, such as `en/ja`, which indicates English and Japanese.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TranslateDstLanguage Target language for subtitle translation.
This field is valid when the value of TranslateSwitch is ON. List of translation languages:
`ab`: Abkhaz language.
`ace`: Acehnese.
`ach`: Acholi.
`af`: Afrikaans.
`ak`: Twi (Akan).
`am`: Amharic.
`ar`: Arabic.
`as`: Assamese.
`ay`: Aymara.
`az`: Azerbaijani.
`ba`: Bashkir.
`ban`: Balinese.
`bbc`: Batak Toba.
`bem`: Bemba.
`bew`: Betawi.
`bg`: Bulgarian.
`bho`: Bhojpuri.
`bik`: Bikol.
`bm`: Bambara.
`bn`: Bengali.
`br`: Breton.
`bs`: Bosnian.
`btx`: Batak Karo.
`bts`: Batak Simalungun.
`bua`: Buryat.
`ca`: Catalan.
`ceb`: Cebuano.
`cgg`: Kiga
`chm`: Meadow Mari language.
`ckb`: Kurdish (Sorani).
`cnh`: Hakha Chin.
`co`: Corsican.
`crh`: Crimean Tatar.
`crs`: Seychellois Creole.
`cs`: Czech.
`cv`: Chuvash.
`cy`: Welsh.
`da`: Danish.
`de`: German.
`din`: Dinka.
`doi`: Dogri.
`dov`: Dombe.
`dv`: Divehi.
`dz`: Dzongkha.
`ee`: Ewe.
`el`: Greek.
`en`: English.
`eo`: Esperanto.
`es`: Spanish.
`et`: Estonian.
`eu`: Basque.
`fa`: Persian.
`ff`: Fula.
`fi`: Finnish.
`fil`: Filipino (Tagalog).
`fj`: Fijian.
`fr`: French.
`fr-CA`: French (Canada).
`fr-FR`: French (France).
`fy`: Frisian.
`ga`: Irish.
`gaa`: Ga.
`gd`: Scottish Gaelic.
`gl`: Galician.
`gn`: Guaraní.
`gom`: Goan Konkani.
`gu`: Gujarati.
`gv`: Manx.
`ha`: Hausa.
`haw`: Hawaiian.
`he`: Hebrew.
`hi`: Hindi.
`hil`: Hiligaynon.
`hmn`: Hmong.
`hr`: Croatian.
`hrx`: Hunsrik.
`ht`: Haitian Creole.
`hu`: Hungarian.
`hy`: Armenian.
`id`: Indonesian.
`ig`: Igbo.
`ilo`: Iloko.
`is`: Icelandic.
`it`: Italian.
`iw`: Hebrew.
`ja`: Japanese.
`jv`: Javanese.
`jw`: Javanese.
`ka`: Georgian.
`kk`: Kazakh.
`km`: Khmer.
`kn`: Kannada.
`ko`: Korean.
`kri`: Krio.
`ku`: Kurdish (Kurmanji).
`ktu`: Kituba.
`ky`: Kirghiz.
`la`: Latin.
`lb`: Luxembourgish.
`lg`: Ganda (Luganda).
`li`: Limburgish.
`lij`: Ligurian.
`lmo`: Lombard.
`ln`: Lingala.
`lo`: Lao.
`lt`: Lithuanian.
`ltg`: Latgalian.
`luo`: Luo.
`lus`: Mizo.
`lv`: Latvian.
`mai`: Maithili.
`mak`: Makassar.
`mg`: Malagasy.
`mi`: Maori.
`min`: Minangkabau.
`mk`: Macedonian.
`ml`: Malayalam.
`mn`: Mongolian.
`mr`: Marathi.
`ms`: Malay.
`mt`: Maltese.
`my`: Burmese.
`ne`: Nepali.
`new`: Newar.
`nl`: Dutch.
`no`: Norwegian.
`nr`: Ndebele (South).
`nso`: Northern Sotho (Sepedi).
`nus`: Nuer.
`ny`: Chichewa (Nyanja).
`oc`: Occitan.
`om`: Oromo.
`or`: Odia.
`pa`: Punjabi.
`pag`: Pangasinan.
`pam`: Kapampangan.
`pap`: Papiamento.
`pl`: Polish.
`ps`: Pashto.
`pt`: Portuguese.
`pt-BR`: Portuguese (Brazil).
`pt-PT`: Portuguese (Portugal).
`qu`: Quechuan.
`ro`: Romanian.
`rom`: Romani.
`rn`: Rundi.
`ru`: Russian.
`rw`: Kinyarwanda.
`sa`: Sanskrit.
`scn`: Sicilian.
`sd`: Sindhi.
`sg`: Sango.
`shn`: Shan.
`si`: Sinhalese.
`sk`: Slovak.
`sl`: Slovene.
`sm`: Samoan.
`sn`: Shona.
`so`: Somali.
`sq`: Albanian.
`sr`: Serbian.
`ss`: Swati.
`st`: Sesotho.
`su`: Sundanese.
`sv`: Swedish.
`sw`: Swahili.
`szl`: Silesian.
`ta`: Tamil.
`te`: Telugu.
`tet`: Tetum.
`tg`: Tajik.
`th`: Thai.
`ti`: Tigrinya.
`tk`: Turkmen.
`tl`: Filipino (Tagalog).
`tn`: Tswana.
`tr`: Turkish.
`ts`: Tsonga.
`tt`: Tatar.
`ug`: Uyghur.
`uk`: Ukrainian.
`ur`: Urdu.
`uz`: Uzbek.
`vi`: Vietnamese.
`xh`: Xhosa.
`yi`: Yiddish.
`yo`: Yoruba.
`yua`: Yucatec Maya.
`yue`: Cantonese.
`zh`: Simplified Chinese.
`zh-TW`: Chinese (Traditional).
`zu`: Zulu.
**Note**: Use `/` to separate multiple languages, such as `en/ja`, which indicates English and Japanese.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTranslateDstLanguage() const;

                    /**
                     * 设置Target language for subtitle translation.
This field is valid when the value of TranslateSwitch is ON. List of translation languages:
`ab`: Abkhaz language.
`ace`: Acehnese.
`ach`: Acholi.
`af`: Afrikaans.
`ak`: Twi (Akan).
`am`: Amharic.
`ar`: Arabic.
`as`: Assamese.
`ay`: Aymara.
`az`: Azerbaijani.
`ba`: Bashkir.
`ban`: Balinese.
`bbc`: Batak Toba.
`bem`: Bemba.
`bew`: Betawi.
`bg`: Bulgarian.
`bho`: Bhojpuri.
`bik`: Bikol.
`bm`: Bambara.
`bn`: Bengali.
`br`: Breton.
`bs`: Bosnian.
`btx`: Batak Karo.
`bts`: Batak Simalungun.
`bua`: Buryat.
`ca`: Catalan.
`ceb`: Cebuano.
`cgg`: Kiga
`chm`: Meadow Mari language.
`ckb`: Kurdish (Sorani).
`cnh`: Hakha Chin.
`co`: Corsican.
`crh`: Crimean Tatar.
`crs`: Seychellois Creole.
`cs`: Czech.
`cv`: Chuvash.
`cy`: Welsh.
`da`: Danish.
`de`: German.
`din`: Dinka.
`doi`: Dogri.
`dov`: Dombe.
`dv`: Divehi.
`dz`: Dzongkha.
`ee`: Ewe.
`el`: Greek.
`en`: English.
`eo`: Esperanto.
`es`: Spanish.
`et`: Estonian.
`eu`: Basque.
`fa`: Persian.
`ff`: Fula.
`fi`: Finnish.
`fil`: Filipino (Tagalog).
`fj`: Fijian.
`fr`: French.
`fr-CA`: French (Canada).
`fr-FR`: French (France).
`fy`: Frisian.
`ga`: Irish.
`gaa`: Ga.
`gd`: Scottish Gaelic.
`gl`: Galician.
`gn`: Guaraní.
`gom`: Goan Konkani.
`gu`: Gujarati.
`gv`: Manx.
`ha`: Hausa.
`haw`: Hawaiian.
`he`: Hebrew.
`hi`: Hindi.
`hil`: Hiligaynon.
`hmn`: Hmong.
`hr`: Croatian.
`hrx`: Hunsrik.
`ht`: Haitian Creole.
`hu`: Hungarian.
`hy`: Armenian.
`id`: Indonesian.
`ig`: Igbo.
`ilo`: Iloko.
`is`: Icelandic.
`it`: Italian.
`iw`: Hebrew.
`ja`: Japanese.
`jv`: Javanese.
`jw`: Javanese.
`ka`: Georgian.
`kk`: Kazakh.
`km`: Khmer.
`kn`: Kannada.
`ko`: Korean.
`kri`: Krio.
`ku`: Kurdish (Kurmanji).
`ktu`: Kituba.
`ky`: Kirghiz.
`la`: Latin.
`lb`: Luxembourgish.
`lg`: Ganda (Luganda).
`li`: Limburgish.
`lij`: Ligurian.
`lmo`: Lombard.
`ln`: Lingala.
`lo`: Lao.
`lt`: Lithuanian.
`ltg`: Latgalian.
`luo`: Luo.
`lus`: Mizo.
`lv`: Latvian.
`mai`: Maithili.
`mak`: Makassar.
`mg`: Malagasy.
`mi`: Maori.
`min`: Minangkabau.
`mk`: Macedonian.
`ml`: Malayalam.
`mn`: Mongolian.
`mr`: Marathi.
`ms`: Malay.
`mt`: Maltese.
`my`: Burmese.
`ne`: Nepali.
`new`: Newar.
`nl`: Dutch.
`no`: Norwegian.
`nr`: Ndebele (South).
`nso`: Northern Sotho (Sepedi).
`nus`: Nuer.
`ny`: Chichewa (Nyanja).
`oc`: Occitan.
`om`: Oromo.
`or`: Odia.
`pa`: Punjabi.
`pag`: Pangasinan.
`pam`: Kapampangan.
`pap`: Papiamento.
`pl`: Polish.
`ps`: Pashto.
`pt`: Portuguese.
`pt-BR`: Portuguese (Brazil).
`pt-PT`: Portuguese (Portugal).
`qu`: Quechuan.
`ro`: Romanian.
`rom`: Romani.
`rn`: Rundi.
`ru`: Russian.
`rw`: Kinyarwanda.
`sa`: Sanskrit.
`scn`: Sicilian.
`sd`: Sindhi.
`sg`: Sango.
`shn`: Shan.
`si`: Sinhalese.
`sk`: Slovak.
`sl`: Slovene.
`sm`: Samoan.
`sn`: Shona.
`so`: Somali.
`sq`: Albanian.
`sr`: Serbian.
`ss`: Swati.
`st`: Sesotho.
`su`: Sundanese.
`sv`: Swedish.
`sw`: Swahili.
`szl`: Silesian.
`ta`: Tamil.
`te`: Telugu.
`tet`: Tetum.
`tg`: Tajik.
`th`: Thai.
`ti`: Tigrinya.
`tk`: Turkmen.
`tl`: Filipino (Tagalog).
`tn`: Tswana.
`tr`: Turkish.
`ts`: Tsonga.
`tt`: Tatar.
`ug`: Uyghur.
`uk`: Ukrainian.
`ur`: Urdu.
`uz`: Uzbek.
`vi`: Vietnamese.
`xh`: Xhosa.
`yi`: Yiddish.
`yo`: Yoruba.
`yua`: Yucatec Maya.
`yue`: Cantonese.
`zh`: Simplified Chinese.
`zh-TW`: Chinese (Traditional).
`zu`: Zulu.
**Note**: Use `/` to separate multiple languages, such as `en/ja`, which indicates English and Japanese.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _translateDstLanguage Target language for subtitle translation.
This field is valid when the value of TranslateSwitch is ON. List of translation languages:
`ab`: Abkhaz language.
`ace`: Acehnese.
`ach`: Acholi.
`af`: Afrikaans.
`ak`: Twi (Akan).
`am`: Amharic.
`ar`: Arabic.
`as`: Assamese.
`ay`: Aymara.
`az`: Azerbaijani.
`ba`: Bashkir.
`ban`: Balinese.
`bbc`: Batak Toba.
`bem`: Bemba.
`bew`: Betawi.
`bg`: Bulgarian.
`bho`: Bhojpuri.
`bik`: Bikol.
`bm`: Bambara.
`bn`: Bengali.
`br`: Breton.
`bs`: Bosnian.
`btx`: Batak Karo.
`bts`: Batak Simalungun.
`bua`: Buryat.
`ca`: Catalan.
`ceb`: Cebuano.
`cgg`: Kiga
`chm`: Meadow Mari language.
`ckb`: Kurdish (Sorani).
`cnh`: Hakha Chin.
`co`: Corsican.
`crh`: Crimean Tatar.
`crs`: Seychellois Creole.
`cs`: Czech.
`cv`: Chuvash.
`cy`: Welsh.
`da`: Danish.
`de`: German.
`din`: Dinka.
`doi`: Dogri.
`dov`: Dombe.
`dv`: Divehi.
`dz`: Dzongkha.
`ee`: Ewe.
`el`: Greek.
`en`: English.
`eo`: Esperanto.
`es`: Spanish.
`et`: Estonian.
`eu`: Basque.
`fa`: Persian.
`ff`: Fula.
`fi`: Finnish.
`fil`: Filipino (Tagalog).
`fj`: Fijian.
`fr`: French.
`fr-CA`: French (Canada).
`fr-FR`: French (France).
`fy`: Frisian.
`ga`: Irish.
`gaa`: Ga.
`gd`: Scottish Gaelic.
`gl`: Galician.
`gn`: Guaraní.
`gom`: Goan Konkani.
`gu`: Gujarati.
`gv`: Manx.
`ha`: Hausa.
`haw`: Hawaiian.
`he`: Hebrew.
`hi`: Hindi.
`hil`: Hiligaynon.
`hmn`: Hmong.
`hr`: Croatian.
`hrx`: Hunsrik.
`ht`: Haitian Creole.
`hu`: Hungarian.
`hy`: Armenian.
`id`: Indonesian.
`ig`: Igbo.
`ilo`: Iloko.
`is`: Icelandic.
`it`: Italian.
`iw`: Hebrew.
`ja`: Japanese.
`jv`: Javanese.
`jw`: Javanese.
`ka`: Georgian.
`kk`: Kazakh.
`km`: Khmer.
`kn`: Kannada.
`ko`: Korean.
`kri`: Krio.
`ku`: Kurdish (Kurmanji).
`ktu`: Kituba.
`ky`: Kirghiz.
`la`: Latin.
`lb`: Luxembourgish.
`lg`: Ganda (Luganda).
`li`: Limburgish.
`lij`: Ligurian.
`lmo`: Lombard.
`ln`: Lingala.
`lo`: Lao.
`lt`: Lithuanian.
`ltg`: Latgalian.
`luo`: Luo.
`lus`: Mizo.
`lv`: Latvian.
`mai`: Maithili.
`mak`: Makassar.
`mg`: Malagasy.
`mi`: Maori.
`min`: Minangkabau.
`mk`: Macedonian.
`ml`: Malayalam.
`mn`: Mongolian.
`mr`: Marathi.
`ms`: Malay.
`mt`: Maltese.
`my`: Burmese.
`ne`: Nepali.
`new`: Newar.
`nl`: Dutch.
`no`: Norwegian.
`nr`: Ndebele (South).
`nso`: Northern Sotho (Sepedi).
`nus`: Nuer.
`ny`: Chichewa (Nyanja).
`oc`: Occitan.
`om`: Oromo.
`or`: Odia.
`pa`: Punjabi.
`pag`: Pangasinan.
`pam`: Kapampangan.
`pap`: Papiamento.
`pl`: Polish.
`ps`: Pashto.
`pt`: Portuguese.
`pt-BR`: Portuguese (Brazil).
`pt-PT`: Portuguese (Portugal).
`qu`: Quechuan.
`ro`: Romanian.
`rom`: Romani.
`rn`: Rundi.
`ru`: Russian.
`rw`: Kinyarwanda.
`sa`: Sanskrit.
`scn`: Sicilian.
`sd`: Sindhi.
`sg`: Sango.
`shn`: Shan.
`si`: Sinhalese.
`sk`: Slovak.
`sl`: Slovene.
`sm`: Samoan.
`sn`: Shona.
`so`: Somali.
`sq`: Albanian.
`sr`: Serbian.
`ss`: Swati.
`st`: Sesotho.
`su`: Sundanese.
`sv`: Swedish.
`sw`: Swahili.
`szl`: Silesian.
`ta`: Tamil.
`te`: Telugu.
`tet`: Tetum.
`tg`: Tajik.
`th`: Thai.
`ti`: Tigrinya.
`tk`: Turkmen.
`tl`: Filipino (Tagalog).
`tn`: Tswana.
`tr`: Turkish.
`ts`: Tsonga.
`tt`: Tatar.
`ug`: Uyghur.
`uk`: Ukrainian.
`ur`: Urdu.
`uz`: Uzbek.
`vi`: Vietnamese.
`xh`: Xhosa.
`yi`: Yiddish.
`yo`: Yoruba.
`yua`: Yucatec Maya.
`yue`: Cantonese.
`zh`: Simplified Chinese.
`zh-TW`: Chinese (Traditional).
`zu`: Zulu.
**Note**: Use `/` to separate multiple languages, such as `en/ja`, which indicates English and Japanese.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTranslateDstLanguage(const std::string& _translateDstLanguage);

                    /**
                     * 判断参数 TranslateDstLanguage 是否已赋值
                     * @return TranslateDstLanguage 是否已赋值
                     * 
                     */
                    bool TranslateDstLanguageHasBeenSet() const;

                    /**
                     * 获取ASR hotword lexicon parameter.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return AsrHotWordsConfigure ASR hotword lexicon parameter.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    AsrHotWordsConfigure GetAsrHotWordsConfigure() const;

                    /**
                     * 设置ASR hotword lexicon parameter.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _asrHotWordsConfigure ASR hotword lexicon parameter.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAsrHotWordsConfigure(const AsrHotWordsConfigure& _asrHotWordsConfigure);

                    /**
                     * 判断参数 AsrHotWordsConfigure 是否已赋值
                     * @return AsrHotWordsConfigure 是否已赋值
                     * 
                     */
                    bool AsrHotWordsConfigureHasBeenSet() const;

                    /**
                     * 获取Custom parameter.
                     * @return ExtInfo Custom parameter.
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置Custom parameter.
                     * @param _extInfo Custom parameter.
                     * 
                     */
                    void SetExtInfo(const std::string& _extInfo);

                    /**
                     * 判断参数 ExtInfo 是否已赋值
                     * @return ExtInfo 是否已赋值
                     * 
                     */
                    bool ExtInfoHasBeenSet() const;

                    /**
                     * 获取Subtitle processing type:
- 0: ASR recognition subtitle.
- 1: pure subtitle translation.
- 2: OCR recognition subtitle.
**Note**: The default processing type is ASR recognition subtitle if the field is unspecified.
                     * @return ProcessType Subtitle processing type:
- 0: ASR recognition subtitle.
- 1: pure subtitle translation.
- 2: OCR recognition subtitle.
**Note**: The default processing type is ASR recognition subtitle if the field is unspecified.
                     * 
                     */
                    uint64_t GetProcessType() const;

                    /**
                     * 设置Subtitle processing type:
- 0: ASR recognition subtitle.
- 1: pure subtitle translation.
- 2: OCR recognition subtitle.
**Note**: The default processing type is ASR recognition subtitle if the field is unspecified.
                     * @param _processType Subtitle processing type:
- 0: ASR recognition subtitle.
- 1: pure subtitle translation.
- 2: OCR recognition subtitle.
**Note**: The default processing type is ASR recognition subtitle if the field is unspecified.
                     * 
                     */
                    void SetProcessType(const uint64_t& _processType);

                    /**
                     * 判断参数 ProcessType 是否已赋值
                     * @return ProcessType 是否已赋值
                     * 
                     */
                    bool ProcessTypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return SelectingSubtitleAreasConfig 
                     * 
                     */
                    SelectingSubtitleAreasConfig GetSelectingSubtitleAreasConfig() const;

                    /**
                     * 设置
                     * @param _selectingSubtitleAreasConfig 
                     * 
                     */
                    void SetSelectingSubtitleAreasConfig(const SelectingSubtitleAreasConfig& _selectingSubtitleAreasConfig);

                    /**
                     * 判断参数 SelectingSubtitleAreasConfig 是否已赋值
                     * @return SelectingSubtitleAreasConfig 是否已赋值
                     * 
                     */
                    bool SelectingSubtitleAreasConfigHasBeenSet() const;

                private:

                    /**
                     * Smart subtitle language type.
0: source language
1: target language
2: source language + target language
The value can only be 0 when TranslateSwitch is set to OFF. The value can only be 1 or 2 when TranslateSwitch is set to ON.
                     */
                    int64_t m_subtitleType;
                    bool m_subtitleTypeHasBeenSet;

                    /**
                     * Source language of the video with smart subtitles.
OCR recognition only supports the following languages:
`zh_en`: Chinese and English.
`multi`: others.
ASR recognition and pure subtitle translation currently support the following languages:
`auto`: automatic recognition (it is only supported in pure subtitle translation).
`zh`: Simplified Chinese.
`en`: English.
`ja`: Japanese.
`ko`: Korean.
`zh-PY`: Chinese, English, and Cantonese.
`zh_medical`: Chinese (medical scenario).
`vi`: Vietnamese.
`ms`: Malay.
`id`: Indonesian.
`fil`: Filipino.
`th`: Thai.
`pt`: Portuguese.
`tr`: Turkish.
`ar`: Arabic.
`es`: Spanish.
`hi`: Hindi.
`fr`: French.
`de`: German.
`it`: Italian.
`zh_dialect`: Chinese dialect.
`zh_en`: Chinese and English.
`yue`: Cantonese.
`ru`: Russian.
`prime_zh`: Chinese, English, and Chinese dialects.
`af-ZA`: Afrikaans (South Africa).
`sq-AL`: Albanian (Albania).
`am-ET`: Amharic (Ethiopia).
`ar-DZ`: Arabic (Algeria).
`ar-BH`: Arabic (Bahrain).
`ar-EG`: Arabic (Egypt).
`ar-IQ`: Arabic (Iraq).
`ar-IL`: Arabic (Israel).
`ar-JO`: Arabic (Jordan).
`ar-KW`: Arabic (Kuwait).
`ar-LB`: Arabic (Lebanon).
`ar-MR`: Arabic (Mauritania).
`ar-MA`: Arabic (Morocco).
`ar-OM`: Arabic (Oman).
`ar-QA`: Arabic (Qatar).
`ar-SA`: Arabic (Saudi Arabia).
`ar-PS`: Arabic (State of Palestine).
`ar-SY`: Arabic (Syria).
`ar-TN`: Arabic (Tunisia).
`ar-AE`: Arabic (United Arab Emirates).
`ar-YE`: Arabic (Yemen).
`hy-AM`: Armenian (Armenia).
`az-AZ`: Azerbaijani (Azerbaijan).
`eu-ES`: Basque (Spain).
`bn-BD`: Bengali (Bangladesh).
`bn-IN`: Bengali (India).
`bs-BA`: Bosnian (Bosnia and Herzegovina).
`bg-BG`: Bulgarian (Bulgaria).
`my-MM`: Burmese (Myanmar).
`ca-ES`: Catalan (Spain).
`hr-HR`: Croatian (Croatia).
`cs-CZ`: Czech (Czech Republic).
`da-DK`: Danish (Denmark).
`nl-BE`: Dutch (Belgium).
`nl-NL`: Dutch (Holland).
`en-AU`: English (Australia).
`en-CA`: English (Canada).
`en-GH`: English (Ghana).
`en-HK`: English (Hong Kong (China)).
`en-IN`: English (India).
`en-IE`: English (Ireland).
`en-KE`: English (Kenya).
`en-NZ`: English (New Zealand).
`en-NG`: English (Nigeria).
`en-PK`: English (Pakistan).
`en-PH`: English (Philippines).
`en-SG`: English (Singapore).
`en-ZA`: English (South Africa).
`en-TZ`: English (Tanzania).
`en-GB`: English (UK).
`en-US`: English (US).
`et-EE`: Estonian (Estonia).
`fil-PH`: Filipino (Philippines).
`fi-FI`: Finnish (Finland).
`fr-BE`: French (Belgium).
`fr-CA`: French (Canada).
`fr-FR`: French (France).
`fr-CH`: French (Switzerland).
`gl-ES`: Galician (Spain).
`ka-GE`: Georgian (Georgia).
`el-GR`: Greek (Greece).
`gu-IN`: Gujarati (India).
`iw-IL`: Hebrew (Israel).
`hi-IN`: Hindi (India).
`hu-HU`: Hungarian (Hungary).
`is-IS`: Icelandic (Iceland).
`id-ID`: Indonesian (Indonesia).
`it-IT`: Italian (Italy).
`it-CH`: Italian (Switzerland).
`ja-JP`: Japanese (Japan).
`jv-ID`: Javanese (Indonesia).
`kn-IN`: Kannada (India).
`kk-KZ`: Kazakh (Kazakhstan).
`km-KH`: Khmer (Cambodia).
`rw-RW`: Kinyarwanda (Rwanda).
`ko-KR`: Korean (South Korea).
`lo-LA`: Lao (Laos).
`lv-LV`: Latvian (Latvia).
`lt-LT`: Lithuanian (Lithuania).
`mk-MK`: Macedonian (North Macedonia).
`ms-MY`: Malay (Malaysia).
`ml-IN`: Malayalam (India).
`mr-IN`: Marathi (India).
`mn-MN`: Mongolian (Mongolia).
`ne-NP`: Nepali (Nepal).
`no-NO`: Bokmål Norwegian (Norway).
`fa-IR`: Persian (Iran).
`pl-PL`: Polish (Poland).
`pt-BR`: Portuguese (Brazil).
`pt-PT`: Portuguese (Portugal).
`ro-RO`: Romanian (Romania).
`ru-RU`: Russian (Russia).
`sr-RS`: Serbian (Serbia).
`si-LK`: Sinhalese (Sri Lanka).
`sk-SK`: Slovak (Slovakia).
`sl-SI`: Slovenian (Slovenia).
`st-ZA`: Sesotho (South Africa).
`es-AR`: Spanish (Argentina).
`es-BO`: Spanish (Bolivia).
`es-CL`: Spanish (Chile).
`es-CO`: Spanish (Colombia).
`es-CR`: Spanish (Costa Rica).
`es-DO`: Spanish (Dominican Republic).
`es-EC`: Spanish (Ecuador).
`es-SV`: Spanish (El Salvador).
`es-GT`: Spanish (Guatemala).
`es-HN`: Spanish (Honduras).
`es-MX`: Spanish (Mexico).
`es-NI`: Spanish (Nicaragua).
`es-PA`: Spanish (Panama).
`es-PY`: Spanish (Paraguay).
`es-PE`: Spanish (Peru).
`es-PR`: Spanish (Puerto Rico).
`es-ES`: Spanish (Spain).
`es-US`: Spanish (US).
`es-UY`: Spanish (Uruguay).
`es-VE`: Spanish (Venezuela).
`su-ID`: Sundanese (Indonesia).
`sw-KE`: Swahili (Kenya).
`sw-TZ`: Swahili (Tanzania).
`sv-SE`: Swedish (Sweden).
`ta-IN`: Tamil (India).
`ta-MY`: Tamil (Malaysia).
`ta-SG`: Tamil (Singapore).
`ta-LK`: Tamil (Sri Lanka).
`te-IN`: Telugu (India).
`th-TH`: Thai (Thailand).
`ts-ZA`: Tsonga (South Africa).
`tr-TR`: Turkish (Turkey).
`uk-UA`: Ukrainian (Ukraine).
`ur-IN`: Urdu (India).
`ur-PK`: Urdu (Pakistan).
`uz-UZ`: Uzbek (Uzbekistan).
`ve-ZA`: Venda (South Africa).
`vi-VN`: Vietnamese (Vietnam).
`xh-ZA`: Xhosa (South Africa).
`zu-ZA`: Zulu (South Africa).

                     */
                    std::string m_videoSrcLanguage;
                    bool m_videoSrcLanguageHasBeenSet;

                    /**
                     * Smart subtitle file format:
- Under the ASR recognition and translation processing type:
     - vtt: WebVTT format subtitle.
     - srt: SRT format subtitle.
     - Unspecified or left blank: no subtitle file generated.
- Under the pure subtitle translation processing type:
    - original: consistent with the source file.
    - vtt: WebVTT format subtitle.
    - srt: SRT format subtitle.
- Under the OCR recognition and translation processing type:
     - vtt: WebVTT format subtitle.
     - srt: SRT format subtitle.
**Note**:
- For ASR recognition mode, when 2 or more languages are involved in translation, this field cannot be unspecified or left blank.
- For pure subtitle translation and OCR recognition mode, this field cannot be unspecified or left blank.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subtitleFormat;
                    bool m_subtitleFormatHasBeenSet;

                    /**
                     * Subtitle translation switch.
`ON`: translation enabled.
`OFF`: translation disabled.
**Note**: For pure subtitle translation mode, the default value is enabled if the field is unspecified. The field cannot be left blank or set to `OFF`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_translateSwitch;
                    bool m_translateSwitchHasBeenSet;

                    /**
                     * Target language for subtitle translation.
This field is valid when the value of TranslateSwitch is ON. List of translation languages:
`ab`: Abkhaz language.
`ace`: Acehnese.
`ach`: Acholi.
`af`: Afrikaans.
`ak`: Twi (Akan).
`am`: Amharic.
`ar`: Arabic.
`as`: Assamese.
`ay`: Aymara.
`az`: Azerbaijani.
`ba`: Bashkir.
`ban`: Balinese.
`bbc`: Batak Toba.
`bem`: Bemba.
`bew`: Betawi.
`bg`: Bulgarian.
`bho`: Bhojpuri.
`bik`: Bikol.
`bm`: Bambara.
`bn`: Bengali.
`br`: Breton.
`bs`: Bosnian.
`btx`: Batak Karo.
`bts`: Batak Simalungun.
`bua`: Buryat.
`ca`: Catalan.
`ceb`: Cebuano.
`cgg`: Kiga
`chm`: Meadow Mari language.
`ckb`: Kurdish (Sorani).
`cnh`: Hakha Chin.
`co`: Corsican.
`crh`: Crimean Tatar.
`crs`: Seychellois Creole.
`cs`: Czech.
`cv`: Chuvash.
`cy`: Welsh.
`da`: Danish.
`de`: German.
`din`: Dinka.
`doi`: Dogri.
`dov`: Dombe.
`dv`: Divehi.
`dz`: Dzongkha.
`ee`: Ewe.
`el`: Greek.
`en`: English.
`eo`: Esperanto.
`es`: Spanish.
`et`: Estonian.
`eu`: Basque.
`fa`: Persian.
`ff`: Fula.
`fi`: Finnish.
`fil`: Filipino (Tagalog).
`fj`: Fijian.
`fr`: French.
`fr-CA`: French (Canada).
`fr-FR`: French (France).
`fy`: Frisian.
`ga`: Irish.
`gaa`: Ga.
`gd`: Scottish Gaelic.
`gl`: Galician.
`gn`: Guaraní.
`gom`: Goan Konkani.
`gu`: Gujarati.
`gv`: Manx.
`ha`: Hausa.
`haw`: Hawaiian.
`he`: Hebrew.
`hi`: Hindi.
`hil`: Hiligaynon.
`hmn`: Hmong.
`hr`: Croatian.
`hrx`: Hunsrik.
`ht`: Haitian Creole.
`hu`: Hungarian.
`hy`: Armenian.
`id`: Indonesian.
`ig`: Igbo.
`ilo`: Iloko.
`is`: Icelandic.
`it`: Italian.
`iw`: Hebrew.
`ja`: Japanese.
`jv`: Javanese.
`jw`: Javanese.
`ka`: Georgian.
`kk`: Kazakh.
`km`: Khmer.
`kn`: Kannada.
`ko`: Korean.
`kri`: Krio.
`ku`: Kurdish (Kurmanji).
`ktu`: Kituba.
`ky`: Kirghiz.
`la`: Latin.
`lb`: Luxembourgish.
`lg`: Ganda (Luganda).
`li`: Limburgish.
`lij`: Ligurian.
`lmo`: Lombard.
`ln`: Lingala.
`lo`: Lao.
`lt`: Lithuanian.
`ltg`: Latgalian.
`luo`: Luo.
`lus`: Mizo.
`lv`: Latvian.
`mai`: Maithili.
`mak`: Makassar.
`mg`: Malagasy.
`mi`: Maori.
`min`: Minangkabau.
`mk`: Macedonian.
`ml`: Malayalam.
`mn`: Mongolian.
`mr`: Marathi.
`ms`: Malay.
`mt`: Maltese.
`my`: Burmese.
`ne`: Nepali.
`new`: Newar.
`nl`: Dutch.
`no`: Norwegian.
`nr`: Ndebele (South).
`nso`: Northern Sotho (Sepedi).
`nus`: Nuer.
`ny`: Chichewa (Nyanja).
`oc`: Occitan.
`om`: Oromo.
`or`: Odia.
`pa`: Punjabi.
`pag`: Pangasinan.
`pam`: Kapampangan.
`pap`: Papiamento.
`pl`: Polish.
`ps`: Pashto.
`pt`: Portuguese.
`pt-BR`: Portuguese (Brazil).
`pt-PT`: Portuguese (Portugal).
`qu`: Quechuan.
`ro`: Romanian.
`rom`: Romani.
`rn`: Rundi.
`ru`: Russian.
`rw`: Kinyarwanda.
`sa`: Sanskrit.
`scn`: Sicilian.
`sd`: Sindhi.
`sg`: Sango.
`shn`: Shan.
`si`: Sinhalese.
`sk`: Slovak.
`sl`: Slovene.
`sm`: Samoan.
`sn`: Shona.
`so`: Somali.
`sq`: Albanian.
`sr`: Serbian.
`ss`: Swati.
`st`: Sesotho.
`su`: Sundanese.
`sv`: Swedish.
`sw`: Swahili.
`szl`: Silesian.
`ta`: Tamil.
`te`: Telugu.
`tet`: Tetum.
`tg`: Tajik.
`th`: Thai.
`ti`: Tigrinya.
`tk`: Turkmen.
`tl`: Filipino (Tagalog).
`tn`: Tswana.
`tr`: Turkish.
`ts`: Tsonga.
`tt`: Tatar.
`ug`: Uyghur.
`uk`: Ukrainian.
`ur`: Urdu.
`uz`: Uzbek.
`vi`: Vietnamese.
`xh`: Xhosa.
`yi`: Yiddish.
`yo`: Yoruba.
`yua`: Yucatec Maya.
`yue`: Cantonese.
`zh`: Simplified Chinese.
`zh-TW`: Chinese (Traditional).
`zu`: Zulu.
**Note**: Use `/` to separate multiple languages, such as `en/ja`, which indicates English and Japanese.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_translateDstLanguage;
                    bool m_translateDstLanguageHasBeenSet;

                    /**
                     * ASR hotword lexicon parameter.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    AsrHotWordsConfigure m_asrHotWordsConfigure;
                    bool m_asrHotWordsConfigureHasBeenSet;

                    /**
                     * Custom parameter.
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                    /**
                     * Subtitle processing type:
- 0: ASR recognition subtitle.
- 1: pure subtitle translation.
- 2: OCR recognition subtitle.
**Note**: The default processing type is ASR recognition subtitle if the field is unspecified.
                     */
                    uint64_t m_processType;
                    bool m_processTypeHasBeenSet;

                    /**
                     * 
                     */
                    SelectingSubtitleAreasConfig m_selectingSubtitleAreasConfig;
                    bool m_selectingSubtitleAreasConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_RAWSMARTSUBTITLEPARAMETER_H_
