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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_SENDEMAILSTATUS_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_SENDEMAILSTATUS_H_

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
                * Describes the email sending status
                */
                class SendEmailStatus : public AbstractModel
                {
                public:
                    SendEmailStatus();
                    ~SendEmailStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The `MessageId` field returned by the `SendEmail` API
                     * @return MessageId The `MessageId` field returned by the `SendEmail` API
                     */
                    std::string GetMessageId() const;

                    /**
                     * 设置The `MessageId` field returned by the `SendEmail` API
                     * @param MessageId The `MessageId` field returned by the `SendEmail` API
                     */
                    void SetMessageId(const std::string& _messageId);

                    /**
                     * 判断参数 MessageId 是否已赋值
                     * @return MessageId 是否已赋值
                     */
                    bool MessageIdHasBeenSet() const;

                    /**
                     * 获取Recipient email address
                     * @return ToEmailAddress Recipient email address
                     */
                    std::string GetToEmailAddress() const;

                    /**
                     * 设置Recipient email address
                     * @param ToEmailAddress Recipient email address
                     */
                    void SetToEmailAddress(const std::string& _toEmailAddress);

                    /**
                     * 判断参数 ToEmailAddress 是否已赋值
                     * @return ToEmailAddress 是否已赋值
                     */
                    bool ToEmailAddressHasBeenSet() const;

                    /**
                     * 获取Sender email address
                     * @return FromEmailAddress Sender email address
                     */
                    std::string GetFromEmailAddress() const;

                    /**
                     * 设置Sender email address
                     * @param FromEmailAddress Sender email address
                     */
                    void SetFromEmailAddress(const std::string& _fromEmailAddress);

                    /**
                     * 判断参数 FromEmailAddress 是否已赋值
                     * @return FromEmailAddress 是否已赋值
                     */
                    bool FromEmailAddressHasBeenSet() const;

                    /**
                     * 获取Tencent Cloud processing status
0: Successful.
1001: Internal system exception.
1002: Internal system exception.
1003: Internal system exception.
1003: Internal system exception.
1004: Email sending timed out.
1005: Internal system exception.
1006: You have sent too many emails to the same address in a short period.
1007: The email address is in the blocklist.
1008: The sender domain is rejected by the recipient.
1009: Internal system exception.
1010: The daily email sending limit is exceeded.
1011: You have no permission to send custom content. Use a template.
1013: The sender domain is unsubscribed from by the recipient.
2001: No results were found.
3007: The template ID is invalid or the template is unavailable.
3008: The sender domain is temporarily blocked by the recipient domain.
3009: You have no permission to use this template.
3010: The format of the `TemplateData` field is incorrect. 
3014: The email cannot be sent because the sender domain is not verified.
3020: The recipient email address is in the blocklist.
3024: Failed to precheck the email address format.
3030: Email sending is restricted temporarily due to a high bounce rate.
3033: The account has insufficient balance or overdue payment.
                     * @return SendStatus Tencent Cloud processing status
0: Successful.
1001: Internal system exception.
1002: Internal system exception.
1003: Internal system exception.
1003: Internal system exception.
1004: Email sending timed out.
1005: Internal system exception.
1006: You have sent too many emails to the same address in a short period.
1007: The email address is in the blocklist.
1008: The sender domain is rejected by the recipient.
1009: Internal system exception.
1010: The daily email sending limit is exceeded.
1011: You have no permission to send custom content. Use a template.
1013: The sender domain is unsubscribed from by the recipient.
2001: No results were found.
3007: The template ID is invalid or the template is unavailable.
3008: The sender domain is temporarily blocked by the recipient domain.
3009: You have no permission to use this template.
3010: The format of the `TemplateData` field is incorrect. 
3014: The email cannot be sent because the sender domain is not verified.
3020: The recipient email address is in the blocklist.
3024: Failed to precheck the email address format.
3030: Email sending is restricted temporarily due to a high bounce rate.
3033: The account has insufficient balance or overdue payment.
                     */
                    int64_t GetSendStatus() const;

                    /**
                     * 设置Tencent Cloud processing status
0: Successful.
1001: Internal system exception.
1002: Internal system exception.
1003: Internal system exception.
1003: Internal system exception.
1004: Email sending timed out.
1005: Internal system exception.
1006: You have sent too many emails to the same address in a short period.
1007: The email address is in the blocklist.
1008: The sender domain is rejected by the recipient.
1009: Internal system exception.
1010: The daily email sending limit is exceeded.
1011: You have no permission to send custom content. Use a template.
1013: The sender domain is unsubscribed from by the recipient.
2001: No results were found.
3007: The template ID is invalid or the template is unavailable.
3008: The sender domain is temporarily blocked by the recipient domain.
3009: You have no permission to use this template.
3010: The format of the `TemplateData` field is incorrect. 
3014: The email cannot be sent because the sender domain is not verified.
3020: The recipient email address is in the blocklist.
3024: Failed to precheck the email address format.
3030: Email sending is restricted temporarily due to a high bounce rate.
3033: The account has insufficient balance or overdue payment.
                     * @param SendStatus Tencent Cloud processing status
0: Successful.
1001: Internal system exception.
1002: Internal system exception.
1003: Internal system exception.
1003: Internal system exception.
1004: Email sending timed out.
1005: Internal system exception.
1006: You have sent too many emails to the same address in a short period.
1007: The email address is in the blocklist.
1008: The sender domain is rejected by the recipient.
1009: Internal system exception.
1010: The daily email sending limit is exceeded.
1011: You have no permission to send custom content. Use a template.
1013: The sender domain is unsubscribed from by the recipient.
2001: No results were found.
3007: The template ID is invalid or the template is unavailable.
3008: The sender domain is temporarily blocked by the recipient domain.
3009: You have no permission to use this template.
3010: The format of the `TemplateData` field is incorrect. 
3014: The email cannot be sent because the sender domain is not verified.
3020: The recipient email address is in the blocklist.
3024: Failed to precheck the email address format.
3030: Email sending is restricted temporarily due to a high bounce rate.
3033: The account has insufficient balance or overdue payment.
                     */
                    void SetSendStatus(const int64_t& _sendStatus);

                    /**
                     * 判断参数 SendStatus 是否已赋值
                     * @return SendStatus 是否已赋值
                     */
                    bool SendStatusHasBeenSet() const;

                    /**
                     * 获取Recipient processing status
0: Tencent Cloud has accepted the request and added it to the send queue.
1: The email is delivered successfully. `DeliverTime` indicates the time when the email is delivered successfully.
2: The email is discarded. `DeliverMessage` indicates the reason for discarding.
3: The recipient's ESP rejects the email, probably because the email address does not exist or due to other reasons.
8: The email is delayed by the ESP. `DeliverMessage` indicates the reason for delay.
                     * @return DeliverStatus Recipient processing status
0: Tencent Cloud has accepted the request and added it to the send queue.
1: The email is delivered successfully. `DeliverTime` indicates the time when the email is delivered successfully.
2: The email is discarded. `DeliverMessage` indicates the reason for discarding.
3: The recipient's ESP rejects the email, probably because the email address does not exist or due to other reasons.
8: The email is delayed by the ESP. `DeliverMessage` indicates the reason for delay.
                     */
                    int64_t GetDeliverStatus() const;

                    /**
                     * 设置Recipient processing status
0: Tencent Cloud has accepted the request and added it to the send queue.
1: The email is delivered successfully. `DeliverTime` indicates the time when the email is delivered successfully.
2: The email is discarded. `DeliverMessage` indicates the reason for discarding.
3: The recipient's ESP rejects the email, probably because the email address does not exist or due to other reasons.
8: The email is delayed by the ESP. `DeliverMessage` indicates the reason for delay.
                     * @param DeliverStatus Recipient processing status
0: Tencent Cloud has accepted the request and added it to the send queue.
1: The email is delivered successfully. `DeliverTime` indicates the time when the email is delivered successfully.
2: The email is discarded. `DeliverMessage` indicates the reason for discarding.
3: The recipient's ESP rejects the email, probably because the email address does not exist or due to other reasons.
8: The email is delayed by the ESP. `DeliverMessage` indicates the reason for delay.
                     */
                    void SetDeliverStatus(const int64_t& _deliverStatus);

                    /**
                     * 判断参数 DeliverStatus 是否已赋值
                     * @return DeliverStatus 是否已赋值
                     */
                    bool DeliverStatusHasBeenSet() const;

                    /**
                     * 获取Description of the recipient processing status
                     * @return DeliverMessage Description of the recipient processing status
                     */
                    std::string GetDeliverMessage() const;

                    /**
                     * 设置Description of the recipient processing status
                     * @param DeliverMessage Description of the recipient processing status
                     */
                    void SetDeliverMessage(const std::string& _deliverMessage);

                    /**
                     * 判断参数 DeliverMessage 是否已赋值
                     * @return DeliverMessage 是否已赋值
                     */
                    bool DeliverMessageHasBeenSet() const;

                    /**
                     * 获取Timestamp when the request arrives at Tencent Cloud
                     * @return RequestTime Timestamp when the request arrives at Tencent Cloud
                     */
                    int64_t GetRequestTime() const;

                    /**
                     * 设置Timestamp when the request arrives at Tencent Cloud
                     * @param RequestTime Timestamp when the request arrives at Tencent Cloud
                     */
                    void SetRequestTime(const int64_t& _requestTime);

                    /**
                     * 判断参数 RequestTime 是否已赋值
                     * @return RequestTime 是否已赋值
                     */
                    bool RequestTimeHasBeenSet() const;

                    /**
                     * 获取Timestamp when Tencent Cloud delivers the email
                     * @return DeliverTime Timestamp when Tencent Cloud delivers the email
                     */
                    int64_t GetDeliverTime() const;

                    /**
                     * 设置Timestamp when Tencent Cloud delivers the email
                     * @param DeliverTime Timestamp when Tencent Cloud delivers the email
                     */
                    void SetDeliverTime(const int64_t& _deliverTime);

                    /**
                     * 判断参数 DeliverTime 是否已赋值
                     * @return DeliverTime 是否已赋值
                     */
                    bool DeliverTimeHasBeenSet() const;

                    /**
                     * 获取Whether the recipient has opened the email
                     * @return UserOpened Whether the recipient has opened the email
                     */
                    bool GetUserOpened() const;

                    /**
                     * 设置Whether the recipient has opened the email
                     * @param UserOpened Whether the recipient has opened the email
                     */
                    void SetUserOpened(const bool& _userOpened);

                    /**
                     * 判断参数 UserOpened 是否已赋值
                     * @return UserOpened 是否已赋值
                     */
                    bool UserOpenedHasBeenSet() const;

                    /**
                     * 获取Whether the recipient has clicked the links in the email
                     * @return UserClicked Whether the recipient has clicked the links in the email
                     */
                    bool GetUserClicked() const;

                    /**
                     * 设置Whether the recipient has clicked the links in the email
                     * @param UserClicked Whether the recipient has clicked the links in the email
                     */
                    void SetUserClicked(const bool& _userClicked);

                    /**
                     * 判断参数 UserClicked 是否已赋值
                     * @return UserClicked 是否已赋值
                     */
                    bool UserClickedHasBeenSet() const;

                    /**
                     * 获取Whether the recipient has unsubscribed from the email sent by the sender
                     * @return UserUnsubscribed Whether the recipient has unsubscribed from the email sent by the sender
                     */
                    bool GetUserUnsubscribed() const;

                    /**
                     * 设置Whether the recipient has unsubscribed from the email sent by the sender
                     * @param UserUnsubscribed Whether the recipient has unsubscribed from the email sent by the sender
                     */
                    void SetUserUnsubscribed(const bool& _userUnsubscribed);

                    /**
                     * 判断参数 UserUnsubscribed 是否已赋值
                     * @return UserUnsubscribed 是否已赋值
                     */
                    bool UserUnsubscribedHasBeenSet() const;

                    /**
                     * 获取Whether the recipient has reported the sender
                     * @return UserComplainted Whether the recipient has reported the sender
                     */
                    bool GetUserComplainted() const;

                    /**
                     * 设置Whether the recipient has reported the sender
                     * @param UserComplainted Whether the recipient has reported the sender
                     */
                    void SetUserComplainted(const bool& _userComplainted);

                    /**
                     * 判断参数 UserComplainted 是否已赋值
                     * @return UserComplainted 是否已赋值
                     */
                    bool UserComplaintedHasBeenSet() const;

                private:

                    /**
                     * The `MessageId` field returned by the `SendEmail` API
                     */
                    std::string m_messageId;
                    bool m_messageIdHasBeenSet;

                    /**
                     * Recipient email address
                     */
                    std::string m_toEmailAddress;
                    bool m_toEmailAddressHasBeenSet;

                    /**
                     * Sender email address
                     */
                    std::string m_fromEmailAddress;
                    bool m_fromEmailAddressHasBeenSet;

                    /**
                     * Tencent Cloud processing status
0: Successful.
1001: Internal system exception.
1002: Internal system exception.
1003: Internal system exception.
1003: Internal system exception.
1004: Email sending timed out.
1005: Internal system exception.
1006: You have sent too many emails to the same address in a short period.
1007: The email address is in the blocklist.
1008: The sender domain is rejected by the recipient.
1009: Internal system exception.
1010: The daily email sending limit is exceeded.
1011: You have no permission to send custom content. Use a template.
1013: The sender domain is unsubscribed from by the recipient.
2001: No results were found.
3007: The template ID is invalid or the template is unavailable.
3008: The sender domain is temporarily blocked by the recipient domain.
3009: You have no permission to use this template.
3010: The format of the `TemplateData` field is incorrect. 
3014: The email cannot be sent because the sender domain is not verified.
3020: The recipient email address is in the blocklist.
3024: Failed to precheck the email address format.
3030: Email sending is restricted temporarily due to a high bounce rate.
3033: The account has insufficient balance or overdue payment.
                     */
                    int64_t m_sendStatus;
                    bool m_sendStatusHasBeenSet;

                    /**
                     * Recipient processing status
0: Tencent Cloud has accepted the request and added it to the send queue.
1: The email is delivered successfully. `DeliverTime` indicates the time when the email is delivered successfully.
2: The email is discarded. `DeliverMessage` indicates the reason for discarding.
3: The recipient's ESP rejects the email, probably because the email address does not exist or due to other reasons.
8: The email is delayed by the ESP. `DeliverMessage` indicates the reason for delay.
                     */
                    int64_t m_deliverStatus;
                    bool m_deliverStatusHasBeenSet;

                    /**
                     * Description of the recipient processing status
                     */
                    std::string m_deliverMessage;
                    bool m_deliverMessageHasBeenSet;

                    /**
                     * Timestamp when the request arrives at Tencent Cloud
                     */
                    int64_t m_requestTime;
                    bool m_requestTimeHasBeenSet;

                    /**
                     * Timestamp when Tencent Cloud delivers the email
                     */
                    int64_t m_deliverTime;
                    bool m_deliverTimeHasBeenSet;

                    /**
                     * Whether the recipient has opened the email
                     */
                    bool m_userOpened;
                    bool m_userOpenedHasBeenSet;

                    /**
                     * Whether the recipient has clicked the links in the email
                     */
                    bool m_userClicked;
                    bool m_userClickedHasBeenSet;

                    /**
                     * Whether the recipient has unsubscribed from the email sent by the sender
                     */
                    bool m_userUnsubscribed;
                    bool m_userUnsubscribedHasBeenSet;

                    /**
                     * Whether the recipient has reported the sender
                     */
                    bool m_userComplainted;
                    bool m_userComplaintedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_SENDEMAILSTATUS_H_
