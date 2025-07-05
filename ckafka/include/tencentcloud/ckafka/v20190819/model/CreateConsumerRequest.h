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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATECONSUMERREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATECONSUMERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * CreateConsumer request structure.
                */
                class CreateConsumerRequest : public AbstractModel
                {
                public:
                    CreateConsumerRequest();
                    ~CreateConsumerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceId Instance ID.
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
                     * 获取Group name.
                     * @return GroupName Group name.
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置Group name.
                     * @param _groupName Group name.
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取Topic name. You must specify the name of an existing topic for either `TopicName` or `TopicNameList`.
                     * @return TopicName Topic name. You must specify the name of an existing topic for either `TopicName` or `TopicNameList`.
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置Topic name. You must specify the name of an existing topic for either `TopicName` or `TopicNameList`.
                     * @param _topicName Topic name. You must specify the name of an existing topic for either `TopicName` or `TopicNameList`.
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
                     * 获取Topic name array.
                     * @return TopicNameList Topic name array.
                     * 
                     */
                    std::vector<std::string> GetTopicNameList() const;

                    /**
                     * 设置Topic name array.
                     * @param _topicNameList Topic name array.
                     * 
                     */
                    void SetTopicNameList(const std::vector<std::string>& _topicNameList);

                    /**
                     * 判断参数 TopicNameList 是否已赋值
                     * @return TopicNameList 是否已赋值
                     * 
                     */
                    bool TopicNameListHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Group name.
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * Topic name. You must specify the name of an existing topic for either `TopicName` or `TopicNameList`.
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * Topic name array.
                     */
                    std::vector<std::string> m_topicNameList;
                    bool m_topicNameListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATECONSUMERREQUEST_H_
