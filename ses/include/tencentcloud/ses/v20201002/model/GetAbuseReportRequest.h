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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_GETABUSEREPORTREQUEST_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_GETABUSEREPORTREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * GetAbuseReport request structure.
                */
                class GetAbuseReportRequest : public AbstractModel
                {
                public:
                    GetAbuseReportRequest();
                    ~GetAbuseReportRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start time.
                     * @return StartTime Start time.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time.
                     * @param _startTime Start time.
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time.
                     * @return EndTime End time.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time.
                     * @param _endTime End time.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Offset.
                     * @return Offset Offset.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset.
                     * @param _offset Offset.
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Limit quantity (default: 1000).
                     * @return Limit Limit quantity (default: 1000).
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Limit quantity (default: 1000).
                     * @param _limit Limit quantity (default: 1000).
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

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
                     * 获取Sender address.
                     * @return FromAddress Sender address.
                     * 
                     */
                    std::string GetFromAddress() const;

                    /**
                     * 设置Sender address.
                     * @param _fromAddress Sender address.
                     * 
                     */
                    void SetFromAddress(const std::string& _fromAddress);

                    /**
                     * 判断参数 FromAddress 是否已赋值
                     * @return FromAddress 是否已赋值
                     * 
                     */
                    bool FromAddressHasBeenSet() const;

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
                     * 获取Receive email.
                     * @return ToAddress Receive email.
                     * 
                     */
                    std::string GetToAddress() const;

                    /**
                     * 设置Receive email.
                     * @param _toAddress Receive email.
                     * 
                     */
                    void SetToAddress(const std::string& _toAddress);

                    /**
                     * 判断参数 ToAddress 是否已赋值
                     * @return ToAddress 是否已赋值
                     * 
                     */
                    bool ToAddressHasBeenSet() const;

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

                private:

                    /**
                     * Start time.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Offset.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Limit quantity (default: 1000).
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Sender domain name.
                     */
                    std::string m_fromDomain;
                    bool m_fromDomainHasBeenSet;

                    /**
                     * Sender address.
                     */
                    std::string m_fromAddress;
                    bool m_fromAddressHasBeenSet;

                    /**
                     * Recipient domain name.
                     */
                    std::string m_mta;
                    bool m_mtaHasBeenSet;

                    /**
                     * Receive email.
                     */
                    std::string m_toAddress;
                    bool m_toAddressHasBeenSet;

                    /**
                     * Template ID
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_GETABUSEREPORTREQUEST_H_
