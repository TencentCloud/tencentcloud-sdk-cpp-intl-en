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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEROCKETMQTOPICREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEROCKETMQTOPICREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * CreateRocketMQTopic request structure.
                */
                class CreateRocketMQTopicRequest : public AbstractModel
                {
                public:
                    CreateRocketMQTopicRequest();
                    ~CreateRocketMQTopicRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Topic name, which can contain 3–64 letters, digits, hyphens, and underscores
                     * @return Topic Topic name, which can contain 3–64 letters, digits, hyphens, and underscores
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置Topic name, which can contain 3–64 letters, digits, hyphens, and underscores
                     * @param _topic Topic name, which can contain 3–64 letters, digits, hyphens, and underscores
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
                     * 获取Topic namespace. Currently, you can create topics only in one single namespace.
                     * @return Namespaces Topic namespace. Currently, you can create topics only in one single namespace.
                     * 
                     */
                    std::vector<std::string> GetNamespaces() const;

                    /**
                     * 设置Topic namespace. Currently, you can create topics only in one single namespace.
                     * @param _namespaces Topic namespace. Currently, you can create topics only in one single namespace.
                     * 
                     */
                    void SetNamespaces(const std::vector<std::string>& _namespaces);

                    /**
                     * 判断参数 Namespaces 是否已赋值
                     * @return Namespaces 是否已赋值
                     * 
                     */
                    bool NamespacesHasBeenSet() const;

                    /**
                     * 获取Topic type. Valid values: `Normal`, `PartitionedOrder`, `Transaction`, `DelayScheduled`.
                     * @return Type Topic type. Valid values: `Normal`, `PartitionedOrder`, `Transaction`, `DelayScheduled`.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Topic type. Valid values: `Normal`, `PartitionedOrder`, `Transaction`, `DelayScheduled`.
                     * @param _type Topic type. Valid values: `Normal`, `PartitionedOrder`, `Transaction`, `DelayScheduled`.
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
                     * 获取Topic remarks (up to 128 characters)
                     * @return Remark Topic remarks (up to 128 characters)
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Topic remarks (up to 128 characters)
                     * @param _remark Topic remarks (up to 128 characters)
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
                     * 获取Number of partitions, which doesn't take effect for globally sequential messages
                     * @return PartitionNum Number of partitions, which doesn't take effect for globally sequential messages
                     * 
                     */
                    int64_t GetPartitionNum() const;

                    /**
                     * 设置Number of partitions, which doesn't take effect for globally sequential messages
                     * @param _partitionNum Number of partitions, which doesn't take effect for globally sequential messages
                     * 
                     */
                    void SetPartitionNum(const int64_t& _partitionNum);

                    /**
                     * 判断参数 PartitionNum 是否已赋值
                     * @return PartitionNum 是否已赋值
                     * 
                     */
                    bool PartitionNumHasBeenSet() const;

                private:

                    /**
                     * Topic name, which can contain 3–64 letters, digits, hyphens, and underscores
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * Topic namespace. Currently, you can create topics only in one single namespace.
                     */
                    std::vector<std::string> m_namespaces;
                    bool m_namespacesHasBeenSet;

                    /**
                     * Topic type. Valid values: `Normal`, `PartitionedOrder`, `Transaction`, `DelayScheduled`.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Topic remarks (up to 128 characters)
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Number of partitions, which doesn't take effect for globally sequential messages
                     */
                    int64_t m_partitionNum;
                    bool m_partitionNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEROCKETMQTOPICREQUEST_H_
