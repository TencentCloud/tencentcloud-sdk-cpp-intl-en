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
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置Topic name
                     * @param TopicName Topic name
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取Topic ID
                     * @return TopicId Topic ID
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Topic ID
                     * @param TopicId Topic ID
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取Number of partitions
                     * @return PartitionNum Number of partitions
                     */
                    int64_t GetPartitionNum() const;

                    /**
                     * 设置Number of partitions
                     * @param PartitionNum Number of partitions
                     */
                    void SetPartitionNum(const int64_t& _partitionNum);

                    /**
                     * 判断参数 PartitionNum 是否已赋值
                     * @return PartitionNum 是否已赋值
                     */
                    bool PartitionNumHasBeenSet() const;

                    /**
                     * 获取Number of replicas
                     * @return ReplicaNum Number of replicas
                     */
                    int64_t GetReplicaNum() const;

                    /**
                     * 设置Number of replicas
                     * @param ReplicaNum Number of replicas
                     */
                    void SetReplicaNum(const int64_t& _replicaNum);

                    /**
                     * 判断参数 ReplicaNum 是否已赋值
                     * @return ReplicaNum 是否已赋值
                     */
                    bool ReplicaNumHasBeenSet() const;

                    /**
                     * 获取Remarks
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Note Remarks
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetNote() const;

                    /**
                     * 设置Remarks
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Note Remarks
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetNote(const std::string& _note);

                    /**
                     * 判断参数 Note 是否已赋值
                     * @return Note 是否已赋值
                     */
                    bool NoteHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateTime Creation time
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param CreateTime Creation time
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Whether to enable IP authentication allowlist. true: yes, false: no
                     * @return EnableWhiteList Whether to enable IP authentication allowlist. true: yes, false: no
                     */
                    bool GetEnableWhiteList() const;

                    /**
                     * 设置Whether to enable IP authentication allowlist. true: yes, false: no
                     * @param EnableWhiteList Whether to enable IP authentication allowlist. true: yes, false: no
                     */
                    void SetEnableWhiteList(const bool& _enableWhiteList);

                    /**
                     * 判断参数 EnableWhiteList 是否已赋值
                     * @return EnableWhiteList 是否已赋值
                     */
                    bool EnableWhiteListHasBeenSet() const;

                    /**
                     * 获取Number of IPs in IP allowlist
                     * @return IpWhiteListCount Number of IPs in IP allowlist
                     */
                    int64_t GetIpWhiteListCount() const;

                    /**
                     * 设置Number of IPs in IP allowlist
                     * @param IpWhiteListCount Number of IPs in IP allowlist
                     */
                    void SetIpWhiteListCount(const int64_t& _ipWhiteListCount);

                    /**
                     * 判断参数 IpWhiteListCount 是否已赋值
                     * @return IpWhiteListCount 是否已赋值
                     */
                    bool IpWhiteListCountHasBeenSet() const;

                    /**
                     * 获取COS bucket for data backup: address of the destination COS bucket
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ForwardCosBucket COS bucket for data backup: address of the destination COS bucket
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetForwardCosBucket() const;

                    /**
                     * 设置COS bucket for data backup: address of the destination COS bucket
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ForwardCosBucket COS bucket for data backup: address of the destination COS bucket
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetForwardCosBucket(const std::string& _forwardCosBucket);

                    /**
                     * 判断参数 ForwardCosBucket 是否已赋值
                     * @return ForwardCosBucket 是否已赋值
                     */
                    bool ForwardCosBucketHasBeenSet() const;

                    /**
                     * 获取Status of data backup to COS. 1: not enabled, 0: enabled
                     * @return ForwardStatus Status of data backup to COS. 1: not enabled, 0: enabled
                     */
                    int64_t GetForwardStatus() const;

                    /**
                     * 设置Status of data backup to COS. 1: not enabled, 0: enabled
                     * @param ForwardStatus Status of data backup to COS. 1: not enabled, 0: enabled
                     */
                    void SetForwardStatus(const int64_t& _forwardStatus);

                    /**
                     * 判断参数 ForwardStatus 是否已赋值
                     * @return ForwardStatus 是否已赋值
                     */
                    bool ForwardStatusHasBeenSet() const;

                    /**
                     * 获取Frequency of data backup to COS
                     * @return ForwardInterval Frequency of data backup to COS
                     */
                    int64_t GetForwardInterval() const;

                    /**
                     * 设置Frequency of data backup to COS
                     * @param ForwardInterval Frequency of data backup to COS
                     */
                    void SetForwardInterval(const int64_t& _forwardInterval);

                    /**
                     * 判断参数 ForwardInterval 是否已赋值
                     * @return ForwardInterval 是否已赋值
                     */
                    bool ForwardIntervalHasBeenSet() const;

                    /**
                     * 获取Advanced configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Config Advanced configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    Config GetConfig() const;

                    /**
                     * 设置Advanced configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Config Advanced configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetConfig(const Config& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取Message retention time configuration (for recording the latest retention time)
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return RetentionTimeConfig Message retention time configuration (for recording the latest retention time)
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    TopicRetentionTimeConfigRsp GetRetentionTimeConfig() const;

                    /**
                     * 设置Message retention time configuration (for recording the latest retention time)
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param RetentionTimeConfig Message retention time configuration (for recording the latest retention time)
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    void SetRetentionTimeConfig(const TopicRetentionTimeConfigRsp& _retentionTimeConfig);

                    /**
                     * 判断参数 RetentionTimeConfig 是否已赋值
                     * @return RetentionTimeConfig 是否已赋值
                     */
                    bool RetentionTimeConfigHasBeenSet() const;

                    /**
                     * 获取`0`: normal, `1`: deleted, `2`: deleting
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return Status `0`: normal, `1`: deleted, `2`: deleting
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置`0`: normal, `1`: deleted, `2`: deleting
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param Status `0`: normal, `1`: deleted, `2`: deleting
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Topic name
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * Topic ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Number of partitions
                     */
                    int64_t m_partitionNum;
                    bool m_partitionNumHasBeenSet;

                    /**
                     * Number of replicas
                     */
                    int64_t m_replicaNum;
                    bool m_replicaNumHasBeenSet;

                    /**
                     * Remarks
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * COS bucket for data backup: address of the destination COS bucket
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * Advanced configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    Config m_config;
                    bool m_configHasBeenSet;

                    /**
                     * Message retention time configuration (for recording the latest retention time)
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    TopicRetentionTimeConfigRsp m_retentionTimeConfig;
                    bool m_retentionTimeConfigHasBeenSet;

                    /**
                     * `0`: normal, `1`: deleted, `2`: deleting
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_TOPICDETAIL_H_
