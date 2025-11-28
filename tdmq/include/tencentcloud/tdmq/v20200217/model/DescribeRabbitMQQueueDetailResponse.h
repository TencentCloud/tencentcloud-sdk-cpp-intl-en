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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBERABBITMQQUEUEDETAILRESPONSE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBERABBITMQQUEUEDETAILRESPONSE_H_

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
                * DescribeRabbitMQQueueDetail response structure.
                */
                class DescribeRabbitMQQueueDetailResponse : public AbstractModel
                {
                public:
                    DescribeRabbitMQQueueDetailResponse();
                    ~DescribeRabbitMQQueueDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance name
                     * @return InstanceId Instance name
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
                     * 获取Queue type. Valid values: classic and quorum.
                     * @return QueueType Queue type. Valid values: classic and quorum.
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
                     * 获取The number of online consumers.

Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Consumers The number of online consumers.

Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Durable queue flag.
                     * @return Durable Durable queue flag.
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
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return AutoDelete Automatic cleanup.
Note: this field may return `null`, indicating that no valid values can be obtained.
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

Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Remark Remarks

Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Messagettl parameter, specific to classic type.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return MessageTTL Messagettl parameter, specific to classic type.
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Autoexpire parameter.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return AutoExpire Autoexpire parameter.
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取The maxlength parameter specifies the maximum length.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return MaxLength The maxlength parameter specifies the maximum length.
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取The maxlengthbytes parameter specifies the maximum length in bytes.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return MaxLengthBytes The maxlengthbytes parameter specifies the maximum length in bytes.
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取The deliverylimit parameter is used for quorum type.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return DeliveryLimit The deliverylimit parameter is used for quorum type.
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取The overflowbehaviour parameter specifies the behavior when overflow occurs. Valid values: drop-head, reject-publish, reject-publish-dlx.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return OverflowBehaviour The overflowbehaviour parameter specifies the behavior when overflow occurs. Valid values: drop-head, reject-publish, reject-publish-dlx.
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取The deadletterexchange parameter specifies the dead letter exchange.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return DeadLetterExchange The deadletterexchange parameter specifies the dead letter exchange.
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取The deadletterroutingkey parameter specifies the routing key for dead letters. Valid values: [value1, value2, value3].
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return DeadLetterRoutingKey The deadletterroutingkey parameter specifies the routing key for dead letters. Valid values: [value1, value2, value3].
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取The singleactiveconsumer parameter indicates whether only one consumer can be active at a time. Valid values: [true, false].
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return SingleActiveConsumer The singleactiveconsumer parameter indicates whether only one consumer can be active at a time. Valid values: [true, false].
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取The maximumpriority parameter, for classic type only, specifies the maximum priority level. Value range: 1-30.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return MaximumPriority The maximumpriority parameter, for classic type only, specifies the maximum priority level. Value range: 1-30.
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取The lazymode parameter, for classic type only, indicates whether lazy mode is enabled. Valid values: [true, false].
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return LazyMode The lazymode parameter, for classic type only, indicates whether lazy mode is enabled. Valid values: [true, false].
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取The masterlocator parameter, for classic type only, specifies the master locator strategy. Valid values: [strategy1, strategy2, strategy3].
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return MasterLocator The masterlocator parameter, for classic type only, specifies the master locator strategy. Valid values: [strategy1, strategy2, strategy3].
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取The maxinmemorylength parameter, specific to quorum type.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return MaxInMemoryLength The maxinmemorylength parameter, specific to quorum type.
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取The maxinmemorybytes parameter, specific to quorum type.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return MaxInMemoryBytes The maxinmemorybytes parameter, specific to quorum type.
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Creation timestamp. Unit: seconds.
                     * @return CreateTime Creation timestamp. Unit: seconds.
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
                     * 获取Node

Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Node Node

Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Quorum queue dead letter consistency policy.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return DeadLetterStrategy Quorum queue dead letter consistency policy.
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Leader election policy for quorum queue.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return QueueLeaderLocator Leader election policy for quorum queue.
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Initial replica group size of arbitration queue.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return QuorumInitialGroupSize Initial replica group size of arbitration queue.
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Whether the queue is an exclusive queue.
                     * @return Exclusive Whether the queue is an exclusive queue.
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
                     * 获取Effective policy name.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Policy Effective policy name.
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Extended parameters of the key-value type.
                     * @return Arguments Extended parameters of the key-value type.
                     * 
                     */
                    std::string GetArguments() const;

                    /**
                     * 判断参数 Arguments 是否已赋值
                     * @return Arguments 是否已赋值
                     * 
                     */
                    bool ArgumentsHasBeenSet() const;

                    /**
                     * 获取Creation timestamp.
                     * @return CreateTs Creation timestamp.
                     * 
                     */
                    uint64_t GetCreateTs() const;

                    /**
                     * 判断参数 CreateTs 是否已赋值
                     * @return CreateTs 是否已赋值
                     * 
                     */
                    bool CreateTsHasBeenSet() const;

                    /**
                     * 获取Modification timestamp.
                     * @return ModifyTs Modification timestamp.
                     * 
                     */
                    uint64_t GetModifyTs() const;

                    /**
                     * 判断参数 ModifyTs 是否已赋值
                     * @return ModifyTs 是否已赋值
                     * 
                     */
                    bool ModifyTsHasBeenSet() const;

                private:

                    /**
                     * Instance name
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
                     * Queue type. Valid values: classic and quorum.
                     */
                    std::string m_queueType;
                    bool m_queueTypeHasBeenSet;

                    /**
                     * The number of online consumers.

Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_consumers;
                    bool m_consumersHasBeenSet;

                    /**
                     * Durable queue flag.
                     */
                    bool m_durable;
                    bool m_durableHasBeenSet;

                    /**
                     * Automatic cleanup.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool m_autoDelete;
                    bool m_autoDeleteHasBeenSet;

                    /**
                     * Remarks

Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Messagettl parameter, specific to classic type.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_messageTTL;
                    bool m_messageTTLHasBeenSet;

                    /**
                     * Autoexpire parameter.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_autoExpire;
                    bool m_autoExpireHasBeenSet;

                    /**
                     * The maxlength parameter specifies the maximum length.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_maxLength;
                    bool m_maxLengthHasBeenSet;

                    /**
                     * The maxlengthbytes parameter specifies the maximum length in bytes.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_maxLengthBytes;
                    bool m_maxLengthBytesHasBeenSet;

                    /**
                     * The deliverylimit parameter is used for quorum type.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_deliveryLimit;
                    bool m_deliveryLimitHasBeenSet;

                    /**
                     * The overflowbehaviour parameter specifies the behavior when overflow occurs. Valid values: drop-head, reject-publish, reject-publish-dlx.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_overflowBehaviour;
                    bool m_overflowBehaviourHasBeenSet;

                    /**
                     * The deadletterexchange parameter specifies the dead letter exchange.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_deadLetterExchange;
                    bool m_deadLetterExchangeHasBeenSet;

                    /**
                     * The deadletterroutingkey parameter specifies the routing key for dead letters. Valid values: [value1, value2, value3].
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_deadLetterRoutingKey;
                    bool m_deadLetterRoutingKeyHasBeenSet;

                    /**
                     * The singleactiveconsumer parameter indicates whether only one consumer can be active at a time. Valid values: [true, false].
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool m_singleActiveConsumer;
                    bool m_singleActiveConsumerHasBeenSet;

                    /**
                     * The maximumpriority parameter, for classic type only, specifies the maximum priority level. Value range: 1-30.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_maximumPriority;
                    bool m_maximumPriorityHasBeenSet;

                    /**
                     * The lazymode parameter, for classic type only, indicates whether lazy mode is enabled. Valid values: [true, false].
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool m_lazyMode;
                    bool m_lazyModeHasBeenSet;

                    /**
                     * The masterlocator parameter, for classic type only, specifies the master locator strategy. Valid values: [strategy1, strategy2, strategy3].
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_masterLocator;
                    bool m_masterLocatorHasBeenSet;

                    /**
                     * The maxinmemorylength parameter, specific to quorum type.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_maxInMemoryLength;
                    bool m_maxInMemoryLengthHasBeenSet;

                    /**
                     * The maxinmemorybytes parameter, specific to quorum type.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_maxInMemoryBytes;
                    bool m_maxInMemoryBytesHasBeenSet;

                    /**
                     * Creation timestamp. Unit: seconds.
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Node

Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_node;
                    bool m_nodeHasBeenSet;

                    /**
                     * Quorum queue dead letter consistency policy.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_deadLetterStrategy;
                    bool m_deadLetterStrategyHasBeenSet;

                    /**
                     * Leader election policy for quorum queue.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_queueLeaderLocator;
                    bool m_queueLeaderLocatorHasBeenSet;

                    /**
                     * Initial replica group size of arbitration queue.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_quorumInitialGroupSize;
                    bool m_quorumInitialGroupSizeHasBeenSet;

                    /**
                     * Whether the queue is an exclusive queue.
                     */
                    bool m_exclusive;
                    bool m_exclusiveHasBeenSet;

                    /**
                     * Effective policy name.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_policy;
                    bool m_policyHasBeenSet;

                    /**
                     * Extended parameters of the key-value type.
                     */
                    std::string m_arguments;
                    bool m_argumentsHasBeenSet;

                    /**
                     * Creation timestamp.
                     */
                    uint64_t m_createTs;
                    bool m_createTsHasBeenSet;

                    /**
                     * Modification timestamp.
                     */
                    uint64_t m_modifyTs;
                    bool m_modifyTsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBERABBITMQQUEUEDETAILRESPONSE_H_
