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
                     * 获取Pagination Offset
                     * @return Offset Pagination Offset
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination Offset
                     * @param _offset Pagination Offset
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
                     * 获取Pagination Limit
                     * @return Limit Pagination Limit
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Pagination Limit
                     * @param _limit Pagination Limit
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
                     * 获取Search keywords. do fuzzy search based on source exchange name, target resource name or binding key.
                     * @return SearchWord Search keywords. do fuzzy search based on source exchange name, target resource name or binding key.
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置Search keywords. do fuzzy search based on source exchange name, target resource name or binding key.
                     * @param _searchWord Search keywords. do fuzzy search based on source exchange name, target resource name or binding key.
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
                     * 获取Search and filter precisely according to the source Exchange.
                     * @return SourceExchange Search and filter precisely according to the source Exchange.
                     * 
                     */
                    std::string GetSourceExchange() const;

                    /**
                     * 设置Search and filter precisely according to the source Exchange.
                     * @param _sourceExchange Search and filter precisely according to the source Exchange.
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
                     * 获取Specifies precise search filter based on target QueueName. cannot set simultaneously with DestinationExchange filter.
                     * @return QueueName Specifies precise search filter based on target QueueName. cannot set simultaneously with DestinationExchange filter.
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置Specifies precise search filter based on target QueueName. cannot set simultaneously with DestinationExchange filter.
                     * @param _queueName Specifies precise search filter based on target QueueName. cannot set simultaneously with DestinationExchange filter.
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
                     * 获取Precise search filter based on target Exchange. cannot set it simultaneously with QueueName filter.
                     * @return DestinationExchange Precise search filter based on target Exchange. cannot set it simultaneously with QueueName filter.
                     * 
                     */
                    std::string GetDestinationExchange() const;

                    /**
                     * 设置Precise search filter based on target Exchange. cannot set it simultaneously with QueueName filter.
                     * @param _destinationExchange Precise search filter based on target Exchange. cannot set it simultaneously with QueueName filter.
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
                     * Pagination Offset
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Pagination Limit
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Search keywords. do fuzzy search based on source exchange name, target resource name or binding key.
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * Search and filter precisely according to the source Exchange.
                     */
                    std::string m_sourceExchange;
                    bool m_sourceExchangeHasBeenSet;

                    /**
                     * Specifies precise search filter based on target QueueName. cannot set simultaneously with DestinationExchange filter.
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * Precise search filter based on target Exchange. cannot set it simultaneously with QueueName filter.
                     */
                    std::string m_destinationExchange;
                    bool m_destinationExchangeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_DESCRIBERABBITMQSERVERLESSBINDINGSREQUEST_H_
