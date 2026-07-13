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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_CREATERABBITMQSERVERLESSBINDINGREQUEST_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_CREATERABBITMQSERVERLESSBINDINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trabbit/v20230418/model/RabbitMQServerlessKeyValuePair.h>


namespace TencentCloud
{
    namespace Trabbit
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * CreateRabbitMQServerlessBinding request structure.
                */
                class CreateRabbitMQServerlessBindingRequest : public AbstractModel
                {
                public:
                    CreateRabbitMQServerlessBindingRequest();
                    ~CreateRabbitMQServerlessBindingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Instance Id</p>
                     * @return InstanceId <p>Instance Id</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance Id</p>
                     * @param _instanceId <p>Instance Id</p>
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
                     * 获取<p>Vhost parameter</p>
                     * @return VirtualHost <p>Vhost parameter</p>
                     * 
                     */
                    std::string GetVirtualHost() const;

                    /**
                     * 设置<p>Vhost parameter</p>
                     * @param _virtualHost <p>Vhost parameter</p>
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
                     * 获取<p>Source exchange</p>
                     * @return Source <p>Source exchange</p>
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置<p>Source exchange</p>
                     * @param _source <p>Source exchange</p>
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
                     * 获取<p>Target type, value queue or exchange</p>
                     * @return DestinationType <p>Target type, value queue or exchange</p>
                     * 
                     */
                    std::string GetDestinationType() const;

                    /**
                     * 设置<p>Target type, value queue or exchange</p>
                     * @param _destinationType <p>Target type, value queue or exchange</p>
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
                     * 获取<p>Target queue or switch</p>
                     * @return Destination <p>Target queue or switch</p>
                     * 
                     */
                    std::string GetDestination() const;

                    /**
                     * 设置<p>Target queue or switch</p>
                     * @param _destination <p>Target queue or switch</p>
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
                     * 获取<p>Bind key</p>
                     * @return RoutingKey <p>Bind key</p>
                     * 
                     */
                    std::string GetRoutingKey() const;

                    /**
                     * 设置<p>Bind key</p>
                     * @param _routingKey <p>Bind key</p>
                     * 
                     */
                    void SetRoutingKey(const std::string& _routingKey);

                    /**
                     * 判断参数 RoutingKey 是否已赋值
                     * @return RoutingKey 是否已赋值
                     * 
                     */
                    bool RoutingKeyHasBeenSet() const;

                    /**
                     * 获取<p>When creating a Binding for Header type Exchange, parameters can be passed in. No need to input for other types of Exchange.</p>
                     * @return Arguments <p>When creating a Binding for Header type Exchange, parameters can be passed in. No need to input for other types of Exchange.</p>
                     * 
                     */
                    std::vector<RabbitMQServerlessKeyValuePair> GetArguments() const;

                    /**
                     * 设置<p>When creating a Binding for Header type Exchange, parameters can be passed in. No need to input for other types of Exchange.</p>
                     * @param _arguments <p>When creating a Binding for Header type Exchange, parameters can be passed in. No need to input for other types of Exchange.</p>
                     * 
                     */
                    void SetArguments(const std::vector<RabbitMQServerlessKeyValuePair>& _arguments);

                    /**
                     * 判断参数 Arguments 是否已赋值
                     * @return Arguments 是否已赋值
                     * 
                     */
                    bool ArgumentsHasBeenSet() const;

                private:

                    /**
                     * <p>Instance Id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Vhost parameter</p>
                     */
                    std::string m_virtualHost;
                    bool m_virtualHostHasBeenSet;

                    /**
                     * <p>Source exchange</p>
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * <p>Target type, value queue or exchange</p>
                     */
                    std::string m_destinationType;
                    bool m_destinationTypeHasBeenSet;

                    /**
                     * <p>Target queue or switch</p>
                     */
                    std::string m_destination;
                    bool m_destinationHasBeenSet;

                    /**
                     * <p>Bind key</p>
                     */
                    std::string m_routingKey;
                    bool m_routingKeyHasBeenSet;

                    /**
                     * <p>When creating a Binding for Header type Exchange, parameters can be passed in. No need to input for other types of Exchange.</p>
                     */
                    std::vector<RabbitMQServerlessKeyValuePair> m_arguments;
                    bool m_argumentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_CREATERABBITMQSERVERLESSBINDINGREQUEST_H_
