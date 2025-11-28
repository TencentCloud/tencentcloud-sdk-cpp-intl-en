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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBERABBITMQBINDINGSREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBERABBITMQBINDINGSREQUEST_H_

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
                * DescribeRabbitMQBindings request structure.
                */
                class DescribeRabbitMQBindingsRequest : public AbstractModel
                {
                public:
                    DescribeRabbitMQBindingsRequest();
                    ~DescribeRabbitMQBindingsRequest() = default;
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
                     * 获取Specifies the page offset. default is 0.
                     * @return Offset Specifies the page offset. default is 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Specifies the page offset. default is 0.
                     * @param _offset Specifies the page offset. default is 0.
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Page limit. default value: 20.
                     * @return Limit Page limit. default value: 20.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Page limit. default value: 20.
                     * @param _limit Page limit. default value: 20.
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
                     * 获取Search keyword. Performs fuzzy search based on source exchange name, target resource name, or binding key.
                     * @return SearchWord Search keyword. Performs fuzzy search based on source exchange name, target resource name, or binding key.
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置Search keyword. Performs fuzzy search based on source exchange name, target resource name, or binding key.
                     * @param _searchWord Search keyword. Performs fuzzy search based on source exchange name, target resource name, or binding key.
                     * 
                     */
                    void SetSearchWord(const std::string& _searchWord);

                    /**
                     * 判断参数 SearchWord 是否已赋值
                     * @return SearchWord 是否已赋值
                     * 
                     */
                    bool SearchWordHasBeenSet() const;

                    /**
                     * 获取Precise search filter based on source exchange.
                     * @return SourceExchange Precise search filter based on source exchange.
                     * 
                     */
                    std::string GetSourceExchange() const;

                    /**
                     * 设置Precise search filter based on source exchange.
                     * @param _sourceExchange Precise search filter based on source exchange.
                     * 
                     */
                    void SetSourceExchange(const std::string& _sourceExchange);

                    /**
                     * 判断参数 SourceExchange 是否已赋值
                     * @return SourceExchange 是否已赋值
                     * 
                     */
                    bool SourceExchangeHasBeenSet() const;

                    /**
                     * 获取Filters by the target queue name. cannot be set with DestinationExchange filtering.
                     * @return QueueName Filters by the target queue name. cannot be set with DestinationExchange filtering.
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置Filters by the target queue name. cannot be set with DestinationExchange filtering.
                     * @param _queueName Filters by the target queue name. cannot be set with DestinationExchange filtering.
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
                     * 获取Precise search filter based on target exchange. Cannot be set simultaneously with queuename filter.
                     * @return DestinationExchange Precise search filter based on target exchange. Cannot be set simultaneously with queuename filter.
                     * 
                     */
                    std::string GetDestinationExchange() const;

                    /**
                     * 设置Precise search filter based on target exchange. Cannot be set simultaneously with queuename filter.
                     * @param _destinationExchange Precise search filter based on target exchange. Cannot be set simultaneously with queuename filter.
                     * 
                     */
                    void SetDestinationExchange(const std::string& _destinationExchange);

                    /**
                     * 判断参数 DestinationExchange 是否已赋值
                     * @return DestinationExchange 是否已赋值
                     * 
                     */
                    bool DestinationExchangeHasBeenSet() const;

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
                     * Specifies the page offset. default is 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Page limit. default value: 20.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Search keyword. Performs fuzzy search based on source exchange name, target resource name, or binding key.
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * Precise search filter based on source exchange.
                     */
                    std::string m_sourceExchange;
                    bool m_sourceExchangeHasBeenSet;

                    /**
                     * Filters by the target queue name. cannot be set with DestinationExchange filtering.
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * Precise search filter based on target exchange. Cannot be set simultaneously with queuename filter.
                     */
                    std::string m_destinationExchange;
                    bool m_destinationExchangeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBERABBITMQBINDINGSREQUEST_H_
