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
                     * 获取Send time.
                     * @return DeliverTime Send time.
                     * 
                     */
                    std::string GetDeliverTime() const;

                    /**
                     * 设置Send time.
                     * @param _deliverTime Send time.
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
                     * 获取Sender address.
                     * @return OriginalMailFrom Sender address.
                     * 
                     */
                    std::string GetOriginalMailFrom() const;

                    /**
                     * 设置Sender address.
                     * @param _originalMailFrom Sender address.
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
                     * 获取Receive email.
                     * @return OriginalRcptTo Receive email.
                     * 
                     */
                    std::string GetOriginalRcptTo() const;

                    /**
                     * 设置Receive email.
                     * @param _originalRcptTo Receive email.
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
                     * 获取Sender domain name.
                     * @return FromDomain Sender domain name.
                     * 
                     */
                    std::string GetFromDomain() const;

                    /**
                     * 设置Sender domain name.
                     * @param _fromDomain Sender domain name.
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
                     * 获取Complaint time.
                     * @return ComplainTime Complaint time.
                     * 
                     */
                    std::string GetComplainTime() const;

                    /**
                     * 设置Complaint time.
                     * @param _complainTime Complaint time.
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
                     * 获取Recipient domain name.
                     * @return Mta Recipient domain name.
                     * 
                     */
                    std::string GetMta() const;

                    /**
                     * 设置Recipient domain name.
                     * @param _mta Recipient domain name.
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
                     * 获取Source IP
                     * @return SourceIp Source IP
                     * 
                     */
                    std::string GetSourceIp() const;

                    /**
                     * 设置Source IP
                     * @param _sourceIp Source IP
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
                     * 获取Data time.
                     * @return InsertTime Data time.
                     * 
                     */
                    std::string GetInsertTime() const;

                    /**
                     * 设置Data time.
                     * @param _insertTime Data time.
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
                     * 获取Template ID
                     * @return TemplateId Template ID
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置Template ID
                     * @param _templateId Template ID
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
                     * 获取bulkId
                     * @return BulkId bulkId
                     * 
                     */
                    std::string GetBulkId() const;

                    /**
                     * 设置bulkId
                     * @param _bulkId bulkId
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
                     * 获取Message-Id in mail.
                     * @return MessageId Message-Id in mail.
                     * 
                     */
                    std::string GetMessageId() const;

                    /**
                     * 设置Message-Id in mail.
                     * @param _messageId Message-Id in mail.
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
                     * 获取Complaint time.
                     * @return AbuseTime Complaint time.
                     * 
                     */
                    std::string GetAbuseTime() const;

                    /**
                     * 设置Complaint time.
                     * @param _abuseTime Complaint time.
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

                private:

                    /**
                     * Send time.
                     */
                    std::string m_deliverTime;
                    bool m_deliverTimeHasBeenSet;

                    /**
                     * Sender address.
                     */
                    std::string m_originalMailFrom;
                    bool m_originalMailFromHasBeenSet;

                    /**
                     * Receive email.
                     */
                    std::string m_originalRcptTo;
                    bool m_originalRcptToHasBeenSet;

                    /**
                     * Sender domain name.
                     */
                    std::string m_fromDomain;
                    bool m_fromDomainHasBeenSet;

                    /**
                     * Complaint time.
                     */
                    std::string m_complainTime;
                    bool m_complainTimeHasBeenSet;

                    /**
                     * Recipient domain name.
                     */
                    std::string m_mta;
                    bool m_mtaHasBeenSet;

                    /**
                     * Source IP
                     */
                    std::string m_sourceIp;
                    bool m_sourceIpHasBeenSet;

                    /**
                     * Data time.
                     */
                    std::string m_insertTime;
                    bool m_insertTimeHasBeenSet;

                    /**
                     * Template ID
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * bulkId
                     */
                    std::string m_bulkId;
                    bool m_bulkIdHasBeenSet;

                    /**
                     * Message-Id in mail.
                     */
                    std::string m_messageId;
                    bool m_messageIdHasBeenSet;

                    /**
                     * Complaint time.
                     */
                    std::string m_abuseTime;
                    bool m_abuseTimeHasBeenSet;

                    /**
                     * Email subject.
                     */
                    std::string m_subject;
                    bool m_subjectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_ABUSEREPORT_H_
