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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEMESSAGEDETAILSREQUEST_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEMESSAGEDETAILSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mqtt
    {
        namespace V20240516
        {
            namespace Model
            {
                /**
                * DescribeMessageDetails request structure.
                */
                class DescribeMessageDetailsRequest : public AbstractModel
                {
                public:
                    DescribeMessageDetailsRequest();
                    ~DescribeMessageDetailsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取tencent cloud MQTT instance ID, obtained from the [DescribeInstanceList](https://www.tencentcloud.comom/document/api/1778/111029?from_cn_redirect=1) api or console.
                     * @return InstanceId tencent cloud MQTT instance ID, obtained from the [DescribeInstanceList](https://www.tencentcloud.comom/document/api/1778/111029?from_cn_redirect=1) api or console.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置tencent cloud MQTT instance ID, obtained from the [DescribeInstanceList](https://www.tencentcloud.comom/document/api/1778/111029?from_cn_redirect=1) api or console.
                     * @param _instanceId tencent cloud MQTT instance ID, obtained from the [DescribeInstanceList](https://www.tencentcloud.comom/document/api/1778/111029?from_cn_redirect=1) api or console.
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
                     * 获取Message ID.
                     * @return MessageId Message ID.
                     * 
                     */
                    std::string GetMessageId() const;

                    /**
                     * 设置Message ID.
                     * @param _messageId Message ID.
                     * 
                     */
                    void SetMessageId(const std::string& _messageId);

                    /**
                     * 判断参数 MessageId 是否已赋值
                     * @return MessageId 是否已赋值
                     * 
                     */
                    bool MessageIdHasBeenSet() const;

                    /**
                     * 获取Subscription expression.
                     * @return Subscription Subscription expression.
                     * 
                     */
                    std::string GetSubscription() const;

                    /**
                     * 设置Subscription expression.
                     * @param _subscription Subscription expression.
                     * 
                     */
                    void SetSubscription(const std::string& _subscription);

                    /**
                     * 判断参数 Subscription 是否已赋值
                     * @return Subscription 是否已赋值
                     * 
                     */
                    bool SubscriptionHasBeenSet() const;

                private:

                    /**
                     * tencent cloud MQTT instance ID, obtained from the [DescribeInstanceList](https://www.tencentcloud.comom/document/api/1778/111029?from_cn_redirect=1) api or console.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Message ID.
                     */
                    std::string m_messageId;
                    bool m_messageIdHasBeenSet;

                    /**
                     * Subscription expression.
                     */
                    std::string m_subscription;
                    bool m_subscriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEMESSAGEDETAILSREQUEST_H_
