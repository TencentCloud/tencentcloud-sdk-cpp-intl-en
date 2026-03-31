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
                     * 获取<p>Sender's email address. Please fill in the sender's email address, for example: noreply@mail.qcloud.com. If you need to fill in the sender description, please enter it via<br>sender &lt;email address&gt;, for example:<br>Tencent Cloud team &lt;noreply@mail.qcloud.com&gt;</p>
                     * @return FromEmailAddress <p>Sender's email address. Please fill in the sender's email address, for example: noreply@mail.qcloud.com. If you need to fill in the sender description, please enter it via<br>sender &lt;email address&gt;, for example:<br>Tencent Cloud team &lt;noreply@mail.qcloud.com&gt;</p>
                     * 
                     */
                    std::string GetFromEmailAddress() const;

                    /**
                     * 设置<p>Sender's email address. Please fill in the sender's email address, for example: noreply@mail.qcloud.com. If you need to fill in the sender description, please enter it via<br>sender &lt;email address&gt;, for example:<br>Tencent Cloud team &lt;noreply@mail.qcloud.com&gt;</p>
                     * @param _fromEmailAddress <p>Sender's email address. Please fill in the sender's email address, for example: noreply@mail.qcloud.com. If you need to fill in the sender description, please enter it via<br>sender &lt;email address&gt;, for example:<br>Tencent Cloud team &lt;noreply@mail.qcloud.com&gt;</p>
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
                     * 获取<p>Recipient list ID</p>
                     * @return ReceiverId <p>Recipient list ID</p>
                     * 
                     */
                    uint64_t GetReceiverId() const;

                    /**
                     * 设置<p>Recipient list ID</p>
                     * @param _receiverId <p>Recipient list ID</p>
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
                     * 获取<p>Task type 1: Send now 2: Scheduled sending 3: Cycle (frequency) sending</p>
                     * @return TaskType <p>Task type 1: Send now 2: Scheduled sending 3: Cycle (frequency) sending</p>
                     * 
                     */
                    uint64_t GetTaskType() const;

                    /**
                     * 设置<p>Task type 1: Send now 2: Scheduled sending 3: Cycle (frequency) sending</p>
                     * @param _taskType <p>Task type 1: Send now 2: Scheduled sending 3: Cycle (frequency) sending</p>
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
                     * 获取<p>The "reply" email address of the mail. Can be filled with an email address you can receive mail, can be a personal mailbox. If left empty, the recipient's reply mail will fail to send.</p>
                     * @return ReplyToAddresses <p>The "reply" email address of the mail. Can be filled with an email address you can receive mail, can be a personal mailbox. If left empty, the recipient's reply mail will fail to send.</p>
                     * 
                     */
                    std::string GetReplyToAddresses() const;

                    /**
                     * 设置<p>The "reply" email address of the mail. Can be filled with an email address you can receive mail, can be a personal mailbox. If left empty, the recipient's reply mail will fail to send.</p>
                     * @param _replyToAddresses <p>The "reply" email address of the mail. Can be filled with an email address you can receive mail, can be a personal mailbox. If left empty, the recipient's reply mail will fail to send.</p>
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
                     * 获取<p>Template-related parameters to fill in when sending with a template</p><blockquote class="rno-document-tips rno-document-tips-notice">    <div class="rno-document-tips-body">        <i class="rno-document-tip-icon"></i>        <div class="rno-document-tip-title">Note</div>        <div class="rno-document-tip-desc"><p>This field must be specified if you have not applied for special configuration</p></div>    </div></blockquote>
                     * @return Template <p>Template-related parameters to fill in when sending with a template</p><blockquote class="rno-document-tips rno-document-tips-notice">    <div class="rno-document-tips-body">        <i class="rno-document-tip-icon"></i>        <div class="rno-document-tip-title">Note</div>        <div class="rno-document-tip-desc"><p>This field must be specified if you have not applied for special configuration</p></div>    </div></blockquote>
                     * 
                     */
                    Template GetTemplate() const;

                    /**
                     * 设置<p>Template-related parameters to fill in when sending with a template</p><blockquote class="rno-document-tips rno-document-tips-notice">    <div class="rno-document-tips-body">        <i class="rno-document-tip-icon"></i>        <div class="rno-document-tip-title">Note</div>        <div class="rno-document-tip-desc"><p>This field must be specified if you have not applied for special configuration</p></div>    </div></blockquote>
                     * @param _template <p>Template-related parameters to fill in when sending with a template</p><blockquote class="rno-document-tips rno-document-tips-notice">    <div class="rno-document-tips-body">        <i class="rno-document-tip-icon"></i>        <div class="rno-document-tip-title">Note</div>        <div class="rno-document-tip-desc"><p>This field must be specified if you have not applied for special configuration</p></div>    </div></blockquote>
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
                     * 获取<p>Abandoned<blockquote class="rno-document-tips rno-document-tips-notice">    <div class="rno-document-tips-body">        <i class="rno-document-tip-icon"></i>        <div class="rno-document-tip-title">Description</div>        <div class="rno-document-tip-desc"><p>Only customers who historically applied for special configuration need to use this. If you have not applied for special configuration, this field does not exist.</p></div>    </div></blockquote></p>
                     * @return Simple <p>Abandoned<blockquote class="rno-document-tips rno-document-tips-notice">    <div class="rno-document-tips-body">        <i class="rno-document-tip-icon"></i>        <div class="rno-document-tip-title">Description</div>        <div class="rno-document-tip-desc"><p>Only customers who historically applied for special configuration need to use this. If you have not applied for special configuration, this field does not exist.</p></div>    </div></blockquote></p>
                     * 
                     */
                    Simple GetSimple() const;

                    /**
                     * 设置<p>Abandoned<blockquote class="rno-document-tips rno-document-tips-notice">    <div class="rno-document-tips-body">        <i class="rno-document-tip-icon"></i>        <div class="rno-document-tip-title">Description</div>        <div class="rno-document-tip-desc"><p>Only customers who historically applied for special configuration need to use this. If you have not applied for special configuration, this field does not exist.</p></div>    </div></blockquote></p>
                     * @param _simple <p>Abandoned<blockquote class="rno-document-tips rno-document-tips-notice">    <div class="rno-document-tips-body">        <i class="rno-document-tip-icon"></i>        <div class="rno-document-tip-title">Description</div>        <div class="rno-document-tip-desc"><p>Only customers who historically applied for special configuration need to use this. If you have not applied for special configuration, this field does not exist.</p></div>    </div></blockquote></p>
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
                     * 获取<p>When you need to send an attachment, fill in the related parameters (not supported).</p>
                     * @return Attachments <p>When you need to send an attachment, fill in the related parameters (not supported).</p>
                     * 
                     */
                    std::vector<Attachment> GetAttachments() const;

                    /**
                     * 设置<p>When you need to send an attachment, fill in the related parameters (not supported).</p>
                     * @param _attachments <p>When you need to send an attachment, fill in the related parameters (not supported).</p>
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
                     * 获取<p>Required parameter for sending tasks periodically</p>
                     * @return CycleParam <p>Required parameter for sending tasks periodically</p>
                     * 
                     */
                    CycleEmailParam GetCycleParam() const;

                    /**
                     * 设置<p>Required parameter for sending tasks periodically</p>
                     * @param _cycleParam <p>Required parameter for sending tasks periodically</p>
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
                     * 获取<p>Required parameter of scheduled task assignment</p>
                     * @return TimedParam <p>Required parameter of scheduled task assignment</p>
                     * 
                     */
                    TimedEmailParam GetTimedParam() const;

                    /**
                     * 设置<p>Required parameter of scheduled task assignment</p>
                     * @param _timedParam <p>Required parameter of scheduled task assignment</p>
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
                     * 获取Unsubscription link options 0: do not add 1: english 2: simplified chinese 3: traditional chinese 4: spanish 5: french 6: german 7: japanese 8: korean 9: arabic 10: thai. 11: indonesian.
                     * @return Unsubscribe Unsubscription link options 0: do not add 1: english 2: simplified chinese 3: traditional chinese 4: spanish 5: french 6: german 7: japanese 8: korean 9: arabic 10: thai. 11: indonesian.
                     * 
                     */
                    std::string GetUnsubscribe() const;

                    /**
                     * 设置Unsubscription link options 0: do not add 1: english 2: simplified chinese 3: traditional chinese 4: spanish 5: french 6: german 7: japanese 8: korean 9: arabic 10: thai. 11: indonesian.
                     * @param _unsubscribe Unsubscription link options 0: do not add 1: english 2: simplified chinese 3: traditional chinese 4: spanish 5: french 6: german 7: japanese 8: korean 9: arabic 10: thai. 11: indonesian.
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
                     * 获取<p>Whether to add an ad flag 0: do not add 1: add to the previous subject 2: add to the following subject</p>
                     * @return ADLocation <p>Whether to add an ad flag 0: do not add 1: add to the previous subject 2: add to the following subject</p>
                     * 
                     */
                    uint64_t GetADLocation() const;

                    /**
                     * 设置<p>Whether to add an ad flag 0: do not add 1: add to the previous subject 2: add to the following subject</p>
                     * @param _aDLocation <p>Whether to add an ad flag 0: do not add 1: add to the previous subject 2: add to the following subject</p>
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
                     * <p>Sender's email address. Please fill in the sender's email address, for example: noreply@mail.qcloud.com. If you need to fill in the sender description, please enter it via<br>sender &lt;email address&gt;, for example:<br>Tencent Cloud team &lt;noreply@mail.qcloud.com&gt;</p>
                     */
                    std::string m_fromEmailAddress;
                    bool m_fromEmailAddressHasBeenSet;

                    /**
                     * <p>Recipient list ID</p>
                     */
                    uint64_t m_receiverId;
                    bool m_receiverIdHasBeenSet;

                    /**
                     * <p>Email Subject</p>
                     */
                    std::string m_subject;
                    bool m_subjectHasBeenSet;

                    /**
                     * <p>Task type 1: Send now 2: Scheduled sending 3: Cycle (frequency) sending</p>
                     */
                    uint64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * <p>The "reply" email address of the mail. Can be filled with an email address you can receive mail, can be a personal mailbox. If left empty, the recipient's reply mail will fail to send.</p>
                     */
                    std::string m_replyToAddresses;
                    bool m_replyToAddressesHasBeenSet;

                    /**
                     * <p>Template-related parameters to fill in when sending with a template</p><blockquote class="rno-document-tips rno-document-tips-notice">    <div class="rno-document-tips-body">        <i class="rno-document-tip-icon"></i>        <div class="rno-document-tip-title">Note</div>        <div class="rno-document-tip-desc"><p>This field must be specified if you have not applied for special configuration</p></div>    </div></blockquote>
                     */
                    Template m_template;
                    bool m_templateHasBeenSet;

                    /**
                     * <p>Abandoned<blockquote class="rno-document-tips rno-document-tips-notice">    <div class="rno-document-tips-body">        <i class="rno-document-tip-icon"></i>        <div class="rno-document-tip-title">Description</div>        <div class="rno-document-tip-desc"><p>Only customers who historically applied for special configuration need to use this. If you have not applied for special configuration, this field does not exist.</p></div>    </div></blockquote></p>
                     */
                    Simple m_simple;
                    bool m_simpleHasBeenSet;

                    /**
                     * <p>When you need to send an attachment, fill in the related parameters (not supported).</p>
                     */
                    std::vector<Attachment> m_attachments;
                    bool m_attachmentsHasBeenSet;

                    /**
                     * <p>Required parameter for sending tasks periodically</p>
                     */
                    CycleEmailParam m_cycleParam;
                    bool m_cycleParamHasBeenSet;

                    /**
                     * <p>Required parameter of scheduled task assignment</p>
                     */
                    TimedEmailParam m_timedParam;
                    bool m_timedParamHasBeenSet;

                    /**
                     * Unsubscription link options 0: do not add 1: english 2: simplified chinese 3: traditional chinese 4: spanish 5: french 6: german 7: japanese 8: korean 9: arabic 10: thai. 11: indonesian.
                     */
                    std::string m_unsubscribe;
                    bool m_unsubscribeHasBeenSet;

                    /**
                     * <p>Whether to add an ad flag 0: do not add 1: add to the previous subject 2: add to the following subject</p>
                     */
                    uint64_t m_aDLocation;
                    bool m_aDLocationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_BATCHSENDEMAILREQUEST_H_
