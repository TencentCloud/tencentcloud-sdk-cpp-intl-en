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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQQUEUELISTINFO_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQQUEUELISTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trabbit/v20230418/model/RabbitMQQueueListConsumerDetailInfo.h>


namespace TencentCloud
{
    namespace Trabbit
    {
        namespace V20230418
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
                     * 获取Remarks.
                     * @return Remark Remarks.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks.
                     * @param _remark Remarks.
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
                     * 获取Specifies the queue type. the valid values are "classic" and "quorum".
                     * @return QueueType Specifies the queue type. the valid values are "classic" and "quorum".
                     * 
                     */
                    std::string GetQueueType() const;

                    /**
                     * 设置Specifies the queue type. the valid values are "classic" and "quorum".
                     * @param _queueType Specifies the queue type. the valid values are "classic" and "quorum".
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
                     * 获取Number of message backlogs.
                     * @return MessageHeapCount Number of message backlogs.
                     * 
                     */
                    int64_t GetMessageHeapCount() const;

                    /**
                     * 设置Number of message backlogs.
                     * @param _messageHeapCount Number of message backlogs.
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
                     * @return MessageRateIn Message production rate per second.
                     * 
                     */
                    double GetMessageRateIn() const;

                    /**
                     * 设置Message production rate per second.
                     * @param _messageRateIn Message production rate per second.
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
                     * @return MessageRateOut Message consumption rate per second.
                     * 
                     */
                    double GetMessageRateOut() const;

                    /**
                     * 设置Message consumption rate per second.
                     * @param _messageRateOut Message consumption rate per second.
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
                     * 获取Creation time
                     * @return CreateTime Creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param _createTime Creation time
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
                     * 获取Modification time
                     * @return ModifyTime Modification time
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Modification time
                     * @param _modifyTime Modification time
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
                     * 获取Specifies whether the queue is persistent. true indicates persistent, and false indicates non-persistent.
                     * @return Durable Specifies whether the queue is persistent. true indicates persistent, and false indicates non-persistent.
                     * 
                     */
                    bool GetDurable() const;

                    /**
                     * 设置Specifies whether the queue is persistent. true indicates persistent, and false indicates non-persistent.
                     * @param _durable Specifies whether the queue is persistent. true indicates persistent, and false indicates non-persistent.
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
                     * 获取Specifies whether the queue is an auto-delete queue. true indicates auto-delete, and false indicates non-auto-delete.
                     * @return AutoDelete Specifies whether the queue is an auto-delete queue. true indicates auto-delete, and false indicates non-auto-delete.
                     * 
                     */
                    bool GetAutoDelete() const;

                    /**
                     * 设置Specifies whether the queue is an auto-delete queue. true indicates auto-delete, and false indicates non-auto-delete.
                     * @param _autoDelete Specifies whether the queue is an auto-delete queue. true indicates auto-delete, and false indicates non-auto-delete.
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
                     * 获取instanceId to which the queue belongs.
                     * @return InstanceId instanceId to which the queue belongs.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置instanceId to which the queue belongs.
                     * @param _instanceId instanceId to which the queue belongs.
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
                     * 获取Name of the virtual host to which the queue belongs.
                     * @return VirtualHost Name of the virtual host to which the queue belongs.
                     * 
                     */
                    std::string GetVirtualHost() const;

                    /**
                     * 设置Name of the virtual host to which the queue belongs.
                     * @param _virtualHost Name of the virtual host to which the queue belongs.
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
                     * 获取Specifies the name of the primary node where the queue is located.
                     * @return Node Specifies the name of the primary node where the queue is located.
                     * 
                     */
                    std::string GetNode() const;

                    /**
                     * 设置Specifies the name of the primary node where the queue is located.
                     * @param _node Specifies the name of the primary node where the queue is located.
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
                     * 获取The name of the effective policy.
                     * @return Policy The name of the effective policy.
                     * 
                     */
                    std::string GetPolicy() const;

                    /**
                     * 设置The name of the effective policy.
                     * @param _policy The name of the effective policy.
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
                     * 获取Additional parameters key-value objects.
                     * @return Arguments Additional parameters key-value objects.
                     * 
                     */
                    std::string GetArguments() const;

                    /**
                     * 设置Additional parameters key-value objects.
                     * @param _arguments Additional parameters key-value objects.
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
                     * 获取Whether it is an exclusive queue.
                     * @return Exclusive Whether it is an exclusive queue.
                     * 
                     */
                    bool GetExclusive() const;

                    /**
                     * 设置Whether it is an exclusive queue.
                     * @param _exclusive Whether it is an exclusive queue.
                     * 
                     */
                    void SetExclusive(const bool& _exclusive);

                    /**
                     * 判断参数 Exclusive 是否已赋值
                     * @return Exclusive 是否已赋值
                     * 
                     */
                    bool ExclusiveHasBeenSet() const;

                private:

                    /**
                     * Queue name.
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * Remarks.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Consumer information.
                     */
                    RabbitMQQueueListConsumerDetailInfo m_consumerDetail;
                    bool m_consumerDetailHasBeenSet;

                    /**
                     * Specifies the queue type. the valid values are "classic" and "quorum".
                     */
                    std::string m_queueType;
                    bool m_queueTypeHasBeenSet;

                    /**
                     * Number of message backlogs.
                     */
                    int64_t m_messageHeapCount;
                    bool m_messageHeapCountHasBeenSet;

                    /**
                     * Message production rate per second.
                     */
                    double m_messageRateIn;
                    bool m_messageRateInHasBeenSet;

                    /**
                     * Message consumption rate per second.
                     */
                    double m_messageRateOut;
                    bool m_messageRateOutHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Modification time
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Specifies whether the queue is persistent. true indicates persistent, and false indicates non-persistent.
                     */
                    bool m_durable;
                    bool m_durableHasBeenSet;

                    /**
                     * Specifies whether the queue is an auto-delete queue. true indicates auto-delete, and false indicates non-auto-delete.
                     */
                    bool m_autoDelete;
                    bool m_autoDeleteHasBeenSet;

                    /**
                     * instanceId to which the queue belongs.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Name of the virtual host to which the queue belongs.
                     */
                    std::string m_virtualHost;
                    bool m_virtualHostHasBeenSet;

                    /**
                     * Specifies the name of the primary node where the queue is located.
                     */
                    std::string m_node;
                    bool m_nodeHasBeenSet;

                    /**
                     * The name of the effective policy.
                     */
                    std::string m_policy;
                    bool m_policyHasBeenSet;

                    /**
                     * Additional parameters key-value objects.
                     */
                    std::string m_arguments;
                    bool m_argumentsHasBeenSet;

                    /**
                     * Whether it is an exclusive queue.
                     */
                    bool m_exclusive;
                    bool m_exclusiveHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQQUEUELISTINFO_H_
