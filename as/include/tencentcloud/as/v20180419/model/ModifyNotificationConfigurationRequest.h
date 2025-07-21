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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_MODIFYNOTIFICATIONCONFIGURATIONREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_MODIFYNOTIFICATIONCONFIGURATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * ModifyNotificationConfiguration request structure.
                */
                class ModifyNotificationConfigurationRequest : public AbstractModel
                {
                public:
                    ModifyNotificationConfigurationRequest();
                    ~ModifyNotificationConfigurationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies the notification ID that needs modification. get the notification ID by logging in to the [console](https://console.cloud.tencent.com/autoscaling/group) or calling the api [DescribeNotificationConfigurations](https://intl.cloud.tencent.com/document/api/377/33183?from_cn_redirect=1) and getting `AutoScalingNotificationId` from the returned information.
                     * @return AutoScalingNotificationId Specifies the notification ID that needs modification. get the notification ID by logging in to the [console](https://console.cloud.tencent.com/autoscaling/group) or calling the api [DescribeNotificationConfigurations](https://intl.cloud.tencent.com/document/api/377/33183?from_cn_redirect=1) and getting `AutoScalingNotificationId` from the returned information.
                     * 
                     */
                    std::string GetAutoScalingNotificationId() const;

                    /**
                     * 设置Specifies the notification ID that needs modification. get the notification ID by logging in to the [console](https://console.cloud.tencent.com/autoscaling/group) or calling the api [DescribeNotificationConfigurations](https://intl.cloud.tencent.com/document/api/377/33183?from_cn_redirect=1) and getting `AutoScalingNotificationId` from the returned information.
                     * @param _autoScalingNotificationId Specifies the notification ID that needs modification. get the notification ID by logging in to the [console](https://console.cloud.tencent.com/autoscaling/group) or calling the api [DescribeNotificationConfigurations](https://intl.cloud.tencent.com/document/api/377/33183?from_cn_redirect=1) and getting `AutoScalingNotificationId` from the returned information.
                     * 
                     */
                    void SetAutoScalingNotificationId(const std::string& _autoScalingNotificationId);

                    /**
                     * 判断参数 AutoScalingNotificationId 是否已赋值
                     * @return AutoScalingNotificationId 是否已赋值
                     * 
                     */
                    bool AutoScalingNotificationIdHasBeenSet() const;

                    /**
                     * 获取Notification type, i.e., the set of types of notifications to be subscribed to. Value range:
<li>SCALE_OUT_SUCCESSFUL: scale-out succeeded</li>
<li>SCALE_OUT_FAILED: scale-out failed</li>
<li>SCALE_IN_SUCCESSFUL: scale-in succeeded</li>
<li>SCALE_IN_FAILED: scale-in failed</li>
<li>REPLACE_UNHEALTHY_INSTANCE_SUCCESSFUL: unhealthy instance replacement succeeded</li>
<li>REPLACE_UNHEALTHY_INSTANCE_FAILED: unhealthy instance replacement failed</li>
                     * @return NotificationTypes Notification type, i.e., the set of types of notifications to be subscribed to. Value range:
<li>SCALE_OUT_SUCCESSFUL: scale-out succeeded</li>
<li>SCALE_OUT_FAILED: scale-out failed</li>
<li>SCALE_IN_SUCCESSFUL: scale-in succeeded</li>
<li>SCALE_IN_FAILED: scale-in failed</li>
<li>REPLACE_UNHEALTHY_INSTANCE_SUCCESSFUL: unhealthy instance replacement succeeded</li>
<li>REPLACE_UNHEALTHY_INSTANCE_FAILED: unhealthy instance replacement failed</li>
                     * 
                     */
                    std::vector<std::string> GetNotificationTypes() const;

                    /**
                     * 设置Notification type, i.e., the set of types of notifications to be subscribed to. Value range:
<li>SCALE_OUT_SUCCESSFUL: scale-out succeeded</li>
<li>SCALE_OUT_FAILED: scale-out failed</li>
<li>SCALE_IN_SUCCESSFUL: scale-in succeeded</li>
<li>SCALE_IN_FAILED: scale-in failed</li>
<li>REPLACE_UNHEALTHY_INSTANCE_SUCCESSFUL: unhealthy instance replacement succeeded</li>
<li>REPLACE_UNHEALTHY_INSTANCE_FAILED: unhealthy instance replacement failed</li>
                     * @param _notificationTypes Notification type, i.e., the set of types of notifications to be subscribed to. Value range:
<li>SCALE_OUT_SUCCESSFUL: scale-out succeeded</li>
<li>SCALE_OUT_FAILED: scale-out failed</li>
<li>SCALE_IN_SUCCESSFUL: scale-in succeeded</li>
<li>SCALE_IN_FAILED: scale-in failed</li>
<li>REPLACE_UNHEALTHY_INSTANCE_SUCCESSFUL: unhealthy instance replacement succeeded</li>
<li>REPLACE_UNHEALTHY_INSTANCE_FAILED: unhealthy instance replacement failed</li>
                     * 
                     */
                    void SetNotificationTypes(const std::vector<std::string>& _notificationTypes);

                    /**
                     * 判断参数 NotificationTypes 是否已赋值
                     * @return NotificationTypes 是否已赋值
                     * 
                     */
                    bool NotificationTypesHasBeenSet() const;

                    /**
                     * 获取Notification GROUP ID, which is the USER GROUP ID collection. USER GROUP ID can be accessed through [ListGroups](https://intl.cloud.tencent.com/document/product/598/34589?from_cn_redirect=1). this parameter is valid only when `TargetType` is `USER_GROUP`.
                     * @return NotificationUserGroupIds Notification GROUP ID, which is the USER GROUP ID collection. USER GROUP ID can be accessed through [ListGroups](https://intl.cloud.tencent.com/document/product/598/34589?from_cn_redirect=1). this parameter is valid only when `TargetType` is `USER_GROUP`.
                     * 
                     */
                    std::vector<std::string> GetNotificationUserGroupIds() const;

                    /**
                     * 设置Notification GROUP ID, which is the USER GROUP ID collection. USER GROUP ID can be accessed through [ListGroups](https://intl.cloud.tencent.com/document/product/598/34589?from_cn_redirect=1). this parameter is valid only when `TargetType` is `USER_GROUP`.
                     * @param _notificationUserGroupIds Notification GROUP ID, which is the USER GROUP ID collection. USER GROUP ID can be accessed through [ListGroups](https://intl.cloud.tencent.com/document/product/598/34589?from_cn_redirect=1). this parameter is valid only when `TargetType` is `USER_GROUP`.
                     * 
                     */
                    void SetNotificationUserGroupIds(const std::vector<std::string>& _notificationUserGroupIds);

                    /**
                     * 判断参数 NotificationUserGroupIds 是否已赋值
                     * @return NotificationUserGroupIds 是否已赋值
                     * 
                     */
                    bool NotificationUserGroupIdsHasBeenSet() const;

                    /**
                     * 获取The TDMQ CMQ QUEUE name. [the original CMQ is offline](https://intl.cloud.tencent.com/document/product/1496/83970?from_cn_redirect=1). currently, only TDMQ CMQ is recommended for use. this parameter is valid only when `TargetType` is `TDMQ_CMQ_QUEUE`.
                     * @return QueueName The TDMQ CMQ QUEUE name. [the original CMQ is offline](https://intl.cloud.tencent.com/document/product/1496/83970?from_cn_redirect=1). currently, only TDMQ CMQ is recommended for use. this parameter is valid only when `TargetType` is `TDMQ_CMQ_QUEUE`.
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置The TDMQ CMQ QUEUE name. [the original CMQ is offline](https://intl.cloud.tencent.com/document/product/1496/83970?from_cn_redirect=1). currently, only TDMQ CMQ is recommended for use. this parameter is valid only when `TargetType` is `TDMQ_CMQ_QUEUE`.
                     * @param _queueName The TDMQ CMQ QUEUE name. [the original CMQ is offline](https://intl.cloud.tencent.com/document/product/1496/83970?from_cn_redirect=1). currently, only TDMQ CMQ is recommended for use. this parameter is valid only when `TargetType` is `TDMQ_CMQ_QUEUE`.
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
                     * 获取The TDMQ CMQ TOPIC name. [original CMQ is offline](https://intl.cloud.tencent.com/document/product/1496/83970?from_cn_redirect=1). currently, only TDMQ CMQ is recommended for use. this parameter is valid only when `TargetType` is `TDMQ_CMQ_TOPIC`.
                     * @return TopicName The TDMQ CMQ TOPIC name. [original CMQ is offline](https://intl.cloud.tencent.com/document/product/1496/83970?from_cn_redirect=1). currently, only TDMQ CMQ is recommended for use. this parameter is valid only when `TargetType` is `TDMQ_CMQ_TOPIC`.
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置The TDMQ CMQ TOPIC name. [original CMQ is offline](https://intl.cloud.tencent.com/document/product/1496/83970?from_cn_redirect=1). currently, only TDMQ CMQ is recommended for use. this parameter is valid only when `TargetType` is `TDMQ_CMQ_TOPIC`.
                     * @param _topicName The TDMQ CMQ TOPIC name. [original CMQ is offline](https://intl.cloud.tencent.com/document/product/1496/83970?from_cn_redirect=1). currently, only TDMQ CMQ is recommended for use. this parameter is valid only when `TargetType` is `TDMQ_CMQ_TOPIC`.
                     * 
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     * 
                     */
                    bool TopicNameHasBeenSet() const;

                private:

                    /**
                     * Specifies the notification ID that needs modification. get the notification ID by logging in to the [console](https://console.cloud.tencent.com/autoscaling/group) or calling the api [DescribeNotificationConfigurations](https://intl.cloud.tencent.com/document/api/377/33183?from_cn_redirect=1) and getting `AutoScalingNotificationId` from the returned information.
                     */
                    std::string m_autoScalingNotificationId;
                    bool m_autoScalingNotificationIdHasBeenSet;

                    /**
                     * Notification type, i.e., the set of types of notifications to be subscribed to. Value range:
<li>SCALE_OUT_SUCCESSFUL: scale-out succeeded</li>
<li>SCALE_OUT_FAILED: scale-out failed</li>
<li>SCALE_IN_SUCCESSFUL: scale-in succeeded</li>
<li>SCALE_IN_FAILED: scale-in failed</li>
<li>REPLACE_UNHEALTHY_INSTANCE_SUCCESSFUL: unhealthy instance replacement succeeded</li>
<li>REPLACE_UNHEALTHY_INSTANCE_FAILED: unhealthy instance replacement failed</li>
                     */
                    std::vector<std::string> m_notificationTypes;
                    bool m_notificationTypesHasBeenSet;

                    /**
                     * Notification GROUP ID, which is the USER GROUP ID collection. USER GROUP ID can be accessed through [ListGroups](https://intl.cloud.tencent.com/document/product/598/34589?from_cn_redirect=1). this parameter is valid only when `TargetType` is `USER_GROUP`.
                     */
                    std::vector<std::string> m_notificationUserGroupIds;
                    bool m_notificationUserGroupIdsHasBeenSet;

                    /**
                     * The TDMQ CMQ QUEUE name. [the original CMQ is offline](https://intl.cloud.tencent.com/document/product/1496/83970?from_cn_redirect=1). currently, only TDMQ CMQ is recommended for use. this parameter is valid only when `TargetType` is `TDMQ_CMQ_QUEUE`.
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * The TDMQ CMQ TOPIC name. [original CMQ is offline](https://intl.cloud.tencent.com/document/product/1496/83970?from_cn_redirect=1). currently, only TDMQ CMQ is recommended for use. this parameter is valid only when `TargetType` is `TDMQ_CMQ_TOPIC`.
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_MODIFYNOTIFICATIONCONFIGURATIONREQUEST_H_
