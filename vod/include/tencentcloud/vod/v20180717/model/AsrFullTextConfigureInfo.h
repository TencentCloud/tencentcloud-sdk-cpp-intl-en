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
                * Control parameter of full speech recognition task.
                */
                class AsrFullTextConfigureInfo : public AbstractModel
                {
                public:
                    AsrFullTextConfigureInfo();
                    ~AsrFullTextConfigureInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Switch of full speech recognition task. Valid values:
<li>ON: enables intelligent full speech recognition task;</li>
<li>OFF: disables intelligent full speech recognition task.</li>
                     * @return Switch Switch of full speech recognition task. Valid values:
<li>ON: enables intelligent full speech recognition task;</li>
<li>OFF: disables intelligent full speech recognition task.</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Switch of full speech recognition task. Valid values:
<li>ON: enables intelligent full speech recognition task;</li>
<li>OFF: disables intelligent full speech recognition task.</li>
                     * @param _switch Switch of full speech recognition task. Valid values:
<li>ON: enables intelligent full speech recognition task;</li>
<li>OFF: disables intelligent full speech recognition task.</li>
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
                     * 获取The formats of the subtitle files generated. If this parameter is not passed or an empty string is passed in, no subtitles files will be generated. Valid values:
<li>vtt</li>
<li>srt</li>
                     * @return SubtitleFormats The formats of the subtitle files generated. If this parameter is not passed or an empty string is passed in, no subtitles files will be generated. Valid values:
<li>vtt</li>
<li>srt</li>
                     * 
                     */
                    std::vector<std::string> GetSubtitleFormats() const;

                    /**
                     * 设置The formats of the subtitle files generated. If this parameter is not passed or an empty string is passed in, no subtitles files will be generated. Valid values:
<li>vtt</li>
<li>srt</li>
                     * @param _subtitleFormats The formats of the subtitle files generated. If this parameter is not passed or an empty string is passed in, no subtitles files will be generated. Valid values:
<li>vtt</li>
<li>srt</li>
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
                     * 获取The format of the subtitle file generated. If this parameter is not passed or an empty string is passed in, no subtitles files will be generated. Valid values:
<li>vtt</li>
<li>srt</li>
<font color='red'>Note: This parameter has been deprecated. Please use `SubtitleFormats` instead.</font>
                     * @return SubtitleFormat The format of the subtitle file generated. If this parameter is not passed or an empty string is passed in, no subtitles files will be generated. Valid values:
<li>vtt</li>
<li>srt</li>
<font color='red'>Note: This parameter has been deprecated. Please use `SubtitleFormats` instead.</font>
                     * 
                     */
                    std::string GetSubtitleFormat() const;

                    /**
                     * 设置The format of the subtitle file generated. If this parameter is not passed or an empty string is passed in, no subtitles files will be generated. Valid values:
<li>vtt</li>
<li>srt</li>
<font color='red'>Note: This parameter has been deprecated. Please use `SubtitleFormats` instead.</font>
                     * @param _subtitleFormat The format of the subtitle file generated. If this parameter is not passed or an empty string is passed in, no subtitles files will be generated. Valid values:
<li>vtt</li>
<li>srt</li>
<font color='red'>Note: This parameter has been deprecated. Please use `SubtitleFormats` instead.</font>
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
                     * 获取Media source language value range: <li>zh: Mandarin </li> <li>en: English</li> <li>ja: Japanese </li> <li>zh-ca: Cantonese</li><font color=red>Note：</font> If it fills in an empty string or leave this parameter blank, it will be automatically recognized (it is recommended to fill in the language corresponding to the media to improve the recognition accuracy).
                     * @return SrcLanguage Media source language value range: <li>zh: Mandarin </li> <li>en: English</li> <li>ja: Japanese </li> <li>zh-ca: Cantonese</li><font color=red>Note：</font> If it fills in an empty string or leave this parameter blank, it will be automatically recognized (it is recommended to fill in the language corresponding to the media to improve the recognition accuracy).
                     * 
                     */
                    std::string GetSrcLanguage() const;

                    /**
                     * 设置Media source language value range: <li>zh: Mandarin </li> <li>en: English</li> <li>ja: Japanese </li> <li>zh-ca: Cantonese</li><font color=red>Note：</font> If it fills in an empty string or leave this parameter blank, it will be automatically recognized (it is recommended to fill in the language corresponding to the media to improve the recognition accuracy).
                     * @param _srcLanguage Media source language value range: <li>zh: Mandarin </li> <li>en: English</li> <li>ja: Japanese </li> <li>zh-ca: Cantonese</li><font color=red>Note：</font> If it fills in an empty string or leave this parameter blank, it will be automatically recognized (it is recommended to fill in the language corresponding to the media to improve the recognition accuracy).
                     * 
                     */
                    void SetSrcLanguage(const std::string& _srcLanguage);

                    /**
                     * 判断参数 SrcLanguage 是否已赋值
                     * @return SrcLanguage 是否已赋值
                     * 
                     */
                    bool SrcLanguageHasBeenSet() const;

                private:

                    /**
                     * Switch of full speech recognition task. Valid values:
<li>ON: enables intelligent full speech recognition task;</li>
<li>OFF: disables intelligent full speech recognition task.</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * The formats of the subtitle files generated. If this parameter is not passed or an empty string is passed in, no subtitles files will be generated. Valid values:
<li>vtt</li>
<li>srt</li>
                     */
                    std::vector<std::string> m_subtitleFormats;
                    bool m_subtitleFormatsHasBeenSet;

                    /**
                     * The format of the subtitle file generated. If this parameter is not passed or an empty string is passed in, no subtitles files will be generated. Valid values:
<li>vtt</li>
<li>srt</li>
<font color='red'>Note: This parameter has been deprecated. Please use `SubtitleFormats` instead.</font>
                     */
                    std::string m_subtitleFormat;
                    bool m_subtitleFormatHasBeenSet;

                    /**
                     * Media source language value range: <li>zh: Mandarin </li> <li>en: English</li> <li>ja: Japanese </li> <li>zh-ca: Cantonese</li><font color=red>Note：</font> If it fills in an empty string or leave this parameter blank, it will be automatically recognized (it is recommended to fill in the language corresponding to the media to improve the recognition accuracy).
                     */
                    std::string m_srcLanguage;
                    bool m_srcLanguageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_ASRFULLTEXTCONFIGUREINFO_H_
