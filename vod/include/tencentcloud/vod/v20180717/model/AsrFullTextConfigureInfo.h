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
<font color=red>Note: This parameter is no longer maintained. It is recommended to use the AsrTranslateConfigure parameter to initiate speech translation recognition (when DstLanguage is not filled in or is an empty string, no translation is performed, and the billing item is the same as full speech recognition).</font>
                */
                class AsrFullTextConfigureInfo : public AbstractModel
                {
                public:
                    AsrFullTextConfigureInfo();
                    ~AsrFullTextConfigureInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Voice full-text recognition task switch. Available values:</p><li>ON: Enable the intelligent voice full-text recognition task;</li><li>OFF: Disable the intelligent voice full-text recognition task.</li>
                     * @return Switch <p>Voice full-text recognition task switch. Available values:</p><li>ON: Enable the intelligent voice full-text recognition task;</li><li>OFF: Disable the intelligent voice full-text recognition task.</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置<p>Voice full-text recognition task switch. Available values:</p><li>ON: Enable the intelligent voice full-text recognition task;</li><li>OFF: Disable the intelligent voice full-text recognition task.</li>
                     * @param _switch <p>Voice full-text recognition task switch. Available values:</p><li>ON: Enable the intelligent voice full-text recognition task;</li><li>OFF: Disable the intelligent voice full-text recognition task.</li>
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
                     * 获取<p>List of generated subtitle file formats. Leave empty or pass an empty array to indicate no subtitle file generation. Available values:</p><li>vtt: generate WebVTT subtitle file;</li><li>srt: generate SRT subtitle file.</li><font color="red">Note:</font>VOD media asset information only supports adding vtt subtitles. When and only when SubtitleFormats includes vtt, VOD will add the generated subtitles to media assets.
                     * @return SubtitleFormats <p>List of generated subtitle file formats. Leave empty or pass an empty array to indicate no subtitle file generation. Available values:</p><li>vtt: generate WebVTT subtitle file;</li><li>srt: generate SRT subtitle file.</li><font color="red">Note:</font>VOD media asset information only supports adding vtt subtitles. When and only when SubtitleFormats includes vtt, VOD will add the generated subtitles to media assets.
                     * 
                     */
                    std::vector<std::string> GetSubtitleFormats() const;

                    /**
                     * 设置<p>List of generated subtitle file formats. Leave empty or pass an empty array to indicate no subtitle file generation. Available values:</p><li>vtt: generate WebVTT subtitle file;</li><li>srt: generate SRT subtitle file.</li><font color="red">Note:</font>VOD media asset information only supports adding vtt subtitles. When and only when SubtitleFormats includes vtt, VOD will add the generated subtitles to media assets.
                     * @param _subtitleFormats <p>List of generated subtitle file formats. Leave empty or pass an empty array to indicate no subtitle file generation. Available values:</p><li>vtt: generate WebVTT subtitle file;</li><li>srt: generate SRT subtitle file.</li><font color="red">Note:</font>VOD media asset information only supports adding vtt subtitles. When and only when SubtitleFormats includes vtt, VOD will add the generated subtitles to media assets.
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
                     * 获取<p>Generated subtitle file format. Leave it empty or as an empty string to not generate subtitle files. Available values:</p><li>vtt: generate a WebVTT subtitle file;</li><li>srt: generate an SRT subtitle file.</li><font color="red">Note: This field is deprecated. We recommend using SubtitleFormats.</font>
                     * @return SubtitleFormat <p>Generated subtitle file format. Leave it empty or as an empty string to not generate subtitle files. Available values:</p><li>vtt: generate a WebVTT subtitle file;</li><li>srt: generate an SRT subtitle file.</li><font color="red">Note: This field is deprecated. We recommend using SubtitleFormats.</font>
                     * @deprecated
                     */
                    std::string GetSubtitleFormat() const;

                    /**
                     * 设置<p>Generated subtitle file format. Leave it empty or as an empty string to not generate subtitle files. Available values:</p><li>vtt: generate a WebVTT subtitle file;</li><li>srt: generate an SRT subtitle file.</li><font color="red">Note: This field is deprecated. We recommend using SubtitleFormats.</font>
                     * @param _subtitleFormat <p>Generated subtitle file format. Leave it empty or as an empty string to not generate subtitle files. Available values:</p><li>vtt: generate a WebVTT subtitle file;</li><li>srt: generate an SRT subtitle file.</li><font color="red">Note: This field is deprecated. We recommend using SubtitleFormats.</font>
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
                     * 获取<p>Media source language. Value range:</p><li>zh: Mandarin</li><li>en: English</li><li>ja: Japanese</li><li>zh-ca: Cantonese</li><font color="red">Note:</font> Fill in an empty string or leave the parameter blank for automatic recognition (effectiveness difficult to guarantee. It is recommended to fill in the language corresponding to the original media to improve recognition accuracy).
                     * @return SrcLanguage <p>Media source language. Value range:</p><li>zh: Mandarin</li><li>en: English</li><li>ja: Japanese</li><li>zh-ca: Cantonese</li><font color="red">Note:</font> Fill in an empty string or leave the parameter blank for automatic recognition (effectiveness difficult to guarantee. It is recommended to fill in the language corresponding to the original media to improve recognition accuracy).
                     * 
                     */
                    std::string GetSrcLanguage() const;

                    /**
                     * 设置<p>Media source language. Value range:</p><li>zh: Mandarin</li><li>en: English</li><li>ja: Japanese</li><li>zh-ca: Cantonese</li><font color="red">Note:</font> Fill in an empty string or leave the parameter blank for automatic recognition (effectiveness difficult to guarantee. It is recommended to fill in the language corresponding to the original media to improve recognition accuracy).
                     * @param _srcLanguage <p>Media source language. Value range:</p><li>zh: Mandarin</li><li>en: English</li><li>ja: Japanese</li><li>zh-ca: Cantonese</li><font color="red">Note:</font> Fill in an empty string or leave the parameter blank for automatic recognition (effectiveness difficult to guarantee. It is recommended to fill in the language corresponding to the original media to improve recognition accuracy).
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
                     * 获取<p>Specify subtitle name, length limited to 64 characters. This value will be used for player display. If left blank, VOD will auto generate it.<br><font color="red">Note:</font> This field is valid only when SubtitleFormats includes vtt.</p>
                     * @return SubtitleName <p>Specify subtitle name, length limited to 64 characters. This value will be used for player display. If left blank, VOD will auto generate it.<br><font color="red">Note:</font> This field is valid only when SubtitleFormats includes vtt.</p>
                     * 
                     */
                    std::string GetSubtitleName() const;

                    /**
                     * 设置<p>Specify subtitle name, length limited to 64 characters. This value will be used for player display. If left blank, VOD will auto generate it.<br><font color="red">Note:</font> This field is valid only when SubtitleFormats includes vtt.</p>
                     * @param _subtitleName <p>Specify subtitle name, length limited to 64 characters. This value will be used for player display. If left blank, VOD will auto generate it.<br><font color="red">Note:</font> This field is valid only when SubtitleFormats includes vtt.</p>
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
                     * <p>Voice full-text recognition task switch. Available values:</p><li>ON: Enable the intelligent voice full-text recognition task;</li><li>OFF: Disable the intelligent voice full-text recognition task.</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * <p>List of generated subtitle file formats. Leave empty or pass an empty array to indicate no subtitle file generation. Available values:</p><li>vtt: generate WebVTT subtitle file;</li><li>srt: generate SRT subtitle file.</li><font color="red">Note:</font>VOD media asset information only supports adding vtt subtitles. When and only when SubtitleFormats includes vtt, VOD will add the generated subtitles to media assets.
                     */
                    std::vector<std::string> m_subtitleFormats;
                    bool m_subtitleFormatsHasBeenSet;

                    /**
                     * <p>Generated subtitle file format. Leave it empty or as an empty string to not generate subtitle files. Available values:</p><li>vtt: generate a WebVTT subtitle file;</li><li>srt: generate an SRT subtitle file.</li><font color="red">Note: This field is deprecated. We recommend using SubtitleFormats.</font>
                     */
                    std::string m_subtitleFormat;
                    bool m_subtitleFormatHasBeenSet;

                    /**
                     * <p>Media source language. Value range:</p><li>zh: Mandarin</li><li>en: English</li><li>ja: Japanese</li><li>zh-ca: Cantonese</li><font color="red">Note:</font> Fill in an empty string or leave the parameter blank for automatic recognition (effectiveness difficult to guarantee. It is recommended to fill in the language corresponding to the original media to improve recognition accuracy).
                     */
                    std::string m_srcLanguage;
                    bool m_srcLanguageHasBeenSet;

                    /**
                     * <p>Specify subtitle name, length limited to 64 characters. This value will be used for player display. If left blank, VOD will auto generate it.<br><font color="red">Note:</font> This field is valid only when SubtitleFormats includes vtt.</p>
                     */
                    std::string m_subtitleName;
                    bool m_subtitleNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_ASRFULLTEXTCONFIGUREINFO_H_
