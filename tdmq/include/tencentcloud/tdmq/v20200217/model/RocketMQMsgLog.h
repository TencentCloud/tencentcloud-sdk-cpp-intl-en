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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQMSGLOG_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQMSGLOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * RocketMQ Message Log
                */
                class RocketMQMsgLog : public AbstractModel
                {
                public:
                    RocketMQMsgLog();
                    ~RocketMQMsgLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Message ID
                     * @return MsgId Message ID
                     * 
                     */
                    std::string GetMsgId() const;

                    /**
                     * 设置Message ID
                     * @param _msgId Message ID
                     * 
                     */
                    void SetMsgId(const std::string& _msgId);

                    /**
                     * 判断参数 MsgId 是否已赋值
                     * @return MsgId 是否已赋值
                     * 
                     */
                    bool MsgIdHasBeenSet() const;

                    /**
                     * 获取Message tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MsgTag Message tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMsgTag() const;

                    /**
                     * 设置Message tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _msgTag Message tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMsgTag(const std::string& _msgTag);

                    /**
                     * 判断参数 MsgTag 是否已赋值
                     * @return MsgTag 是否已赋值
                     * 
                     */
                    bool MsgTagHasBeenSet() const;

                    /**
                     * 获取Message key.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MsgKey Message key.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMsgKey() const;

                    /**
                     * 设置Message key.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _msgKey Message key.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMsgKey(const std::string& _msgKey);

                    /**
                     * 判断参数 MsgKey 是否已赋值
                     * @return MsgKey 是否已赋值
                     * 
                     */
                    bool MsgKeyHasBeenSet() const;

                    /**
                     * 获取Specifies the client ip address.
                     * @return ProducerAddr Specifies the client ip address.
                     * 
                     */
                    std::string GetProducerAddr() const;

                    /**
                     * 设置Specifies the client ip address.
                     * @param _producerAddr Specifies the client ip address.
                     * 
                     */
                    void SetProducerAddr(const std::string& _producerAddr);

                    /**
                     * 判断参数 ProducerAddr 是否已赋值
                     * @return ProducerAddr 是否已赋值
                     * 
                     */
                    bool ProducerAddrHasBeenSet() const;

                    /**
                     * 获取Message Sending Time
                     * @return ProduceTime Message Sending Time
                     * 
                     */
                    std::string GetProduceTime() const;

                    /**
                     * 设置Message Sending Time
                     * @param _produceTime Message Sending Time
                     * 
                     */
                    void SetProduceTime(const std::string& _produceTime);

                    /**
                     * 判断参数 ProduceTime 是否已赋值
                     * @return ProduceTime 是否已赋值
                     * 
                     */
                    bool ProduceTimeHasBeenSet() const;

                    /**
                     * 获取Pulsar Message ID
                     * @return PulsarMsgId Pulsar Message ID
                     * 
                     */
                    std::string GetPulsarMsgId() const;

                    /**
                     * 设置Pulsar Message ID
                     * @param _pulsarMsgId Pulsar Message ID
                     * 
                     */
                    void SetPulsarMsgId(const std::string& _pulsarMsgId);

                    /**
                     * 判断参数 PulsarMsgId 是否已赋值
                     * @return PulsarMsgId 是否已赋值
                     * 
                     */
                    bool PulsarMsgIdHasBeenSet() const;

                    /**
                     * 获取Dead-letter resend count
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DeadLetterResendTimes Dead-letter resend count
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetDeadLetterResendTimes() const;

                    /**
                     * 设置Dead-letter resend count
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _deadLetterResendTimes Dead-letter resend count
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDeadLetterResendTimes(const int64_t& _deadLetterResendTimes);

                    /**
                     * 判断参数 DeadLetterResendTimes 是否已赋值
                     * @return DeadLetterResendTimes 是否已赋值
                     * 
                     */
                    bool DeadLetterResendTimesHasBeenSet() const;

                    /**
                     * 获取Dead Letter Resend Success Count
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResendSuccessCount Dead Letter Resend Success Count
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetResendSuccessCount() const;

                    /**
                     * 设置Dead Letter Resend Success Count
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resendSuccessCount Dead Letter Resend Success Count
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetResendSuccessCount(const int64_t& _resendSuccessCount);

                    /**
                     * 判断参数 ResendSuccessCount 是否已赋值
                     * @return ResendSuccessCount 是否已赋值
                     * 
                     */
                    bool ResendSuccessCountHasBeenSet() const;

                private:

                    /**
                     * Message ID
                     */
                    std::string m_msgId;
                    bool m_msgIdHasBeenSet;

                    /**
                     * Message tag
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_msgTag;
                    bool m_msgTagHasBeenSet;

                    /**
                     * Message key.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_msgKey;
                    bool m_msgKeyHasBeenSet;

                    /**
                     * Specifies the client ip address.
                     */
                    std::string m_producerAddr;
                    bool m_producerAddrHasBeenSet;

                    /**
                     * Message Sending Time
                     */
                    std::string m_produceTime;
                    bool m_produceTimeHasBeenSet;

                    /**
                     * Pulsar Message ID
                     */
                    std::string m_pulsarMsgId;
                    bool m_pulsarMsgIdHasBeenSet;

                    /**
                     * Dead-letter resend count
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_deadLetterResendTimes;
                    bool m_deadLetterResendTimesHasBeenSet;

                    /**
                     * Dead Letter Resend Success Count
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_resendSuccessCount;
                    bool m_resendSuccessCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQMSGLOG_H_
