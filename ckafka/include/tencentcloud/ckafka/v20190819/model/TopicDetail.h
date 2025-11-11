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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_TOPICDETAIL_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_TOPICDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/Config.h>
#include <tencentcloud/ckafka/v20190819/model/TopicRetentionTimeConfigRsp.h>
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
                * Topic details
                */
                class TopicDetail : public AbstractModel
                {
                public:
                    TopicDetail();
                    ~TopicDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Topic name
                     * @return TopicName Topic name
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置Topic name
                     * @param _topicName Topic name
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
                     * 获取Topic Id.
                     * @return TopicId Topic Id.
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Topic Id.
                     * @param _topicId Topic Id.
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
                     * 获取Number of topic replicas. valid values: 1, 3.
                     * @return ReplicaNum Number of topic replicas. valid values: 1, 3.
                     * 
                     */
                    int64_t GetReplicaNum() const;

                    /**
                     * 设置Number of topic replicas. valid values: 1, 3.
                     * @param _replicaNum Number of topic replicas. valid values: 1, 3.
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
                     * 获取Remarks.
                     * @return Note Remarks.
                     * 
                     */
                    std::string GetNote() const;

                    /**
                     * 设置Remarks.
                     * @param _note Remarks.
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
                     * 获取Creation time
                     * @return CreateTime Creation time
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param _createTime Creation time
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
                     * 获取Whether to enable IP authentication allowlist. true: yes, false: no
                     * @return EnableWhiteList Whether to enable IP authentication allowlist. true: yes, false: no
                     * 
                     */
                    bool GetEnableWhiteList() const;

                    /**
                     * 设置Whether to enable IP authentication allowlist. true: yes, false: no
                     * @param _enableWhiteList Whether to enable IP authentication allowlist. true: yes, false: no
                     * 
                     */
                    void SetEnableWhiteList(const bool& _enableWhiteList);

                    /**
                     * 判断参数 EnableWhiteList 是否已赋值
                     * @return EnableWhiteList 是否已赋值
                     * 
                     */
                    bool EnableWhiteListHasBeenSet() const;

                    /**
                     * 获取Number of IPs in IP allowlist
                     * @return IpWhiteListCount Number of IPs in IP allowlist
                     * 
                     */
                    int64_t GetIpWhiteListCount() const;

                    /**
                     * 设置Number of IPs in IP allowlist
                     * @param _ipWhiteListCount Number of IPs in IP allowlist
                     * 
                     */
                    void SetIpWhiteListCount(const int64_t& _ipWhiteListCount);

                    /**
                     * 判断参数 IpWhiteListCount 是否已赋值
                     * @return IpWhiteListCount 是否已赋值
                     * 
                     */
                    bool IpWhiteListCountHasBeenSet() const;

                    /**
                     * 获取Data backup cos bucket. specifies the bucket address for archiving to cos.
                     * @return ForwardCosBucket Data backup cos bucket. specifies the bucket address for archiving to cos.
                     * 
                     */
                    std::string GetForwardCosBucket() const;

                    /**
                     * 设置Data backup cos bucket. specifies the bucket address for archiving to cos.
                     * @param _forwardCosBucket Data backup cos bucket. specifies the bucket address for archiving to cos.
                     * 
                     */
                    void SetForwardCosBucket(const std::string& _forwardCosBucket);

                    /**
                     * 判断参数 ForwardCosBucket 是否已赋值
                     * @return ForwardCosBucket 是否已赋值
                     * 
                     */
                    bool ForwardCosBucketHasBeenSet() const;

                    /**
                     * 获取Status of data backup to COS. 1: not enabled, 0: enabled
                     * @return ForwardStatus Status of data backup to COS. 1: not enabled, 0: enabled
                     * 
                     */
                    int64_t GetForwardStatus() const;

                    /**
                     * 设置Status of data backup to COS. 1: not enabled, 0: enabled
                     * @param _forwardStatus Status of data backup to COS. 1: not enabled, 0: enabled
                     * 
                     */
                    void SetForwardStatus(const int64_t& _forwardStatus);

                    /**
                     * 判断参数 ForwardStatus 是否已赋值
                     * @return ForwardStatus 是否已赋值
                     * 
                     */
                    bool ForwardStatusHasBeenSet() const;

                    /**
                     * 获取Frequency of data backup to COS
                     * @return ForwardInterval Frequency of data backup to COS
                     * 
                     */
                    int64_t GetForwardInterval() const;

                    /**
                     * 设置Frequency of data backup to COS
                     * @param _forwardInterval Frequency of data backup to COS
                     * 
                     */
                    void SetForwardInterval(const int64_t& _forwardInterval);

                    /**
                     * 判断参数 ForwardInterval 是否已赋值
                     * @return ForwardInterval 是否已赋值
                     * 
                     */
                    bool ForwardIntervalHasBeenSet() const;

                    /**
                     * 获取Advanced configuration.
                     * @return Config Advanced configuration.
                     * 
                     */
                    Config GetConfig() const;

                    /**
                     * 设置Advanced configuration.
                     * @param _config Advanced configuration.
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
                     * 获取Message retention period configuration (used for dynamic configuration change records).
                     * @return RetentionTimeConfig Message retention period configuration (used for dynamic configuration change records).
                     * 
                     */
                    TopicRetentionTimeConfigRsp GetRetentionTimeConfig() const;

                    /**
                     * 设置Message retention period configuration (used for dynamic configuration change records).
                     * @param _retentionTimeConfig Message retention period configuration (used for dynamic configuration change records).
                     * 
                     */
                    void SetRetentionTimeConfig(const TopicRetentionTimeConfigRsp& _retentionTimeConfig);

                    /**
                     * 判断参数 RetentionTimeConfig 是否已赋值
                     * @return RetentionTimeConfig 是否已赋值
                     * 
                     */
                    bool RetentionTimeConfigHasBeenSet() const;

                    /**
                     * 获取0: normal. 1: deleted. 2: deleting.
                     * @return Status 0: normal. 1: deleted. 2: deleting.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置0: normal. 1: deleted. 2: deleting.
                     * @param _status 0: normal. 1: deleted. 2: deleting.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Tag list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tags Tag list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tags Tag list
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Topic name
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * Topic Id.
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Number of partitions
                     */
                    int64_t m_partitionNum;
                    bool m_partitionNumHasBeenSet;

                    /**
                     * Number of topic replicas. valid values: 1, 3.
                     */
                    int64_t m_replicaNum;
                    bool m_replicaNumHasBeenSet;

                    /**
                     * Remarks.
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                    /**
                     * Creation time
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Whether to enable IP authentication allowlist. true: yes, false: no
                     */
                    bool m_enableWhiteList;
                    bool m_enableWhiteListHasBeenSet;

                    /**
                     * Number of IPs in IP allowlist
                     */
                    int64_t m_ipWhiteListCount;
                    bool m_ipWhiteListCountHasBeenSet;

                    /**
                     * Data backup cos bucket. specifies the bucket address for archiving to cos.
                     */
                    std::string m_forwardCosBucket;
                    bool m_forwardCosBucketHasBeenSet;

                    /**
                     * Status of data backup to COS. 1: not enabled, 0: enabled
                     */
                    int64_t m_forwardStatus;
                    bool m_forwardStatusHasBeenSet;

                    /**
                     * Frequency of data backup to COS
                     */
                    int64_t m_forwardInterval;
                    bool m_forwardIntervalHasBeenSet;

                    /**
                     * Advanced configuration.
                     */
                    Config m_config;
                    bool m_configHasBeenSet;

                    /**
                     * Message retention period configuration (used for dynamic configuration change records).
                     */
                    TopicRetentionTimeConfigRsp m_retentionTimeConfig;
                    bool m_retentionTimeConfigHasBeenSet;

                    /**
                     * 0: normal. 1: deleted. 2: deleting.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Tag list
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_TOPICDETAIL_H_
