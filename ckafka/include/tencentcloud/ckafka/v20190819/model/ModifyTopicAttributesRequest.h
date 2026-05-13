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
                     * 获取<p>ckafka cluster instance Id</p><p>For reference: <a href="https://www.tencentcloud.com/document/api/597/40835?from_cn_redirect=1">DescribeInstances</a></p>
                     * @return InstanceId <p>ckafka cluster instance Id</p><p>For reference: <a href="https://www.tencentcloud.com/document/api/597/40835?from_cn_redirect=1">DescribeInstances</a></p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>ckafka cluster instance Id</p><p>For reference: <a href="https://www.tencentcloud.com/document/api/597/40835?from_cn_redirect=1">DescribeInstances</a></p>
                     * @param _instanceId <p>ckafka cluster instance Id</p><p>For reference: <a href="https://www.tencentcloud.com/document/api/597/40835?from_cn_redirect=1">DescribeInstances</a></p>
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
                     * 获取<p>Topic name</p>
                     * @return TopicName <p>Topic name</p>
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置<p>Topic name</p>
                     * @param _topicName <p>Topic name</p>
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
                     * 获取<p>Topic remark</p><p>Input parameter limit: no more than 64 characters</p><p>Default value: ""</p>
                     * @return Note <p>Topic remark</p><p>Input parameter limit: no more than 64 characters</p><p>Default value: ""</p>
                     * 
                     */
                    std::string GetNote() const;

                    /**
                     * 设置<p>Topic remark</p><p>Input parameter limit: no more than 64 characters</p><p>Default value: ""</p>
                     * @param _note <p>Topic remark</p><p>Input parameter limit: no more than 64 characters</p><p>Default value: ""</p>
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
                     * 获取<p>IP allowlist switch, 1: on; 0: off.</p>
                     * @return EnableWhiteList <p>IP allowlist switch, 1: on; 0: off.</p>
                     * 
                     */
                    int64_t GetEnableWhiteList() const;

                    /**
                     * 设置<p>IP allowlist switch, 1: on; 0: off.</p>
                     * @param _enableWhiteList <p>IP allowlist switch, 1: on; 0: off.</p>
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
                     * 获取<p>Whether to allow unsynchronized replicas to be elected as leader</p><p>Enumeration value:</p><ul><li>0: Not allowed</li><li>1: Allowed</li></ul><p>Default value: 0</p>
                     * @return UncleanLeaderElectionEnable <p>Whether to allow unsynchronized replicas to be elected as leader</p><p>Enumeration value:</p><ul><li>0: Not allowed</li><li>1: Allowed</li></ul><p>Default value: 0</p>
                     * 
                     */
                    int64_t GetUncleanLeaderElectionEnable() const;

                    /**
                     * 设置<p>Whether to allow unsynchronized replicas to be elected as leader</p><p>Enumeration value:</p><ul><li>0: Not allowed</li><li>1: Allowed</li></ul><p>Default value: 0</p>
                     * @param _uncleanLeaderElectionEnable <p>Whether to allow unsynchronized replicas to be elected as leader</p><p>Enumeration value:</p><ul><li>0: Not allowed</li><li>1: Allowed</li></ul><p>Default value: 0</p>
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
                     * 获取<p>Duration of Segment shard scrolling</p><p>Unit: ms</p><p>Default value: 86400000</p><p>Minimum value: 86400000ms (1 day)</p>
                     * @return RetentionMs <p>Duration of Segment shard scrolling</p><p>Unit: ms</p><p>Default value: 86400000</p><p>Minimum value: 86400000ms (1 day)</p>
                     * 
                     */
                    int64_t GetRetentionMs() const;

                    /**
                     * 设置<p>Duration of Segment shard scrolling</p><p>Unit: ms</p><p>Default value: 86400000</p><p>Minimum value: 86400000ms (1 day)</p>
                     * @param _retentionMs <p>Duration of Segment shard scrolling</p><p>Unit: ms</p><p>Default value: 86400000</p><p>Minimum value: 86400000ms (1 day)</p>
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
                     * 获取<p>Maximum topic messages</p><p>Value ranges from 1024 to 12582912</p><p>Unit: Bytes</p>
                     * @return MaxMessageBytes <p>Maximum topic messages</p><p>Value ranges from 1024 to 12582912</p><p>Unit: Bytes</p>
                     * 
                     */
                    int64_t GetMaxMessageBytes() const;

                    /**
                     * 设置<p>Maximum topic messages</p><p>Value ranges from 1024 to 12582912</p><p>Unit: Bytes</p>
                     * @param _maxMessageBytes <p>Maximum topic messages</p><p>Value ranges from 1024 to 12582912</p><p>Unit: Bytes</p>
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
                     * 获取<p>Duration of Segment fragment scrolling</p><p>Unit: ms</p><p>Minimum value: 86400000ms (1 day)</p>
                     * @return SegmentMs <p>Duration of Segment fragment scrolling</p><p>Unit: ms</p><p>Minimum value: 86400000ms (1 day)</p>
                     * 
                     */
                    int64_t GetSegmentMs() const;

                    /**
                     * 设置<p>Duration of Segment fragment scrolling</p><p>Unit: ms</p><p>Minimum value: 86400000ms (1 day)</p>
                     * @param _segmentMs <p>Duration of Segment fragment scrolling</p><p>Unit: ms</p><p>Minimum value: 86400000ms (1 day)</p>
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
                     * 获取<p>Message deletion strategy: choose delete or compact</p>
                     * @return CleanUpPolicy <p>Message deletion strategy: choose delete or compact</p>
                     * 
                     */
                    std::string GetCleanUpPolicy() const;

                    /**
                     * 设置<p>Message deletion strategy: choose delete or compact</p>
                     * @param _cleanUpPolicy <p>Message deletion strategy: choose delete or compact</p>
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
                     * 获取<p>ACL rule name</p>
                     * @return AclRuleName <p>ACL rule name</p>
                     * 
                     */
                    std::string GetAclRuleName() const;

                    /**
                     * 设置<p>ACL rule name</p>
                     * @param _aclRuleName <p>ACL rule name</p>
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
                     * 获取<p>Option, retain file size</p><p>Value ranges from [1073741824, 1099511627776]</p><p>Unit: Bytes</p><p>Default value: -1</p><p>Special value: -1 indicates unlimited</p>
                     * @return RetentionBytes <p>Option, retain file size</p><p>Value ranges from [1073741824, 1099511627776]</p><p>Unit: Bytes</p><p>Default value: -1</p><p>Special value: -1 indicates unlimited</p>
                     * 
                     */
                    int64_t GetRetentionBytes() const;

                    /**
                     * 设置<p>Option, retain file size</p><p>Value ranges from [1073741824, 1099511627776]</p><p>Unit: Bytes</p><p>Default value: -1</p><p>Special value: -1 indicates unlimited</p>
                     * @param _retentionBytes <p>Option, retain file size</p><p>Value ranges from [1073741824, 1099511627776]</p><p>Unit: Bytes</p><p>Default value: -1</p><p>Special value: -1 indicates unlimited</p>
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
                     * 获取<p>Production traffic throttling in MB/s. Set to -1 for unlimited production traffic throttling.</p>
                     * @return QuotaProducerByteRate <p>Production traffic throttling in MB/s. Set to -1 for unlimited production traffic throttling.</p>
                     * 
                     */
                    int64_t GetQuotaProducerByteRate() const;

                    /**
                     * 设置<p>Production traffic throttling in MB/s. Set to -1 for unlimited production traffic throttling.</p>
                     * @param _quotaProducerByteRate <p>Production traffic throttling in MB/s. Set to -1 for unlimited production traffic throttling.</p>
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
                     * 获取<p>Consumption throttling, unit MB/s; set to -1 for unlimited consumption throttling.</p>
                     * @return QuotaConsumerByteRate <p>Consumption throttling, unit MB/s; set to -1 for unlimited consumption throttling.</p>
                     * 
                     */
                    int64_t GetQuotaConsumerByteRate() const;

                    /**
                     * 设置<p>Consumption throttling, unit MB/s; set to -1 for unlimited consumption throttling.</p>
                     * @param _quotaConsumerByteRate <p>Consumption throttling, unit MB/s; set to -1 for unlimited consumption throttling.</p>
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
                     * 获取<p>topic replica count Minimum value: 1, Maximum value: 3</p>
                     * @return ReplicaNum <p>topic replica count Minimum value: 1, Maximum value: 3</p>
                     * 
                     */
                    int64_t GetReplicaNum() const;

                    /**
                     * 设置<p>topic replica count Minimum value: 1, Maximum value: 3</p>
                     * @param _replicaNum <p>topic replica count Minimum value: 1, Maximum value: 3</p>
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
                     * <p>ckafka cluster instance Id</p><p>For reference: <a href="https://www.tencentcloud.com/document/api/597/40835?from_cn_redirect=1">DescribeInstances</a></p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Topic name</p>
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * <p>Topic remark</p><p>Input parameter limit: no more than 64 characters</p><p>Default value: ""</p>
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                    /**
                     * <p>IP allowlist switch, 1: on; 0: off.</p>
                     */
                    int64_t m_enableWhiteList;
                    bool m_enableWhiteListHasBeenSet;

                    /**
                     * <p>Minimum sync replica count</p><p>Default value: 1</p><p>Minimum value: 1</p>
                     */
                    int64_t m_minInsyncReplicas;
                    bool m_minInsyncReplicasHasBeenSet;

                    /**
                     * <p>Whether to allow unsynchronized replicas to be elected as leader</p><p>Enumeration value:</p><ul><li>0: Not allowed</li><li>1: Allowed</li></ul><p>Default value: 0</p>
                     */
                    int64_t m_uncleanLeaderElectionEnable;
                    bool m_uncleanLeaderElectionEnableHasBeenSet;

                    /**
                     * <p>Duration of Segment shard scrolling</p><p>Unit: ms</p><p>Default value: 86400000</p><p>Minimum value: 86400000ms (1 day)</p>
                     */
                    int64_t m_retentionMs;
                    bool m_retentionMsHasBeenSet;

                    /**
                     * <p>Maximum topic messages</p><p>Value ranges from 1024 to 12582912</p><p>Unit: Bytes</p>
                     */
                    int64_t m_maxMessageBytes;
                    bool m_maxMessageBytesHasBeenSet;

                    /**
                     * <p>Duration of Segment fragment scrolling</p><p>Unit: ms</p><p>Minimum value: 86400000ms (1 day)</p>
                     */
                    int64_t m_segmentMs;
                    bool m_segmentMsHasBeenSet;

                    /**
                     * <p>Message deletion strategy: choose delete or compact</p>
                     */
                    std::string m_cleanUpPolicy;
                    bool m_cleanUpPolicyHasBeenSet;

                    /**
                     * <p>Ip whitelist, Quota limit, essential when enableWhileList=1</p>
                     */
                    std::vector<std::string> m_ipWhiteList;
                    bool m_ipWhiteListHasBeenSet;

                    /**
                     * <p>Preset ACL rule, 1: on 0: off, default is off</p>
                     */
                    int64_t m_enableAclRule;
                    bool m_enableAclRuleHasBeenSet;

                    /**
                     * <p>ACL rule name</p>
                     */
                    std::string m_aclRuleName;
                    bool m_aclRuleNameHasBeenSet;

                    /**
                     * <p>Option, retain file size</p><p>Value ranges from [1073741824, 1099511627776]</p><p>Unit: Bytes</p><p>Default value: -1</p><p>Special value: -1 indicates unlimited</p>
                     */
                    int64_t m_retentionBytes;
                    bool m_retentionBytesHasBeenSet;

                    /**
                     * <p>Tag list</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>Production traffic throttling in MB/s. Set to -1 for unlimited production traffic throttling.</p>
                     */
                    int64_t m_quotaProducerByteRate;
                    bool m_quotaProducerByteRateHasBeenSet;

                    /**
                     * <p>Consumption throttling, unit MB/s; set to -1 for unlimited consumption throttling.</p>
                     */
                    int64_t m_quotaConsumerByteRate;
                    bool m_quotaConsumerByteRateHasBeenSet;

                    /**
                     * <p>topic replica count Minimum value: 1, Maximum value: 3</p>
                     */
                    int64_t m_replicaNum;
                    bool m_replicaNumHasBeenSet;

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

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYTOPICATTRIBUTESREQUEST_H_
