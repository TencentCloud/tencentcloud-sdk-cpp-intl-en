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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATETOPICREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATETOPICREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateTopic request structure.
                */
                class CreateTopicRequest : public AbstractModel
                {
                public:
                    CreateTopicRequest();
                    ~CreateTopicRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Number of log topic partitions. Default value: 1. Maximum value: 10
                     * @return PartitionCount Number of log topic partitions. Default value: 1. Maximum value: 10
                     */
                    int64_t GetPartitionCount() const;

                    /**
                     * 设置Number of log topic partitions. Default value: 1. Maximum value: 10
                     * @param PartitionCount Number of log topic partitions. Default value: 1. Maximum value: 10
                     */
                    void SetPartitionCount(const int64_t& _partitionCount);

                    /**
                     * 判断参数 PartitionCount 是否已赋值
                     * @return PartitionCount 是否已赋值
                     */
                    bool PartitionCountHasBeenSet() const;

                    /**
                     * 获取Tag description list. This parameter is used to bind a tag to a log topic. Up to 10 tag key-value pairs are supported, and a resource can be bound to only one tag key.
                     * @return Tags Tag description list. This parameter is used to bind a tag to a log topic. Up to 10 tag key-value pairs are supported, and a resource can be bound to only one tag key.
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag description list. This parameter is used to bind a tag to a log topic. Up to 10 tag key-value pairs are supported, and a resource can be bound to only one tag key.
                     * @param Tags Tag description list. This parameter is used to bind a tag to a log topic. Up to 10 tag key-value pairs are supported, and a resource can be bound to only one tag key.
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Whether to enable automatic split. Default value: true
                     * @return AutoSplit Whether to enable automatic split. Default value: true
                     */
                    bool GetAutoSplit() const;

                    /**
                     * 设置Whether to enable automatic split. Default value: true
                     * @param AutoSplit Whether to enable automatic split. Default value: true
                     */
                    void SetAutoSplit(const bool& _autoSplit);

                    /**
                     * 判断参数 AutoSplit 是否已赋值
                     * @return AutoSplit 是否已赋值
                     */
                    bool AutoSplitHasBeenSet() const;

                    /**
                     * 获取Maximum number of partitions to split into for this topic if automatic split is enabled. Default value: 50
                     * @return MaxSplitPartitions Maximum number of partitions to split into for this topic if automatic split is enabled. Default value: 50
                     */
                    int64_t GetMaxSplitPartitions() const;

                    /**
                     * 设置Maximum number of partitions to split into for this topic if automatic split is enabled. Default value: 50
                     * @param MaxSplitPartitions Maximum number of partitions to split into for this topic if automatic split is enabled. Default value: 50
                     */
                    void SetMaxSplitPartitions(const int64_t& _maxSplitPartitions);

                    /**
                     * 判断参数 MaxSplitPartitions 是否已赋值
                     * @return MaxSplitPartitions 是否已赋值
                     */
                    bool MaxSplitPartitionsHasBeenSet() const;

                    /**
                     * 获取Log topic storage type. Valid values: `hot` (STANDARD storage); `cold` (IA storage). Default value: `hot`.
                     * @return StorageType Log topic storage type. Valid values: `hot` (STANDARD storage); `cold` (IA storage). Default value: `hot`.
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置Log topic storage type. Valid values: `hot` (STANDARD storage); `cold` (IA storage). Default value: `hot`.
                     * @param StorageType Log topic storage type. Valid values: `hot` (STANDARD storage); `cold` (IA storage). Default value: `hot`.
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取Lifecycle in days. Value range: 1–3600 (STANDARD storage); 7–3600 (IA storage). `3640` indicates permanent retention.
                     * @return Period Lifecycle in days. Value range: 1–3600 (STANDARD storage); 7–3600 (IA storage). `3640` indicates permanent retention.
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置Lifecycle in days. Value range: 1–3600 (STANDARD storage); 7–3600 (IA storage). `3640` indicates permanent retention.
                     * @param Period Lifecycle in days. Value range: 1–3600 (STANDARD storage); 7–3600 (IA storage). `3640` indicates permanent retention.
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取Log topic description
                     * @return Describes Log topic description
                     */
                    std::string GetDescribes() const;

                    /**
                     * 设置Log topic description
                     * @param Describes Log topic description
                     */
                    void SetDescribes(const std::string& _describes);

                    /**
                     * 判断参数 Describes 是否已赋值
                     * @return Describes 是否已赋值
                     */
                    bool DescribesHasBeenSet() const;

                    /**
                     * 获取`0`: Disable log transitioning.
A value other than `0`: The number of STANDARD storage days after log transitioning is enabled (valid only if `StorageType` is `hot`). Note: `HotPeriod` should be greater than or equal to `7` and less than `Period`.
                     * @return HotPeriod `0`: Disable log transitioning.
A value other than `0`: The number of STANDARD storage days after log transitioning is enabled (valid only if `StorageType` is `hot`). Note: `HotPeriod` should be greater than or equal to `7` and less than `Period`.
                     */
                    uint64_t GetHotPeriod() const;

                    /**
                     * 设置`0`: Disable log transitioning.
A value other than `0`: The number of STANDARD storage days after log transitioning is enabled (valid only if `StorageType` is `hot`). Note: `HotPeriod` should be greater than or equal to `7` and less than `Period`.
                     * @param HotPeriod `0`: Disable log transitioning.
A value other than `0`: The number of STANDARD storage days after log transitioning is enabled (valid only if `StorageType` is `hot`). Note: `HotPeriod` should be greater than or equal to `7` and less than `Period`.
                     */
                    void SetHotPeriod(const uint64_t& _hotPeriod);

                    /**
                     * 判断参数 HotPeriod 是否已赋值
                     * @return HotPeriod 是否已赋值
                     */
                    bool HotPeriodHasBeenSet() const;

                    /**
                     * 获取Whether to enable web tracking. Valid values: `false` (disable); `true` (enable)
                     * @return IsWebTracking Whether to enable web tracking. Valid values: `false` (disable); `true` (enable)
                     */
                    bool GetIsWebTracking() const;

                    /**
                     * 设置Whether to enable web tracking. Valid values: `false` (disable); `true` (enable)
                     * @param IsWebTracking Whether to enable web tracking. Valid values: `false` (disable); `true` (enable)
                     */
                    void SetIsWebTracking(const bool& _isWebTracking);

                    /**
                     * 判断参数 IsWebTracking 是否已赋值
                     * @return IsWebTracking 是否已赋值
                     */
                    bool IsWebTrackingHasBeenSet() const;

                private:

                    /**
                     * Logset ID
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * Log topic name
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * Number of log topic partitions. Default value: 1. Maximum value: 10
                     */
                    int64_t m_partitionCount;
                    bool m_partitionCountHasBeenSet;

                    /**
                     * Tag description list. This parameter is used to bind a tag to a log topic. Up to 10 tag key-value pairs are supported, and a resource can be bound to only one tag key.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Whether to enable automatic split. Default value: true
                     */
                    bool m_autoSplit;
                    bool m_autoSplitHasBeenSet;

                    /**
                     * Maximum number of partitions to split into for this topic if automatic split is enabled. Default value: 50
                     */
                    int64_t m_maxSplitPartitions;
                    bool m_maxSplitPartitionsHasBeenSet;

                    /**
                     * Log topic storage type. Valid values: `hot` (STANDARD storage); `cold` (IA storage). Default value: `hot`.
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * Lifecycle in days. Value range: 1–3600 (STANDARD storage); 7–3600 (IA storage). `3640` indicates permanent retention.
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Log topic description
                     */
                    std::string m_describes;
                    bool m_describesHasBeenSet;

                    /**
                     * `0`: Disable log transitioning.
A value other than `0`: The number of STANDARD storage days after log transitioning is enabled (valid only if `StorageType` is `hot`). Note: `HotPeriod` should be greater than or equal to `7` and less than `Period`.
                     */
                    uint64_t m_hotPeriod;
                    bool m_hotPeriodHasBeenSet;

                    /**
                     * Whether to enable web tracking. Valid values: `false` (disable); `true` (enable)
                     */
                    bool m_isWebTracking;
                    bool m_isWebTrackingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATETOPICREQUEST_H_
