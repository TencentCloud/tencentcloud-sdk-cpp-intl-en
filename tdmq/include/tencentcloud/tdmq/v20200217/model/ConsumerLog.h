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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CONSUMERLOG_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CONSUMERLOG_H_

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
                * Consumption log
                */
                class ConsumerLog : public AbstractModel
                {
                public:
                    ConsumerLog();
                    ~ConsumerLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Message ID.
                     * @return MsgId Message ID.
                     * 
                     */
                    std::string GetMsgId() const;

                    /**
                     * 设置Message ID.
                     * @param _msgId Message ID.
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
                     * 获取Consumption group.
                     * @return ConsumerGroup Consumption group.
                     * 
                     */
                    std::string GetConsumerGroup() const;

                    /**
                     * 设置Consumption group.
                     * @param _consumerGroup Consumption group.
                     * 
                     */
                    void SetConsumerGroup(const std::string& _consumerGroup);

                    /**
                     * 判断参数 ConsumerGroup 是否已赋值
                     * @return ConsumerGroup 是否已赋值
                     * 
                     */
                    bool ConsumerGroupHasBeenSet() const;

                    /**
                     * 获取Consumer name.
                     * @return ConsumerName Consumer name.
                     * 
                     */
                    std::string GetConsumerName() const;

                    /**
                     * 设置Consumer name.
                     * @param _consumerName Consumer name.
                     * 
                     */
                    void SetConsumerName(const std::string& _consumerName);

                    /**
                     * 判断参数 ConsumerName 是否已赋值
                     * @return ConsumerName 是否已赋值
                     * 
                     */
                    bool ConsumerNameHasBeenSet() const;

                    /**
                     * 获取Consumption time.
                     * @return ConsumeTime Consumption time.
                     * 
                     */
                    std::string GetConsumeTime() const;

                    /**
                     * 设置Consumption time.
                     * @param _consumeTime Consumption time.
                     * 
                     */
                    void SetConsumeTime(const std::string& _consumeTime);

                    /**
                     * 判断参数 ConsumeTime 是否已赋值
                     * @return ConsumeTime 是否已赋值
                     * 
                     */
                    bool ConsumeTimeHasBeenSet() const;

                    /**
                     * 获取Consumer client address.
                     * @return ConsumerAddr Consumer client address.
                     * 
                     */
                    std::string GetConsumerAddr() const;

                    /**
                     * 设置Consumer client address.
                     * @param _consumerAddr Consumer client address.
                     * 
                     */
                    void SetConsumerAddr(const std::string& _consumerAddr);

                    /**
                     * 判断参数 ConsumerAddr 是否已赋值
                     * @return ConsumerAddr 是否已赋值
                     * 
                     */
                    bool ConsumerAddrHasBeenSet() const;

                    /**
                     * 获取Consumption time (milliseconds).
                     * @return ConsumeUseTime Consumption time (milliseconds).
                     * 
                     */
                    uint64_t GetConsumeUseTime() const;

                    /**
                     * 设置Consumption time (milliseconds).
                     * @param _consumeUseTime Consumption time (milliseconds).
                     * 
                     */
                    void SetConsumeUseTime(const uint64_t& _consumeUseTime);

                    /**
                     * 判断参数 ConsumeUseTime 是否已赋值
                     * @return ConsumeUseTime 是否已赋值
                     * 
                     */
                    bool ConsumeUseTimeHasBeenSet() const;

                    /**
                     * 获取Consumption status.
                     * @return Status Consumption status.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Consumption status.
                     * @param _status Consumption status.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Message ID.
                     */
                    std::string m_msgId;
                    bool m_msgIdHasBeenSet;

                    /**
                     * Consumption group.
                     */
                    std::string m_consumerGroup;
                    bool m_consumerGroupHasBeenSet;

                    /**
                     * Consumer name.
                     */
                    std::string m_consumerName;
                    bool m_consumerNameHasBeenSet;

                    /**
                     * Consumption time.
                     */
                    std::string m_consumeTime;
                    bool m_consumeTimeHasBeenSet;

                    /**
                     * Consumer client address.
                     */
                    std::string m_consumerAddr;
                    bool m_consumerAddrHasBeenSet;

                    /**
                     * Consumption time (milliseconds).
                     */
                    uint64_t m_consumeUseTime;
                    bool m_consumeUseTimeHasBeenSet;

                    /**
                     * Consumption status.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CONSUMERLOG_H_
