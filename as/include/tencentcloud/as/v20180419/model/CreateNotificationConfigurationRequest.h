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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_CREATENOTIFICATIONCONFIGURATIONREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_CREATENOTIFICATIONCONFIGURATIONREQUEST_H_

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
                * CreateNotificationConfiguration request structure.
                */
                class CreateNotificationConfigurationRequest : public AbstractModel
                {
                public:
                    CreateNotificationConfigurationRequest();
                    ~CreateNotificationConfigurationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Auto scaling group ID.
                     * @return AutoScalingGroupId Auto scaling group ID.
                     */
                    std::string GetAutoScalingGroupId() const;

                    /**
                     * 设置Auto scaling group ID.
                     * @param AutoScalingGroupId Auto scaling group ID.
                     */
                    void SetAutoScalingGroupId(const std::string& _autoScalingGroupId);

                    /**
                     * 判断参数 AutoScalingGroupId 是否已赋值
                     * @return AutoScalingGroupId 是否已赋值
                     */
                    bool AutoScalingGroupIdHasBeenSet() const;

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
                     * @param NotificationTypes Notification type, i.e., the set of types of notifications to be subscribed to. Value range:
<li>SCALE_OUT_SUCCESSFUL: scale-out succeeded</li>
<li>SCALE_OUT_FAILED: scale-out failed</li>
<li>SCALE_IN_SUCCESSFUL: scale-in succeeded</li>
<li>SCALE_IN_FAILED: scale-in failed</li>
<li>REPLACE_UNHEALTHY_INSTANCE_SUCCESSFUL: unhealthy instance replacement succeeded</li>
<li>REPLACE_UNHEALTHY_INSTANCE_FAILED: unhealthy instance replacement failed</li>
                     */
                    void SetNotificationTypes(const std::vector<std::string>& _notificationTypes);

                    /**
                     * 判断参数 NotificationTypes 是否已赋值
                     * @return NotificationTypes 是否已赋值
                     */
                    bool NotificationTypesHasBeenSet() const;

                    /**
                     * 获取Notification group ID, which is the set of user group IDs. You can query the user group IDs through the [ListGroups](https://intl.cloud.tencent.com/document/product/598/34589?from_cn_redirect=1) API.
                     * @return NotificationUserGroupIds Notification group ID, which is the set of user group IDs. You can query the user group IDs through the [ListGroups](https://intl.cloud.tencent.com/document/product/598/34589?from_cn_redirect=1) API.
                     */
                    std::vector<std::string> GetNotificationUserGroupIds() const;

                    /**
                     * 设置Notification group ID, which is the set of user group IDs. You can query the user group IDs through the [ListGroups](https://intl.cloud.tencent.com/document/product/598/34589?from_cn_redirect=1) API.
                     * @param NotificationUserGroupIds Notification group ID, which is the set of user group IDs. You can query the user group IDs through the [ListGroups](https://intl.cloud.tencent.com/document/product/598/34589?from_cn_redirect=1) API.
                     */
                    void SetNotificationUserGroupIds(const std::vector<std::string>& _notificationUserGroupIds);

                    /**
                     * 判断参数 NotificationUserGroupIds 是否已赋值
                     * @return NotificationUserGroupIds 是否已赋值
                     */
                    bool NotificationUserGroupIdsHasBeenSet() const;

                    /**
                     * 获取Notification receiver type. Valid values:
<br><li>USER_GROUP:User group
<br><li>CMQ_QUEUE:CMQ queue
<br><li>CMQ_TOPIC:CMQ topic
<br><li>TDMQ_CMQ_TOPIC:TDMQ CMQ topic
<br><li>TDMQ_CMQ_QUEUE:TDMQ CMQ queue

Default value: `USER_GROUP`.
                     * @return TargetType Notification receiver type. Valid values:
<br><li>USER_GROUP:User group
<br><li>CMQ_QUEUE:CMQ queue
<br><li>CMQ_TOPIC:CMQ topic
<br><li>TDMQ_CMQ_TOPIC:TDMQ CMQ topic
<br><li>TDMQ_CMQ_QUEUE:TDMQ CMQ queue

Default value: `USER_GROUP`.
                     */
                    std::string GetTargetType() const;

                    /**
                     * 设置Notification receiver type. Valid values:
<br><li>USER_GROUP:User group
<br><li>CMQ_QUEUE:CMQ queue
<br><li>CMQ_TOPIC:CMQ topic
<br><li>TDMQ_CMQ_TOPIC:TDMQ CMQ topic
<br><li>TDMQ_CMQ_QUEUE:TDMQ CMQ queue

Default value: `USER_GROUP`.
                     * @param TargetType Notification receiver type. Valid values:
<br><li>USER_GROUP:User group
<br><li>CMQ_QUEUE:CMQ queue
<br><li>CMQ_TOPIC:CMQ topic
<br><li>TDMQ_CMQ_TOPIC:TDMQ CMQ topic
<br><li>TDMQ_CMQ_QUEUE:TDMQ CMQ queue

Default value: `USER_GROUP`.
                     */
                    void SetTargetType(const std::string& _targetType);

                    /**
                     * 判断参数 TargetType 是否已赋值
                     * @return TargetType 是否已赋值
                     */
                    bool TargetTypeHasBeenSet() const;

                    /**
                     * 获取CMQ queue name. This parameter is required when `TargetType` is `CMQ_QUEUE` or `TDMQ_CMQ_QUEUE`.
                     * @return QueueName CMQ queue name. This parameter is required when `TargetType` is `CMQ_QUEUE` or `TDMQ_CMQ_QUEUE`.
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置CMQ queue name. This parameter is required when `TargetType` is `CMQ_QUEUE` or `TDMQ_CMQ_QUEUE`.
                     * @param QueueName CMQ queue name. This parameter is required when `TargetType` is `CMQ_QUEUE` or `TDMQ_CMQ_QUEUE`.
                     */
                    void SetQueueName(const std::string& _queueName);

                    /**
                     * 判断参数 QueueName 是否已赋值
                     * @return QueueName 是否已赋值
                     */
                    bool QueueNameHasBeenSet() const;

                    /**
                     * 获取CMQ topic name. This parameter is required when `TargetType` is `CMQ_TOPIC` or `TDMQ_CMQ_TOPIC`.
                     * @return TopicName CMQ topic name. This parameter is required when `TargetType` is `CMQ_TOPIC` or `TDMQ_CMQ_TOPIC`.
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置CMQ topic name. This parameter is required when `TargetType` is `CMQ_TOPIC` or `TDMQ_CMQ_TOPIC`.
                     * @param TopicName CMQ topic name. This parameter is required when `TargetType` is `CMQ_TOPIC` or `TDMQ_CMQ_TOPIC`.
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     */
                    bool TopicNameHasBeenSet() const;

                private:

                    /**
                     * Auto scaling group ID.
                     */
                    std::string m_autoScalingGroupId;
                    bool m_autoScalingGroupIdHasBeenSet;

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
                     * Notification group ID, which is the set of user group IDs. You can query the user group IDs through the [ListGroups](https://intl.cloud.tencent.com/document/product/598/34589?from_cn_redirect=1) API.
                     */
                    std::vector<std::string> m_notificationUserGroupIds;
                    bool m_notificationUserGroupIdsHasBeenSet;

                    /**
                     * Notification receiver type. Valid values:
<br><li>USER_GROUP:User group
<br><li>CMQ_QUEUE:CMQ queue
<br><li>CMQ_TOPIC:CMQ topic
<br><li>TDMQ_CMQ_TOPIC:TDMQ CMQ topic
<br><li>TDMQ_CMQ_QUEUE:TDMQ CMQ queue

Default value: `USER_GROUP`.
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * CMQ queue name. This parameter is required when `TargetType` is `CMQ_QUEUE` or `TDMQ_CMQ_QUEUE`.
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * CMQ topic name. This parameter is required when `TargetType` is `CMQ_TOPIC` or `TDMQ_CMQ_TOPIC`.
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_CREATENOTIFICATIONCONFIGURATIONREQUEST_H_
