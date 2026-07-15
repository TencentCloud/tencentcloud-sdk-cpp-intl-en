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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_ABUSEREPORT_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_ABUSEREPORT_H_

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
                * Reported spam data.
                */
                class AbuseReport : public AbstractModel
                {
                public:
                    AbuseReport();
                    ~AbuseReport() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Send time</p>
                     * @return DeliverTime <p>Send time</p>
                     * 
                     */
                    std::string GetDeliverTime() const;

                    /**
                     * 设置<p>Send time</p>
                     * @param _deliverTime <p>Send time</p>
                     * 
                     */
                    void SetDeliverTime(const std::string& _deliverTime);

                    /**
                     * 判断参数 DeliverTime 是否已赋值
                     * @return DeliverTime 是否已赋值
                     * 
                     */
                    bool DeliverTimeHasBeenSet() const;

                    /**
                     * 获取<p>Sender address</p>
                     * @return OriginalMailFrom <p>Sender address</p>
                     * 
                     */
                    std::string GetOriginalMailFrom() const;

                    /**
                     * 设置<p>Sender address</p>
                     * @param _originalMailFrom <p>Sender address</p>
                     * 
                     */
                    void SetOriginalMailFrom(const std::string& _originalMailFrom);

                    /**
                     * 判断参数 OriginalMailFrom 是否已赋值
                     * @return OriginalMailFrom 是否已赋值
                     * 
                     */
                    bool OriginalMailFromHasBeenSet() const;

                    /**
                     * 获取<p>Receive email address</p>
                     * @return OriginalRcptTo <p>Receive email address</p>
                     * 
                     */
                    std::string GetOriginalRcptTo() const;

                    /**
                     * 设置<p>Receive email address</p>
                     * @param _originalRcptTo <p>Receive email address</p>
                     * 
                     */
                    void SetOriginalRcptTo(const std::string& _originalRcptTo);

                    /**
                     * 判断参数 OriginalRcptTo 是否已赋值
                     * @return OriginalRcptTo 是否已赋值
                     * 
                     */
                    bool OriginalRcptToHasBeenSet() const;

                    /**
                     * 获取<p>Sender domain name</p>
                     * @return FromDomain <p>Sender domain name</p>
                     * 
                     */
                    std::string GetFromDomain() const;

                    /**
                     * 设置<p>Sender domain name</p>
                     * @param _fromDomain <p>Sender domain name</p>
                     * 
                     */
                    void SetFromDomain(const std::string& _fromDomain);

                    /**
                     * 判断参数 FromDomain 是否已赋值
                     * @return FromDomain 是否已赋值
                     * 
                     */
                    bool FromDomainHasBeenSet() const;

                    /**
                     * 获取<p>Complaint time</p>
                     * @return ComplainTime <p>Complaint time</p>
                     * 
                     */
                    std::string GetComplainTime() const;

                    /**
                     * 设置<p>Complaint time</p>
                     * @param _complainTime <p>Complaint time</p>
                     * 
                     */
                    void SetComplainTime(const std::string& _complainTime);

                    /**
                     * 判断参数 ComplainTime 是否已赋值
                     * @return ComplainTime 是否已赋值
                     * 
                     */
                    bool ComplainTimeHasBeenSet() const;

                    /**
                     * 获取<p>Recipient domain name</p>
                     * @return Mta <p>Recipient domain name</p>
                     * 
                     */
                    std::string GetMta() const;

                    /**
                     * 设置<p>Recipient domain name</p>
                     * @param _mta <p>Recipient domain name</p>
                     * 
                     */
                    void SetMta(const std::string& _mta);

                    /**
                     * 判断参数 Mta 是否已赋值
                     * @return Mta 是否已赋值
                     * 
                     */
                    bool MtaHasBeenSet() const;

                    /**
                     * 获取<p>Source ip</p>
                     * @return SourceIp <p>Source ip</p>
                     * 
                     */
                    std::string GetSourceIp() const;

                    /**
                     * 设置<p>Source ip</p>
                     * @param _sourceIp <p>Source ip</p>
                     * 
                     */
                    void SetSourceIp(const std::string& _sourceIp);

                    /**
                     * 判断参数 SourceIp 是否已赋值
                     * @return SourceIp 是否已赋值
                     * 
                     */
                    bool SourceIpHasBeenSet() const;

                    /**
                     * 获取<p>Data time</p>
                     * @return InsertTime <p>Data time</p>
                     * 
                     */
                    std::string GetInsertTime() const;

                    /**
                     * 设置<p>Data time</p>
                     * @param _insertTime <p>Data time</p>
                     * 
                     */
                    void SetInsertTime(const std::string& _insertTime);

                    /**
                     * 判断参数 InsertTime 是否已赋值
                     * @return InsertTime 是否已赋值
                     * 
                     */
                    bool InsertTimeHasBeenSet() const;

                    /**
                     * 获取<p>Template ID</p>
                     * @return TemplateId <p>Template ID</p>
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置<p>Template ID</p>
                     * @param _templateId <p>Template ID</p>
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取<p>bulkId</p>
                     * @return BulkId <p>bulkId</p>
                     * 
                     */
                    std::string GetBulkId() const;

                    /**
                     * 设置<p>bulkId</p>
                     * @param _bulkId <p>bulkId</p>
                     * 
                     */
                    void SetBulkId(const std::string& _bulkId);

                    /**
                     * 判断参数 BulkId 是否已赋值
                     * @return BulkId 是否已赋值
                     * 
                     */
                    bool BulkIdHasBeenSet() const;

                    /**
                     * 获取<p>Message-Id of the mail</p>
                     * @return MessageId <p>Message-Id of the mail</p>
                     * 
                     */
                    std::string GetMessageId() const;

                    /**
                     * 设置<p>Message-Id of the mail</p>
                     * @param _messageId <p>Message-Id of the mail</p>
                     * 
                     */
                    void SetMessageId(const std::string& _messageId);

                    /**
                     * 判断参数 MessageId 是否已赋值
                     * @return MessageId 是否已赋值
                     * 
                     */
                    bool MessageIdHasBeenSet() const;

                    /**
                     * 获取<p>Complaint time</p>
                     * @return AbuseTime <p>Complaint time</p>
                     * 
                     */
                    std::string GetAbuseTime() const;

                    /**
                     * 设置<p>Complaint time</p>
                     * @param _abuseTime <p>Complaint time</p>
                     * 
                     */
                    void SetAbuseTime(const std::string& _abuseTime);

                    /**
                     * 判断参数 AbuseTime 是否已赋值
                     * @return AbuseTime 是否已赋值
                     * 
                     */
                    bool AbuseTimeHasBeenSet() const;

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

                private:

                    /**
                     * <p>Send time</p>
                     */
                    std::string m_deliverTime;
                    bool m_deliverTimeHasBeenSet;

                    /**
                     * <p>Sender address</p>
                     */
                    std::string m_originalMailFrom;
                    bool m_originalMailFromHasBeenSet;

                    /**
                     * <p>Receive email address</p>
                     */
                    std::string m_originalRcptTo;
                    bool m_originalRcptToHasBeenSet;

                    /**
                     * <p>Sender domain name</p>
                     */
                    std::string m_fromDomain;
                    bool m_fromDomainHasBeenSet;

                    /**
                     * <p>Complaint time</p>
                     */
                    std::string m_complainTime;
                    bool m_complainTimeHasBeenSet;

                    /**
                     * <p>Recipient domain name</p>
                     */
                    std::string m_mta;
                    bool m_mtaHasBeenSet;

                    /**
                     * <p>Source ip</p>
                     */
                    std::string m_sourceIp;
                    bool m_sourceIpHasBeenSet;

                    /**
                     * <p>Data time</p>
                     */
                    std::string m_insertTime;
                    bool m_insertTimeHasBeenSet;

                    /**
                     * <p>Template ID</p>
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * <p>bulkId</p>
                     */
                    std::string m_bulkId;
                    bool m_bulkIdHasBeenSet;

                    /**
                     * <p>Message-Id of the mail</p>
                     */
                    std::string m_messageId;
                    bool m_messageIdHasBeenSet;

                    /**
                     * <p>Complaint time</p>
                     */
                    std::string m_abuseTime;
                    bool m_abuseTimeHasBeenSet;

                    /**
                     * <p>Email Subject</p>
                     */
                    std::string m_subject;
                    bool m_subjectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_ABUSEREPORT_H_
