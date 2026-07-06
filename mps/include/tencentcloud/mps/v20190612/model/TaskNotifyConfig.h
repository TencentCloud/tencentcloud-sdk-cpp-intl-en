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
                     * 获取<p>Notification type. Valid values:</p><li>CMQ: Removed. We recommend that you switch to TDMQ-CMQ.</li><li>TDMQ-CMQ: TDMQ.</li><li>URL: If URL is specified, HTTP callbacks are pushed to the URL specified in NotifyUrl. The callback protocol is HTTP and JSON. The packet body is the same as the output parameter of the event parsing notification API.</li><li>SCF: This is not recommended. Additional configuration for SCF is required in the console.</li><li>AWS-SQS: AWS queue. This is only suitable for AWS tasks in the same region.</li><font color="red"> Note: The default value is TDMQ-CMQ if this is not specified or empty. To use another type, you need to specify the corresponding value. If TDMQ-CMQ is used, oversized task response may cause failure to write to the queue. </font>
                     * @return NotifyType <p>Notification type. Valid values:</p><li>CMQ: Removed. We recommend that you switch to TDMQ-CMQ.</li><li>TDMQ-CMQ: TDMQ.</li><li>URL: If URL is specified, HTTP callbacks are pushed to the URL specified in NotifyUrl. The callback protocol is HTTP and JSON. The packet body is the same as the output parameter of the event parsing notification API.</li><li>SCF: This is not recommended. Additional configuration for SCF is required in the console.</li><li>AWS-SQS: AWS queue. This is only suitable for AWS tasks in the same region.</li><font color="red"> Note: The default value is TDMQ-CMQ if this is not specified or empty. To use another type, you need to specify the corresponding value. If TDMQ-CMQ is used, oversized task response may cause failure to write to the queue. </font>
                     * 
                     */
                    std::string GetNotifyType() const;

                    /**
                     * 设置<p>Notification type. Valid values:</p><li>CMQ: Removed. We recommend that you switch to TDMQ-CMQ.</li><li>TDMQ-CMQ: TDMQ.</li><li>URL: If URL is specified, HTTP callbacks are pushed to the URL specified in NotifyUrl. The callback protocol is HTTP and JSON. The packet body is the same as the output parameter of the event parsing notification API.</li><li>SCF: This is not recommended. Additional configuration for SCF is required in the console.</li><li>AWS-SQS: AWS queue. This is only suitable for AWS tasks in the same region.</li><font color="red"> Note: The default value is TDMQ-CMQ if this is not specified or empty. To use another type, you need to specify the corresponding value. If TDMQ-CMQ is used, oversized task response may cause failure to write to the queue. </font>
                     * @param _notifyType <p>Notification type. Valid values:</p><li>CMQ: Removed. We recommend that you switch to TDMQ-CMQ.</li><li>TDMQ-CMQ: TDMQ.</li><li>URL: If URL is specified, HTTP callbacks are pushed to the URL specified in NotifyUrl. The callback protocol is HTTP and JSON. The packet body is the same as the output parameter of the event parsing notification API.</li><li>SCF: This is not recommended. Additional configuration for SCF is required in the console.</li><li>AWS-SQS: AWS queue. This is only suitable for AWS tasks in the same region.</li><font color="red"> Note: The default value is TDMQ-CMQ if this is not specified or empty. To use another type, you need to specify the corresponding value. If TDMQ-CMQ is used, oversized task response may cause failure to write to the queue. </font>
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
                     * 获取<p>Workflow notification mode. Valid values are Finish and Change. If this is not specified, the default value is Finish.</p>
                     * @return NotifyMode <p>Workflow notification mode. Valid values are Finish and Change. If this is not specified, the default value is Finish.</p>
                     * 
                     */
                    std::string GetNotifyMode() const;

                    /**
                     * 设置<p>Workflow notification mode. Valid values are Finish and Change. If this is not specified, the default value is Finish.</p>
                     * @param _notifyMode <p>Workflow notification mode. Valid values are Finish and Change. If this is not specified, the default value is Finish.</p>
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
                     * 获取<p>HTTP callback URL. This is required if NotifyType is URL.</p>
                     * @return NotifyUrl <p>HTTP callback URL. This is required if NotifyType is URL.</p>
                     * 
                     */
                    std::string GetNotifyUrl() const;

                    /**
                     * 设置<p>HTTP callback URL. This is required if NotifyType is URL.</p>
                     * @param _notifyUrl <p>HTTP callback URL. This is required if NotifyType is URL.</p>
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
                     * 获取<p>CMQ or TDMQ for CMQ model. Valid values are Queue and Topic.</p>
                     * @return CmqModel <p>CMQ or TDMQ for CMQ model. Valid values are Queue and Topic.</p>
                     * 
                     */
                    std::string GetCmqModel() const;

                    /**
                     * 设置<p>CMQ or TDMQ for CMQ model. Valid values are Queue and Topic.</p>
                     * @param _cmqModel <p>CMQ or TDMQ for CMQ model. Valid values are Queue and Topic.</p>
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
                     * 获取<p>CMQ or TDMQ for CMQ region, such as sh or bj.</p>
                     * @return CmqRegion <p>CMQ or TDMQ for CMQ region, such as sh or bj.</p>
                     * 
                     */
                    std::string GetCmqRegion() const;

                    /**
                     * 设置<p>CMQ or TDMQ for CMQ region, such as sh or bj.</p>
                     * @param _cmqRegion <p>CMQ or TDMQ for CMQ region, such as sh or bj.</p>
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
                     * 获取<p>This field takes effect if the model is Topic. It indicates the topic name of the CMQ or TDMQ for CMQ for receiving event notifications.</p>
                     * @return TopicName <p>This field takes effect if the model is Topic. It indicates the topic name of the CMQ or TDMQ for CMQ for receiving event notifications.</p>
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置<p>This field takes effect if the model is Topic. It indicates the topic name of the CMQ or TDMQ for CMQ for receiving event notifications.</p>
                     * @param _topicName <p>This field takes effect if the model is Topic. It indicates the topic name of the CMQ or TDMQ for CMQ for receiving event notifications.</p>
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
                     * 获取<p>This field takes effect if the model is Queue. It indicates the queue name of the CMQ or TDMQ for CMQ for receiving event notifications.</p>
                     * @return QueueName <p>This field takes effect if the model is Queue. It indicates the queue name of the CMQ or TDMQ for CMQ for receiving event notifications.</p>
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置<p>This field takes effect if the model is Queue. It indicates the queue name of the CMQ or TDMQ for CMQ for receiving event notifications.</p>
                     * @param _queueName <p>This field takes effect if the model is Queue. It indicates the queue name of the CMQ or TDMQ for CMQ for receiving event notifications.</p>
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
                     * 获取<p>AWS SQS callback. This is required if NotifyType is AWS-SQS.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AwsSQS <p>AWS SQS callback. This is required if NotifyType is AWS-SQS.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AwsSQS GetAwsSQS() const;

                    /**
                     * 设置<p>AWS SQS callback. This is required if NotifyType is AWS-SQS.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _awsSQS <p>AWS SQS callback. This is required if NotifyType is AWS-SQS.</p>
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
                     * 获取<p>Key used to generate the callback signature.</p>
                     * @return NotifyKey <p>Key used to generate the callback signature.</p>
                     * 
                     */
                    std::string GetNotifyKey() const;

                    /**
                     * 设置<p>Key used to generate the callback signature.</p>
                     * @param _notifyKey <p>Key used to generate the callback signature.</p>
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
                     * <p>Notification type. Valid values:</p><li>CMQ: Removed. We recommend that you switch to TDMQ-CMQ.</li><li>TDMQ-CMQ: TDMQ.</li><li>URL: If URL is specified, HTTP callbacks are pushed to the URL specified in NotifyUrl. The callback protocol is HTTP and JSON. The packet body is the same as the output parameter of the event parsing notification API.</li><li>SCF: This is not recommended. Additional configuration for SCF is required in the console.</li><li>AWS-SQS: AWS queue. This is only suitable for AWS tasks in the same region.</li><font color="red"> Note: The default value is TDMQ-CMQ if this is not specified or empty. To use another type, you need to specify the corresponding value. If TDMQ-CMQ is used, oversized task response may cause failure to write to the queue. </font>
                     */
                    std::string m_notifyType;
                    bool m_notifyTypeHasBeenSet;

                    /**
                     * <p>Workflow notification mode. Valid values are Finish and Change. If this is not specified, the default value is Finish.</p>
                     */
                    std::string m_notifyMode;
                    bool m_notifyModeHasBeenSet;

                    /**
                     * <p>HTTP callback URL. This is required if NotifyType is URL.</p>
                     */
                    std::string m_notifyUrl;
                    bool m_notifyUrlHasBeenSet;

                    /**
                     * <p>CMQ or TDMQ for CMQ model. Valid values are Queue and Topic.</p>
                     */
                    std::string m_cmqModel;
                    bool m_cmqModelHasBeenSet;

                    /**
                     * <p>CMQ or TDMQ for CMQ region, such as sh or bj.</p>
                     */
                    std::string m_cmqRegion;
                    bool m_cmqRegionHasBeenSet;

                    /**
                     * <p>This field takes effect if the model is Topic. It indicates the topic name of the CMQ or TDMQ for CMQ for receiving event notifications.</p>
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * <p>This field takes effect if the model is Queue. It indicates the queue name of the CMQ or TDMQ for CMQ for receiving event notifications.</p>
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * <p>AWS SQS callback. This is required if NotifyType is AWS-SQS.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AwsSQS m_awsSQS;
                    bool m_awsSQSHasBeenSet;

                    /**
                     * <p>Key used to generate the callback signature.</p>
                     */
                    std::string m_notifyKey;
                    bool m_notifyKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_TASKNOTIFYCONFIG_H_
