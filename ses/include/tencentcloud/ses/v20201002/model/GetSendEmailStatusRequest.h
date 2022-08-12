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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_GETSENDEMAILSTATUSREQUEST_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_GETSENDEMAILSTATUSREQUEST_H_

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
                * GetSendEmailStatus request structure.
                */
                class GetSendEmailStatusRequest : public AbstractModel
                {
                public:
                    GetSendEmailStatusRequest();
                    ~GetSendEmailStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Date sent. This parameter is required. You can only query the sending status for a single date at a time.
                     * @return RequestDate Date sent. This parameter is required. You can only query the sending status for a single date at a time.
                     */
                    std::string GetRequestDate() const;

                    /**
                     * 设置Date sent. This parameter is required. You can only query the sending status for a single date at a time.
                     * @param RequestDate Date sent. This parameter is required. You can only query the sending status for a single date at a time.
                     */
                    void SetRequestDate(const std::string& _requestDate);

                    /**
                     * 判断参数 RequestDate 是否已赋值
                     * @return RequestDate 是否已赋值
                     */
                    bool RequestDateHasBeenSet() const;

                    /**
                     * 获取Offset. Default value: `0`.
                     * @return Offset Offset. Default value: `0`.
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: `0`.
                     * @param Offset Offset. Default value: `0`.
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Maximum number of pulled entries. Maximum value: `100`.
                     * @return Limit Maximum number of pulled entries. Maximum value: `100`.
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Maximum number of pulled entries. Maximum value: `100`.
                     * @param Limit Maximum number of pulled entries. Maximum value: `100`.
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取The `MessageId` field returned by the `SendMail` API.
                     * @return MessageId The `MessageId` field returned by the `SendMail` API.
                     */
                    std::string GetMessageId() const;

                    /**
                     * 设置The `MessageId` field returned by the `SendMail` API.
                     * @param MessageId The `MessageId` field returned by the `SendMail` API.
                     */
                    void SetMessageId(const std::string& _messageId);

                    /**
                     * 判断参数 MessageId 是否已赋值
                     * @return MessageId 是否已赋值
                     */
                    bool MessageIdHasBeenSet() const;

                    /**
                     * 获取Recipient email address.
                     * @return ToEmailAddress Recipient email address.
                     */
                    std::string GetToEmailAddress() const;

                    /**
                     * 设置Recipient email address.
                     * @param ToEmailAddress Recipient email address.
                     */
                    void SetToEmailAddress(const std::string& _toEmailAddress);

                    /**
                     * 判断参数 ToEmailAddress 是否已赋值
                     * @return ToEmailAddress 是否已赋值
                     */
                    bool ToEmailAddressHasBeenSet() const;

                private:

                    /**
                     * Date sent. This parameter is required. You can only query the sending status for a single date at a time.
                     */
                    std::string m_requestDate;
                    bool m_requestDateHasBeenSet;

                    /**
                     * Offset. Default value: `0`.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Maximum number of pulled entries. Maximum value: `100`.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * The `MessageId` field returned by the `SendMail` API.
                     */
                    std::string m_messageId;
                    bool m_messageIdHasBeenSet;

                    /**
                     * Recipient email address.
                     */
                    std::string m_toEmailAddress;
                    bool m_toEmailAddressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_GETSENDEMAILSTATUSREQUEST_H_
