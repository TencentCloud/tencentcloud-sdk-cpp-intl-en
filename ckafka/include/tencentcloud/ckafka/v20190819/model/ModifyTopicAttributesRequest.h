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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYTOPICATTRIBUTESREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYTOPICATTRIBUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyTopicAttributes request structure.
                */
                class ModifyTopicAttributesRequest : public AbstractModel
                {
                public:
                    ModifyTopicAttributesRequest();
                    ~ModifyTopicAttributesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param InstanceId Instance ID.
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Topic name.
                     * @return TopicName Topic name.
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置Topic name.
                     * @param TopicName Topic name.
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取Topic remarks string of up to 64 characters, which must begin with a letter and can contain letters, digits, and dashes (`-`).
                     * @return Note Topic remarks string of up to 64 characters, which must begin with a letter and can contain letters, digits, and dashes (`-`).
                     */
                    std::string GetNote() const;

                    /**
                     * 设置Topic remarks string of up to 64 characters, which must begin with a letter and can contain letters, digits, and dashes (`-`).
                     * @param Note Topic remarks string of up to 64 characters, which must begin with a letter and can contain letters, digits, and dashes (`-`).
                     */
                    void SetNote(const std::string& _note);

                    /**
                     * 判断参数 Note 是否已赋值
                     * @return Note 是否已赋值
                     */
                    bool NoteHasBeenSet() const;

                    /**
                     * 获取IP whitelist switch. 1: enabled, 0: disabled.
                     * @return EnableWhiteList IP whitelist switch. 1: enabled, 0: disabled.
                     */
                    int64_t GetEnableWhiteList() const;

                    /**
                     * 设置IP whitelist switch. 1: enabled, 0: disabled.
                     * @param EnableWhiteList IP whitelist switch. 1: enabled, 0: disabled.
                     */
                    void SetEnableWhiteList(const int64_t& _enableWhiteList);

                    /**
                     * 判断参数 EnableWhiteList 是否已赋值
                     * @return EnableWhiteList 是否已赋值
                     */
                    bool EnableWhiteListHasBeenSet() const;

                    /**
                     * 获取Default value: 1.
                     * @return MinInsyncReplicas Default value: 1.
                     */
                    int64_t GetMinInsyncReplicas() const;

                    /**
                     * 设置Default value: 1.
                     * @param MinInsyncReplicas Default value: 1.
                     */
                    void SetMinInsyncReplicas(const int64_t& _minInsyncReplicas);

                    /**
                     * 判断参数 MinInsyncReplicas 是否已赋值
                     * @return MinInsyncReplicas 是否已赋值
                     */
                    bool MinInsyncReplicasHasBeenSet() const;

                    /**
                     * 获取0: false, 1: true. Default value: 0.
                     * @return UncleanLeaderElectionEnable 0: false, 1: true. Default value: 0.
                     */
                    int64_t GetUncleanLeaderElectionEnable() const;

                    /**
                     * 设置0: false, 1: true. Default value: 0.
                     * @param UncleanLeaderElectionEnable 0: false, 1: true. Default value: 0.
                     */
                    void SetUncleanLeaderElectionEnable(const int64_t& _uncleanLeaderElectionEnable);

                    /**
                     * 判断参数 UncleanLeaderElectionEnable 是否已赋值
                     * @return UncleanLeaderElectionEnable 是否已赋值
                     */
                    bool UncleanLeaderElectionEnableHasBeenSet() const;

                    /**
                     * 获取Message retention period in ms. The current minimum value is 60,000 ms.
                     * @return RetentionMs Message retention period in ms. The current minimum value is 60,000 ms.
                     */
                    int64_t GetRetentionMs() const;

                    /**
                     * 设置Message retention period in ms. The current minimum value is 60,000 ms.
                     * @param RetentionMs Message retention period in ms. The current minimum value is 60,000 ms.
                     */
                    void SetRetentionMs(const int64_t& _retentionMs);

                    /**
                     * 判断参数 RetentionMs 是否已赋值
                     * @return RetentionMs 是否已赋值
                     */
                    bool RetentionMsHasBeenSet() const;

                    /**
                     * 获取Segment rolling duration in ms. The current minimum value is 86,400,000 ms.
                     * @return SegmentMs Segment rolling duration in ms. The current minimum value is 86,400,000 ms.
                     */
                    int64_t GetSegmentMs() const;

                    /**
                     * 设置Segment rolling duration in ms. The current minimum value is 86,400,000 ms.
                     * @param SegmentMs Segment rolling duration in ms. The current minimum value is 86,400,000 ms.
                     */
                    void SetSegmentMs(const int64_t& _segmentMs);

                    /**
                     * 判断参数 SegmentMs 是否已赋值
                     * @return SegmentMs 是否已赋值
                     */
                    bool SegmentMsHasBeenSet() const;

                    /**
                     * 获取Maximum topic message length in bytes. The maximum value is 8,388,608 bytes (i.e., 8 MB).
                     * @return MaxMessageBytes Maximum topic message length in bytes. The maximum value is 8,388,608 bytes (i.e., 8 MB).
                     */
                    int64_t GetMaxMessageBytes() const;

                    /**
                     * 设置Maximum topic message length in bytes. The maximum value is 8,388,608 bytes (i.e., 8 MB).
                     * @param MaxMessageBytes Maximum topic message length in bytes. The maximum value is 8,388,608 bytes (i.e., 8 MB).
                     */
                    void SetMaxMessageBytes(const int64_t& _maxMessageBytes);

                    /**
                     * 判断参数 MaxMessageBytes 是否已赋值
                     * @return MaxMessageBytes 是否已赋值
                     */
                    bool MaxMessageBytesHasBeenSet() const;

                    /**
                     * 获取Message deletion policy. Valid values: delete, compact
                     * @return CleanUpPolicy Message deletion policy. Valid values: delete, compact
                     */
                    std::string GetCleanUpPolicy() const;

                    /**
                     * 设置Message deletion policy. Valid values: delete, compact
                     * @param CleanUpPolicy Message deletion policy. Valid values: delete, compact
                     */
                    void SetCleanUpPolicy(const std::string& _cleanUpPolicy);

                    /**
                     * 判断参数 CleanUpPolicy 是否已赋值
                     * @return CleanUpPolicy 是否已赋值
                     */
                    bool CleanUpPolicyHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Topic name.
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * Topic remarks string of up to 64 characters, which must begin with a letter and can contain letters, digits, and dashes (`-`).
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                    /**
                     * IP whitelist switch. 1: enabled, 0: disabled.
                     */
                    int64_t m_enableWhiteList;
                    bool m_enableWhiteListHasBeenSet;

                    /**
                     * Default value: 1.
                     */
                    int64_t m_minInsyncReplicas;
                    bool m_minInsyncReplicasHasBeenSet;

                    /**
                     * 0: false, 1: true. Default value: 0.
                     */
                    int64_t m_uncleanLeaderElectionEnable;
                    bool m_uncleanLeaderElectionEnableHasBeenSet;

                    /**
                     * Message retention period in ms. The current minimum value is 60,000 ms.
                     */
                    int64_t m_retentionMs;
                    bool m_retentionMsHasBeenSet;

                    /**
                     * Segment rolling duration in ms. The current minimum value is 86,400,000 ms.
                     */
                    int64_t m_segmentMs;
                    bool m_segmentMsHasBeenSet;

                    /**
                     * Maximum topic message length in bytes. The maximum value is 8,388,608 bytes (i.e., 8 MB).
                     */
                    int64_t m_maxMessageBytes;
                    bool m_maxMessageBytesHasBeenSet;

                    /**
                     * Message deletion policy. Valid values: delete, compact
                     */
                    std::string m_cleanUpPolicy;
                    bool m_cleanUpPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYTOPICATTRIBUTESREQUEST_H_
