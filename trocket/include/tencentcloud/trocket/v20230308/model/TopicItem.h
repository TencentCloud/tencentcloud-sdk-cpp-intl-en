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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_TOPICITEM_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_TOPICITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trocket/v20230308/model/Tag.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * Topic information on the list
                */
                class TopicItem : public AbstractModel
                {
                public:
                    TopicItem();
                    ~TopicItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

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
                     * 获取Topic type.
NORMAL: regular message.
FIFO: sequential messaging.
DELAY: delayed message.
TRANSACTION message.
                     * @return TopicType Topic type.
NORMAL: regular message.
FIFO: sequential messaging.
DELAY: delayed message.
TRANSACTION message.
                     * 
                     */
                    std::string GetTopicType() const;

                    /**
                     * 设置Topic type.
NORMAL: regular message.
FIFO: sequential messaging.
DELAY: delayed message.
TRANSACTION message.
                     * @param _topicType Topic type.
NORMAL: regular message.
FIFO: sequential messaging.
DELAY: delayed message.
TRANSACTION message.
                     * 
                     */
                    void SetTopicType(const std::string& _topicType);

                    /**
                     * 判断参数 TopicType 是否已赋值
                     * @return TopicType 是否已赋值
                     * 
                     */
                    bool TopicTypeHasBeenSet() const;

                    /**
                     * 获取Number of queues
                     * @return QueueNum Number of queues
                     * 
                     */
                    int64_t GetQueueNum() const;

                    /**
                     * 设置Number of queues
                     * @param _queueNum Number of queues
                     * 
                     */
                    void SetQueueNum(const int64_t& _queueNum);

                    /**
                     * 判断参数 QueueNum 是否已赋值
                     * @return QueueNum 是否已赋值
                     * 
                     */
                    bool QueueNumHasBeenSet() const;

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
                     * 获取Cluster id of version 4.x.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClusterIdV4 Cluster id of version 4.x.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetClusterIdV4() const;

                    /**
                     * 设置Cluster id of version 4.x.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _clusterIdV4 Cluster id of version 4.x.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetClusterIdV4(const std::string& _clusterIdV4);

                    /**
                     * 判断参数 ClusterIdV4 是否已赋值
                     * @return ClusterIdV4 是否已赋值
                     * 
                     */
                    bool ClusterIdV4HasBeenSet() const;

                    /**
                     * 获取Namespace of 4.x.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NamespaceV4 Namespace of 4.x.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNamespaceV4() const;

                    /**
                     * 设置Namespace of 4.x.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _namespaceV4 Namespace of 4.x.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNamespaceV4(const std::string& _namespaceV4);

                    /**
                     * 判断参数 NamespaceV4 是否已赋值
                     * @return NamespaceV4 是否已赋值
                     * 
                     */
                    bool NamespaceV4HasBeenSet() const;

                    /**
                     * 获取Topic name for version 4.x.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TopicV4 Topic name for version 4.x.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTopicV4() const;

                    /**
                     * 设置Topic name for version 4.x.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _topicV4 Topic name for version 4.x.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTopicV4(const std::string& _topicV4);

                    /**
                     * 判断参数 TopicV4 是否已赋值
                     * @return TopicV4 是否已赋值
                     * 
                     */
                    bool TopicV4HasBeenSet() const;

                    /**
                     * 获取Complete namespace for 4.x.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FullNamespaceV4 Complete namespace for 4.x.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFullNamespaceV4() const;

                    /**
                     * 设置Complete namespace for 4.x.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fullNamespaceV4 Complete namespace for 4.x.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFullNamespaceV4(const std::string& _fullNamespaceV4);

                    /**
                     * 判断参数 FullNamespaceV4 是否已赋值
                     * @return FullNamespaceV4 是否已赋值
                     * 
                     */
                    bool FullNamespaceV4HasBeenSet() const;

                    /**
                     * 获取Message retention time.
                     * @return MsgTTL Message retention time.
                     * 
                     */
                    int64_t GetMsgTTL() const;

                    /**
                     * 设置Message retention time.
                     * @param _msgTTL Message retention time.
                     * 
                     */
                    void SetMsgTTL(const int64_t& _msgTTL);

                    /**
                     * 判断参数 MsgTTL 是否已赋值
                     * @return MsgTTL 是否已赋值
                     * 
                     */
                    bool MsgTTLHasBeenSet() const;

                    /**
                     * 获取List of bound tags
                     * @return TagList List of bound tags
                     * 
                     */
                    std::vector<Tag> GetTagList() const;

                    /**
                     * 设置List of bound tags
                     * @param _tagList List of bound tags
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
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Topic name
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * Topic type.
NORMAL: regular message.
FIFO: sequential messaging.
DELAY: delayed message.
TRANSACTION message.
                     */
                    std::string m_topicType;
                    bool m_topicTypeHasBeenSet;

                    /**
                     * Number of queues
                     */
                    int64_t m_queueNum;
                    bool m_queueNumHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Cluster id of version 4.x.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_clusterIdV4;
                    bool m_clusterIdV4HasBeenSet;

                    /**
                     * Namespace of 4.x.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_namespaceV4;
                    bool m_namespaceV4HasBeenSet;

                    /**
                     * Topic name for version 4.x.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_topicV4;
                    bool m_topicV4HasBeenSet;

                    /**
                     * Complete namespace for 4.x.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_fullNamespaceV4;
                    bool m_fullNamespaceV4HasBeenSet;

                    /**
                     * Message retention time.
                     */
                    int64_t m_msgTTL;
                    bool m_msgTTLHasBeenSet;

                    /**
                     * List of bound tags
                     */
                    std::vector<Tag> m_tagList;
                    bool m_tagListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_TOPICITEM_H_
