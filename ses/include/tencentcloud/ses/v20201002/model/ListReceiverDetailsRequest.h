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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_LISTRECEIVERDETAILSREQUEST_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_LISTRECEIVERDETAILSREQUEST_H_

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
                * ListReceiverDetails request structure.
                */
                class ListReceiverDetailsRequest : public AbstractModel
                {
                public:
                    ListReceiverDetailsRequest();
                    ~ListReceiverDetailsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Recipient list ID. specifies the value returned during API creation of a recipient list via the CreateReceiver api.
                     * @return ReceiverId Recipient list ID. specifies the value returned during API creation of a recipient list via the CreateReceiver api.
                     * 
                     */
                    uint64_t GetReceiverId() const;

                    /**
                     * 设置Recipient list ID. specifies the value returned during API creation of a recipient list via the CreateReceiver api.
                     * @param _receiverId Recipient list ID. specifies the value returned during API creation of a recipient list via the CreateReceiver api.
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
                     * 获取Offset, int, starts from 0.
                     * @return Offset Offset, int, starts from 0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset, int, starts from 0.
                     * @param _offset Offset, int, starts from 0.
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number limit, int, no more than 100.
                     * @return Limit Number limit, int, no more than 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number limit, int, no more than 100.
                     * @param _limit Number limit, int, no more than 100.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Recipient address. length: 0-50. example: xxx@te.com. fuzzy query is supported.
                     * @return Email Recipient address. length: 0-50. example: xxx@te.com. fuzzy query is supported.
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置Recipient address. length: 0-50. example: xxx@te.com. fuzzy query is supported.
                     * @param _email Recipient address. length: 0-50. example: xxx@te.com. fuzzy query is supported.
                     * 
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取Find start time.
                     * @return CreateTimeBegin Find start time.
                     * 
                     */
                    std::string GetCreateTimeBegin() const;

                    /**
                     * 设置Find start time.
                     * @param _createTimeBegin Find start time.
                     * 
                     */
                    void SetCreateTimeBegin(const std::string& _createTimeBegin);

                    /**
                     * 判断参数 CreateTimeBegin 是否已赋值
                     * @return CreateTimeBegin 是否已赋值
                     * 
                     */
                    bool CreateTimeBeginHasBeenSet() const;

                    /**
                     * 获取Search end time.
                     * @return CreateTimeEnd Search end time.
                     * 
                     */
                    std::string GetCreateTimeEnd() const;

                    /**
                     * 设置Search end time.
                     * @param _createTimeEnd Search end time.
                     * 
                     */
                    void SetCreateTimeEnd(const std::string& _createTimeEnd);

                    /**
                     * 判断参数 CreateTimeEnd 是否已赋值
                     * @return CreateTimeEnd 是否已赋值
                     * 
                     */
                    bool CreateTimeEndHasBeenSet() const;

                    /**
                     * 获取1: valid; 2: invalid.
                     * @return Status 1: valid; 2: invalid.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置1: valid; 2: invalid.
                     * @param _status 1: valid; 2: invalid.
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Recipient list ID. specifies the value returned during API creation of a recipient list via the CreateReceiver api.
                     */
                    uint64_t m_receiverId;
                    bool m_receiverIdHasBeenSet;

                    /**
                     * Offset, int, starts from 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number limit, int, no more than 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Recipient address. length: 0-50. example: xxx@te.com. fuzzy query is supported.
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * Find start time.
                     */
                    std::string m_createTimeBegin;
                    bool m_createTimeBeginHasBeenSet;

                    /**
                     * Search end time.
                     */
                    std::string m_createTimeEnd;
                    bool m_createTimeEndHasBeenSet;

                    /**
                     * 1: valid; 2: invalid.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_LISTRECEIVERDETAILSREQUEST_H_
