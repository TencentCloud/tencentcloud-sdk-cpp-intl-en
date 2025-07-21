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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_AUTOSCALINGNOTIFICATION_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_AUTOSCALINGNOTIFICATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * AS event notification
                */
                class AutoScalingNotification : public AbstractModel
                {
                public:
                    AutoScalingNotification();
                    ~AutoScalingNotification() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Auto scaling group ID.
                     * @return AutoScalingGroupId Auto scaling group ID.
                     * 
                     */
                    std::string GetAutoScalingGroupId() const;

                    /**
                     * 设置Auto scaling group ID.
                     * @param _autoScalingGroupId Auto scaling group ID.
                     * 
                     */
                    void SetAutoScalingGroupId(const std::string& _autoScalingGroupId);

                    /**
                     * 判断参数 AutoScalingGroupId 是否已赋值
                     * @return AutoScalingGroupId 是否已赋值
                     * 
                     */
                    bool AutoScalingGroupIdHasBeenSet() const;

                    /**
                     * 获取List of user group IDs.
                     * @return NotificationUserGroupIds List of user group IDs.
                     * 
                     */
                    std::vector<std::string> GetNotificationUserGroupIds() const;

                    /**
                     * 设置List of user group IDs.
                     * @param _notificationUserGroupIds List of user group IDs.
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
                     * 获取Notification event list. valid values are as follows:.
<Li>SCALE_OUT_SUCCESSFUL: scale-out succeeded</li>.
<Li>SCALE_OUT_FAILED: scale-out failed</li>.
<Li>SCALE_IN_SUCCESSFUL: scale-in succeeded</li>.
<Li>SCALE_IN_FAILED: scale-in failed</li>.
<Li>REPLACE_UNHEALTHY_INSTANCE_SUCCESSFUL: unhealthy instance replacement succeeded</li>.
<Li>REPLACE_UNHEALTHY_INSTANCE_FAILED: unhealthy instance replacement failed</li>.
                     * @return NotificationTypes Notification event list. valid values are as follows:.
<Li>SCALE_OUT_SUCCESSFUL: scale-out succeeded</li>.
<Li>SCALE_OUT_FAILED: scale-out failed</li>.
<Li>SCALE_IN_SUCCESSFUL: scale-in succeeded</li>.
<Li>SCALE_IN_FAILED: scale-in failed</li>.
<Li>REPLACE_UNHEALTHY_INSTANCE_SUCCESSFUL: unhealthy instance replacement succeeded</li>.
<Li>REPLACE_UNHEALTHY_INSTANCE_FAILED: unhealthy instance replacement failed</li>.
                     * 
                     */
                    std::vector<std::string> GetNotificationTypes() const;

                    /**
                     * 设置Notification event list. valid values are as follows:.
<Li>SCALE_OUT_SUCCESSFUL: scale-out succeeded</li>.
<Li>SCALE_OUT_FAILED: scale-out failed</li>.
<Li>SCALE_IN_SUCCESSFUL: scale-in succeeded</li>.
<Li>SCALE_IN_FAILED: scale-in failed</li>.
<Li>REPLACE_UNHEALTHY_INSTANCE_SUCCESSFUL: unhealthy instance replacement succeeded</li>.
<Li>REPLACE_UNHEALTHY_INSTANCE_FAILED: unhealthy instance replacement failed</li>.
                     * @param _notificationTypes Notification event list. valid values are as follows:.
<Li>SCALE_OUT_SUCCESSFUL: scale-out succeeded</li>.
<Li>SCALE_OUT_FAILED: scale-out failed</li>.
<Li>SCALE_IN_SUCCESSFUL: scale-in succeeded</li>.
<Li>SCALE_IN_FAILED: scale-in failed</li>.
<Li>REPLACE_UNHEALTHY_INSTANCE_SUCCESSFUL: unhealthy instance replacement succeeded</li>.
<Li>REPLACE_UNHEALTHY_INSTANCE_FAILED: unhealthy instance replacement failed</li>.
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
                     * 获取Event notification ID.
                     * @return AutoScalingNotificationId Event notification ID.
                     * 
                     */
                    std::string GetAutoScalingNotificationId() const;

                    /**
                     * 设置Event notification ID.
                     * @param _autoScalingNotificationId Event notification ID.
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
                     * 获取Notification receiver type. valid values:.
USER_GROUP: specifies the user group.
TDMQ_CMQ_TOPIC: tdmq for cmq topic.
TDMQ_CMQ_QUEUE: specifies the tdmq cmq queue.
`CMQ_QUEUE`: cmq queue. [cmq API offline](https://intl.cloud.tencent.com/document/product/1496/83970?from_cn_redirect=1). unable to select.
CMQ_TOPIC: cmq topic. [cmq API offline](https://intl.cloud.tencent.com/document/product/1496/83970?from_cn_redirect=1), unable to select.
                     * @return TargetType Notification receiver type. valid values:.
USER_GROUP: specifies the user group.
TDMQ_CMQ_TOPIC: tdmq for cmq topic.
TDMQ_CMQ_QUEUE: specifies the tdmq cmq queue.
`CMQ_QUEUE`: cmq queue. [cmq API offline](https://intl.cloud.tencent.com/document/product/1496/83970?from_cn_redirect=1). unable to select.
CMQ_TOPIC: cmq topic. [cmq API offline](https://intl.cloud.tencent.com/document/product/1496/83970?from_cn_redirect=1), unable to select.
                     * 
                     */
                    std::string GetTargetType() const;

                    /**
                     * 设置Notification receiver type. valid values:.
USER_GROUP: specifies the user group.
TDMQ_CMQ_TOPIC: tdmq for cmq topic.
TDMQ_CMQ_QUEUE: specifies the tdmq cmq queue.
`CMQ_QUEUE`: cmq queue. [cmq API offline](https://intl.cloud.tencent.com/document/product/1496/83970?from_cn_redirect=1). unable to select.
CMQ_TOPIC: cmq topic. [cmq API offline](https://intl.cloud.tencent.com/document/product/1496/83970?from_cn_redirect=1), unable to select.
                     * @param _targetType Notification receiver type. valid values:.
USER_GROUP: specifies the user group.
TDMQ_CMQ_TOPIC: tdmq for cmq topic.
TDMQ_CMQ_QUEUE: specifies the tdmq cmq queue.
`CMQ_QUEUE`: cmq queue. [cmq API offline](https://intl.cloud.tencent.com/document/product/1496/83970?from_cn_redirect=1). unable to select.
CMQ_TOPIC: cmq topic. [cmq API offline](https://intl.cloud.tencent.com/document/product/1496/83970?from_cn_redirect=1), unable to select.
                     * 
                     */
                    void SetTargetType(const std::string& _targetType);

                    /**
                     * 判断参数 TargetType 是否已赋值
                     * @return TargetType 是否已赋值
                     * 
                     */
                    bool TargetTypeHasBeenSet() const;

                    /**
                     * 获取TDMQ CMQ queue name.
                     * @return QueueName TDMQ CMQ queue name.
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置TDMQ CMQ queue name.
                     * @param _queueName TDMQ CMQ queue name.
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
                     * 获取TDMQ CMQ topic name.
                     * @return TopicName TDMQ CMQ topic name.
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置TDMQ CMQ topic name.
                     * @param _topicName TDMQ CMQ topic name.
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
                     * Auto scaling group ID.
                     */
                    std::string m_autoScalingGroupId;
                    bool m_autoScalingGroupIdHasBeenSet;

                    /**
                     * List of user group IDs.
                     */
                    std::vector<std::string> m_notificationUserGroupIds;
                    bool m_notificationUserGroupIdsHasBeenSet;

                    /**
                     * Notification event list. valid values are as follows:.
<Li>SCALE_OUT_SUCCESSFUL: scale-out succeeded</li>.
<Li>SCALE_OUT_FAILED: scale-out failed</li>.
<Li>SCALE_IN_SUCCESSFUL: scale-in succeeded</li>.
<Li>SCALE_IN_FAILED: scale-in failed</li>.
<Li>REPLACE_UNHEALTHY_INSTANCE_SUCCESSFUL: unhealthy instance replacement succeeded</li>.
<Li>REPLACE_UNHEALTHY_INSTANCE_FAILED: unhealthy instance replacement failed</li>.
                     */
                    std::vector<std::string> m_notificationTypes;
                    bool m_notificationTypesHasBeenSet;

                    /**
                     * Event notification ID.
                     */
                    std::string m_autoScalingNotificationId;
                    bool m_autoScalingNotificationIdHasBeenSet;

                    /**
                     * Notification receiver type. valid values:.
USER_GROUP: specifies the user group.
TDMQ_CMQ_TOPIC: tdmq for cmq topic.
TDMQ_CMQ_QUEUE: specifies the tdmq cmq queue.
`CMQ_QUEUE`: cmq queue. [cmq API offline](https://intl.cloud.tencent.com/document/product/1496/83970?from_cn_redirect=1). unable to select.
CMQ_TOPIC: cmq topic. [cmq API offline](https://intl.cloud.tencent.com/document/product/1496/83970?from_cn_redirect=1), unable to select.
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * TDMQ CMQ queue name.
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * TDMQ CMQ topic name.
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_AUTOSCALINGNOTIFICATION_H_
