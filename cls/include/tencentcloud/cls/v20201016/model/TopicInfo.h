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


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Log topic information
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
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置Logset ID
                     * @param LogsetId Logset ID
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取Log topic ID
                     * @return TopicId Log topic ID
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Log topic ID
                     * @param TopicId Log topic ID
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取Log topic name
                     * @return TopicName Log topic name
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置Log topic name
                     * @param TopicName Log topic name
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取Number of topic partitions
                     * @return PartitionCount Number of topic partitions
                     */
                    int64_t GetPartitionCount() const;

                    /**
                     * 设置Number of topic partitions
                     * @param PartitionCount Number of topic partitions
                     */
                    void SetPartitionCount(const int64_t& _partitionCount);

                    /**
                     * 判断参数 PartitionCount 是否已赋值
                     * @return PartitionCount 是否已赋值
                     */
                    bool PartitionCountHasBeenSet() const;

                    /**
                     * 获取Whether index is enabled
                     * @return Index Whether index is enabled
                     */
                    bool GetIndex() const;

                    /**
                     * 设置Whether index is enabled
                     * @param Index Whether index is enabled
                     */
                    void SetIndex(const bool& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateTime Creation time
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param CreateTime Creation time
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Whether collection is enabled in the log topic
                     * @return Status Whether collection is enabled in the log topic
                     */
                    bool GetStatus() const;

                    /**
                     * 设置Whether collection is enabled in the log topic
                     * @param Status Whether collection is enabled in the log topic
                     */
                    void SetStatus(const bool& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Information of tags bound to log topic
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Tags Information of tags bound to log topic
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Information of tags bound to log topic
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Tags Information of tags bound to log topic
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Whether automatic split is enabled for this topic
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return AutoSplit Whether automatic split is enabled for this topic
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool GetAutoSplit() const;

                    /**
                     * 设置Whether automatic split is enabled for this topic
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param AutoSplit Whether automatic split is enabled for this topic
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetAutoSplit(const bool& _autoSplit);

                    /**
                     * 判断参数 AutoSplit 是否已赋值
                     * @return AutoSplit 是否已赋值
                     */
                    bool AutoSplitHasBeenSet() const;

                    /**
                     * 获取Maximum number of partitions to split into for this topic if automatic split is enabled
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return MaxSplitPartitions Maximum number of partitions to split into for this topic if automatic split is enabled
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetMaxSplitPartitions() const;

                    /**
                     * 设置Maximum number of partitions to split into for this topic if automatic split is enabled
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param MaxSplitPartitions Maximum number of partitions to split into for this topic if automatic split is enabled
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetMaxSplitPartitions(const int64_t& _maxSplitPartitions);

                    /**
                     * 判断参数 MaxSplitPartitions 是否已赋值
                     * @return MaxSplitPartitions 是否已赋值
                     */
                    bool MaxSplitPartitionsHasBeenSet() const;

                    /**
                     * 获取Log topic storage class
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return StorageType Log topic storage class
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置Log topic storage class
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param StorageType Log topic storage class
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取Lifecycle in days. Value range: 1-3600 (3640 indicates permanent retention)
Note: This field may return `null`, indicating that no valid value was found.
                     * @return Period Lifecycle in days. Value range: 1-3600 (3640 indicates permanent retention)
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置Lifecycle in days. Value range: 1-3600 (3640 indicates permanent retention)
Note: This field may return `null`, indicating that no valid value was found.
                     * @param Period Lifecycle in days. Value range: 1-3600 (3640 indicates permanent retention)
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     */
                    bool PeriodHasBeenSet() const;

                private:

                    /**
                     * Logset ID
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * Log topic ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Log topic name
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * Number of topic partitions
                     */
                    int64_t m_partitionCount;
                    bool m_partitionCountHasBeenSet;

                    /**
                     * Whether index is enabled
                     */
                    bool m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Whether collection is enabled in the log topic
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Information of tags bound to log topic
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * Log topic storage class
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * Lifecycle in days. Value range: 1-3600 (3640 indicates permanent retention)
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_TOPICINFO_H_
