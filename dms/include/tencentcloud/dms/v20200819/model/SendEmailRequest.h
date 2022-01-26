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

#ifndef TENCENTCLOUD_DMS_V20200819_MODEL_SENDEMAILREQUEST_H_
#define TENCENTCLOUD_DMS_V20200819_MODEL_SENDEMAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dms
    {
        namespace V20200819
        {
            namespace Model
            {
                /**
                * SendEmail request structure.
                */
                class SendEmailRequest : public AbstractModel
                {
                public:
                    SendEmailRequest();
                    ~SendEmailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Sender
                     * @return FromAddress Sender
                     */
                    std::string GetFromAddress() const;

                    /**
                     * 设置Sender
                     * @param FromAddress Sender
                     */
                    void SetFromAddress(const std::string& _fromAddress);

                    /**
                     * 判断参数 FromAddress 是否已赋值
                     * @return FromAddress 是否已赋值
                     */
                    bool FromAddressHasBeenSet() const;

                    /**
                     * 获取Recipient
                     * @return ToAddress Recipient
                     */
                    std::string GetToAddress() const;

                    /**
                     * 设置Recipient
                     * @param ToAddress Recipient
                     */
                    void SetToAddress(const std::string& _toAddress);

                    /**
                     * 判断参数 ToAddress 是否已赋值
                     * @return ToAddress 是否已赋值
                     */
                    bool ToAddressHasBeenSet() const;

                    /**
                     * 获取Email summary
                     * @return Subject Email summary
                     */
                    std::string GetSubject() const;

                    /**
                     * 设置Email summary
                     * @param Subject Email summary
                     */
                    void SetSubject(const std::string& _subject);

                    /**
                     * 判断参数 Subject 是否已赋值
                     * @return Subject 是否已赋值
                     */
                    bool SubjectHasBeenSet() const;

                    /**
                     * 获取Sender name
                     * @return FromName Sender name
                     */
                    std::string GetFromName() const;

                    /**
                     * 设置Sender name
                     * @param FromName Sender name
                     */
                    void SetFromName(const std::string& _fromName);

                    /**
                     * 判断参数 FromName 是否已赋值
                     * @return FromName 是否已赋值
                     */
                    bool FromNameHasBeenSet() const;

                    /**
                     * 获取Reply-to address
                     * @return ReplyAddress Reply-to address
                     */
                    std::string GetReplyAddress() const;

                    /**
                     * 设置Reply-to address
                     * @param ReplyAddress Reply-to address
                     */
                    void SetReplyAddress(const std::string& _replyAddress);

                    /**
                     * 判断参数 ReplyAddress 是否已赋值
                     * @return ReplyAddress 是否已赋值
                     */
                    bool ReplyAddressHasBeenSet() const;

                    /**
                     * 获取The body of an HTML email
                     * @return HtmlContent The body of an HTML email
                     */
                    std::string GetHtmlContent() const;

                    /**
                     * 设置The body of an HTML email
                     * @param HtmlContent The body of an HTML email
                     */
                    void SetHtmlContent(const std::string& _htmlContent);

                    /**
                     * 判断参数 HtmlContent 是否已赋值
                     * @return HtmlContent 是否已赋值
                     */
                    bool HtmlContentHasBeenSet() const;

                    /**
                     * 获取The body of a plain-text email
                     * @return TextContent The body of a plain-text email
                     */
                    std::string GetTextContent() const;

                    /**
                     * 设置The body of a plain-text email
                     * @param TextContent The body of a plain-text email
                     */
                    void SetTextContent(const std::string& _textContent);

                    /**
                     * 判断参数 TextContent 是否已赋值
                     * @return TextContent 是否已赋值
                     */
                    bool TextContentHasBeenSet() const;

                private:

                    /**
                     * Sender
                     */
                    std::string m_fromAddress;
                    bool m_fromAddressHasBeenSet;

                    /**
                     * Recipient
                     */
                    std::string m_toAddress;
                    bool m_toAddressHasBeenSet;

                    /**
                     * Email summary
                     */
                    std::string m_subject;
                    bool m_subjectHasBeenSet;

                    /**
                     * Sender name
                     */
                    std::string m_fromName;
                    bool m_fromNameHasBeenSet;

                    /**
                     * Reply-to address
                     */
                    std::string m_replyAddress;
                    bool m_replyAddressHasBeenSet;

                    /**
                     * The body of an HTML email
                     */
                    std::string m_htmlContent;
                    bool m_htmlContentHasBeenSet;

                    /**
                     * The body of a plain-text email
                     */
                    std::string m_textContent;
                    bool m_textContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DMS_V20200819_MODEL_SENDEMAILREQUEST_H_
