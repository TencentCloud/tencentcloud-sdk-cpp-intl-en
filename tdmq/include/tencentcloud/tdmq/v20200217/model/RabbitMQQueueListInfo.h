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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQQUEUELISTINFO_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQQUEUELISTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/RabbitMQQueueListConsumerDetailInfo.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * RabbitMQ queue list member information.
                */
                class RabbitMQQueueListInfo : public AbstractModel
                {
                public:
                    RabbitMQQueueListInfo();
                    ~RabbitMQQueueListInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Queue name
                     * @return QueueName Queue name
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置Queue name
                     * @param _queueName Queue name
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
                     * 获取Remarks

Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Remark Remarks

Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks

Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _remark Remarks

Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Consumer information.
                     * @return ConsumerDetail Consumer information.
                     * 
                     */
                    RabbitMQQueueListConsumerDetailInfo GetConsumerDetail() const;

                    /**
                     * 设置Consumer information.
                     * @param _consumerDetail Consumer information.
                     * 
                     */
                    void SetConsumerDetail(const RabbitMQQueueListConsumerDetailInfo& _consumerDetail);

                    /**
                     * 判断参数 ConsumerDetail 是否已赋值
                     * @return ConsumerDetail 是否已赋值
                     * 
                     */
                    bool ConsumerDetailHasBeenSet() const;

                    /**
                     * 获取Queue type. Valid values: "classic" and "quorum".
                     * @return QueueType Queue type. Valid values: "classic" and "quorum".
                     * 
                     */
                    std::string GetQueueType() const;

                    /**
                     * 设置Queue type. Valid values: "classic" and "quorum".
                     * @param _queueType Queue type. Valid values: "classic" and "quorum".
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
                     * 获取Number of retained messages

Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return MessageHeapCount Number of retained messages

Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMessageHeapCount() const;

                    /**
                     * 设置Number of retained messages

Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _messageHeapCount Number of retained messages

Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMessageHeapCount(const int64_t& _messageHeapCount);

                    /**
                     * 判断参数 MessageHeapCount 是否已赋值
                     * @return MessageHeapCount 是否已赋值
                     * 
                     */
                    bool MessageHeapCountHasBeenSet() const;

                    /**
                     * 获取Message production rate per second.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return MessageRateIn Message production rate per second.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetMessageRateIn() const;

                    /**
                     * 设置Message production rate per second.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _messageRateIn Message production rate per second.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMessageRateIn(const double& _messageRateIn);

                    /**
                     * 判断参数 MessageRateIn 是否已赋值
                     * @return MessageRateIn 是否已赋值
                     * 
                     */
                    bool MessageRateInHasBeenSet() const;

                    /**
                     * 获取Message consumption rate per second.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return MessageRateOut Message consumption rate per second.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetMessageRateOut() const;

                    /**
                     * 设置Message consumption rate per second.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _messageRateOut Message consumption rate per second.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMessageRateOut(const double& _messageRateOut);

                    /**
                     * 判断参数 MessageRateOut 是否已赋值
                     * @return MessageRateOut 是否已赋值
                     * 
                     */
                    bool MessageRateOutHasBeenSet() const;

                    /**
                     * 获取Creation time.
                     * @return CreateTime Creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time.
                     * @param _createTime Creation time.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Modification time.
                     * @return ModifyTime Modification time.
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Modification time.
                     * @param _modifyTime Modification time.
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取Whether the queue is durable. true: durable; false: non-durable.
                     * @return Durable Whether the queue is durable. true: durable; false: non-durable.
                     * 
                     */
                    bool GetDurable() const;

                    /**
                     * 设置Whether the queue is durable. true: durable; false: non-durable.
                     * @param _durable Whether the queue is durable. true: durable; false: non-durable.
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
                     * 获取Whether automatic deletion is set for the queue. true: automatic deletion set; false: automatic deletion not set.
                     * @return AutoDelete Whether automatic deletion is set for the queue. true: automatic deletion set; false: automatic deletion not set.
                     * 
                     */
                    bool GetAutoDelete() const;

                    /**
                     * 设置Whether automatic deletion is set for the queue. true: automatic deletion set; false: automatic deletion not set.
                     * @param _autoDelete Whether automatic deletion is set for the queue. true: automatic deletion set; false: automatic deletion not set.
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
                     * 获取Instance ID of the queue.
                     * @return InstanceId Instance ID of the queue.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID of the queue.
                     * @param _instanceId Instance ID of the queue.
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
                     * 获取Vhost name of the queue.
                     * @return VirtualHost Vhost name of the queue.
                     * 
                     */
                    std::string GetVirtualHost() const;

                    /**
                     * 设置Vhost name of the queue.
                     * @param _virtualHost Vhost name of the queue.
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
                     * 获取Primary node name of the queue.
                     * @return Node Primary node name of the queue.
                     * 
                     */
                    std::string GetNode() const;

                    /**
                     * 设置Primary node name of the queue.
                     * @param _node Primary node name of the queue.
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
                     * 获取Indicates the name of the effective policy.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Policy Indicates the name of the effective policy.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPolicy() const;

                    /**
                     * 设置Indicates the name of the effective policy.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _policy Indicates the name of the effective policy.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPolicy(const std::string& _policy);

                    /**
                     * 判断参数 Policy 是否已赋值
                     * @return Policy 是否已赋值
                     * 
                     */
                    bool PolicyHasBeenSet() const;

                    /**
                     * 获取Extended parameters of the key-value object type.
                     * @return Arguments Extended parameters of the key-value object type.
                     * 
                     */
                    std::string GetArguments() const;

                    /**
                     * 设置Extended parameters of the key-value object type.
                     * @param _arguments Extended parameters of the key-value object type.
                     * 
                     */
                    void SetArguments(const std::string& _arguments);

                    /**
                     * 判断参数 Arguments 是否已赋值
                     * @return Arguments 是否已赋值
                     * 
                     */
                    bool ArgumentsHasBeenSet() const;

                    /**
                     * 获取Whether the queue is exclusive.
                     * @return Exclusive Whether the queue is exclusive.
                     * 
                     */
                    bool GetExclusive() const;

                    /**
                     * 设置Whether the queue is exclusive.
                     * @param _exclusive Whether the queue is exclusive.
                     * 
                     */
                    void SetExclusive(const bool& _exclusive);

                    /**
                     * 判断参数 Exclusive 是否已赋值
                     * @return Exclusive 是否已赋值
                     * 
                     */
                    bool ExclusiveHasBeenSet() const;

                    /**
                     * 获取Creation time timestamp.
                     * @return CreateTs Creation time timestamp.
                     * 
                     */
                    uint64_t GetCreateTs() const;

                    /**
                     * 设置Creation time timestamp.
                     * @param _createTs Creation time timestamp.
                     * 
                     */
                    void SetCreateTs(const uint64_t& _createTs);

                    /**
                     * 判断参数 CreateTs 是否已赋值
                     * @return CreateTs 是否已赋值
                     * 
                     */
                    bool CreateTsHasBeenSet() const;

                    /**
                     * 获取Modification time timestamp.
                     * @return ModifyTs Modification time timestamp.
                     * 
                     */
                    uint64_t GetModifyTs() const;

                    /**
                     * 设置Modification time timestamp.
                     * @param _modifyTs Modification time timestamp.
                     * 
                     */
                    void SetModifyTs(const uint64_t& _modifyTs);

                    /**
                     * 判断参数 ModifyTs 是否已赋值
                     * @return ModifyTs 是否已赋值
                     * 
                     */
                    bool ModifyTsHasBeenSet() const;

                private:

                    /**
                     * Queue name
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * Remarks

Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Consumer information.
                     */
                    RabbitMQQueueListConsumerDetailInfo m_consumerDetail;
                    bool m_consumerDetailHasBeenSet;

                    /**
                     * Queue type. Valid values: "classic" and "quorum".
                     */
                    std::string m_queueType;
                    bool m_queueTypeHasBeenSet;

                    /**
                     * Number of retained messages

Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_messageHeapCount;
                    bool m_messageHeapCountHasBeenSet;

                    /**
                     * Message production rate per second.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    double m_messageRateIn;
                    bool m_messageRateInHasBeenSet;

                    /**
                     * Message consumption rate per second.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    double m_messageRateOut;
                    bool m_messageRateOutHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Modification time.
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Whether the queue is durable. true: durable; false: non-durable.
                     */
                    bool m_durable;
                    bool m_durableHasBeenSet;

                    /**
                     * Whether automatic deletion is set for the queue. true: automatic deletion set; false: automatic deletion not set.
                     */
                    bool m_autoDelete;
                    bool m_autoDeleteHasBeenSet;

                    /**
                     * Instance ID of the queue.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Vhost name of the queue.
                     */
                    std::string m_virtualHost;
                    bool m_virtualHostHasBeenSet;

                    /**
                     * Primary node name of the queue.
                     */
                    std::string m_node;
                    bool m_nodeHasBeenSet;

                    /**
                     * Indicates the name of the effective policy.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_policy;
                    bool m_policyHasBeenSet;

                    /**
                     * Extended parameters of the key-value object type.
                     */
                    std::string m_arguments;
                    bool m_argumentsHasBeenSet;

                    /**
                     * Whether the queue is exclusive.
                     */
                    bool m_exclusive;
                    bool m_exclusiveHasBeenSet;

                    /**
                     * Creation time timestamp.
                     */
                    uint64_t m_createTs;
                    bool m_createTsHasBeenSet;

                    /**
                     * Modification time timestamp.
                     */
                    uint64_t m_modifyTs;
                    bool m_modifyTsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQQUEUELISTINFO_H_
