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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_SENDEMAILREQUEST_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_SENDEMAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ses/v20201002/model/Template.h>
#include <tencentcloud/ses/v20201002/model/Simple.h>
#include <tencentcloud/ses/v20201002/model/Attachment.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
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
                     * 获取Sender address. Enter a sender address, for example, noreply@mail.qcloud.com.
To display the sender name, enter the address in the following format: 
Sender <email address>
                     * @return FromEmailAddress Sender address. Enter a sender address, for example, noreply@mail.qcloud.com.
To display the sender name, enter the address in the following format: 
Sender <email address>
                     */
                    std::string GetFromEmailAddress() const;

                    /**
                     * 设置Sender address. Enter a sender address, for example, noreply@mail.qcloud.com.
To display the sender name, enter the address in the following format: 
Sender <email address>
                     * @param FromEmailAddress Sender address. Enter a sender address, for example, noreply@mail.qcloud.com.
To display the sender name, enter the address in the following format: 
Sender <email address>
                     */
                    void SetFromEmailAddress(const std::string& _fromEmailAddress);

                    /**
                     * 判断参数 FromEmailAddress 是否已赋值
                     * @return FromEmailAddress 是否已赋值
                     */
                    bool FromEmailAddressHasBeenSet() const;

                    /**
                     * 获取Recipient email addresses. You can send an email to up to 50 recipients at a time. Note: the email content will display all recipient addresses. To send one-to-one emails to several recipients, please call the API multiple times to send the emails.
                     * @return Destination Recipient email addresses. You can send an email to up to 50 recipients at a time. Note: the email content will display all recipient addresses. To send one-to-one emails to several recipients, please call the API multiple times to send the emails.
                     */
                    std::vector<std::string> GetDestination() const;

                    /**
                     * 设置Recipient email addresses. You can send an email to up to 50 recipients at a time. Note: the email content will display all recipient addresses. To send one-to-one emails to several recipients, please call the API multiple times to send the emails.
                     * @param Destination Recipient email addresses. You can send an email to up to 50 recipients at a time. Note: the email content will display all recipient addresses. To send one-to-one emails to several recipients, please call the API multiple times to send the emails.
                     */
                    void SetDestination(const std::vector<std::string>& _destination);

                    /**
                     * 判断参数 Destination 是否已赋值
                     * @return Destination 是否已赋值
                     */
                    bool DestinationHasBeenSet() const;

                    /**
                     * 获取Email subject.
                     * @return Subject Email subject.
                     */
                    std::string GetSubject() const;

                    /**
                     * 设置Email subject.
                     * @param Subject Email subject.
                     */
                    void SetSubject(const std::string& _subject);

                    /**
                     * 判断参数 Subject 是否已赋值
                     * @return Subject 是否已赋值
                     */
                    bool SubjectHasBeenSet() const;

                    /**
                     * 获取Reply-to address. You can enter a valid personal email address that can receive emails. If this field is left empty, reply emails will be sent to Tencent Cloud.
                     * @return ReplyToAddresses Reply-to address. You can enter a valid personal email address that can receive emails. If this field is left empty, reply emails will be sent to Tencent Cloud.
                     */
                    std::string GetReplyToAddresses() const;

                    /**
                     * 设置Reply-to address. You can enter a valid personal email address that can receive emails. If this field is left empty, reply emails will be sent to Tencent Cloud.
                     * @param ReplyToAddresses Reply-to address. You can enter a valid personal email address that can receive emails. If this field is left empty, reply emails will be sent to Tencent Cloud.
                     */
                    void SetReplyToAddresses(const std::string& _replyToAddresses);

                    /**
                     * 判断参数 ReplyToAddresses 是否已赋值
                     * @return ReplyToAddresses 是否已赋值
                     */
                    bool ReplyToAddressesHasBeenSet() const;

                    /**
                     * 获取Template when sending emails using a template.
                     * @return Template Template when sending emails using a template.
                     */
                    Template GetTemplate() const;

                    /**
                     * 设置Template when sending emails using a template.
                     * @param Template Template when sending emails using a template.
                     */
                    void SetTemplate(const Template& _template);

                    /**
                     * 判断参数 Template 是否已赋值
                     * @return Template 是否已赋值
                     */
                    bool TemplateHasBeenSet() const;

                    /**
                     * 获取Email content when sending emails by calling the API.
                     * @return Simple Email content when sending emails by calling the API.
                     */
                    Simple GetSimple() const;

                    /**
                     * 设置Email content when sending emails by calling the API.
                     * @param Simple Email content when sending emails by calling the API.
                     */
                    void SetSimple(const Simple& _simple);

                    /**
                     * 判断参数 Simple 是否已赋值
                     * @return Simple 是否已赋值
                     */
                    bool SimpleHasBeenSet() const;

                    /**
                     * 获取Email attachments
                     * @return Attachments Email attachments
                     */
                    std::vector<Attachment> GetAttachments() const;

                    /**
                     * 设置Email attachments
                     * @param Attachments Email attachments
                     */
                    void SetAttachments(const std::vector<Attachment>& _attachments);

                    /**
                     * 判断参数 Attachments 是否已赋值
                     * @return Attachments 是否已赋值
                     */
                    bool AttachmentsHasBeenSet() const;

                    /**
                     * 获取Unsubscribe option. `1`: provides an unsubscribe link; `0`: does not provide an unsubscribe link
                     * @return Unsubscribe Unsubscribe option. `1`: provides an unsubscribe link; `0`: does not provide an unsubscribe link
                     */
                    std::string GetUnsubscribe() const;

                    /**
                     * 设置Unsubscribe option. `1`: provides an unsubscribe link; `0`: does not provide an unsubscribe link
                     * @param Unsubscribe Unsubscribe option. `1`: provides an unsubscribe link; `0`: does not provide an unsubscribe link
                     */
                    void SetUnsubscribe(const std::string& _unsubscribe);

                    /**
                     * 判断参数 Unsubscribe 是否已赋值
                     * @return Unsubscribe 是否已赋值
                     */
                    bool UnsubscribeHasBeenSet() const;

                private:

                    /**
                     * Sender address. Enter a sender address, for example, noreply@mail.qcloud.com.
To display the sender name, enter the address in the following format: 
Sender <email address>
                     */
                    std::string m_fromEmailAddress;
                    bool m_fromEmailAddressHasBeenSet;

                    /**
                     * Recipient email addresses. You can send an email to up to 50 recipients at a time. Note: the email content will display all recipient addresses. To send one-to-one emails to several recipients, please call the API multiple times to send the emails.
                     */
                    std::vector<std::string> m_destination;
                    bool m_destinationHasBeenSet;

                    /**
                     * Email subject.
                     */
                    std::string m_subject;
                    bool m_subjectHasBeenSet;

                    /**
                     * Reply-to address. You can enter a valid personal email address that can receive emails. If this field is left empty, reply emails will be sent to Tencent Cloud.
                     */
                    std::string m_replyToAddresses;
                    bool m_replyToAddressesHasBeenSet;

                    /**
                     * Template when sending emails using a template.
                     */
                    Template m_template;
                    bool m_templateHasBeenSet;

                    /**
                     * Email content when sending emails by calling the API.
                     */
                    Simple m_simple;
                    bool m_simpleHasBeenSet;

                    /**
                     * Email attachments
                     */
                    std::vector<Attachment> m_attachments;
                    bool m_attachmentsHasBeenSet;

                    /**
                     * Unsubscribe option. `1`: provides an unsubscribe link; `0`: does not provide an unsubscribe link
                     */
                    std::string m_unsubscribe;
                    bool m_unsubscribeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_SENDEMAILREQUEST_H_
