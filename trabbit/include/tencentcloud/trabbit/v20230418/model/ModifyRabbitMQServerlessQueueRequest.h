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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_MODIFYRABBITMQSERVERLESSQUEUEREQUEST_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_MODIFYRABBITMQSERVERLESSQUEUEREQUEST_H_

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
                * ModifyRabbitMQServerlessQueue request structure.
                */
                class ModifyRabbitMQServerlessQueueRequest : public AbstractModel
                {
                public:
                    ModifyRabbitMQServerlessQueueRequest();
                    ~ModifyRabbitMQServerlessQueueRequest() = default;
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
                     * 获取Vhost parameter.
                     * @return VirtualHost Vhost parameter.
                     * 
                     */
                    std::string GetVirtualHost() const;

                    /**
                     * 设置Vhost parameter.
                     * @param _virtualHost Vhost parameter.
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
                     * 获取Newly modified remark.
                     * @return Remark Newly modified remark.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Newly modified remark.
                     * @param _remark Newly modified remark.
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
                     * 获取MessageTTL parameter in milliseconds, dedicated to classic event type	
                     * @return MessageTTL MessageTTL parameter in milliseconds, dedicated to classic event type	
                     * 
                     */
                    int64_t GetMessageTTL() const;

                    /**
                     * 设置MessageTTL parameter in milliseconds, dedicated to classic event type	
                     * @param _messageTTL MessageTTL parameter in milliseconds, dedicated to classic event type	
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
                     * 获取DeadLetterExchange parameter. It specifies that expired or rejected messages can be delivered to the specified dead letter exchange.
                     * @return DeadLetterExchange DeadLetterExchange parameter. It specifies that expired or rejected messages can be delivered to the specified dead letter exchange.
                     * 
                     */
                    std::string GetDeadLetterExchange() const;

                    /**
                     * 设置DeadLetterExchange parameter. It specifies that expired or rejected messages can be delivered to the specified dead letter exchange.
                     * @param _deadLetterExchange DeadLetterExchange parameter. It specifies that expired or rejected messages can be delivered to the specified dead letter exchange.
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
                     * 获取DeadLetterRoutingKey parameter. The value can only contain letters, digits, periods (.), hyphens (-), at signs (@), and underscores (_).
                     * @return DeadLetterRoutingKey DeadLetterRoutingKey parameter. The value can only contain letters, digits, periods (.), hyphens (-), at signs (@), and underscores (_).
                     * 
                     */
                    std::string GetDeadLetterRoutingKey() const;

                    /**
                     * 设置DeadLetterRoutingKey parameter. The value can only contain letters, digits, periods (.), hyphens (-), at signs (@), and underscores (_).
                     * @param _deadLetterRoutingKey DeadLetterRoutingKey parameter. The value can only contain letters, digits, periods (.), hyphens (-), at signs (@), and underscores (_).
                     * 
                     */
                    void SetDeadLetterRoutingKey(const std::string& _deadLetterRoutingKey);

                    /**
                     * 判断参数 DeadLetterRoutingKey 是否已赋值
                     * @return DeadLetterRoutingKey 是否已赋值
                     * 
                     */
                    bool DeadLetterRoutingKeyHasBeenSet() const;

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
                     * Newly modified remark.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * MessageTTL parameter in milliseconds, dedicated to classic event type	
                     */
                    int64_t m_messageTTL;
                    bool m_messageTTLHasBeenSet;

                    /**
                     * DeadLetterExchange parameter. It specifies that expired or rejected messages can be delivered to the specified dead letter exchange.
                     */
                    std::string m_deadLetterExchange;
                    bool m_deadLetterExchangeHasBeenSet;

                    /**
                     * DeadLetterRoutingKey parameter. The value can only contain letters, digits, periods (.), hyphens (-), at signs (@), and underscores (_).
                     */
                    std::string m_deadLetterRoutingKey;
                    bool m_deadLetterRoutingKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_MODIFYRABBITMQSERVERLESSQUEUEREQUEST_H_
