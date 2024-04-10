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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYTOPICREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYTOPICREQUEST_H_

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
                * ModifyTopic request structure.
                */
                class ModifyTopicRequest : public AbstractModel
                {
                public:
                    ModifyTopicRequest();
                    ~ModifyTopicRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Log topic ID
                     * @return TopicId Log topic ID
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Log topic ID
                     * @param _topicId Log topic ID
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
                     * 获取Tag description list. This parameter is used to bind a tag to a log topic. Up to 10 tag key-value pairs are supported, and they must be unique.
                     * @return Tags Tag description list. This parameter is used to bind a tag to a log topic. Up to 10 tag key-value pairs are supported, and they must be unique.
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag description list. This parameter is used to bind a tag to a log topic. Up to 10 tag key-value pairs are supported, and they must be unique.
                     * @param _tags Tag description list. This parameter is used to bind a tag to a log topic. Up to 10 tag key-value pairs are supported, and they must be unique.
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
                     * 获取Whether the topic has log collection enabled. true: collection enabled; false: collection disabled.The console currently does not support modifying this parameter.
                     * @return Status Whether the topic has log collection enabled. true: collection enabled; false: collection disabled.The console currently does not support modifying this parameter.
                     * 
                     */
                    bool GetStatus() const;

                    /**
                     * 设置Whether the topic has log collection enabled. true: collection enabled; false: collection disabled.The console currently does not support modifying this parameter.
                     * @param _status Whether the topic has log collection enabled. true: collection enabled; false: collection disabled.The console currently does not support modifying this parameter.
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
                     * 获取Whether to enable automatic split
                     * @return AutoSplit Whether to enable automatic split
                     * 
                     */
                    bool GetAutoSplit() const;

                    /**
                     * 设置Whether to enable automatic split
                     * @param _autoSplit Whether to enable automatic split
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
                     * @return MaxSplitPartitions Maximum number of partitions to split into for this topic if automatic split is enabled
                     * 
                     */
                    int64_t GetMaxSplitPartitions() const;

                    /**
                     * 设置Maximum number of partitions to split into for this topic if automatic split is enabled
                     * @param _maxSplitPartitions Maximum number of partitions to split into for this topic if automatic split is enabled
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
                     * 获取Lifecycle in days. Value range: 1–3600 (STANDARD storage); 7–3600 (IA storage). `3640` indicates permanent retention.
                     * @return Period Lifecycle in days. Value range: 1–3600 (STANDARD storage); 7–3600 (IA storage). `3640` indicates permanent retention.
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置Lifecycle in days. Value range: 1–3600 (STANDARD storage); 7–3600 (IA storage). `3640` indicates permanent retention.
                     * @param _period Lifecycle in days. Value range: 1–3600 (STANDARD storage); 7–3600 (IA storage). `3640` indicates permanent retention.
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
                     * 获取`0`: Disable log transitioning.
A value other than `0`: The number of STANDARD storage days after log transitioning is enabled (valid only if `StorageType` is `hot`). Note: `HotPeriod` should be greater than or equal to `7` and less than `Period`.
                     * @return HotPeriod `0`: Disable log transitioning.
A value other than `0`: The number of STANDARD storage days after log transitioning is enabled (valid only if `StorageType` is `hot`). Note: `HotPeriod` should be greater than or equal to `7` and less than `Period`.
                     * 
                     */
                    uint64_t GetHotPeriod() const;

                    /**
                     * 设置`0`: Disable log transitioning.
A value other than `0`: The number of STANDARD storage days after log transitioning is enabled (valid only if `StorageType` is `hot`). Note: `HotPeriod` should be greater than or equal to `7` and less than `Period`.
                     * @param _hotPeriod `0`: Disable log transitioning.
A value other than `0`: The number of STANDARD storage days after log transitioning is enabled (valid only if `StorageType` is `hot`). Note: `HotPeriod` should be greater than or equal to `7` and less than `Period`.
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
                     * 获取Free authentication switch. false: disabled; true: enabled.Once enabled, it will support specified operations for anonymous access to this log topic. For details, please see [log Topic](https://intl.cloud.tencent.com/document/product/614/41035?from_cn_redirect=1).
                     * @return IsWebTracking Free authentication switch. false: disabled; true: enabled.Once enabled, it will support specified operations for anonymous access to this log topic. For details, please see [log Topic](https://intl.cloud.tencent.com/document/product/614/41035?from_cn_redirect=1).
                     * 
                     */
                    bool GetIsWebTracking() const;

                    /**
                     * 设置Free authentication switch. false: disabled; true: enabled.Once enabled, it will support specified operations for anonymous access to this log topic. For details, please see [log Topic](https://intl.cloud.tencent.com/document/product/614/41035?from_cn_redirect=1).
                     * @param _isWebTracking Free authentication switch. false: disabled; true: enabled.Once enabled, it will support specified operations for anonymous access to this log topic. For details, please see [log Topic](https://intl.cloud.tencent.com/document/product/614/41035?from_cn_redirect=1).
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
                     * Tag description list. This parameter is used to bind a tag to a log topic. Up to 10 tag key-value pairs are supported, and they must be unique.
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Whether the topic has log collection enabled. true: collection enabled; false: collection disabled.The console currently does not support modifying this parameter.
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Whether to enable automatic split
                     */
                    bool m_autoSplit;
                    bool m_autoSplitHasBeenSet;

                    /**
                     * Maximum number of partitions to split into for this topic if automatic split is enabled
                     */
                    int64_t m_maxSplitPartitions;
                    bool m_maxSplitPartitionsHasBeenSet;

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
                     * Free authentication switch. false: disabled; true: enabled.Once enabled, it will support specified operations for anonymous access to this log topic. For details, please see [log Topic](https://intl.cloud.tencent.com/document/product/614/41035?from_cn_redirect=1).
                     */
                    bool m_isWebTracking;
                    bool m_isWebTrackingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYTOPICREQUEST_H_
