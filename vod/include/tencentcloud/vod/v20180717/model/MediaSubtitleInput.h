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
                * Subtitle information input parameter.
                */
                class MediaSubtitleInput : public AbstractModel
                {
                public:
                    MediaSubtitleInput();
                    ~MediaSubtitleInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Subtitle name. The length cannot exceed 64 characters.
                     * @return Name Subtitle name. The length cannot exceed 64 characters.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Subtitle name. The length cannot exceed 64 characters.
                     * @param _name Subtitle name. The length cannot exceed 64 characters.
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
                     * 获取Subtitle language. Common values are as follows:
<li>zh: Chinese;</li>
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
For other values, see [RFC5646](https://tools.ietf.org/html/rfc5646).
                     * @return Language Subtitle language. Common values are as follows:
<li>zh: Chinese;</li>
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
For other values, see [RFC5646](https://tools.ietf.org/html/rfc5646).
                     * 
                     */
                    std::string GetLanguage() const;

                    /**
                     * 设置Subtitle language. Common values are as follows:
<li>zh: Chinese;</li>
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
For other values, see [RFC5646](https://tools.ietf.org/html/rfc5646).
                     * @param _language Subtitle language. Common values are as follows:
<li>zh: Chinese;</li>
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
For other values, see [RFC5646](https://tools.ietf.org/html/rfc5646).
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
                     * 获取Subtitle format. Valid values:
<li>vtt</li>
                     * @return Format Subtitle format. Valid values:
<li>vtt</li>
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置Subtitle format. Valid values:
<li>vtt</li>
                     * @param _format Subtitle format. Valid values:
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
                     * 获取Caption content as an encoded string after [Base64](https://tools.ietf.org/html/rfc4648) encoding.
                     * @return Content Caption content as an encoded string after [Base64](https://tools.ietf.org/html/rfc4648) encoding.
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Caption content as an encoded string after [Base64](https://tools.ietf.org/html/rfc4648) encoding.
                     * @param _content Caption content as an encoded string after [Base64](https://tools.ietf.org/html/rfc4648) encoding.
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
                     * 获取Unique identifier of the subtitle. Length cannot exceed 16 characters. It can contain upper- and lower-case letters, digits, underscores (_), or hyphens (-). It cannot duplicate the unique identifier of an existing subtitle in the media file.
                     * @return Id Unique identifier of the subtitle. Length cannot exceed 16 characters. It can contain upper- and lower-case letters, digits, underscores (_), or hyphens (-). It cannot duplicate the unique identifier of an existing subtitle in the media file.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Unique identifier of the subtitle. Length cannot exceed 16 characters. It can contain upper- and lower-case letters, digits, underscores (_), or hyphens (-). It cannot duplicate the unique identifier of an existing subtitle in the media file.
                     * @param _id Unique identifier of the subtitle. Length cannot exceed 16 characters. It can contain upper- and lower-case letters, digits, underscores (_), or hyphens (-). It cannot duplicate the unique identifier of an existing subtitle in the media file.
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
                     * Subtitle name. The length cannot exceed 64 characters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Subtitle language. Common values are as follows:
<li>zh: Chinese;</li>
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
For other values, see [RFC5646](https://tools.ietf.org/html/rfc5646).
                     */
                    std::string m_language;
                    bool m_languageHasBeenSet;

                    /**
                     * Subtitle format. Valid values:
<li>vtt</li>
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * Caption content as an encoded string after [Base64](https://tools.ietf.org/html/rfc4648) encoding.
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * Unique identifier of the subtitle. Length cannot exceed 16 characters. It can contain upper- and lower-case letters, digits, underscores (_), or hyphens (-). It cannot duplicate the unique identifier of an existing subtitle in the media file.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIASUBTITLEINPUT_H_
