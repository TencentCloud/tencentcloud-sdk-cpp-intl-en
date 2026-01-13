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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBECONSUMERLAGREQUEST_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBECONSUMERLAGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * DescribeConsumerLag request structure.
                */
                class DescribeConsumerLagRequest : public AbstractModel
                {
                public:
                    DescribeConsumerLagRequest();
                    ~DescribeConsumerLagRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取TDMQ RocketMQ instance ID. It can be obtained from the API [DescribeFusionInstanceList](https://www.tencentcloud.com/document/api/1493/106745?from_cn_redirect=1) or the console.
                     * @return InstanceId TDMQ RocketMQ instance ID. It can be obtained from the API [DescribeFusionInstanceList](https://www.tencentcloud.com/document/api/1493/106745?from_cn_redirect=1) or the console.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置TDMQ RocketMQ instance ID. It can be obtained from the API [DescribeFusionInstanceList](https://www.tencentcloud.com/document/api/1493/106745?from_cn_redirect=1) or the console.
                     * @param _instanceId TDMQ RocketMQ instance ID. It can be obtained from the API [DescribeFusionInstanceList](https://www.tencentcloud.com/document/api/1493/106745?from_cn_redirect=1) or the console.
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
                     * 获取Consumer group name. It can be obtained from [ConsumeGroupItem](https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#ConsumeGroupItem) returned by the API [DescribeConsumerGroupList](https://www.tencentcloud.com/document/api/1493/101535?from_cn_redirect=1) or from the console.
                     * @return ConsumerGroup Consumer group name. It can be obtained from [ConsumeGroupItem](https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#ConsumeGroupItem) returned by the API [DescribeConsumerGroupList](https://www.tencentcloud.com/document/api/1493/101535?from_cn_redirect=1) or from the console.
                     * 
                     */
                    std::string GetConsumerGroup() const;

                    /**
                     * 设置Consumer group name. It can be obtained from [ConsumeGroupItem](https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#ConsumeGroupItem) returned by the API [DescribeConsumerGroupList](https://www.tencentcloud.com/document/api/1493/101535?from_cn_redirect=1) or from the console.
                     * @param _consumerGroup Consumer group name. It can be obtained from [ConsumeGroupItem](https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#ConsumeGroupItem) returned by the API [DescribeConsumerGroupList](https://www.tencentcloud.com/document/api/1493/101535?from_cn_redirect=1) or from the console.
                     * 
                     */
                    void SetConsumerGroup(const std::string& _consumerGroup);

                    /**
                     * 判断参数 ConsumerGroup 是否已赋值
                     * @return ConsumerGroup 是否已赋值
                     * 
                     */
                    bool ConsumerGroupHasBeenSet() const;

                    /**
                     * 获取Namespace. It is required for 4.x clusters. The namespace can be obtained from [RocketMQNamespace](https://www.tencentcloud.com/document/api/1179/46089?from_cn_redirect=1#RocketMQNamespace) returned by the API [DescribeRocketMQNamespaces](https://www.tencentcloud.com/document/api/1179/63419?from_cn_redirect=1) or from the console.
                     * @return Namespace Namespace. It is required for 4.x clusters. The namespace can be obtained from [RocketMQNamespace](https://www.tencentcloud.com/document/api/1179/46089?from_cn_redirect=1#RocketMQNamespace) returned by the API [DescribeRocketMQNamespaces](https://www.tencentcloud.com/document/api/1179/63419?from_cn_redirect=1) or from the console.
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Namespace. It is required for 4.x clusters. The namespace can be obtained from [RocketMQNamespace](https://www.tencentcloud.com/document/api/1179/46089?from_cn_redirect=1#RocketMQNamespace) returned by the API [DescribeRocketMQNamespaces](https://www.tencentcloud.com/document/api/1179/63419?from_cn_redirect=1) or from the console.
                     * @param _namespace Namespace. It is required for 4.x clusters. The namespace can be obtained from [RocketMQNamespace](https://www.tencentcloud.com/document/api/1179/46089?from_cn_redirect=1#RocketMQNamespace) returned by the API [DescribeRocketMQNamespaces](https://www.tencentcloud.com/document/api/1179/63419?from_cn_redirect=1) or from the console.
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
                     * 获取Subscribed topic. If it is not left blank, query heaped messages of consumer groups subscribing to the topic. The topic can be obtained from [TopicItem](https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#TopicItem) returned by the API [DescribeTopicList](https://www.tencentcloud.com/document/api/1493/96030?from_cn_redirect=1) or from the console.
                     * @return SubscribeTopic Subscribed topic. If it is not left blank, query heaped messages of consumer groups subscribing to the topic. The topic can be obtained from [TopicItem](https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#TopicItem) returned by the API [DescribeTopicList](https://www.tencentcloud.com/document/api/1493/96030?from_cn_redirect=1) or from the console.
                     * 
                     */
                    std::string GetSubscribeTopic() const;

                    /**
                     * 设置Subscribed topic. If it is not left blank, query heaped messages of consumer groups subscribing to the topic. The topic can be obtained from [TopicItem](https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#TopicItem) returned by the API [DescribeTopicList](https://www.tencentcloud.com/document/api/1493/96030?from_cn_redirect=1) or from the console.
                     * @param _subscribeTopic Subscribed topic. If it is not left blank, query heaped messages of consumer groups subscribing to the topic. The topic can be obtained from [TopicItem](https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#TopicItem) returned by the API [DescribeTopicList](https://www.tencentcloud.com/document/api/1493/96030?from_cn_redirect=1) or from the console.
                     * 
                     */
                    void SetSubscribeTopic(const std::string& _subscribeTopic);

                    /**
                     * 判断参数 SubscribeTopic 是否已赋值
                     * @return SubscribeTopic 是否已赋值
                     * 
                     */
                    bool SubscribeTopicHasBeenSet() const;

                private:

                    /**
                     * TDMQ RocketMQ instance ID. It can be obtained from the API [DescribeFusionInstanceList](https://www.tencentcloud.com/document/api/1493/106745?from_cn_redirect=1) or the console.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Consumer group name. It can be obtained from [ConsumeGroupItem](https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#ConsumeGroupItem) returned by the API [DescribeConsumerGroupList](https://www.tencentcloud.com/document/api/1493/101535?from_cn_redirect=1) or from the console.
                     */
                    std::string m_consumerGroup;
                    bool m_consumerGroupHasBeenSet;

                    /**
                     * Namespace. It is required for 4.x clusters. The namespace can be obtained from [RocketMQNamespace](https://www.tencentcloud.com/document/api/1179/46089?from_cn_redirect=1#RocketMQNamespace) returned by the API [DescribeRocketMQNamespaces](https://www.tencentcloud.com/document/api/1179/63419?from_cn_redirect=1) or from the console.
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Subscribed topic. If it is not left blank, query heaped messages of consumer groups subscribing to the topic. The topic can be obtained from [TopicItem](https://www.tencentcloud.com/document/api/1493/96031?from_cn_redirect=1#TopicItem) returned by the API [DescribeTopicList](https://www.tencentcloud.com/document/api/1493/96030?from_cn_redirect=1) or from the console.
                     */
                    std::string m_subscribeTopic;
                    bool m_subscribeTopicHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBECONSUMERLAGREQUEST_H_
