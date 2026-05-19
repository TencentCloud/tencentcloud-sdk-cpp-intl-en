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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_ASRTRANSLATECONFIGUREINFOFORUPDATE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_ASRTRANSLATECONFIGUREINFOFORUPDATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/SubtitleFormatsOperation.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Voice Translation Recognition Control Parameter
                */
                class AsrTranslateConfigureInfoForUpdate : public AbstractModel
                {
                public:
                    AsrTranslateConfigureInfoForUpdate();
                    ~AsrTranslateConfigureInfoForUpdate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Voice translation recognition task switch. Available values:
<li>ON: enabled;</li>
<li>OFF: Disabled.</li><font color=red>Note:</font> The speech translation recognition task itself will return ASR full text recognition results. To avoid duplicate charges, it is forbidden to enable both speech translation recognition and ASR full text recognition feature items simultaneously.</li>
                     * @return Switch Voice translation recognition task switch. Available values:
<li>ON: enabled;</li>
<li>OFF: Disabled.</li><font color=red>Note:</font> The speech translation recognition task itself will return ASR full text recognition results. To avoid duplicate charges, it is forbidden to enable both speech translation recognition and ASR full text recognition feature items simultaneously.</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Voice translation recognition task switch. Available values:
<li>ON: enabled;</li>
<li>OFF: Disabled.</li><font color=red>Note:</font> The speech translation recognition task itself will return ASR full text recognition results. To avoid duplicate charges, it is forbidden to enable both speech translation recognition and ASR full text recognition feature items simultaneously.</li>
                     * @param _switch Voice translation recognition task switch. Available values:
<li>ON: enabled;</li>
<li>OFF: Disabled.</li><font color=red>Note:</font> The speech translation recognition task itself will return ASR full text recognition results. To avoid duplicate charges, it is forbidden to enable both speech translation recognition and ASR full text recognition feature items simultaneously.</li>
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取Media source language. Valid values:
<li>zh: Chinese.</li>
<li>en: English;</li>
<li>ja: Japanese;</li>
<li>ko: Korean;</li>
<li>vi: Vietnamese;</li>
<li>ms: Malay;</li>
<li>th: Thai;</li>
<li>pt: Portuguese;</li>
<li>tr: Turkish;</li>
<li>ar: Arabic;</li>
<li>es: Spanish;</li>
<li>hi: Hindi;</li>
<li>fr: French.</li>
                     * @return SrcLanguage Media source language. Valid values:
<li>zh: Chinese.</li>
<li>en: English;</li>
<li>ja: Japanese;</li>
<li>ko: Korean;</li>
<li>vi: Vietnamese;</li>
<li>ms: Malay;</li>
<li>th: Thai;</li>
<li>pt: Portuguese;</li>
<li>tr: Turkish;</li>
<li>ar: Arabic;</li>
<li>es: Spanish;</li>
<li>hi: Hindi;</li>
<li>fr: French.</li>
                     * 
                     */
                    std::string GetSrcLanguage() const;

                    /**
                     * 设置Media source language. Valid values:
<li>zh: Chinese.</li>
<li>en: English;</li>
<li>ja: Japanese;</li>
<li>ko: Korean;</li>
<li>vi: Vietnamese;</li>
<li>ms: Malay;</li>
<li>th: Thai;</li>
<li>pt: Portuguese;</li>
<li>tr: Turkish;</li>
<li>ar: Arabic;</li>
<li>es: Spanish;</li>
<li>hi: Hindi;</li>
<li>fr: French.</li>
                     * @param _srcLanguage Media source language. Valid values:
<li>zh: Chinese.</li>
<li>en: English;</li>
<li>ja: Japanese;</li>
<li>ko: Korean;</li>
<li>vi: Vietnamese;</li>
<li>ms: Malay;</li>
<li>th: Thai;</li>
<li>pt: Portuguese;</li>
<li>tr: Turkish;</li>
<li>ar: Arabic;</li>
<li>es: Spanish;</li>
<li>hi: Hindi;</li>
<li>fr: French.</li>
                     * 
                     */
                    void SetSrcLanguage(const std::string& _srcLanguage);

                    /**
                     * 判断参数 SrcLanguage 是否已赋值
                     * @return SrcLanguage 是否已赋值
                     * 
                     */
                    bool SrcLanguageHasBeenSet() const;

                    /**
                     * 获取Target language.
If this parameter is filled in with an empty string, it means that only full speech recognition is performed without translation (the billing item is the same as AsrFullTextConfigure full speech recognition).
Otherwise, the parameter value range is divided into the following cases:
When SrcLanguage is zh (Chinese), the value ranges from...to...
<li>en: English;</li>
<li>ja: Japanese;</li>
<li>ko: Korean;</li>
<li>fr: French;</li>
<li>es: Spanish;</li>
<li>it: Italian.</li>
<li>de: German;</li>
<li>tr: Turkish;</li>
<li>ru: Russian;</li>
<li>pt: Portuguese;</li>
<li>vi: Vietnamese;</li>
<li>id: Indonesian;</li>
<li>th: Thai;</li>
<li>ms: Malay.</li>
When SrcLanguage is en (English), the value ranges from...to...
<li>zh: Chinese.</li>
<li>ja: Japanese;</li>
<li>ko: Korean;</li>
<li>fr: French;</li>
<li>es: Spanish;</li>
<li>it: Italian.</li>
<li>de: German;</li>
<li>tr: Turkish;</li>
<li>ru: Russian;</li>
<li>pt: Portuguese;</li>
<li>vi: Vietnamese;</li>
<li>id: Indonesian;</li>
<li>th: Thai;</li>
<li>ms: Malay;</li>
<li>ar: Arabic;</li>
<li>hi: Hindi.</li>
When SrcLanguage is ja (Japanese), the parameter value range is
<li>zh: Chinese.</li>
<li>en: English;</li>
<li>ko: Korean.</li>
When SrcLanguage is ko (Korean), the value ranges from...to...
<li>zh: Chinese.</li>
<li>en: English;</li>
<li>ja: Japanese.</li>
When SrcLanguage is vi (Vietnamese), ms (Malay), or th (Thai), the value ranges from...to...
<li>zh: Chinese.</li>
<li>en: English.</li>
When SrcLanguage is pt (Portuguese), the value ranges from...to...
<li>zh: Chinese.</li>
<li>en: English;</li>
<li>fr: French;</li>
<li>es: Spanish;</li>
<li>it: Italian.</li>
<li>de: German;</li>
<li>tr: Turkish;</li>
<li>ru: Russian.</li>
When SrcLanguage is tr (Turkish), the value ranges from...to...
<li>zh: Chinese.</li>
<li>en: English;</li>
<li>fr: French;</li>
<li>es: Spanish;</li>
<li>it: Italian.</li>
<li>de: German;</li>
<li>ru: Russian;</li>
<li>pt: Portuguese.</li>
When SrcLanguage is es (Spanish), the parameter value range is
<li>zh: Chinese.</li>
<li>en: English;</li>
<li>fr: French;</li>
<li>it: Italian.</li>
<li>de: German;</li>
<li>tr: Turkish;</li>
<li>ru: Russian;</li>
<li>pt: Portuguese.</li>
When SrcLanguage is ar (Arabic) or hi (Hindi), the value ranges from...to...
<li>en: English.</li>
When SrcLanguage is fr (French), the value ranges from...to...
<li>zh: Chinese.</li>
<li>en: English;</li>
<li>es: Spanish;</li>
<li>it: Italian.</li>
<li>de: German;</li>
<li>tr: Turkish;</li>
<li>ru: Russian;</li>
<li>pt: Portuguese.</li>
                     * @return DstLanguage Target language.
If this parameter is filled in with an empty string, it means that only full speech recognition is performed without translation (the billing item is the same as AsrFullTextConfigure full speech recognition).
Otherwise, the parameter value range is divided into the following cases:
When SrcLanguage is zh (Chinese), the value ranges from...to...
<li>en: English;</li>
<li>ja: Japanese;</li>
<li>ko: Korean;</li>
<li>fr: French;</li>
<li>es: Spanish;</li>
<li>it: Italian.</li>
<li>de: German;</li>
<li>tr: Turkish;</li>
<li>ru: Russian;</li>
<li>pt: Portuguese;</li>
<li>vi: Vietnamese;</li>
<li>id: Indonesian;</li>
<li>th: Thai;</li>
<li>ms: Malay.</li>
When SrcLanguage is en (English), the value ranges from...to...
<li>zh: Chinese.</li>
<li>ja: Japanese;</li>
<li>ko: Korean;</li>
<li>fr: French;</li>
<li>es: Spanish;</li>
<li>it: Italian.</li>
<li>de: German;</li>
<li>tr: Turkish;</li>
<li>ru: Russian;</li>
<li>pt: Portuguese;</li>
<li>vi: Vietnamese;</li>
<li>id: Indonesian;</li>
<li>th: Thai;</li>
<li>ms: Malay;</li>
<li>ar: Arabic;</li>
<li>hi: Hindi.</li>
When SrcLanguage is ja (Japanese), the parameter value range is
<li>zh: Chinese.</li>
<li>en: English;</li>
<li>ko: Korean.</li>
When SrcLanguage is ko (Korean), the value ranges from...to...
<li>zh: Chinese.</li>
<li>en: English;</li>
<li>ja: Japanese.</li>
When SrcLanguage is vi (Vietnamese), ms (Malay), or th (Thai), the value ranges from...to...
<li>zh: Chinese.</li>
<li>en: English.</li>
When SrcLanguage is pt (Portuguese), the value ranges from...to...
<li>zh: Chinese.</li>
<li>en: English;</li>
<li>fr: French;</li>
<li>es: Spanish;</li>
<li>it: Italian.</li>
<li>de: German;</li>
<li>tr: Turkish;</li>
<li>ru: Russian.</li>
When SrcLanguage is tr (Turkish), the value ranges from...to...
<li>zh: Chinese.</li>
<li>en: English;</li>
<li>fr: French;</li>
<li>es: Spanish;</li>
<li>it: Italian.</li>
<li>de: German;</li>
<li>ru: Russian;</li>
<li>pt: Portuguese.</li>
When SrcLanguage is es (Spanish), the parameter value range is
<li>zh: Chinese.</li>
<li>en: English;</li>
<li>fr: French;</li>
<li>it: Italian.</li>
<li>de: German;</li>
<li>tr: Turkish;</li>
<li>ru: Russian;</li>
<li>pt: Portuguese.</li>
When SrcLanguage is ar (Arabic) or hi (Hindi), the value ranges from...to...
<li>en: English.</li>
When SrcLanguage is fr (French), the value ranges from...to...
<li>zh: Chinese.</li>
<li>en: English;</li>
<li>es: Spanish;</li>
<li>it: Italian.</li>
<li>de: German;</li>
<li>tr: Turkish;</li>
<li>ru: Russian;</li>
<li>pt: Portuguese.</li>
                     * 
                     */
                    std::string GetDstLanguage() const;

                    /**
                     * 设置Target language.
If this parameter is filled in with an empty string, it means that only full speech recognition is performed without translation (the billing item is the same as AsrFullTextConfigure full speech recognition).
Otherwise, the parameter value range is divided into the following cases:
When SrcLanguage is zh (Chinese), the value ranges from...to...
<li>en: English;</li>
<li>ja: Japanese;</li>
<li>ko: Korean;</li>
<li>fr: French;</li>
<li>es: Spanish;</li>
<li>it: Italian.</li>
<li>de: German;</li>
<li>tr: Turkish;</li>
<li>ru: Russian;</li>
<li>pt: Portuguese;</li>
<li>vi: Vietnamese;</li>
<li>id: Indonesian;</li>
<li>th: Thai;</li>
<li>ms: Malay.</li>
When SrcLanguage is en (English), the value ranges from...to...
<li>zh: Chinese.</li>
<li>ja: Japanese;</li>
<li>ko: Korean;</li>
<li>fr: French;</li>
<li>es: Spanish;</li>
<li>it: Italian.</li>
<li>de: German;</li>
<li>tr: Turkish;</li>
<li>ru: Russian;</li>
<li>pt: Portuguese;</li>
<li>vi: Vietnamese;</li>
<li>id: Indonesian;</li>
<li>th: Thai;</li>
<li>ms: Malay;</li>
<li>ar: Arabic;</li>
<li>hi: Hindi.</li>
When SrcLanguage is ja (Japanese), the parameter value range is
<li>zh: Chinese.</li>
<li>en: English;</li>
<li>ko: Korean.</li>
When SrcLanguage is ko (Korean), the value ranges from...to...
<li>zh: Chinese.</li>
<li>en: English;</li>
<li>ja: Japanese.</li>
When SrcLanguage is vi (Vietnamese), ms (Malay), or th (Thai), the value ranges from...to...
<li>zh: Chinese.</li>
<li>en: English.</li>
When SrcLanguage is pt (Portuguese), the value ranges from...to...
<li>zh: Chinese.</li>
<li>en: English;</li>
<li>fr: French;</li>
<li>es: Spanish;</li>
<li>it: Italian.</li>
<li>de: German;</li>
<li>tr: Turkish;</li>
<li>ru: Russian.</li>
When SrcLanguage is tr (Turkish), the value ranges from...to...
<li>zh: Chinese.</li>
<li>en: English;</li>
<li>fr: French;</li>
<li>es: Spanish;</li>
<li>it: Italian.</li>
<li>de: German;</li>
<li>ru: Russian;</li>
<li>pt: Portuguese.</li>
When SrcLanguage is es (Spanish), the parameter value range is
<li>zh: Chinese.</li>
<li>en: English;</li>
<li>fr: French;</li>
<li>it: Italian.</li>
<li>de: German;</li>
<li>tr: Turkish;</li>
<li>ru: Russian;</li>
<li>pt: Portuguese.</li>
When SrcLanguage is ar (Arabic) or hi (Hindi), the value ranges from...to...
<li>en: English.</li>
When SrcLanguage is fr (French), the value ranges from...to...
<li>zh: Chinese.</li>
<li>en: English;</li>
<li>es: Spanish;</li>
<li>it: Italian.</li>
<li>de: German;</li>
<li>tr: Turkish;</li>
<li>ru: Russian;</li>
<li>pt: Portuguese.</li>
                     * @param _dstLanguage Target language.
If this parameter is filled in with an empty string, it means that only full speech recognition is performed without translation (the billing item is the same as AsrFullTextConfigure full speech recognition).
Otherwise, the parameter value range is divided into the following cases:
When SrcLanguage is zh (Chinese), the value ranges from...to...
<li>en: English;</li>
<li>ja: Japanese;</li>
<li>ko: Korean;</li>
<li>fr: French;</li>
<li>es: Spanish;</li>
<li>it: Italian.</li>
<li>de: German;</li>
<li>tr: Turkish;</li>
<li>ru: Russian;</li>
<li>pt: Portuguese;</li>
<li>vi: Vietnamese;</li>
<li>id: Indonesian;</li>
<li>th: Thai;</li>
<li>ms: Malay.</li>
When SrcLanguage is en (English), the value ranges from...to...
<li>zh: Chinese.</li>
<li>ja: Japanese;</li>
<li>ko: Korean;</li>
<li>fr: French;</li>
<li>es: Spanish;</li>
<li>it: Italian.</li>
<li>de: German;</li>
<li>tr: Turkish;</li>
<li>ru: Russian;</li>
<li>pt: Portuguese;</li>
<li>vi: Vietnamese;</li>
<li>id: Indonesian;</li>
<li>th: Thai;</li>
<li>ms: Malay;</li>
<li>ar: Arabic;</li>
<li>hi: Hindi.</li>
When SrcLanguage is ja (Japanese), the parameter value range is
<li>zh: Chinese.</li>
<li>en: English;</li>
<li>ko: Korean.</li>
When SrcLanguage is ko (Korean), the value ranges from...to...
<li>zh: Chinese.</li>
<li>en: English;</li>
<li>ja: Japanese.</li>
When SrcLanguage is vi (Vietnamese), ms (Malay), or th (Thai), the value ranges from...to...
<li>zh: Chinese.</li>
<li>en: English.</li>
When SrcLanguage is pt (Portuguese), the value ranges from...to...
<li>zh: Chinese.</li>
<li>en: English;</li>
<li>fr: French;</li>
<li>es: Spanish;</li>
<li>it: Italian.</li>
<li>de: German;</li>
<li>tr: Turkish;</li>
<li>ru: Russian.</li>
When SrcLanguage is tr (Turkish), the value ranges from...to...
<li>zh: Chinese.</li>
<li>en: English;</li>
<li>fr: French;</li>
<li>es: Spanish;</li>
<li>it: Italian.</li>
<li>de: German;</li>
<li>ru: Russian;</li>
<li>pt: Portuguese.</li>
When SrcLanguage is es (Spanish), the parameter value range is
<li>zh: Chinese.</li>
<li>en: English;</li>
<li>fr: French;</li>
<li>it: Italian.</li>
<li>de: German;</li>
<li>tr: Turkish;</li>
<li>ru: Russian;</li>
<li>pt: Portuguese.</li>
When SrcLanguage is ar (Arabic) or hi (Hindi), the value ranges from...to...
<li>en: English.</li>
When SrcLanguage is fr (French), the value ranges from...to...
<li>zh: Chinese.</li>
<li>en: English;</li>
<li>es: Spanish;</li>
<li>it: Italian.</li>
<li>de: German;</li>
<li>tr: Turkish;</li>
<li>ru: Russian;</li>
<li>pt: Portuguese.</li>
                     * 
                     */
                    void SetDstLanguage(const std::string& _dstLanguage);

                    /**
                     * 判断参数 DstLanguage 是否已赋值
                     * @return DstLanguage 是否已赋值
                     * 
                     */
                    bool DstLanguageHasBeenSet() const;

                    /**
                     * 获取Subtitle format list operation information.
                     * @return SubtitleFormatsOperation Subtitle format list operation information.
                     * 
                     */
                    SubtitleFormatsOperation GetSubtitleFormatsOperation() const;

                    /**
                     * 设置Subtitle format list operation information.
                     * @param _subtitleFormatsOperation Subtitle format list operation information.
                     * 
                     */
                    void SetSubtitleFormatsOperation(const SubtitleFormatsOperation& _subtitleFormatsOperation);

                    /**
                     * 判断参数 SubtitleFormatsOperation 是否已赋值
                     * @return SubtitleFormatsOperation 是否已赋值
                     * 
                     */
                    bool SubtitleFormatsOperationHasBeenSet() const;

                    /**
                     * 获取Specify subtitle name. Length limit: 64 characters. This value will be used for player display.
                     * @return SubtitleName Specify subtitle name. Length limit: 64 characters. This value will be used for player display.
                     * 
                     */
                    std::string GetSubtitleName() const;

                    /**
                     * 设置Specify subtitle name. Length limit: 64 characters. This value will be used for player display.
                     * @param _subtitleName Specify subtitle name. Length limit: 64 characters. This value will be used for player display.
                     * 
                     */
                    void SetSubtitleName(const std::string& _subtitleName);

                    /**
                     * 判断参数 SubtitleName 是否已赋值
                     * @return SubtitleName 是否已赋值
                     * 
                     */
                    bool SubtitleNameHasBeenSet() const;

                private:

                    /**
                     * Voice translation recognition task switch. Available values:
<li>ON: enabled;</li>
<li>OFF: Disabled.</li><font color=red>Note:</font> The speech translation recognition task itself will return ASR full text recognition results. To avoid duplicate charges, it is forbidden to enable both speech translation recognition and ASR full text recognition feature items simultaneously.</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Media source language. Valid values:
<li>zh: Chinese.</li>
<li>en: English;</li>
<li>ja: Japanese;</li>
<li>ko: Korean;</li>
<li>vi: Vietnamese;</li>
<li>ms: Malay;</li>
<li>th: Thai;</li>
<li>pt: Portuguese;</li>
<li>tr: Turkish;</li>
<li>ar: Arabic;</li>
<li>es: Spanish;</li>
<li>hi: Hindi;</li>
<li>fr: French.</li>
                     */
                    std::string m_srcLanguage;
                    bool m_srcLanguageHasBeenSet;

                    /**
                     * Target language.
If this parameter is filled in with an empty string, it means that only full speech recognition is performed without translation (the billing item is the same as AsrFullTextConfigure full speech recognition).
Otherwise, the parameter value range is divided into the following cases:
When SrcLanguage is zh (Chinese), the value ranges from...to...
<li>en: English;</li>
<li>ja: Japanese;</li>
<li>ko: Korean;</li>
<li>fr: French;</li>
<li>es: Spanish;</li>
<li>it: Italian.</li>
<li>de: German;</li>
<li>tr: Turkish;</li>
<li>ru: Russian;</li>
<li>pt: Portuguese;</li>
<li>vi: Vietnamese;</li>
<li>id: Indonesian;</li>
<li>th: Thai;</li>
<li>ms: Malay.</li>
When SrcLanguage is en (English), the value ranges from...to...
<li>zh: Chinese.</li>
<li>ja: Japanese;</li>
<li>ko: Korean;</li>
<li>fr: French;</li>
<li>es: Spanish;</li>
<li>it: Italian.</li>
<li>de: German;</li>
<li>tr: Turkish;</li>
<li>ru: Russian;</li>
<li>pt: Portuguese;</li>
<li>vi: Vietnamese;</li>
<li>id: Indonesian;</li>
<li>th: Thai;</li>
<li>ms: Malay;</li>
<li>ar: Arabic;</li>
<li>hi: Hindi.</li>
When SrcLanguage is ja (Japanese), the parameter value range is
<li>zh: Chinese.</li>
<li>en: English;</li>
<li>ko: Korean.</li>
When SrcLanguage is ko (Korean), the value ranges from...to...
<li>zh: Chinese.</li>
<li>en: English;</li>
<li>ja: Japanese.</li>
When SrcLanguage is vi (Vietnamese), ms (Malay), or th (Thai), the value ranges from...to...
<li>zh: Chinese.</li>
<li>en: English.</li>
When SrcLanguage is pt (Portuguese), the value ranges from...to...
<li>zh: Chinese.</li>
<li>en: English;</li>
<li>fr: French;</li>
<li>es: Spanish;</li>
<li>it: Italian.</li>
<li>de: German;</li>
<li>tr: Turkish;</li>
<li>ru: Russian.</li>
When SrcLanguage is tr (Turkish), the value ranges from...to...
<li>zh: Chinese.</li>
<li>en: English;</li>
<li>fr: French;</li>
<li>es: Spanish;</li>
<li>it: Italian.</li>
<li>de: German;</li>
<li>ru: Russian;</li>
<li>pt: Portuguese.</li>
When SrcLanguage is es (Spanish), the parameter value range is
<li>zh: Chinese.</li>
<li>en: English;</li>
<li>fr: French;</li>
<li>it: Italian.</li>
<li>de: German;</li>
<li>tr: Turkish;</li>
<li>ru: Russian;</li>
<li>pt: Portuguese.</li>
When SrcLanguage is ar (Arabic) or hi (Hindi), the value ranges from...to...
<li>en: English.</li>
When SrcLanguage is fr (French), the value ranges from...to...
<li>zh: Chinese.</li>
<li>en: English;</li>
<li>es: Spanish;</li>
<li>it: Italian.</li>
<li>de: German;</li>
<li>tr: Turkish;</li>
<li>ru: Russian;</li>
<li>pt: Portuguese.</li>
                     */
                    std::string m_dstLanguage;
                    bool m_dstLanguageHasBeenSet;

                    /**
                     * Subtitle format list operation information.
                     */
                    SubtitleFormatsOperation m_subtitleFormatsOperation;
                    bool m_subtitleFormatsOperationHasBeenSet;

                    /**
                     * Specify subtitle name. Length limit: 64 characters. This value will be used for player display.
                     */
                    std::string m_subtitleName;
                    bool m_subtitleNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_ASRTRANSLATECONFIGUREINFOFORUPDATE_H_
