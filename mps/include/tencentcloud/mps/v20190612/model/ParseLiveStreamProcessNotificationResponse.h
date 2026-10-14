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
#include <tencentcloud/mps/v20190612/model/LiveStreamAiSmartSubtitleResultInfo.h>


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
<li>AiReviewResult: content moderation result;</li>
<li>AiRecognitionResult: content recognition result;</li>
<li>LiveRecordResult: live streaming result;</li>
<li>AiQualityControlResult: media quality inspection result.</li>
<li>AiAnalysisResult: content analysis result.</li>
<li>AiSmartSubtitleResult: smart subtitle result;</li>
<li>ProcessEof: end of live stream processing.</li>
                     * @return NotificationType Live stream processing result type, including:
<li>AiReviewResult: content moderation result;</li>
<li>AiRecognitionResult: content recognition result;</li>
<li>LiveRecordResult: live streaming result;</li>
<li>AiQualityControlResult: media quality inspection result.</li>
<li>AiAnalysisResult: content analysis result.</li>
<li>AiSmartSubtitleResult: smart subtitle result;</li>
<li>ProcessEof: end of live stream processing.</li>
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
                     * 获取Error information of live stream processing. Valid when NotificationType is ProcessEof.
                     * @return ProcessEofInfo Error information of live stream processing. Valid when NotificationType is ProcessEof.
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
                     * 获取Content moderation result. Valid when NotificationType is AiReviewResult.
                     * @return AiReviewResultInfo Content moderation result. Valid when NotificationType is AiReviewResult.
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
                     * 获取Content recognition result. Valid when NotificationType is AiRecognitionResult.
                     * @return AiRecognitionResultInfo Content recognition result. Valid when NotificationType is AiRecognitionResult.
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
                     * 获取Content analysis result. Valid when NotificationType is AiAnalysisResult.
                     * @return AiAnalysisResultInfo Content analysis result. Valid when NotificationType is AiAnalysisResult.
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
                     * 获取Media quality inspection result. Valid when NotificationType is AiQualityControlResult.
                     * @return AiQualityControlResultInfo Media quality inspection result. Valid when NotificationType is AiQualityControlResult.
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
                     * 获取Live streaming result is valid when NotificationType is LiveRecordResult.
                     * @return LiveRecordResultInfo Live streaming result is valid when NotificationType is LiveRecordResult.
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
                     * 获取Smart subtitle result. Valid when NotificationType is AiSmartSubtitleResult.
                     * @return AiSmartSubtitleResultInfo Smart subtitle result. Valid when NotificationType is AiSmartSubtitleResult.
                     * 
                     */
                    LiveStreamAiSmartSubtitleResultInfo GetAiSmartSubtitleResultInfo() const;

                    /**
                     * 判断参数 AiSmartSubtitleResultInfo 是否已赋值
                     * @return AiSmartSubtitleResultInfo 是否已赋值
                     * 
                     */
                    bool AiSmartSubtitleResultInfoHasBeenSet() const;

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
                     * 获取- Expiration time: the UNIX Timestamp when the event notification signature expires. - Message notifications from media processing expire after 10 minutes by default. If the time specified by the Timestamp value in a message notification has expired, the notification is deemed invalid, which prevents network replay attacks. - Timestamp is in decimal UNIX Timestamp format, which is the seconds elapsed since January 1, 1970 (UTC/GMT midnight).
                     * @return Timestamp - Expiration time: the UNIX Timestamp when the event notification signature expires. - Message notifications from media processing expire after 10 minutes by default. If the time specified by the Timestamp value in a message notification has expired, the notification is deemed invalid, which prevents network replay attacks. - Timestamp is in decimal UNIX Timestamp format, which is the seconds elapsed since January 1, 1970 (UTC/GMT midnight).
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

                private:

                    /**
                     * Live stream processing result type, including:
<li>AiReviewResult: content moderation result;</li>
<li>AiRecognitionResult: content recognition result;</li>
<li>LiveRecordResult: live streaming result;</li>
<li>AiQualityControlResult: media quality inspection result.</li>
<li>AiAnalysisResult: content analysis result.</li>
<li>AiSmartSubtitleResult: smart subtitle result;</li>
<li>ProcessEof: end of live stream processing.</li>
                     */
                    std::string m_notificationType;
                    bool m_notificationTypeHasBeenSet;

                    /**
                     * Video processing task ID.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Error information of live stream processing. Valid when NotificationType is ProcessEof.
                     */
                    LiveStreamProcessErrorInfo m_processEofInfo;
                    bool m_processEofInfoHasBeenSet;

                    /**
                     * Content moderation result. Valid when NotificationType is AiReviewResult.
                     */
                    LiveStreamAiReviewResultInfo m_aiReviewResultInfo;
                    bool m_aiReviewResultInfoHasBeenSet;

                    /**
                     * Content recognition result. Valid when NotificationType is AiRecognitionResult.
                     */
                    LiveStreamAiRecognitionResultInfo m_aiRecognitionResultInfo;
                    bool m_aiRecognitionResultInfoHasBeenSet;

                    /**
                     * Content analysis result. Valid when NotificationType is AiAnalysisResult.
                     */
                    LiveStreamAiAnalysisResultInfo m_aiAnalysisResultInfo;
                    bool m_aiAnalysisResultInfoHasBeenSet;

                    /**
                     * Media quality inspection result. Valid when NotificationType is AiQualityControlResult.
                     */
                    LiveStreamAiQualityControlResultInfo m_aiQualityControlResultInfo;
                    bool m_aiQualityControlResultInfoHasBeenSet;

                    /**
                     * Live streaming result is valid when NotificationType is LiveRecordResult.
                     */
                    LiveStreamRecordResultInfo m_liveRecordResultInfo;
                    bool m_liveRecordResultInfoHasBeenSet;

                    /**
                     * Smart subtitle result. Valid when NotificationType is AiSmartSubtitleResult.
                     */
                    LiveStreamAiSmartSubtitleResultInfo m_aiSmartSubtitleResultInfo;
                    bool m_aiSmartSubtitleResultInfoHasBeenSet;

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
                     * - Expiration time: the UNIX Timestamp when the event notification signature expires. - Message notifications from media processing expire after 10 minutes by default. If the time specified by the Timestamp value in a message notification has expired, the notification is deemed invalid, which prevents network replay attacks. - Timestamp is in decimal UNIX Timestamp format, which is the seconds elapsed since January 1, 1970 (UTC/GMT midnight).
                     */
                    int64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * Event notification security signature. Sign = MD5 (Timestamp + NotifyKey). Note: Media Processing Service concatenates Timestamp and NotifyKey from TaskNotifyConfig as a string and calculates the Sign value through MD5. This value is included in the notification message. Your backend server can verify whether the Sign is correct using the same algorithm, to confirm whether the message is indeed from the Media Processing Service backend.
                     */
                    std::string m_sign;
                    bool m_signHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_PARSELIVESTREAMPROCESSNOTIFICATIONRESPONSE_H_
