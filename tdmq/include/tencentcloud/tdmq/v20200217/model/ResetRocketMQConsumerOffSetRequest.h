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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_RESETROCKETMQCONSUMEROFFSETREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_RESETROCKETMQCONSUMEROFFSETREQUEST_H_

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
                * ResetRocketMQConsumerOffSet request structure.
                */
                class ResetRocketMQConsumerOffSetRequest : public AbstractModel
                {
                public:
                    ResetRocketMQConsumerOffSetRequest();
                    ~ResetRocketMQConsumerOffSetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID.
                     * @return ClusterId Cluster ID.
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID.
                     * @param _clusterId Cluster ID.
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
                     * 获取Namespace name.
                     * @return NamespaceId Namespace name.
                     * 
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置Namespace name.
                     * @param _namespaceId Namespace name.
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
                     * 获取Consumer group name.
                     * @return GroupId Consumer group name.
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Consumer group name.
                     * @param _groupId Consumer group name.
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Topic name.
                     * @return Topic Topic name.
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置Topic name.
                     * @param _topic Topic name.
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
                     * 获取Reset method. 0: Start from the latest offset; 1: Start from specified time point.
                     * @return Type Reset method. 0: Start from the latest offset; 1: Start from specified time point.
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置Reset method. 0: Start from the latest offset; 1: Start from specified time point.
                     * @param _type Reset method. 0: Start from the latest offset; 1: Start from specified time point.
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取The specified timestamp that has been reset, in milliseconds. This parameter only takes effect when the value of `Type` is `1`.
                     * @return ResetTimestamp The specified timestamp that has been reset, in milliseconds. This parameter only takes effect when the value of `Type` is `1`.
                     * 
                     */
                    uint64_t GetResetTimestamp() const;

                    /**
                     * 设置The specified timestamp that has been reset, in milliseconds. This parameter only takes effect when the value of `Type` is `1`.
                     * @param _resetTimestamp The specified timestamp that has been reset, in milliseconds. This parameter only takes effect when the value of `Type` is `1`.
                     * 
                     */
                    void SetResetTimestamp(const uint64_t& _resetTimestamp);

                    /**
                     * 判断参数 ResetTimestamp 是否已赋值
                     * @return ResetTimestamp 是否已赋值
                     * 
                     */
                    bool ResetTimestampHasBeenSet() const;

                private:

                    /**
                     * Cluster ID.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Namespace name.
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * Consumer group name.
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Topic name.
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * Reset method. 0: Start from the latest offset; 1: Start from specified time point.
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * The specified timestamp that has been reset, in milliseconds. This parameter only takes effect when the value of `Type` is `1`.
                     */
                    uint64_t m_resetTimestamp;
                    bool m_resetTimestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_RESETROCKETMQCONSUMEROFFSETREQUEST_H_
