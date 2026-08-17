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
                     * 获取<p>Smart subtitle language type.<br>0: source language.<br>1: target language.<br>2: source language and target language.<br>Only 0 is supported when TranslateSwitch is OFF.<br>Only 1 or 2 is supported when TranslateSwitch is ON.</p>
                     * @return SubtitleType <p>Smart subtitle language type.<br>0: source language.<br>1: target language.<br>2: source language and target language.<br>Only 0 is supported when TranslateSwitch is OFF.<br>Only 1 or 2 is supported when TranslateSwitch is ON.</p>
                     * 
                     */
                    int64_t GetSubtitleType() const;

                    /**
                     * 设置<p>Smart subtitle language type.<br>0: source language.<br>1: target language.<br>2: source language and target language.<br>Only 0 is supported when TranslateSwitch is OFF.<br>Only 1 or 2 is supported when TranslateSwitch is ON.</p>
                     * @param _subtitleType <p>Smart subtitle language type.<br>0: source language.<br>1: target language.<br>2: source language and target language.<br>Only 0 is supported when TranslateSwitch is OFF.<br>Only 1 or 2 is supported when TranslateSwitch is ON.</p>
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
                     * 获取<p>Smart subtitling video source language<br>OCR recognition supports the following languages:<br><code>zh_en</code>: Chinese-English<br><code>multi</code>: Other<br>ASR recognition and pure caption translation currently support the following languages:<br><code>auto</code>: Auto-identification<br><code>zh</code>: Simplified Chinese<br><code>en</code>: English<br><code>ja</code>: Japanese<br><code>ko</code>: Korean<br><code>zh-PY</code>: Chinese-English-Cantonese<br><code>zh_medical</code>: Chinese health care<br><code>vi</code>: Vietnamese<br><code>ms</code>: Malay<br><code>id</code>: Indonesian<br><code>fil</code>: Filipino<br><code>th</code>: Thai<br><code>pt</code>: Portuguese<br><code>tr</code>: Turkish<br><code>ar</code>: Arabic<br><code>es</code>: Spanish<br><code>hi</code>: Hindi<br><code>fr</code>: French<br><code>de</code>: German<br><code>it</code>: Italian<br><code>zh_dialect</code>: Chinese dialect<br><code>zh_en</code>: Chinese-English<br><code>yue</code>: Cantonese<br><code>ru</code>: Russian<br><code>prime_zh</code>: Chinese-English dialect<br><code>af-ZA</code>: Afrikaans (South Africa)<br><code>sq-AL</code>: Albanian (Albania)<br><code>am-ET</code>: Amharic (Ethiopia)<br><code>ar-DZ</code>: Arabic (Algeria)<br><code>ar-BH</code>: Arabic (Bahrain)<br><code>ar-EG</code>: Arabic (Egypt)<br><code>ar-IQ</code>: Arabic (Iraq)<br><code>ar-IL</code>: Arabic (Israel)<br><code>ar-JO</code>: Arabic (Jordan)<br><code>ar-KW</code>: Arabic (Kuwait)<br><code>ar-LB</code>: Arabic (Lebanon)<br><code>ar-MR</code>: Arabic (Mauritania)<br><code>ar-MA</code>: Arabic (Morocco)<br><code>ar-OM</code>: Arabic (Oman)<br><code>ar-QA</code>: Arabic (Qatar)<br><code>ar-SA</code>: Arabic (Saudi Arabia)<br><code>ar-PS</code>: Arabic (State of Palestine)<br><code>ar-SY</code>: Arabic (Syria)<br><code>ar-TN</code>: Arabic (Tunisia)<br><code>ar-AE</code>: Arabic (United Arab Emirates)<br><code>ar-YE</code>: Arabic (Yemen)<br><code>hy-AM</code>: Armenian (Armenia)<br><code>az-AZ</code>: Azerbaijani (Azerbaijan)<br><code>eu-ES</code>: Basque (Spain)<br><code>bn-BD</code>: Bengali (Bangladesh)<br><code>bn-IN</code>: Bengali (India)<br><code>bs-BA</code>: Bosnian (Bosnia and Herzegovina)<br><code>bg-BG</code>: Bulgarian (Bulgaria)<br><code>my-MM</code>: Burmese (Myanmar)<br><code>ca-ES</code>: Catalan (Spain)<br><code>hr-HR</code>: Croatian (Croatia)<br><code>cs-CZ</code>: Czech (Czech Republic)<br><code>da-DK</code>: Danish (Denmark)<br><code>nl-BE</code>: Dutch (Belgium)<br><code>nl-NL</code>: Dutch (Netherlands)<br><code>en-AU</code>: English (Australia)<br><code>en-CA</code>: English (Canada)<br><code>en-GH</code>: English (Ghana)<br><code>en-HK</code>: English (Hong Kong (China))<br><code>en-IN</code>: English (India)<br><code>en-IE</code>: English (Ireland)<br><code>en-KE</code>: English (Kenya)<br><code>en-NZ</code>: English (New Zealand)<br><code>en-NG</code>: English (Nigeria)<br><code>en-PK</code>: English (Pakistan)<br><code>en-PH</code>: English (Philippines)<br><code>en-SG</code>: English (Singapore)<br><code>en-ZA</code>: English (South Africa)<br><code>en-TZ</code>: English (Tanzania)<br><code>en-GB</code>: English (UK)<br><code>en-US</code>: English (United States)<br><code>et-EE</code>: Estonian (Estonia)<br><code>fil-PH</code>: Filipino (Philippines)<br><code>fi-FI</code>: Finnish (Finland)<br><code>fr-BE</code>: French (Belgium)<br><code>fr-CA</code>: French (Canada)<br><code>fr-FR</code>: French (France)<br><code>fr-CH</code>: French (Switzerland)<br><code>gl-ES</code>: Galician (Spain)<br><code>ka-GE</code>: Georgian (Georgia)<br><code>el-GR</code>: Greek (Greece)<br><code>gu-IN</code>: Gujarati (India)<br><code>iw-IL</code>: Hebrew (Israel)<br><code>hi-IN</code>: Hindi (India)<br><code>hu-HU</code>: Hungarian (Hungary)<br><code>is-IS</code>: Icelandic (Iceland)<br><code>id-ID</code>: Indonesian (Indonesia)<br><code>it-IT</code>: Italian (Italy)<br><code>it-CH</code>: Italian (Switzerland)<br><code>ja-JP</code>: Japanese (Japan)<br><code>jv-ID</code>: Javanese (Indonesia)<br><code>kn-IN</code>: Kannada (India)<br><code>kk-KZ</code>: Kazakh (Kazakhstan)<br><code>km-KH</code>: Khmer (Cambodia)<br><code>rw-RW</code>: Kinyarwanda (Rwanda)<br><code>ko-KR</code>: Korean (South Korea)<br><code>lo-LA</code>: Lao (Laos)<br><code>lv-LV</code>: Latvian (Latvia)<br><code>lt-LT</code>: Lithuanian (Lithuania)<br><code>mk-MK</code>: Macedonian (North Macedonia)<br><code>ms-MY</code>: Malay (Malaysia)<br><code>ml-IN</code>: Malayalam (India)<br><code>mr-IN</code>: Marathi (India)<br><code>mn-MN</code>: Mongolian (Mongolia)<br><code>ne-NP</code>: Nepali (Nepal)<br><code>no-NO</code>: Norwegian Bokmål (Norway)<br><code>fa-IR</code>: Persian (Iran)<br><code>pl-PL</code>: Polish (Poland)<br><code>pt-BR</code>: Portuguese (Brazil)<br><code>pt-PT</code>: Portuguese (Portugal)<br><code>ro-RO</code>: Romanian (Romania)<br><code>ru-RU</code>: Russian (Russia)<br><code>sr-RS</code>: Serbian (Serbia)<br><code>si-LK</code>: Sinhalese (Sri Lanka)<br><code>sk-SK</code>: Slovak (Slovakia)<br><code>sl-SI</code>: Slovenian (Slovenia)<br><code>st-ZA</code>: Southern Sotho (South Africa)<br><code>es-AR</code>: Spanish (Argentina)<br><code>es-BO</code>: Spanish (Bolivia)<br><code>es-CL</code>: Spanish (Chile)<br><code>es-CO</code>: Spanish (Colombia)<br><code>es-CR</code>: Spanish (Costa Rica)<br><code>es-DO</code>: Spanish (Dominican Republic)<br><code>es-EC</code>: Spanish (Ecuador)<br><code>es-SV</code>: Spanish (El Salvador)<br><code>es-GT</code>: Spanish (Guatemala)<br><code>es-HN</code>: Spanish (Honduras)<br><code>es-MX</code>: Spanish (Mexico)<br><code>es-NI</code>: Spanish (Nicaragua)<br><code>es-PA</code>: Spanish (Panama)<br><code>es-PY</code>: Spanish (Paraguay)<br><code>es-PE</code>: Spanish (Peru)<br><code>es-PR</code>: Spanish (Puerto Rico)<br><code>es-ES</code>: Spanish (Spain)<br><code>es-US</code>: Spanish (United States)<br><code>es-UY</code>: Spanish (Uruguay)<br><code>es-VE</code>: Spanish (Venezuela)<br><code>su-ID</code>: Sundanese (Indonesia)<br><code>sw-KE</code>: Swahili (Kenya)<br><code>sw-TZ</code>: Swahili (Tanzania)<br><code>sv-SE</code>: Swedish (Sweden)<br><code>ta-IN</code>: Tamil (India)<br><code>ta-MY</code>: Tamil (Malaysia)<br><code>ta-SG</code>: Tamil (Singapore)<br><code>ta-LK</code>: Tamil (Sri Lanka)<br><code>te-IN</code>: Telugu (India)<br><code>th-TH</code>: Thai (Thailand)<br><code>ts-ZA</code>: Tsonga (South Africa)<br><code>tr-TR</code>: Turkish (Türkiye)<br><code>uk-UA</code>: Ukrainian (Ukraine)<br><code>ur-IN</code>: Urdu (India)<br><code>ur-PK</code>: Urdu (Pakistan)<br><code>uz-UZ</code>: Uzbek (Uzbekistan)<br><code>ve-ZA</code>: Venda (South Africa)<code>vi-VN</code>: Vietnamese (Vietnam)<br><code>xh-ZA</code>: Xhosa (South Africa)<br><code>zu-ZA</code>: Zulu (South Africa)</p>
                     * @return VideoSrcLanguage <p>Smart subtitling video source language<br>OCR recognition supports the following languages:<br><code>zh_en</code>: Chinese-English<br><code>multi</code>: Other<br>ASR recognition and pure caption translation currently support the following languages:<br><code>auto</code>: Auto-identification<br><code>zh</code>: Simplified Chinese<br><code>en</code>: English<br><code>ja</code>: Japanese<br><code>ko</code>: Korean<br><code>zh-PY</code>: Chinese-English-Cantonese<br><code>zh_medical</code>: Chinese health care<br><code>vi</code>: Vietnamese<br><code>ms</code>: Malay<br><code>id</code>: Indonesian<br><code>fil</code>: Filipino<br><code>th</code>: Thai<br><code>pt</code>: Portuguese<br><code>tr</code>: Turkish<br><code>ar</code>: Arabic<br><code>es</code>: Spanish<br><code>hi</code>: Hindi<br><code>fr</code>: French<br><code>de</code>: German<br><code>it</code>: Italian<br><code>zh_dialect</code>: Chinese dialect<br><code>zh_en</code>: Chinese-English<br><code>yue</code>: Cantonese<br><code>ru</code>: Russian<br><code>prime_zh</code>: Chinese-English dialect<br><code>af-ZA</code>: Afrikaans (South Africa)<br><code>sq-AL</code>: Albanian (Albania)<br><code>am-ET</code>: Amharic (Ethiopia)<br><code>ar-DZ</code>: Arabic (Algeria)<br><code>ar-BH</code>: Arabic (Bahrain)<br><code>ar-EG</code>: Arabic (Egypt)<br><code>ar-IQ</code>: Arabic (Iraq)<br><code>ar-IL</code>: Arabic (Israel)<br><code>ar-JO</code>: Arabic (Jordan)<br><code>ar-KW</code>: Arabic (Kuwait)<br><code>ar-LB</code>: Arabic (Lebanon)<br><code>ar-MR</code>: Arabic (Mauritania)<br><code>ar-MA</code>: Arabic (Morocco)<br><code>ar-OM</code>: Arabic (Oman)<br><code>ar-QA</code>: Arabic (Qatar)<br><code>ar-SA</code>: Arabic (Saudi Arabia)<br><code>ar-PS</code>: Arabic (State of Palestine)<br><code>ar-SY</code>: Arabic (Syria)<br><code>ar-TN</code>: Arabic (Tunisia)<br><code>ar-AE</code>: Arabic (United Arab Emirates)<br><code>ar-YE</code>: Arabic (Yemen)<br><code>hy-AM</code>: Armenian (Armenia)<br><code>az-AZ</code>: Azerbaijani (Azerbaijan)<br><code>eu-ES</code>: Basque (Spain)<br><code>bn-BD</code>: Bengali (Bangladesh)<br><code>bn-IN</code>: Bengali (India)<br><code>bs-BA</code>: Bosnian (Bosnia and Herzegovina)<br><code>bg-BG</code>: Bulgarian (Bulgaria)<br><code>my-MM</code>: Burmese (Myanmar)<br><code>ca-ES</code>: Catalan (Spain)<br><code>hr-HR</code>: Croatian (Croatia)<br><code>cs-CZ</code>: Czech (Czech Republic)<br><code>da-DK</code>: Danish (Denmark)<br><code>nl-BE</code>: Dutch (Belgium)<br><code>nl-NL</code>: Dutch (Netherlands)<br><code>en-AU</code>: English (Australia)<br><code>en-CA</code>: English (Canada)<br><code>en-GH</code>: English (Ghana)<br><code>en-HK</code>: English (Hong Kong (China))<br><code>en-IN</code>: English (India)<br><code>en-IE</code>: English (Ireland)<br><code>en-KE</code>: English (Kenya)<br><code>en-NZ</code>: English (New Zealand)<br><code>en-NG</code>: English (Nigeria)<br><code>en-PK</code>: English (Pakistan)<br><code>en-PH</code>: English (Philippines)<br><code>en-SG</code>: English (Singapore)<br><code>en-ZA</code>: English (South Africa)<br><code>en-TZ</code>: English (Tanzania)<br><code>en-GB</code>: English (UK)<br><code>en-US</code>: English (United States)<br><code>et-EE</code>: Estonian (Estonia)<br><code>fil-PH</code>: Filipino (Philippines)<br><code>fi-FI</code>: Finnish (Finland)<br><code>fr-BE</code>: French (Belgium)<br><code>fr-CA</code>: French (Canada)<br><code>fr-FR</code>: French (France)<br><code>fr-CH</code>: French (Switzerland)<br><code>gl-ES</code>: Galician (Spain)<br><code>ka-GE</code>: Georgian (Georgia)<br><code>el-GR</code>: Greek (Greece)<br><code>gu-IN</code>: Gujarati (India)<br><code>iw-IL</code>: Hebrew (Israel)<br><code>hi-IN</code>: Hindi (India)<br><code>hu-HU</code>: Hungarian (Hungary)<br><code>is-IS</code>: Icelandic (Iceland)<br><code>id-ID</code>: Indonesian (Indonesia)<br><code>it-IT</code>: Italian (Italy)<br><code>it-CH</code>: Italian (Switzerland)<br><code>ja-JP</code>: Japanese (Japan)<br><code>jv-ID</code>: Javanese (Indonesia)<br><code>kn-IN</code>: Kannada (India)<br><code>kk-KZ</code>: Kazakh (Kazakhstan)<br><code>km-KH</code>: Khmer (Cambodia)<br><code>rw-RW</code>: Kinyarwanda (Rwanda)<br><code>ko-KR</code>: Korean (South Korea)<br><code>lo-LA</code>: Lao (Laos)<br><code>lv-LV</code>: Latvian (Latvia)<br><code>lt-LT</code>: Lithuanian (Lithuania)<br><code>mk-MK</code>: Macedonian (North Macedonia)<br><code>ms-MY</code>: Malay (Malaysia)<br><code>ml-IN</code>: Malayalam (India)<br><code>mr-IN</code>: Marathi (India)<br><code>mn-MN</code>: Mongolian (Mongolia)<br><code>ne-NP</code>: Nepali (Nepal)<br><code>no-NO</code>: Norwegian Bokmål (Norway)<br><code>fa-IR</code>: Persian (Iran)<br><code>pl-PL</code>: Polish (Poland)<br><code>pt-BR</code>: Portuguese (Brazil)<br><code>pt-PT</code>: Portuguese (Portugal)<br><code>ro-RO</code>: Romanian (Romania)<br><code>ru-RU</code>: Russian (Russia)<br><code>sr-RS</code>: Serbian (Serbia)<br><code>si-LK</code>: Sinhalese (Sri Lanka)<br><code>sk-SK</code>: Slovak (Slovakia)<br><code>sl-SI</code>: Slovenian (Slovenia)<br><code>st-ZA</code>: Southern Sotho (South Africa)<br><code>es-AR</code>: Spanish (Argentina)<br><code>es-BO</code>: Spanish (Bolivia)<br><code>es-CL</code>: Spanish (Chile)<br><code>es-CO</code>: Spanish (Colombia)<br><code>es-CR</code>: Spanish (Costa Rica)<br><code>es-DO</code>: Spanish (Dominican Republic)<br><code>es-EC</code>: Spanish (Ecuador)<br><code>es-SV</code>: Spanish (El Salvador)<br><code>es-GT</code>: Spanish (Guatemala)<br><code>es-HN</code>: Spanish (Honduras)<br><code>es-MX</code>: Spanish (Mexico)<br><code>es-NI</code>: Spanish (Nicaragua)<br><code>es-PA</code>: Spanish (Panama)<br><code>es-PY</code>: Spanish (Paraguay)<br><code>es-PE</code>: Spanish (Peru)<br><code>es-PR</code>: Spanish (Puerto Rico)<br><code>es-ES</code>: Spanish (Spain)<br><code>es-US</code>: Spanish (United States)<br><code>es-UY</code>: Spanish (Uruguay)<br><code>es-VE</code>: Spanish (Venezuela)<br><code>su-ID</code>: Sundanese (Indonesia)<br><code>sw-KE</code>: Swahili (Kenya)<br><code>sw-TZ</code>: Swahili (Tanzania)<br><code>sv-SE</code>: Swedish (Sweden)<br><code>ta-IN</code>: Tamil (India)<br><code>ta-MY</code>: Tamil (Malaysia)<br><code>ta-SG</code>: Tamil (Singapore)<br><code>ta-LK</code>: Tamil (Sri Lanka)<br><code>te-IN</code>: Telugu (India)<br><code>th-TH</code>: Thai (Thailand)<br><code>ts-ZA</code>: Tsonga (South Africa)<br><code>tr-TR</code>: Turkish (Türkiye)<br><code>uk-UA</code>: Ukrainian (Ukraine)<br><code>ur-IN</code>: Urdu (India)<br><code>ur-PK</code>: Urdu (Pakistan)<br><code>uz-UZ</code>: Uzbek (Uzbekistan)<br><code>ve-ZA</code>: Venda (South Africa)<code>vi-VN</code>: Vietnamese (Vietnam)<br><code>xh-ZA</code>: Xhosa (South Africa)<br><code>zu-ZA</code>: Zulu (South Africa)</p>
                     * 
                     */
                    std::string GetVideoSrcLanguage() const;

                    /**
                     * 设置<p>Smart subtitling video source language<br>OCR recognition supports the following languages:<br><code>zh_en</code>: Chinese-English<br><code>multi</code>: Other<br>ASR recognition and pure caption translation currently support the following languages:<br><code>auto</code>: Auto-identification<br><code>zh</code>: Simplified Chinese<br><code>en</code>: English<br><code>ja</code>: Japanese<br><code>ko</code>: Korean<br><code>zh-PY</code>: Chinese-English-Cantonese<br><code>zh_medical</code>: Chinese health care<br><code>vi</code>: Vietnamese<br><code>ms</code>: Malay<br><code>id</code>: Indonesian<br><code>fil</code>: Filipino<br><code>th</code>: Thai<br><code>pt</code>: Portuguese<br><code>tr</code>: Turkish<br><code>ar</code>: Arabic<br><code>es</code>: Spanish<br><code>hi</code>: Hindi<br><code>fr</code>: French<br><code>de</code>: German<br><code>it</code>: Italian<br><code>zh_dialect</code>: Chinese dialect<br><code>zh_en</code>: Chinese-English<br><code>yue</code>: Cantonese<br><code>ru</code>: Russian<br><code>prime_zh</code>: Chinese-English dialect<br><code>af-ZA</code>: Afrikaans (South Africa)<br><code>sq-AL</code>: Albanian (Albania)<br><code>am-ET</code>: Amharic (Ethiopia)<br><code>ar-DZ</code>: Arabic (Algeria)<br><code>ar-BH</code>: Arabic (Bahrain)<br><code>ar-EG</code>: Arabic (Egypt)<br><code>ar-IQ</code>: Arabic (Iraq)<br><code>ar-IL</code>: Arabic (Israel)<br><code>ar-JO</code>: Arabic (Jordan)<br><code>ar-KW</code>: Arabic (Kuwait)<br><code>ar-LB</code>: Arabic (Lebanon)<br><code>ar-MR</code>: Arabic (Mauritania)<br><code>ar-MA</code>: Arabic (Morocco)<br><code>ar-OM</code>: Arabic (Oman)<br><code>ar-QA</code>: Arabic (Qatar)<br><code>ar-SA</code>: Arabic (Saudi Arabia)<br><code>ar-PS</code>: Arabic (State of Palestine)<br><code>ar-SY</code>: Arabic (Syria)<br><code>ar-TN</code>: Arabic (Tunisia)<br><code>ar-AE</code>: Arabic (United Arab Emirates)<br><code>ar-YE</code>: Arabic (Yemen)<br><code>hy-AM</code>: Armenian (Armenia)<br><code>az-AZ</code>: Azerbaijani (Azerbaijan)<br><code>eu-ES</code>: Basque (Spain)<br><code>bn-BD</code>: Bengali (Bangladesh)<br><code>bn-IN</code>: Bengali (India)<br><code>bs-BA</code>: Bosnian (Bosnia and Herzegovina)<br><code>bg-BG</code>: Bulgarian (Bulgaria)<br><code>my-MM</code>: Burmese (Myanmar)<br><code>ca-ES</code>: Catalan (Spain)<br><code>hr-HR</code>: Croatian (Croatia)<br><code>cs-CZ</code>: Czech (Czech Republic)<br><code>da-DK</code>: Danish (Denmark)<br><code>nl-BE</code>: Dutch (Belgium)<br><code>nl-NL</code>: Dutch (Netherlands)<br><code>en-AU</code>: English (Australia)<br><code>en-CA</code>: English (Canada)<br><code>en-GH</code>: English (Ghana)<br><code>en-HK</code>: English (Hong Kong (China))<br><code>en-IN</code>: English (India)<br><code>en-IE</code>: English (Ireland)<br><code>en-KE</code>: English (Kenya)<br><code>en-NZ</code>: English (New Zealand)<br><code>en-NG</code>: English (Nigeria)<br><code>en-PK</code>: English (Pakistan)<br><code>en-PH</code>: English (Philippines)<br><code>en-SG</code>: English (Singapore)<br><code>en-ZA</code>: English (South Africa)<br><code>en-TZ</code>: English (Tanzania)<br><code>en-GB</code>: English (UK)<br><code>en-US</code>: English (United States)<br><code>et-EE</code>: Estonian (Estonia)<br><code>fil-PH</code>: Filipino (Philippines)<br><code>fi-FI</code>: Finnish (Finland)<br><code>fr-BE</code>: French (Belgium)<br><code>fr-CA</code>: French (Canada)<br><code>fr-FR</code>: French (France)<br><code>fr-CH</code>: French (Switzerland)<br><code>gl-ES</code>: Galician (Spain)<br><code>ka-GE</code>: Georgian (Georgia)<br><code>el-GR</code>: Greek (Greece)<br><code>gu-IN</code>: Gujarati (India)<br><code>iw-IL</code>: Hebrew (Israel)<br><code>hi-IN</code>: Hindi (India)<br><code>hu-HU</code>: Hungarian (Hungary)<br><code>is-IS</code>: Icelandic (Iceland)<br><code>id-ID</code>: Indonesian (Indonesia)<br><code>it-IT</code>: Italian (Italy)<br><code>it-CH</code>: Italian (Switzerland)<br><code>ja-JP</code>: Japanese (Japan)<br><code>jv-ID</code>: Javanese (Indonesia)<br><code>kn-IN</code>: Kannada (India)<br><code>kk-KZ</code>: Kazakh (Kazakhstan)<br><code>km-KH</code>: Khmer (Cambodia)<br><code>rw-RW</code>: Kinyarwanda (Rwanda)<br><code>ko-KR</code>: Korean (South Korea)<br><code>lo-LA</code>: Lao (Laos)<br><code>lv-LV</code>: Latvian (Latvia)<br><code>lt-LT</code>: Lithuanian (Lithuania)<br><code>mk-MK</code>: Macedonian (North Macedonia)<br><code>ms-MY</code>: Malay (Malaysia)<br><code>ml-IN</code>: Malayalam (India)<br><code>mr-IN</code>: Marathi (India)<br><code>mn-MN</code>: Mongolian (Mongolia)<br><code>ne-NP</code>: Nepali (Nepal)<br><code>no-NO</code>: Norwegian Bokmål (Norway)<br><code>fa-IR</code>: Persian (Iran)<br><code>pl-PL</code>: Polish (Poland)<br><code>pt-BR</code>: Portuguese (Brazil)<br><code>pt-PT</code>: Portuguese (Portugal)<br><code>ro-RO</code>: Romanian (Romania)<br><code>ru-RU</code>: Russian (Russia)<br><code>sr-RS</code>: Serbian (Serbia)<br><code>si-LK</code>: Sinhalese (Sri Lanka)<br><code>sk-SK</code>: Slovak (Slovakia)<br><code>sl-SI</code>: Slovenian (Slovenia)<br><code>st-ZA</code>: Southern Sotho (South Africa)<br><code>es-AR</code>: Spanish (Argentina)<br><code>es-BO</code>: Spanish (Bolivia)<br><code>es-CL</code>: Spanish (Chile)<br><code>es-CO</code>: Spanish (Colombia)<br><code>es-CR</code>: Spanish (Costa Rica)<br><code>es-DO</code>: Spanish (Dominican Republic)<br><code>es-EC</code>: Spanish (Ecuador)<br><code>es-SV</code>: Spanish (El Salvador)<br><code>es-GT</code>: Spanish (Guatemala)<br><code>es-HN</code>: Spanish (Honduras)<br><code>es-MX</code>: Spanish (Mexico)<br><code>es-NI</code>: Spanish (Nicaragua)<br><code>es-PA</code>: Spanish (Panama)<br><code>es-PY</code>: Spanish (Paraguay)<br><code>es-PE</code>: Spanish (Peru)<br><code>es-PR</code>: Spanish (Puerto Rico)<br><code>es-ES</code>: Spanish (Spain)<br><code>es-US</code>: Spanish (United States)<br><code>es-UY</code>: Spanish (Uruguay)<br><code>es-VE</code>: Spanish (Venezuela)<br><code>su-ID</code>: Sundanese (Indonesia)<br><code>sw-KE</code>: Swahili (Kenya)<br><code>sw-TZ</code>: Swahili (Tanzania)<br><code>sv-SE</code>: Swedish (Sweden)<br><code>ta-IN</code>: Tamil (India)<br><code>ta-MY</code>: Tamil (Malaysia)<br><code>ta-SG</code>: Tamil (Singapore)<br><code>ta-LK</code>: Tamil (Sri Lanka)<br><code>te-IN</code>: Telugu (India)<br><code>th-TH</code>: Thai (Thailand)<br><code>ts-ZA</code>: Tsonga (South Africa)<br><code>tr-TR</code>: Turkish (Türkiye)<br><code>uk-UA</code>: Ukrainian (Ukraine)<br><code>ur-IN</code>: Urdu (India)<br><code>ur-PK</code>: Urdu (Pakistan)<br><code>uz-UZ</code>: Uzbek (Uzbekistan)<br><code>ve-ZA</code>: Venda (South Africa)<code>vi-VN</code>: Vietnamese (Vietnam)<br><code>xh-ZA</code>: Xhosa (South Africa)<br><code>zu-ZA</code>: Zulu (South Africa)</p>
                     * @param _videoSrcLanguage <p>Smart subtitling video source language<br>OCR recognition supports the following languages:<br><code>zh_en</code>: Chinese-English<br><code>multi</code>: Other<br>ASR recognition and pure caption translation currently support the following languages:<br><code>auto</code>: Auto-identification<br><code>zh</code>: Simplified Chinese<br><code>en</code>: English<br><code>ja</code>: Japanese<br><code>ko</code>: Korean<br><code>zh-PY</code>: Chinese-English-Cantonese<br><code>zh_medical</code>: Chinese health care<br><code>vi</code>: Vietnamese<br><code>ms</code>: Malay<br><code>id</code>: Indonesian<br><code>fil</code>: Filipino<br><code>th</code>: Thai<br><code>pt</code>: Portuguese<br><code>tr</code>: Turkish<br><code>ar</code>: Arabic<br><code>es</code>: Spanish<br><code>hi</code>: Hindi<br><code>fr</code>: French<br><code>de</code>: German<br><code>it</code>: Italian<br><code>zh_dialect</code>: Chinese dialect<br><code>zh_en</code>: Chinese-English<br><code>yue</code>: Cantonese<br><code>ru</code>: Russian<br><code>prime_zh</code>: Chinese-English dialect<br><code>af-ZA</code>: Afrikaans (South Africa)<br><code>sq-AL</code>: Albanian (Albania)<br><code>am-ET</code>: Amharic (Ethiopia)<br><code>ar-DZ</code>: Arabic (Algeria)<br><code>ar-BH</code>: Arabic (Bahrain)<br><code>ar-EG</code>: Arabic (Egypt)<br><code>ar-IQ</code>: Arabic (Iraq)<br><code>ar-IL</code>: Arabic (Israel)<br><code>ar-JO</code>: Arabic (Jordan)<br><code>ar-KW</code>: Arabic (Kuwait)<br><code>ar-LB</code>: Arabic (Lebanon)<br><code>ar-MR</code>: Arabic (Mauritania)<br><code>ar-MA</code>: Arabic (Morocco)<br><code>ar-OM</code>: Arabic (Oman)<br><code>ar-QA</code>: Arabic (Qatar)<br><code>ar-SA</code>: Arabic (Saudi Arabia)<br><code>ar-PS</code>: Arabic (State of Palestine)<br><code>ar-SY</code>: Arabic (Syria)<br><code>ar-TN</code>: Arabic (Tunisia)<br><code>ar-AE</code>: Arabic (United Arab Emirates)<br><code>ar-YE</code>: Arabic (Yemen)<br><code>hy-AM</code>: Armenian (Armenia)<br><code>az-AZ</code>: Azerbaijani (Azerbaijan)<br><code>eu-ES</code>: Basque (Spain)<br><code>bn-BD</code>: Bengali (Bangladesh)<br><code>bn-IN</code>: Bengali (India)<br><code>bs-BA</code>: Bosnian (Bosnia and Herzegovina)<br><code>bg-BG</code>: Bulgarian (Bulgaria)<br><code>my-MM</code>: Burmese (Myanmar)<br><code>ca-ES</code>: Catalan (Spain)<br><code>hr-HR</code>: Croatian (Croatia)<br><code>cs-CZ</code>: Czech (Czech Republic)<br><code>da-DK</code>: Danish (Denmark)<br><code>nl-BE</code>: Dutch (Belgium)<br><code>nl-NL</code>: Dutch (Netherlands)<br><code>en-AU</code>: English (Australia)<br><code>en-CA</code>: English (Canada)<br><code>en-GH</code>: English (Ghana)<br><code>en-HK</code>: English (Hong Kong (China))<br><code>en-IN</code>: English (India)<br><code>en-IE</code>: English (Ireland)<br><code>en-KE</code>: English (Kenya)<br><code>en-NZ</code>: English (New Zealand)<br><code>en-NG</code>: English (Nigeria)<br><code>en-PK</code>: English (Pakistan)<br><code>en-PH</code>: English (Philippines)<br><code>en-SG</code>: English (Singapore)<br><code>en-ZA</code>: English (South Africa)<br><code>en-TZ</code>: English (Tanzania)<br><code>en-GB</code>: English (UK)<br><code>en-US</code>: English (United States)<br><code>et-EE</code>: Estonian (Estonia)<br><code>fil-PH</code>: Filipino (Philippines)<br><code>fi-FI</code>: Finnish (Finland)<br><code>fr-BE</code>: French (Belgium)<br><code>fr-CA</code>: French (Canada)<br><code>fr-FR</code>: French (France)<br><code>fr-CH</code>: French (Switzerland)<br><code>gl-ES</code>: Galician (Spain)<br><code>ka-GE</code>: Georgian (Georgia)<br><code>el-GR</code>: Greek (Greece)<br><code>gu-IN</code>: Gujarati (India)<br><code>iw-IL</code>: Hebrew (Israel)<br><code>hi-IN</code>: Hindi (India)<br><code>hu-HU</code>: Hungarian (Hungary)<br><code>is-IS</code>: Icelandic (Iceland)<br><code>id-ID</code>: Indonesian (Indonesia)<br><code>it-IT</code>: Italian (Italy)<br><code>it-CH</code>: Italian (Switzerland)<br><code>ja-JP</code>: Japanese (Japan)<br><code>jv-ID</code>: Javanese (Indonesia)<br><code>kn-IN</code>: Kannada (India)<br><code>kk-KZ</code>: Kazakh (Kazakhstan)<br><code>km-KH</code>: Khmer (Cambodia)<br><code>rw-RW</code>: Kinyarwanda (Rwanda)<br><code>ko-KR</code>: Korean (South Korea)<br><code>lo-LA</code>: Lao (Laos)<br><code>lv-LV</code>: Latvian (Latvia)<br><code>lt-LT</code>: Lithuanian (Lithuania)<br><code>mk-MK</code>: Macedonian (North Macedonia)<br><code>ms-MY</code>: Malay (Malaysia)<br><code>ml-IN</code>: Malayalam (India)<br><code>mr-IN</code>: Marathi (India)<br><code>mn-MN</code>: Mongolian (Mongolia)<br><code>ne-NP</code>: Nepali (Nepal)<br><code>no-NO</code>: Norwegian Bokmål (Norway)<br><code>fa-IR</code>: Persian (Iran)<br><code>pl-PL</code>: Polish (Poland)<br><code>pt-BR</code>: Portuguese (Brazil)<br><code>pt-PT</code>: Portuguese (Portugal)<br><code>ro-RO</code>: Romanian (Romania)<br><code>ru-RU</code>: Russian (Russia)<br><code>sr-RS</code>: Serbian (Serbia)<br><code>si-LK</code>: Sinhalese (Sri Lanka)<br><code>sk-SK</code>: Slovak (Slovakia)<br><code>sl-SI</code>: Slovenian (Slovenia)<br><code>st-ZA</code>: Southern Sotho (South Africa)<br><code>es-AR</code>: Spanish (Argentina)<br><code>es-BO</code>: Spanish (Bolivia)<br><code>es-CL</code>: Spanish (Chile)<br><code>es-CO</code>: Spanish (Colombia)<br><code>es-CR</code>: Spanish (Costa Rica)<br><code>es-DO</code>: Spanish (Dominican Republic)<br><code>es-EC</code>: Spanish (Ecuador)<br><code>es-SV</code>: Spanish (El Salvador)<br><code>es-GT</code>: Spanish (Guatemala)<br><code>es-HN</code>: Spanish (Honduras)<br><code>es-MX</code>: Spanish (Mexico)<br><code>es-NI</code>: Spanish (Nicaragua)<br><code>es-PA</code>: Spanish (Panama)<br><code>es-PY</code>: Spanish (Paraguay)<br><code>es-PE</code>: Spanish (Peru)<br><code>es-PR</code>: Spanish (Puerto Rico)<br><code>es-ES</code>: Spanish (Spain)<br><code>es-US</code>: Spanish (United States)<br><code>es-UY</code>: Spanish (Uruguay)<br><code>es-VE</code>: Spanish (Venezuela)<br><code>su-ID</code>: Sundanese (Indonesia)<br><code>sw-KE</code>: Swahili (Kenya)<br><code>sw-TZ</code>: Swahili (Tanzania)<br><code>sv-SE</code>: Swedish (Sweden)<br><code>ta-IN</code>: Tamil (India)<br><code>ta-MY</code>: Tamil (Malaysia)<br><code>ta-SG</code>: Tamil (Singapore)<br><code>ta-LK</code>: Tamil (Sri Lanka)<br><code>te-IN</code>: Telugu (India)<br><code>th-TH</code>: Thai (Thailand)<br><code>ts-ZA</code>: Tsonga (South Africa)<br><code>tr-TR</code>: Turkish (Türkiye)<br><code>uk-UA</code>: Ukrainian (Ukraine)<br><code>ur-IN</code>: Urdu (India)<br><code>ur-PK</code>: Urdu (Pakistan)<br><code>uz-UZ</code>: Uzbek (Uzbekistan)<br><code>ve-ZA</code>: Venda (South Africa)<code>vi-VN</code>: Vietnamese (Vietnam)<br><code>xh-ZA</code>: Xhosa (South Africa)<br><code>zu-ZA</code>: Zulu (South Africa)</p>
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
                     * 获取
                     * @return SubtitleFormat 
                     * 
                     */
                    std::string GetSubtitleFormat() const;

                    /**
                     * 设置
                     * @param _subtitleFormat 
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
                     * 获取
                     * @return TranslateSwitch 
                     * 
                     */
                    std::string GetTranslateSwitch() const;

                    /**
                     * 设置
                     * @param _translateSwitch 
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
                     * 获取
                     * @return TranslateDstLanguage 
                     * 
                     */
                    std::string GetTranslateDstLanguage() const;

                    /**
                     * 设置
                     * @param _translateDstLanguage 
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
                     * 获取
                     * @return AsrHotWordsConfigure 
                     * 
                     */
                    AsrHotWordsConfigure GetAsrHotWordsConfigure() const;

                    /**
                     * 设置
                     * @param _asrHotWordsConfigure 
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
                     * 获取<p>Custom parameter</p>
                     * @return ExtInfo <p>Custom parameter</p>
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置<p>Custom parameter</p>
                     * @param _extInfo <p>Custom parameter</p>
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
                     * 获取<p>Subtitle processing type:</p><ul><li>0: ASR recognition subtitle</li><li>1: Pure caption translation</li><li>2: OCR recognition subtitle</li></ul><p><strong>Note</strong>: The default type is ASR recognition subtitle if the field is unspecified.</p>
                     * @return ProcessType <p>Subtitle processing type:</p><ul><li>0: ASR recognition subtitle</li><li>1: Pure caption translation</li><li>2: OCR recognition subtitle</li></ul><p><strong>Note</strong>: The default type is ASR recognition subtitle if the field is unspecified.</p>
                     * 
                     */
                    uint64_t GetProcessType() const;

                    /**
                     * 设置<p>Subtitle processing type:</p><ul><li>0: ASR recognition subtitle</li><li>1: Pure caption translation</li><li>2: OCR recognition subtitle</li></ul><p><strong>Note</strong>: The default type is ASR recognition subtitle if the field is unspecified.</p>
                     * @param _processType <p>Subtitle processing type:</p><ul><li>0: ASR recognition subtitle</li><li>1: Pure caption translation</li><li>2: OCR recognition subtitle</li></ul><p><strong>Note</strong>: The default type is ASR recognition subtitle if the field is unspecified.</p>
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

                    /**
                     * 获取<p>Suppression Template id. Only allowed to fill in when ProcessType is 0 or 2 (task type is ASR or OCR).</p>
                     * @return SubtitleEmbedId <p>Suppression Template id. Only allowed to fill in when ProcessType is 0 or 2 (task type is ASR or OCR).</p>
                     * 
                     */
                    int64_t GetSubtitleEmbedId() const;

                    /**
                     * 设置<p>Suppression Template id. Only allowed to fill in when ProcessType is 0 or 2 (task type is ASR or OCR).</p>
                     * @param _subtitleEmbedId <p>Suppression Template id. Only allowed to fill in when ProcessType is 0 or 2 (task type is ASR or OCR).</p>
                     * 
                     */
                    void SetSubtitleEmbedId(const int64_t& _subtitleEmbedId);

                    /**
                     * 判断参数 SubtitleEmbedId 是否已赋值
                     * @return SubtitleEmbedId 是否已赋值
                     * 
                     */
                    bool SubtitleEmbedIdHasBeenSet() const;

                    /**
                     * 获取<p>Speaker identification mode. Valid values:<br>0: Speaker identification is disabled.<br>1: Speaker identification is enabled.<br>Default value: 0.</p>
                     * @return SpeakerMode <p>Speaker identification mode. Valid values:<br>0: Speaker identification is disabled.<br>1: Speaker identification is enabled.<br>Default value: 0.</p>
                     * 
                     */
                    int64_t GetSpeakerMode() const;

                    /**
                     * 设置<p>Speaker identification mode. Valid values:<br>0: Speaker identification is disabled.<br>1: Speaker identification is enabled.<br>Default value: 0.</p>
                     * @param _speakerMode <p>Speaker identification mode. Valid values:<br>0: Speaker identification is disabled.<br>1: Speaker identification is enabled.<br>Default value: 0.</p>
                     * 
                     */
                    void SetSpeakerMode(const int64_t& _speakerMode);

                    /**
                     * 判断参数 SpeakerMode 是否已赋值
                     * @return SpeakerMode 是否已赋值
                     * 
                     */
                    bool SpeakerModeHasBeenSet() const;

                    /**
                     * 获取<p>Indicates whether to output the identified speaker to the subtitle file. Valid values:<br>0: The speaker is not output to the subtitle file.<br>1: The speaker is output to the VTT subtitle file.<br>Note: To use this parameter, the value of SpeakerMode cannot be 0.<br>Default value: 0.</p>
                     * @return SpeakerLabel <p>Indicates whether to output the identified speaker to the subtitle file. Valid values:<br>0: The speaker is not output to the subtitle file.<br>1: The speaker is output to the VTT subtitle file.<br>Note: To use this parameter, the value of SpeakerMode cannot be 0.<br>Default value: 0.</p>
                     * 
                     */
                    int64_t GetSpeakerLabel() const;

                    /**
                     * 设置<p>Indicates whether to output the identified speaker to the subtitle file. Valid values:<br>0: The speaker is not output to the subtitle file.<br>1: The speaker is output to the VTT subtitle file.<br>Note: To use this parameter, the value of SpeakerMode cannot be 0.<br>Default value: 0.</p>
                     * @param _speakerLabel <p>Indicates whether to output the identified speaker to the subtitle file. Valid values:<br>0: The speaker is not output to the subtitle file.<br>1: The speaker is output to the VTT subtitle file.<br>Note: To use this parameter, the value of SpeakerMode cannot be 0.<br>Default value: 0.</p>
                     * 
                     */
                    void SetSpeakerLabel(const int64_t& _speakerLabel);

                    /**
                     * 判断参数 SpeakerLabel 是否已赋值
                     * @return SpeakerLabel 是否已赋值
                     * 
                     */
                    bool SpeakerLabelHasBeenSet() const;

                private:

                    /**
                     * <p>Smart subtitle language type.<br>0: source language.<br>1: target language.<br>2: source language and target language.<br>Only 0 is supported when TranslateSwitch is OFF.<br>Only 1 or 2 is supported when TranslateSwitch is ON.</p>
                     */
                    int64_t m_subtitleType;
                    bool m_subtitleTypeHasBeenSet;

                    /**
                     * <p>Smart subtitling video source language<br>OCR recognition supports the following languages:<br><code>zh_en</code>: Chinese-English<br><code>multi</code>: Other<br>ASR recognition and pure caption translation currently support the following languages:<br><code>auto</code>: Auto-identification<br><code>zh</code>: Simplified Chinese<br><code>en</code>: English<br><code>ja</code>: Japanese<br><code>ko</code>: Korean<br><code>zh-PY</code>: Chinese-English-Cantonese<br><code>zh_medical</code>: Chinese health care<br><code>vi</code>: Vietnamese<br><code>ms</code>: Malay<br><code>id</code>: Indonesian<br><code>fil</code>: Filipino<br><code>th</code>: Thai<br><code>pt</code>: Portuguese<br><code>tr</code>: Turkish<br><code>ar</code>: Arabic<br><code>es</code>: Spanish<br><code>hi</code>: Hindi<br><code>fr</code>: French<br><code>de</code>: German<br><code>it</code>: Italian<br><code>zh_dialect</code>: Chinese dialect<br><code>zh_en</code>: Chinese-English<br><code>yue</code>: Cantonese<br><code>ru</code>: Russian<br><code>prime_zh</code>: Chinese-English dialect<br><code>af-ZA</code>: Afrikaans (South Africa)<br><code>sq-AL</code>: Albanian (Albania)<br><code>am-ET</code>: Amharic (Ethiopia)<br><code>ar-DZ</code>: Arabic (Algeria)<br><code>ar-BH</code>: Arabic (Bahrain)<br><code>ar-EG</code>: Arabic (Egypt)<br><code>ar-IQ</code>: Arabic (Iraq)<br><code>ar-IL</code>: Arabic (Israel)<br><code>ar-JO</code>: Arabic (Jordan)<br><code>ar-KW</code>: Arabic (Kuwait)<br><code>ar-LB</code>: Arabic (Lebanon)<br><code>ar-MR</code>: Arabic (Mauritania)<br><code>ar-MA</code>: Arabic (Morocco)<br><code>ar-OM</code>: Arabic (Oman)<br><code>ar-QA</code>: Arabic (Qatar)<br><code>ar-SA</code>: Arabic (Saudi Arabia)<br><code>ar-PS</code>: Arabic (State of Palestine)<br><code>ar-SY</code>: Arabic (Syria)<br><code>ar-TN</code>: Arabic (Tunisia)<br><code>ar-AE</code>: Arabic (United Arab Emirates)<br><code>ar-YE</code>: Arabic (Yemen)<br><code>hy-AM</code>: Armenian (Armenia)<br><code>az-AZ</code>: Azerbaijani (Azerbaijan)<br><code>eu-ES</code>: Basque (Spain)<br><code>bn-BD</code>: Bengali (Bangladesh)<br><code>bn-IN</code>: Bengali (India)<br><code>bs-BA</code>: Bosnian (Bosnia and Herzegovina)<br><code>bg-BG</code>: Bulgarian (Bulgaria)<br><code>my-MM</code>: Burmese (Myanmar)<br><code>ca-ES</code>: Catalan (Spain)<br><code>hr-HR</code>: Croatian (Croatia)<br><code>cs-CZ</code>: Czech (Czech Republic)<br><code>da-DK</code>: Danish (Denmark)<br><code>nl-BE</code>: Dutch (Belgium)<br><code>nl-NL</code>: Dutch (Netherlands)<br><code>en-AU</code>: English (Australia)<br><code>en-CA</code>: English (Canada)<br><code>en-GH</code>: English (Ghana)<br><code>en-HK</code>: English (Hong Kong (China))<br><code>en-IN</code>: English (India)<br><code>en-IE</code>: English (Ireland)<br><code>en-KE</code>: English (Kenya)<br><code>en-NZ</code>: English (New Zealand)<br><code>en-NG</code>: English (Nigeria)<br><code>en-PK</code>: English (Pakistan)<br><code>en-PH</code>: English (Philippines)<br><code>en-SG</code>: English (Singapore)<br><code>en-ZA</code>: English (South Africa)<br><code>en-TZ</code>: English (Tanzania)<br><code>en-GB</code>: English (UK)<br><code>en-US</code>: English (United States)<br><code>et-EE</code>: Estonian (Estonia)<br><code>fil-PH</code>: Filipino (Philippines)<br><code>fi-FI</code>: Finnish (Finland)<br><code>fr-BE</code>: French (Belgium)<br><code>fr-CA</code>: French (Canada)<br><code>fr-FR</code>: French (France)<br><code>fr-CH</code>: French (Switzerland)<br><code>gl-ES</code>: Galician (Spain)<br><code>ka-GE</code>: Georgian (Georgia)<br><code>el-GR</code>: Greek (Greece)<br><code>gu-IN</code>: Gujarati (India)<br><code>iw-IL</code>: Hebrew (Israel)<br><code>hi-IN</code>: Hindi (India)<br><code>hu-HU</code>: Hungarian (Hungary)<br><code>is-IS</code>: Icelandic (Iceland)<br><code>id-ID</code>: Indonesian (Indonesia)<br><code>it-IT</code>: Italian (Italy)<br><code>it-CH</code>: Italian (Switzerland)<br><code>ja-JP</code>: Japanese (Japan)<br><code>jv-ID</code>: Javanese (Indonesia)<br><code>kn-IN</code>: Kannada (India)<br><code>kk-KZ</code>: Kazakh (Kazakhstan)<br><code>km-KH</code>: Khmer (Cambodia)<br><code>rw-RW</code>: Kinyarwanda (Rwanda)<br><code>ko-KR</code>: Korean (South Korea)<br><code>lo-LA</code>: Lao (Laos)<br><code>lv-LV</code>: Latvian (Latvia)<br><code>lt-LT</code>: Lithuanian (Lithuania)<br><code>mk-MK</code>: Macedonian (North Macedonia)<br><code>ms-MY</code>: Malay (Malaysia)<br><code>ml-IN</code>: Malayalam (India)<br><code>mr-IN</code>: Marathi (India)<br><code>mn-MN</code>: Mongolian (Mongolia)<br><code>ne-NP</code>: Nepali (Nepal)<br><code>no-NO</code>: Norwegian Bokmål (Norway)<br><code>fa-IR</code>: Persian (Iran)<br><code>pl-PL</code>: Polish (Poland)<br><code>pt-BR</code>: Portuguese (Brazil)<br><code>pt-PT</code>: Portuguese (Portugal)<br><code>ro-RO</code>: Romanian (Romania)<br><code>ru-RU</code>: Russian (Russia)<br><code>sr-RS</code>: Serbian (Serbia)<br><code>si-LK</code>: Sinhalese (Sri Lanka)<br><code>sk-SK</code>: Slovak (Slovakia)<br><code>sl-SI</code>: Slovenian (Slovenia)<br><code>st-ZA</code>: Southern Sotho (South Africa)<br><code>es-AR</code>: Spanish (Argentina)<br><code>es-BO</code>: Spanish (Bolivia)<br><code>es-CL</code>: Spanish (Chile)<br><code>es-CO</code>: Spanish (Colombia)<br><code>es-CR</code>: Spanish (Costa Rica)<br><code>es-DO</code>: Spanish (Dominican Republic)<br><code>es-EC</code>: Spanish (Ecuador)<br><code>es-SV</code>: Spanish (El Salvador)<br><code>es-GT</code>: Spanish (Guatemala)<br><code>es-HN</code>: Spanish (Honduras)<br><code>es-MX</code>: Spanish (Mexico)<br><code>es-NI</code>: Spanish (Nicaragua)<br><code>es-PA</code>: Spanish (Panama)<br><code>es-PY</code>: Spanish (Paraguay)<br><code>es-PE</code>: Spanish (Peru)<br><code>es-PR</code>: Spanish (Puerto Rico)<br><code>es-ES</code>: Spanish (Spain)<br><code>es-US</code>: Spanish (United States)<br><code>es-UY</code>: Spanish (Uruguay)<br><code>es-VE</code>: Spanish (Venezuela)<br><code>su-ID</code>: Sundanese (Indonesia)<br><code>sw-KE</code>: Swahili (Kenya)<br><code>sw-TZ</code>: Swahili (Tanzania)<br><code>sv-SE</code>: Swedish (Sweden)<br><code>ta-IN</code>: Tamil (India)<br><code>ta-MY</code>: Tamil (Malaysia)<br><code>ta-SG</code>: Tamil (Singapore)<br><code>ta-LK</code>: Tamil (Sri Lanka)<br><code>te-IN</code>: Telugu (India)<br><code>th-TH</code>: Thai (Thailand)<br><code>ts-ZA</code>: Tsonga (South Africa)<br><code>tr-TR</code>: Turkish (Türkiye)<br><code>uk-UA</code>: Ukrainian (Ukraine)<br><code>ur-IN</code>: Urdu (India)<br><code>ur-PK</code>: Urdu (Pakistan)<br><code>uz-UZ</code>: Uzbek (Uzbekistan)<br><code>ve-ZA</code>: Venda (South Africa)<code>vi-VN</code>: Vietnamese (Vietnam)<br><code>xh-ZA</code>: Xhosa (South Africa)<br><code>zu-ZA</code>: Zulu (South Africa)</p>
                     */
                    std::string m_videoSrcLanguage;
                    bool m_videoSrcLanguageHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_subtitleFormat;
                    bool m_subtitleFormatHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_translateSwitch;
                    bool m_translateSwitchHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_translateDstLanguage;
                    bool m_translateDstLanguageHasBeenSet;

                    /**
                     * 
                     */
                    AsrHotWordsConfigure m_asrHotWordsConfigure;
                    bool m_asrHotWordsConfigureHasBeenSet;

                    /**
                     * <p>Custom parameter</p>
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                    /**
                     * <p>Subtitle processing type:</p><ul><li>0: ASR recognition subtitle</li><li>1: Pure caption translation</li><li>2: OCR recognition subtitle</li></ul><p><strong>Note</strong>: The default type is ASR recognition subtitle if the field is unspecified.</p>
                     */
                    uint64_t m_processType;
                    bool m_processTypeHasBeenSet;

                    /**
                     * 
                     */
                    SelectingSubtitleAreasConfig m_selectingSubtitleAreasConfig;
                    bool m_selectingSubtitleAreasConfigHasBeenSet;

                    /**
                     * <p>Suppression Template id. Only allowed to fill in when ProcessType is 0 or 2 (task type is ASR or OCR).</p>
                     */
                    int64_t m_subtitleEmbedId;
                    bool m_subtitleEmbedIdHasBeenSet;

                    /**
                     * <p>Speaker identification mode. Valid values:<br>0: Speaker identification is disabled.<br>1: Speaker identification is enabled.<br>Default value: 0.</p>
                     */
                    int64_t m_speakerMode;
                    bool m_speakerModeHasBeenSet;

                    /**
                     * <p>Indicates whether to output the identified speaker to the subtitle file. Valid values:<br>0: The speaker is not output to the subtitle file.<br>1: The speaker is output to the VTT subtitle file.<br>Note: To use this parameter, the value of SpeakerMode cannot be 0.<br>Default value: 0.</p>
                     */
                    int64_t m_speakerLabel;
                    bool m_speakerLabelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_RAWSMARTSUBTITLEPARAMETER_H_
