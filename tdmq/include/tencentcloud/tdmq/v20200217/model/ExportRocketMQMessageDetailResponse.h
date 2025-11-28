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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_EXPORTROCKETMQMESSAGEDETAILRESPONSE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_EXPORTROCKETMQMESSAGEDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * ExportRocketMQMessageDetail response structure.
                */
                class ExportRocketMQMessageDetailResponse : public AbstractModel
                {
                public:
                    ExportRocketMQMessageDetailResponse();
                    ~ExportRocketMQMessageDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Message ID
                     * @return MsgId Message ID
                     * 
                     */
                    std::string GetMsgId() const;

                    /**
                     * 判断参数 MsgId 是否已赋值
                     * @return MsgId 是否已赋值
                     * 
                     */
                    bool MsgIdHasBeenSet() const;

                    /**
                     * 获取Message Generation Timestamp
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BornTimestamp Message Generation Timestamp
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetBornTimestamp() const;

                    /**
                     * 判断参数 BornTimestamp 是否已赋值
                     * @return BornTimestamp 是否已赋值
                     * 
                     */
                    bool BornTimestampHasBeenSet() const;

                    /**
                     * 获取Message Storage Timestamp
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StoreTimestamp Message Storage Timestamp
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetStoreTimestamp() const;

                    /**
                     * 判断参数 StoreTimestamp 是否已赋值
                     * @return StoreTimestamp 是否已赋值
                     * 
                     */
                    bool StoreTimestampHasBeenSet() const;

                    /**
                     * 获取Message Production Client Address
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BornHost Message Production Client Address
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBornHost() const;

                    /**
                     * 判断参数 BornHost 是否已赋值
                     * @return BornHost 是否已赋值
                     * 
                     */
                    bool BornHostHasBeenSet() const;

                    /**
                     * 获取Message Tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MsgTag Message Tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMsgTag() const;

                    /**
                     * 判断参数 MsgTag 是否已赋值
                     * @return MsgTag 是否已赋值
                     * 
                     */
                    bool MsgTagHasBeenSet() const;

                    /**
                     * 获取Message key
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MsgKey Message key
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMsgKey() const;

                    /**
                     * 判断参数 MsgKey 是否已赋值
                     * @return MsgKey 是否已赋值
                     * 
                     */
                    bool MsgKeyHasBeenSet() const;

                    /**
                     * 获取Message Attributes
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Properties Message Attributes
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProperties() const;

                    /**
                     * 判断参数 Properties 是否已赋值
                     * @return Properties 是否已赋值
                     * 
                     */
                    bool PropertiesHasBeenSet() const;

                    /**
                     * 获取Message Retry Count
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ReConsumeTimes Message Retry Count
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetReConsumeTimes() const;

                    /**
                     * 判断参数 ReConsumeTimes 是否已赋值
                     * @return ReConsumeTimes 是否已赋值
                     * 
                     */
                    bool ReConsumeTimesHasBeenSet() const;

                    /**
                     * 获取Base64 Encoded String
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MsgBody Base64 Encoded String
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMsgBody() const;

                    /**
                     * 判断参数 MsgBody 是否已赋值
                     * @return MsgBody 是否已赋值
                     * 
                     */
                    bool MsgBodyHasBeenSet() const;

                    /**
                     * 获取CRC32 Code of Message Content
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MsgBodyCRC CRC32 Code of Message Content
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMsgBodyCRC() const;

                    /**
                     * 判断参数 MsgBodyCRC 是否已赋值
                     * @return MsgBodyCRC 是否已赋值
                     * 
                     */
                    bool MsgBodyCRCHasBeenSet() const;

                    /**
                     * 获取Specifies the message body size (unit K).
Does not return messages when above 2048.
                     * @return MsgBodySize Specifies the message body size (unit K).
Does not return messages when above 2048.
                     * 
                     */
                    uint64_t GetMsgBodySize() const;

                    /**
                     * 判断参数 MsgBodySize 是否已赋值
                     * @return MsgBodySize 是否已赋值
                     * 
                     */
                    bool MsgBodySizeHasBeenSet() const;

                private:

                    /**
                     * Message ID
                     */
                    std::string m_msgId;
                    bool m_msgIdHasBeenSet;

                    /**
                     * Message Generation Timestamp
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_bornTimestamp;
                    bool m_bornTimestampHasBeenSet;

                    /**
                     * Message Storage Timestamp
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_storeTimestamp;
                    bool m_storeTimestampHasBeenSet;

                    /**
                     * Message Production Client Address
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_bornHost;
                    bool m_bornHostHasBeenSet;

                    /**
                     * Message Tag
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_msgTag;
                    bool m_msgTagHasBeenSet;

                    /**
                     * Message key
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_msgKey;
                    bool m_msgKeyHasBeenSet;

                    /**
                     * Message Attributes
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_properties;
                    bool m_propertiesHasBeenSet;

                    /**
                     * Message Retry Count
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_reConsumeTimes;
                    bool m_reConsumeTimesHasBeenSet;

                    /**
                     * Base64 Encoded String
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_msgBody;
                    bool m_msgBodyHasBeenSet;

                    /**
                     * CRC32 Code of Message Content
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_msgBodyCRC;
                    bool m_msgBodyCRCHasBeenSet;

                    /**
                     * Specifies the message body size (unit K).
Does not return messages when above 2048.
                     */
                    uint64_t m_msgBodySize;
                    bool m_msgBodySizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_EXPORTROCKETMQMESSAGEDETAILRESPONSE_H_
