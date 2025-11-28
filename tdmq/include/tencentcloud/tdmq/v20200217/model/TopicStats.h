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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_TOPICSTATS_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_TOPICSTATS_H_

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
                * Topic status.
                */
                class TopicStats : public AbstractModel
                {
                public:
                    TopicStats();
                    ~TopicStats() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Broker node.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BrokerName Broker node.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBrokerName() const;

                    /**
                     * 设置Broker node.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _brokerName Broker node.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBrokerName(const std::string& _brokerName);

                    /**
                     * 判断参数 BrokerName 是否已赋值
                     * @return BrokerName 是否已赋值
                     * 
                     */
                    bool BrokerNameHasBeenSet() const;

                    /**
                     * 获取Queue number.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return QueueId Queue number.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetQueueId() const;

                    /**
                     * 设置Queue number.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _queueId Queue number.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetQueueId(const int64_t& _queueId);

                    /**
                     * 判断参数 QueueId 是否已赋值
                     * @return QueueId 是否已赋值
                     * 
                     */
                    bool QueueIdHasBeenSet() const;

                    /**
                     * 获取Minimum offset.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MinOffset Minimum offset.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMinOffset() const;

                    /**
                     * 设置Minimum offset.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _minOffset Minimum offset.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMinOffset(const int64_t& _minOffset);

                    /**
                     * 判断参数 MinOffset 是否已赋值
                     * @return MinOffset 是否已赋值
                     * 
                     */
                    bool MinOffsetHasBeenSet() const;

                    /**
                     * 获取Specifies the maximum offset.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MaxOffset Specifies the maximum offset.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMaxOffset() const;

                    /**
                     * 设置Specifies the maximum offset.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _maxOffset Specifies the maximum offset.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMaxOffset(const int64_t& _maxOffset);

                    /**
                     * 判断参数 MaxOffset 是否已赋值
                     * @return MaxOffset 是否已赋值
                     * 
                     */
                    bool MaxOffsetHasBeenSet() const;

                    /**
                     * 获取Message count.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MessageCount Message count.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMessageCount() const;

                    /**
                     * 设置Message count.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _messageCount Message count.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMessageCount(const int64_t& _messageCount);

                    /**
                     * 判断参数 MessageCount 是否已赋值
                     * @return MessageCount 是否已赋值
                     * 
                     */
                    bool MessageCountHasBeenSet() const;

                    /**
                     * 获取Last message write time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LastUpdateTimestamp Last message write time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetLastUpdateTimestamp() const;

                    /**
                     * 设置Last message write time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _lastUpdateTimestamp Last message write time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLastUpdateTimestamp(const int64_t& _lastUpdateTimestamp);

                    /**
                     * 判断参数 LastUpdateTimestamp 是否已赋值
                     * @return LastUpdateTimestamp 是否已赋值
                     * 
                     */
                    bool LastUpdateTimestampHasBeenSet() const;

                private:

                    /**
                     * Broker node.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_brokerName;
                    bool m_brokerNameHasBeenSet;

                    /**
                     * Queue number.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_queueId;
                    bool m_queueIdHasBeenSet;

                    /**
                     * Minimum offset.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_minOffset;
                    bool m_minOffsetHasBeenSet;

                    /**
                     * Specifies the maximum offset.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_maxOffset;
                    bool m_maxOffsetHasBeenSet;

                    /**
                     * Message count.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_messageCount;
                    bool m_messageCountHasBeenSet;

                    /**
                     * Last message write time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_lastUpdateTimestamp;
                    bool m_lastUpdateTimestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_TOPICSTATS_H_
