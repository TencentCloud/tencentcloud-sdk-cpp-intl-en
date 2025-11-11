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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_TOPICATTRIBUTESRESPONSE_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_TOPICATTRIBUTESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/Config.h>
#include <tencentcloud/ckafka/v20190819/model/TopicPartitionDO.h>
#include <tencentcloud/ckafka/v20190819/model/AclRule.h>
#include <tencentcloud/ckafka/v20190819/model/InstanceQuotaConfigResp.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * Returned topic attributes result entity
                */
                class TopicAttributesResponse : public AbstractModel
                {
                public:
                    TopicAttributesResponse();
                    ~TopicAttributesResponse() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Topic ID
                     * @return TopicId Topic ID
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Topic ID
                     * @param _topicId Topic ID
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取Specifies the unix second-level timestamp of the creation time.
                     * @return CreateTime Specifies the unix second-level timestamp of the creation time.
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置Specifies the unix second-level timestamp of the creation time.
                     * @param _createTime Specifies the unix second-level timestamp of the creation time.
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Describes the topic remark.
                     * @return Note Describes the topic remark.
                     * 
                     */
                    std::string GetNote() const;

                    /**
                     * 设置Describes the topic remark.
                     * @param _note Describes the topic remark.
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
                     * 获取Number of partitions
                     * @return PartitionNum Number of partitions
                     * 
                     */
                    int64_t GetPartitionNum() const;

                    /**
                     * 设置Number of partitions
                     * @param _partitionNum Number of partitions
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
                     * 获取IP allowlist switch. 1: enabled, 0: disabled
                     * @return EnableWhiteList IP allowlist switch. 1: enabled, 0: disabled
                     * 
                     */
                    int64_t GetEnableWhiteList() const;

                    /**
                     * 设置IP allowlist switch. 1: enabled, 0: disabled
                     * @param _enableWhiteList IP allowlist switch. 1: enabled, 0: disabled
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
                     * 获取IP allowlist list
                     * @return IpWhiteList IP allowlist list
                     * 
                     */
                    std::vector<std::string> GetIpWhiteList() const;

                    /**
                     * 设置IP allowlist list
                     * @param _ipWhiteList IP allowlist list
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
                     * 获取Topic configuration array
                     * @return Config Topic configuration array
                     * 
                     */
                    Config GetConfig() const;

                    /**
                     * 设置Topic configuration array
                     * @param _config Topic configuration array
                     * 
                     */
                    void SetConfig(const Config& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取Partition details
                     * @return Partitions Partition details
                     * 
                     */
                    std::vector<TopicPartitionDO> GetPartitions() const;

                    /**
                     * 设置Partition details
                     * @param _partitions Partition details
                     * 
                     */
                    void SetPartitions(const std::vector<TopicPartitionDO>& _partitions);

                    /**
                     * 判断参数 Partitions 是否已赋值
                     * @return Partitions 是否已赋值
                     * 
                     */
                    bool PartitionsHasBeenSet() const;

                    /**
                     * 获取ACL preset policy switch. valid values: 1 (on); 0 (off).
                     * @return EnableAclRule ACL preset policy switch. valid values: 1 (on); 0 (off).
                     * 
                     */
                    int64_t GetEnableAclRule() const;

                    /**
                     * 设置ACL preset policy switch. valid values: 1 (on); 0 (off).
                     * @param _enableAclRule ACL preset policy switch. valid values: 1 (on); 0 (off).
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
                     * 获取Preset policy list.
                     * @return AclRuleList Preset policy list.
                     * 
                     */
                    std::vector<AclRule> GetAclRuleList() const;

                    /**
                     * 设置Preset policy list.
                     * @param _aclRuleList Preset policy list.
                     * 
                     */
                    void SetAclRuleList(const std::vector<AclRule>& _aclRuleList);

                    /**
                     * 判断参数 AclRuleList 是否已赋值
                     * @return AclRuleList 是否已赋值
                     * 
                     */
                    bool AclRuleListHasBeenSet() const;

                    /**
                     * 获取topic throttling policy.
                     * @return QuotaConfig topic throttling policy.
                     * 
                     */
                    InstanceQuotaConfigResp GetQuotaConfig() const;

                    /**
                     * 设置topic throttling policy.
                     * @param _quotaConfig topic throttling policy.
                     * 
                     */
                    void SetQuotaConfig(const InstanceQuotaConfigResp& _quotaConfig);

                    /**
                     * 判断参数 QuotaConfig 是否已赋值
                     * @return QuotaConfig 是否已赋值
                     * 
                     */
                    bool QuotaConfigHasBeenSet() const;

                    /**
                     * 获取Number of replicas
                     * @return ReplicaNum Number of replicas
                     * 
                     */
                    int64_t GetReplicaNum() const;

                    /**
                     * 设置Number of replicas
                     * @param _replicaNum Number of replicas
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
                     * Topic ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Specifies the unix second-level timestamp of the creation time.
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Describes the topic remark.
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                    /**
                     * Number of partitions
                     */
                    int64_t m_partitionNum;
                    bool m_partitionNumHasBeenSet;

                    /**
                     * IP allowlist switch. 1: enabled, 0: disabled
                     */
                    int64_t m_enableWhiteList;
                    bool m_enableWhiteListHasBeenSet;

                    /**
                     * IP allowlist list
                     */
                    std::vector<std::string> m_ipWhiteList;
                    bool m_ipWhiteListHasBeenSet;

                    /**
                     * Topic configuration array
                     */
                    Config m_config;
                    bool m_configHasBeenSet;

                    /**
                     * Partition details
                     */
                    std::vector<TopicPartitionDO> m_partitions;
                    bool m_partitionsHasBeenSet;

                    /**
                     * ACL preset policy switch. valid values: 1 (on); 0 (off).
                     */
                    int64_t m_enableAclRule;
                    bool m_enableAclRuleHasBeenSet;

                    /**
                     * Preset policy list.
                     */
                    std::vector<AclRule> m_aclRuleList;
                    bool m_aclRuleListHasBeenSet;

                    /**
                     * topic throttling policy.
                     */
                    InstanceQuotaConfigResp m_quotaConfig;
                    bool m_quotaConfigHasBeenSet;

                    /**
                     * Number of replicas
                     */
                    int64_t m_replicaNum;
                    bool m_replicaNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_TOPICATTRIBUTESRESPONSE_H_
