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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_ASRFULLTEXTCONFIGUREINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_ASRFULLTEXTCONFIGUREINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Control parameter of the speech full-text recognition task.
<font color=red>Note: This parameter is no longer maintained. Use the AsrTranslateConfigure parameter to trigger speech translation recognition (when DstLanguage is empty or a fill-in string, no translation is performed, and the billing item matches full text recognition).</font>
                */
                class AsrFullTextConfigureInfo : public AbstractModel
                {
                public:
                    AsrFullTextConfigureInfo();
                    ~AsrFullTextConfigureInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Voice full-text recognition task switch. Available values:
<li>ON: Enable intelligent voice full-text recognition task.</li>
<li>OFF: Disable the intelligent voice full-text recognition task.</li>
                     * @return Switch Voice full-text recognition task switch. Available values:
<li>ON: Enable intelligent voice full-text recognition task.</li>
<li>OFF: Disable the intelligent voice full-text recognition task.</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Voice full-text recognition task switch. Available values:
<li>ON: Enable intelligent voice full-text recognition task.</li>
<li>OFF: Disable the intelligent voice full-text recognition task.</li>
                     * @param _switch Voice full-text recognition task switch. Available values:
<li>ON: Enable intelligent voice full-text recognition task.</li>
<li>OFF: Disable the intelligent voice full-text recognition task.</li>
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
                     * 获取Generated subtitle file format list. Leaving it as an empty array means no subtitle file will be generated. Available values:
<li>vtt: Generate a WebVTT subtitle file.</li>
<li>srt: Generate SRT subtitle file.</li><font color=red>Note:</font> VOD media asset information only supports adding vtt subtitles. When and only when SubtitleFormats includes vtt, VOD will be generated subtitles add to media assets.
                     * @return SubtitleFormats Generated subtitle file format list. Leaving it as an empty array means no subtitle file will be generated. Available values:
<li>vtt: Generate a WebVTT subtitle file.</li>
<li>srt: Generate SRT subtitle file.</li><font color=red>Note:</font> VOD media asset information only supports adding vtt subtitles. When and only when SubtitleFormats includes vtt, VOD will be generated subtitles add to media assets.
                     * 
                     */
                    std::vector<std::string> GetSubtitleFormats() const;

                    /**
                     * 设置Generated subtitle file format list. Leaving it as an empty array means no subtitle file will be generated. Available values:
<li>vtt: Generate a WebVTT subtitle file.</li>
<li>srt: Generate SRT subtitle file.</li><font color=red>Note:</font> VOD media asset information only supports adding vtt subtitles. When and only when SubtitleFormats includes vtt, VOD will be generated subtitles add to media assets.
                     * @param _subtitleFormats Generated subtitle file format list. Leaving it as an empty array means no subtitle file will be generated. Available values:
<li>vtt: Generate a WebVTT subtitle file.</li>
<li>srt: Generate SRT subtitle file.</li><font color=red>Note:</font> VOD media asset information only supports adding vtt subtitles. When and only when SubtitleFormats includes vtt, VOD will be generated subtitles add to media assets.
                     * 
                     */
                    void SetSubtitleFormats(const std::vector<std::string>& _subtitleFormats);

                    /**
                     * 判断参数 SubtitleFormats 是否已赋值
                     * @return SubtitleFormats 是否已赋值
                     * 
                     */
                    bool SubtitleFormatsHasBeenSet() const;

                    /**
                     * 获取Generated subtitle file format. Leaving it as an empty string or not filling it means no subtitle file will be generated. Valid value:
<li>vtt: Generate a WebVTT subtitle file.</li>
<li>srt: Generate SRT subtitle file.</li>
<font color='red'>Note: This field is deprecated. Recommend using SubtitleFormats.</font>
                     * @return SubtitleFormat Generated subtitle file format. Leaving it as an empty string or not filling it means no subtitle file will be generated. Valid value:
<li>vtt: Generate a WebVTT subtitle file.</li>
<li>srt: Generate SRT subtitle file.</li>
<font color='red'>Note: This field is deprecated. Recommend using SubtitleFormats.</font>
                     * @deprecated
                     */
                    std::string GetSubtitleFormat() const;

                    /**
                     * 设置Generated subtitle file format. Leaving it as an empty string or not filling it means no subtitle file will be generated. Valid value:
<li>vtt: Generate a WebVTT subtitle file.</li>
<li>srt: Generate SRT subtitle file.</li>
<font color='red'>Note: This field is deprecated. Recommend using SubtitleFormats.</font>
                     * @param _subtitleFormat Generated subtitle file format. Leaving it as an empty string or not filling it means no subtitle file will be generated. Valid value:
<li>vtt: Generate a WebVTT subtitle file.</li>
<li>srt: Generate SRT subtitle file.</li>
<font color='red'>Note: This field is deprecated. Recommend using SubtitleFormats.</font>
                     * @deprecated
                     */
                    void SetSubtitleFormat(const std::string& _subtitleFormat);

                    /**
                     * 判断参数 SubtitleFormat 是否已赋值
                     * @return SubtitleFormat 是否已赋值
                     * @deprecated
                     */
                    bool SubtitleFormatHasBeenSet() const;

                    /**
                     * 获取Media source language. Valid values:
<li>zh: Mandarin;</li>
<li>en: English;</li>
<li>ja: Japanese;</li>
<li>zh-ca: Cantonese.</li>
<font color=red>Note:</font> Fill in an empty string or leave the parameter blank for automatic recognition (effectiveness difficult to guarantee. Recommended to fill in the language corresponding to the original media to improve recognition accuracy).
                     * @return SrcLanguage Media source language. Valid values:
<li>zh: Mandarin;</li>
<li>en: English;</li>
<li>ja: Japanese;</li>
<li>zh-ca: Cantonese.</li>
<font color=red>Note:</font> Fill in an empty string or leave the parameter blank for automatic recognition (effectiveness difficult to guarantee. Recommended to fill in the language corresponding to the original media to improve recognition accuracy).
                     * 
                     */
                    std::string GetSrcLanguage() const;

                    /**
                     * 设置Media source language. Valid values:
<li>zh: Mandarin;</li>
<li>en: English;</li>
<li>ja: Japanese;</li>
<li>zh-ca: Cantonese.</li>
<font color=red>Note:</font> Fill in an empty string or leave the parameter blank for automatic recognition (effectiveness difficult to guarantee. Recommended to fill in the language corresponding to the original media to improve recognition accuracy).
                     * @param _srcLanguage Media source language. Valid values:
<li>zh: Mandarin;</li>
<li>en: English;</li>
<li>ja: Japanese;</li>
<li>zh-ca: Cantonese.</li>
<font color=red>Note:</font> Fill in an empty string or leave the parameter blank for automatic recognition (effectiveness difficult to guarantee. Recommended to fill in the language corresponding to the original media to improve recognition accuracy).
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
                     * 获取Specify subtitle name. Length limit: 64 characters. This value will be used for player display. If left blank, VOD will auto generate.
<font color=red>Note:</font> This field is valid only when SubtitleFormats contains vtt.
                     * @return SubtitleName Specify subtitle name. Length limit: 64 characters. This value will be used for player display. If left blank, VOD will auto generate.
<font color=red>Note:</font> This field is valid only when SubtitleFormats contains vtt.
                     * 
                     */
                    std::string GetSubtitleName() const;

                    /**
                     * 设置Specify subtitle name. Length limit: 64 characters. This value will be used for player display. If left blank, VOD will auto generate.
<font color=red>Note:</font> This field is valid only when SubtitleFormats contains vtt.
                     * @param _subtitleName Specify subtitle name. Length limit: 64 characters. This value will be used for player display. If left blank, VOD will auto generate.
<font color=red>Note:</font> This field is valid only when SubtitleFormats contains vtt.
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
                     * Voice full-text recognition task switch. Available values:
<li>ON: Enable intelligent voice full-text recognition task.</li>
<li>OFF: Disable the intelligent voice full-text recognition task.</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Generated subtitle file format list. Leaving it as an empty array means no subtitle file will be generated. Available values:
<li>vtt: Generate a WebVTT subtitle file.</li>
<li>srt: Generate SRT subtitle file.</li><font color=red>Note:</font> VOD media asset information only supports adding vtt subtitles. When and only when SubtitleFormats includes vtt, VOD will be generated subtitles add to media assets.
                     */
                    std::vector<std::string> m_subtitleFormats;
                    bool m_subtitleFormatsHasBeenSet;

                    /**
                     * Generated subtitle file format. Leaving it as an empty string or not filling it means no subtitle file will be generated. Valid value:
<li>vtt: Generate a WebVTT subtitle file.</li>
<li>srt: Generate SRT subtitle file.</li>
<font color='red'>Note: This field is deprecated. Recommend using SubtitleFormats.</font>
                     */
                    std::string m_subtitleFormat;
                    bool m_subtitleFormatHasBeenSet;

                    /**
                     * Media source language. Valid values:
<li>zh: Mandarin;</li>
<li>en: English;</li>
<li>ja: Japanese;</li>
<li>zh-ca: Cantonese.</li>
<font color=red>Note:</font> Fill in an empty string or leave the parameter blank for automatic recognition (effectiveness difficult to guarantee. Recommended to fill in the language corresponding to the original media to improve recognition accuracy).
                     */
                    std::string m_srcLanguage;
                    bool m_srcLanguageHasBeenSet;

                    /**
                     * Specify subtitle name. Length limit: 64 characters. This value will be used for player display. If left blank, VOD will auto generate.
<font color=red>Note:</font> This field is valid only when SubtitleFormats contains vtt.
                     */
                    std::string m_subtitleName;
                    bool m_subtitleNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_ASRFULLTEXTCONFIGUREINFO_H_
