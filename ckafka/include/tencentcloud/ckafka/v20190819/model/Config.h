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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_CONFIG_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_CONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * Advanced configuration object
                */
                class Config : public AbstractModel
                {
                public:
                    Config();
                    ~Config() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Message retention period in milliseconds.
                     * @return Retention Message retention period in milliseconds.
                     * 
                     */
                    int64_t GetRetention() const;

                    /**
                     * 设置Message retention period in milliseconds.
                     * @param _retention Message retention period in milliseconds.
                     * 
                     */
                    void SetRetention(const int64_t& _retention);

                    /**
                     * 判断参数 Retention 是否已赋值
                     * @return Retention 是否已赋值
                     * 
                     */
                    bool RetentionHasBeenSet() const;

                    /**
                     * 获取Minimum number of sync replications
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MinInsyncReplicas Minimum number of sync replications
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMinInsyncReplicas() const;

                    /**
                     * 设置Minimum number of sync replications
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _minInsyncReplicas Minimum number of sync replications
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMinInsyncReplicas(const int64_t& _minInsyncReplicas);

                    /**
                     * 判断参数 MinInsyncReplicas 是否已赋值
                     * @return MinInsyncReplicas 是否已赋值
                     * 
                     */
                    bool MinInsyncReplicasHasBeenSet() const;

                    /**
                     * 获取Log cleanup mode. Default value: delete.
delete: logs will be deleted by save time; compact: logs will be compressed by key; compact, delete: logs will be compressed by key and deleted by save time.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CleanUpPolicy Log cleanup mode. Default value: delete.
delete: logs will be deleted by save time; compact: logs will be compressed by key; compact, delete: logs will be compressed by key and deleted by save time.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCleanUpPolicy() const;

                    /**
                     * 设置Log cleanup mode. Default value: delete.
delete: logs will be deleted by save time; compact: logs will be compressed by key; compact, delete: logs will be compressed by key and deleted by save time.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _cleanUpPolicy Log cleanup mode. Default value: delete.
delete: logs will be deleted by save time; compact: logs will be compressed by key; compact, delete: logs will be compressed by key and deleted by save time.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCleanUpPolicy(const std::string& _cleanUpPolicy);

                    /**
                     * 判断参数 CleanUpPolicy 是否已赋值
                     * @return CleanUpPolicy 是否已赋值
                     * 
                     */
                    bool CleanUpPolicyHasBeenSet() const;

                    /**
                     * 获取Duration of Segment shard scrolling in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SegmentMs Duration of Segment shard scrolling in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetSegmentMs() const;

                    /**
                     * 设置Duration of Segment shard scrolling in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _segmentMs Duration of Segment shard scrolling in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSegmentMs(const int64_t& _segmentMs);

                    /**
                     * 判断参数 SegmentMs 是否已赋值
                     * @return SegmentMs 是否已赋值
                     * 
                     */
                    bool SegmentMsHasBeenSet() const;

                    /**
                     * 获取0: false, 1: true.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return UncleanLeaderElectionEnable 0: false, 1: true.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetUncleanLeaderElectionEnable() const;

                    /**
                     * 设置0: false, 1: true.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _uncleanLeaderElectionEnable 0: false, 1: true.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUncleanLeaderElectionEnable(const int64_t& _uncleanLeaderElectionEnable);

                    /**
                     * 判断参数 UncleanLeaderElectionEnable 是否已赋值
                     * @return UncleanLeaderElectionEnable 是否已赋值
                     * 
                     */
                    bool UncleanLeaderElectionEnableHasBeenSet() const;

                    /**
                     * 获取Segment specifies the number of bytes for sharding scroll. unit: bytes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SegmentBytes Segment specifies the number of bytes for sharding scroll. unit: bytes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetSegmentBytes() const;

                    /**
                     * 设置Segment specifies the number of bytes for sharding scroll. unit: bytes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _segmentBytes Segment specifies the number of bytes for sharding scroll. unit: bytes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSegmentBytes(const int64_t& _segmentBytes);

                    /**
                     * 判断参数 SegmentBytes 是否已赋值
                     * @return SegmentBytes 是否已赋值
                     * 
                     */
                    bool SegmentBytesHasBeenSet() const;

                    /**
                     * 获取Maximum message byte size. unit: bytes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MaxMessageBytes Maximum message byte size. unit: bytes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMaxMessageBytes() const;

                    /**
                     * 设置Maximum message byte size. unit: bytes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _maxMessageBytes Maximum message byte size. unit: bytes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMaxMessageBytes(const int64_t& _maxMessageBytes);

                    /**
                     * 判断参数 MaxMessageBytes 是否已赋值
                     * @return MaxMessageBytes 是否已赋值
                     * 
                     */
                    bool MaxMessageBytesHasBeenSet() const;

                    /**
                     * 获取Specifies the message retention file size in Bytes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RetentionBytes Specifies the message retention file size in Bytes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRetentionBytes() const;

                    /**
                     * 设置Specifies the message retention file size in Bytes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _retentionBytes Specifies the message retention file size in Bytes.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRetentionBytes(const int64_t& _retentionBytes);

                    /**
                     * 判断参数 RetentionBytes 是否已赋值
                     * @return RetentionBytes 是否已赋值
                     * 
                     */
                    bool RetentionBytesHasBeenSet() const;

                    /**
                     * 获取The time type for message saving. CreateTime means the time when the producer created this message. LogAppendTime means the time when the broker received the message.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LogMsgTimestampType The time type for message saving. CreateTime means the time when the producer created this message. LogAppendTime means the time when the broker received the message.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLogMsgTimestampType() const;

                    /**
                     * 设置The time type for message saving. CreateTime means the time when the producer created this message. LogAppendTime means the time when the broker received the message.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _logMsgTimestampType The time type for message saving. CreateTime means the time when the producer created this message. LogAppendTime means the time when the broker received the message.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLogMsgTimestampType(const std::string& _logMsgTimestampType);

                    /**
                     * 判断参数 LogMsgTimestampType 是否已赋值
                     * @return LogMsgTimestampType 是否已赋值
                     * 
                     */
                    bool LogMsgTimestampTypeHasBeenSet() const;

                private:

                    /**
                     * Message retention period in milliseconds.
                     */
                    int64_t m_retention;
                    bool m_retentionHasBeenSet;

                    /**
                     * Minimum number of sync replications
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_minInsyncReplicas;
                    bool m_minInsyncReplicasHasBeenSet;

                    /**
                     * Log cleanup mode. Default value: delete.
delete: logs will be deleted by save time; compact: logs will be compressed by key; compact, delete: logs will be compressed by key and deleted by save time.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cleanUpPolicy;
                    bool m_cleanUpPolicyHasBeenSet;

                    /**
                     * Duration of Segment shard scrolling in milliseconds.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_segmentMs;
                    bool m_segmentMsHasBeenSet;

                    /**
                     * 0: false, 1: true.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_uncleanLeaderElectionEnable;
                    bool m_uncleanLeaderElectionEnableHasBeenSet;

                    /**
                     * Segment specifies the number of bytes for sharding scroll. unit: bytes.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_segmentBytes;
                    bool m_segmentBytesHasBeenSet;

                    /**
                     * Maximum message byte size. unit: bytes.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_maxMessageBytes;
                    bool m_maxMessageBytesHasBeenSet;

                    /**
                     * Specifies the message retention file size in Bytes.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_retentionBytes;
                    bool m_retentionBytesHasBeenSet;

                    /**
                     * The time type for message saving. CreateTime means the time when the producer created this message. LogAppendTime means the time when the broker received the message.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_logMsgTimestampType;
                    bool m_logMsgTimestampTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_CONFIG_H_
