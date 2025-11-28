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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBETOPICRESPONSE_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBETOPICRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trocket/v20230308/model/SubscriptionData.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * DescribeTopic response structure.
                */
                class DescribeTopicResponse : public AbstractModel
                {
                public:
                    DescribeTopicResponse();
                    ~DescribeTopicResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Topic name
                     * @return Topic Topic name
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     * 
                     */
                    bool TopicHasBeenSet() const;

                    /**
                     * 获取Topic type.
UNSPECIFIED: not specified.
NORMAL: normal message.
FIFO: sequential message.
DELAY: delayed message.
TRANSACTION: transaction message.
                     * @return TopicType Topic type.
UNSPECIFIED: not specified.
NORMAL: normal message.
FIFO: sequential message.
DELAY: delayed message.
TRANSACTION: transaction message.
                     * 
                     */
                    std::string GetTopicType() const;

                    /**
                     * 判断参数 TopicType 是否已赋值
                     * @return TopicType 是否已赋值
                     * 
                     */
                    bool TopicTypeHasBeenSet() const;

                    /**
                     * 获取Remarks
                     * @return Remark Remarks
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Creation time. **It is a Unix timestamp (ms).**
                     * @return CreatedTime Creation time. **It is a Unix timestamp (ms).**
                     * 
                     */
                    int64_t GetCreatedTime() const;

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取Last write time. **It is a Unix timestamp (ms).**
                     * @return LastUpdateTime Last write time. **It is a Unix timestamp (ms).**
                     * 
                     */
                    int64_t GetLastUpdateTime() const;

                    /**
                     * 判断参数 LastUpdateTime 是否已赋值
                     * @return LastUpdateTime 是否已赋值
                     * 
                     */
                    bool LastUpdateTimeHasBeenSet() const;

                    /**
                     * 获取Number of Subscriptions
                     * @return SubscriptionCount Number of Subscriptions
                     * 
                     */
                    int64_t GetSubscriptionCount() const;

                    /**
                     * 判断参数 SubscriptionCount 是否已赋值
                     * @return SubscriptionCount 是否已赋值
                     * 
                     */
                    bool SubscriptionCountHasBeenSet() const;

                    /**
                     * 获取Subscribe to the relationship list.
                     * @return SubscriptionData Subscribe to the relationship list.
                     * 
                     */
                    std::vector<SubscriptionData> GetSubscriptionData() const;

                    /**
                     * 判断参数 SubscriptionData 是否已赋值
                     * @return SubscriptionData 是否已赋值
                     * 
                     */
                    bool SubscriptionDataHasBeenSet() const;

                    /**
                     * 获取Message retention period. Unit: hour.
                     * @return MsgTTL Message retention period. Unit: hour.
                     * 
                     */
                    int64_t GetMsgTTL() const;

                    /**
                     * 判断参数 MsgTTL 是否已赋值
                     * @return MsgTTL 是否已赋值
                     * 
                     */
                    bool MsgTTLHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Topic name
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * Topic type.
UNSPECIFIED: not specified.
NORMAL: normal message.
FIFO: sequential message.
DELAY: delayed message.
TRANSACTION: transaction message.
                     */
                    std::string m_topicType;
                    bool m_topicTypeHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Creation time. **It is a Unix timestamp (ms).**
                     */
                    int64_t m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * Last write time. **It is a Unix timestamp (ms).**
                     */
                    int64_t m_lastUpdateTime;
                    bool m_lastUpdateTimeHasBeenSet;

                    /**
                     * Number of Subscriptions
                     */
                    int64_t m_subscriptionCount;
                    bool m_subscriptionCountHasBeenSet;

                    /**
                     * Subscribe to the relationship list.
                     */
                    std::vector<SubscriptionData> m_subscriptionData;
                    bool m_subscriptionDataHasBeenSet;

                    /**
                     * Message retention period. Unit: hour.
                     */
                    int64_t m_msgTTL;
                    bool m_msgTTLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBETOPICRESPONSE_H_
