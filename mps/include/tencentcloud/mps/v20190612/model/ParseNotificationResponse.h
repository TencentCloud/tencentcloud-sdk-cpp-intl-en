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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_PARSENOTIFICATIONRESPONSE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_PARSENOTIFICATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/WorkflowTask.h>
#include <tencentcloud/mps/v20190612/model/EditMediaTask.h>
#include <tencentcloud/mps/v20190612/model/ScheduleTask.h>
#include <tencentcloud/mps/v20190612/model/BatchSubTaskResult.h>
#include <tencentcloud/mps/v20190612/model/ExtractBlindWatermarkTask.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * ParseNotification response structure.
                */
                class ParseNotificationResponse : public AbstractModel
                {
                public:
                    ParseNotificationResponse();
                    ~ParseNotificationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Supported event types. Currently, the valid values include:
<li>WorkflowTask: video workflow processing task.</li>
<li>EditMediaTask: video editing task.</li>
<li>ScheduleTask: orchestration task.</li>
                     * @return EventType Supported event types. Currently, the valid values include:
<li>WorkflowTask: video workflow processing task.</li>
<li>EditMediaTask: video editing task.</li>
<li>ScheduleTask: orchestration task.</li>
                     * 
                     */
                    std::string GetEventType() const;

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     * 
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取Video processing task information. This field has a value only when EventType is WorkflowTask.
                     * @return WorkflowTaskEvent Video processing task information. This field has a value only when EventType is WorkflowTask.
                     * 
                     */
                    WorkflowTask GetWorkflowTaskEvent() const;

                    /**
                     * 判断参数 WorkflowTaskEvent 是否已赋值
                     * @return WorkflowTaskEvent 是否已赋值
                     * 
                     */
                    bool WorkflowTaskEventHasBeenSet() const;

                    /**
                     * 获取Video editing task information. This field has a value only when EventType is EditMediaTask.
                     * @return EditMediaTaskEvent Video editing task information. This field has a value only when EventType is EditMediaTask.
                     * 
                     */
                    EditMediaTask GetEditMediaTaskEvent() const;

                    /**
                     * 判断参数 EditMediaTaskEvent 是否已赋值
                     * @return EditMediaTaskEvent 是否已赋值
                     * 
                     */
                    bool EditMediaTaskEventHasBeenSet() const;

                    /**
                     * 获取An identifier for deduplication. If there has been a request with the same identifier within the past seven days, an error will be returned for the current request. The maximum length is 50 characters. Leaving it blank or using a null string indicates no deduplication is required.
                     * @return SessionId An identifier for deduplication. If there has been a request with the same identifier within the past seven days, an error will be returned for the current request. The maximum length is 50 characters. Leaving it blank or using a null string indicates no deduplication is required.
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取Source context, which is used to pass through user request information. The callback for task flow status changes will return the value of this field. The maximum length is 1,000 characters.
                     * @return SessionContext Source context, which is used to pass through user request information. The callback for task flow status changes will return the value of this field. The maximum length is 1,000 characters.
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 判断参数 SessionContext 是否已赋值
                     * @return SessionContext 是否已赋值
                     * 
                     */
                    bool SessionContextHasBeenSet() const;

                    /**
                     * 获取Orchestration task information. This field has a value only when EventType is ScheduleTask.
                     * @return ScheduleTaskEvent Orchestration task information. This field has a value only when EventType is ScheduleTask.
                     * 
                     */
                    ScheduleTask GetScheduleTaskEvent() const;

                    /**
                     * 判断参数 ScheduleTaskEvent 是否已赋值
                     * @return ScheduleTaskEvent 是否已赋值
                     * 
                     */
                    bool ScheduleTaskEventHasBeenSet() const;

                    /**
                     * 获取-Expiration time. The event notification signature expires at this UNIX timestamp.
-The default expiration time for notifications from Media Processing Service (MPS) is 10 minutes. If the time specified by the Timestamp value in a notification has expired, the notification can be deemed invalid, which can prevent network replay attacks.
-Timestamp is in decimal UNIX timestamp format, i.e., the seconds elapsed since January 1, 1970 (UTC/GMT midnight).

                     * @return Timestamp -Expiration time. The event notification signature expires at this UNIX timestamp.
-The default expiration time for notifications from Media Processing Service (MPS) is 10 minutes. If the time specified by the Timestamp value in a notification has expired, the notification can be deemed invalid, which can prevent network replay attacks.
-Timestamp is in decimal UNIX timestamp format, i.e., the seconds elapsed since January 1, 1970 (UTC/GMT midnight).

                     * 
                     */
                    int64_t GetTimestamp() const;

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取Event notification security signature. Sign = MD5 (Timestamp + NotifyKey). Note: Media Processing Service concatenates Timestamp and NotifyKey from TaskNotifyConfig as a string and calculates the Sign value through MD5. This value is included in the notification message. Your backend server can verify whether the Sign is correct using the same algorithm, to confirm whether the message is indeed from the Media Processing Service backend.
                     * @return Sign Event notification security signature. Sign = MD5 (Timestamp + NotifyKey). Note: Media Processing Service concatenates Timestamp and NotifyKey from TaskNotifyConfig as a string and calculates the Sign value through MD5. This value is included in the notification message. Your backend server can verify whether the Sign is correct using the same algorithm, to confirm whether the message is indeed from the Media Processing Service backend.
                     * 
                     */
                    std::string GetSign() const;

                    /**
                     * 判断参数 Sign 是否已赋值
                     * @return Sign 是否已赋值
                     * 
                     */
                    bool SignHasBeenSet() const;

                    /**
                     * 获取Batch operation information. This field has a value only when EventType is BatchTask.
                     * @return BatchTaskEvent Batch operation information. This field has a value only when EventType is BatchTask.
                     * 
                     */
                    BatchSubTaskResult GetBatchTaskEvent() const;

                    /**
                     * 判断参数 BatchTaskEvent 是否已赋值
                     * @return BatchTaskEvent 是否已赋值
                     * 
                     */
                    bool BatchTaskEventHasBeenSet() const;

                    /**
                     * 获取Information about the digital watermark extraction task. This field has a value only when EventType is ExtractBlindWatermark.
                     * @return ExtractBlindWatermarkTask Information about the digital watermark extraction task. This field has a value only when EventType is ExtractBlindWatermark.
                     * 
                     */
                    ExtractBlindWatermarkTask GetExtractBlindWatermarkTask() const;

                    /**
                     * 判断参数 ExtractBlindWatermarkTask 是否已赋值
                     * @return ExtractBlindWatermarkTask 是否已赋值
                     * 
                     */
                    bool ExtractBlindWatermarkTaskHasBeenSet() const;

                private:

                    /**
                     * Supported event types. Currently, the valid values include:
<li>WorkflowTask: video workflow processing task.</li>
<li>EditMediaTask: video editing task.</li>
<li>ScheduleTask: orchestration task.</li>
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * Video processing task information. This field has a value only when EventType is WorkflowTask.
                     */
                    WorkflowTask m_workflowTaskEvent;
                    bool m_workflowTaskEventHasBeenSet;

                    /**
                     * Video editing task information. This field has a value only when EventType is EditMediaTask.
                     */
                    EditMediaTask m_editMediaTaskEvent;
                    bool m_editMediaTaskEventHasBeenSet;

                    /**
                     * An identifier for deduplication. If there has been a request with the same identifier within the past seven days, an error will be returned for the current request. The maximum length is 50 characters. Leaving it blank or using a null string indicates no deduplication is required.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * Source context, which is used to pass through user request information. The callback for task flow status changes will return the value of this field. The maximum length is 1,000 characters.
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * Orchestration task information. This field has a value only when EventType is ScheduleTask.
                     */
                    ScheduleTask m_scheduleTaskEvent;
                    bool m_scheduleTaskEventHasBeenSet;

                    /**
                     * -Expiration time. The event notification signature expires at this UNIX timestamp.
-The default expiration time for notifications from Media Processing Service (MPS) is 10 minutes. If the time specified by the Timestamp value in a notification has expired, the notification can be deemed invalid, which can prevent network replay attacks.
-Timestamp is in decimal UNIX timestamp format, i.e., the seconds elapsed since January 1, 1970 (UTC/GMT midnight).

                     */
                    int64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * Event notification security signature. Sign = MD5 (Timestamp + NotifyKey). Note: Media Processing Service concatenates Timestamp and NotifyKey from TaskNotifyConfig as a string and calculates the Sign value through MD5. This value is included in the notification message. Your backend server can verify whether the Sign is correct using the same algorithm, to confirm whether the message is indeed from the Media Processing Service backend.
                     */
                    std::string m_sign;
                    bool m_signHasBeenSet;

                    /**
                     * Batch operation information. This field has a value only when EventType is BatchTask.
                     */
                    BatchSubTaskResult m_batchTaskEvent;
                    bool m_batchTaskEventHasBeenSet;

                    /**
                     * Information about the digital watermark extraction task. This field has a value only when EventType is ExtractBlindWatermark.
                     */
                    ExtractBlindWatermarkTask m_extractBlindWatermarkTask;
                    bool m_extractBlindWatermarkTaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_PARSENOTIFICATIONRESPONSE_H_
