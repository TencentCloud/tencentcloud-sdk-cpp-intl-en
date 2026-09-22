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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_PROCEDURETASK_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_PROCEDURETASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaMetaData.h>
#include <tencentcloud/vod/v20180717/model/MediaProcessTaskResult.h>
#include <tencentcloud/vod/v20180717/model/AiContentReviewResult.h>
#include <tencentcloud/vod/v20180717/model/AiAnalysisResult.h>
#include <tencentcloud/vod/v20180717/model/AiRecognitionResult.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Audio/Video processing task information
                */
                class ProcedureTask : public AbstractModel
                {
                public:
                    ProcedureTask();
                    ~ProcedureTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Media processing task ID.
                     * @return TaskId Media processing task ID.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Media processing task ID.
                     * @param _taskId Media processing task ID.
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Task flow status. Valid values:
<li>PROCESSING: Processing;</li>
<li>FINISH: completed</li>
                     * @return Status Task flow status. Valid values:
<li>PROCESSING: Processing;</li>
<li>FINISH: completed</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Task flow status. Valid values:
<li>PROCESSING: Processing;</li>
<li>FINISH: completed</li>
                     * @param _status Task flow status. Valid values:
<li>PROCESSING: Processing;</li>
<li>FINISH: completed</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Deprecated. Please use the ErrCode of each specific task.
                     * @return ErrCode Deprecated. Please use the ErrCode of each specific task.
                     * @deprecated
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置Deprecated. Please use the ErrCode of each specific task.
                     * @param _errCode Deprecated. Please use the ErrCode of each specific task.
                     * @deprecated
                     */
                    void SetErrCode(const int64_t& _errCode);

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     * @deprecated
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取Deprecated. Please use the Message of each specific task.
                     * @return Message Deprecated. Please use the Message of each specific task.
                     * @deprecated
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Deprecated. Please use the Message of each specific task.
                     * @param _message Deprecated. Please use the Message of each specific task.
                     * @deprecated
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * @deprecated
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取Media file ID
<li>If the process is initiated by [ProcessMedia](https://www.tencentcloud.com/document/product/266/33427?from_cn_redirect=1), this field represents the FileId of [MediaInfo](https://www.tencentcloud.com/document/product/266/31773?from_cn_redirect=1#MediaInfo);</li>
<li>If the process is initiated by [ProcessMediaByUrl](https://www.tencentcloud.com/document/product/266/33426?from_cn_redirect=1), this field represents the Id of [MediaInputInfo](https://www.tencentcloud.com/document/product/266/31773?from_cn_redirect=1#MediaInputInfo).</li>
                     * @return FileId Media file ID
<li>If the process is initiated by [ProcessMedia](https://www.tencentcloud.com/document/product/266/33427?from_cn_redirect=1), this field represents the FileId of [MediaInfo](https://www.tencentcloud.com/document/product/266/31773?from_cn_redirect=1#MediaInfo);</li>
<li>If the process is initiated by [ProcessMediaByUrl](https://www.tencentcloud.com/document/product/266/33426?from_cn_redirect=1), this field represents the Id of [MediaInputInfo](https://www.tencentcloud.com/document/product/266/31773?from_cn_redirect=1#MediaInputInfo).</li>
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置Media file ID
<li>If the process is initiated by [ProcessMedia](https://www.tencentcloud.com/document/product/266/33427?from_cn_redirect=1), this field represents the FileId of [MediaInfo](https://www.tencentcloud.com/document/product/266/31773?from_cn_redirect=1#MediaInfo);</li>
<li>If the process is initiated by [ProcessMediaByUrl](https://www.tencentcloud.com/document/product/266/33426?from_cn_redirect=1), this field represents the Id of [MediaInputInfo](https://www.tencentcloud.com/document/product/266/31773?from_cn_redirect=1#MediaInputInfo).</li>
                     * @param _fileId Media file ID
<li>If the process is initiated by [ProcessMedia](https://www.tencentcloud.com/document/product/266/33427?from_cn_redirect=1), this field represents the FileId of [MediaInfo](https://www.tencentcloud.com/document/product/266/31773?from_cn_redirect=1#MediaInfo);</li>
<li>If the process is initiated by [ProcessMediaByUrl](https://www.tencentcloud.com/document/product/266/33426?from_cn_redirect=1), this field represents the Id of [MediaInputInfo](https://www.tencentcloud.com/document/product/266/31773?from_cn_redirect=1#MediaInputInfo).</li>
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取Media file name
<li>If the process is initiated by [ProcessMedia](https://www.tencentcloud.com/document/product/266/33427?from_cn_redirect=1), this field represents BasicInfo.Name of [MediaInfo](https://www.tencentcloud.com/document/product/266/31773?from_cn_redirect=1#MediaInfo);</li>
<li>If the process is initiated by [ProcessMediaByUrl](https://www.tencentcloud.com/document/product/266/33426?from_cn_redirect=1), this field represents the Name of [MediaInputInfo](https://www.tencentcloud.com/document/product/266/31773?from_cn_redirect=1#MediaInputInfo).</li>
                     * @return FileName Media file name
<li>If the process is initiated by [ProcessMedia](https://www.tencentcloud.com/document/product/266/33427?from_cn_redirect=1), this field represents BasicInfo.Name of [MediaInfo](https://www.tencentcloud.com/document/product/266/31773?from_cn_redirect=1#MediaInfo);</li>
<li>If the process is initiated by [ProcessMediaByUrl](https://www.tencentcloud.com/document/product/266/33426?from_cn_redirect=1), this field represents the Name of [MediaInputInfo](https://www.tencentcloud.com/document/product/266/31773?from_cn_redirect=1#MediaInputInfo).</li>
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置Media file name
<li>If the process is initiated by [ProcessMedia](https://www.tencentcloud.com/document/product/266/33427?from_cn_redirect=1), this field represents BasicInfo.Name of [MediaInfo](https://www.tencentcloud.com/document/product/266/31773?from_cn_redirect=1#MediaInfo);</li>
<li>If the process is initiated by [ProcessMediaByUrl](https://www.tencentcloud.com/document/product/266/33426?from_cn_redirect=1), this field represents the Name of [MediaInputInfo](https://www.tencentcloud.com/document/product/266/31773?from_cn_redirect=1#MediaInputInfo).</li>
                     * @param _fileName Media file name
<li>If the process is initiated by [ProcessMedia](https://www.tencentcloud.com/document/product/266/33427?from_cn_redirect=1), this field represents BasicInfo.Name of [MediaInfo](https://www.tencentcloud.com/document/product/266/31773?from_cn_redirect=1#MediaInfo);</li>
<li>If the process is initiated by [ProcessMediaByUrl](https://www.tencentcloud.com/document/product/266/33426?from_cn_redirect=1), this field represents the Name of [MediaInputInfo](https://www.tencentcloud.com/document/product/266/31773?from_cn_redirect=1#MediaInputInfo).</li>
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取Media file address
<li>If the process is initiated by [ProcessMedia](https://www.tencentcloud.com/document/product/266/33427?from_cn_redirect=1), this field represents BasicInfo.MediaUrl of [MediaInfo](https://www.tencentcloud.com/document/product/266/31773?from_cn_redirect=1#MediaInfo);</li>
<li>If the process is initiated by [ProcessMediaByUrl](https://www.tencentcloud.com/document/product/266/33426?from_cn_redirect=1), this field represents the Url of [MediaInputInfo](https://www.tencentcloud.com/document/product/266/31773?from_cn_redirect=1#MediaInputInfo).</li>
                     * @return FileUrl Media file address
<li>If the process is initiated by [ProcessMedia](https://www.tencentcloud.com/document/product/266/33427?from_cn_redirect=1), this field represents BasicInfo.MediaUrl of [MediaInfo](https://www.tencentcloud.com/document/product/266/31773?from_cn_redirect=1#MediaInfo);</li>
<li>If the process is initiated by [ProcessMediaByUrl](https://www.tencentcloud.com/document/product/266/33426?from_cn_redirect=1), this field represents the Url of [MediaInputInfo](https://www.tencentcloud.com/document/product/266/31773?from_cn_redirect=1#MediaInputInfo).</li>
                     * 
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置Media file address
<li>If the process is initiated by [ProcessMedia](https://www.tencentcloud.com/document/product/266/33427?from_cn_redirect=1), this field represents BasicInfo.MediaUrl of [MediaInfo](https://www.tencentcloud.com/document/product/266/31773?from_cn_redirect=1#MediaInfo);</li>
<li>If the process is initiated by [ProcessMediaByUrl](https://www.tencentcloud.com/document/product/266/33426?from_cn_redirect=1), this field represents the Url of [MediaInputInfo](https://www.tencentcloud.com/document/product/266/31773?from_cn_redirect=1#MediaInputInfo).</li>
                     * @param _fileUrl Media file address
<li>If the process is initiated by [ProcessMedia](https://www.tencentcloud.com/document/product/266/33427?from_cn_redirect=1), this field represents BasicInfo.MediaUrl of [MediaInfo](https://www.tencentcloud.com/document/product/266/31773?from_cn_redirect=1#MediaInfo);</li>
<li>If the process is initiated by [ProcessMediaByUrl](https://www.tencentcloud.com/document/product/266/33426?from_cn_redirect=1), this field represents the Url of [MediaInputInfo](https://www.tencentcloud.com/document/product/266/31773?from_cn_redirect=1#MediaInputInfo).</li>
                     * 
                     */
                    void SetFileUrl(const std::string& _fileUrl);

                    /**
                     * 判断参数 FileUrl 是否已赋值
                     * @return FileUrl 是否已赋值
                     * 
                     */
                    bool FileUrlHasBeenSet() const;

                    /**
                     * 获取Metadata of the original audio/video.
                     * @return MetaData Metadata of the original audio/video.
                     * 
                     */
                    MediaMetaData GetMetaData() const;

                    /**
                     * 设置Metadata of the original audio/video.
                     * @param _metaData Metadata of the original audio/video.
                     * 
                     */
                    void SetMetaData(const MediaMetaData& _metaData);

                    /**
                     * 判断参数 MetaData 是否已赋值
                     * @return MetaData 是否已赋值
                     * 
                     */
                    bool MetaDataHasBeenSet() const;

                    /**
                     * 获取Execution status and results of the audio/video processing task.
                     * @return MediaProcessResultSet Execution status and results of the audio/video processing task.
                     * 
                     */
                    std::vector<MediaProcessTaskResult> GetMediaProcessResultSet() const;

                    /**
                     * 设置Execution status and results of the audio/video processing task.
                     * @param _mediaProcessResultSet Execution status and results of the audio/video processing task.
                     * 
                     */
                    void SetMediaProcessResultSet(const std::vector<MediaProcessTaskResult>& _mediaProcessResultSet);

                    /**
                     * 判断参数 MediaProcessResultSet 是否已赋值
                     * @return MediaProcessResultSet 是否已赋值
                     * 
                     */
                    bool MediaProcessResultSetHasBeenSet() const;

                    /**
                     * 获取Execution status and results of a video moderation task.
                     * @return AiContentReviewResultSet Execution status and results of a video moderation task.
                     * 
                     */
                    std::vector<AiContentReviewResult> GetAiContentReviewResultSet() const;

                    /**
                     * 设置Execution status and results of a video moderation task.
                     * @param _aiContentReviewResultSet Execution status and results of a video moderation task.
                     * 
                     */
                    void SetAiContentReviewResultSet(const std::vector<AiContentReviewResult>& _aiContentReviewResultSet);

                    /**
                     * 判断参数 AiContentReviewResultSet 是否已赋值
                     * @return AiContentReviewResultSet 是否已赋值
                     * 
                     */
                    bool AiContentReviewResultSetHasBeenSet() const;

                    /**
                     * 获取Execution status and results of an audio/video content analysis task.
                     * @return AiAnalysisResultSet Execution status and results of an audio/video content analysis task.
                     * 
                     */
                    std::vector<AiAnalysisResult> GetAiAnalysisResultSet() const;

                    /**
                     * 设置Execution status and results of an audio/video content analysis task.
                     * @param _aiAnalysisResultSet Execution status and results of an audio/video content analysis task.
                     * 
                     */
                    void SetAiAnalysisResultSet(const std::vector<AiAnalysisResult>& _aiAnalysisResultSet);

                    /**
                     * 判断参数 AiAnalysisResultSet 是否已赋值
                     * @return AiAnalysisResultSet 是否已赋值
                     * 
                     */
                    bool AiAnalysisResultSetHasBeenSet() const;

                    /**
                     * 获取Execution status and results of an audio/video content recognition task.
                     * @return AiRecognitionResultSet Execution status and results of an audio/video content recognition task.
                     * 
                     */
                    std::vector<AiRecognitionResult> GetAiRecognitionResultSet() const;

                    /**
                     * 设置Execution status and results of an audio/video content recognition task.
                     * @param _aiRecognitionResultSet Execution status and results of an audio/video content recognition task.
                     * 
                     */
                    void SetAiRecognitionResultSet(const std::vector<AiRecognitionResult>& _aiRecognitionResultSet);

                    /**
                     * 判断参数 AiRecognitionResultSet 是否已赋值
                     * @return AiRecognitionResultSet 是否已赋值
                     * 
                     */
                    bool AiRecognitionResultSetHasBeenSet() const;

                    /**
                     * 获取Priority of the task flow, with a value range of [-10, 10].
                     * @return TasksPriority Priority of the task flow, with a value range of [-10, 10].
                     * 
                     */
                    int64_t GetTasksPriority() const;

                    /**
                     * 设置Priority of the task flow, with a value range of [-10, 10].
                     * @param _tasksPriority Priority of the task flow, with a value range of [-10, 10].
                     * 
                     */
                    void SetTasksPriority(const int64_t& _tasksPriority);

                    /**
                     * 判断参数 TasksPriority 是否已赋值
                     * @return TasksPriority 是否已赋值
                     * 
                     */
                    bool TasksPriorityHasBeenSet() const;

                    /**
                     * 获取Task flow status change notification mode.
<li>Finish: Initiate an event notification only when all task flows are completed;</li>
<li>Change: As long as the state of each subtask in the task flow changes, an event notification will be sent;</li>
<li>None: non-acceptance of the task flow callback.</li>
                     * @return TasksNotifyMode Task flow status change notification mode.
<li>Finish: Initiate an event notification only when all task flows are completed;</li>
<li>Change: As long as the state of each subtask in the task flow changes, an event notification will be sent;</li>
<li>None: non-acceptance of the task flow callback.</li>
                     * 
                     */
                    std::string GetTasksNotifyMode() const;

                    /**
                     * 设置Task flow status change notification mode.
<li>Finish: Initiate an event notification only when all task flows are completed;</li>
<li>Change: As long as the state of each subtask in the task flow changes, an event notification will be sent;</li>
<li>None: non-acceptance of the task flow callback.</li>
                     * @param _tasksNotifyMode Task flow status change notification mode.
<li>Finish: Initiate an event notification only when all task flows are completed;</li>
<li>Change: As long as the state of each subtask in the task flow changes, an event notification will be sent;</li>
<li>None: non-acceptance of the task flow callback.</li>
                     * 
                     */
                    void SetTasksNotifyMode(const std::string& _tasksNotifyMode);

                    /**
                     * 判断参数 TasksNotifyMode 是否已赋值
                     * @return TasksNotifyMode 是否已赋值
                     * 
                     */
                    bool TasksNotifyModeHasBeenSet() const;

                    /**
                     * 获取Source context, which is used to pass through the user request information. The callback for task flow status changes will return the value of this field. The maximum length is 1,000 characters.
                     * @return SessionContext Source context, which is used to pass through the user request information. The callback for task flow status changes will return the value of this field. The maximum length is 1,000 characters.
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置Source context, which is used to pass through the user request information. The callback for task flow status changes will return the value of this field. The maximum length is 1,000 characters.
                     * @param _sessionContext Source context, which is used to pass through the user request information. The callback for task flow status changes will return the value of this field. The maximum length is 1,000 characters.
                     * 
                     */
                    void SetSessionContext(const std::string& _sessionContext);

                    /**
                     * 判断参数 SessionContext 是否已赋值
                     * @return SessionContext 是否已赋值
                     * 
                     */
                    bool SessionContextHasBeenSet() const;

                    /**
                     * 获取An identifier for deduplication. If there has been a request with the same identifier within the past seven days, an error will be returned for the current request. The maximum length is 50 characters. Leaving it blank or using a null string indicates no deduplication is required.
                     * @return SessionId An identifier for deduplication. If there has been a request with the same identifier within the past seven days, an error will be returned for the current request. The maximum length is 50 characters. Leaving it blank or using a null string indicates no deduplication is required.
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置An identifier for deduplication. If there has been a request with the same identifier within the past seven days, an error will be returned for the current request. The maximum length is 50 characters. Leaving it blank or using a null string indicates no deduplication is required.
                     * @param _sessionId An identifier for deduplication. If there has been a request with the same identifier within the past seven days, an error will be returned for the current request. The maximum length is 50 characters. Leaving it blank or using a null string indicates no deduplication is required.
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取Operator. Value range:
<li>System: indicates a system trigger.</li>
                     * @return Operator Operator. Value range:
<li>System: indicates a system trigger.</li>
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置Operator. Value range:
<li>System: indicates a system trigger.</li>
                     * @param _operator Operator. Value range:
<li>System: indicates a system trigger.</li>
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取Operation type. Valid values:
<li>TSC: indicates usage of top speed Codec for smart bitrate reduction.</li>
                     * @return OperationType Operation type. Valid values:
<li>TSC: indicates usage of top speed Codec for smart bitrate reduction.</li>
                     * 
                     */
                    std::string GetOperationType() const;

                    /**
                     * 设置Operation type. Valid values:
<li>TSC: indicates usage of top speed Codec for smart bitrate reduction.</li>
                     * @param _operationType Operation type. Valid values:
<li>TSC: indicates usage of top speed Codec for smart bitrate reduction.</li>
                     * 
                     */
                    void SetOperationType(const std::string& _operationType);

                    /**
                     * 判断参数 OperationType 是否已赋值
                     * @return OperationType 是否已赋值
                     * 
                     */
                    bool OperationTypeHasBeenSet() const;

                private:

                    /**
                     * Media processing task ID.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Task flow status. Valid values:
<li>PROCESSING: Processing;</li>
<li>FINISH: completed</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Deprecated. Please use the ErrCode of each specific task.
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * Deprecated. Please use the Message of each specific task.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Media file ID
<li>If the process is initiated by [ProcessMedia](https://www.tencentcloud.com/document/product/266/33427?from_cn_redirect=1), this field represents the FileId of [MediaInfo](https://www.tencentcloud.com/document/product/266/31773?from_cn_redirect=1#MediaInfo);</li>
<li>If the process is initiated by [ProcessMediaByUrl](https://www.tencentcloud.com/document/product/266/33426?from_cn_redirect=1), this field represents the Id of [MediaInputInfo](https://www.tencentcloud.com/document/product/266/31773?from_cn_redirect=1#MediaInputInfo).</li>
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * Media file name
<li>If the process is initiated by [ProcessMedia](https://www.tencentcloud.com/document/product/266/33427?from_cn_redirect=1), this field represents BasicInfo.Name of [MediaInfo](https://www.tencentcloud.com/document/product/266/31773?from_cn_redirect=1#MediaInfo);</li>
<li>If the process is initiated by [ProcessMediaByUrl](https://www.tencentcloud.com/document/product/266/33426?from_cn_redirect=1), this field represents the Name of [MediaInputInfo](https://www.tencentcloud.com/document/product/266/31773?from_cn_redirect=1#MediaInputInfo).</li>
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * Media file address
<li>If the process is initiated by [ProcessMedia](https://www.tencentcloud.com/document/product/266/33427?from_cn_redirect=1), this field represents BasicInfo.MediaUrl of [MediaInfo](https://www.tencentcloud.com/document/product/266/31773?from_cn_redirect=1#MediaInfo);</li>
<li>If the process is initiated by [ProcessMediaByUrl](https://www.tencentcloud.com/document/product/266/33426?from_cn_redirect=1), this field represents the Url of [MediaInputInfo](https://www.tencentcloud.com/document/product/266/31773?from_cn_redirect=1#MediaInputInfo).</li>
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * Metadata of the original audio/video.
                     */
                    MediaMetaData m_metaData;
                    bool m_metaDataHasBeenSet;

                    /**
                     * Execution status and results of the audio/video processing task.
                     */
                    std::vector<MediaProcessTaskResult> m_mediaProcessResultSet;
                    bool m_mediaProcessResultSetHasBeenSet;

                    /**
                     * Execution status and results of a video moderation task.
                     */
                    std::vector<AiContentReviewResult> m_aiContentReviewResultSet;
                    bool m_aiContentReviewResultSetHasBeenSet;

                    /**
                     * Execution status and results of an audio/video content analysis task.
                     */
                    std::vector<AiAnalysisResult> m_aiAnalysisResultSet;
                    bool m_aiAnalysisResultSetHasBeenSet;

                    /**
                     * Execution status and results of an audio/video content recognition task.
                     */
                    std::vector<AiRecognitionResult> m_aiRecognitionResultSet;
                    bool m_aiRecognitionResultSetHasBeenSet;

                    /**
                     * Priority of the task flow, with a value range of [-10, 10].
                     */
                    int64_t m_tasksPriority;
                    bool m_tasksPriorityHasBeenSet;

                    /**
                     * Task flow status change notification mode.
<li>Finish: Initiate an event notification only when all task flows are completed;</li>
<li>Change: As long as the state of each subtask in the task flow changes, an event notification will be sent;</li>
<li>None: non-acceptance of the task flow callback.</li>
                     */
                    std::string m_tasksNotifyMode;
                    bool m_tasksNotifyModeHasBeenSet;

                    /**
                     * Source context, which is used to pass through the user request information. The callback for task flow status changes will return the value of this field. The maximum length is 1,000 characters.
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * An identifier for deduplication. If there has been a request with the same identifier within the past seven days, an error will be returned for the current request. The maximum length is 50 characters. Leaving it blank or using a null string indicates no deduplication is required.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * Operator. Value range:
<li>System: indicates a system trigger.</li>
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * Operation type. Valid values:
<li>TSC: indicates usage of top speed Codec for smart bitrate reduction.</li>
                     */
                    std::string m_operationType;
                    bool m_operationTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_PROCEDURETASK_H_
