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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATESUBSCRIPTIONREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATESUBSCRIPTIONREQUEST_H_

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
                * CreateSubscription request structure.
                */
                class CreateSubscriptionRequest : public AbstractModel
                {
                public:
                    CreateSubscriptionRequest();
                    ~CreateSubscriptionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Environment (namespace) name.
                     * @return EnvironmentId Environment (namespace) name.
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置Environment (namespace) name.
                     * @param _environmentId Environment (namespace) name.
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
                     * 获取Subscriber name, which can contain up to 128 characters.
                     * @return SubscriptionName Subscriber name, which can contain up to 128 characters.
                     * 
                     */
                    std::string GetSubscriptionName() const;

                    /**
                     * 设置Subscriber name, which can contain up to 128 characters.
                     * @param _subscriptionName Subscriber name, which can contain up to 128 characters.
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
                     * 获取Whether the creation is idempotent; if not, you cannot create subscriptions with the same name.
                     * @return IsIdempotent Whether the creation is idempotent; if not, you cannot create subscriptions with the same name.
                     * 
                     */
                    bool GetIsIdempotent() const;

                    /**
                     * 设置Whether the creation is idempotent; if not, you cannot create subscriptions with the same name.
                     * @param _isIdempotent Whether the creation is idempotent; if not, you cannot create subscriptions with the same name.
                     * 
                     */
                    void SetIsIdempotent(const bool& _isIdempotent);

                    /**
                     * 判断参数 IsIdempotent 是否已赋值
                     * @return IsIdempotent 是否已赋值
                     * 
                     */
                    bool IsIdempotentHasBeenSet() const;

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

                    /**
                     * 获取Remarks (up to 128 characters).
                     * @return Remark Remarks (up to 128 characters).
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks (up to 128 characters).
                     * @param _remark Remarks (up to 128 characters).
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Whether to automatically create a dead letter topic and a retry letter topic. true: yes (default value); false: no.
                     * @return AutoCreatePolicyTopic Whether to automatically create a dead letter topic and a retry letter topic. true: yes (default value); false: no.
                     * 
                     */
                    bool GetAutoCreatePolicyTopic() const;

                    /**
                     * 设置Whether to automatically create a dead letter topic and a retry letter topic. true: yes (default value); false: no.
                     * @param _autoCreatePolicyTopic Whether to automatically create a dead letter topic and a retry letter topic. true: yes (default value); false: no.
                     * 
                     */
                    void SetAutoCreatePolicyTopic(const bool& _autoCreatePolicyTopic);

                    /**
                     * 判断参数 AutoCreatePolicyTopic 是否已赋值
                     * @return AutoCreatePolicyTopic 是否已赋值
                     * 
                     */
                    bool AutoCreatePolicyTopicHasBeenSet() const;

                    /**
                     * 获取Naming convention for dead letter and retry letter topics. `LEGACY` indicates to use the legacy naming convention, and `COMMUNITY` indicates to use the naming convention in the Pulsar community.
                     * @return PostFixPattern Naming convention for dead letter and retry letter topics. `LEGACY` indicates to use the legacy naming convention, and `COMMUNITY` indicates to use the naming convention in the Pulsar community.
                     * 
                     */
                    std::string GetPostFixPattern() const;

                    /**
                     * 设置Naming convention for dead letter and retry letter topics. `LEGACY` indicates to use the legacy naming convention, and `COMMUNITY` indicates to use the naming convention in the Pulsar community.
                     * @param _postFixPattern Naming convention for dead letter and retry letter topics. `LEGACY` indicates to use the legacy naming convention, and `COMMUNITY` indicates to use the naming convention in the Pulsar community.
                     * 
                     */
                    void SetPostFixPattern(const std::string& _postFixPattern);

                    /**
                     * 判断参数 PostFixPattern 是否已赋值
                     * @return PostFixPattern 是否已赋值
                     * 
                     */
                    bool PostFixPatternHasBeenSet() const;

                private:

                    /**
                     * Environment (namespace) name.
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * Topic name.
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * Subscriber name, which can contain up to 128 characters.
                     */
                    std::string m_subscriptionName;
                    bool m_subscriptionNameHasBeenSet;

                    /**
                     * Whether the creation is idempotent; if not, you cannot create subscriptions with the same name.
                     */
                    bool m_isIdempotent;
                    bool m_isIdempotentHasBeenSet;

                    /**
                     * Pulsar cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Remarks (up to 128 characters).
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Whether to automatically create a dead letter topic and a retry letter topic. true: yes (default value); false: no.
                     */
                    bool m_autoCreatePolicyTopic;
                    bool m_autoCreatePolicyTopicHasBeenSet;

                    /**
                     * Naming convention for dead letter and retry letter topics. `LEGACY` indicates to use the legacy naming convention, and `COMMUNITY` indicates to use the naming convention in the Pulsar community.
                     */
                    std::string m_postFixPattern;
                    bool m_postFixPatternHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATESUBSCRIPTIONREQUEST_H_
