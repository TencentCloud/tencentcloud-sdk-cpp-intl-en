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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATERABBITMQBINDINGREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATERABBITMQBINDINGREQUEST_H_

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
                * CreateRabbitMQBinding request structure.
                */
                class CreateRabbitMQBindingRequest : public AbstractModel
                {
                public:
                    CreateRabbitMQBindingRequest();
                    ~CreateRabbitMQBindingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID, such as amqp-xxxxxxxx. effective InstanceId can be queried by logging in to the TDMQ RabbitMQ console (https://console.cloud.tencent.com/trabbitmq/cluster?rid=1).
                     * @return InstanceId Instance ID, such as amqp-xxxxxxxx. effective InstanceId can be queried by logging in to the TDMQ RabbitMQ console (https://console.cloud.tencent.com/trabbitmq/cluster?rid=1).
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID, such as amqp-xxxxxxxx. effective InstanceId can be queried by logging in to the TDMQ RabbitMQ console (https://console.cloud.tencent.com/trabbitmq/cluster?rid=1).
                     * @param _instanceId Instance ID, such as amqp-xxxxxxxx. effective InstanceId can be queried by logging in to the TDMQ RabbitMQ console (https://console.cloud.tencent.com/trabbitmq/cluster?rid=1).
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
                     * 获取VirtualHost name, such as testvhost. effective VirtualHost names can be queried by logging in to the TDMQ RabbitMQ console (https://console.cloud.tencent.com/trabbitmq/cluster?rid=1), clicking Vhost in the left sidebar, and finding the Vhost name in the Vhost list.
                     * @return VirtualHost VirtualHost name, such as testvhost. effective VirtualHost names can be queried by logging in to the TDMQ RabbitMQ console (https://console.cloud.tencent.com/trabbitmq/cluster?rid=1), clicking Vhost in the left sidebar, and finding the Vhost name in the Vhost list.
                     * 
                     */
                    std::string GetVirtualHost() const;

                    /**
                     * 设置VirtualHost name, such as testvhost. effective VirtualHost names can be queried by logging in to the TDMQ RabbitMQ console (https://console.cloud.tencent.com/trabbitmq/cluster?rid=1), clicking Vhost in the left sidebar, and finding the Vhost name in the Vhost list.
                     * @param _virtualHost VirtualHost name, such as testvhost. effective VirtualHost names can be queried by logging in to the TDMQ RabbitMQ console (https://console.cloud.tencent.com/trabbitmq/cluster?rid=1), clicking Vhost in the left sidebar, and finding the Vhost name in the Vhost list.
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
                     * 获取Source exchange.
                     * @return Source Source exchange.
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置Source exchange.
                     * @param _source Source exchange.
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取Target type. Valid values: queue, exchange.
                     * @return DestinationType Target type. Valid values: queue, exchange.
                     * 
                     */
                    std::string GetDestinationType() const;

                    /**
                     * 设置Target type. Valid values: queue, exchange.
                     * @param _destinationType Target type. Valid values: queue, exchange.
                     * 
                     */
                    void SetDestinationType(const std::string& _destinationType);

                    /**
                     * 判断参数 DestinationType 是否已赋值
                     * @return DestinationType 是否已赋值
                     * 
                     */
                    bool DestinationTypeHasBeenSet() const;

                    /**
                     * 获取Target
                     * @return Destination Target
                     * 
                     */
                    std::string GetDestination() const;

                    /**
                     * 设置Target
                     * @param _destination Target
                     * 
                     */
                    void SetDestination(const std::string& _destination);

                    /**
                     * 判断参数 Destination 是否已赋值
                     * @return Destination 是否已赋值
                     * 
                     */
                    bool DestinationHasBeenSet() const;

                    /**
                     * 获取Routing key
                     * @return RoutingKey Routing key
                     * 
                     */
                    std::string GetRoutingKey() const;

                    /**
                     * 设置Routing key
                     * @param _routingKey Routing key
                     * 
                     */
                    void SetRoutingKey(const std::string& _routingKey);

                    /**
                     * 判断参数 RoutingKey 是否已赋值
                     * @return RoutingKey 是否已赋值
                     * 
                     */
                    bool RoutingKeyHasBeenSet() const;

                private:

                    /**
                     * Instance ID, such as amqp-xxxxxxxx. effective InstanceId can be queried by logging in to the TDMQ RabbitMQ console (https://console.cloud.tencent.com/trabbitmq/cluster?rid=1).
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * VirtualHost name, such as testvhost. effective VirtualHost names can be queried by logging in to the TDMQ RabbitMQ console (https://console.cloud.tencent.com/trabbitmq/cluster?rid=1), clicking Vhost in the left sidebar, and finding the Vhost name in the Vhost list.
                     */
                    std::string m_virtualHost;
                    bool m_virtualHostHasBeenSet;

                    /**
                     * Source exchange.
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * Target type. Valid values: queue, exchange.
                     */
                    std::string m_destinationType;
                    bool m_destinationTypeHasBeenSet;

                    /**
                     * Target
                     */
                    std::string m_destination;
                    bool m_destinationHasBeenSet;

                    /**
                     * Routing key
                     */
                    std::string m_routingKey;
                    bool m_routingKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATERABBITMQBINDINGREQUEST_H_
