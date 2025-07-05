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
                     * 获取Log topic name
                     * @return TopicName Log topic name
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置Log topic name
                     * @param _topicName Log topic name
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
                     * 获取Number of log topic partitions. Default value: 1. Maximum value: 10
                     * @return PartitionCount Number of log topic partitions. Default value: 1. Maximum value: 10
                     * 
                     */
                    int64_t GetPartitionCount() const;

                    /**
                     * 设置Number of log topic partitions. Default value: 1. Maximum value: 10
                     * @param _partitionCount Number of log topic partitions. Default value: 1. Maximum value: 10
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
                     * 获取Tag description list. This parameter is used to bind a tag to a log topic. Up to 10 tag key-value pairs are supported, and a resource can be bound to only one tag key.
                     * @return Tags Tag description list. This parameter is used to bind a tag to a log topic. Up to 10 tag key-value pairs are supported, and a resource can be bound to only one tag key.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag description list. This parameter is used to bind a tag to a log topic. Up to 10 tag key-value pairs are supported, and a resource can be bound to only one tag key.
                     * @param _tags Tag description list. This parameter is used to bind a tag to a log topic. Up to 10 tag key-value pairs are supported, and a resource can be bound to only one tag key.
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
                     * 获取Whether to enable automatic split. Default value: true
                     * @return AutoSplit Whether to enable automatic split. Default value: true
                     * 
                     */
                    bool GetAutoSplit() const;

                    /**
                     * 设置Whether to enable automatic split. Default value: true
                     * @param _autoSplit Whether to enable automatic split. Default value: true
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
                     * 获取Maximum number of partitions to split into for this topic if automatic split is enabled. Default value: 50
                     * @return MaxSplitPartitions Maximum number of partitions to split into for this topic if automatic split is enabled. Default value: 50
                     * 
                     */
                    int64_t GetMaxSplitPartitions() const;

                    /**
                     * 设置Maximum number of partitions to split into for this topic if automatic split is enabled. Default value: 50
                     * @param _maxSplitPartitions Maximum number of partitions to split into for this topic if automatic split is enabled. Default value: 50
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
                     * 获取Log topic storage type. Valid values: `hot` (STANDARD storage); `cold` (IA storage). Default value: `hot`.
                     * @return StorageType Log topic storage type. Valid values: `hot` (STANDARD storage); `cold` (IA storage). Default value: `hot`.
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置Log topic storage type. Valid values: `hot` (STANDARD storage); `cold` (IA storage). Default value: `hot`.
                     * @param _storageType Log topic storage type. Valid values: `hot` (STANDARD storage); `cold` (IA storage). Default value: `hot`.
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
                     * 获取lifetime. Unit: days. Standard storage value range: 1 to 3600. Infrequent storage value range: 7 to 3600 days. A value of 3640 indicates permanent retention.If this value is not input, it defaults to the Period value of the log set corresponding to the accessed log topic (defaults to 30 days in case of access failure).
                     * @return Period lifetime. Unit: days. Standard storage value range: 1 to 3600. Infrequent storage value range: 7 to 3600 days. A value of 3640 indicates permanent retention.If this value is not input, it defaults to the Period value of the log set corresponding to the accessed log topic (defaults to 30 days in case of access failure).
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置lifetime. Unit: days. Standard storage value range: 1 to 3600. Infrequent storage value range: 7 to 3600 days. A value of 3640 indicates permanent retention.If this value is not input, it defaults to the Period value of the log set corresponding to the accessed log topic (defaults to 30 days in case of access failure).
                     * @param _period lifetime. Unit: days. Standard storage value range: 1 to 3600. Infrequent storage value range: 7 to 3600 days. A value of 3640 indicates permanent retention.If this value is not input, it defaults to the Period value of the log set corresponding to the accessed log topic (defaults to 30 days in case of access failure).
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
                     * 获取Log topic description
                     * @return Describes Log topic description
                     * 
                     */
                    std::string GetDescribes() const;

                    /**
                     * 设置Log topic description
                     * @param _describes Log topic description
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
                     * 获取0: Disable log settlement.Non-zero: The number of Standard Storage days after enabling log settlement. HotPeriod needs to be greater than or equal to 7, and less than Period.Effective only when StorageType is hot.
                     * @return HotPeriod 0: Disable log settlement.Non-zero: The number of Standard Storage days after enabling log settlement. HotPeriod needs to be greater than or equal to 7, and less than Period.Effective only when StorageType is hot.
                     * 
                     */
                    uint64_t GetHotPeriod() const;

                    /**
                     * 设置0: Disable log settlement.Non-zero: The number of Standard Storage days after enabling log settlement. HotPeriod needs to be greater than or equal to 7, and less than Period.Effective only when StorageType is hot.
                     * @param _hotPeriod 0: Disable log settlement.Non-zero: The number of Standard Storage days after enabling log settlement. HotPeriod needs to be greater than or equal to 7, and less than Period.Effective only when StorageType is hot.
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
                     * 获取Authentication switch. false: off; true: on. Default is false.Once enabled, it will support specified operations for anonymous access to this log topic. For details, please see [log Topic](https://intl.cloud.tencent.com/document/product/614/41035?from_cn_redirect=1).
                     * @return IsWebTracking Authentication switch. false: off; true: on. Default is false.Once enabled, it will support specified operations for anonymous access to this log topic. For details, please see [log Topic](https://intl.cloud.tencent.com/document/product/614/41035?from_cn_redirect=1).
                     * 
                     */
                    bool GetIsWebTracking() const;

                    /**
                     * 设置Authentication switch. false: off; true: on. Default is false.Once enabled, it will support specified operations for anonymous access to this log topic. For details, please see [log Topic](https://intl.cloud.tencent.com/document/product/614/41035?from_cn_redirect=1).
                     * @param _isWebTracking Authentication switch. false: off; true: on. Default is false.Once enabled, it will support specified operations for anonymous access to this log topic. For details, please see [log Topic](https://intl.cloud.tencent.com/document/product/614/41035?from_cn_redirect=1).
                     * 
                     */
                    void SetIsWebTracking(const bool& _isWebTracking);

                    /**
                     * 判断参数 IsWebTracking 是否已赋值
                     * @return IsWebTracking 是否已赋值
                     * 
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
                     * lifetime. Unit: days. Standard storage value range: 1 to 3600. Infrequent storage value range: 7 to 3600 days. A value of 3640 indicates permanent retention.If this value is not input, it defaults to the Period value of the log set corresponding to the accessed log topic (defaults to 30 days in case of access failure).
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Log topic description
                     */
                    std::string m_describes;
                    bool m_describesHasBeenSet;

                    /**
                     * 0: Disable log settlement.Non-zero: The number of Standard Storage days after enabling log settlement. HotPeriod needs to be greater than or equal to 7, and less than Period.Effective only when StorageType is hot.
                     */
                    uint64_t m_hotPeriod;
                    bool m_hotPeriodHasBeenSet;

                    /**
                     * Authentication switch. false: off; true: on. Default is false.Once enabled, it will support specified operations for anonymous access to this log topic. For details, please see [log Topic](https://intl.cloud.tencent.com/document/product/614/41035?from_cn_redirect=1).
                     */
                    bool m_isWebTracking;
                    bool m_isWebTrackingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATETOPICREQUEST_H_
