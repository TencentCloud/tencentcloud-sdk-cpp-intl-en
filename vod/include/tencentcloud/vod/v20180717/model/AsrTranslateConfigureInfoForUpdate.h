/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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
                * Control parameters of voice translation.
                */
                class AsrTranslateConfigureInfoForUpdate : public AbstractModel
                {
                public:
                    AsrTranslateConfigureInfoForUpdate();
                    ~AsrTranslateConfigureInfoForUpdate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Voice translation task switch, optional values:
<li>ON: switch on;</li>
<li>OFF: switch off.</li>
                     * @return Switch Voice translation task switch, optional values:
<li>ON: switch on;</li>
<li>OFF: switch off.</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Voice translation task switch, optional values:
<li>ON: switch on;</li>
<li>OFF: switch off.</li>
                     * @param _switch Voice translation task switch, optional values:
<li>ON: switch on;</li>
<li>OFF: switch off.</li>
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
                     * 获取Media source language, value range:
<li>`zh`: Chinese;</li>
<li>`en`: English;</li>
<li>`ja`: Japanese;</li>
<li>`ko`: Korean;</li>
<li>`vi`: Vietnamese;</li>
<li>`ms`: Malay;</li>
<li>`th`: Thai;</li>
<li>`pt`: Portuguese;</li>
<li>`tr`: Turkish;</li>
<li>`ar`: Arabic;</li>
<li>`es`: Spanish;</li>
<li>`hi`: Hindi;</li>
<li>`fr`: French.</li>
                     * @return SrcLanguage Media source language, value range:
<li>`zh`: Chinese;</li>
<li>`en`: English;</li>
<li>`ja`: Japanese;</li>
<li>`ko`: Korean;</li>
<li>`vi`: Vietnamese;</li>
<li>`ms`: Malay;</li>
<li>`th`: Thai;</li>
<li>`pt`: Portuguese;</li>
<li>`tr`: Turkish;</li>
<li>`ar`: Arabic;</li>
<li>`es`: Spanish;</li>
<li>`hi`: Hindi;</li>
<li>`fr`: French.</li>
                     * 
                     */
                    std::string GetSrcLanguage() const;

                    /**
                     * 设置Media source language, value range:
<li>`zh`: Chinese;</li>
<li>`en`: English;</li>
<li>`ja`: Japanese;</li>
<li>`ko`: Korean;</li>
<li>`vi`: Vietnamese;</li>
<li>`ms`: Malay;</li>
<li>`th`: Thai;</li>
<li>`pt`: Portuguese;</li>
<li>`tr`: Turkish;</li>
<li>`ar`: Arabic;</li>
<li>`es`: Spanish;</li>
<li>`hi`: Hindi;</li>
<li>`fr`: French.</li>
                     * @param _srcLanguage Media source language, value range:
<li>`zh`: Chinese;</li>
<li>`en`: English;</li>
<li>`ja`: Japanese;</li>
<li>`ko`: Korean;</li>
<li>`vi`: Vietnamese;</li>
<li>`ms`: Malay;</li>
<li>`th`: Thai;</li>
<li>`pt`: Portuguese;</li>
<li>`tr`: Turkish;</li>
<li>`ar`: Arabic;</li>
<li>`es`: Spanish;</li>
<li>`hi`: Hindi;</li>
<li>`fr`: French.</li>
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
                     * 获取Translation target language.
When SrcLanguage is zh(Chinese), value range:
<li>`en`: English;</li>
<li>`ja`: Japanese;</li>
<li>`ko`: Korean;</li>
<li>`fr`: French;</li>
<li>`es`: Spanish;</li>
<li>`it`: Italian;</li>
<li>`de`: German;</li>
<li>`tr`: Turkish;</li>
<li>`ru`: Russian;</li>
<li>`pt`: Portuguese;</li>
<li>`vi`: Vietnamese;</li>
<li>`id`: Indonesian;</li>
<li>`th`: Thai;</li>
<li>`ms`: Malay.</li>

When SrcLanguage is en(English), value range:
<li>`zh`: Chinese;</li>
<li>`ja`: Japanese;</li>
<li>`ko`: Korean;</li>
<li>`fr`: French;</li>
<li>`es`: Spanish;</li>
<li>`it`: Italian;</li>
<li>`de`: German;</li>
<li>`tr`: Turkish;</li>
<li>`ru`: Russian;</li>
<li>`pt`: Portuguese;</li>
<li>`vi`: Vietnamese;</li>
<li>`id`: Indonesian;</li>
<li>`th`: Thai;</li>
<li>`ms`: Malay;</li>
<li>`ar`: Arabic;</li>
<li>`hi`: Hindi.</li>

When SrcLanguage is ja (Japanese), value range:
<li>zh: Chinese;</li>
<li>en: English;</li>
<li>ko: Korean.</li>

When SrcLanguage is ko (Korean), value range:
<li>`zh`: Chinese;</li>
<li>`en`: English;</li>
<li>`ja`: Japanese.</li>

When SrcLanguage is vi (Vietnamese) or ms (Malay) or th (Thai), value range:
<li>`zh`: Chinese;</li>
<li>`en`: English.</li>

When SrcLanguage is pt (Portuguese), value range:
<li>`zh`: Chinese;</li>
<li>`en`: English;</li>
<li>`fr`: French;</li>
<li>`es`: Spanish;</li>
<li>`it`: Italian;</li>
<li>`de`: German;</li>
<li>`tr`: Turkish;</li>
<li>`ru`: Russian.</li>

When SrcLanguage is tr (Turkish), value range:
<li>`zh`: Chinese;</li>
<li>`en`: English;</li>
<li>`fr`: French;</li>
<li>`es`: Spanish;</li>
<li>`it`: Italian;</li>
<li>`de`: German;</li>
<li>`ru`: Russian;</li>
<li>`pt`: Portuguese.</li>

When SrcLanguage is es (Spanish), value range:
<li>`zh`: Chinese;</li>
<li>`en`: English;</li>
<li>`fr`: French;</li>
<li>`it`: Italian;</li>
<li>`de`: German;</li>
<li>`tr`: Turkish;</li>
<li>`ru`: Russian;</li>
<li>`pt`: Portuguese.</li>

When SrcLanguage is ar (Arabic) or hi (Hindi), value range:
<li>`en`: English.</li>

When SrcLanguage is fr (French), value range:
<li>`zh`: Chinese;</li>
<li>`en`: English;</li>
<li>`es`: Spanish;</li>
<li>`it`: Italian;</li>
<li>`de`: German;</li>
<li>`tr`: Turkish;</li>
<li>`ru`: Russian;</li>
<li>`pt`: Portuguese.</li>
                     * @return DstLanguage Translation target language.
When SrcLanguage is zh(Chinese), value range:
<li>`en`: English;</li>
<li>`ja`: Japanese;</li>
<li>`ko`: Korean;</li>
<li>`fr`: French;</li>
<li>`es`: Spanish;</li>
<li>`it`: Italian;</li>
<li>`de`: German;</li>
<li>`tr`: Turkish;</li>
<li>`ru`: Russian;</li>
<li>`pt`: Portuguese;</li>
<li>`vi`: Vietnamese;</li>
<li>`id`: Indonesian;</li>
<li>`th`: Thai;</li>
<li>`ms`: Malay.</li>

When SrcLanguage is en(English), value range:
<li>`zh`: Chinese;</li>
<li>`ja`: Japanese;</li>
<li>`ko`: Korean;</li>
<li>`fr`: French;</li>
<li>`es`: Spanish;</li>
<li>`it`: Italian;</li>
<li>`de`: German;</li>
<li>`tr`: Turkish;</li>
<li>`ru`: Russian;</li>
<li>`pt`: Portuguese;</li>
<li>`vi`: Vietnamese;</li>
<li>`id`: Indonesian;</li>
<li>`th`: Thai;</li>
<li>`ms`: Malay;</li>
<li>`ar`: Arabic;</li>
<li>`hi`: Hindi.</li>

When SrcLanguage is ja (Japanese), value range:
<li>zh: Chinese;</li>
<li>en: English;</li>
<li>ko: Korean.</li>

When SrcLanguage is ko (Korean), value range:
<li>`zh`: Chinese;</li>
<li>`en`: English;</li>
<li>`ja`: Japanese.</li>

When SrcLanguage is vi (Vietnamese) or ms (Malay) or th (Thai), value range:
<li>`zh`: Chinese;</li>
<li>`en`: English.</li>

When SrcLanguage is pt (Portuguese), value range:
<li>`zh`: Chinese;</li>
<li>`en`: English;</li>
<li>`fr`: French;</li>
<li>`es`: Spanish;</li>
<li>`it`: Italian;</li>
<li>`de`: German;</li>
<li>`tr`: Turkish;</li>
<li>`ru`: Russian.</li>

When SrcLanguage is tr (Turkish), value range:
<li>`zh`: Chinese;</li>
<li>`en`: English;</li>
<li>`fr`: French;</li>
<li>`es`: Spanish;</li>
<li>`it`: Italian;</li>
<li>`de`: German;</li>
<li>`ru`: Russian;</li>
<li>`pt`: Portuguese.</li>

When SrcLanguage is es (Spanish), value range:
<li>`zh`: Chinese;</li>
<li>`en`: English;</li>
<li>`fr`: French;</li>
<li>`it`: Italian;</li>
<li>`de`: German;</li>
<li>`tr`: Turkish;</li>
<li>`ru`: Russian;</li>
<li>`pt`: Portuguese.</li>

When SrcLanguage is ar (Arabic) or hi (Hindi), value range:
<li>`en`: English.</li>

When SrcLanguage is fr (French), value range:
<li>`zh`: Chinese;</li>
<li>`en`: English;</li>
<li>`es`: Spanish;</li>
<li>`it`: Italian;</li>
<li>`de`: German;</li>
<li>`tr`: Turkish;</li>
<li>`ru`: Russian;</li>
<li>`pt`: Portuguese.</li>
                     * 
                     */
                    std::string GetDstLanguage() const;

                    /**
                     * 设置Translation target language.
When SrcLanguage is zh(Chinese), value range:
<li>`en`: English;</li>
<li>`ja`: Japanese;</li>
<li>`ko`: Korean;</li>
<li>`fr`: French;</li>
<li>`es`: Spanish;</li>
<li>`it`: Italian;</li>
<li>`de`: German;</li>
<li>`tr`: Turkish;</li>
<li>`ru`: Russian;</li>
<li>`pt`: Portuguese;</li>
<li>`vi`: Vietnamese;</li>
<li>`id`: Indonesian;</li>
<li>`th`: Thai;</li>
<li>`ms`: Malay.</li>

When SrcLanguage is en(English), value range:
<li>`zh`: Chinese;</li>
<li>`ja`: Japanese;</li>
<li>`ko`: Korean;</li>
<li>`fr`: French;</li>
<li>`es`: Spanish;</li>
<li>`it`: Italian;</li>
<li>`de`: German;</li>
<li>`tr`: Turkish;</li>
<li>`ru`: Russian;</li>
<li>`pt`: Portuguese;</li>
<li>`vi`: Vietnamese;</li>
<li>`id`: Indonesian;</li>
<li>`th`: Thai;</li>
<li>`ms`: Malay;</li>
<li>`ar`: Arabic;</li>
<li>`hi`: Hindi.</li>

When SrcLanguage is ja (Japanese), value range:
<li>zh: Chinese;</li>
<li>en: English;</li>
<li>ko: Korean.</li>

When SrcLanguage is ko (Korean), value range:
<li>`zh`: Chinese;</li>
<li>`en`: English;</li>
<li>`ja`: Japanese.</li>

When SrcLanguage is vi (Vietnamese) or ms (Malay) or th (Thai), value range:
<li>`zh`: Chinese;</li>
<li>`en`: English.</li>

When SrcLanguage is pt (Portuguese), value range:
<li>`zh`: Chinese;</li>
<li>`en`: English;</li>
<li>`fr`: French;</li>
<li>`es`: Spanish;</li>
<li>`it`: Italian;</li>
<li>`de`: German;</li>
<li>`tr`: Turkish;</li>
<li>`ru`: Russian.</li>

When SrcLanguage is tr (Turkish), value range:
<li>`zh`: Chinese;</li>
<li>`en`: English;</li>
<li>`fr`: French;</li>
<li>`es`: Spanish;</li>
<li>`it`: Italian;</li>
<li>`de`: German;</li>
<li>`ru`: Russian;</li>
<li>`pt`: Portuguese.</li>

When SrcLanguage is es (Spanish), value range:
<li>`zh`: Chinese;</li>
<li>`en`: English;</li>
<li>`fr`: French;</li>
<li>`it`: Italian;</li>
<li>`de`: German;</li>
<li>`tr`: Turkish;</li>
<li>`ru`: Russian;</li>
<li>`pt`: Portuguese.</li>

When SrcLanguage is ar (Arabic) or hi (Hindi), value range:
<li>`en`: English.</li>

When SrcLanguage is fr (French), value range:
<li>`zh`: Chinese;</li>
<li>`en`: English;</li>
<li>`es`: Spanish;</li>
<li>`it`: Italian;</li>
<li>`de`: German;</li>
<li>`tr`: Turkish;</li>
<li>`ru`: Russian;</li>
<li>`pt`: Portuguese.</li>
                     * @param _dstLanguage Translation target language.
When SrcLanguage is zh(Chinese), value range:
<li>`en`: English;</li>
<li>`ja`: Japanese;</li>
<li>`ko`: Korean;</li>
<li>`fr`: French;</li>
<li>`es`: Spanish;</li>
<li>`it`: Italian;</li>
<li>`de`: German;</li>
<li>`tr`: Turkish;</li>
<li>`ru`: Russian;</li>
<li>`pt`: Portuguese;</li>
<li>`vi`: Vietnamese;</li>
<li>`id`: Indonesian;</li>
<li>`th`: Thai;</li>
<li>`ms`: Malay.</li>

When SrcLanguage is en(English), value range:
<li>`zh`: Chinese;</li>
<li>`ja`: Japanese;</li>
<li>`ko`: Korean;</li>
<li>`fr`: French;</li>
<li>`es`: Spanish;</li>
<li>`it`: Italian;</li>
<li>`de`: German;</li>
<li>`tr`: Turkish;</li>
<li>`ru`: Russian;</li>
<li>`pt`: Portuguese;</li>
<li>`vi`: Vietnamese;</li>
<li>`id`: Indonesian;</li>
<li>`th`: Thai;</li>
<li>`ms`: Malay;</li>
<li>`ar`: Arabic;</li>
<li>`hi`: Hindi.</li>

When SrcLanguage is ja (Japanese), value range:
<li>zh: Chinese;</li>
<li>en: English;</li>
<li>ko: Korean.</li>

When SrcLanguage is ko (Korean), value range:
<li>`zh`: Chinese;</li>
<li>`en`: English;</li>
<li>`ja`: Japanese.</li>

When SrcLanguage is vi (Vietnamese) or ms (Malay) or th (Thai), value range:
<li>`zh`: Chinese;</li>
<li>`en`: English.</li>

When SrcLanguage is pt (Portuguese), value range:
<li>`zh`: Chinese;</li>
<li>`en`: English;</li>
<li>`fr`: French;</li>
<li>`es`: Spanish;</li>
<li>`it`: Italian;</li>
<li>`de`: German;</li>
<li>`tr`: Turkish;</li>
<li>`ru`: Russian.</li>

When SrcLanguage is tr (Turkish), value range:
<li>`zh`: Chinese;</li>
<li>`en`: English;</li>
<li>`fr`: French;</li>
<li>`es`: Spanish;</li>
<li>`it`: Italian;</li>
<li>`de`: German;</li>
<li>`ru`: Russian;</li>
<li>`pt`: Portuguese.</li>

When SrcLanguage is es (Spanish), value range:
<li>`zh`: Chinese;</li>
<li>`en`: English;</li>
<li>`fr`: French;</li>
<li>`it`: Italian;</li>
<li>`de`: German;</li>
<li>`tr`: Turkish;</li>
<li>`ru`: Russian;</li>
<li>`pt`: Portuguese.</li>

When SrcLanguage is ar (Arabic) or hi (Hindi), value range:
<li>`en`: English.</li>

When SrcLanguage is fr (French), value range:
<li>`zh`: Chinese;</li>
<li>`en`: English;</li>
<li>`es`: Spanish;</li>
<li>`it`: Italian;</li>
<li>`de`: German;</li>
<li>`tr`: Turkish;</li>
<li>`ru`: Russian;</li>
<li>`pt`: Portuguese.</li>
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
                     * 获取Operation information about subtitle format list.
                     * @return SubtitleFormatsOperation Operation information about subtitle format list.
                     * 
                     */
                    SubtitleFormatsOperation GetSubtitleFormatsOperation() const;

                    /**
                     * 设置Operation information about subtitle format list.
                     * @param _subtitleFormatsOperation Operation information about subtitle format list.
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
                     * 获取Specify subtitle name, length limit: 64 characters. This value will be used for player display.
                     * @return SubtitleName Specify subtitle name, length limit: 64 characters. This value will be used for player display.
                     * 
                     */
                    std::string GetSubtitleName() const;

                    /**
                     * 设置Specify subtitle name, length limit: 64 characters. This value will be used for player display.
                     * @param _subtitleName Specify subtitle name, length limit: 64 characters. This value will be used for player display.
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
                     * Voice translation task switch, optional values:
<li>ON: switch on;</li>
<li>OFF: switch off.</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Media source language, value range:
<li>`zh`: Chinese;</li>
<li>`en`: English;</li>
<li>`ja`: Japanese;</li>
<li>`ko`: Korean;</li>
<li>`vi`: Vietnamese;</li>
<li>`ms`: Malay;</li>
<li>`th`: Thai;</li>
<li>`pt`: Portuguese;</li>
<li>`tr`: Turkish;</li>
<li>`ar`: Arabic;</li>
<li>`es`: Spanish;</li>
<li>`hi`: Hindi;</li>
<li>`fr`: French.</li>
                     */
                    std::string m_srcLanguage;
                    bool m_srcLanguageHasBeenSet;

                    /**
                     * Translation target language.
When SrcLanguage is zh(Chinese), value range:
<li>`en`: English;</li>
<li>`ja`: Japanese;</li>
<li>`ko`: Korean;</li>
<li>`fr`: French;</li>
<li>`es`: Spanish;</li>
<li>`it`: Italian;</li>
<li>`de`: German;</li>
<li>`tr`: Turkish;</li>
<li>`ru`: Russian;</li>
<li>`pt`: Portuguese;</li>
<li>`vi`: Vietnamese;</li>
<li>`id`: Indonesian;</li>
<li>`th`: Thai;</li>
<li>`ms`: Malay.</li>

When SrcLanguage is en(English), value range:
<li>`zh`: Chinese;</li>
<li>`ja`: Japanese;</li>
<li>`ko`: Korean;</li>
<li>`fr`: French;</li>
<li>`es`: Spanish;</li>
<li>`it`: Italian;</li>
<li>`de`: German;</li>
<li>`tr`: Turkish;</li>
<li>`ru`: Russian;</li>
<li>`pt`: Portuguese;</li>
<li>`vi`: Vietnamese;</li>
<li>`id`: Indonesian;</li>
<li>`th`: Thai;</li>
<li>`ms`: Malay;</li>
<li>`ar`: Arabic;</li>
<li>`hi`: Hindi.</li>

When SrcLanguage is ja (Japanese), value range:
<li>zh: Chinese;</li>
<li>en: English;</li>
<li>ko: Korean.</li>

When SrcLanguage is ko (Korean), value range:
<li>`zh`: Chinese;</li>
<li>`en`: English;</li>
<li>`ja`: Japanese.</li>

When SrcLanguage is vi (Vietnamese) or ms (Malay) or th (Thai), value range:
<li>`zh`: Chinese;</li>
<li>`en`: English.</li>

When SrcLanguage is pt (Portuguese), value range:
<li>`zh`: Chinese;</li>
<li>`en`: English;</li>
<li>`fr`: French;</li>
<li>`es`: Spanish;</li>
<li>`it`: Italian;</li>
<li>`de`: German;</li>
<li>`tr`: Turkish;</li>
<li>`ru`: Russian.</li>

When SrcLanguage is tr (Turkish), value range:
<li>`zh`: Chinese;</li>
<li>`en`: English;</li>
<li>`fr`: French;</li>
<li>`es`: Spanish;</li>
<li>`it`: Italian;</li>
<li>`de`: German;</li>
<li>`ru`: Russian;</li>
<li>`pt`: Portuguese.</li>

When SrcLanguage is es (Spanish), value range:
<li>`zh`: Chinese;</li>
<li>`en`: English;</li>
<li>`fr`: French;</li>
<li>`it`: Italian;</li>
<li>`de`: German;</li>
<li>`tr`: Turkish;</li>
<li>`ru`: Russian;</li>
<li>`pt`: Portuguese.</li>

When SrcLanguage is ar (Arabic) or hi (Hindi), value range:
<li>`en`: English.</li>

When SrcLanguage is fr (French), value range:
<li>`zh`: Chinese;</li>
<li>`en`: English;</li>
<li>`es`: Spanish;</li>
<li>`it`: Italian;</li>
<li>`de`: German;</li>
<li>`tr`: Turkish;</li>
<li>`ru`: Russian;</li>
<li>`pt`: Portuguese.</li>
                     */
                    std::string m_dstLanguage;
                    bool m_dstLanguageHasBeenSet;

                    /**
                     * Operation information about subtitle format list.
                     */
                    SubtitleFormatsOperation m_subtitleFormatsOperation;
                    bool m_subtitleFormatsOperationHasBeenSet;

                    /**
                     * Specify subtitle name, length limit: 64 characters. This value will be used for player display.
                     */
                    std::string m_subtitleName;
                    bool m_subtitleNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_ASRTRANSLATECONFIGUREINFOFORUPDATE_H_
