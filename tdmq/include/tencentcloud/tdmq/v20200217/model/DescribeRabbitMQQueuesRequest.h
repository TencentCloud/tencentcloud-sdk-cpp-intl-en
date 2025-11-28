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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBERABBITMQQUEUESREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBERABBITMQQUEUESREQUEST_H_

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
                * DescribeRabbitMQQueues request structure.
                */
                class DescribeRabbitMQQueuesRequest : public AbstractModel
                {
                public:
                    DescribeRabbitMQQueuesRequest();
                    ~DescribeRabbitMQQueuesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID, such as amqp-xxxxxxxx. valid InstanceId can be queried by logging in to the TDMQ RabbitMQ console (https://console.cloud.tencent.com/trabbitmq/cluster?rid=1).
                     * @return InstanceId Instance ID, such as amqp-xxxxxxxx. valid InstanceId can be queried by logging in to the TDMQ RabbitMQ console (https://console.cloud.tencent.com/trabbitmq/cluster?rid=1).
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID, such as amqp-xxxxxxxx. valid InstanceId can be queried by logging in to the TDMQ RabbitMQ console (https://console.cloud.tencent.com/trabbitmq/cluster?rid=1).
                     * @param _instanceId Instance ID, such as amqp-xxxxxxxx. valid InstanceId can be queried by logging in to the TDMQ RabbitMQ console (https://console.cloud.tencent.com/trabbitmq/cluster?rid=1).
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
                     * 获取Specifies the pagination Offset. default is 0.
                     * @return Offset Specifies the pagination Offset. default is 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Specifies the pagination Offset. default is 0.
                     * @param _offset Specifies the pagination Offset. default is 0.
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
                     * 获取Pagination Limit. default is 20.
                     * @return Limit Pagination Limit. default is 20.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Pagination Limit. default is 20.
                     * @param _limit Pagination Limit. default is 20.
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
                     * 获取Search keywords
                     * @return SearchWord Search keywords
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置Search keywords
                     * @param _searchWord Search keywords
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
                     * 获取Filter criteria for queue type. valid values: "all" (default): filter regular and quorum queues; "classic": filter classic (ordinary) queues; "quorum": filter quorum queues.
                     * @return QueueType Filter criteria for queue type. valid values: "all" (default): filter regular and quorum queues; "classic": filter classic (ordinary) queues; "quorum": filter quorum queues.
                     * 
                     */
                    std::string GetQueueType() const;

                    /**
                     * 设置Filter criteria for queue type. valid values: "all" (default): filter regular and quorum queues; "classic": filter classic (ordinary) queues; "quorum": filter quorum queues.
                     * @param _queueType Filter criteria for queue type. valid values: "all" (default): filter regular and quorum queues; "classic": filter classic (ordinary) queues; "quorum": filter quorum queues.
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
                     * 获取Sorting field.
ConsumerNumber - Indicates the number of online consumers.
MessageHeapCount - Indicates the number of retained messages.
MessageRateInOut - Indicates the total production and consumption rate.
MessageRateIn - Production rate.
MessageRateOut - Consumption rate: Specifies the message consumption rate.
                     * @return SortElement Sorting field.
ConsumerNumber - Indicates the number of online consumers.
MessageHeapCount - Indicates the number of retained messages.
MessageRateInOut - Indicates the total production and consumption rate.
MessageRateIn - Production rate.
MessageRateOut - Consumption rate: Specifies the message consumption rate.
                     * 
                     */
                    std::string GetSortElement() const;

                    /**
                     * 设置Sorting field.
ConsumerNumber - Indicates the number of online consumers.
MessageHeapCount - Indicates the number of retained messages.
MessageRateInOut - Indicates the total production and consumption rate.
MessageRateIn - Production rate.
MessageRateOut - Consumption rate: Specifies the message consumption rate.
                     * @param _sortElement Sorting field.
ConsumerNumber - Indicates the number of online consumers.
MessageHeapCount - Indicates the number of retained messages.
MessageRateInOut - Indicates the total production and consumption rate.
MessageRateIn - Production rate.
MessageRateOut - Consumption rate: Specifies the message consumption rate.
                     * 
                     */
                    void SetSortElement(const std::string& _sortElement);

                    /**
                     * 判断参数 SortElement 是否已赋值
                     * @return SortElement 是否已赋值
                     * 
                     */
                    bool SortElementHasBeenSet() const;

                    /**
                     * 获取Sorting order. Valid values: ascend and descend.
Specifies the ascending order.
Desc - descending.
                     * @return SortOrder Sorting order. Valid values: ascend and descend.
Specifies the ascending order.
Desc - descending.
                     * 
                     */
                    std::string GetSortOrder() const;

                    /**
                     * 设置Sorting order. Valid values: ascend and descend.
Specifies the ascending order.
Desc - descending.
                     * @param _sortOrder Sorting order. Valid values: ascend and descend.
Specifies the ascending order.
Desc - descending.
                     * 
                     */
                    void SetSortOrder(const std::string& _sortOrder);

                    /**
                     * 判断参数 SortOrder 是否已赋值
                     * @return SortOrder 是否已赋值
                     * 
                     */
                    bool SortOrderHasBeenSet() const;

                private:

                    /**
                     * Instance ID, such as amqp-xxxxxxxx. valid InstanceId can be queried by logging in to the TDMQ RabbitMQ console (https://console.cloud.tencent.com/trabbitmq/cluster?rid=1).
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * VirtualHost name, such as testvhost. effective VirtualHost names can be queried by logging in to the TDMQ RabbitMQ console (https://console.cloud.tencent.com/trabbitmq/cluster?rid=1), clicking Vhost in the left sidebar, and finding the Vhost name in the Vhost list.
                     */
                    std::string m_virtualHost;
                    bool m_virtualHostHasBeenSet;

                    /**
                     * Specifies the pagination Offset. default is 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Pagination Limit. default is 20.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Search keywords
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * Filter criteria for queue type. valid values: "all" (default): filter regular and quorum queues; "classic": filter classic (ordinary) queues; "quorum": filter quorum queues.
                     */
                    std::string m_queueType;
                    bool m_queueTypeHasBeenSet;

                    /**
                     * Sorting field.
ConsumerNumber - Indicates the number of online consumers.
MessageHeapCount - Indicates the number of retained messages.
MessageRateInOut - Indicates the total production and consumption rate.
MessageRateIn - Production rate.
MessageRateOut - Consumption rate: Specifies the message consumption rate.
                     */
                    std::string m_sortElement;
                    bool m_sortElementHasBeenSet;

                    /**
                     * Sorting order. Valid values: ascend and descend.
Specifies the ascending order.
Desc - descending.
                     */
                    std::string m_sortOrder;
                    bool m_sortOrderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBERABBITMQQUEUESREQUEST_H_
