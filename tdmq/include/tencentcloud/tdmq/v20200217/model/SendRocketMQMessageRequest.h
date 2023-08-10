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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_SENDROCKETMQMESSAGEREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_SENDROCKETMQMESSAGEREQUEST_H_

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
                * SendRocketMQMessage request structure.
                */
                class SendRocketMQMessageRequest : public AbstractModel
                {
                public:
                    SendRocketMQMessageRequest();
                    ~SendRocketMQMessageRequest() = default;
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
                     * 获取Namespace ID
                     * @return NamespaceId Namespace ID
                     * 
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置Namespace ID
                     * @param _namespaceId Namespace ID
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
                     * @return TopicName Topic name
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置Topic name
                     * @param _topicName Topic name
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
                     * 获取Message content
                     * @return MsgBody Message content
                     * 
                     */
                    std::string GetMsgBody() const;

                    /**
                     * 设置Message content
                     * @param _msgBody Message content
                     * 
                     */
                    void SetMsgBody(const std::string& _msgBody);

                    /**
                     * 判断参数 MsgBody 是否已赋值
                     * @return MsgBody 是否已赋值
                     * 
                     */
                    bool MsgBodyHasBeenSet() const;

                    /**
                     * 获取Message key
                     * @return MsgKey Message key
                     * 
                     */
                    std::string GetMsgKey() const;

                    /**
                     * 设置Message key
                     * @param _msgKey Message key
                     * 
                     */
                    void SetMsgKey(const std::string& _msgKey);

                    /**
                     * 判断参数 MsgKey 是否已赋值
                     * @return MsgKey 是否已赋值
                     * 
                     */
                    bool MsgKeyHasBeenSet() const;

                    /**
                     * 获取Message tag
                     * @return MsgTag Message tag
                     * 
                     */
                    std::string GetMsgTag() const;

                    /**
                     * 设置Message tag
                     * @param _msgTag Message tag
                     * 
                     */
                    void SetMsgTag(const std::string& _msgTag);

                    /**
                     * 判断参数 MsgTag 是否已赋值
                     * @return MsgTag 是否已赋值
                     * 
                     */
                    bool MsgTagHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Namespace ID
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * Topic name
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * Message content
                     */
                    std::string m_msgBody;
                    bool m_msgBodyHasBeenSet;

                    /**
                     * Message key
                     */
                    std::string m_msgKey;
                    bool m_msgKeyHasBeenSet;

                    /**
                     * Message tag
                     */
                    std::string m_msgTag;
                    bool m_msgTagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_SENDROCKETMQMESSAGEREQUEST_H_
