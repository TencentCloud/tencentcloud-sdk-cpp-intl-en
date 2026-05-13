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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBESHAREDSUBSCRIPTIONCLIENTREQUEST_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBESHAREDSUBSCRIPTIONCLIENTREQUEST_H_

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
                * DescribeSharedSubscriptionClient request structure.
                */
                class DescribeSharedSubscriptionClientRequest : public AbstractModel
                {
                public:
                    DescribeSharedSubscriptionClientRequest();
                    ~DescribeSharedSubscriptionClientRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Tencent Cloud MQTT instance ID can be obtained from the [DescribeInstanceList](https://www.tencentcloud.com/document/api/1778/111029?from_cn_redirect=1) api or the console.
                     * @return InstanceId Tencent Cloud MQTT instance ID can be obtained from the [DescribeInstanceList](https://www.tencentcloud.com/document/api/1778/111029?from_cn_redirect=1) api or the console.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Tencent Cloud MQTT instance ID can be obtained from the [DescribeInstanceList](https://www.tencentcloud.com/document/api/1778/111029?from_cn_redirect=1) api or the console.
                     * @param _instanceId Tencent Cloud MQTT instance ID can be obtained from the [DescribeInstanceList](https://www.tencentcloud.com/document/api/1778/111029?from_cn_redirect=1) api or the console.
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
                     * 获取Shared subscription group name
                     * @return SharedName Shared subscription group name
                     * 
                     */
                    std::string GetSharedName() const;

                    /**
                     * 设置Shared subscription group name
                     * @param _sharedName Shared subscription group name
                     * 
                     */
                    void SetSharedName(const std::string& _sharedName);

                    /**
                     * 判断参数 SharedName 是否已赋值
                     * @return SharedName 是否已赋值
                     * 
                     */
                    bool SharedNameHasBeenSet() const;

                    /**
                     * 获取Subscription expression.
                     * @return TopicFilter Subscription expression.
                     * 
                     */
                    std::string GetTopicFilter() const;

                    /**
                     * 设置Subscription expression.
                     * @param _topicFilter Subscription expression.
                     * 
                     */
                    void SetTopicFilter(const std::string& _topicFilter);

                    /**
                     * 判断参数 TopicFilter 是否已赋值
                     * @return TopicFilter 是否已赋值
                     * 
                     */
                    bool TopicFilterHasBeenSet() const;

                private:

                    /**
                     * Tencent Cloud MQTT instance ID can be obtained from the [DescribeInstanceList](https://www.tencentcloud.com/document/api/1778/111029?from_cn_redirect=1) api or the console.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Shared subscription group name
                     */
                    std::string m_sharedName;
                    bool m_sharedNameHasBeenSet;

                    /**
                     * Subscription expression.
                     */
                    std::string m_topicFilter;
                    bool m_topicFilterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBESHAREDSUBSCRIPTIONCLIENTREQUEST_H_
