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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_MESSAGETRACKITEM_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_MESSAGETRACKITEM_H_

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
                * MessageTrack
                */
                class MessageTrackItem : public AbstractModel
                {
                public:
                    MessageTrackItem();
                    ~MessageTrackItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies the consumer group name.
                     * @return ConsumerGroup Specifies the consumer group name.
                     * 
                     */
                    std::string GetConsumerGroup() const;

                    /**
                     * 设置Specifies the consumer group name.
                     * @param _consumerGroup Specifies the consumer group name.
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
                     * 获取Consumption status. CONSUMED: Consumed CONSUMED_BUT_FILTERED: Filtered NOT_CONSUME: Not consumed ENTER_RETRY: Enter retry queue. ENTER_DLQ: Enter dead letter queue. UNKNOWN: Consumption status unknown
                     * @return ConsumeStatus Consumption status. CONSUMED: Consumed CONSUMED_BUT_FILTERED: Filtered NOT_CONSUME: Not consumed ENTER_RETRY: Enter retry queue. ENTER_DLQ: Enter dead letter queue. UNKNOWN: Consumption status unknown
                     * 
                     */
                    std::string GetConsumeStatus() const;

                    /**
                     * 设置Consumption status. CONSUMED: Consumed CONSUMED_BUT_FILTERED: Filtered NOT_CONSUME: Not consumed ENTER_RETRY: Enter retry queue. ENTER_DLQ: Enter dead letter queue. UNKNOWN: Consumption status unknown
                     * @param _consumeStatus Consumption status. CONSUMED: Consumed CONSUMED_BUT_FILTERED: Filtered NOT_CONSUME: Not consumed ENTER_RETRY: Enter retry queue. ENTER_DLQ: Enter dead letter queue. UNKNOWN: Consumption status unknown
                     * 
                     */
                    void SetConsumeStatus(const std::string& _consumeStatus);

                    /**
                     * 判断参数 ConsumeStatus 是否已赋值
                     * @return ConsumeStatus 是否已赋值
                     * 
                     */
                    bool ConsumeStatusHasBeenSet() const;

                    /**
                     * 获取Track type
                     * @return TrackType Track type
                     * 
                     */
                    std::string GetTrackType() const;

                    /**
                     * 设置Track type
                     * @param _trackType Track type
                     * 
                     */
                    void SetTrackType(const std::string& _trackType);

                    /**
                     * 判断参数 TrackType 是否已赋值
                     * @return TrackType 是否已赋值
                     * 
                     */
                    bool TrackTypeHasBeenSet() const;

                    /**
                     * 获取Exception information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExceptionDesc Exception information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExceptionDesc() const;

                    /**
                     * 设置Exception information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _exceptionDesc Exception information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExceptionDesc(const std::string& _exceptionDesc);

                    /**
                     * 判断参数 ExceptionDesc 是否已赋值
                     * @return ExceptionDesc 是否已赋值
                     * 
                     */
                    bool ExceptionDescHasBeenSet() const;

                private:

                    /**
                     * Specifies the consumer group name.
                     */
                    std::string m_consumerGroup;
                    bool m_consumerGroupHasBeenSet;

                    /**
                     * Consumption status. CONSUMED: Consumed CONSUMED_BUT_FILTERED: Filtered NOT_CONSUME: Not consumed ENTER_RETRY: Enter retry queue. ENTER_DLQ: Enter dead letter queue. UNKNOWN: Consumption status unknown
                     */
                    std::string m_consumeStatus;
                    bool m_consumeStatusHasBeenSet;

                    /**
                     * Track type
                     */
                    std::string m_trackType;
                    bool m_trackTypeHasBeenSet;

                    /**
                     * Exception information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_exceptionDesc;
                    bool m_exceptionDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_MESSAGETRACKITEM_H_
