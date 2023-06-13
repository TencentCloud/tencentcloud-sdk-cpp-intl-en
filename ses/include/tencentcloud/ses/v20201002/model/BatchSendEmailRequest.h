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
                     * 获取Sender address. Enter a sender address such as `noreply@mail.qcloud.com`. To display the sender name, enter the address in the following format:
sender &lt;email address&gt;. For example:
Tencent Cloud team &lt;noreply@mail.qcloud.com&gt;
                     * @return FromEmailAddress Sender address. Enter a sender address such as `noreply@mail.qcloud.com`. To display the sender name, enter the address in the following format:
sender &lt;email address&gt;. For example:
Tencent Cloud team &lt;noreply@mail.qcloud.com&gt;
                     */
                    std::string GetFromEmailAddress() const;

                    /**
                     * 设置Sender address. Enter a sender address such as `noreply@mail.qcloud.com`. To display the sender name, enter the address in the following format:
sender &lt;email address&gt;. For example:
Tencent Cloud team &lt;noreply@mail.qcloud.com&gt;
                     * @param FromEmailAddress Sender address. Enter a sender address such as `noreply@mail.qcloud.com`. To display the sender name, enter the address in the following format:
sender &lt;email address&gt;. For example:
Tencent Cloud team &lt;noreply@mail.qcloud.com&gt;
                     */
                    void SetFromEmailAddress(const std::string& _fromEmailAddress);

                    /**
                     * 判断参数 FromEmailAddress 是否已赋值
                     * @return FromEmailAddress 是否已赋值
                     */
                    bool FromEmailAddressHasBeenSet() const;

                    /**
                     * 获取Recipient group ID
                     * @return ReceiverId Recipient group ID
                     */
                    uint64_t GetReceiverId() const;

                    /**
                     * 设置Recipient group ID
                     * @param ReceiverId Recipient group ID
                     */
                    void SetReceiverId(const uint64_t& _receiverId);

                    /**
                     * 判断参数 ReceiverId 是否已赋值
                     * @return ReceiverId 是否已赋值
                     */
                    bool ReceiverIdHasBeenSet() const;

                    /**
                     * 获取Email subject
                     * @return Subject Email subject
                     */
                    std::string GetSubject() const;

                    /**
                     * 设置Email subject
                     * @param Subject Email subject
                     */
                    void SetSubject(const std::string& _subject);

                    /**
                     * 判断参数 Subject 是否已赋值
                     * @return Subject 是否已赋值
                     */
                    bool SubjectHasBeenSet() const;

                    /**
                     * 获取Task type. `1`: immediate; `2`: scheduled; `3`: recurring
                     * @return TaskType Task type. `1`: immediate; `2`: scheduled; `3`: recurring
                     */
                    uint64_t GetTaskType() const;

                    /**
                     * 设置Task type. `1`: immediate; `2`: scheduled; `3`: recurring
                     * @param TaskType Task type. `1`: immediate; `2`: scheduled; `3`: recurring
                     */
                    void SetTaskType(const uint64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取Reply-to address. You can enter a valid personal email address that can receive emails. If this parameter is left empty, reply emails will fail to be sent.
                     * @return ReplyToAddresses Reply-to address. You can enter a valid personal email address that can receive emails. If this parameter is left empty, reply emails will fail to be sent.
                     */
                    std::string GetReplyToAddresses() const;

                    /**
                     * 设置Reply-to address. You can enter a valid personal email address that can receive emails. If this parameter is left empty, reply emails will fail to be sent.
                     * @param ReplyToAddresses Reply-to address. You can enter a valid personal email address that can receive emails. If this parameter is left empty, reply emails will fail to be sent.
                     */
                    void SetReplyToAddresses(const std::string& _replyToAddresses);

                    /**
                     * 判断参数 ReplyToAddresses 是否已赋值
                     * @return ReplyToAddresses 是否已赋值
                     */
                    bool ReplyToAddressesHasBeenSet() const;

                    /**
                     * 获取Template when emails are sent using a template
                     * @return Template Template when emails are sent using a template
                     */
                    Template GetTemplate() const;

                    /**
                     * 设置Template when emails are sent using a template
                     * @param Template Template when emails are sent using a template
                     */
                    void SetTemplate(const Template& _template);

                    /**
                     * 判断参数 Template 是否已赋值
                     * @return Template 是否已赋值
                     */
                    bool TemplateHasBeenSet() const;

                    /**
                     * 获取Disused
                     * @return Simple Disused
                     */
                    Simple GetSimple() const;

                    /**
                     * 设置Disused
                     * @param Simple Disused
                     */
                    void SetSimple(const Simple& _simple);

                    /**
                     * 判断参数 Simple 是否已赋值
                     * @return Simple 是否已赋值
                     */
                    bool SimpleHasBeenSet() const;

                    /**
                     * 获取Attachment parameters to set when you need to send attachments. This parameter is currently unavailable.
                     * @return Attachments Attachment parameters to set when you need to send attachments. This parameter is currently unavailable.
                     */
                    std::vector<Attachment> GetAttachments() const;

                    /**
                     * 设置Attachment parameters to set when you need to send attachments. This parameter is currently unavailable.
                     * @param Attachments Attachment parameters to set when you need to send attachments. This parameter is currently unavailable.
                     */
                    void SetAttachments(const std::vector<Attachment>& _attachments);

                    /**
                     * 判断参数 Attachments 是否已赋值
                     * @return Attachments 是否已赋值
                     */
                    bool AttachmentsHasBeenSet() const;

                    /**
                     * 获取Parameter required for a recurring sending task
                     * @return CycleParam Parameter required for a recurring sending task
                     */
                    CycleEmailParam GetCycleParam() const;

                    /**
                     * 设置Parameter required for a recurring sending task
                     * @param CycleParam Parameter required for a recurring sending task
                     */
                    void SetCycleParam(const CycleEmailParam& _cycleParam);

                    /**
                     * 判断参数 CycleParam 是否已赋值
                     * @return CycleParam 是否已赋值
                     */
                    bool CycleParamHasBeenSet() const;

                    /**
                     * 获取Parameter required for a scheduled sending task
                     * @return TimedParam Parameter required for a scheduled sending task
                     */
                    TimedEmailParam GetTimedParam() const;

                    /**
                     * 设置Parameter required for a scheduled sending task
                     * @param TimedParam Parameter required for a scheduled sending task
                     */
                    void SetTimedParam(const TimedEmailParam& _timedParam);

                    /**
                     * 判断参数 TimedParam 是否已赋值
                     * @return TimedParam 是否已赋值
                     */
                    bool TimedParamHasBeenSet() const;

                    /**
                     * 获取Unsubscribe link option. `0`: Do not add unsubscribe link; `1`: English `2`: Simplified Chinese; `3`: Traditional Chinese; `4`: Spanish; `5`: French; `6`: German; `7`: Japanese; `8`: Korean; `9`: Arabic; `10`: Thai
                     * @return Unsubscribe Unsubscribe link option. `0`: Do not add unsubscribe link; `1`: English `2`: Simplified Chinese; `3`: Traditional Chinese; `4`: Spanish; `5`: French; `6`: German; `7`: Japanese; `8`: Korean; `9`: Arabic; `10`: Thai
                     */
                    std::string GetUnsubscribe() const;

                    /**
                     * 设置Unsubscribe link option. `0`: Do not add unsubscribe link; `1`: English `2`: Simplified Chinese; `3`: Traditional Chinese; `4`: Spanish; `5`: French; `6`: German; `7`: Japanese; `8`: Korean; `9`: Arabic; `10`: Thai
                     * @param Unsubscribe Unsubscribe link option. `0`: Do not add unsubscribe link; `1`: English `2`: Simplified Chinese; `3`: Traditional Chinese; `4`: Spanish; `5`: French; `6`: German; `7`: Japanese; `8`: Korean; `9`: Arabic; `10`: Thai
                     */
                    void SetUnsubscribe(const std::string& _unsubscribe);

                    /**
                     * 判断参数 Unsubscribe 是否已赋值
                     * @return Unsubscribe 是否已赋值
                     */
                    bool UnsubscribeHasBeenSet() const;

                    /**
                     * 获取Whether to add an ad tag. `0`: Add no tag; `1`: Add before the subject; `2`: Add after the subject.
                     * @return ADLocation Whether to add an ad tag. `0`: Add no tag; `1`: Add before the subject; `2`: Add after the subject.
                     */
                    uint64_t GetADLocation() const;

                    /**
                     * 设置Whether to add an ad tag. `0`: Add no tag; `1`: Add before the subject; `2`: Add after the subject.
                     * @param ADLocation Whether to add an ad tag. `0`: Add no tag; `1`: Add before the subject; `2`: Add after the subject.
                     */
                    void SetADLocation(const uint64_t& _aDLocation);

                    /**
                     * 判断参数 ADLocation 是否已赋值
                     * @return ADLocation 是否已赋值
                     */
                    bool ADLocationHasBeenSet() const;

                private:

                    /**
                     * Sender address. Enter a sender address such as `noreply@mail.qcloud.com`. To display the sender name, enter the address in the following format:
sender &lt;email address&gt;. For example:
Tencent Cloud team &lt;noreply@mail.qcloud.com&gt;
                     */
                    std::string m_fromEmailAddress;
                    bool m_fromEmailAddressHasBeenSet;

                    /**
                     * Recipient group ID
                     */
                    uint64_t m_receiverId;
                    bool m_receiverIdHasBeenSet;

                    /**
                     * Email subject
                     */
                    std::string m_subject;
                    bool m_subjectHasBeenSet;

                    /**
                     * Task type. `1`: immediate; `2`: scheduled; `3`: recurring
                     */
                    uint64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * Reply-to address. You can enter a valid personal email address that can receive emails. If this parameter is left empty, reply emails will fail to be sent.
                     */
                    std::string m_replyToAddresses;
                    bool m_replyToAddressesHasBeenSet;

                    /**
                     * Template when emails are sent using a template
                     */
                    Template m_template;
                    bool m_templateHasBeenSet;

                    /**
                     * Disused
                     */
                    Simple m_simple;
                    bool m_simpleHasBeenSet;

                    /**
                     * Attachment parameters to set when you need to send attachments. This parameter is currently unavailable.
                     */
                    std::vector<Attachment> m_attachments;
                    bool m_attachmentsHasBeenSet;

                    /**
                     * Parameter required for a recurring sending task
                     */
                    CycleEmailParam m_cycleParam;
                    bool m_cycleParamHasBeenSet;

                    /**
                     * Parameter required for a scheduled sending task
                     */
                    TimedEmailParam m_timedParam;
                    bool m_timedParamHasBeenSet;

                    /**
                     * Unsubscribe link option. `0`: Do not add unsubscribe link; `1`: English `2`: Simplified Chinese; `3`: Traditional Chinese; `4`: Spanish; `5`: French; `6`: German; `7`: Japanese; `8`: Korean; `9`: Arabic; `10`: Thai
                     */
                    std::string m_unsubscribe;
                    bool m_unsubscribeHasBeenSet;

                    /**
                     * Whether to add an ad tag. `0`: Add no tag; `1`: Add before the subject; `2`: Add after the subject.
                     */
                    uint64_t m_aDLocation;
                    bool m_aDLocationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_BATCHSENDEMAILREQUEST_H_
