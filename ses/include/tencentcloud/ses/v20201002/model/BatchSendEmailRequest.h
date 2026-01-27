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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_BATCHSENDEMAILREQUEST_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_BATCHSENDEMAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ses/v20201002/model/Template.h>
#include <tencentcloud/ses/v20201002/model/Simple.h>
#include <tencentcloud/ses/v20201002/model/Attachment.h>
#include <tencentcloud/ses/v20201002/model/CycleEmailParam.h>
#include <tencentcloud/ses/v20201002/model/TimedEmailParam.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * BatchSendEmail request structure.
                */
                class BatchSendEmailRequest : public AbstractModel
                {
                public:
                    BatchSendEmailRequest();
                    ~BatchSendEmailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Sender'S email address. please fill in the sender's email address, such as noreply@mail.qcloud.com. if you need to fill in the sender's description, please follow.
Sender &lt;email address&gt; via fill in, such as:.
Tencent cloud team &lt;noreply@mail.qcloud.com&gt;.
                     * @return FromEmailAddress Sender'S email address. please fill in the sender's email address, such as noreply@mail.qcloud.com. if you need to fill in the sender's description, please follow.
Sender &lt;email address&gt; via fill in, such as:.
Tencent cloud team &lt;noreply@mail.qcloud.com&gt;.
                     * 
                     */
                    std::string GetFromEmailAddress() const;

                    /**
                     * 设置Sender'S email address. please fill in the sender's email address, such as noreply@mail.qcloud.com. if you need to fill in the sender's description, please follow.
Sender &lt;email address&gt; via fill in, such as:.
Tencent cloud team &lt;noreply@mail.qcloud.com&gt;.
                     * @param _fromEmailAddress Sender'S email address. please fill in the sender's email address, such as noreply@mail.qcloud.com. if you need to fill in the sender's description, please follow.
Sender &lt;email address&gt; via fill in, such as:.
Tencent cloud team &lt;noreply@mail.qcloud.com&gt;.
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
                     * 获取Recipient list ID.
                     * @return ReceiverId Recipient list ID.
                     * 
                     */
                    uint64_t GetReceiverId() const;

                    /**
                     * 设置Recipient list ID.
                     * @param _receiverId Recipient list ID.
                     * 
                     */
                    void SetReceiverId(const uint64_t& _receiverId);

                    /**
                     * 判断参数 ReceiverId 是否已赋值
                     * @return ReceiverId 是否已赋值
                     * 
                     */
                    bool ReceiverIdHasBeenSet() const;

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
                     * 获取Task type 1: send now 2: scheduled sending 3: cycle (frequency) sending.
                     * @return TaskType Task type 1: send now 2: scheduled sending 3: cycle (frequency) sending.
                     * 
                     */
                    uint64_t GetTaskType() const;

                    /**
                     * 设置Task type 1: send now 2: scheduled sending 3: cycle (frequency) sending.
                     * @param _taskType Task type 1: send now 2: scheduled sending 3: cycle (frequency) sending.
                     * 
                     */
                    void SetTaskType(const uint64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取The "reply" email address of the mail. can be filled with an email address you can receive mail from, can be a personal mailbox. if left empty, the recipient's reply mail will fail to send.
                     * @return ReplyToAddresses The "reply" email address of the mail. can be filled with an email address you can receive mail from, can be a personal mailbox. if left empty, the recipient's reply mail will fail to send.
                     * 
                     */
                    std::string GetReplyToAddresses() const;

                    /**
                     * 设置The "reply" email address of the mail. can be filled with an email address you can receive mail from, can be a personal mailbox. if left empty, the recipient's reply mail will fail to send.
                     * @param _replyToAddresses The "reply" email address of the mail. can be filled with an email address you can receive mail from, can be a personal mailbox. if left empty, the recipient's reply mail will fail to send.
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
                     * 获取When using a template to send, fill in the related parameters of the template.
<Dx-Alert infotype="notice" title="note">this field must be specified if you have not applied for special configuration.</dx-alert>.
                     * @return Template When using a template to send, fill in the related parameters of the template.
<Dx-Alert infotype="notice" title="note">this field must be specified if you have not applied for special configuration.</dx-alert>.
                     * 
                     */
                    Template GetTemplate() const;

                    /**
                     * 设置When using a template to send, fill in the related parameters of the template.
<Dx-Alert infotype="notice" title="note">this field must be specified if you have not applied for special configuration.</dx-alert>.
                     * @param _template When using a template to send, fill in the related parameters of the template.
<Dx-Alert infotype="notice" title="note">this field must be specified if you have not applied for special configuration.</dx-alert>.
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
                     * 获取Abandoned<Dx-Alert infotype="notice" title="description">only customers who historically applied for special configuration require the use of it. if you have not applied for special configuration, this field does not exist.</dx-alert>.
                     * @return Simple Abandoned<Dx-Alert infotype="notice" title="description">only customers who historically applied for special configuration require the use of it. if you have not applied for special configuration, this field does not exist.</dx-alert>.
                     * 
                     */
                    Simple GetSimple() const;

                    /**
                     * 设置Abandoned<Dx-Alert infotype="notice" title="description">only customers who historically applied for special configuration require the use of it. if you have not applied for special configuration, this field does not exist.</dx-alert>.
                     * @param _simple Abandoned<Dx-Alert infotype="notice" title="description">only customers who historically applied for special configuration require the use of it. if you have not applied for special configuration, this field does not exist.</dx-alert>.
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
                     * 获取Send attachment when required. fill in related parameters (not supported).
                     * @return Attachments Send attachment when required. fill in related parameters (not supported).
                     * 
                     */
                    std::vector<Attachment> GetAttachments() const;

                    /**
                     * 设置Send attachment when required. fill in related parameters (not supported).
                     * @param _attachments Send attachment when required. fill in related parameters (not supported).
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
                     * 获取Required parameter for sending tasks periodically.
                     * @return CycleParam Required parameter for sending tasks periodically.
                     * 
                     */
                    CycleEmailParam GetCycleParam() const;

                    /**
                     * 设置Required parameter for sending tasks periodically.
                     * @param _cycleParam Required parameter for sending tasks periodically.
                     * 
                     */
                    void SetCycleParam(const CycleEmailParam& _cycleParam);

                    /**
                     * 判断参数 CycleParam 是否已赋值
                     * @return CycleParam 是否已赋值
                     * 
                     */
                    bool CycleParamHasBeenSet() const;

                    /**
                     * 获取Required parameter for scheduled task assignment.
                     * @return TimedParam Required parameter for scheduled task assignment.
                     * 
                     */
                    TimedEmailParam GetTimedParam() const;

                    /**
                     * 设置Required parameter for scheduled task assignment.
                     * @param _timedParam Required parameter for scheduled task assignment.
                     * 
                     */
                    void SetTimedParam(const TimedEmailParam& _timedParam);

                    /**
                     * 判断参数 TimedParam 是否已赋值
                     * @return TimedParam 是否已赋值
                     * 
                     */
                    bool TimedParamHasBeenSet() const;

                    /**
                     * 获取Unsubscription link options 0: do not add 1: english 2: simplified chinese 3: traditional chinese 4: spanish 5: french 6: german 7: japanese 8: korean 9: arabic 10: thai.
                     * @return Unsubscribe Unsubscription link options 0: do not add 1: english 2: simplified chinese 3: traditional chinese 4: spanish 5: french 6: german 7: japanese 8: korean 9: arabic 10: thai.
                     * 
                     */
                    std::string GetUnsubscribe() const;

                    /**
                     * 设置Unsubscription link options 0: do not add 1: english 2: simplified chinese 3: traditional chinese 4: spanish 5: french 6: german 7: japanese 8: korean 9: arabic 10: thai.
                     * @param _unsubscribe Unsubscription link options 0: do not add 1: english 2: simplified chinese 3: traditional chinese 4: spanish 5: french 6: german 7: japanese 8: korean 9: arabic 10: thai.
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
                     * 获取Whether to add an ad flag. valid values: 0 (do not add), 1 (add to the previous subject), 2 (add to the following subject).
                     * @return ADLocation Whether to add an ad flag. valid values: 0 (do not add), 1 (add to the previous subject), 2 (add to the following subject).
                     * 
                     */
                    uint64_t GetADLocation() const;

                    /**
                     * 设置Whether to add an ad flag. valid values: 0 (do not add), 1 (add to the previous subject), 2 (add to the following subject).
                     * @param _aDLocation Whether to add an ad flag. valid values: 0 (do not add), 1 (add to the previous subject), 2 (add to the following subject).
                     * 
                     */
                    void SetADLocation(const uint64_t& _aDLocation);

                    /**
                     * 判断参数 ADLocation 是否已赋值
                     * @return ADLocation 是否已赋值
                     * 
                     */
                    bool ADLocationHasBeenSet() const;

                private:

                    /**
                     * Sender'S email address. please fill in the sender's email address, such as noreply@mail.qcloud.com. if you need to fill in the sender's description, please follow.
Sender &lt;email address&gt; via fill in, such as:.
Tencent cloud team &lt;noreply@mail.qcloud.com&gt;.
                     */
                    std::string m_fromEmailAddress;
                    bool m_fromEmailAddressHasBeenSet;

                    /**
                     * Recipient list ID.
                     */
                    uint64_t m_receiverId;
                    bool m_receiverIdHasBeenSet;

                    /**
                     * Email subject.
                     */
                    std::string m_subject;
                    bool m_subjectHasBeenSet;

                    /**
                     * Task type 1: send now 2: scheduled sending 3: cycle (frequency) sending.
                     */
                    uint64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * The "reply" email address of the mail. can be filled with an email address you can receive mail from, can be a personal mailbox. if left empty, the recipient's reply mail will fail to send.
                     */
                    std::string m_replyToAddresses;
                    bool m_replyToAddressesHasBeenSet;

                    /**
                     * When using a template to send, fill in the related parameters of the template.
<Dx-Alert infotype="notice" title="note">this field must be specified if you have not applied for special configuration.</dx-alert>.
                     */
                    Template m_template;
                    bool m_templateHasBeenSet;

                    /**
                     * Abandoned<Dx-Alert infotype="notice" title="description">only customers who historically applied for special configuration require the use of it. if you have not applied for special configuration, this field does not exist.</dx-alert>.
                     */
                    Simple m_simple;
                    bool m_simpleHasBeenSet;

                    /**
                     * Send attachment when required. fill in related parameters (not supported).
                     */
                    std::vector<Attachment> m_attachments;
                    bool m_attachmentsHasBeenSet;

                    /**
                     * Required parameter for sending tasks periodically.
                     */
                    CycleEmailParam m_cycleParam;
                    bool m_cycleParamHasBeenSet;

                    /**
                     * Required parameter for scheduled task assignment.
                     */
                    TimedEmailParam m_timedParam;
                    bool m_timedParamHasBeenSet;

                    /**
                     * Unsubscription link options 0: do not add 1: english 2: simplified chinese 3: traditional chinese 4: spanish 5: french 6: german 7: japanese 8: korean 9: arabic 10: thai.
                     */
                    std::string m_unsubscribe;
                    bool m_unsubscribeHasBeenSet;

                    /**
                     * Whether to add an ad flag. valid values: 0 (do not add), 1 (add to the previous subject), 2 (add to the following subject).
                     */
                    uint64_t m_aDLocation;
                    bool m_aDLocationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_BATCHSENDEMAILREQUEST_H_
