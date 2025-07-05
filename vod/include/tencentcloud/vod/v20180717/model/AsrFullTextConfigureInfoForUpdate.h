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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_ASRFULLTEXTCONFIGUREINFOFORUPDATE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_ASRFULLTEXTCONFIGUREINFOFORUPDATE_H_

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
                * Control parameter of full speech recognition task.
                */
                class AsrFullTextConfigureInfoForUpdate : public AbstractModel
                {
                public:
                    AsrFullTextConfigureInfoForUpdate();
                    ~AsrFullTextConfigureInfoForUpdate() = default;
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
                     * 获取The modification information of the subtitle format list.
                     * @return SubtitleFormatsOperation The modification information of the subtitle format list.
                     * 
                     */
                    SubtitleFormatsOperation GetSubtitleFormatsOperation() const;

                    /**
                     * 设置The modification information of the subtitle format list.
                     * @param _subtitleFormatsOperation The modification information of the subtitle format list.
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
                     * 获取The format of the subtitle file generated. <font color='red'>If you pass in an empty string</font>, no subtitle files will be generated. Valid values:
<li>vtt</li>
<li>srt</li>
<font color='red'>Note: This parameter has been deprecated. Please use `SubtitleFormatsOperation` instead.</font>
                     * @return SubtitleFormat The format of the subtitle file generated. <font color='red'>If you pass in an empty string</font>, no subtitle files will be generated. Valid values:
<li>vtt</li>
<li>srt</li>
<font color='red'>Note: This parameter has been deprecated. Please use `SubtitleFormatsOperation` instead.</font>
                     * 
                     */
                    std::string GetSubtitleFormat() const;

                    /**
                     * 设置The format of the subtitle file generated. <font color='red'>If you pass in an empty string</font>, no subtitle files will be generated. Valid values:
<li>vtt</li>
<li>srt</li>
<font color='red'>Note: This parameter has been deprecated. Please use `SubtitleFormatsOperation` instead.</font>
                     * @param _subtitleFormat The format of the subtitle file generated. <font color='red'>If you pass in an empty string</font>, no subtitle files will be generated. Valid values:
<li>vtt</li>
<li>srt</li>
<font color='red'>Note: This parameter has been deprecated. Please use `SubtitleFormatsOperation` instead.</font>
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
                     * 获取Media source language value range: <li>zh: Mandarin </li> <li>en: English</li> <li>ja: Japanese </li> <li>zh-ca: Cantonese</li>
                     * @return SrcLanguage Media source language value range: <li>zh: Mandarin </li> <li>en: English</li> <li>ja: Japanese </li> <li>zh-ca: Cantonese</li>
                     * 
                     */
                    std::string GetSrcLanguage() const;

                    /**
                     * 设置Media source language value range: <li>zh: Mandarin </li> <li>en: English</li> <li>ja: Japanese </li> <li>zh-ca: Cantonese</li>
                     * @param _srcLanguage Media source language value range: <li>zh: Mandarin </li> <li>en: English</li> <li>ja: Japanese </li> <li>zh-ca: Cantonese</li>
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
                     * Switch of full speech recognition task. Valid values:
<li>ON: enables intelligent full speech recognition task;</li>
<li>OFF: disables intelligent full speech recognition task.</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * The modification information of the subtitle format list.
                     */
                    SubtitleFormatsOperation m_subtitleFormatsOperation;
                    bool m_subtitleFormatsOperationHasBeenSet;

                    /**
                     * The format of the subtitle file generated. <font color='red'>If you pass in an empty string</font>, no subtitle files will be generated. Valid values:
<li>vtt</li>
<li>srt</li>
<font color='red'>Note: This parameter has been deprecated. Please use `SubtitleFormatsOperation` instead.</font>
                     */
                    std::string m_subtitleFormat;
                    bool m_subtitleFormatHasBeenSet;

                    /**
                     * Media source language value range: <li>zh: Mandarin </li> <li>en: English</li> <li>ja: Japanese </li> <li>zh-ca: Cantonese</li>
                     */
                    std::string m_srcLanguage;
                    bool m_srcLanguageHasBeenSet;

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

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_ASRFULLTEXTCONFIGUREINFOFORUPDATE_H_
