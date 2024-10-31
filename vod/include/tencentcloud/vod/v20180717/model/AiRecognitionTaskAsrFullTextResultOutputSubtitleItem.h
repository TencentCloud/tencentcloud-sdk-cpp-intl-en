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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKASRFULLTEXTRESULTOUTPUTSUBTITLEITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKASRFULLTEXTRESULTOUTPUTSUBTITLEITEM_H_

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
                * Subtitle information.
                */
                class AiRecognitionTaskAsrFullTextResultOutputSubtitleItem : public AbstractModel
                {
                public:
                    AiRecognitionTaskAsrFullTextResultOutputSubtitleItem();
                    ~AiRecognitionTaskAsrFullTextResultOutputSubtitleItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Media asset subtitle ID, used for media asset subtitle management, only valid when Format is vtt.
<font color=red>Note:</font> Tasks before 2024-11-01T10:00:00Z return this field as invalid.
                     * @return Id Media asset subtitle ID, used for media asset subtitle management, only valid when Format is vtt.
<font color=red>Note:</font> Tasks before 2024-11-01T10:00:00Z return this field as invalid.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Media asset subtitle ID, used for media asset subtitle management, only valid when Format is vtt.
<font color=red>Note:</font> Tasks before 2024-11-01T10:00:00Z return this field as invalid.
                     * @param _id Media asset subtitle ID, used for media asset subtitle management, only valid when Format is vtt.
<font color=red>Note:</font> Tasks before 2024-11-01T10:00:00Z return this field as invalid.
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Media asset subtitle name, used for player display, only valid when Format is vtt.
<font color=red>Note:</font> Tasks before 2024-11-01T10:00:00Z return this field as invalid.
                     * @return Name Media asset subtitle name, used for player display, only valid when Format is vtt.
<font color=red>Note:</font> Tasks before 2024-11-01T10:00:00Z return this field as invalid.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Media asset subtitle name, used for player display, only valid when Format is vtt.
<font color=red>Note:</font> Tasks before 2024-11-01T10:00:00Z return this field as invalid.
                     * @param _name Media asset subtitle name, used for player display, only valid when Format is vtt.
<font color=red>Note:</font> Tasks before 2024-11-01T10:00:00Z return this field as invalid.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Subtitle Language.
                     * @return Language Subtitle Language.
                     * 
                     */
                    std::string GetLanguage() const;

                    /**
                     * 设置Subtitle Language.
                     * @param _language Subtitle Language.
                     * 
                     */
                    void SetLanguage(const std::string& _language);

                    /**
                     * 判断参数 Language 是否已赋值
                     * @return Language 是否已赋值
                     * 
                     */
                    bool LanguageHasBeenSet() const;

                    /**
                     * 获取The format of the subtitle files. Valid values:
<li>vtt</li>
<li>srt</li>
                     * @return Format The format of the subtitle files. Valid values:
<li>vtt</li>
<li>srt</li>
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置The format of the subtitle files. Valid values:
<li>vtt</li>
<li>srt</li>
                     * @param _format The format of the subtitle files. Valid values:
<li>vtt</li>
<li>srt</li>
                     * 
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                    /**
                     * 获取The URL of a subtitle file.
                     * @return Url The URL of a subtitle file.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置The URL of a subtitle file.
                     * @param _url The URL of a subtitle file.
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                private:

                    /**
                     * Media asset subtitle ID, used for media asset subtitle management, only valid when Format is vtt.
<font color=red>Note:</font> Tasks before 2024-11-01T10:00:00Z return this field as invalid.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Media asset subtitle name, used for player display, only valid when Format is vtt.
<font color=red>Note:</font> Tasks before 2024-11-01T10:00:00Z return this field as invalid.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Subtitle Language.
                     */
                    std::string m_language;
                    bool m_languageHasBeenSet;

                    /**
                     * The format of the subtitle files. Valid values:
<li>vtt</li>
<li>srt</li>
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * The URL of a subtitle file.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKASRFULLTEXTRESULTOUTPUTSUBTITLEITEM_H_
