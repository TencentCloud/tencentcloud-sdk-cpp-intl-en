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
                     * 获取Sender'S email address. when not using an alias, enter the sender's email address directly, for example: noreply@mail.qcloud.com. to enter a sender alias, follow this format (note that a space must separate the alias and email address): alias+space+<email address>. the alias cannot contain a colon (:).
                     * @return FromEmailAddress Sender'S email address. when not using an alias, enter the sender's email address directly, for example: noreply@mail.qcloud.com. to enter a sender alias, follow this format (note that a space must separate the alias and email address): alias+space+<email address>. the alias cannot contain a colon (:).
                     * 
                     */
                    std::string GetFromEmailAddress() const;

                    /**
                     * 设置Sender'S email address. when not using an alias, enter the sender's email address directly, for example: noreply@mail.qcloud.com. to enter a sender alias, follow this format (note that a space must separate the alias and email address): alias+space+<email address>. the alias cannot contain a colon (:).
                     * @param _fromEmailAddress Sender'S email address. when not using an alias, enter the sender's email address directly, for example: noreply@mail.qcloud.com. to enter a sender alias, follow this format (note that a space must separate the alias and email address): alias+space+<email address>. the alias cannot contain a colon (:).
                     * 
                     */
                    void SetFromEmailAddress(const std::string& _fromEmailAddress);

                    /**
                     * 判断参数 FromEmailAddress 是否已赋值
                     * @return FromEmailAddress 是否已赋值
                     * 
                     */
                    bool FromEmailAddressHasBeenSet() const;

                    /**
                     * 获取Recipient email address, supports up to 50 recipients in mass sending. note: the email content displays all recipient addresses. for non-mass sending, call the API multiple times to send.
                     * @return Destination Recipient email address, supports up to 50 recipients in mass sending. note: the email content displays all recipient addresses. for non-mass sending, call the API multiple times to send.
                     * 
                     */
                    std::vector<std::string> GetDestination() const;

                    /**
                     * 设置Recipient email address, supports up to 50 recipients in mass sending. note: the email content displays all recipient addresses. for non-mass sending, call the API multiple times to send.
                     * @param _destination Recipient email address, supports up to 50 recipients in mass sending. note: the email content displays all recipient addresses. for non-mass sending, call the API multiple times to send.
                     * 
                     */
                    void SetDestination(const std::vector<std::string>& _destination);

                    /**
                     * 判断参数 Destination 是否已赋值
                     * @return Destination 是否已赋值
                     * 
                     */
                    bool DestinationHasBeenSet() const;

                    /**
                     * 获取Email subject.
                     * @return Subject Email subject.
                     * 
                     */
                    std::string GetSubject() const;

                    /**
                     * 设置Email subject.
                     * @param _subject Email subject.
                     * 
                     */
                    void SetSubject(const std::string& _subject);

                    /**
                     * 判断参数 Subject 是否已赋值
                     * @return Subject 是否已赋值
                     * 
                     */
                    bool SubjectHasBeenSet() const;

                    /**
                     * 获取The "reply" email address of the mail. can be filled with an email address where you can receive mail, which can be a personal mailbox. if left empty, the recipient's reply mail will fail to send.
                     * @return ReplyToAddresses The "reply" email address of the mail. can be filled with an email address where you can receive mail, which can be a personal mailbox. if left empty, the recipient's reply mail will fail to send.
                     * 
                     */
                    std::string GetReplyToAddresses() const;

                    /**
                     * 设置The "reply" email address of the mail. can be filled with an email address where you can receive mail, which can be a personal mailbox. if left empty, the recipient's reply mail will fail to send.
                     * @param _replyToAddresses The "reply" email address of the mail. can be filled with an email address where you can receive mail, which can be a personal mailbox. if left empty, the recipient's reply mail will fail to send.
                     * 
                     */
                    void SetReplyToAddresses(const std::string& _replyToAddresses);

                    /**
                     * 判断参数 ReplyToAddresses 是否已赋值
                     * @return ReplyToAddresses 是否已赋值
                     * 
                     */
                    bool ReplyToAddressesHasBeenSet() const;

                    /**
                     * 获取Cc recipient email address, supports up to 20 carbon copies.
                     * @return Cc Cc recipient email address, supports up to 20 carbon copies.
                     * 
                     */
                    std::vector<std::string> GetCc() const;

                    /**
                     * 设置Cc recipient email address, supports up to 20 carbon copies.
                     * @param _cc Cc recipient email address, supports up to 20 carbon copies.
                     * 
                     */
                    void SetCc(const std::vector<std::string>& _cc);

                    /**
                     * 判断参数 Cc 是否已赋值
                     * @return Cc 是否已赋值
                     * 
                     */
                    bool CcHasBeenSet() const;

                    /**
                     * 获取Bcc email address, supports up to 20 carbon copies. Bcc and Destination must be unique.
                     * @return Bcc Bcc email address, supports up to 20 carbon copies. Bcc and Destination must be unique.
                     * 
                     */
                    std::vector<std::string> GetBcc() const;

                    /**
                     * 设置Bcc email address, supports up to 20 carbon copies. Bcc and Destination must be unique.
                     * @param _bcc Bcc email address, supports up to 20 carbon copies. Bcc and Destination must be unique.
                     * 
                     */
                    void SetBcc(const std::vector<std::string>& _bcc);

                    /**
                     * 判断参数 Bcc 是否已赋值
                     * @return Bcc 是否已赋值
                     * 
                     */
                    bool BccHasBeenSet() const;

                    /**
                     * 获取Use template for sending and fill in related parameters.
<dx-alert infotype="notice" title="note">this field must be specified if you have not applied for special configuration.</dx-alert>.
                     * @return Template Use template for sending and fill in related parameters.
<dx-alert infotype="notice" title="note">this field must be specified if you have not applied for special configuration.</dx-alert>.
                     * 
                     */
                    Template GetTemplate() const;

                    /**
                     * 设置Use template for sending and fill in related parameters.
<dx-alert infotype="notice" title="note">this field must be specified if you have not applied for special configuration.</dx-alert>.
                     * @param _template Use template for sending and fill in related parameters.
<dx-alert infotype="notice" title="note">this field must be specified if you have not applied for special configuration.</dx-alert>.
                     * 
                     */
                    void SetTemplate(const Template& _template);

                    /**
                     * 判断参数 Template 是否已赋值
                     * @return Template 是否已赋值
                     * 
                     */
                    bool TemplateHasBeenSet() const;

                    /**
                     * 获取This parameter has been deprecated.
<dx-alert infotype="notice" title="description"> only customers who have applied for special configuration in the past need to use this. if you have not applied for special configuration, this field does not exist.</dx-alert>.
                     * @return Simple This parameter has been deprecated.
<dx-alert infotype="notice" title="description"> only customers who have applied for special configuration in the past need to use this. if you have not applied for special configuration, this field does not exist.</dx-alert>.
                     * 
                     */
                    Simple GetSimple() const;

                    /**
                     * 设置This parameter has been deprecated.
<dx-alert infotype="notice" title="description"> only customers who have applied for special configuration in the past need to use this. if you have not applied for special configuration, this field does not exist.</dx-alert>.
                     * @param _simple This parameter has been deprecated.
<dx-alert infotype="notice" title="description"> only customers who have applied for special configuration in the past need to use this. if you have not applied for special configuration, this field does not exist.</dx-alert>.
                     * 
                     */
                    void SetSimple(const Simple& _simple);

                    /**
                     * 判断参数 Simple 是否已赋值
                     * @return Simple 是否已赋值
                     * 
                     */
                    bool SimpleHasBeenSet() const;

                    /**
                     * 获取When sending an attachment, fill in the related parameters. the tencent cloud API request supports a maximum of 8M request packet. the attachment content transits Base64 and is expected to expand by 1.5 times. you should control the total size of all attachments within 4M. the API will return an error if the overall request exceeds 8M.
                     * @return Attachments When sending an attachment, fill in the related parameters. the tencent cloud API request supports a maximum of 8M request packet. the attachment content transits Base64 and is expected to expand by 1.5 times. you should control the total size of all attachments within 4M. the API will return an error if the overall request exceeds 8M.
                     * 
                     */
                    std::vector<Attachment> GetAttachments() const;

                    /**
                     * 设置When sending an attachment, fill in the related parameters. the tencent cloud API request supports a maximum of 8M request packet. the attachment content transits Base64 and is expected to expand by 1.5 times. you should control the total size of all attachments within 4M. the API will return an error if the overall request exceeds 8M.
                     * @param _attachments When sending an attachment, fill in the related parameters. the tencent cloud API request supports a maximum of 8M request packet. the attachment content transits Base64 and is expected to expand by 1.5 times. you should control the total size of all attachments within 4M. the API will return an error if the overall request exceeds 8M.
                     * 
                     */
                    void SetAttachments(const std::vector<Attachment>& _attachments);

                    /**
                     * 判断参数 Attachments 是否已赋值
                     * @return Attachments 是否已赋值
                     * 
                     */
                    bool AttachmentsHasBeenSet() const;

                    /**
                     * 获取Unsubscription link options 0: do not add unsubscription link 1: english 2: simplified chinese 3: traditional chinese 4: spanish 5: french 6: german 7: japanese 8: korean 9: arabic 10: thai.
                     * @return Unsubscribe Unsubscription link options 0: do not add unsubscription link 1: english 2: simplified chinese 3: traditional chinese 4: spanish 5: french 6: german 7: japanese 8: korean 9: arabic 10: thai.
                     * 
                     */
                    std::string GetUnsubscribe() const;

                    /**
                     * 设置Unsubscription link options 0: do not add unsubscription link 1: english 2: simplified chinese 3: traditional chinese 4: spanish 5: french 6: german 7: japanese 8: korean 9: arabic 10: thai.
                     * @param _unsubscribe Unsubscription link options 0: do not add unsubscription link 1: english 2: simplified chinese 3: traditional chinese 4: spanish 5: french 6: german 7: japanese 8: korean 9: arabic 10: thai.
                     * 
                     */
                    void SetUnsubscribe(const std::string& _unsubscribe);

                    /**
                     * 判断参数 Unsubscribe 是否已赋值
                     * @return Unsubscribe 是否已赋值
                     * 
                     */
                    bool UnsubscribeHasBeenSet() const;

                    /**
                     * 获取Mail trigger type. 0: non-trigger class, default type, select this type for marketing emails and non-instant emails. 1: trigger class, instant delivery emails such as captcha-intl. if the mail exceeds a certain size, the system will automatically select the non-trigger class channel.
                     * @return TriggerType Mail trigger type. 0: non-trigger class, default type, select this type for marketing emails and non-instant emails. 1: trigger class, instant delivery emails such as captcha-intl. if the mail exceeds a certain size, the system will automatically select the non-trigger class channel.
                     * 
                     */
                    uint64_t GetTriggerType() const;

                    /**
                     * 设置Mail trigger type. 0: non-trigger class, default type, select this type for marketing emails and non-instant emails. 1: trigger class, instant delivery emails such as captcha-intl. if the mail exceeds a certain size, the system will automatically select the non-trigger class channel.
                     * @param _triggerType Mail trigger type. 0: non-trigger class, default type, select this type for marketing emails and non-instant emails. 1: trigger class, instant delivery emails such as captcha-intl. if the mail exceeds a certain size, the system will automatically select the non-trigger class channel.
                     * 
                     */
                    void SetTriggerType(const uint64_t& _triggerType);

                    /**
                     * 判断参数 TriggerType 是否已赋值
                     * @return TriggerType 是否已赋值
                     * 
                     */
                    bool TriggerTypeHasBeenSet() const;

                    /**
                     * 获取Message-Id field in the smtp header.
                     * @return SmtpMessageId Message-Id field in the smtp header.
                     * 
                     */
                    std::string GetSmtpMessageId() const;

                    /**
                     * 设置Message-Id field in the smtp header.
                     * @param _smtpMessageId Message-Id field in the smtp header.
                     * 
                     */
                    void SetSmtpMessageId(const std::string& _smtpMessageId);

                    /**
                     * 判断参数 SmtpMessageId 是否已赋值
                     * @return SmtpMessageId 是否已赋值
                     * 
                     */
                    bool SmtpMessageIdHasBeenSet() const;

                    /**
                     * 获取Other fields that can be set in the smtp header.
                     * @return SmtpHeaders Other fields that can be set in the smtp header.
                     * 
                     */
                    std::string GetSmtpHeaders() const;

                    /**
                     * 设置Other fields that can be set in the smtp header.
                     * @param _smtpHeaders Other fields that can be set in the smtp header.
                     * 
                     */
                    void SetSmtpHeaders(const std::string& _smtpHeaders);

                    /**
                     * 判断参数 SmtpHeaders 是否已赋值
                     * @return SmtpHeaders 是否已赋值
                     * 
                     */
                    bool SmtpHeadersHasBeenSet() const;

                    /**
                     * 获取from field in the smtp header. the domain name should be consistent with FromEmailAddress.
                     * @return HeaderFrom from field in the smtp header. the domain name should be consistent with FromEmailAddress.
                     * 
                     */
                    std::string GetHeaderFrom() const;

                    /**
                     * 设置from field in the smtp header. the domain name should be consistent with FromEmailAddress.
                     * @param _headerFrom from field in the smtp header. the domain name should be consistent with FromEmailAddress.
                     * 
                     */
                    void SetHeaderFrom(const std::string& _headerFrom);

                    /**
                     * 判断参数 HeaderFrom 是否已赋值
                     * @return HeaderFrom 是否已赋值
                     * 
                     */
                    bool HeaderFromHasBeenSet() const;

                private:

                    /**
                     * Sender'S email address. when not using an alias, enter the sender's email address directly, for example: noreply@mail.qcloud.com. to enter a sender alias, follow this format (note that a space must separate the alias and email address): alias+space+<email address>. the alias cannot contain a colon (:).
                     */
                    std::string m_fromEmailAddress;
                    bool m_fromEmailAddressHasBeenSet;

                    /**
                     * Recipient email address, supports up to 50 recipients in mass sending. note: the email content displays all recipient addresses. for non-mass sending, call the API multiple times to send.
                     */
                    std::vector<std::string> m_destination;
                    bool m_destinationHasBeenSet;

                    /**
                     * Email subject.
                     */
                    std::string m_subject;
                    bool m_subjectHasBeenSet;

                    /**
                     * The "reply" email address of the mail. can be filled with an email address where you can receive mail, which can be a personal mailbox. if left empty, the recipient's reply mail will fail to send.
                     */
                    std::string m_replyToAddresses;
                    bool m_replyToAddressesHasBeenSet;

                    /**
                     * Cc recipient email address, supports up to 20 carbon copies.
                     */
                    std::vector<std::string> m_cc;
                    bool m_ccHasBeenSet;

                    /**
                     * Bcc email address, supports up to 20 carbon copies. Bcc and Destination must be unique.
                     */
                    std::vector<std::string> m_bcc;
                    bool m_bccHasBeenSet;

                    /**
                     * Use template for sending and fill in related parameters.
<dx-alert infotype="notice" title="note">this field must be specified if you have not applied for special configuration.</dx-alert>.
                     */
                    Template m_template;
                    bool m_templateHasBeenSet;

                    /**
                     * This parameter has been deprecated.
<dx-alert infotype="notice" title="description"> only customers who have applied for special configuration in the past need to use this. if you have not applied for special configuration, this field does not exist.</dx-alert>.
                     */
                    Simple m_simple;
                    bool m_simpleHasBeenSet;

                    /**
                     * When sending an attachment, fill in the related parameters. the tencent cloud API request supports a maximum of 8M request packet. the attachment content transits Base64 and is expected to expand by 1.5 times. you should control the total size of all attachments within 4M. the API will return an error if the overall request exceeds 8M.
                     */
                    std::vector<Attachment> m_attachments;
                    bool m_attachmentsHasBeenSet;

                    /**
                     * Unsubscription link options 0: do not add unsubscription link 1: english 2: simplified chinese 3: traditional chinese 4: spanish 5: french 6: german 7: japanese 8: korean 9: arabic 10: thai.
                     */
                    std::string m_unsubscribe;
                    bool m_unsubscribeHasBeenSet;

                    /**
                     * Mail trigger type. 0: non-trigger class, default type, select this type for marketing emails and non-instant emails. 1: trigger class, instant delivery emails such as captcha-intl. if the mail exceeds a certain size, the system will automatically select the non-trigger class channel.
                     */
                    uint64_t m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * Message-Id field in the smtp header.
                     */
                    std::string m_smtpMessageId;
                    bool m_smtpMessageIdHasBeenSet;

                    /**
                     * Other fields that can be set in the smtp header.
                     */
                    std::string m_smtpHeaders;
                    bool m_smtpHeadersHasBeenSet;

                    /**
                     * from field in the smtp header. the domain name should be consistent with FromEmailAddress.
                     */
                    std::string m_headerFrom;
                    bool m_headerFromHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_SENDEMAILREQUEST_H_
