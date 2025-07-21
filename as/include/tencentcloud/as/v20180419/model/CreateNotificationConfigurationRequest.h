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
                     * 获取Scaling group ID. obtain the scaling group ID by logging in to the console (https://console.cloud.tencent.com/autoscaling/group) or calling the api DescribeAutoScalingGroups (https://intl.cloud.tencent.com/document/api/377/20438?from_cn_redirect=1), and retrieve AutoScalingGroupId from the returned information.
                     * @return AutoScalingGroupId Scaling group ID. obtain the scaling group ID by logging in to the console (https://console.cloud.tencent.com/autoscaling/group) or calling the api DescribeAutoScalingGroups (https://intl.cloud.tencent.com/document/api/377/20438?from_cn_redirect=1), and retrieve AutoScalingGroupId from the returned information.
                     * 
                     */
                    std::string GetAutoScalingGroupId() const;

                    /**
                     * 设置Scaling group ID. obtain the scaling group ID by logging in to the console (https://console.cloud.tencent.com/autoscaling/group) or calling the api DescribeAutoScalingGroups (https://intl.cloud.tencent.com/document/api/377/20438?from_cn_redirect=1), and retrieve AutoScalingGroupId from the returned information.
                     * @param _autoScalingGroupId Scaling group ID. obtain the scaling group ID by logging in to the console (https://console.cloud.tencent.com/autoscaling/group) or calling the api DescribeAutoScalingGroups (https://intl.cloud.tencent.com/document/api/377/20438?from_cn_redirect=1), and retrieve AutoScalingGroupId from the returned information.
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
                     * 获取Notification GROUP ID, which is the USER GROUP ID collection. USER GROUP ID can be accessed through [ListGroups](https://intl.cloud.tencent.com/document/product/598/34589?from_cn_redirect=1). this parameter is valid only when TargetType is USER_GROUP.
                     * @return NotificationUserGroupIds Notification GROUP ID, which is the USER GROUP ID collection. USER GROUP ID can be accessed through [ListGroups](https://intl.cloud.tencent.com/document/product/598/34589?from_cn_redirect=1). this parameter is valid only when TargetType is USER_GROUP.
                     * 
                     */
                    std::vector<std::string> GetNotificationUserGroupIds() const;

                    /**
                     * 设置Notification GROUP ID, which is the USER GROUP ID collection. USER GROUP ID can be accessed through [ListGroups](https://intl.cloud.tencent.com/document/product/598/34589?from_cn_redirect=1). this parameter is valid only when TargetType is USER_GROUP.
                     * @param _notificationUserGroupIds Notification GROUP ID, which is the USER GROUP ID collection. USER GROUP ID can be accessed through [ListGroups](https://intl.cloud.tencent.com/document/product/598/34589?from_cn_redirect=1). this parameter is valid only when TargetType is USER_GROUP.
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
                     * 获取Notification receiver type. values as follows:.
<Li>USER_GROUP: user group</li>.
<Li>TDMQ_CMQ_TOPIC: tdmq cmq topic</li>.
<Li>TDMQ_CMQ_QUEUE: tdmq cmq queue</li>.
<li>CMQ_QUEUE: CMQ QUEUE. [CMQ is offline](https://intl.cloud.tencent.com/document/product/1496/83970?from_cn_redirect=1). currently, only TDMQ CMQ is recommended.</li>.
<li>CMQ_TOPIC: specifies the CMQ TOPIC. [CMQ is offline](https://intl.cloud.tencent.com/document/product/1496/83970?from_cn_redirect=1). currently, TDMQ CMQ is recommended for use.</li>.

Default value: `USER_GROUP`.
                     * @return TargetType Notification receiver type. values as follows:.
<Li>USER_GROUP: user group</li>.
<Li>TDMQ_CMQ_TOPIC: tdmq cmq topic</li>.
<Li>TDMQ_CMQ_QUEUE: tdmq cmq queue</li>.
<li>CMQ_QUEUE: CMQ QUEUE. [CMQ is offline](https://intl.cloud.tencent.com/document/product/1496/83970?from_cn_redirect=1). currently, only TDMQ CMQ is recommended.</li>.
<li>CMQ_TOPIC: specifies the CMQ TOPIC. [CMQ is offline](https://intl.cloud.tencent.com/document/product/1496/83970?from_cn_redirect=1). currently, TDMQ CMQ is recommended for use.</li>.

Default value: `USER_GROUP`.
                     * 
                     */
                    std::string GetTargetType() const;

                    /**
                     * 设置Notification receiver type. values as follows:.
<Li>USER_GROUP: user group</li>.
<Li>TDMQ_CMQ_TOPIC: tdmq cmq topic</li>.
<Li>TDMQ_CMQ_QUEUE: tdmq cmq queue</li>.
<li>CMQ_QUEUE: CMQ QUEUE. [CMQ is offline](https://intl.cloud.tencent.com/document/product/1496/83970?from_cn_redirect=1). currently, only TDMQ CMQ is recommended.</li>.
<li>CMQ_TOPIC: specifies the CMQ TOPIC. [CMQ is offline](https://intl.cloud.tencent.com/document/product/1496/83970?from_cn_redirect=1). currently, TDMQ CMQ is recommended for use.</li>.

Default value: `USER_GROUP`.
                     * @param _targetType Notification receiver type. values as follows:.
<Li>USER_GROUP: user group</li>.
<Li>TDMQ_CMQ_TOPIC: tdmq cmq topic</li>.
<Li>TDMQ_CMQ_QUEUE: tdmq cmq queue</li>.
<li>CMQ_QUEUE: CMQ QUEUE. [CMQ is offline](https://intl.cloud.tencent.com/document/product/1496/83970?from_cn_redirect=1). currently, only TDMQ CMQ is recommended.</li>.
<li>CMQ_TOPIC: specifies the CMQ TOPIC. [CMQ is offline](https://intl.cloud.tencent.com/document/product/1496/83970?from_cn_redirect=1). currently, TDMQ CMQ is recommended for use.</li>.

Default value: `USER_GROUP`.
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
                     * 获取TDMQ CMQ QUEUE name. this field is required if TargetType value is `TDMQ_CMQ_QUEUE`.
                     * @return QueueName TDMQ CMQ QUEUE name. this field is required if TargetType value is `TDMQ_CMQ_QUEUE`.
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置TDMQ CMQ QUEUE name. this field is required if TargetType value is `TDMQ_CMQ_QUEUE`.
                     * @param _queueName TDMQ CMQ QUEUE name. this field is required if TargetType value is `TDMQ_CMQ_QUEUE`.
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
                     * 获取TDMQ CMQ TOPIC name. this field is required when `TargetType` is `TDMQ_CMQ_TOPIC`.
                     * @return TopicName TDMQ CMQ TOPIC name. this field is required when `TargetType` is `TDMQ_CMQ_TOPIC`.
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置TDMQ CMQ TOPIC name. this field is required when `TargetType` is `TDMQ_CMQ_TOPIC`.
                     * @param _topicName TDMQ CMQ TOPIC name. this field is required when `TargetType` is `TDMQ_CMQ_TOPIC`.
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
                     * Scaling group ID. obtain the scaling group ID by logging in to the console (https://console.cloud.tencent.com/autoscaling/group) or calling the api DescribeAutoScalingGroups (https://intl.cloud.tencent.com/document/api/377/20438?from_cn_redirect=1), and retrieve AutoScalingGroupId from the returned information.
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
                     * Notification GROUP ID, which is the USER GROUP ID collection. USER GROUP ID can be accessed through [ListGroups](https://intl.cloud.tencent.com/document/product/598/34589?from_cn_redirect=1). this parameter is valid only when TargetType is USER_GROUP.
                     */
                    std::vector<std::string> m_notificationUserGroupIds;
                    bool m_notificationUserGroupIdsHasBeenSet;

                    /**
                     * Notification receiver type. values as follows:.
<Li>USER_GROUP: user group</li>.
<Li>TDMQ_CMQ_TOPIC: tdmq cmq topic</li>.
<Li>TDMQ_CMQ_QUEUE: tdmq cmq queue</li>.
<li>CMQ_QUEUE: CMQ QUEUE. [CMQ is offline](https://intl.cloud.tencent.com/document/product/1496/83970?from_cn_redirect=1). currently, only TDMQ CMQ is recommended.</li>.
<li>CMQ_TOPIC: specifies the CMQ TOPIC. [CMQ is offline](https://intl.cloud.tencent.com/document/product/1496/83970?from_cn_redirect=1). currently, TDMQ CMQ is recommended for use.</li>.

Default value: `USER_GROUP`.
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * TDMQ CMQ QUEUE name. this field is required if TargetType value is `TDMQ_CMQ_QUEUE`.
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * TDMQ CMQ TOPIC name. this field is required when `TargetType` is `TDMQ_CMQ_TOPIC`.
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_CREATENOTIFICATIONCONFIGURATIONREQUEST_H_
