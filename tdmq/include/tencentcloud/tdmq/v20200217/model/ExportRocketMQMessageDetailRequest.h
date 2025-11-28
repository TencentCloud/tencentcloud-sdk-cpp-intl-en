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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_EXPORTROCKETMQMESSAGEDETAILREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_EXPORTROCKETMQMESSAGEDETAILREQUEST_H_

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
                * ExportRocketMQMessageDetail request structure.
                */
                class ExportRocketMQMessageDetailRequest : public AbstractModel
                {
                public:
                    ExportRocketMQMessageDetailRequest();
                    ~ExportRocketMQMessageDetailRequest() = default;
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
                     * 获取Application namespace.
                     * @return EnvironmentId Application namespace.
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置Application namespace.
                     * @param _environmentId Application namespace.
                     * 
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     * 
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取Topic name.
If it is a dead letter message, isDlqMsg=true.
                     * @return TopicName Topic name.
If it is a dead letter message, isDlqMsg=true.
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置Topic name.
If it is a dead letter message, isDlqMsg=true.
                     * @param _topicName Topic name.
If it is a dead letter message, isDlqMsg=true.
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
                     * 获取Message ID
                     * @return MsgId Message ID
                     * 
                     */
                    std::string GetMsgId() const;

                    /**
                     * 设置Message ID
                     * @param _msgId Message ID
                     * 
                     */
                    void SetMsgId(const std::string& _msgId);

                    /**
                     * 判断参数 MsgId 是否已赋值
                     * @return MsgId 是否已赋值
                     * 
                     */
                    bool MsgIdHasBeenSet() const;

                    /**
                     * 获取Whether to Includes Message Body
                     * @return IncludeMsgBody Whether to Includes Message Body
                     * 
                     */
                    bool GetIncludeMsgBody() const;

                    /**
                     * 设置Whether to Includes Message Body
                     * @param _includeMsgBody Whether to Includes Message Body
                     * 
                     */
                    void SetIncludeMsgBody(const bool& _includeMsgBody);

                    /**
                     * 判断参数 IncludeMsgBody 是否已赋值
                     * @return IncludeMsgBody 是否已赋值
                     * 
                     */
                    bool IncludeMsgBodyHasBeenSet() const;

                    /**
                     * 获取Whether It a Dead Letter Message
                     * @return DeadLetterMsg Whether It a Dead Letter Message
                     * 
                     */
                    bool GetDeadLetterMsg() const;

                    /**
                     * 设置Whether It a Dead Letter Message
                     * @param _deadLetterMsg Whether It a Dead Letter Message
                     * 
                     */
                    void SetDeadLetterMsg(const bool& _deadLetterMsg);

                    /**
                     * 判断参数 DeadLetterMsg 是否已赋值
                     * @return DeadLetterMsg 是否已赋值
                     * 
                     */
                    bool DeadLetterMsgHasBeenSet() const;

                private:

                    /**
                     * Cluster ID.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Application namespace.
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * Topic name.
If it is a dead letter message, isDlqMsg=true.
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * Message ID
                     */
                    std::string m_msgId;
                    bool m_msgIdHasBeenSet;

                    /**
                     * Whether to Includes Message Body
                     */
                    bool m_includeMsgBody;
                    bool m_includeMsgBodyHasBeenSet;

                    /**
                     * Whether It a Dead Letter Message
                     */
                    bool m_deadLetterMsg;
                    bool m_deadLetterMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_EXPORTROCKETMQMESSAGEDETAILREQUEST_H_
