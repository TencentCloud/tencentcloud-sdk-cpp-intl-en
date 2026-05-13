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
                     * 获取<p>Instance Id</p><p>For reference: <a href="https://www.tencentcloud.com/document/api/597/40835?from_cn_redirect=1">DescribeInstances</a></p>
                     * @return InstanceId <p>Instance Id</p><p>For reference: <a href="https://www.tencentcloud.com/document/api/597/40835?from_cn_redirect=1">DescribeInstances</a></p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance Id</p><p>For reference: <a href="https://www.tencentcloud.com/document/api/597/40835?from_cn_redirect=1">DescribeInstances</a></p>
                     * @param _instanceId <p>Instance Id</p><p>For reference: <a href="https://www.tencentcloud.com/document/api/597/40835?from_cn_redirect=1">DescribeInstances</a></p>
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
                     * 获取<p>Can only contain letters, digits, underscore, "-", ".". </p>
                     * @return TopicName <p>Can only contain letters, digits, underscore, "-", ".". </p>
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置<p>Can only contain letters, digits, underscore, "-", ".". </p>
                     * @param _topicName <p>Can only contain letters, digits, underscore, "-", ".". </p>
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
                     * 获取<p>Number of partitions, more than 0</p>
                     * @return PartitionNum <p>Number of partitions, more than 0</p>
                     * 
                     */
                    int64_t GetPartitionNum() const;

                    /**
                     * 设置<p>Number of partitions, more than 0</p>
                     * @param _partitionNum <p>Number of partitions, more than 0</p>
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
                     * 获取<p>Replica count cannot be over the number of brokers, with a maximum of 3</p>
                     * @return ReplicaNum <p>Replica count cannot be over the number of brokers, with a maximum of 3</p>
                     * 
                     */
                    int64_t GetReplicaNum() const;

                    /**
                     * 设置<p>Replica count cannot be over the number of brokers, with a maximum of 3</p>
                     * @param _replicaNum <p>Replica count cannot be over the number of brokers, with a maximum of 3</p>
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
                     * 获取<p>ip allowlist switch, 1: on; 0: off, default off</p>
                     * @return EnableWhiteList <p>ip allowlist switch, 1: on; 0: off, default off</p>
                     * 
                     */
                    int64_t GetEnableWhiteList() const;

                    /**
                     * 设置<p>ip allowlist switch, 1: on; 0: off, default off</p>
                     * @param _enableWhiteList <p>ip allowlist switch, 1: on; 0: off, default off</p>
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
                     * 获取<p>Ip whitelist, Quota limit, essential when enableWhileList=1</p>
                     * @return IpWhiteList <p>Ip whitelist, Quota limit, essential when enableWhileList=1</p>
                     * 
                     */
                    std::vector<std::string> GetIpWhiteList() const;

                    /**
                     * 设置<p>Ip whitelist, Quota limit, essential when enableWhileList=1</p>
                     * @param _ipWhiteList <p>Ip whitelist, Quota limit, essential when enableWhileList=1</p>
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
                     * 获取<p>Log cleanup policy. Log cleanup mode, defaults to "delete". "delete": logs are deleted by retention time. "compact": logs are compressed by key. "compact, delete": logs are compressed by key and deleted by retention time.</p>
                     * @return CleanUpPolicy <p>Log cleanup policy. Log cleanup mode, defaults to "delete". "delete": logs are deleted by retention time. "compact": logs are compressed by key. "compact, delete": logs are compressed by key and deleted by retention time.</p>
                     * 
                     */
                    std::string GetCleanUpPolicy() const;

                    /**
                     * 设置<p>Log cleanup policy. Log cleanup mode, defaults to "delete". "delete": logs are deleted by retention time. "compact": logs are compressed by key. "compact, delete": logs are compressed by key and deleted by retention time.</p>
                     * @param _cleanUpPolicy <p>Log cleanup policy. Log cleanup mode, defaults to "delete". "delete": logs are deleted by retention time. "compact": logs are compressed by key. "compact, delete": logs are compressed by key and deleted by retention time.</p>
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
                     * 获取<p>Topic remark</p><p>Input parameter limit: No more than 64 characters</p>
                     * @return Note <p>Topic remark</p><p>Input parameter limit: No more than 64 characters</p>
                     * 
                     */
                    std::string GetNote() const;

                    /**
                     * 设置<p>Topic remark</p><p>Input parameter limit: No more than 64 characters</p>
                     * @param _note <p>Topic remark</p><p>Input parameter limit: No more than 64 characters</p>
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
                     * 获取<p>Minimum sync replica count</p><p>Default value: 1</p><p>Minimum value: 1</p>
                     * @return MinInsyncReplicas <p>Minimum sync replica count</p><p>Default value: 1</p><p>Minimum value: 1</p>
                     * 
                     */
                    int64_t GetMinInsyncReplicas() const;

                    /**
                     * 设置<p>Minimum sync replica count</p><p>Default value: 1</p><p>Minimum value: 1</p>
                     * @param _minInsyncReplicas <p>Minimum sync replica count</p><p>Default value: 1</p><p>Minimum value: 1</p>
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
                     * 获取<p>Whether to allow unsynchronized replicas to be elected as leader, 0: not allowed, 1: allowed, default not allowed</p>
                     * @return UncleanLeaderElectionEnable <p>Whether to allow unsynchronized replicas to be elected as leader, 0: not allowed, 1: allowed, default not allowed</p>
                     * 
                     */
                    int64_t GetUncleanLeaderElectionEnable() const;

                    /**
                     * 设置<p>Whether to allow unsynchronized replicas to be elected as leader, 0: not allowed, 1: allowed, default not allowed</p>
                     * @param _uncleanLeaderElectionEnable <p>Whether to allow unsynchronized replicas to be elected as leader, 0: not allowed, 1: allowed, default not allowed</p>
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
                     * 获取<p>Optional parameter, message retention period</p><p>Value ranges from 60000 to 7776000000</p><p>Unit: ms</p><p>Default value: 7200000</p>
                     * @return RetentionMs <p>Optional parameter, message retention period</p><p>Value ranges from 60000 to 7776000000</p><p>Unit: ms</p><p>Default value: 7200000</p>
                     * 
                     */
                    int64_t GetRetentionMs() const;

                    /**
                     * 设置<p>Optional parameter, message retention period</p><p>Value ranges from 60000 to 7776000000</p><p>Unit: ms</p><p>Default value: 7200000</p>
                     * @param _retentionMs <p>Optional parameter, message retention period</p><p>Value ranges from 60000 to 7776000000</p><p>Unit: ms</p><p>Default value: 7200000</p>
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
                     * 获取<p>Duration of Segment shard scrolling</p><p>Unit: ms</p><p>Default value: 86400000</p><p>Minimum value: 86400000ms (1 day)</p>
                     * @return SegmentMs <p>Duration of Segment shard scrolling</p><p>Unit: ms</p><p>Default value: 86400000</p><p>Minimum value: 86400000ms (1 day)</p>
                     * 
                     */
                    int64_t GetSegmentMs() const;

                    /**
                     * 设置<p>Duration of Segment shard scrolling</p><p>Unit: ms</p><p>Default value: 86400000</p><p>Minimum value: 86400000ms (1 day)</p>
                     * @param _segmentMs <p>Duration of Segment shard scrolling</p><p>Unit: ms</p><p>Default value: 86400000</p><p>Minimum value: 86400000ms (1 day)</p>
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
                     * 获取<p>Maximum topic messages in Bytes, minimum value 1024 Bytes (1 KB), maximum value 12582912 Bytes (12 MB)</p>
                     * @return MaxMessageBytes <p>Maximum topic messages in Bytes, minimum value 1024 Bytes (1 KB), maximum value 12582912 Bytes (12 MB)</p>
                     * 
                     */
                    int64_t GetMaxMessageBytes() const;

                    /**
                     * 设置<p>Maximum topic messages in Bytes, minimum value 1024 Bytes (1 KB), maximum value 12582912 Bytes (12 MB)</p>
                     * @param _maxMessageBytes <p>Maximum topic messages in Bytes, minimum value 1024 Bytes (1 KB), maximum value 12582912 Bytes (12 MB)</p>
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
                     * 获取<p>Preset ACL rule, 1: on 0: off, default is off</p>
                     * @return EnableAclRule <p>Preset ACL rule, 1: on 0: off, default is off</p>
                     * 
                     */
                    int64_t GetEnableAclRule() const;

                    /**
                     * 设置<p>Preset ACL rule, 1: on 0: off, default is off</p>
                     * @param _enableAclRule <p>Preset ACL rule, 1: on 0: off, default is off</p>
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
                     * 获取<p>Preset ACL rule name</p>
                     * @return AclRuleName <p>Preset ACL rule name</p>
                     * 
                     */
                    std::string GetAclRuleName() const;

                    /**
                     * 设置<p>Preset ACL rule name</p>
                     * @param _aclRuleName <p>Preset ACL rule name</p>
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
                     * 获取<p>Option, retain file size. Defaults to -1, unit Byte, current min value is 1073741824.</p><p>Value ranges from [1073741824, 1099511627776]</p><p>Unit: Byte</p><p>Special value: -1 indicates unlimited</p>
                     * @return RetentionBytes <p>Option, retain file size. Defaults to -1, unit Byte, current min value is 1073741824.</p><p>Value ranges from [1073741824, 1099511627776]</p><p>Unit: Byte</p><p>Special value: -1 indicates unlimited</p>
                     * 
                     */
                    int64_t GetRetentionBytes() const;

                    /**
                     * 设置<p>Option, retain file size. Defaults to -1, unit Byte, current min value is 1073741824.</p><p>Value ranges from [1073741824, 1099511627776]</p><p>Unit: Byte</p><p>Special value: -1 indicates unlimited</p>
                     * @param _retentionBytes <p>Option, retain file size. Defaults to -1, unit Byte, current min value is 1073741824.</p><p>Value ranges from [1073741824, 1099511627776]</p><p>Unit: Byte</p><p>Special value: -1 indicates unlimited</p>
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
                     * 获取<p>Tag list</p>
                     * @return Tags <p>Tag list</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>Tag list</p>
                     * @param _tags <p>Tag list</p>
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
                     * 获取<p>Time type for message saving: CreateTime/LogAppendTime</p>
                     * @return LogMsgTimestampType <p>Time type for message saving: CreateTime/LogAppendTime</p>
                     * 
                     */
                    std::string GetLogMsgTimestampType() const;

                    /**
                     * 设置<p>Time type for message saving: CreateTime/LogAppendTime</p>
                     * @param _logMsgTimestampType <p>Time type for message saving: CreateTime/LogAppendTime</p>
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
                     * <p>Instance Id</p><p>For reference: <a href="https://www.tencentcloud.com/document/api/597/40835?from_cn_redirect=1">DescribeInstances</a></p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Can only contain letters, digits, underscore, "-", ".". </p>
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * <p>Number of partitions, more than 0</p>
                     */
                    int64_t m_partitionNum;
                    bool m_partitionNumHasBeenSet;

                    /**
                     * <p>Replica count cannot be over the number of brokers, with a maximum of 3</p>
                     */
                    int64_t m_replicaNum;
                    bool m_replicaNumHasBeenSet;

                    /**
                     * <p>ip allowlist switch, 1: on; 0: off, default off</p>
                     */
                    int64_t m_enableWhiteList;
                    bool m_enableWhiteListHasBeenSet;

                    /**
                     * <p>Ip whitelist, Quota limit, essential when enableWhileList=1</p>
                     */
                    std::vector<std::string> m_ipWhiteList;
                    bool m_ipWhiteListHasBeenSet;

                    /**
                     * <p>Log cleanup policy. Log cleanup mode, defaults to "delete". "delete": logs are deleted by retention time. "compact": logs are compressed by key. "compact, delete": logs are compressed by key and deleted by retention time.</p>
                     */
                    std::string m_cleanUpPolicy;
                    bool m_cleanUpPolicyHasBeenSet;

                    /**
                     * <p>Topic remark</p><p>Input parameter limit: No more than 64 characters</p>
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                    /**
                     * <p>Minimum sync replica count</p><p>Default value: 1</p><p>Minimum value: 1</p>
                     */
                    int64_t m_minInsyncReplicas;
                    bool m_minInsyncReplicasHasBeenSet;

                    /**
                     * <p>Whether to allow unsynchronized replicas to be elected as leader, 0: not allowed, 1: allowed, default not allowed</p>
                     */
                    int64_t m_uncleanLeaderElectionEnable;
                    bool m_uncleanLeaderElectionEnableHasBeenSet;

                    /**
                     * <p>Optional parameter, message retention period</p><p>Value ranges from 60000 to 7776000000</p><p>Unit: ms</p><p>Default value: 7200000</p>
                     */
                    int64_t m_retentionMs;
                    bool m_retentionMsHasBeenSet;

                    /**
                     * <p>Duration of Segment shard scrolling</p><p>Unit: ms</p><p>Default value: 86400000</p><p>Minimum value: 86400000ms (1 day)</p>
                     */
                    int64_t m_segmentMs;
                    bool m_segmentMsHasBeenSet;

                    /**
                     * <p>Maximum topic messages in Bytes, minimum value 1024 Bytes (1 KB), maximum value 12582912 Bytes (12 MB)</p>
                     */
                    int64_t m_maxMessageBytes;
                    bool m_maxMessageBytesHasBeenSet;

                    /**
                     * <p>Preset ACL rule, 1: on 0: off, default is off</p>
                     */
                    int64_t m_enableAclRule;
                    bool m_enableAclRuleHasBeenSet;

                    /**
                     * <p>Preset ACL rule name</p>
                     */
                    std::string m_aclRuleName;
                    bool m_aclRuleNameHasBeenSet;

                    /**
                     * <p>Option, retain file size. Defaults to -1, unit Byte, current min value is 1073741824.</p><p>Value ranges from [1073741824, 1099511627776]</p><p>Unit: Byte</p><p>Special value: -1 indicates unlimited</p>
                     */
                    int64_t m_retentionBytes;
                    bool m_retentionBytesHasBeenSet;

                    /**
                     * <p>Tag list</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>Time type for message saving: CreateTime/LogAppendTime</p>
                     */
                    std::string m_logMsgTimestampType;
                    bool m_logMsgTimestampTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATETOPICREQUEST_H_
