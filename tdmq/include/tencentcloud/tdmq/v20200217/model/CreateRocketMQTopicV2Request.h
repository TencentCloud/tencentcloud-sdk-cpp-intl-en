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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEROCKETMQTOPICV2REQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEROCKETMQTOPICV2REQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/Tag.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * CreateRocketMQTopicV2 request structure.
                */
                class CreateRocketMQTopicV2Request : public AbstractModel
                {
                public:
                    CreateRocketMQTopicV2Request();
                    ~CreateRocketMQTopicV2Request() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Topic name
                     * @return Topic Topic name
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置Topic name
                     * @param _topic Topic name
                     * 
                     */
                    void SetTopic(const std::string& _topic);

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     * 
                     */
                    bool TopicHasBeenSet() const;

                    /**
                     * 获取Topic type. Valid values: Normal, GlobalOrder, PartitionedOrder, Transaction, and DelayScheduled. Transaction is only supported in the Exclusive Edition.
                     * @return Type Topic type. Valid values: Normal, GlobalOrder, PartitionedOrder, Transaction, and DelayScheduled. Transaction is only supported in the Exclusive Edition.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Topic type. Valid values: Normal, GlobalOrder, PartitionedOrder, Transaction, and DelayScheduled. Transaction is only supported in the Exclusive Edition.
                     * @param _type Topic type. Valid values: Normal, GlobalOrder, PartitionedOrder, Transaction, and DelayScheduled. Transaction is only supported in the Exclusive Edition.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param _clusterId Cluster ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Namespace of the topic. For 4.x common clusters, the Cluster Namespace is fixed as: tdmq_default
                     * @return Namespace Namespace of the topic. For 4.x common clusters, the Cluster Namespace is fixed as: tdmq_default
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Namespace of the topic. For 4.x common clusters, the Cluster Namespace is fixed as: tdmq_default
                     * @param _namespace Namespace of the topic. For 4.x common clusters, the Cluster Namespace is fixed as: tdmq_default
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取Remarks
                     * @return Remark Remarks
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks
                     * @param _remark Remarks
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Number of partitions, invalid for global order
                     * @return PartitionNum Number of partitions, invalid for global order
                     * 
                     */
                    int64_t GetPartitionNum() const;

                    /**
                     * 设置Number of partitions, invalid for global order
                     * @param _partitionNum Number of partitions, invalid for global order
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
                     * 获取Tag list
                     * @return TagList Tag list
                     * 
                     */
                    std::vector<Tag> GetTagList() const;

                    /**
                     * 设置Tag list
                     * @param _tagList Tag list
                     * 
                     */
                    void SetTagList(const std::vector<Tag>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                private:

                    /**
                     * Topic name
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * Topic type. Valid values: Normal, GlobalOrder, PartitionedOrder, Transaction, and DelayScheduled. Transaction is only supported in the Exclusive Edition.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Namespace of the topic. For 4.x common clusters, the Cluster Namespace is fixed as: tdmq_default
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Number of partitions, invalid for global order
                     */
                    int64_t m_partitionNum;
                    bool m_partitionNumHasBeenSet;

                    /**
                     * Tag list
                     */
                    std::vector<Tag> m_tagList;
                    bool m_tagListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEROCKETMQTOPICV2REQUEST_H_
