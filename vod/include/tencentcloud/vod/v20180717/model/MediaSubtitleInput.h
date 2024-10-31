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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIASUBTITLEINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIASUBTITLEINPUT_H_

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
                * Input parameters of subtile information
                */
                class MediaSubtitleInput : public AbstractModel
                {
                public:
                    MediaSubtitleInput();
                    ~MediaSubtitleInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Subtitle name. Length limit: 64 characters
                     * @return Name Subtitle name. Length limit: 64 characters
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Subtitle name. Length limit: 64 characters
                     * @param _name Subtitle name. Length limit: 64 characters
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
                     * 获取Subtitle language. Common values:
<li>`zh`: Chinese</li>
<li>`en`: English</li>
<li>`ja`: Japanese</li>
<li>`ko`: Korean</li>
<li>`vi`: Vietnamese</li>
<li>`ms`: Malay</li>
<li>`th`: Thai</li>
<li>`pt`: Portuguese</li>
<li>`tr`: Turkish</li>
<li>`ar`: Arabic</li>
<li>`es`: Spanish</li>
<li>`hi`: Hindi</li>
<li>`fr`: French</li>For other valid values, see [RFC 5646](https://tools.ietf.org/html/rfc5646).
                     * @return Language Subtitle language. Common values:
<li>`zh`: Chinese</li>
<li>`en`: English</li>
<li>`ja`: Japanese</li>
<li>`ko`: Korean</li>
<li>`vi`: Vietnamese</li>
<li>`ms`: Malay</li>
<li>`th`: Thai</li>
<li>`pt`: Portuguese</li>
<li>`tr`: Turkish</li>
<li>`ar`: Arabic</li>
<li>`es`: Spanish</li>
<li>`hi`: Hindi</li>
<li>`fr`: French</li>For other valid values, see [RFC 5646](https://tools.ietf.org/html/rfc5646).
                     * 
                     */
                    std::string GetLanguage() const;

                    /**
                     * 设置Subtitle language. Common values:
<li>`zh`: Chinese</li>
<li>`en`: English</li>
<li>`ja`: Japanese</li>
<li>`ko`: Korean</li>
<li>`vi`: Vietnamese</li>
<li>`ms`: Malay</li>
<li>`th`: Thai</li>
<li>`pt`: Portuguese</li>
<li>`tr`: Turkish</li>
<li>`ar`: Arabic</li>
<li>`es`: Spanish</li>
<li>`hi`: Hindi</li>
<li>`fr`: French</li>For other valid values, see [RFC 5646](https://tools.ietf.org/html/rfc5646).
                     * @param _language Subtitle language. Common values:
<li>`zh`: Chinese</li>
<li>`en`: English</li>
<li>`ja`: Japanese</li>
<li>`ko`: Korean</li>
<li>`vi`: Vietnamese</li>
<li>`ms`: Malay</li>
<li>`th`: Thai</li>
<li>`pt`: Portuguese</li>
<li>`tr`: Turkish</li>
<li>`ar`: Arabic</li>
<li>`es`: Spanish</li>
<li>`hi`: Hindi</li>
<li>`fr`: French</li>For other valid values, see [RFC 5646](https://tools.ietf.org/html/rfc5646).
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
                     * 获取Subtitle format. Valid value:
<li>vtt</li>
                     * @return Format Subtitle format. Valid value:
<li>vtt</li>
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置Subtitle format. Valid value:
<li>vtt</li>
                     * @param _format Subtitle format. Valid value:
<li>vtt</li>
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
                     * 获取Subtitle content, which is [Base64-encoded](https://tools.ietf.org/html/rfc4648) strings
                     * @return Content Subtitle content, which is [Base64-encoded](https://tools.ietf.org/html/rfc4648) strings
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Subtitle content, which is [Base64-encoded](https://tools.ietf.org/html/rfc4648) strings
                     * @param _content Subtitle content, which is [Base64-encoded](https://tools.ietf.org/html/rfc4648) strings
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取The subtitle ID. It can be up to 16 characters long, can contain letters, numbers, underscores (_), and hyphens (-), and cannot be identical to an existing subtitle ID.
                     * @return Id The subtitle ID. It can be up to 16 characters long, can contain letters, numbers, underscores (_), and hyphens (-), and cannot be identical to an existing subtitle ID.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置The subtitle ID. It can be up to 16 characters long, can contain letters, numbers, underscores (_), and hyphens (-), and cannot be identical to an existing subtitle ID.
                     * @param _id The subtitle ID. It can be up to 16 characters long, can contain letters, numbers, underscores (_), and hyphens (-), and cannot be identical to an existing subtitle ID.
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * Subtitle name. Length limit: 64 characters
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Subtitle language. Common values:
<li>`zh`: Chinese</li>
<li>`en`: English</li>
<li>`ja`: Japanese</li>
<li>`ko`: Korean</li>
<li>`vi`: Vietnamese</li>
<li>`ms`: Malay</li>
<li>`th`: Thai</li>
<li>`pt`: Portuguese</li>
<li>`tr`: Turkish</li>
<li>`ar`: Arabic</li>
<li>`es`: Spanish</li>
<li>`hi`: Hindi</li>
<li>`fr`: French</li>For other valid values, see [RFC 5646](https://tools.ietf.org/html/rfc5646).
                     */
                    std::string m_language;
                    bool m_languageHasBeenSet;

                    /**
                     * Subtitle format. Valid value:
<li>vtt</li>
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * Subtitle content, which is [Base64-encoded](https://tools.ietf.org/html/rfc4648) strings
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * The subtitle ID. It can be up to 16 characters long, can contain letters, numbers, underscores (_), and hyphens (-), and cannot be identical to an existing subtitle ID.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIASUBTITLEINPUT_H_
