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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_CREATERABBITMQSERVERLESSQUEUEREQUEST_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_CREATERABBITMQSERVERLESSQUEUEREQUEST_H_

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
                * CreateRabbitMQServerlessQueue request structure.
                */
                class CreateRabbitMQServerlessQueueRequest : public AbstractModel
                {
                public:
                    CreateRabbitMQServerlessQueueRequest();
                    ~CreateRabbitMQServerlessQueueRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取VHost parameter.
                     * @return VirtualHost VHost parameter.
                     * 
                     */
                    std::string GetVirtualHost() const;

                    /**
                     * 设置VHost parameter.
                     * @param _virtualHost VHost parameter.
                     * 
                     */
                    void SetVirtualHost(const std::string& _virtualHost);

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
                     * 设置Queue name.
                     * @param _queueName Queue name.
                     * 
                     */
                    void SetQueueName(const std::string& _queueName);

                    /**
                     * 判断参数 QueueName 是否已赋值
                     * @return QueueName 是否已赋值
                     * 
                     */
                    bool QueueNameHasBeenSet() const;

                    /**
                     * 获取Supports only classic.
                     * @return QueueType Supports only classic.
                     * 
                     */
                    std::string GetQueueType() const;

                    /**
                     * 设置Supports only classic.
                     * @param _queueType Supports only classic.
                     * 
                     */
                    void SetQueueType(const std::string& _queueType);

                    /**
                     * 判断参数 QueueType 是否已赋值
                     * @return QueueType 是否已赋值
                     * 
                     */
                    bool QueueTypeHasBeenSet() const;

                    /**
                     * 获取Durable flag. specifies that for the classic type, it must be passed in. for the quorum type, there is no need to pass it in and it is fixed as true.
                     * @return Durable Durable flag. specifies that for the classic type, it must be passed in. for the quorum type, there is no need to pass it in and it is fixed as true.
                     * 
                     */
                    bool GetDurable() const;

                    /**
                     * 设置Durable flag. specifies that for the classic type, it must be passed in. for the quorum type, there is no need to pass it in and it is fixed as true.
                     * @param _durable Durable flag. specifies that for the classic type, it must be passed in. for the quorum type, there is no need to pass it in and it is fixed as true.
                     * 
                     */
                    void SetDurable(const bool& _durable);

                    /**
                     * 判断参数 Durable 是否已赋值
                     * @return Durable 是否已赋值
                     * 
                     */
                    bool DurableHasBeenSet() const;

                    /**
                     * 获取Automatic cleanup. the classic type must be passed. the quorum type does not need to be passed and is fixed as false.
                     * @return AutoDelete Automatic cleanup. the classic type must be passed. the quorum type does not need to be passed and is fixed as false.
                     * 
                     */
                    bool GetAutoDelete() const;

                    /**
                     * 设置Automatic cleanup. the classic type must be passed. the quorum type does not need to be passed and is fixed as false.
                     * @param _autoDelete Automatic cleanup. the classic type must be passed. the quorum type does not need to be passed and is fixed as false.
                     * 
                     */
                    void SetAutoDelete(const bool& _autoDelete);

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
                     * 获取The MessageTTL parameter specifies settings dedicated to the classic type.
                     * @return MessageTTL The MessageTTL parameter specifies settings dedicated to the classic type.
                     * 
                     */
                    int64_t GetMessageTTL() const;

                    /**
                     * 设置The MessageTTL parameter specifies settings dedicated to the classic type.
                     * @param _messageTTL The MessageTTL parameter specifies settings dedicated to the classic type.
                     * 
                     */
                    void SetMessageTTL(const int64_t& _messageTTL);

                    /**
                     * 判断参数 MessageTTL 是否已赋值
                     * @return MessageTTL 是否已赋值
                     * 
                     */
                    bool MessageTTLHasBeenSet() const;

                    /**
                     * 获取The AutoExpire parameter, in milliseconds, indicates that the queue will be deleted if it is not used within a specified time.
                     * @return AutoExpire The AutoExpire parameter, in milliseconds, indicates that the queue will be deleted if it is not used within a specified time.
                     * 
                     */
                    int64_t GetAutoExpire() const;

                    /**
                     * 设置The AutoExpire parameter, in milliseconds, indicates that the queue will be deleted if it is not used within a specified time.
                     * @param _autoExpire The AutoExpire parameter, in milliseconds, indicates that the queue will be deleted if it is not used within a specified time.
                     * 
                     */
                    void SetAutoExpire(const int64_t& _autoExpire);

                    /**
                     * 判断参数 AutoExpire 是否已赋值
                     * @return AutoExpire 是否已赋值
                     * 
                     */
                    bool AutoExpireHasBeenSet() const;

                    /**
                     * 获取MaxLength parameter. specifies the maximum number of entries the queue can hold. if the limit is exceeded, it will be handled according to the overview behavior.
                     * @return MaxLength MaxLength parameter. specifies the maximum number of entries the queue can hold. if the limit is exceeded, it will be handled according to the overview behavior.
                     * 
                     */
                    int64_t GetMaxLength() const;

                    /**
                     * 设置MaxLength parameter. specifies the maximum number of entries the queue can hold. if the limit is exceeded, it will be handled according to the overview behavior.
                     * @param _maxLength MaxLength parameter. specifies the maximum number of entries the queue can hold. if the limit is exceeded, it will be handled according to the overview behavior.
                     * 
                     */
                    void SetMaxLength(const int64_t& _maxLength);

                    /**
                     * 判断参数 MaxLength 是否已赋值
                     * @return MaxLength 是否已赋值
                     * 
                     */
                    bool MaxLengthHasBeenSet() const;

                    /**
                     * 获取The MaxLengthBytes parameter specifies the maximum length in bytes. if the value exceeds the limit, it will be handled according to the overview behavior.
                     * @return MaxLengthBytes The MaxLengthBytes parameter specifies the maximum length in bytes. if the value exceeds the limit, it will be handled according to the overview behavior.
                     * 
                     */
                    int64_t GetMaxLengthBytes() const;

                    /**
                     * 设置The MaxLengthBytes parameter specifies the maximum length in bytes. if the value exceeds the limit, it will be handled according to the overview behavior.
                     * @param _maxLengthBytes The MaxLengthBytes parameter specifies the maximum length in bytes. if the value exceeds the limit, it will be handled according to the overview behavior.
                     * 
                     */
                    void SetMaxLengthBytes(const int64_t& _maxLengthBytes);

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
                     * 设置DeliveryLimit parameter. specifies the parameter dedicated to the quorum type.
                     * @param _deliveryLimit DeliveryLimit parameter. specifies the parameter dedicated to the quorum type.
                     * 
                     */
                    void SetDeliveryLimit(const int64_t& _deliveryLimit);

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
                     * 设置OverflowBehaviour parameter specifies a value of drop-head, reject-publish, or reject-publish-dlx.
                     * @param _overflowBehaviour OverflowBehaviour parameter specifies a value of drop-head, reject-publish, or reject-publish-dlx.
                     * 
                     */
                    void SetOverflowBehaviour(const std::string& _overflowBehaviour);

                    /**
                     * 判断参数 OverflowBehaviour 是否已赋值
                     * @return OverflowBehaviour 是否已赋值
                     * 
                     */
                    bool OverflowBehaviourHasBeenSet() const;

                    /**
                     * 获取The DeadLetterExchange parameter specifies that expired or rejected messages can be routed to a designated dead letter exchange.
                     * @return DeadLetterExchange The DeadLetterExchange parameter specifies that expired or rejected messages can be routed to a designated dead letter exchange.
                     * 
                     */
                    std::string GetDeadLetterExchange() const;

                    /**
                     * 设置The DeadLetterExchange parameter specifies that expired or rejected messages can be routed to a designated dead letter exchange.
                     * @param _deadLetterExchange The DeadLetterExchange parameter specifies that expired or rejected messages can be routed to a designated dead letter exchange.
                     * 
                     */
                    void SetDeadLetterExchange(const std::string& _deadLetterExchange);

                    /**
                     * 判断参数 DeadLetterExchange 是否已赋值
                     * @return DeadLetterExchange 是否已赋值
                     * 
                     */
                    bool DeadLetterExchangeHasBeenSet() const;

                    /**
                     * 获取The DeadLetterRoutingKey parameter specifies that it can only contain letters, digits, ".", "-", "@", and "_".
                     * @return DeadLetterRoutingKey The DeadLetterRoutingKey parameter specifies that it can only contain letters, digits, ".", "-", "@", and "_".
                     * 
                     */
                    std::string GetDeadLetterRoutingKey() const;

                    /**
                     * 设置The DeadLetterRoutingKey parameter specifies that it can only contain letters, digits, ".", "-", "@", and "_".
                     * @param _deadLetterRoutingKey The DeadLetterRoutingKey parameter specifies that it can only contain letters, digits, ".", "-", "@", and "_".
                     * 
                     */
                    void SetDeadLetterRoutingKey(const std::string& _deadLetterRoutingKey);

                    /**
                     * 判断参数 DeadLetterRoutingKey 是否已赋值
                     * @return DeadLetterRoutingKey 是否已赋值
                     * 
                     */
                    bool DeadLetterRoutingKeyHasBeenSet() const;

                    /**
                     * 获取The SingleActiveConsumer parameter. if enabled, ensure that there is only one consumer consuming from the queue every time.
                     * @return SingleActiveConsumer The SingleActiveConsumer parameter. if enabled, ensure that there is only one consumer consuming from the queue every time.
                     * 
                     */
                    bool GetSingleActiveConsumer() const;

                    /**
                     * 设置The SingleActiveConsumer parameter. if enabled, ensure that there is only one consumer consuming from the queue every time.
                     * @param _singleActiveConsumer The SingleActiveConsumer parameter. if enabled, ensure that there is only one consumer consuming from the queue every time.
                     * 
                     */
                    void SetSingleActiveConsumer(const bool& _singleActiveConsumer);

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
                     * 设置MaximumPriority parameter. specifies that it is dedicated for the classic type.
                     * @param _maximumPriority MaximumPriority parameter. specifies that it is dedicated for the classic type.
                     * 
                     */
                    void SetMaximumPriority(const int64_t& _maximumPriority);

                    /**
                     * 判断参数 MaximumPriority 是否已赋值
                     * @return MaximumPriority 是否已赋值
                     * 
                     */
                    bool MaximumPriorityHasBeenSet() const;

                    /**
                     * 获取LazyMode parameter. specifies that it is dedicated for the classic type.
                     * @return LazyMode LazyMode parameter. specifies that it is dedicated for the classic type.
                     * 
                     */
                    bool GetLazyMode() const;

                    /**
                     * 设置LazyMode parameter. specifies that it is dedicated for the classic type.
                     * @param _lazyMode LazyMode parameter. specifies that it is dedicated for the classic type.
                     * 
                     */
                    void SetLazyMode(const bool& _lazyMode);

                    /**
                     * 判断参数 LazyMode 是否已赋值
                     * @return LazyMode 是否已赋值
                     * 
                     */
                    bool LazyModeHasBeenSet() const;

                    /**
                     * 获取The MasterLocator parameter, dedicated to the classic type, specifies a value of min-masters, client-local, or random.
                     * @return MasterLocator The MasterLocator parameter, dedicated to the classic type, specifies a value of min-masters, client-local, or random.
                     * 
                     */
                    std::string GetMasterLocator() const;

                    /**
                     * 设置The MasterLocator parameter, dedicated to the classic type, specifies a value of min-masters, client-local, or random.
                     * @param _masterLocator The MasterLocator parameter, dedicated to the classic type, specifies a value of min-masters, client-local, or random.
                     * 
                     */
                    void SetMasterLocator(const std::string& _masterLocator);

                    /**
                     * 判断参数 MasterLocator 是否已赋值
                     * @return MasterLocator 是否已赋值
                     * 
                     */
                    bool MasterLocatorHasBeenSet() const;

                    /**
                     * 获取MaxInMemoryLength parameter, dedicated for quorum type. specifies the maximum number of messages in memory for quorum queues.
                     * @return MaxInMemoryLength MaxInMemoryLength parameter, dedicated for quorum type. specifies the maximum number of messages in memory for quorum queues.
                     * 
                     */
                    int64_t GetMaxInMemoryLength() const;

                    /**
                     * 设置MaxInMemoryLength parameter, dedicated for quorum type. specifies the maximum number of messages in memory for quorum queues.
                     * @param _maxInMemoryLength MaxInMemoryLength parameter, dedicated for quorum type. specifies the maximum number of messages in memory for quorum queues.
                     * 
                     */
                    void SetMaxInMemoryLength(const int64_t& _maxInMemoryLength);

                    /**
                     * 判断参数 MaxInMemoryLength 是否已赋值
                     * @return MaxInMemoryLength 是否已赋值
                     * 
                     */
                    bool MaxInMemoryLengthHasBeenSet() const;

                    /**
                     * 获取The MaxInMemoryBytes parameter is dedicated to the quorum type. it specifies the maximum total message size in memory for quorum queues.
                     * @return MaxInMemoryBytes The MaxInMemoryBytes parameter is dedicated to the quorum type. it specifies the maximum total message size in memory for quorum queues.
                     * 
                     */
                    int64_t GetMaxInMemoryBytes() const;

                    /**
                     * 设置The MaxInMemoryBytes parameter is dedicated to the quorum type. it specifies the maximum total message size in memory for quorum queues.
                     * @param _maxInMemoryBytes The MaxInMemoryBytes parameter is dedicated to the quorum type. it specifies the maximum total message size in memory for quorum queues.
                     * 
                     */
                    void SetMaxInMemoryBytes(const int64_t& _maxInMemoryBytes);

                    /**
                     * 判断参数 MaxInMemoryBytes 是否已赋值
                     * @return MaxInMemoryBytes 是否已赋值
                     * 
                     */
                    bool MaxInMemoryBytesHasBeenSet() const;

                    /**
                     * 获取Node parameter. optional. specifies the node where the specified creation queue is located.
                     * @return Node Node parameter. optional. specifies the node where the specified creation queue is located.
                     * 
                     */
                    std::string GetNode() const;

                    /**
                     * 设置Node parameter. optional. specifies the node where the specified creation queue is located.
                     * @param _node Node parameter. optional. specifies the node where the specified creation queue is located.
                     * 
                     */
                    void SetNode(const std::string& _node);

                    /**
                     * 判断参数 Node 是否已赋值
                     * @return Node 是否已赋值
                     * 
                     */
                    bool NodeHasBeenSet() const;

                    /**
                     * 获取Consistency policy for dead-letter in arbitrating queues. specifies valid values: at-most-once, at-least-once. at-most-once is selected by default.
                     * @return DeadLetterStrategy Consistency policy for dead-letter in arbitrating queues. specifies valid values: at-most-once, at-least-once. at-most-once is selected by default.
                     * 
                     */
                    std::string GetDeadLetterStrategy() const;

                    /**
                     * 设置Consistency policy for dead-letter in arbitrating queues. specifies valid values: at-most-once, at-least-once. at-most-once is selected by default.
                     * @param _deadLetterStrategy Consistency policy for dead-letter in arbitrating queues. specifies valid values: at-most-once, at-least-once. at-most-once is selected by default.
                     * 
                     */
                    void SetDeadLetterStrategy(const std::string& _deadLetterStrategy);

                    /**
                     * 判断参数 DeadLetterStrategy 是否已赋值
                     * @return DeadLetterStrategy 是否已赋值
                     * 
                     */
                    bool DeadLetterStrategyHasBeenSet() const;

                    /**
                     * 获取Specifies the leader election strategy for the arbitration queue. valid values are client-local and balanced. the default value is client-local.
                     * @return QueueLeaderLocator Specifies the leader election strategy for the arbitration queue. valid values are client-local and balanced. the default value is client-local.
                     * 
                     */
                    std::string GetQueueLeaderLocator() const;

                    /**
                     * 设置Specifies the leader election strategy for the arbitration queue. valid values are client-local and balanced. the default value is client-local.
                     * @param _queueLeaderLocator Specifies the leader election strategy for the arbitration queue. valid values are client-local and balanced. the default value is client-local.
                     * 
                     */
                    void SetQueueLeaderLocator(const std::string& _queueLeaderLocator);

                    /**
                     * 判断参数 QueueLeaderLocator 是否已赋值
                     * @return QueueLeaderLocator 是否已赋值
                     * 
                     */
                    bool QueueLeaderLocatorHasBeenSet() const;

                    /**
                     * 获取Specifies the initial replica group size of the arbitration queue. the default value is 3.
                     * @return QuorumInitialGroupSize Specifies the initial replica group size of the arbitration queue. the default value is 3.
                     * 
                     */
                    int64_t GetQuorumInitialGroupSize() const;

                    /**
                     * 设置Specifies the initial replica group size of the arbitration queue. the default value is 3.
                     * @param _quorumInitialGroupSize Specifies the initial replica group size of the arbitration queue. the default value is 3.
                     * 
                     */
                    void SetQuorumInitialGroupSize(const int64_t& _quorumInitialGroupSize);

                    /**
                     * 判断参数 QuorumInitialGroupSize 是否已赋值
                     * @return QuorumInitialGroupSize 是否已赋值
                     * 
                     */
                    bool QuorumInitialGroupSizeHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * VHost parameter.
                     */
                    std::string m_virtualHost;
                    bool m_virtualHostHasBeenSet;

                    /**
                     * Queue name.
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * Supports only classic.
                     */
                    std::string m_queueType;
                    bool m_queueTypeHasBeenSet;

                    /**
                     * Durable flag. specifies that for the classic type, it must be passed in. for the quorum type, there is no need to pass it in and it is fixed as true.
                     */
                    bool m_durable;
                    bool m_durableHasBeenSet;

                    /**
                     * Automatic cleanup. the classic type must be passed. the quorum type does not need to be passed and is fixed as false.
                     */
                    bool m_autoDelete;
                    bool m_autoDeleteHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * The MessageTTL parameter specifies settings dedicated to the classic type.
                     */
                    int64_t m_messageTTL;
                    bool m_messageTTLHasBeenSet;

                    /**
                     * The AutoExpire parameter, in milliseconds, indicates that the queue will be deleted if it is not used within a specified time.
                     */
                    int64_t m_autoExpire;
                    bool m_autoExpireHasBeenSet;

                    /**
                     * MaxLength parameter. specifies the maximum number of entries the queue can hold. if the limit is exceeded, it will be handled according to the overview behavior.
                     */
                    int64_t m_maxLength;
                    bool m_maxLengthHasBeenSet;

                    /**
                     * The MaxLengthBytes parameter specifies the maximum length in bytes. if the value exceeds the limit, it will be handled according to the overview behavior.
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
                     * The DeadLetterExchange parameter specifies that expired or rejected messages can be routed to a designated dead letter exchange.
                     */
                    std::string m_deadLetterExchange;
                    bool m_deadLetterExchangeHasBeenSet;

                    /**
                     * The DeadLetterRoutingKey parameter specifies that it can only contain letters, digits, ".", "-", "@", and "_".
                     */
                    std::string m_deadLetterRoutingKey;
                    bool m_deadLetterRoutingKeyHasBeenSet;

                    /**
                     * The SingleActiveConsumer parameter. if enabled, ensure that there is only one consumer consuming from the queue every time.
                     */
                    bool m_singleActiveConsumer;
                    bool m_singleActiveConsumerHasBeenSet;

                    /**
                     * MaximumPriority parameter. specifies that it is dedicated for the classic type.
                     */
                    int64_t m_maximumPriority;
                    bool m_maximumPriorityHasBeenSet;

                    /**
                     * LazyMode parameter. specifies that it is dedicated for the classic type.
                     */
                    bool m_lazyMode;
                    bool m_lazyModeHasBeenSet;

                    /**
                     * The MasterLocator parameter, dedicated to the classic type, specifies a value of min-masters, client-local, or random.
                     */
                    std::string m_masterLocator;
                    bool m_masterLocatorHasBeenSet;

                    /**
                     * MaxInMemoryLength parameter, dedicated for quorum type. specifies the maximum number of messages in memory for quorum queues.
                     */
                    int64_t m_maxInMemoryLength;
                    bool m_maxInMemoryLengthHasBeenSet;

                    /**
                     * The MaxInMemoryBytes parameter is dedicated to the quorum type. it specifies the maximum total message size in memory for quorum queues.
                     */
                    int64_t m_maxInMemoryBytes;
                    bool m_maxInMemoryBytesHasBeenSet;

                    /**
                     * Node parameter. optional. specifies the node where the specified creation queue is located.
                     */
                    std::string m_node;
                    bool m_nodeHasBeenSet;

                    /**
                     * Consistency policy for dead-letter in arbitrating queues. specifies valid values: at-most-once, at-least-once. at-most-once is selected by default.
                     */
                    std::string m_deadLetterStrategy;
                    bool m_deadLetterStrategyHasBeenSet;

                    /**
                     * Specifies the leader election strategy for the arbitration queue. valid values are client-local and balanced. the default value is client-local.
                     */
                    std::string m_queueLeaderLocator;
                    bool m_queueLeaderLocatorHasBeenSet;

                    /**
                     * Specifies the initial replica group size of the arbitration queue. the default value is 3.
                     */
                    int64_t m_quorumInitialGroupSize;
                    bool m_quorumInitialGroupSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_CREATERABBITMQSERVERLESSQUEUEREQUEST_H_
