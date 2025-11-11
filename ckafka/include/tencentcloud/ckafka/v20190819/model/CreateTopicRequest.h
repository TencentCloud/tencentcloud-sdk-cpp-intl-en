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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATETOPICREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATETOPICREQUEST_H_

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
                * CreateTopic request structure.
                */
                class CreateTopicRequest : public AbstractModel
                {
                public:
                    CreateTopicRequest();
                    ~CreateTopicRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance Id. you can obtain it by calling the DescribeInstances api.
                     * @return InstanceId Instance Id. you can obtain it by calling the DescribeInstances api.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance Id. you can obtain it by calling the DescribeInstances api.
                     * @param _instanceId Instance Id. you can obtain it by calling the DescribeInstances api.
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
                     * 获取Can only contain letters, digits, underscores, "-", or ".".
                     * @return TopicName Can only contain letters, digits, underscores, "-", or ".".
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置Can only contain letters, digits, underscores, "-", or ".".
                     * @param _topicName Can only contain letters, digits, underscores, "-", or ".".
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
                     * 获取Number of partitions, which should be greater than 0
                     * @return PartitionNum Number of partitions, which should be greater than 0
                     * 
                     */
                    int64_t GetPartitionNum() const;

                    /**
                     * 设置Number of partitions, which should be greater than 0
                     * @param _partitionNum Number of partitions, which should be greater than 0
                     * 
                     */
                    void SetPartitionNum(const int64_t& _partitionNum);

                    /**
                     * 判断参数 PartitionNum 是否已赋值
                     * @return PartitionNum 是否已赋值
                     * 
                     */
                    bool PartitionNumHasBeenSet() const;

                    /**
                     * 获取Number of replicas, which cannot be higher than the number of brokers. Maximum value: 3
                     * @return ReplicaNum Number of replicas, which cannot be higher than the number of brokers. Maximum value: 3
                     * 
                     */
                    int64_t GetReplicaNum() const;

                    /**
                     * 设置Number of replicas, which cannot be higher than the number of brokers. Maximum value: 3
                     * @param _replicaNum Number of replicas, which cannot be higher than the number of brokers. Maximum value: 3
                     * 
                     */
                    void SetReplicaNum(const int64_t& _replicaNum);

                    /**
                     * 判断参数 ReplicaNum 是否已赋值
                     * @return ReplicaNum 是否已赋值
                     * 
                     */
                    bool ReplicaNumHasBeenSet() const;

                    /**
                     * 获取IP allowlist switch. 1: enabled, 0: disabled. Default value: 0
                     * @return EnableWhiteList IP allowlist switch. 1: enabled, 0: disabled. Default value: 0
                     * 
                     */
                    int64_t GetEnableWhiteList() const;

                    /**
                     * 设置IP allowlist switch. 1: enabled, 0: disabled. Default value: 0
                     * @param _enableWhiteList IP allowlist switch. 1: enabled, 0: disabled. Default value: 0
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
                     * 获取IP allowlist list for quota limit, which is required if `enableWhileList` is 1
                     * @return IpWhiteList IP allowlist list for quota limit, which is required if `enableWhileList` is 1
                     * 
                     */
                    std::vector<std::string> GetIpWhiteList() const;

                    /**
                     * 设置IP allowlist list for quota limit, which is required if `enableWhileList` is 1
                     * @param _ipWhiteList IP allowlist list for quota limit, which is required if `enableWhileList` is 1
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
                     * 获取Log cleanup policy, which is `delete` by default. `delete`: logs will be deleted by save time; `compact`: logs will be compressed by key; `compact, delete`: logs will be compressed by key and deleted by save time.
                     * @return CleanUpPolicy Log cleanup policy, which is `delete` by default. `delete`: logs will be deleted by save time; `compact`: logs will be compressed by key; `compact, delete`: logs will be compressed by key and deleted by save time.
                     * 
                     */
                    std::string GetCleanUpPolicy() const;

                    /**
                     * 设置Log cleanup policy, which is `delete` by default. `delete`: logs will be deleted by save time; `compact`: logs will be compressed by key; `compact, delete`: logs will be compressed by key and deleted by save time.
                     * @param _cleanUpPolicy Log cleanup policy, which is `delete` by default. `delete`: logs will be deleted by save time; `compact`: logs will be compressed by key; `compact, delete`: logs will be compressed by key and deleted by save time.
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
                     * 获取Topic remark is a string of no more than 64 characters. the first character can be a letter or digit, and the remaining part can contain letters, digits, and hyphens (-).
                     * @return Note Topic remark is a string of no more than 64 characters. the first character can be a letter or digit, and the remaining part can contain letters, digits, and hyphens (-).
                     * 
                     */
                    std::string GetNote() const;

                    /**
                     * 设置Topic remark is a string of no more than 64 characters. the first character can be a letter or digit, and the remaining part can contain letters, digits, and hyphens (-).
                     * @param _note Topic remark is a string of no more than 64 characters. the first character can be a letter or digit, and the remaining part can contain letters, digits, and hyphens (-).
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
                     * 获取Minimum number of synchronous replicas, defaults to 1.
                     * @return MinInsyncReplicas Minimum number of synchronous replicas, defaults to 1.
                     * 
                     */
                    int64_t GetMinInsyncReplicas() const;

                    /**
                     * 设置Minimum number of synchronous replicas, defaults to 1.
                     * @param _minInsyncReplicas Minimum number of synchronous replicas, defaults to 1.
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
                     * 获取Whether to allow unsynchronized replicas to be elected as leader. valid values: 0 (not allowed), 1 (allowed). default: not allowed.
                     * @return UncleanLeaderElectionEnable Whether to allow unsynchronized replicas to be elected as leader. valid values: 0 (not allowed), 1 (allowed). default: not allowed.
                     * 
                     */
                    int64_t GetUncleanLeaderElectionEnable() const;

                    /**
                     * 设置Whether to allow unsynchronized replicas to be elected as leader. valid values: 0 (not allowed), 1 (allowed). default: not allowed.
                     * @param _uncleanLeaderElectionEnable Whether to allow unsynchronized replicas to be elected as leader. valid values: 0 (not allowed), 1 (allowed). default: not allowed.
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
                     * 获取Optional parameter. specifies the message retention period in milliseconds. current min value is 60000. default value is 7200000 ms (2 hours). maximum value is 7776000000 ms (90 days).
                     * @return RetentionMs Optional parameter. specifies the message retention period in milliseconds. current min value is 60000. default value is 7200000 ms (2 hours). maximum value is 7776000000 ms (90 days).
                     * 
                     */
                    int64_t GetRetentionMs() const;

                    /**
                     * 设置Optional parameter. specifies the message retention period in milliseconds. current min value is 60000. default value is 7200000 ms (2 hours). maximum value is 7776000000 ms (90 days).
                     * @param _retentionMs Optional parameter. specifies the message retention period in milliseconds. current min value is 60000. default value is 7200000 ms (2 hours). maximum value is 7776000000 ms (90 days).
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
                     * 获取Duration of Segment shard scrolling in milliseconds. minimum value is 86400000 ms (1 day).
                     * @return SegmentMs Duration of Segment shard scrolling in milliseconds. minimum value is 86400000 ms (1 day).
                     * 
                     */
                    int64_t GetSegmentMs() const;

                    /**
                     * 设置Duration of Segment shard scrolling in milliseconds. minimum value is 86400000 ms (1 day).
                     * @param _segmentMs Duration of Segment shard scrolling in milliseconds. minimum value is 86400000 ms (1 day).
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
                     * 获取Maximum topic messages in Bytes. value range: 1024 (1 KB) to 12582912 (12 MB).
                     * @return MaxMessageBytes Maximum topic messages in Bytes. value range: 1024 (1 KB) to 12582912 (12 MB).
                     * 
                     */
                    int64_t GetMaxMessageBytes() const;

                    /**
                     * 设置Maximum topic messages in Bytes. value range: 1024 (1 KB) to 12582912 (12 MB).
                     * @param _maxMessageBytes Maximum topic messages in Bytes. value range: 1024 (1 KB) to 12582912 (12 MB).
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
                     * 获取Optional. retain file size. defaults to -1, unit Byte. current min value is 1073741824.
                     * @return RetentionBytes Optional. retain file size. defaults to -1, unit Byte. current min value is 1073741824.
                     * 
                     */
                    int64_t GetRetentionBytes() const;

                    /**
                     * 设置Optional. retain file size. defaults to -1, unit Byte. current min value is 1073741824.
                     * @param _retentionBytes Optional. retain file size. defaults to -1, unit Byte. current min value is 1073741824.
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

                private:

                    /**
                     * Instance Id. you can obtain it by calling the DescribeInstances api.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Can only contain letters, digits, underscores, "-", or ".".
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * Number of partitions, which should be greater than 0
                     */
                    int64_t m_partitionNum;
                    bool m_partitionNumHasBeenSet;

                    /**
                     * Number of replicas, which cannot be higher than the number of brokers. Maximum value: 3
                     */
                    int64_t m_replicaNum;
                    bool m_replicaNumHasBeenSet;

                    /**
                     * IP allowlist switch. 1: enabled, 0: disabled. Default value: 0
                     */
                    int64_t m_enableWhiteList;
                    bool m_enableWhiteListHasBeenSet;

                    /**
                     * IP allowlist list for quota limit, which is required if `enableWhileList` is 1
                     */
                    std::vector<std::string> m_ipWhiteList;
                    bool m_ipWhiteListHasBeenSet;

                    /**
                     * Log cleanup policy, which is `delete` by default. `delete`: logs will be deleted by save time; `compact`: logs will be compressed by key; `compact, delete`: logs will be compressed by key and deleted by save time.
                     */
                    std::string m_cleanUpPolicy;
                    bool m_cleanUpPolicyHasBeenSet;

                    /**
                     * Topic remark is a string of no more than 64 characters. the first character can be a letter or digit, and the remaining part can contain letters, digits, and hyphens (-).
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                    /**
                     * Minimum number of synchronous replicas, defaults to 1.
                     */
                    int64_t m_minInsyncReplicas;
                    bool m_minInsyncReplicasHasBeenSet;

                    /**
                     * Whether to allow unsynchronized replicas to be elected as leader. valid values: 0 (not allowed), 1 (allowed). default: not allowed.
                     */
                    int64_t m_uncleanLeaderElectionEnable;
                    bool m_uncleanLeaderElectionEnableHasBeenSet;

                    /**
                     * Optional parameter. specifies the message retention period in milliseconds. current min value is 60000. default value is 7200000 ms (2 hours). maximum value is 7776000000 ms (90 days).
                     */
                    int64_t m_retentionMs;
                    bool m_retentionMsHasBeenSet;

                    /**
                     * Duration of Segment shard scrolling in milliseconds. minimum value is 86400000 ms (1 day).
                     */
                    int64_t m_segmentMs;
                    bool m_segmentMsHasBeenSet;

                    /**
                     * Maximum topic messages in Bytes. value range: 1024 (1 KB) to 12582912 (12 MB).
                     */
                    int64_t m_maxMessageBytes;
                    bool m_maxMessageBytesHasBeenSet;

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
                     * Optional. retain file size. defaults to -1, unit Byte. current min value is 1073741824.
                     */
                    int64_t m_retentionBytes;
                    bool m_retentionBytesHasBeenSet;

                    /**
                     * Tag list.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATETOPICREQUEST_H_
