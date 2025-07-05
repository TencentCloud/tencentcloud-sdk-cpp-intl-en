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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_TOPICINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_TOPICINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/Tag.h>
#include <tencentcloud/cls/v20201016/model/TopicExtendInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Basic Topic Information
                */
                class TopicInfo : public AbstractModel
                {
                public:
                    TopicInfo();
                    ~TopicInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Logset ID
                     * @return LogsetId Logset ID
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置Logset ID
                     * @param _logsetId Logset ID
                     * 
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     * 
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取 Topic ID
                     * @return TopicId  Topic ID
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置 Topic ID
                     * @param _topicId  Topic ID
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
                     * 获取Topic Name
                     * @return TopicName Topic Name
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置Topic Name
                     * @param _topicName Topic Name
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
                     * 获取Number of topic partitions
                     * @return PartitionCount Number of topic partitions
                     * 
                     */
                    int64_t GetPartitionCount() const;

                    /**
                     * 设置Number of topic partitions
                     * @param _partitionCount Number of topic partitions
                     * 
                     */
                    void SetPartitionCount(const int64_t& _partitionCount);

                    /**
                     * 判断参数 PartitionCount 是否已赋值
                     * @return PartitionCount 是否已赋值
                     * 
                     */
                    bool PartitionCountHasBeenSet() const;

                    /**
                     * 获取Whether the topic has indexing enabled (the topic type must be log topic)
                     * @return Index Whether the topic has indexing enabled (the topic type must be log topic)
                     * 
                     */
                    bool GetIndex() const;

                    /**
                     * 设置Whether the topic has indexing enabled (the topic type must be log topic)
                     * @param _index Whether the topic has indexing enabled (the topic type must be log topic)
                     * 
                     */
                    void SetIndex(const bool& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取Cloud product identifier. When the topic is created by other cloud products, this field displays the name of the cloud product, such as CDN, TKE.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AssumerName Cloud product identifier. When the topic is created by other cloud products, this field displays the name of the cloud product, such as CDN, TKE.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAssumerName() const;

                    /**
                     * 设置Cloud product identifier. When the topic is created by other cloud products, this field displays the name of the cloud product, such as CDN, TKE.Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _assumerName Cloud product identifier. When the topic is created by other cloud products, this field displays the name of the cloud product, such as CDN, TKE.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAssumerName(const std::string& _assumerName);

                    /**
                     * 判断参数 AssumerName 是否已赋值
                     * @return AssumerName 是否已赋值
                     * 
                     */
                    bool AssumerNameHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateTime Creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param _createTime Creation time
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Whether the topic has log collection enabled. true: collection enabled; false: collection disabled.Log collection is enabled by default when creating a log topic, and this field can be modified by calling ModifyTopic through the SDK.The console currently does not support modifying this parameter.
                     * @return Status Whether the topic has log collection enabled. true: collection enabled; false: collection disabled.Log collection is enabled by default when creating a log topic, and this field can be modified by calling ModifyTopic through the SDK.The console currently does not support modifying this parameter.
                     * 
                     */
                    bool GetStatus() const;

                    /**
                     * 设置Whether the topic has log collection enabled. true: collection enabled; false: collection disabled.Log collection is enabled by default when creating a log topic, and this field can be modified by calling ModifyTopic through the SDK.The console currently does not support modifying this parameter.
                     * @param _status Whether the topic has log collection enabled. true: collection enabled; false: collection disabled.Log collection is enabled by default when creating a log topic, and this field can be modified by calling ModifyTopic through the SDK.The console currently does not support modifying this parameter.
                     * 
                     */
                    void SetStatus(const bool& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Tag information bound to the topicNote: This field may return null, indicating that no valid values can be obtained.
                     * @return Tags Tag information bound to the topicNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag information bound to the topicNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _tags Tag information bound to the topicNote: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Whether automatic split is enabled for this topic
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return AutoSplit Whether automatic split is enabled for this topic
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetAutoSplit() const;

                    /**
                     * 设置Whether automatic split is enabled for this topic
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _autoSplit Whether automatic split is enabled for this topic
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAutoSplit(const bool& _autoSplit);

                    /**
                     * 判断参数 AutoSplit 是否已赋值
                     * @return AutoSplit 是否已赋值
                     * 
                     */
                    bool AutoSplitHasBeenSet() const;

                    /**
                     * 获取Maximum number of partitions to split into for this topic if automatic split is enabled
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return MaxSplitPartitions Maximum number of partitions to split into for this topic if automatic split is enabled
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMaxSplitPartitions() const;

                    /**
                     * 设置Maximum number of partitions to split into for this topic if automatic split is enabled
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _maxSplitPartitions Maximum number of partitions to split into for this topic if automatic split is enabled
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMaxSplitPartitions(const int64_t& _maxSplitPartitions);

                    /**
                     * 判断参数 MaxSplitPartitions 是否已赋值
                     * @return MaxSplitPartitions 是否已赋值
                     * 
                     */
                    bool MaxSplitPartitionsHasBeenSet() const;

                    /**
                     * 获取Storage type of the topicNote: This field may return null, indicating that no valid values can be obtained.
                     * @return StorageType Storage type of the topicNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置Storage type of the topicNote: This field may return null, indicating that no valid values can be obtained.
                     * @param _storageType Storage type of the topicNote: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取Lifecycle in days. Value range: 1-3600 (3640 indicates permanent retention)
Note: This field may return `null`, indicating that no valid value was found.
                     * @return Period Lifecycle in days. Value range: 1-3600 (3640 indicates permanent retention)
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置Lifecycle in days. Value range: 1-3600 (3640 indicates permanent retention)
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _period Lifecycle in days. Value range: 1-3600 (3640 indicates permanent retention)
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取Cloud product sub-identifier. If the log topic is created by another cloud product, this field returns the name of the cloud product and its log type, such as `TKE-Audit` or `TKE-Event`. Some products only return the cloud product identifier (`AssumerName`), without this field.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubAssumerName Cloud product sub-identifier. If the log topic is created by another cloud product, this field returns the name of the cloud product and its log type, such as `TKE-Audit` or `TKE-Event`. Some products only return the cloud product identifier (`AssumerName`), without this field.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubAssumerName() const;

                    /**
                     * 设置Cloud product sub-identifier. If the log topic is created by another cloud product, this field returns the name of the cloud product and its log type, such as `TKE-Audit` or `TKE-Event`. Some products only return the cloud product identifier (`AssumerName`), without this field.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _subAssumerName Cloud product sub-identifier. If the log topic is created by another cloud product, this field returns the name of the cloud product and its log type, such as `TKE-Audit` or `TKE-Event`. Some products only return the cloud product identifier (`AssumerName`), without this field.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSubAssumerName(const std::string& _subAssumerName);

                    /**
                     * 判断参数 SubAssumerName 是否已赋值
                     * @return SubAssumerName 是否已赋值
                     * 
                     */
                    bool SubAssumerNameHasBeenSet() const;

                    /**
                     * 获取Topic description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Describes Topic description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDescribes() const;

                    /**
                     * 设置Topic description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _describes Topic description
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDescribes(const std::string& _describes);

                    /**
                     * 判断参数 Describes 是否已赋值
                     * @return Describes 是否已赋值
                     * 
                     */
                    bool DescribesHasBeenSet() const;

                    /**
                     * 获取Enable log sinking, with the lifecycle of standard storage, where hotPeriod < Period.For standard storage, hotPeriod is used, and for infrequent access storage, it is Period-hotPeriod. (The topic type must be a log topic)HotPeriod=0 indicates that log sinking is not enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HotPeriod Enable log sinking, with the lifecycle of standard storage, where hotPeriod < Period.For standard storage, hotPeriod is used, and for infrequent access storage, it is Period-hotPeriod. (The topic type must be a log topic)HotPeriod=0 indicates that log sinking is not enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetHotPeriod() const;

                    /**
                     * 设置Enable log sinking, with the lifecycle of standard storage, where hotPeriod < Period.For standard storage, hotPeriod is used, and for infrequent access storage, it is Period-hotPeriod. (The topic type must be a log topic)HotPeriod=0 indicates that log sinking is not enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _hotPeriod Enable log sinking, with the lifecycle of standard storage, where hotPeriod < Period.For standard storage, hotPeriod is used, and for infrequent access storage, it is Period-hotPeriod. (The topic type must be a log topic)HotPeriod=0 indicates that log sinking is not enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHotPeriod(const uint64_t& _hotPeriod);

                    /**
                     * 判断参数 HotPeriod 是否已赋值
                     * @return HotPeriod 是否已赋值
                     * 
                     */
                    bool HotPeriodHasBeenSet() const;

                    /**
                     * 获取Topic type.
- 0:  log  Topic  
- 1: Metric Topic
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BizType Topic type.
- 0:  log  Topic  
- 1: Metric Topic
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetBizType() const;

                    /**
                     * 设置Topic type.
- 0:  log  Topic  
- 1: Metric Topic
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _bizType Topic type.
- 0:  log  Topic  
- 1: Metric Topic
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBizType(const uint64_t& _bizType);

                    /**
                     * 判断参数 BizType 是否已赋值
                     * @return BizType 是否已赋值
                     * 
                     */
                    bool BizTypeHasBeenSet() const;

                    /**
                     * 获取Free authentication switch. false: disabled; true: enabled.After enabling, anonymous access to the log topic will be supported for specified operations. For details, please refer to Log Topic (https://intl.cloud.tencent.com/document/product/614/41035?from_cn_redirect=1).Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsWebTracking Free authentication switch. false: disabled; true: enabled.After enabling, anonymous access to the log topic will be supported for specified operations. For details, please refer to Log Topic (https://intl.cloud.tencent.com/document/product/614/41035?from_cn_redirect=1).Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsWebTracking() const;

                    /**
                     * 设置Free authentication switch. false: disabled; true: enabled.After enabling, anonymous access to the log topic will be supported for specified operations. For details, please refer to Log Topic (https://intl.cloud.tencent.com/document/product/614/41035?from_cn_redirect=1).Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isWebTracking Free authentication switch. false: disabled; true: enabled.After enabling, anonymous access to the log topic will be supported for specified operations. For details, please refer to Log Topic (https://intl.cloud.tencent.com/document/product/614/41035?from_cn_redirect=1).Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsWebTracking(const bool& _isWebTracking);

                    /**
                     * 判断参数 IsWebTracking 是否已赋值
                     * @return IsWebTracking 是否已赋值
                     * 
                     */
                    bool IsWebTrackingHasBeenSet() const;

                    /**
                     * 获取
                     * @return Extends 
                     * 
                     */
                    TopicExtendInfo GetExtends() const;

                    /**
                     * 设置
                     * @param _extends 
                     * 
                     */
                    void SetExtends(const TopicExtendInfo& _extends);

                    /**
                     * 判断参数 Extends 是否已赋值
                     * @return Extends 是否已赋值
                     * 
                     */
                    bool ExtendsHasBeenSet() const;

                private:

                    /**
                     * Logset ID
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     *  Topic ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Topic Name
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * Number of topic partitions
                     */
                    int64_t m_partitionCount;
                    bool m_partitionCountHasBeenSet;

                    /**
                     * Whether the topic has indexing enabled (the topic type must be log topic)
                     */
                    bool m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * Cloud product identifier. When the topic is created by other cloud products, this field displays the name of the cloud product, such as CDN, TKE.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_assumerName;
                    bool m_assumerNameHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Whether the topic has log collection enabled. true: collection enabled; false: collection disabled.Log collection is enabled by default when creating a log topic, and this field can be modified by calling ModifyTopic through the SDK.The console currently does not support modifying this parameter.
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Tag information bound to the topicNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Whether automatic split is enabled for this topic
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool m_autoSplit;
                    bool m_autoSplitHasBeenSet;

                    /**
                     * Maximum number of partitions to split into for this topic if automatic split is enabled
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_maxSplitPartitions;
                    bool m_maxSplitPartitionsHasBeenSet;

                    /**
                     * Storage type of the topicNote: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * Lifecycle in days. Value range: 1-3600 (3640 indicates permanent retention)
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Cloud product sub-identifier. If the log topic is created by another cloud product, this field returns the name of the cloud product and its log type, such as `TKE-Audit` or `TKE-Event`. Some products only return the cloud product identifier (`AssumerName`), without this field.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subAssumerName;
                    bool m_subAssumerNameHasBeenSet;

                    /**
                     * Topic description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_describes;
                    bool m_describesHasBeenSet;

                    /**
                     * Enable log sinking, with the lifecycle of standard storage, where hotPeriod < Period.For standard storage, hotPeriod is used, and for infrequent access storage, it is Period-hotPeriod. (The topic type must be a log topic)HotPeriod=0 indicates that log sinking is not enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_hotPeriod;
                    bool m_hotPeriodHasBeenSet;

                    /**
                     * Topic type.
- 0:  log  Topic  
- 1: Metric Topic
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_bizType;
                    bool m_bizTypeHasBeenSet;

                    /**
                     * Free authentication switch. false: disabled; true: enabled.After enabling, anonymous access to the log topic will be supported for specified operations. For details, please refer to Log Topic (https://intl.cloud.tencent.com/document/product/614/41035?from_cn_redirect=1).Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isWebTracking;
                    bool m_isWebTrackingHasBeenSet;

                    /**
                     * 
                     */
                    TopicExtendInfo m_extends;
                    bool m_extendsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_TOPICINFO_H_
