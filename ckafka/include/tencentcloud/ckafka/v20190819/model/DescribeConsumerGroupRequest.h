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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBECONSUMERGROUPREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBECONSUMERGROUPREQUEST_H_

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
                * DescribeConsumerGroup request structure.
                */
                class DescribeConsumerGroupRequest : public AbstractModel
                {
                public:
                    DescribeConsumerGroupRequest();
                    ~DescribeConsumerGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ckafka cluster instance Id. obtain through the API [DescribeInstances](https://www.tencentcloud.comom/document/product/597/40835?from_cn_redirect=1).
                     * @return InstanceId ckafka cluster instance Id. obtain through the API [DescribeInstances](https://www.tencentcloud.comom/document/product/597/40835?from_cn_redirect=1).
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ckafka cluster instance Id. obtain through the API [DescribeInstances](https://www.tencentcloud.comom/document/product/597/40835?from_cn_redirect=1).
                     * @param _instanceId ckafka cluster instance Id. obtain through the API [DescribeInstances](https://www.tencentcloud.comom/document/product/597/40835?from_cn_redirect=1).
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
                     * 获取Specifies the group name you want to query.
                     * @return GroupName Specifies the group name you want to query.
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置Specifies the group name you want to query.
                     * @param _groupName Specifies the group name you want to query.
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
                     * 获取Specifies the corresponding topic name in the group to be queried by the user. if this parameter is specified while the group is unspecified, ignore this parameter.
                     * @return TopicName Specifies the corresponding topic name in the group to be queried by the user. if this parameter is specified while the group is unspecified, ignore this parameter.
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置Specifies the corresponding topic name in the group to be queried by the user. if this parameter is specified while the group is unspecified, ignore this parameter.
                     * @param _topicName Specifies the corresponding topic name in the group to be queried by the user. if this parameter is specified while the group is unspecified, ignore this parameter.
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
                     * 获取Returns the limit quantity of the consumption group. supports a maximum of 50.
                     * @return Limit Returns the limit quantity of the consumption group. supports a maximum of 50.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Returns the limit quantity of the consumption group. supports a maximum of 50.
                     * @param _limit Returns the limit quantity of the consumption group. supports a maximum of 50.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Specifies the starting offset amount of the consumer group list.
                     * @return Offset Specifies the starting offset amount of the consumer group list.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Specifies the starting offset amount of the consumer group list.
                     * @param _offset Specifies the starting offset amount of the consumer group list.
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * ckafka cluster instance Id. obtain through the API [DescribeInstances](https://www.tencentcloud.comom/document/product/597/40835?from_cn_redirect=1).
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Specifies the group name you want to query.
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * Specifies the corresponding topic name in the group to be queried by the user. if this parameter is specified while the group is unspecified, ignore this parameter.
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * Returns the limit quantity of the consumption group. supports a maximum of 50.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Specifies the starting offset amount of the consumer group list.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBECONSUMERGROUPREQUEST_H_
