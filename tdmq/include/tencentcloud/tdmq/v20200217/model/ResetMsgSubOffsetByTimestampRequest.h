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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_RESETMSGSUBOFFSETBYTIMESTAMPREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_RESETMSGSUBOFFSETBYTIMESTAMPREQUEST_H_

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
                * ResetMsgSubOffsetByTimestamp request structure.
                */
                class ResetMsgSubOffsetByTimestampRequest : public AbstractModel
                {
                public:
                    ResetMsgSubOffsetByTimestampRequest();
                    ~ResetMsgSubOffsetByTimestampRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Namespace name.
                     * @return EnvironmentId Namespace name.
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置Namespace name.
                     * @param _environmentId Namespace name.
                     * 
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     * 
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取Topic name.
                     * @return TopicName Topic name.
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置Topic name.
                     * @param _topicName Topic name.
                     * 
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     * 
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取Subscriber name.
                     * @return Subscription Subscriber name.
                     * 
                     */
                    std::string GetSubscription() const;

                    /**
                     * 设置Subscriber name.
                     * @param _subscription Subscriber name.
                     * 
                     */
                    void SetSubscription(const std::string& _subscription);

                    /**
                     * 判断参数 Subscription 是否已赋值
                     * @return Subscription 是否已赋值
                     * 
                     */
                    bool SubscriptionHasBeenSet() const;

                    /**
                     * 获取Timestamp, accurate down to the millisecond.
                     * @return ToTimestamp Timestamp, accurate down to the millisecond.
                     * 
                     */
                    uint64_t GetToTimestamp() const;

                    /**
                     * 设置Timestamp, accurate down to the millisecond.
                     * @param _toTimestamp Timestamp, accurate down to the millisecond.
                     * 
                     */
                    void SetToTimestamp(const uint64_t& _toTimestamp);

                    /**
                     * 判断参数 ToTimestamp 是否已赋值
                     * @return ToTimestamp 是否已赋值
                     * 
                     */
                    bool ToTimestampHasBeenSet() const;

                    /**
                     * 获取Pulsar cluster ID
                     * @return ClusterId Pulsar cluster ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Pulsar cluster ID
                     * @param _clusterId Pulsar cluster ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                private:

                    /**
                     * Namespace name.
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * Topic name.
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * Subscriber name.
                     */
                    std::string m_subscription;
                    bool m_subscriptionHasBeenSet;

                    /**
                     * Timestamp, accurate down to the millisecond.
                     */
                    uint64_t m_toTimestamp;
                    bool m_toTimestampHasBeenSet;

                    /**
                     * Pulsar cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_RESETMSGSUBOFFSETBYTIMESTAMPREQUEST_H_
