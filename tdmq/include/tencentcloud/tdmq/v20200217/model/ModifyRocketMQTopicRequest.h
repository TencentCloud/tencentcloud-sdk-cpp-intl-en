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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYROCKETMQTOPICREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYROCKETMQTOPICREQUEST_H_

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
                * ModifyRocketMQTopic request structure.
                */
                class ModifyRocketMQTopicRequest : public AbstractModel
                {
                public:
                    ModifyRocketMQTopicRequest();
                    ~ModifyRocketMQTopicRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Namespace name
                     * @return NamespaceId Namespace name
                     * 
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置Namespace name
                     * @param _namespaceId Namespace name
                     * 
                     */
                    void SetNamespaceId(const std::string& _namespaceId);

                    /**
                     * 判断参数 NamespaceId 是否已赋值
                     * @return NamespaceId 是否已赋值
                     * 
                     */
                    bool NamespaceIdHasBeenSet() const;

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
                     * 获取Remarks (up to 128 characters)
                     * @return Remark Remarks (up to 128 characters)
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks (up to 128 characters)
                     * @param _remark Remarks (up to 128 characters)
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
                     * 获取Number of partitions, which is invalid for globally sequential messages and cannot be less than the current number of partitions.
                     * @return PartitionNum Number of partitions, which is invalid for globally sequential messages and cannot be less than the current number of partitions.
                     * 
                     */
                    int64_t GetPartitionNum() const;

                    /**
                     * 设置Number of partitions, which is invalid for globally sequential messages and cannot be less than the current number of partitions.
                     * @param _partitionNum Number of partitions, which is invalid for globally sequential messages and cannot be less than the current number of partitions.
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
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Namespace name
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * Topic name
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * Remarks (up to 128 characters)
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Number of partitions, which is invalid for globally sequential messages and cannot be less than the current number of partitions.
                     */
                    int64_t m_partitionNum;
                    bool m_partitionNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_MODIFYROCKETMQTOPICREQUEST_H_
