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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_TASKNOTIFYCONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_TASKNOTIFYCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AwsSQS.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Event notification configuration of a task.
                */
                class TaskNotifyConfig : public AbstractModel
                {
                public:
                    TaskNotifyConfig();
                    ~TaskNotifyConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The notification type. Valid values:
<li>`CMQ`: This value is no longer used. Please use `TDMQ-CMQ` instead.</li>
<li>`TDMQ-CMQ`: Message queue</li>
<li>`URL`: If `NotifyType` is set to `URL`, HTTP callbacks are sent to the URL specified by `NotifyUrl`. HTTP and JSON are used for the callbacks. The packet contains the response parameters of the `ParseNotification` API.</li>
<li>`SCF`: This notification type is not recommended. You need to configure it in the SCF console.</li>
<li>`AWS-SQS`: AWS queue. This type is only supported for AWS tasks, and the queue must be in the same region as the AWS bucket.</li>
<font color="red">Note: If you do not pass this parameter or pass in an empty string, `CMQ` will be used. To use a different notification type, specify this parameter accordingly.</font>
                     * @return NotifyType The notification type. Valid values:
<li>`CMQ`: This value is no longer used. Please use `TDMQ-CMQ` instead.</li>
<li>`TDMQ-CMQ`: Message queue</li>
<li>`URL`: If `NotifyType` is set to `URL`, HTTP callbacks are sent to the URL specified by `NotifyUrl`. HTTP and JSON are used for the callbacks. The packet contains the response parameters of the `ParseNotification` API.</li>
<li>`SCF`: This notification type is not recommended. You need to configure it in the SCF console.</li>
<li>`AWS-SQS`: AWS queue. This type is only supported for AWS tasks, and the queue must be in the same region as the AWS bucket.</li>
<font color="red">Note: If you do not pass this parameter or pass in an empty string, `CMQ` will be used. To use a different notification type, specify this parameter accordingly.</font>
                     * 
                     */
                    std::string GetNotifyType() const;

                    /**
                     * 设置The notification type. Valid values:
<li>`CMQ`: This value is no longer used. Please use `TDMQ-CMQ` instead.</li>
<li>`TDMQ-CMQ`: Message queue</li>
<li>`URL`: If `NotifyType` is set to `URL`, HTTP callbacks are sent to the URL specified by `NotifyUrl`. HTTP and JSON are used for the callbacks. The packet contains the response parameters of the `ParseNotification` API.</li>
<li>`SCF`: This notification type is not recommended. You need to configure it in the SCF console.</li>
<li>`AWS-SQS`: AWS queue. This type is only supported for AWS tasks, and the queue must be in the same region as the AWS bucket.</li>
<font color="red">Note: If you do not pass this parameter or pass in an empty string, `CMQ` will be used. To use a different notification type, specify this parameter accordingly.</font>
                     * @param _notifyType The notification type. Valid values:
<li>`CMQ`: This value is no longer used. Please use `TDMQ-CMQ` instead.</li>
<li>`TDMQ-CMQ`: Message queue</li>
<li>`URL`: If `NotifyType` is set to `URL`, HTTP callbacks are sent to the URL specified by `NotifyUrl`. HTTP and JSON are used for the callbacks. The packet contains the response parameters of the `ParseNotification` API.</li>
<li>`SCF`: This notification type is not recommended. You need to configure it in the SCF console.</li>
<li>`AWS-SQS`: AWS queue. This type is only supported for AWS tasks, and the queue must be in the same region as the AWS bucket.</li>
<font color="red">Note: If you do not pass this parameter or pass in an empty string, `CMQ` will be used. To use a different notification type, specify this parameter accordingly.</font>
                     * 
                     */
                    void SetNotifyType(const std::string& _notifyType);

                    /**
                     * 判断参数 NotifyType 是否已赋值
                     * @return NotifyType 是否已赋值
                     * 
                     */
                    bool NotifyTypeHasBeenSet() const;

                    /**
                     * 获取Workflow notification method. Valid values: Finish, Change. If this parameter is left empty, `Finish` will be used.
                     * @return NotifyMode Workflow notification method. Valid values: Finish, Change. If this parameter is left empty, `Finish` will be used.
                     * 
                     */
                    std::string GetNotifyMode() const;

                    /**
                     * 设置Workflow notification method. Valid values: Finish, Change. If this parameter is left empty, `Finish` will be used.
                     * @param _notifyMode Workflow notification method. Valid values: Finish, Change. If this parameter is left empty, `Finish` will be used.
                     * 
                     */
                    void SetNotifyMode(const std::string& _notifyMode);

                    /**
                     * 判断参数 NotifyMode 是否已赋值
                     * @return NotifyMode 是否已赋值
                     * 
                     */
                    bool NotifyModeHasBeenSet() const;

                    /**
                     * 获取HTTP callback URL, required if `NotifyType` is set to `URL`
                     * @return NotifyUrl HTTP callback URL, required if `NotifyType` is set to `URL`
                     * 
                     */
                    std::string GetNotifyUrl() const;

                    /**
                     * 设置HTTP callback URL, required if `NotifyType` is set to `URL`
                     * @param _notifyUrl HTTP callback URL, required if `NotifyType` is set to `URL`
                     * 
                     */
                    void SetNotifyUrl(const std::string& _notifyUrl);

                    /**
                     * 判断参数 NotifyUrl 是否已赋值
                     * @return NotifyUrl 是否已赋值
                     * 
                     */
                    bool NotifyUrlHasBeenSet() const;

                    /**
                     * 获取The CMQ or TDMQ-CMQ model. Valid values: Queue, Topic.
                     * @return CmqModel The CMQ or TDMQ-CMQ model. Valid values: Queue, Topic.
                     * 
                     */
                    std::string GetCmqModel() const;

                    /**
                     * 设置The CMQ or TDMQ-CMQ model. Valid values: Queue, Topic.
                     * @param _cmqModel The CMQ or TDMQ-CMQ model. Valid values: Queue, Topic.
                     * 
                     */
                    void SetCmqModel(const std::string& _cmqModel);

                    /**
                     * 判断参数 CmqModel 是否已赋值
                     * @return CmqModel 是否已赋值
                     * 
                     */
                    bool CmqModelHasBeenSet() const;

                    /**
                     * 获取The CMQ or TDMQ-CMQ region, such as `sh` (Shanghai) or `bj` (Beijing).
                     * @return CmqRegion The CMQ or TDMQ-CMQ region, such as `sh` (Shanghai) or `bj` (Beijing).
                     * 
                     */
                    std::string GetCmqRegion() const;

                    /**
                     * 设置The CMQ or TDMQ-CMQ region, such as `sh` (Shanghai) or `bj` (Beijing).
                     * @param _cmqRegion The CMQ or TDMQ-CMQ region, such as `sh` (Shanghai) or `bj` (Beijing).
                     * 
                     */
                    void SetCmqRegion(const std::string& _cmqRegion);

                    /**
                     * 判断参数 CmqRegion 是否已赋值
                     * @return CmqRegion 是否已赋值
                     * 
                     */
                    bool CmqRegionHasBeenSet() const;

                    /**
                     * 获取The CMQ or TDMQ-CMQ topic to receive notifications. This parameter is valid when `CmqModel` is `Topic`.
                     * @return TopicName The CMQ or TDMQ-CMQ topic to receive notifications. This parameter is valid when `CmqModel` is `Topic`.
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置The CMQ or TDMQ-CMQ topic to receive notifications. This parameter is valid when `CmqModel` is `Topic`.
                     * @param _topicName The CMQ or TDMQ-CMQ topic to receive notifications. This parameter is valid when `CmqModel` is `Topic`.
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
                     * 获取The CMQ or TDMQ-CMQ queue to receive notifications. This parameter is valid when `CmqModel` is `Queue`.
                     * @return QueueName The CMQ or TDMQ-CMQ queue to receive notifications. This parameter is valid when `CmqModel` is `Queue`.
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置The CMQ or TDMQ-CMQ queue to receive notifications. This parameter is valid when `CmqModel` is `Queue`.
                     * @param _queueName The CMQ or TDMQ-CMQ queue to receive notifications. This parameter is valid when `CmqModel` is `Queue`.
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
                     * 获取The AWS SQS queue. This parameter is required if `NotifyType` is `AWS-SQS`.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AwsSQS The AWS SQS queue. This parameter is required if `NotifyType` is `AWS-SQS`.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AwsSQS GetAwsSQS() const;

                    /**
                     * 设置The AWS SQS queue. This parameter is required if `NotifyType` is `AWS-SQS`.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _awsSQS The AWS SQS queue. This parameter is required if `NotifyType` is `AWS-SQS`.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAwsSQS(const AwsSQS& _awsSQS);

                    /**
                     * 判断参数 AwsSQS 是否已赋值
                     * @return AwsSQS 是否已赋值
                     * 
                     */
                    bool AwsSQSHasBeenSet() const;

                    /**
                     * 获取The key used to generate the callback signature.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NotifyKey The key used to generate the callback signature.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNotifyKey() const;

                    /**
                     * 设置The key used to generate the callback signature.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _notifyKey The key used to generate the callback signature.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNotifyKey(const std::string& _notifyKey);

                    /**
                     * 判断参数 NotifyKey 是否已赋值
                     * @return NotifyKey 是否已赋值
                     * 
                     */
                    bool NotifyKeyHasBeenSet() const;

                private:

                    /**
                     * The notification type. Valid values:
<li>`CMQ`: This value is no longer used. Please use `TDMQ-CMQ` instead.</li>
<li>`TDMQ-CMQ`: Message queue</li>
<li>`URL`: If `NotifyType` is set to `URL`, HTTP callbacks are sent to the URL specified by `NotifyUrl`. HTTP and JSON are used for the callbacks. The packet contains the response parameters of the `ParseNotification` API.</li>
<li>`SCF`: This notification type is not recommended. You need to configure it in the SCF console.</li>
<li>`AWS-SQS`: AWS queue. This type is only supported for AWS tasks, and the queue must be in the same region as the AWS bucket.</li>
<font color="red">Note: If you do not pass this parameter or pass in an empty string, `CMQ` will be used. To use a different notification type, specify this parameter accordingly.</font>
                     */
                    std::string m_notifyType;
                    bool m_notifyTypeHasBeenSet;

                    /**
                     * Workflow notification method. Valid values: Finish, Change. If this parameter is left empty, `Finish` will be used.
                     */
                    std::string m_notifyMode;
                    bool m_notifyModeHasBeenSet;

                    /**
                     * HTTP callback URL, required if `NotifyType` is set to `URL`
                     */
                    std::string m_notifyUrl;
                    bool m_notifyUrlHasBeenSet;

                    /**
                     * The CMQ or TDMQ-CMQ model. Valid values: Queue, Topic.
                     */
                    std::string m_cmqModel;
                    bool m_cmqModelHasBeenSet;

                    /**
                     * The CMQ or TDMQ-CMQ region, such as `sh` (Shanghai) or `bj` (Beijing).
                     */
                    std::string m_cmqRegion;
                    bool m_cmqRegionHasBeenSet;

                    /**
                     * The CMQ or TDMQ-CMQ topic to receive notifications. This parameter is valid when `CmqModel` is `Topic`.
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * The CMQ or TDMQ-CMQ queue to receive notifications. This parameter is valid when `CmqModel` is `Queue`.
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * The AWS SQS queue. This parameter is required if `NotifyType` is `AWS-SQS`.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AwsSQS m_awsSQS;
                    bool m_awsSQSHasBeenSet;

                    /**
                     * The key used to generate the callback signature.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_notifyKey;
                    bool m_notifyKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_TASKNOTIFYCONFIG_H_
