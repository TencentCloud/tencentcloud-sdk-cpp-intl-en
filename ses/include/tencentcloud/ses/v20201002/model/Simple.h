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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_SIMPLE_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_SIMPLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * Email content, which can be plain text (TEXT), pure code (HTML), or a combination of TEXT and HTML (recommended).
                */
                class Simple : public AbstractModel
                {
                public:
                    Simple();
                    ~Simple() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取HTML code after base64 encoding. To ensure correct display, this parameter should include all code information and cannot contain external CSS.
                     * @return Html HTML code after base64 encoding. To ensure correct display, this parameter should include all code information and cannot contain external CSS.
                     */
                    std::string GetHtml() const;

                    /**
                     * 设置HTML code after base64 encoding. To ensure correct display, this parameter should include all code information and cannot contain external CSS.
                     * @param Html HTML code after base64 encoding. To ensure correct display, this parameter should include all code information and cannot contain external CSS.
                     */
                    void SetHtml(const std::string& _html);

                    /**
                     * 判断参数 Html 是否已赋值
                     * @return Html 是否已赋值
                     */
                    bool HtmlHasBeenSet() const;

                    /**
                     * 获取Plain text content after base64 encoding. If HTML is not involved, the plain text will be displayed in the email. Otherwise, this parameter represents the plain text style of the email.
                     * @return Text Plain text content after base64 encoding. If HTML is not involved, the plain text will be displayed in the email. Otherwise, this parameter represents the plain text style of the email.
                     */
                    std::string GetText() const;

                    /**
                     * 设置Plain text content after base64 encoding. If HTML is not involved, the plain text will be displayed in the email. Otherwise, this parameter represents the plain text style of the email.
                     * @param Text Plain text content after base64 encoding. If HTML is not involved, the plain text will be displayed in the email. Otherwise, this parameter represents the plain text style of the email.
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     */
                    bool TextHasBeenSet() const;

                private:

                    /**
                     * HTML code after base64 encoding. To ensure correct display, this parameter should include all code information and cannot contain external CSS.
                     */
                    std::string m_html;
                    bool m_htmlHasBeenSet;

                    /**
                     * Plain text content after base64 encoding. If HTML is not involved, the plain text will be displayed in the email. Otherwise, this parameter represents the plain text style of the email.
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_SIMPLE_H_
