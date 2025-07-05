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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQVIRTUALHOSTSTATISTICS_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQVIRTUALHOSTSTATISTICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * vhost overview statistical information.
                */
                class RabbitMQVirtualHostStatistics : public AbstractModel
                {
                public:
                    RabbitMQVirtualHostStatistics();
                    ~RabbitMQVirtualHostStatistics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of queues of the current vhost.
                     * @return CurrentQueues Number of queues of the current vhost.
                     * 
                     */
                    int64_t GetCurrentQueues() const;

                    /**
                     * 设置Number of queues of the current vhost.
                     * @param _currentQueues Number of queues of the current vhost.
                     * 
                     */
                    void SetCurrentQueues(const int64_t& _currentQueues);

                    /**
                     * 判断参数 CurrentQueues 是否已赋值
                     * @return CurrentQueues 是否已赋值
                     * 
                     */
                    bool CurrentQueuesHasBeenSet() const;

                    /**
                     * 获取Number of exchanges in the current vhost.
                     * @return CurrentExchanges Number of exchanges in the current vhost.
                     * 
                     */
                    int64_t GetCurrentExchanges() const;

                    /**
                     * 设置Number of exchanges in the current vhost.
                     * @param _currentExchanges Number of exchanges in the current vhost.
                     * 
                     */
                    void SetCurrentExchanges(const int64_t& _currentExchanges);

                    /**
                     * 判断参数 CurrentExchanges 是否已赋值
                     * @return CurrentExchanges 是否已赋值
                     * 
                     */
                    bool CurrentExchangesHasBeenSet() const;

                    /**
                     * 获取Number of current connections of the vhost.
                     * @return CurrentConnections Number of current connections of the vhost.
                     * 
                     */
                    int64_t GetCurrentConnections() const;

                    /**
                     * 设置Number of current connections of the vhost.
                     * @param _currentConnections Number of current connections of the vhost.
                     * 
                     */
                    void SetCurrentConnections(const int64_t& _currentConnections);

                    /**
                     * 判断参数 CurrentConnections 是否已赋值
                     * @return CurrentConnections 是否已赋值
                     * 
                     */
                    bool CurrentConnectionsHasBeenSet() const;

                    /**
                     * 获取Number of channels for the current vhost.
                     * @return CurrentChannels Number of channels for the current vhost.
                     * 
                     */
                    int64_t GetCurrentChannels() const;

                    /**
                     * 设置Number of channels for the current vhost.
                     * @param _currentChannels Number of channels for the current vhost.
                     * 
                     */
                    void SetCurrentChannels(const int64_t& _currentChannels);

                    /**
                     * 判断参数 CurrentChannels 是否已赋值
                     * @return CurrentChannels 是否已赋值
                     * 
                     */
                    bool CurrentChannelsHasBeenSet() const;

                    /**
                     * 获取Number of users of the current vhost.
                     * @return CurrentUsers Number of users of the current vhost.
                     * 
                     */
                    int64_t GetCurrentUsers() const;

                    /**
                     * 设置Number of users of the current vhost.
                     * @param _currentUsers Number of users of the current vhost.
                     * 
                     */
                    void SetCurrentUsers(const int64_t& _currentUsers);

                    /**
                     * 判断参数 CurrentUsers 是否已赋值
                     * @return CurrentUsers 是否已赋值
                     * 
                     */
                    bool CurrentUsersHasBeenSet() const;

                private:

                    /**
                     * Number of queues of the current vhost.
                     */
                    int64_t m_currentQueues;
                    bool m_currentQueuesHasBeenSet;

                    /**
                     * Number of exchanges in the current vhost.
                     */
                    int64_t m_currentExchanges;
                    bool m_currentExchangesHasBeenSet;

                    /**
                     * Number of current connections of the vhost.
                     */
                    int64_t m_currentConnections;
                    bool m_currentConnectionsHasBeenSet;

                    /**
                     * Number of channels for the current vhost.
                     */
                    int64_t m_currentChannels;
                    bool m_currentChannelsHasBeenSet;

                    /**
                     * Number of users of the current vhost.
                     */
                    int64_t m_currentUsers;
                    bool m_currentUsersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQVIRTUALHOSTSTATISTICS_H_
