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
                     * 获取<p>Sender's email address. If no alias is used, enter the sender's email address directly, for example: noreply@mail.qcloud.com. To use a sender alias, follow this format (note that a space must be used between the alias and the email address): alias+space+&lt;email address&gt;. The alias cannot contain a colon (:).</p>
                     * @return FromEmailAddress <p>Sender's email address. If no alias is used, enter the sender's email address directly, for example: noreply@mail.qcloud.com. To use a sender alias, follow this format (note that a space must be used between the alias and the email address): alias+space+&lt;email address&gt;. The alias cannot contain a colon (:).</p>
                     * 
                     */
                    std::string GetFromEmailAddress() const;

                    /**
                     * 设置<p>Sender's email address. If no alias is used, enter the sender's email address directly, for example: noreply@mail.qcloud.com. To use a sender alias, follow this format (note that a space must be used between the alias and the email address): alias+space+&lt;email address&gt;. The alias cannot contain a colon (:).</p>
                     * @param _fromEmailAddress <p>Sender's email address. If no alias is used, enter the sender's email address directly, for example: noreply@mail.qcloud.com. To use a sender alias, follow this format (note that a space must be used between the alias and the email address): alias+space+&lt;email address&gt;. The alias cannot contain a colon (:).</p>
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
                     * 获取<p>Email Subject</p>
                     * @return Subject <p>Email Subject</p>
                     * 
                     */
                    std::string GetSubject() const;

                    /**
                     * 设置<p>Email Subject</p>
                     * @param _subject <p>Email Subject</p>
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
                     * 获取<p>Recipient email address, supports up to 50 recipients in mass sending. Note: The email content displays all recipient addresses. For non-mass sending, call the API multiple times to send.<br>At least one of the three parameters Destination/Cc/Bcc must exist.</p>
                     * @return Destination <p>Recipient email address, supports up to 50 recipients in mass sending. Note: The email content displays all recipient addresses. For non-mass sending, call the API multiple times to send.<br>At least one of the three parameters Destination/Cc/Bcc must exist.</p>
                     * 
                     */
                    std::vector<std::string> GetDestination() const;

                    /**
                     * 设置<p>Recipient email address, supports up to 50 recipients in mass sending. Note: The email content displays all recipient addresses. For non-mass sending, call the API multiple times to send.<br>At least one of the three parameters Destination/Cc/Bcc must exist.</p>
                     * @param _destination <p>Recipient email address, supports up to 50 recipients in mass sending. Note: The email content displays all recipient addresses. For non-mass sending, call the API multiple times to send.<br>At least one of the three parameters Destination/Cc/Bcc must exist.</p>
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
                     * 获取<p>The "reply" email address of the mail. Can be filled with a mailbox address where you can receive emails, which can be a personal mailbox. If left empty, the recipient's reply mail will fail to send.</p>
                     * @return ReplyToAddresses <p>The "reply" email address of the mail. Can be filled with a mailbox address where you can receive emails, which can be a personal mailbox. If left empty, the recipient's reply mail will fail to send.</p>
                     * 
                     */
                    std::string GetReplyToAddresses() const;

                    /**
                     * 设置<p>The "reply" email address of the mail. Can be filled with a mailbox address where you can receive emails, which can be a personal mailbox. If left empty, the recipient's reply mail will fail to send.</p>
                     * @param _replyToAddresses <p>The "reply" email address of the mail. Can be filled with a mailbox address where you can receive emails, which can be a personal mailbox. If left empty, the recipient's reply mail will fail to send.</p>
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
                     * 获取<p>Email address of CC recipients, supports up to 20 carbon copies.</p>
                     * @return Cc <p>Email address of CC recipients, supports up to 20 carbon copies.</p>
                     * 
                     */
                    std::vector<std::string> GetCc() const;

                    /**
                     * 设置<p>Email address of CC recipients, supports up to 20 carbon copies.</p>
                     * @param _cc <p>Email address of CC recipients, supports up to 20 carbon copies.</p>
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
                     * 获取<p>Bcc email address, supports up to 20 carbon copies. Bcc and Destination must be unique.</p>
                     * @return Bcc <p>Bcc email address, supports up to 20 carbon copies. Bcc and Destination must be unique.</p>
                     * 
                     */
                    std::vector<std::string> GetBcc() const;

                    /**
                     * 设置<p>Bcc email address, supports up to 20 carbon copies. Bcc and Destination must be unique.</p>
                     * @param _bcc <p>Bcc email address, supports up to 20 carbon copies. Bcc and Destination must be unique.</p>
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
                     * 获取<p>Fill in the template parameters when sending with a template.</p><blockquote class="rno-document-tips rno-document-tips-notice">    <div class="rno-document-tips-body">        <i class="rno-document-tip-icon"></i>        <div class="rno-document-tip-title">Note</div>        <div class="rno-document-tip-desc"><p>This field must be specified if you have not applied for special configuration</p></div>    </div></blockquote>
                     * @return Template <p>Fill in the template parameters when sending with a template.</p><blockquote class="rno-document-tips rno-document-tips-notice">    <div class="rno-document-tips-body">        <i class="rno-document-tip-icon"></i>        <div class="rno-document-tip-title">Note</div>        <div class="rno-document-tip-desc"><p>This field must be specified if you have not applied for special configuration</p></div>    </div></blockquote>
                     * 
                     */
                    Template GetTemplate() const;

                    /**
                     * 设置<p>Fill in the template parameters when sending with a template.</p><blockquote class="rno-document-tips rno-document-tips-notice">    <div class="rno-document-tips-body">        <i class="rno-document-tip-icon"></i>        <div class="rno-document-tip-title">Note</div>        <div class="rno-document-tip-desc"><p>This field must be specified if you have not applied for special configuration</p></div>    </div></blockquote>
                     * @param _template <p>Fill in the template parameters when sending with a template.</p><blockquote class="rno-document-tips rno-document-tips-notice">    <div class="rno-document-tips-body">        <i class="rno-document-tip-icon"></i>        <div class="rno-document-tip-title">Note</div>        <div class="rno-document-tip-desc"><p>This field must be specified if you have not applied for special configuration</p></div>    </div></blockquote>
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
                     * 获取<p>Abandoned</p><blockquote class="rno-document-tips rno-document-tips-notice">    <div class="rno-document-tips-body">        <i class="rno-document-tip-icon"></i>        <div class="rno-document-tip-title">Description</div>        <div class="rno-document-tip-desc"><p>Only customers who historically applied for special configuration require the use of this. If you have not applied for special configuration, this field does not exist.</p></div>    </div></blockquote>
                     * @return Simple <p>Abandoned</p><blockquote class="rno-document-tips rno-document-tips-notice">    <div class="rno-document-tips-body">        <i class="rno-document-tip-icon"></i>        <div class="rno-document-tip-title">Description</div>        <div class="rno-document-tip-desc"><p>Only customers who historically applied for special configuration require the use of this. If you have not applied for special configuration, this field does not exist.</p></div>    </div></blockquote>
                     * 
                     */
                    Simple GetSimple() const;

                    /**
                     * 设置<p>Abandoned</p><blockquote class="rno-document-tips rno-document-tips-notice">    <div class="rno-document-tips-body">        <i class="rno-document-tip-icon"></i>        <div class="rno-document-tip-title">Description</div>        <div class="rno-document-tip-desc"><p>Only customers who historically applied for special configuration require the use of this. If you have not applied for special configuration, this field does not exist.</p></div>    </div></blockquote>
                     * @param _simple <p>Abandoned</p><blockquote class="rno-document-tips rno-document-tips-notice">    <div class="rno-document-tips-body">        <i class="rno-document-tip-icon"></i>        <div class="rno-document-tip-title">Description</div>        <div class="rno-document-tip-desc"><p>Only customers who historically applied for special configuration require the use of this. If you have not applied for special configuration, this field does not exist.</p></div>    </div></blockquote>
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
                     * 获取<p>To send an attachment, fill in the relevant parameters. The Tencent Cloud API request supports a maximum of 8M request packet. The attachment content is expected to expand by 1.5 times after Base64 encoding. The total size of all attachments should not exceed 4M. The API will return an error if the overall request exceeds 8M.</p>
                     * @return Attachments <p>To send an attachment, fill in the relevant parameters. The Tencent Cloud API request supports a maximum of 8M request packet. The attachment content is expected to expand by 1.5 times after Base64 encoding. The total size of all attachments should not exceed 4M. The API will return an error if the overall request exceeds 8M.</p>
                     * 
                     */
                    std::vector<Attachment> GetAttachments() const;

                    /**
                     * 设置<p>To send an attachment, fill in the relevant parameters. The Tencent Cloud API request supports a maximum of 8M request packet. The attachment content is expected to expand by 1.5 times after Base64 encoding. The total size of all attachments should not exceed 4M. The API will return an error if the overall request exceeds 8M.</p>
                     * @param _attachments <p>To send an attachment, fill in the relevant parameters. The Tencent Cloud API request supports a maximum of 8M request packet. The attachment content is expected to expand by 1.5 times after Base64 encoding. The total size of all attachments should not exceed 4M. The API will return an error if the overall request exceeds 8M.</p>
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
                     * 获取Unsubscription link options 0: do not add unsubscription link 1: english 2: simplified chinese 3: traditional chinese 4: spanish 5: french 6: german 7: japanese 8: korean 9: arabic 10: thai 11: indonesian.
                     * @return Unsubscribe Unsubscription link options 0: do not add unsubscription link 1: english 2: simplified chinese 3: traditional chinese 4: spanish 5: french 6: german 7: japanese 8: korean 9: arabic 10: thai 11: indonesian.
                     * 
                     */
                    std::string GetUnsubscribe() const;

                    /**
                     * 设置Unsubscription link options 0: do not add unsubscription link 1: english 2: simplified chinese 3: traditional chinese 4: spanish 5: french 6: german 7: japanese 8: korean 9: arabic 10: thai 11: indonesian.
                     * @param _unsubscribe Unsubscription link options 0: do not add unsubscription link 1: english 2: simplified chinese 3: traditional chinese 4: spanish 5: french 6: german 7: japanese 8: korean 9: arabic 10: thai 11: indonesian.
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
                     * 获取<p>Mail trigger type 0: Non-trigger class, default type, select this type for marketing email, non-instant mail. 1: Trigger class, instant delivery mail such as verification code. If the mail exceeds a certain size, the system will automatically select a non-trigger type channel.</p>
                     * @return TriggerType <p>Mail trigger type 0: Non-trigger class, default type, select this type for marketing email, non-instant mail. 1: Trigger class, instant delivery mail such as verification code. If the mail exceeds a certain size, the system will automatically select a non-trigger type channel.</p>
                     * 
                     */
                    uint64_t GetTriggerType() const;

                    /**
                     * 设置<p>Mail trigger type 0: Non-trigger class, default type, select this type for marketing email, non-instant mail. 1: Trigger class, instant delivery mail such as verification code. If the mail exceeds a certain size, the system will automatically select a non-trigger type channel.</p>
                     * @param _triggerType <p>Mail trigger type 0: Non-trigger class, default type, select this type for marketing email, non-instant mail. 1: Trigger class, instant delivery mail such as verification code. If the mail exceeds a certain size, the system will automatically select a non-trigger type channel.</p>
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
                     * 获取<p>Message-Id field in the smtp header</p>
                     * @return SmtpMessageId <p>Message-Id field in the smtp header</p>
                     * 
                     */
                    std::string GetSmtpMessageId() const;

                    /**
                     * 设置<p>Message-Id field in the smtp header</p>
                     * @param _smtpMessageId <p>Message-Id field in the smtp header</p>
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
                     * 获取<p>Other fields that can be set in the smtp header</p>
                     * @return SmtpHeaders <p>Other fields that can be set in the smtp header</p>
                     * 
                     */
                    std::string GetSmtpHeaders() const;

                    /**
                     * 设置<p>Other fields that can be set in the smtp header</p>
                     * @param _smtpHeaders <p>Other fields that can be set in the smtp header</p>
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
                     * 获取<p>The from field in the smtp header. The domain name should be consistent with the FromEmailAddress.</p>
                     * @return HeaderFrom <p>The from field in the smtp header. The domain name should be consistent with the FromEmailAddress.</p>
                     * 
                     */
                    std::string GetHeaderFrom() const;

                    /**
                     * 设置<p>The from field in the smtp header. The domain name should be consistent with the FromEmailAddress.</p>
                     * @param _headerFrom <p>The from field in the smtp header. The domain name should be consistent with the FromEmailAddress.</p>
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
                     * <p>Sender's email address. If no alias is used, enter the sender's email address directly, for example: noreply@mail.qcloud.com. To use a sender alias, follow this format (note that a space must be used between the alias and the email address): alias+space+&lt;email address&gt;. The alias cannot contain a colon (:).</p>
                     */
                    std::string m_fromEmailAddress;
                    bool m_fromEmailAddressHasBeenSet;

                    /**
                     * <p>Email Subject</p>
                     */
                    std::string m_subject;
                    bool m_subjectHasBeenSet;

                    /**
                     * <p>Recipient email address, supports up to 50 recipients in mass sending. Note: The email content displays all recipient addresses. For non-mass sending, call the API multiple times to send.<br>At least one of the three parameters Destination/Cc/Bcc must exist.</p>
                     */
                    std::vector<std::string> m_destination;
                    bool m_destinationHasBeenSet;

                    /**
                     * <p>The "reply" email address of the mail. Can be filled with a mailbox address where you can receive emails, which can be a personal mailbox. If left empty, the recipient's reply mail will fail to send.</p>
                     */
                    std::string m_replyToAddresses;
                    bool m_replyToAddressesHasBeenSet;

                    /**
                     * <p>Email address of CC recipients, supports up to 20 carbon copies.</p>
                     */
                    std::vector<std::string> m_cc;
                    bool m_ccHasBeenSet;

                    /**
                     * <p>Bcc email address, supports up to 20 carbon copies. Bcc and Destination must be unique.</p>
                     */
                    std::vector<std::string> m_bcc;
                    bool m_bccHasBeenSet;

                    /**
                     * <p>Fill in the template parameters when sending with a template.</p><blockquote class="rno-document-tips rno-document-tips-notice">    <div class="rno-document-tips-body">        <i class="rno-document-tip-icon"></i>        <div class="rno-document-tip-title">Note</div>        <div class="rno-document-tip-desc"><p>This field must be specified if you have not applied for special configuration</p></div>    </div></blockquote>
                     */
                    Template m_template;
                    bool m_templateHasBeenSet;

                    /**
                     * <p>Abandoned</p><blockquote class="rno-document-tips rno-document-tips-notice">    <div class="rno-document-tips-body">        <i class="rno-document-tip-icon"></i>        <div class="rno-document-tip-title">Description</div>        <div class="rno-document-tip-desc"><p>Only customers who historically applied for special configuration require the use of this. If you have not applied for special configuration, this field does not exist.</p></div>    </div></blockquote>
                     */
                    Simple m_simple;
                    bool m_simpleHasBeenSet;

                    /**
                     * <p>To send an attachment, fill in the relevant parameters. The Tencent Cloud API request supports a maximum of 8M request packet. The attachment content is expected to expand by 1.5 times after Base64 encoding. The total size of all attachments should not exceed 4M. The API will return an error if the overall request exceeds 8M.</p>
                     */
                    std::vector<Attachment> m_attachments;
                    bool m_attachmentsHasBeenSet;

                    /**
                     * Unsubscription link options 0: do not add unsubscription link 1: english 2: simplified chinese 3: traditional chinese 4: spanish 5: french 6: german 7: japanese 8: korean 9: arabic 10: thai 11: indonesian.
                     */
                    std::string m_unsubscribe;
                    bool m_unsubscribeHasBeenSet;

                    /**
                     * <p>Mail trigger type 0: Non-trigger class, default type, select this type for marketing email, non-instant mail. 1: Trigger class, instant delivery mail such as verification code. If the mail exceeds a certain size, the system will automatically select a non-trigger type channel.</p>
                     */
                    uint64_t m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * <p>Message-Id field in the smtp header</p>
                     */
                    std::string m_smtpMessageId;
                    bool m_smtpMessageIdHasBeenSet;

                    /**
                     * <p>Other fields that can be set in the smtp header</p>
                     */
                    std::string m_smtpHeaders;
                    bool m_smtpHeadersHasBeenSet;

                    /**
                     * <p>The from field in the smtp header. The domain name should be consistent with the FromEmailAddress.</p>
                     */
                    std::string m_headerFrom;
                    bool m_headerFromHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_SENDEMAILREQUEST_H_
