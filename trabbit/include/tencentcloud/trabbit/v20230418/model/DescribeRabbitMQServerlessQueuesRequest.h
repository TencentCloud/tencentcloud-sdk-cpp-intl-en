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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_DESCRIBERABBITMQSERVERLESSQUEUESREQUEST_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_DESCRIBERABBITMQSERVERLESSQUEUESREQUEST_H_

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
                * DescribeRabbitMQServerlessQueues request structure.
                */
                class DescribeRabbitMQServerlessQueuesRequest : public AbstractModel
                {
                public:
                    DescribeRabbitMQServerlessQueuesRequest();
                    ~DescribeRabbitMQServerlessQueuesRequest() = default;
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
                     * 获取Pagination offset
                     * @return Offset Pagination offset
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination offset
                     * @param _offset Pagination offset
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
                     * 获取Pagination limit
                     * @return Limit Pagination limit
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Pagination limit
                     * @param _limit Pagination limit
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
                     * 获取Specifies the queue type filter criteria. if it is left blank or set to "all", it indicates classic and quorum queues; if set to "classic", it filters classic queues; if set to "quorum", it filters quorum queues.
                     * @return QueueType Specifies the queue type filter criteria. if it is left blank or set to "all", it indicates classic and quorum queues; if set to "classic", it filters classic queues; if set to "quorum", it filters quorum queues.
                     * 
                     */
                    std::string GetQueueType() const;

                    /**
                     * 设置Specifies the queue type filter criteria. if it is left blank or set to "all", it indicates classic and quorum queues; if set to "classic", it filters classic queues; if set to "quorum", it filters quorum queues.
                     * @param _queueType Specifies the queue type filter criteria. if it is left blank or set to "all", it indicates classic and quorum queues; if set to "classic", it filters classic queues; if set to "quorum", it filters quorum queues.
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
ConsumerNumber: specifies the number of online consumers.
MessageHeapCount specifies the number of message backlogs.
MessageRateInOut specifies the total production and consumption rate.
MessageRateIn specifies the production rate.
MessageRateOut specifies the consumption rate.
                     * @return SortElement Sorting field.
ConsumerNumber: specifies the number of online consumers.
MessageHeapCount specifies the number of message backlogs.
MessageRateInOut specifies the total production and consumption rate.
MessageRateIn specifies the production rate.
MessageRateOut specifies the consumption rate.
                     * 
                     */
                    std::string GetSortElement() const;

                    /**
                     * 设置Sorting field.
ConsumerNumber: specifies the number of online consumers.
MessageHeapCount specifies the number of message backlogs.
MessageRateInOut specifies the total production and consumption rate.
MessageRateIn specifies the production rate.
MessageRateOut specifies the consumption rate.
                     * @param _sortElement Sorting field.
ConsumerNumber: specifies the number of online consumers.
MessageHeapCount specifies the number of message backlogs.
MessageRateInOut specifies the total production and consumption rate.
MessageRateIn specifies the production rate.
MessageRateOut specifies the consumption rate.
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
                     * 获取Sort order. valid values: ascend or descend.
                     * @return SortOrder Sort order. valid values: ascend or descend.
                     * 
                     */
                    std::string GetSortOrder() const;

                    /**
                     * 设置Sort order. valid values: ascend or descend.
                     * @param _sortOrder Sort order. valid values: ascend or descend.
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
                     * Pagination offset
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Pagination limit
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Search keywords
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * Specifies the queue type filter criteria. if it is left blank or set to "all", it indicates classic and quorum queues; if set to "classic", it filters classic queues; if set to "quorum", it filters quorum queues.
                     */
                    std::string m_queueType;
                    bool m_queueTypeHasBeenSet;

                    /**
                     * Sorting field.
ConsumerNumber: specifies the number of online consumers.
MessageHeapCount specifies the number of message backlogs.
MessageRateInOut specifies the total production and consumption rate.
MessageRateIn specifies the production rate.
MessageRateOut specifies the consumption rate.
                     */
                    std::string m_sortElement;
                    bool m_sortElementHasBeenSet;

                    /**
                     * Sort order. valid values: ascend or descend.
                     */
                    std::string m_sortOrder;
                    bool m_sortOrderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_DESCRIBERABBITMQSERVERLESSQUEUESREQUEST_H_
