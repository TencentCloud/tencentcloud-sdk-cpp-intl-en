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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYTOPICATTRIBUTESREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYTOPICATTRIBUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/Tag.h>


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
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceId Instance ID.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Topic name.
                     * @return TopicName Topic name.
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置Topic name.
                     * @param _topicName Topic name.
                     * 
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     * 
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取Topic remarks string of up to 64 characters, which must begin with a letter and can contain letters, digits, and dashes (`-`).
                     * @return Note Topic remarks string of up to 64 characters, which must begin with a letter and can contain letters, digits, and dashes (`-`).
                     * 
                     */
                    std::string GetNote() const;

                    /**
                     * 设置Topic remarks string of up to 64 characters, which must begin with a letter and can contain letters, digits, and dashes (`-`).
                     * @param _note Topic remarks string of up to 64 characters, which must begin with a letter and can contain letters, digits, and dashes (`-`).
                     * 
                     */
                    void SetNote(const std::string& _note);

                    /**
                     * 判断参数 Note 是否已赋值
                     * @return Note 是否已赋值
                     * 
                     */
                    bool NoteHasBeenSet() const;

                    /**
                     * 获取IP allowlist switch. 1: enabled, 0: disabled.
                     * @return EnableWhiteList IP allowlist switch. 1: enabled, 0: disabled.
                     * 
                     */
                    int64_t GetEnableWhiteList() const;

                    /**
                     * 设置IP allowlist switch. 1: enabled, 0: disabled.
                     * @param _enableWhiteList IP allowlist switch. 1: enabled, 0: disabled.
                     * 
                     */
                    void SetEnableWhiteList(const int64_t& _enableWhiteList);

                    /**
                     * 判断参数 EnableWhiteList 是否已赋值
                     * @return EnableWhiteList 是否已赋值
                     * 
                     */
                    bool EnableWhiteListHasBeenSet() const;

                    /**
                     * 获取Default value: 1.
                     * @return MinInsyncReplicas Default value: 1.
                     * 
                     */
                    int64_t GetMinInsyncReplicas() const;

                    /**
                     * 设置Default value: 1.
                     * @param _minInsyncReplicas Default value: 1.
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
                     * 获取0: false, 1: true. Default value: 0.
                     * @return UncleanLeaderElectionEnable 0: false, 1: true. Default value: 0.
                     * 
                     */
                    int64_t GetUncleanLeaderElectionEnable() const;

                    /**
                     * 设置0: false, 1: true. Default value: 0.
                     * @param _uncleanLeaderElectionEnable 0: false, 1: true. Default value: 0.
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
                     * 获取Message retention period in ms. The current minimum value is 60,000 ms.
                     * @return RetentionMs Message retention period in ms. The current minimum value is 60,000 ms.
                     * 
                     */
                    int64_t GetRetentionMs() const;

                    /**
                     * 设置Message retention period in ms. The current minimum value is 60,000 ms.
                     * @param _retentionMs Message retention period in ms. The current minimum value is 60,000 ms.
                     * 
                     */
                    void SetRetentionMs(const int64_t& _retentionMs);

                    /**
                     * 判断参数 RetentionMs 是否已赋值
                     * @return RetentionMs 是否已赋值
                     * 
                     */
                    bool RetentionMsHasBeenSet() const;

                    /**
                     * 获取Segment rolling duration in ms. The current minimum value is 86,400,000 ms.
                     * @return SegmentMs Segment rolling duration in ms. The current minimum value is 86,400,000 ms.
                     * 
                     */
                    int64_t GetSegmentMs() const;

                    /**
                     * 设置Segment rolling duration in ms. The current minimum value is 86,400,000 ms.
                     * @param _segmentMs Segment rolling duration in ms. The current minimum value is 86,400,000 ms.
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
                     * 获取Max message size in bytes. Max value: 8,388,608 bytes (8 MB).
                     * @return MaxMessageBytes Max message size in bytes. Max value: 8,388,608 bytes (8 MB).
                     * 
                     */
                    int64_t GetMaxMessageBytes() const;

                    /**
                     * 设置Max message size in bytes. Max value: 8,388,608 bytes (8 MB).
                     * @param _maxMessageBytes Max message size in bytes. Max value: 8,388,608 bytes (8 MB).
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
                     * 获取Message deletion policy. Valid values: delete, compact
                     * @return CleanUpPolicy Message deletion policy. Valid values: delete, compact
                     * 
                     */
                    std::string GetCleanUpPolicy() const;

                    /**
                     * 设置Message deletion policy. Valid values: delete, compact
                     * @param _cleanUpPolicy Message deletion policy. Valid values: delete, compact
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
                     * 获取IP allowlist, which is required if the value of `enableWhileList` is 1.
                     * @return IpWhiteList IP allowlist, which is required if the value of `enableWhileList` is 1.
                     * 
                     */
                    std::vector<std::string> GetIpWhiteList() const;

                    /**
                     * 设置IP allowlist, which is required if the value of `enableWhileList` is 1.
                     * @param _ipWhiteList IP allowlist, which is required if the value of `enableWhileList` is 1.
                     * 
                     */
                    void SetIpWhiteList(const std::vector<std::string>& _ipWhiteList);

                    /**
                     * 判断参数 IpWhiteList 是否已赋值
                     * @return IpWhiteList 是否已赋值
                     * 
                     */
                    bool IpWhiteListHasBeenSet() const;

                    /**
                     * 获取Preset ACL rule. `1`: enable, `0`: disable. Default value: `0`.
                     * @return EnableAclRule Preset ACL rule. `1`: enable, `0`: disable. Default value: `0`.
                     * 
                     */
                    int64_t GetEnableAclRule() const;

                    /**
                     * 设置Preset ACL rule. `1`: enable, `0`: disable. Default value: `0`.
                     * @param _enableAclRule Preset ACL rule. `1`: enable, `0`: disable. Default value: `0`.
                     * 
                     */
                    void SetEnableAclRule(const int64_t& _enableAclRule);

                    /**
                     * 判断参数 EnableAclRule 是否已赋值
                     * @return EnableAclRule 是否已赋值
                     * 
                     */
                    bool EnableAclRuleHasBeenSet() const;

                    /**
                     * 获取Name of the preset ACL rule.
                     * @return AclRuleName Name of the preset ACL rule.
                     * 
                     */
                    std::string GetAclRuleName() const;

                    /**
                     * 设置Name of the preset ACL rule.
                     * @param _aclRuleName Name of the preset ACL rule.
                     * 
                     */
                    void SetAclRuleName(const std::string& _aclRuleName);

                    /**
                     * 判断参数 AclRuleName 是否已赋值
                     * @return AclRuleName 是否已赋值
                     * 
                     */
                    bool AclRuleNameHasBeenSet() const;

                    /**
                     * 获取Message retention file size in bytes, which is an optional parameter. Default value: -1. Currently, the min value that can be entered is 1,048,576 B.
                     * @return RetentionBytes Message retention file size in bytes, which is an optional parameter. Default value: -1. Currently, the min value that can be entered is 1,048,576 B.
                     * 
                     */
                    int64_t GetRetentionBytes() const;

                    /**
                     * 设置Message retention file size in bytes, which is an optional parameter. Default value: -1. Currently, the min value that can be entered is 1,048,576 B.
                     * @param _retentionBytes Message retention file size in bytes, which is an optional parameter. Default value: -1. Currently, the min value that can be entered is 1,048,576 B.
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
                     * 获取Tag list.
                     * @return Tags Tag list.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag list.
                     * @param _tags Tag list.
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Production throttling in MB/sec.
                     * @return QuotaProducerByteRate Production throttling in MB/sec.
                     * 
                     */
                    int64_t GetQuotaProducerByteRate() const;

                    /**
                     * 设置Production throttling in MB/sec.
                     * @param _quotaProducerByteRate Production throttling in MB/sec.
                     * 
                     */
                    void SetQuotaProducerByteRate(const int64_t& _quotaProducerByteRate);

                    /**
                     * 判断参数 QuotaProducerByteRate 是否已赋值
                     * @return QuotaProducerByteRate 是否已赋值
                     * 
                     */
                    bool QuotaProducerByteRateHasBeenSet() const;

                    /**
                     * 获取Consumption throttling in MB/sec.
                     * @return QuotaConsumerByteRate Consumption throttling in MB/sec.
                     * 
                     */
                    int64_t GetQuotaConsumerByteRate() const;

                    /**
                     * 设置Consumption throttling in MB/sec.
                     * @param _quotaConsumerByteRate Consumption throttling in MB/sec.
                     * 
                     */
                    void SetQuotaConsumerByteRate(const int64_t& _quotaConsumerByteRate);

                    /**
                     * 判断参数 QuotaConsumerByteRate 是否已赋值
                     * @return QuotaConsumerByteRate 是否已赋值
                     * 
                     */
                    bool QuotaConsumerByteRateHasBeenSet() const;

                    /**
                     * 获取The number of topic replicas.
                     * @return ReplicaNum The number of topic replicas.
                     * 
                     */
                    int64_t GetReplicaNum() const;

                    /**
                     * 设置The number of topic replicas.
                     * @param _replicaNum The number of topic replicas.
                     * 
                     */
                    void SetReplicaNum(const int64_t& _replicaNum);

                    /**
                     * 判断参数 ReplicaNum 是否已赋值
                     * @return ReplicaNum 是否已赋值
                     * 
                     */
                    bool ReplicaNumHasBeenSet() const;

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
                     * IP allowlist switch. 1: enabled, 0: disabled.
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
                     * Max message size in bytes. Max value: 8,388,608 bytes (8 MB).
                     */
                    int64_t m_maxMessageBytes;
                    bool m_maxMessageBytesHasBeenSet;

                    /**
                     * Message deletion policy. Valid values: delete, compact
                     */
                    std::string m_cleanUpPolicy;
                    bool m_cleanUpPolicyHasBeenSet;

                    /**
                     * IP allowlist, which is required if the value of `enableWhileList` is 1.
                     */
                    std::vector<std::string> m_ipWhiteList;
                    bool m_ipWhiteListHasBeenSet;

                    /**
                     * Preset ACL rule. `1`: enable, `0`: disable. Default value: `0`.
                     */
                    int64_t m_enableAclRule;
                    bool m_enableAclRuleHasBeenSet;

                    /**
                     * Name of the preset ACL rule.
                     */
                    std::string m_aclRuleName;
                    bool m_aclRuleNameHasBeenSet;

                    /**
                     * Message retention file size in bytes, which is an optional parameter. Default value: -1. Currently, the min value that can be entered is 1,048,576 B.
                     */
                    int64_t m_retentionBytes;
                    bool m_retentionBytesHasBeenSet;

                    /**
                     * Tag list.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Production throttling in MB/sec.
                     */
                    int64_t m_quotaProducerByteRate;
                    bool m_quotaProducerByteRateHasBeenSet;

                    /**
                     * Consumption throttling in MB/sec.
                     */
                    int64_t m_quotaConsumerByteRate;
                    bool m_quotaConsumerByteRateHasBeenSet;

                    /**
                     * The number of topic replicas.
                     */
                    int64_t m_replicaNum;
                    bool m_replicaNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYTOPICATTRIBUTESREQUEST_H_
