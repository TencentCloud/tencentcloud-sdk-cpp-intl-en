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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_MESSAGEITEM_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_MESSAGEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * Message log
                */
                class MessageItem : public AbstractModel
                {
                public:
                    MessageItem();
                    ~MessageItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Message ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MsgId Message ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMsgId() const;

                    /**
                     * 设置Message ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _msgId Message ID.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * @return Tags Message tag

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTags() const;

                    /**
                     * 设置Message tag

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tags Message tag

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTags(const std::string& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Message key.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Keys Message key.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetKeys() const;

                    /**
                     * 设置Message key.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _keys Message key.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetKeys(const std::string& _keys);

                    /**
                     * 判断参数 Keys 是否已赋值
                     * @return Keys 是否已赋值
                     * 
                     */
                    bool KeysHasBeenSet() const;

                    /**
                     * 获取Client address.	
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProducerAddr Client address.	
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProducerAddr() const;

                    /**
                     * 设置Client address.	
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _producerAddr Client address.	
Note: This field may return null, indicating that no valid values can be obtained.
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
	
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProduceTime Message Sending Time	
	
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProduceTime() const;

                    /**
                     * 设置Message Sending Time	
	
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _produceTime Message Sending Time	
	
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * @return DeadLetterResendSuccessTimes Dead Letter Resend Success Count

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetDeadLetterResendSuccessTimes() const;

                    /**
                     * 设置Dead Letter Resend Success Count

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _deadLetterResendSuccessTimes Dead Letter Resend Success Count

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDeadLetterResendSuccessTimes(const int64_t& _deadLetterResendSuccessTimes);

                    /**
                     * 判断参数 DeadLetterResendSuccessTimes 是否已赋值
                     * @return DeadLetterResendSuccessTimes 是否已赋值
                     * 
                     */
                    bool DeadLetterResendSuccessTimesHasBeenSet() const;

                private:

                    /**
                     * Message ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_msgId;
                    bool m_msgIdHasBeenSet;

                    /**
                     * Message tag

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Message key.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_keys;
                    bool m_keysHasBeenSet;

                    /**
                     * Client address.	
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_producerAddr;
                    bool m_producerAddrHasBeenSet;

                    /**
                     * Message Sending Time	
	
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_produceTime;
                    bool m_produceTimeHasBeenSet;

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
                    int64_t m_deadLetterResendSuccessTimes;
                    bool m_deadLetterResendSuccessTimesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_MESSAGEITEM_H_
