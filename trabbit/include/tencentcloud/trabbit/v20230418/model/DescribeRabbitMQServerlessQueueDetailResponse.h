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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_DESCRIBERABBITMQSERVERLESSQUEUEDETAILRESPONSE_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_DESCRIBERABBITMQSERVERLESSQUEUEDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trabbit
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * DescribeRabbitMQServerlessQueueDetail response structure.
                */
                class DescribeRabbitMQServerlessQueueDetailResponse : public AbstractModel
                {
                public:
                    DescribeRabbitMQServerlessQueueDetailResponse();
                    ~DescribeRabbitMQServerlessQueueDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Vhost parameter.
                     * @return VirtualHost Vhost parameter.
                     * 
                     */
                    std::string GetVirtualHost() const;

                    /**
                     * 判断参数 VirtualHost 是否已赋值
                     * @return VirtualHost 是否已赋值
                     * 
                     */
                    bool VirtualHostHasBeenSet() const;

                    /**
                     * 获取Queue name.
                     * @return QueueName Queue name.
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 判断参数 QueueName 是否已赋值
                     * @return QueueName 是否已赋值
                     * 
                     */
                    bool QueueNameHasBeenSet() const;

                    /**
                     * 获取Specifies the queue type. the valid values are classic or quorum.
                     * @return QueueType Specifies the queue type. the valid values are classic or quorum.
                     * 
                     */
                    std::string GetQueueType() const;

                    /**
                     * 判断参数 QueueType 是否已赋值
                     * @return QueueType 是否已赋值
                     * 
                     */
                    bool QueueTypeHasBeenSet() const;

                    /**
                     * 获取Number of online consumers.
                     * @return Consumers Number of online consumers.
                     * 
                     */
                    int64_t GetConsumers() const;

                    /**
                     * 判断参数 Consumers 是否已赋值
                     * @return Consumers 是否已赋值
                     * 
                     */
                    bool ConsumersHasBeenSet() const;

                    /**
                     * 获取Durable flag.
                     * @return Durable Durable flag.
                     * 
                     */
                    bool GetDurable() const;

                    /**
                     * 判断参数 Durable 是否已赋值
                     * @return Durable 是否已赋值
                     * 
                     */
                    bool DurableHasBeenSet() const;

                    /**
                     * 获取Automatic cleanup.
                     * @return AutoDelete Automatic cleanup.
                     * 
                     */
                    bool GetAutoDelete() const;

                    /**
                     * 判断参数 AutoDelete 是否已赋值
                     * @return AutoDelete 是否已赋值
                     * 
                     */
                    bool AutoDeleteHasBeenSet() const;

                    /**
                     * 获取Remarks
                     * @return Remark Remarks
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取MessageTTL parameter, dedicated for classic type.
                     * @return MessageTTL MessageTTL parameter, dedicated for classic type.
                     * 
                     */
                    int64_t GetMessageTTL() const;

                    /**
                     * 判断参数 MessageTTL 是否已赋值
                     * @return MessageTTL 是否已赋值
                     * 
                     */
                    bool MessageTTLHasBeenSet() const;

                    /**
                     * 获取AutoExpire parameter.
                     * @return AutoExpire AutoExpire parameter.
                     * 
                     */
                    int64_t GetAutoExpire() const;

                    /**
                     * 判断参数 AutoExpire 是否已赋值
                     * @return AutoExpire 是否已赋值
                     * 
                     */
                    bool AutoExpireHasBeenSet() const;

                    /**
                     * 获取MaxLength parameter.
                     * @return MaxLength MaxLength parameter.
                     * 
                     */
                    int64_t GetMaxLength() const;

                    /**
                     * 判断参数 MaxLength 是否已赋值
                     * @return MaxLength 是否已赋值
                     * 
                     */
                    bool MaxLengthHasBeenSet() const;

                    /**
                     * 获取MaxLengthBytes parameter.
                     * @return MaxLengthBytes MaxLengthBytes parameter.
                     * 
                     */
                    int64_t GetMaxLengthBytes() const;

                    /**
                     * 判断参数 MaxLengthBytes 是否已赋值
                     * @return MaxLengthBytes 是否已赋值
                     * 
                     */
                    bool MaxLengthBytesHasBeenSet() const;

                    /**
                     * 获取DeliveryLimit parameter. specifies the parameter dedicated to the quorum type.
                     * @return DeliveryLimit DeliveryLimit parameter. specifies the parameter dedicated to the quorum type.
                     * 
                     */
                    int64_t GetDeliveryLimit() const;

                    /**
                     * 判断参数 DeliveryLimit 是否已赋值
                     * @return DeliveryLimit 是否已赋值
                     * 
                     */
                    bool DeliveryLimitHasBeenSet() const;

                    /**
                     * 获取OverflowBehaviour parameter specifies a value of drop-head, reject-publish, or reject-publish-dlx.
                     * @return OverflowBehaviour OverflowBehaviour parameter specifies a value of drop-head, reject-publish, or reject-publish-dlx.
                     * 
                     */
                    std::string GetOverflowBehaviour() const;

                    /**
                     * 判断参数 OverflowBehaviour 是否已赋值
                     * @return OverflowBehaviour 是否已赋值
                     * 
                     */
                    bool OverflowBehaviourHasBeenSet() const;

                    /**
                     * 获取DeadLetterExchange parameter.
                     * @return DeadLetterExchange DeadLetterExchange parameter.
                     * 
                     */
                    std::string GetDeadLetterExchange() const;

                    /**
                     * 判断参数 DeadLetterExchange 是否已赋值
                     * @return DeadLetterExchange 是否已赋值
                     * 
                     */
                    bool DeadLetterExchangeHasBeenSet() const;

                    /**
                     * 获取The DeadLetterRoutingKey parameter.
                     * @return DeadLetterRoutingKey The DeadLetterRoutingKey parameter.
                     * 
                     */
                    std::string GetDeadLetterRoutingKey() const;

                    /**
                     * 判断参数 DeadLetterRoutingKey 是否已赋值
                     * @return DeadLetterRoutingKey 是否已赋值
                     * 
                     */
                    bool DeadLetterRoutingKeyHasBeenSet() const;

                    /**
                     * 获取SingleActiveConsumer parameter.
                     * @return SingleActiveConsumer SingleActiveConsumer parameter.
                     * 
                     */
                    bool GetSingleActiveConsumer() const;

                    /**
                     * 判断参数 SingleActiveConsumer 是否已赋值
                     * @return SingleActiveConsumer 是否已赋值
                     * 
                     */
                    bool SingleActiveConsumerHasBeenSet() const;

                    /**
                     * 获取MaximumPriority parameter. specifies that it is dedicated for the classic type.
                     * @return MaximumPriority MaximumPriority parameter. specifies that it is dedicated for the classic type.
                     * 
                     */
                    int64_t GetMaximumPriority() const;

                    /**
                     * 判断参数 MaximumPriority 是否已赋值
                     * @return MaximumPriority 是否已赋值
                     * 
                     */
                    bool MaximumPriorityHasBeenSet() const;

                    /**
                     * 获取LazyMode parameter, dedicated for classic type.
                     * @return LazyMode LazyMode parameter, dedicated for classic type.
                     * 
                     */
                    bool GetLazyMode() const;

                    /**
                     * 判断参数 LazyMode 是否已赋值
                     * @return LazyMode 是否已赋值
                     * 
                     */
                    bool LazyModeHasBeenSet() const;

                    /**
                     * 获取MasterLocator parameter, dedicated for classic type.
                     * @return MasterLocator MasterLocator parameter, dedicated for classic type.
                     * 
                     */
                    std::string GetMasterLocator() const;

                    /**
                     * 判断参数 MasterLocator 是否已赋值
                     * @return MasterLocator 是否已赋值
                     * 
                     */
                    bool MasterLocatorHasBeenSet() const;

                    /**
                     * 获取MaxInMemoryLength parameter, dedicated for quorum type.
                     * @return MaxInMemoryLength MaxInMemoryLength parameter, dedicated for quorum type.
                     * 
                     */
                    int64_t GetMaxInMemoryLength() const;

                    /**
                     * 判断参数 MaxInMemoryLength 是否已赋值
                     * @return MaxInMemoryLength 是否已赋值
                     * 
                     */
                    bool MaxInMemoryLengthHasBeenSet() const;

                    /**
                     * 获取The MaxInMemoryBytes parameter is dedicated to the quorum type.
                     * @return MaxInMemoryBytes The MaxInMemoryBytes parameter is dedicated to the quorum type.
                     * 
                     */
                    int64_t GetMaxInMemoryBytes() const;

                    /**
                     * 判断参数 MaxInMemoryBytes 是否已赋值
                     * @return MaxInMemoryBytes 是否已赋值
                     * 
                     */
                    bool MaxInMemoryBytesHasBeenSet() const;

                    /**
                     * 获取Create timestamp, in seconds.
                     * @return CreateTime Create timestamp, in seconds.
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Node.
                     * @return Node Node.
                     * 
                     */
                    std::string GetNode() const;

                    /**
                     * 判断参数 Node 是否已赋值
                     * @return Node 是否已赋值
                     * 
                     */
                    bool NodeHasBeenSet() const;

                    /**
                     * 获取Arbitration queue dead letter consistency policy.
                     * @return DeadLetterStrategy Arbitration queue dead letter consistency policy.
                     * 
                     */
                    std::string GetDeadLetterStrategy() const;

                    /**
                     * 判断参数 DeadLetterStrategy 是否已赋值
                     * @return DeadLetterStrategy 是否已赋值
                     * 
                     */
                    bool DeadLetterStrategyHasBeenSet() const;

                    /**
                     * 获取Leadership election policy for arbitration queue.
                     * @return QueueLeaderLocator Leadership election policy for arbitration queue.
                     * 
                     */
                    std::string GetQueueLeaderLocator() const;

                    /**
                     * 判断参数 QueueLeaderLocator 是否已赋值
                     * @return QueueLeaderLocator 是否已赋值
                     * 
                     */
                    bool QueueLeaderLocatorHasBeenSet() const;

                    /**
                     * 获取Specifies the initial replica group size of the arbitration queue.
                     * @return QuorumInitialGroupSize Specifies the initial replica group size of the arbitration queue.
                     * 
                     */
                    int64_t GetQuorumInitialGroupSize() const;

                    /**
                     * 判断参数 QuorumInitialGroupSize 是否已赋值
                     * @return QuorumInitialGroupSize 是否已赋值
                     * 
                     */
                    bool QuorumInitialGroupSizeHasBeenSet() const;

                    /**
                     * 获取Whether it is an exclusive queue.
                     * @return Exclusive Whether it is an exclusive queue.
                     * 
                     */
                    bool GetExclusive() const;

                    /**
                     * 判断参数 Exclusive 是否已赋值
                     * @return Exclusive 是否已赋值
                     * 
                     */
                    bool ExclusiveHasBeenSet() const;

                    /**
                     * 获取The name of the policy that takes effect.
                     * @return Policy The name of the policy that takes effect.
                     * 
                     */
                    std::string GetPolicy() const;

                    /**
                     * 判断参数 Policy 是否已赋值
                     * @return Policy 是否已赋值
                     * 
                     */
                    bool PolicyHasBeenSet() const;

                    /**
                     * 获取Additional parameters key-value.
                     * @return Arguments Additional parameters key-value.
                     * 
                     */
                    std::string GetArguments() const;

                    /**
                     * 判断参数 Arguments 是否已赋值
                     * @return Arguments 是否已赋值
                     * 
                     */
                    bool ArgumentsHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Vhost parameter.
                     */
                    std::string m_virtualHost;
                    bool m_virtualHostHasBeenSet;

                    /**
                     * Queue name.
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * Specifies the queue type. the valid values are classic or quorum.
                     */
                    std::string m_queueType;
                    bool m_queueTypeHasBeenSet;

                    /**
                     * Number of online consumers.
                     */
                    int64_t m_consumers;
                    bool m_consumersHasBeenSet;

                    /**
                     * Durable flag.
                     */
                    bool m_durable;
                    bool m_durableHasBeenSet;

                    /**
                     * Automatic cleanup.
                     */
                    bool m_autoDelete;
                    bool m_autoDeleteHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * MessageTTL parameter, dedicated for classic type.
                     */
                    int64_t m_messageTTL;
                    bool m_messageTTLHasBeenSet;

                    /**
                     * AutoExpire parameter.
                     */
                    int64_t m_autoExpire;
                    bool m_autoExpireHasBeenSet;

                    /**
                     * MaxLength parameter.
                     */
                    int64_t m_maxLength;
                    bool m_maxLengthHasBeenSet;

                    /**
                     * MaxLengthBytes parameter.
                     */
                    int64_t m_maxLengthBytes;
                    bool m_maxLengthBytesHasBeenSet;

                    /**
                     * DeliveryLimit parameter. specifies the parameter dedicated to the quorum type.
                     */
                    int64_t m_deliveryLimit;
                    bool m_deliveryLimitHasBeenSet;

                    /**
                     * OverflowBehaviour parameter specifies a value of drop-head, reject-publish, or reject-publish-dlx.
                     */
                    std::string m_overflowBehaviour;
                    bool m_overflowBehaviourHasBeenSet;

                    /**
                     * DeadLetterExchange parameter.
                     */
                    std::string m_deadLetterExchange;
                    bool m_deadLetterExchangeHasBeenSet;

                    /**
                     * The DeadLetterRoutingKey parameter.
                     */
                    std::string m_deadLetterRoutingKey;
                    bool m_deadLetterRoutingKeyHasBeenSet;

                    /**
                     * SingleActiveConsumer parameter.
                     */
                    bool m_singleActiveConsumer;
                    bool m_singleActiveConsumerHasBeenSet;

                    /**
                     * MaximumPriority parameter. specifies that it is dedicated for the classic type.
                     */
                    int64_t m_maximumPriority;
                    bool m_maximumPriorityHasBeenSet;

                    /**
                     * LazyMode parameter, dedicated for classic type.
                     */
                    bool m_lazyMode;
                    bool m_lazyModeHasBeenSet;

                    /**
                     * MasterLocator parameter, dedicated for classic type.
                     */
                    std::string m_masterLocator;
                    bool m_masterLocatorHasBeenSet;

                    /**
                     * MaxInMemoryLength parameter, dedicated for quorum type.
                     */
                    int64_t m_maxInMemoryLength;
                    bool m_maxInMemoryLengthHasBeenSet;

                    /**
                     * The MaxInMemoryBytes parameter is dedicated to the quorum type.
                     */
                    int64_t m_maxInMemoryBytes;
                    bool m_maxInMemoryBytesHasBeenSet;

                    /**
                     * Create timestamp, in seconds.
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Node.
                     */
                    std::string m_node;
                    bool m_nodeHasBeenSet;

                    /**
                     * Arbitration queue dead letter consistency policy.
                     */
                    std::string m_deadLetterStrategy;
                    bool m_deadLetterStrategyHasBeenSet;

                    /**
                     * Leadership election policy for arbitration queue.
                     */
                    std::string m_queueLeaderLocator;
                    bool m_queueLeaderLocatorHasBeenSet;

                    /**
                     * Specifies the initial replica group size of the arbitration queue.
                     */
                    int64_t m_quorumInitialGroupSize;
                    bool m_quorumInitialGroupSizeHasBeenSet;

                    /**
                     * Whether it is an exclusive queue.
                     */
                    bool m_exclusive;
                    bool m_exclusiveHasBeenSet;

                    /**
                     * The name of the policy that takes effect.
                     */
                    std::string m_policy;
                    bool m_policyHasBeenSet;

                    /**
                     * Additional parameters key-value.
                     */
                    std::string m_arguments;
                    bool m_argumentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_DESCRIBERABBITMQSERVERLESSQUEUEDETAILRESPONSE_H_
