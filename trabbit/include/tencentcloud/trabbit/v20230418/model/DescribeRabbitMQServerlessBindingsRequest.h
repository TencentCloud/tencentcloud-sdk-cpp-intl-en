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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_DESCRIBERABBITMQSERVERLESSBINDINGSREQUEST_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_DESCRIBERABBITMQSERVERLESSBINDINGSREQUEST_H_

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
                * DescribeRabbitMQServerlessBindings request structure.
                */
                class DescribeRabbitMQServerlessBindingsRequest : public AbstractModel
                {
                public:
                    DescribeRabbitMQServerlessBindingsRequest();
                    ~DescribeRabbitMQServerlessBindingsRequest() = default;
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
                     * 获取<p>Pagination offset</p>
                     * @return Offset <p>Pagination offset</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>Pagination offset</p>
                     * @param _offset <p>Pagination offset</p>
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
                     * 获取<p>Pagination limit</p>
                     * @return Limit <p>Pagination limit</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>Pagination limit</p>
                     * @param _limit <p>Pagination limit</p>
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
                     * 获取<p>Search keywords, do fuzzy search based on source exchange name/target resource name</p>
                     * @return SearchWord <p>Search keywords, do fuzzy search based on source exchange name/target resource name</p>
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置<p>Search keywords, do fuzzy search based on source exchange name/target resource name</p>
                     * @param _searchWord <p>Search keywords, do fuzzy search based on source exchange name/target resource name</p>
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
                     * 获取<p>Precise search and filter based on source Exchange</p>
                     * @return SourceExchange <p>Precise search and filter based on source Exchange</p>
                     * 
                     */
                    std::string GetSourceExchange() const;

                    /**
                     * 设置<p>Precise search and filter based on source Exchange</p>
                     * @param _sourceExchange <p>Precise search and filter based on source Exchange</p>
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
                     * 获取<p>Precise search filter based on target QueueName and DestinationExchange cannot be set both at the same time</p>
                     * @return QueueName <p>Precise search filter based on target QueueName and DestinationExchange cannot be set both at the same time</p>
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置<p>Precise search filter based on target QueueName and DestinationExchange cannot be set both at the same time</p>
                     * @param _queueName <p>Precise search filter based on target QueueName and DestinationExchange cannot be set both at the same time</p>
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
                     * 获取<p>Precise search filter based on target Exchange and QueueName filter cannot be set both at the same time</p>
                     * @return DestinationExchange <p>Precise search filter based on target Exchange and QueueName filter cannot be set both at the same time</p>
                     * 
                     */
                    std::string GetDestinationExchange() const;

                    /**
                     * 设置<p>Precise search filter based on target Exchange and QueueName filter cannot be set both at the same time</p>
                     * @param _destinationExchange <p>Precise search filter based on target Exchange and QueueName filter cannot be set both at the same time</p>
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
                     * <p>Pagination offset</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Pagination limit</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Search keywords, do fuzzy search based on source exchange name/target resource name</p>
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * <p>Precise search and filter based on source Exchange</p>
                     */
                    std::string m_sourceExchange;
                    bool m_sourceExchangeHasBeenSet;

                    /**
                     * <p>Precise search filter based on target QueueName and DestinationExchange cannot be set both at the same time</p>
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * <p>Precise search filter based on target Exchange and QueueName filter cannot be set both at the same time</p>
                     */
                    std::string m_destinationExchange;
                    bool m_destinationExchangeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_DESCRIBERABBITMQSERVERLESSBINDINGSREQUEST_H_
