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
                     * 获取Tag description list. This parameter is used to bind a tag to a log topic. Up to 10 tag key-value pairs are supported, and they must be unique.
                     * @return Tags Tag description list. This parameter is used to bind a tag to a log topic. Up to 10 tag key-value pairs are supported, and they must be unique.
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置Tag description list. This parameter is used to bind a tag to a log topic. Up to 10 tag key-value pairs are supported, and they must be unique.
                     * @param Tags Tag description list. This parameter is used to bind a tag to a log topic. Up to 10 tag key-value pairs are supported, and they must be unique.
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Whether to start collection for this log topic
                     * @return Status Whether to start collection for this log topic
                     */
                    bool GetStatus() const;

                    /**
                     * 设置Whether to start collection for this log topic
                     * @param Status Whether to start collection for this log topic
                     */
                    void SetStatus(const bool& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Whether to enable automatic split
                     * @return AutoSplit Whether to enable automatic split
                     */
                    bool GetAutoSplit() const;

                    /**
                     * 设置Whether to enable automatic split
                     * @param AutoSplit Whether to enable automatic split
                     */
                    void SetAutoSplit(const bool& _autoSplit);

                    /**
                     * 判断参数 AutoSplit 是否已赋值
                     * @return AutoSplit 是否已赋值
                     */
                    bool AutoSplitHasBeenSet() const;

                    /**
                     * 获取Maximum number of partitions to split into for this topic if automatic split is enabled
                     * @return MaxSplitPartitions Maximum number of partitions to split into for this topic if automatic split is enabled
                     */
                    int64_t GetMaxSplitPartitions() const;

                    /**
                     * 设置Maximum number of partitions to split into for this topic if automatic split is enabled
                     * @param MaxSplitPartitions Maximum number of partitions to split into for this topic if automatic split is enabled
                     */
                    void SetMaxSplitPartitions(const int64_t& _maxSplitPartitions);

                    /**
                     * 判断参数 MaxSplitPartitions 是否已赋值
                     * @return MaxSplitPartitions 是否已赋值
                     */
                    bool MaxSplitPartitionsHasBeenSet() const;

                    /**
                     * 获取Lifecycle in days. Value range: 1–366
                     * @return Period Lifecycle in days. Value range: 1–366
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置Lifecycle in days. Value range: 1–366
                     * @param Period Lifecycle in days. Value range: 1–366
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     */
                    bool PeriodHasBeenSet() const;

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
                     * Whether to start collection for this log topic
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
                     * Lifecycle in days. Value range: 1–366
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MODIFYTOPICREQUEST_H_
