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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_PARSELIVESTREAMPROCESSNOTIFICATIONRESPONSE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_PARSELIVESTREAMPROCESSNOTIFICATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/LiveStreamProcessErrorInfo.h>
#include <tencentcloud/mps/v20190612/model/LiveStreamAiReviewResultInfo.h>
#include <tencentcloud/mps/v20190612/model/LiveStreamAiRecognitionResultInfo.h>
#include <tencentcloud/mps/v20190612/model/LiveStreamAiAnalysisResultInfo.h>
#include <tencentcloud/mps/v20190612/model/LiveStreamAiQualityControlResultInfo.h>
#include <tencentcloud/mps/v20190612/model/LiveStreamRecordResultInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * ParseLiveStreamProcessNotification response structure.
                */
                class ParseLiveStreamProcessNotificationResponse : public AbstractModel
                {
                public:
                    ParseLiveStreamProcessNotificationResponse();
                    ~ParseLiveStreamProcessNotificationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Live stream processing result type, including:
<li>AiReviewResult: content auditing result.</li>
<li>AiRecognitionResult: content recognition result.</li>
<li>LiveRecordResult: live recording result.</li>
<li>AiQualityControlResult: media quality inspection result.</li>
<li>ProcessEof: live stream processing result.</li>
                     * @return NotificationType Live stream processing result type, including:
<li>AiReviewResult: content auditing result.</li>
<li>AiRecognitionResult: content recognition result.</li>
<li>LiveRecordResult: live recording result.</li>
<li>AiQualityControlResult: media quality inspection result.</li>
<li>ProcessEof: live stream processing result.</li>
                     * 
                     */
                    std::string GetNotificationType() const;

                    /**
                     * 判断参数 NotificationType 是否已赋值
                     * @return NotificationType 是否已赋值
                     * 
                     */
                    bool NotificationTypeHasBeenSet() const;

                    /**
                     * 获取Video processing task ID.
                     * @return TaskId Video processing task ID.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Information of a live stream processing error, which is valid when `NotificationType` is `ProcessEof`.
Note: when this field return null, means no valid values can be obtained.
                     * @return ProcessEofInfo Information of a live stream processing error, which is valid when `NotificationType` is `ProcessEof`.
Note: when this field return null, means no valid values can be obtained.
                     * 
                     */
                    LiveStreamProcessErrorInfo GetProcessEofInfo() const;

                    /**
                     * 判断参数 ProcessEofInfo 是否已赋值
                     * @return ProcessEofInfo 是否已赋值
                     * 
                     */
                    bool ProcessEofInfoHasBeenSet() const;

                    /**
                     * 获取Content audit result, which is valid when `NotificationType` is `AiReviewResult`.
Note: when this field return null, means no valid values can be obtained.
                     * @return AiReviewResultInfo Content audit result, which is valid when `NotificationType` is `AiReviewResult`.
Note: when this field return null, means no valid values can be obtained.
                     * 
                     */
                    LiveStreamAiReviewResultInfo GetAiReviewResultInfo() const;

                    /**
                     * 判断参数 AiReviewResultInfo 是否已赋值
                     * @return AiReviewResultInfo 是否已赋值
                     * 
                     */
                    bool AiReviewResultInfoHasBeenSet() const;

                    /**
                     * 获取Content recognition result, which is valid if `NotificationType` is `AiRecognitionResult`.
                     * @return AiRecognitionResultInfo Content recognition result, which is valid if `NotificationType` is `AiRecognitionResult`.
                     * 
                     */
                    LiveStreamAiRecognitionResultInfo GetAiRecognitionResultInfo() const;

                    /**
                     * 判断参数 AiRecognitionResultInfo 是否已赋值
                     * @return AiRecognitionResultInfo 是否已赋值
                     * 
                     */
                    bool AiRecognitionResultInfoHasBeenSet() const;

                    /**
                     * 获取Content analysis result, which is valid if `NotificationType` is `AiAnalysisResult`.
                     * @return AiAnalysisResultInfo Content analysis result, which is valid if `NotificationType` is `AiAnalysisResult`.
                     * 
                     */
                    LiveStreamAiAnalysisResultInfo GetAiAnalysisResultInfo() const;

                    /**
                     * 判断参数 AiAnalysisResultInfo 是否已赋值
                     * @return AiAnalysisResultInfo 是否已赋值
                     * 
                     */
                    bool AiAnalysisResultInfoHasBeenSet() const;

                    /**
                     * 获取Media quality inspection result, which is valid if `NotificationType` is `AiQualityControlResult`.
                     * @return AiQualityControlResultInfo Media quality inspection result, which is valid if `NotificationType` is `AiQualityControlResult`.
                     * 
                     */
                    LiveStreamAiQualityControlResultInfo GetAiQualityControlResultInfo() const;

                    /**
                     * 判断参数 AiQualityControlResultInfo 是否已赋值
                     * @return AiQualityControlResultInfo 是否已赋值
                     * 
                     */
                    bool AiQualityControlResultInfoHasBeenSet() const;

                    /**
                     * 获取Live recording result is valid when NotificationType is LiveRecordResult.
Note: when this field return null, means no valid values can be obtained.
                     * @return LiveRecordResultInfo Live recording result is valid when NotificationType is LiveRecordResult.
Note: when this field return null, means no valid values can be obtained.
                     * 
                     */
                    LiveStreamRecordResultInfo GetLiveRecordResultInfo() const;

                    /**
                     * 判断参数 LiveRecordResultInfo 是否已赋值
                     * @return LiveRecordResultInfo 是否已赋值
                     * 
                     */
                    bool LiveRecordResultInfoHasBeenSet() const;

                    /**
                     * 获取The ID used for deduplication. If there was a request with the same ID in the last seven days, the current request will return an error. The ID can contain up to 50 characters. If this parameter is left empty or an empty string is entered, no deduplication will be performed.
                     * @return SessionId The ID used for deduplication. If there was a request with the same ID in the last seven days, the current request will return an error. The ID can contain up to 50 characters. If this parameter is left empty or an empty string is entered, no deduplication will be performed.
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
                     * 获取The source context which is used to pass through the user request information. The task flow status change callback will return the value of this field. It can contain up to 1,000 characters.
                     * @return SessionContext The source context which is used to pass through the user request information. The task flow status change callback will return the value of this field. It can contain up to 1,000 characters.
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
                     * 获取- Expiration time, event notification signature expiration UNIX timestamp. - By default, notifications sent by MPS expire after 10 minutes. If the expiration time specified has elapsed, a notification will be considered invalid. This can prevent replay attacks. - The format of Timestamp is a decimal UNIX timestamp, which is the number of seconds that have elapsed since January 1, 1970 (midnight UTC/GMT).
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Timestamp - Expiration time, event notification signature expiration UNIX timestamp. - By default, notifications sent by MPS expire after 10 minutes. If the expiration time specified has elapsed, a notification will be considered invalid. This can prevent replay attacks. - The format of Timestamp is a decimal UNIX timestamp, which is the number of seconds that have elapsed since January 1, 1970 (midnight UTC/GMT).
Note: This field may return null, indicating that no valid value can be obtained.
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

Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Sign Event notification security signature. Sign = MD5 (Timestamp + NotifyKey). Note: Media Processing Service concatenates Timestamp and NotifyKey from TaskNotifyConfig as a string and calculates the Sign value through MD5. This value is included in the notification message. Your backend server can verify whether the Sign is correct using the same algorithm, to confirm whether the message is indeed from the Media Processing Service backend.

Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetSign() const;

                    /**
                     * 判断参数 Sign 是否已赋值
                     * @return Sign 是否已赋值
                     * 
                     */
                    bool SignHasBeenSet() const;

                private:

                    /**
                     * Live stream processing result type, including:
<li>AiReviewResult: content auditing result.</li>
<li>AiRecognitionResult: content recognition result.</li>
<li>LiveRecordResult: live recording result.</li>
<li>AiQualityControlResult: media quality inspection result.</li>
<li>ProcessEof: live stream processing result.</li>
                     */
                    std::string m_notificationType;
                    bool m_notificationTypeHasBeenSet;

                    /**
                     * Video processing task ID.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Information of a live stream processing error, which is valid when `NotificationType` is `ProcessEof`.
Note: when this field return null, means no valid values can be obtained.
                     */
                    LiveStreamProcessErrorInfo m_processEofInfo;
                    bool m_processEofInfoHasBeenSet;

                    /**
                     * Content audit result, which is valid when `NotificationType` is `AiReviewResult`.
Note: when this field return null, means no valid values can be obtained.
                     */
                    LiveStreamAiReviewResultInfo m_aiReviewResultInfo;
                    bool m_aiReviewResultInfoHasBeenSet;

                    /**
                     * Content recognition result, which is valid if `NotificationType` is `AiRecognitionResult`.
                     */
                    LiveStreamAiRecognitionResultInfo m_aiRecognitionResultInfo;
                    bool m_aiRecognitionResultInfoHasBeenSet;

                    /**
                     * Content analysis result, which is valid if `NotificationType` is `AiAnalysisResult`.
                     */
                    LiveStreamAiAnalysisResultInfo m_aiAnalysisResultInfo;
                    bool m_aiAnalysisResultInfoHasBeenSet;

                    /**
                     * Media quality inspection result, which is valid if `NotificationType` is `AiQualityControlResult`.
                     */
                    LiveStreamAiQualityControlResultInfo m_aiQualityControlResultInfo;
                    bool m_aiQualityControlResultInfoHasBeenSet;

                    /**
                     * Live recording result is valid when NotificationType is LiveRecordResult.
Note: when this field return null, means no valid values can be obtained.
                     */
                    LiveStreamRecordResultInfo m_liveRecordResultInfo;
                    bool m_liveRecordResultInfoHasBeenSet;

                    /**
                     * The ID used for deduplication. If there was a request with the same ID in the last seven days, the current request will return an error. The ID can contain up to 50 characters. If this parameter is left empty or an empty string is entered, no deduplication will be performed.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * The source context which is used to pass through the user request information. The task flow status change callback will return the value of this field. It can contain up to 1,000 characters.
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * - Expiration time, event notification signature expiration UNIX timestamp. - By default, notifications sent by MPS expire after 10 minutes. If the expiration time specified has elapsed, a notification will be considered invalid. This can prevent replay attacks. - The format of Timestamp is a decimal UNIX timestamp, which is the number of seconds that have elapsed since January 1, 1970 (midnight UTC/GMT).
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * Event notification security signature. Sign = MD5 (Timestamp + NotifyKey). Note: Media Processing Service concatenates Timestamp and NotifyKey from TaskNotifyConfig as a string and calculates the Sign value through MD5. This value is included in the notification message. Your backend server can verify whether the Sign is correct using the same algorithm, to confirm whether the message is indeed from the Media Processing Service backend.

Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_sign;
                    bool m_signHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_PARSELIVESTREAMPROCESSNOTIFICATIONRESPONSE_H_
