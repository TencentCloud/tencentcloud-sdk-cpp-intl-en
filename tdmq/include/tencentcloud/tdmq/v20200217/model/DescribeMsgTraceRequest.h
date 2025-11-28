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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEMSGTRACEREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEMSGTRACEREQUEST_H_

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
                * DescribeMsgTrace request structure.
                */
                class DescribeMsgTraceRequest : public AbstractModel
                {
                public:
                    DescribeMsgTraceRequest();
                    ~DescribeMsgTraceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Environment (namespace).
                     * @return EnvironmentId Environment (namespace).
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置Environment (namespace).
                     * @param _environmentId Environment (namespace).
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
                     * 获取Message ID.
                     * @return MsgId Message ID.
                     * 
                     */
                    std::string GetMsgId() const;

                    /**
                     * 设置Message ID.
                     * @param _msgId Message ID.
                     * 
                     */
                    void SetMsgId(const std::string& _msgId);

                    /**
                     * 判断参数 MsgId 是否已赋值
                     * @return MsgId 是否已赋值
                     * 
                     */
                    bool MsgIdHasBeenSet() const;

                    /**
                     * 获取Message production time.
                     * @return ProduceTime Message production time.
                     * 
                     */
                    std::string GetProduceTime() const;

                    /**
                     * 设置Message production time.
                     * @param _produceTime Message production time.
                     * 
                     */
                    void SetProduceTime(const std::string& _produceTime);

                    /**
                     * 判断参数 ProduceTime 是否已赋值
                     * @return ProduceTime 是否已赋值
                     * 
                     */
                    bool ProduceTimeHasBeenSet() const;

                    /**
                     * 获取Starting index. Default is 0 if left empty.
                     * @return Offset Starting index. Default is 0 if left empty.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Starting index. Default is 0 if left empty.
                     * @param _offset Starting index. Default is 0 if left empty.
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of returns, default to 10 if not specified, maximum value: 20.
                     * @return Limit Number of returns, default to 10 if not specified, maximum value: 20.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of returns, default to 10 if not specified, maximum value: 20.
                     * @param _limit Number of returns, default to 10 if not specified, maximum value: 20.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Fuzzy matching of consumer group name.
                     * @return SubscriptionName Fuzzy matching of consumer group name.
                     * 
                     */
                    std::string GetSubscriptionName() const;

                    /**
                     * 设置Fuzzy matching of consumer group name.
                     * @param _subscriptionName Fuzzy matching of consumer group name.
                     * 
                     */
                    void SetSubscriptionName(const std::string& _subscriptionName);

                    /**
                     * 判断参数 SubscriptionName 是否已赋值
                     * @return SubscriptionName 是否已赋值
                     * 
                     */
                    bool SubscriptionNameHasBeenSet() const;

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
                     * Environment (namespace).
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * Message ID.
                     */
                    std::string m_msgId;
                    bool m_msgIdHasBeenSet;

                    /**
                     * Message production time.
                     */
                    std::string m_produceTime;
                    bool m_produceTimeHasBeenSet;

                    /**
                     * Starting index. Default is 0 if left empty.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returns, default to 10 if not specified, maximum value: 20.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Fuzzy matching of consumer group name.
                     */
                    std::string m_subscriptionName;
                    bool m_subscriptionNameHasBeenSet;

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

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEMSGTRACEREQUEST_H_
