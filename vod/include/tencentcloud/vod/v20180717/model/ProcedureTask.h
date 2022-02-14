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
                * Video processing task information
                */
                class ProcedureTask : public AbstractModel
                {
                public:
                    ProcedureTask();
                    ~ProcedureTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Video processing task ID.
                     * @return TaskId Video processing task ID.
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Video processing task ID.
                     * @param TaskId Video processing task ID.
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Task flow status. Valid values:
<li>PROCESSING: processing;</li>
<li>FINISH: completed.</li>
                     * @return Status Task flow status. Valid values:
<li>PROCESSING: processing;</li>
<li>FINISH: completed.</li>
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Task flow status. Valid values:
<li>PROCESSING: processing;</li>
<li>FINISH: completed.</li>
                     * @param Status Task flow status. Valid values:
<li>PROCESSING: processing;</li>
<li>FINISH: completed.</li>
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Disused. Please use `ErrCode` of each specific task.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ErrCode Disused. Please use `ErrCode` of each specific task.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置Disused. Please use `ErrCode` of each specific task.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ErrCode Disused. Please use `ErrCode` of each specific task.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetErrCode(const int64_t& _errCode);

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取Disused. Please use `Message` of each specific task.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Message Disused. Please use `Message` of each specific task.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Disused. Please use `Message` of each specific task.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Message Disused. Please use `Message` of each specific task.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取Media file ID.
<li>If the task flow is initiated by [ProcessMedia](https://cloud.tencent.com/document/product/266/33427), this field means the `FileId` in [MediaInfo](https://cloud.tencent.com/document/product/266/31773#MediaInfo);</li>
<li>If the task flow is initiated by [ProcessMediaByUrl](https://cloud.tencent.com/document/product/266/33426), this field means the `Id` in [MediaInputInfo](https://cloud.tencent.com/document/product/266/31773#MediaInputInfo).</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return FileId Media file ID.
<li>If the task flow is initiated by [ProcessMedia](https://cloud.tencent.com/document/product/266/33427), this field means the `FileId` in [MediaInfo](https://cloud.tencent.com/document/product/266/31773#MediaInfo);</li>
<li>If the task flow is initiated by [ProcessMediaByUrl](https://cloud.tencent.com/document/product/266/33426), this field means the `Id` in [MediaInputInfo](https://cloud.tencent.com/document/product/266/31773#MediaInputInfo).</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置Media file ID.
<li>If the task flow is initiated by [ProcessMedia](https://cloud.tencent.com/document/product/266/33427), this field means the `FileId` in [MediaInfo](https://cloud.tencent.com/document/product/266/31773#MediaInfo);</li>
<li>If the task flow is initiated by [ProcessMediaByUrl](https://cloud.tencent.com/document/product/266/33426), this field means the `Id` in [MediaInputInfo](https://cloud.tencent.com/document/product/266/31773#MediaInputInfo).</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param FileId Media file ID.
<li>If the task flow is initiated by [ProcessMedia](https://cloud.tencent.com/document/product/266/33427), this field means the `FileId` in [MediaInfo](https://cloud.tencent.com/document/product/266/31773#MediaInfo);</li>
<li>If the task flow is initiated by [ProcessMediaByUrl](https://cloud.tencent.com/document/product/266/33426), this field means the `Id` in [MediaInputInfo](https://cloud.tencent.com/document/product/266/31773#MediaInputInfo).</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取Media filename
<li>If the task flow is initiated by [ProcessMedia](https://cloud.tencent.com/document/product/266/33427), this field means the `BasicInfo.Name` in [MediaInfo](https://cloud.tencent.com/document/product/266/31773#MediaInfo);</li>
<li>If the task flow is initiated by [ProcessMediaByUrl](https://cloud.tencent.com/document/product/266/33426), this field means the `Name` in [MediaInputInfo](https://cloud.tencent.com/document/product/266/31773#MediaInputInfo).</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return FileName Media filename
<li>If the task flow is initiated by [ProcessMedia](https://cloud.tencent.com/document/product/266/33427), this field means the `BasicInfo.Name` in [MediaInfo](https://cloud.tencent.com/document/product/266/31773#MediaInfo);</li>
<li>If the task flow is initiated by [ProcessMediaByUrl](https://cloud.tencent.com/document/product/266/33426), this field means the `Name` in [MediaInputInfo](https://cloud.tencent.com/document/product/266/31773#MediaInputInfo).</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置Media filename
<li>If the task flow is initiated by [ProcessMedia](https://cloud.tencent.com/document/product/266/33427), this field means the `BasicInfo.Name` in [MediaInfo](https://cloud.tencent.com/document/product/266/31773#MediaInfo);</li>
<li>If the task flow is initiated by [ProcessMediaByUrl](https://cloud.tencent.com/document/product/266/33426), this field means the `Name` in [MediaInputInfo](https://cloud.tencent.com/document/product/266/31773#MediaInputInfo).</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param FileName Media filename
<li>If the task flow is initiated by [ProcessMedia](https://cloud.tencent.com/document/product/266/33427), this field means the `BasicInfo.Name` in [MediaInfo](https://cloud.tencent.com/document/product/266/31773#MediaInfo);</li>
<li>If the task flow is initiated by [ProcessMediaByUrl](https://cloud.tencent.com/document/product/266/33426), this field means the `Name` in [MediaInputInfo](https://cloud.tencent.com/document/product/266/31773#MediaInputInfo).</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取Media file address
<li>If the task flow is initiated by [ProcessMedia](https://cloud.tencent.com/document/product/266/33427), this field means the `BasicInfo.MediaUrl` in [MediaInfo](https://cloud.tencent.com/document/product/266/31773#MediaInfo);</li>
<li>If the task flow is initiated by [ProcessMediaByUrl](https://cloud.tencent.com/document/product/266/33426), this field means the `Url` in [MediaInputInfo](https://cloud.tencent.com/document/product/266/31773#MediaInputInfo).</li>
                     * @return FileUrl Media file address
<li>If the task flow is initiated by [ProcessMedia](https://cloud.tencent.com/document/product/266/33427), this field means the `BasicInfo.MediaUrl` in [MediaInfo](https://cloud.tencent.com/document/product/266/31773#MediaInfo);</li>
<li>If the task flow is initiated by [ProcessMediaByUrl](https://cloud.tencent.com/document/product/266/33426), this field means the `Url` in [MediaInputInfo](https://cloud.tencent.com/document/product/266/31773#MediaInputInfo).</li>
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置Media file address
<li>If the task flow is initiated by [ProcessMedia](https://cloud.tencent.com/document/product/266/33427), this field means the `BasicInfo.MediaUrl` in [MediaInfo](https://cloud.tencent.com/document/product/266/31773#MediaInfo);</li>
<li>If the task flow is initiated by [ProcessMediaByUrl](https://cloud.tencent.com/document/product/266/33426), this field means the `Url` in [MediaInputInfo](https://cloud.tencent.com/document/product/266/31773#MediaInputInfo).</li>
                     * @param FileUrl Media file address
<li>If the task flow is initiated by [ProcessMedia](https://cloud.tencent.com/document/product/266/33427), this field means the `BasicInfo.MediaUrl` in [MediaInfo](https://cloud.tencent.com/document/product/266/31773#MediaInfo);</li>
<li>If the task flow is initiated by [ProcessMediaByUrl](https://cloud.tencent.com/document/product/266/33426), this field means the `Url` in [MediaInputInfo](https://cloud.tencent.com/document/product/266/31773#MediaInputInfo).</li>
                     */
                    void SetFileUrl(const std::string& _fileUrl);

                    /**
                     * 判断参数 FileUrl 是否已赋值
                     * @return FileUrl 是否已赋值
                     */
                    bool FileUrlHasBeenSet() const;

                    /**
                     * 获取Source video metadata.
                     * @return MetaData Source video metadata.
                     */
                    MediaMetaData GetMetaData() const;

                    /**
                     * 设置Source video metadata.
                     * @param MetaData Source video metadata.
                     */
                    void SetMetaData(const MediaMetaData& _metaData);

                    /**
                     * 判断参数 MetaData 是否已赋值
                     * @return MetaData 是否已赋值
                     */
                    bool MetaDataHasBeenSet() const;

                    /**
                     * 获取Execution status and result of video processing task.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MediaProcessResultSet Execution status and result of video processing task.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<MediaProcessTaskResult> GetMediaProcessResultSet() const;

                    /**
                     * 设置Execution status and result of video processing task.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param MediaProcessResultSet Execution status and result of video processing task.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMediaProcessResultSet(const std::vector<MediaProcessTaskResult>& _mediaProcessResultSet);

                    /**
                     * 判断参数 MediaProcessResultSet 是否已赋值
                     * @return MediaProcessResultSet 是否已赋值
                     */
                    bool MediaProcessResultSetHasBeenSet() const;

                    /**
                     * 获取Status and result of an intelligent recognition task
                     * @return AiContentReviewResultSet Status and result of an intelligent recognition task
                     */
                    std::vector<AiContentReviewResult> GetAiContentReviewResultSet() const;

                    /**
                     * 设置Status and result of an intelligent recognition task
                     * @param AiContentReviewResultSet Status and result of an intelligent recognition task
                     */
                    void SetAiContentReviewResultSet(const std::vector<AiContentReviewResult>& _aiContentReviewResultSet);

                    /**
                     * 判断参数 AiContentReviewResultSet 是否已赋值
                     * @return AiContentReviewResultSet 是否已赋值
                     */
                    bool AiContentReviewResultSetHasBeenSet() const;

                    /**
                     * 获取Execution status and result of video content analysis task.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AiAnalysisResultSet Execution status and result of video content analysis task.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AiAnalysisResult> GetAiAnalysisResultSet() const;

                    /**
                     * 设置Execution status and result of video content analysis task.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param AiAnalysisResultSet Execution status and result of video content analysis task.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAiAnalysisResultSet(const std::vector<AiAnalysisResult>& _aiAnalysisResultSet);

                    /**
                     * 判断参数 AiAnalysisResultSet 是否已赋值
                     * @return AiAnalysisResultSet 是否已赋值
                     */
                    bool AiAnalysisResultSetHasBeenSet() const;

                    /**
                     * 获取Execution status and result of video content recognition task.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AiRecognitionResultSet Execution status and result of video content recognition task.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AiRecognitionResult> GetAiRecognitionResultSet() const;

                    /**
                     * 设置Execution status and result of video content recognition task.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param AiRecognitionResultSet Execution status and result of video content recognition task.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAiRecognitionResultSet(const std::vector<AiRecognitionResult>& _aiRecognitionResultSet);

                    /**
                     * 判断参数 AiRecognitionResultSet 是否已赋值
                     * @return AiRecognitionResultSet 是否已赋值
                     */
                    bool AiRecognitionResultSetHasBeenSet() const;

                    /**
                     * 获取Task flow priority. Value range: [-10, 10].
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TasksPriority Task flow priority. Value range: [-10, 10].
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetTasksPriority() const;

                    /**
                     * 设置Task flow priority. Value range: [-10, 10].
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param TasksPriority Task flow priority. Value range: [-10, 10].
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTasksPriority(const int64_t& _tasksPriority);

                    /**
                     * 判断参数 TasksPriority 是否已赋值
                     * @return TasksPriority 是否已赋值
                     */
                    bool TasksPriorityHasBeenSet() const;

                    /**
                     * 获取Notification mode for change in task flow status.
<li>Finish: an event notification will be initiated only after the task flow is completely executed;</li>
<li>Change: an event notification will be initiated as soon as the status of a subtask in the task flow changes; </li>
<li>None: no callback for the task flow will be accepted.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TasksNotifyMode Notification mode for change in task flow status.
<li>Finish: an event notification will be initiated only after the task flow is completely executed;</li>
<li>Change: an event notification will be initiated as soon as the status of a subtask in the task flow changes; </li>
<li>None: no callback for the task flow will be accepted.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetTasksNotifyMode() const;

                    /**
                     * 设置Notification mode for change in task flow status.
<li>Finish: an event notification will be initiated only after the task flow is completely executed;</li>
<li>Change: an event notification will be initiated as soon as the status of a subtask in the task flow changes; </li>
<li>None: no callback for the task flow will be accepted.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param TasksNotifyMode Notification mode for change in task flow status.
<li>Finish: an event notification will be initiated only after the task flow is completely executed;</li>
<li>Change: an event notification will be initiated as soon as the status of a subtask in the task flow changes; </li>
<li>None: no callback for the task flow will be accepted.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTasksNotifyMode(const std::string& _tasksNotifyMode);

                    /**
                     * 判断参数 TasksNotifyMode 是否已赋值
                     * @return TasksNotifyMode 是否已赋值
                     */
                    bool TasksNotifyModeHasBeenSet() const;

                    /**
                     * 获取The source context which is used to pass through the user request information. The task flow status change callback will return the value of this field. It can contain up to 1,000 characters.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SessionContext The source context which is used to pass through the user request information. The task flow status change callback will return the value of this field. It can contain up to 1,000 characters.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置The source context which is used to pass through the user request information. The task flow status change callback will return the value of this field. It can contain up to 1,000 characters.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param SessionContext The source context which is used to pass through the user request information. The task flow status change callback will return the value of this field. It can contain up to 1,000 characters.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSessionContext(const std::string& _sessionContext);

                    /**
                     * 判断参数 SessionContext 是否已赋值
                     * @return SessionContext 是否已赋值
                     */
                    bool SessionContextHasBeenSet() const;

                    /**
                     * 获取The ID used for deduplication. If there was a request with the same ID in the last seven days, the current request will return an error. The ID can contain up to 50 characters. If this parameter is left empty or a blank string is entered, no deduplication will be performed.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SessionId The ID used for deduplication. If there was a request with the same ID in the last seven days, the current request will return an error. The ID can contain up to 50 characters. If this parameter is left empty or a blank string is entered, no deduplication will be performed.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置The ID used for deduplication. If there was a request with the same ID in the last seven days, the current request will return an error. The ID can contain up to 50 characters. If this parameter is left empty or a blank string is entered, no deduplication will be performed.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param SessionId The ID used for deduplication. If there was a request with the same ID in the last seven days, the current request will return an error. The ID can contain up to 50 characters. If this parameter is left empty or a blank string is entered, no deduplication will be performed.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     */
                    bool SessionIdHasBeenSet() const;

                private:

                    /**
                     * Video processing task ID.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Task flow status. Valid values:
<li>PROCESSING: processing;</li>
<li>FINISH: completed.</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Disused. Please use `ErrCode` of each specific task.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * Disused. Please use `Message` of each specific task.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Media file ID.
<li>If the task flow is initiated by [ProcessMedia](https://cloud.tencent.com/document/product/266/33427), this field means the `FileId` in [MediaInfo](https://cloud.tencent.com/document/product/266/31773#MediaInfo);</li>
<li>If the task flow is initiated by [ProcessMediaByUrl](https://cloud.tencent.com/document/product/266/33426), this field means the `Id` in [MediaInputInfo](https://cloud.tencent.com/document/product/266/31773#MediaInputInfo).</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * Media filename
<li>If the task flow is initiated by [ProcessMedia](https://cloud.tencent.com/document/product/266/33427), this field means the `BasicInfo.Name` in [MediaInfo](https://cloud.tencent.com/document/product/266/31773#MediaInfo);</li>
<li>If the task flow is initiated by [ProcessMediaByUrl](https://cloud.tencent.com/document/product/266/33426), this field means the `Name` in [MediaInputInfo](https://cloud.tencent.com/document/product/266/31773#MediaInputInfo).</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * Media file address
<li>If the task flow is initiated by [ProcessMedia](https://cloud.tencent.com/document/product/266/33427), this field means the `BasicInfo.MediaUrl` in [MediaInfo](https://cloud.tencent.com/document/product/266/31773#MediaInfo);</li>
<li>If the task flow is initiated by [ProcessMediaByUrl](https://cloud.tencent.com/document/product/266/33426), this field means the `Url` in [MediaInputInfo](https://cloud.tencent.com/document/product/266/31773#MediaInputInfo).</li>
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * Source video metadata.
                     */
                    MediaMetaData m_metaData;
                    bool m_metaDataHasBeenSet;

                    /**
                     * Execution status and result of video processing task.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<MediaProcessTaskResult> m_mediaProcessResultSet;
                    bool m_mediaProcessResultSetHasBeenSet;

                    /**
                     * Status and result of an intelligent recognition task
                     */
                    std::vector<AiContentReviewResult> m_aiContentReviewResultSet;
                    bool m_aiContentReviewResultSetHasBeenSet;

                    /**
                     * Execution status and result of video content analysis task.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AiAnalysisResult> m_aiAnalysisResultSet;
                    bool m_aiAnalysisResultSetHasBeenSet;

                    /**
                     * Execution status and result of video content recognition task.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AiRecognitionResult> m_aiRecognitionResultSet;
                    bool m_aiRecognitionResultSetHasBeenSet;

                    /**
                     * Task flow priority. Value range: [-10, 10].
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_tasksPriority;
                    bool m_tasksPriorityHasBeenSet;

                    /**
                     * Notification mode for change in task flow status.
<li>Finish: an event notification will be initiated only after the task flow is completely executed;</li>
<li>Change: an event notification will be initiated as soon as the status of a subtask in the task flow changes; </li>
<li>None: no callback for the task flow will be accepted.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tasksNotifyMode;
                    bool m_tasksNotifyModeHasBeenSet;

                    /**
                     * The source context which is used to pass through the user request information. The task flow status change callback will return the value of this field. It can contain up to 1,000 characters.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * The ID used for deduplication. If there was a request with the same ID in the last seven days, the current request will return an error. The ID can contain up to 50 characters. If this parameter is left empty or a blank string is entered, no deduplication will be performed.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_PROCEDURETASK_H_
