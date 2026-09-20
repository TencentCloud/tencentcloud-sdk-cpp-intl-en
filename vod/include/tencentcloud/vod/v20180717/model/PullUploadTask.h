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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_PULLUPLOADTASK_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_PULLUPLOADTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaBasicInfo.h>
#include <tencentcloud/vod/v20180717/model/MediaMetaData.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Pull upload task information
                */
                class PullUploadTask : public AbstractModel
                {
                public:
                    PullUploadTask();
                    ~PullUploadTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Pull the upload task ID.</p>
                     * @return TaskId <p>Pull the upload task ID.</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>Pull the upload task ID.</p>
                     * @param _taskId <p>Pull the upload task ID.</p>
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
                     * 获取<p>Task flow status. Valid values: </p><li>PROCESSING: Processing; </li><li>FINISH: Completed.</li>
                     * @return Status <p>Task flow status. Valid values: </p><li>PROCESSING: Processing; </li><li>FINISH: Completed.</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Task flow status. Valid values: </p><li>PROCESSING: Processing; </li><li>FINISH: Completed.</li>
                     * @param _status <p>Task flow status. Valid values: </p><li>PROCESSING: Processing; </li><li>FINISH: Completed.</li>
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
                     * 获取<p>Error code. 0 indicates success, and other values indicate failure:</p><li>40000: Invalid input parameters. Check the input parameters.</li><li>60000: Source file error (for example, video data corruption). Confirm whether the source file is normal.</li><li>70000: Internal service error. Retry is recommended.</li>
                     * @return ErrCode <p>Error code. 0 indicates success, and other values indicate failure:</p><li>40000: Invalid input parameters. Check the input parameters.</li><li>60000: Source file error (for example, video data corruption). Confirm whether the source file is normal.</li><li>70000: Internal service error. Retry is recommended.</li>
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置<p>Error code. 0 indicates success, and other values indicate failure:</p><li>40000: Invalid input parameters. Check the input parameters.</li><li>60000: Source file error (for example, video data corruption). Confirm whether the source file is normal.</li><li>70000: Internal service error. Retry is recommended.</li>
                     * @param _errCode <p>Error code. 0 indicates success, and other values indicate failure:</p><li>40000: Invalid input parameters. Check the input parameters.</li><li>60000: Source file error (for example, video data corruption). Confirm whether the source file is normal.</li><li>70000: Internal service error. Retry is recommended.</li>
                     * 
                     */
                    void SetErrCode(const int64_t& _errCode);

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     * 
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取<p>Error message.</p>
                     * @return Message <p>Error message.</p>
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置<p>Error message.</p>
                     * @param _message <p>Error message.</p>
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取<p>Pull the video ID generated after upload completion.</p>
                     * @return FileId <p>Pull the video ID generated after upload completion.</p>
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置<p>Pull the video ID generated after upload completion.</p>
                     * @param _fileId <p>Pull the video ID generated after upload completion.</p>
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
                     * 获取<p>Pull basic information of the generated media file after upload completion.</p>
                     * @return MediaBasicInfo <p>Pull basic information of the generated media file after upload completion.</p>
                     * 
                     */
                    MediaBasicInfo GetMediaBasicInfo() const;

                    /**
                     * 设置<p>Pull basic information of the generated media file after upload completion.</p>
                     * @param _mediaBasicInfo <p>Pull basic information of the generated media file after upload completion.</p>
                     * 
                     */
                    void SetMediaBasicInfo(const MediaBasicInfo& _mediaBasicInfo);

                    /**
                     * 判断参数 MediaBasicInfo 是否已赋值
                     * @return MediaBasicInfo 是否已赋值
                     * 
                     */
                    bool MediaBasicInfoHasBeenSet() const;

                    /**
                     * 获取<p>Meta-information of the output video.</p>
                     * @return MetaData <p>Meta-information of the output video.</p>
                     * 
                     */
                    MediaMetaData GetMetaData() const;

                    /**
                     * 设置<p>Meta-information of the output video.</p>
                     * @param _metaData <p>Meta-information of the output video.</p>
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
                     * 获取<p>Get the playback address generated after upload completion.</p>
                     * @return FileUrl <p>Get the playback address generated after upload completion.</p>
                     * 
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置<p>Get the playback address generated after upload completion.</p>
                     * @param _fileUrl <p>Get the playback address generated after upload completion.</p>
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
                     * 获取<p>Task ID of the task type Procedure. If a media subsequent task operation (Procedure) is specified during <a href="https://www.tencentcloud.com/document/api/266/35575?from_cn_redirect=1">pull upload</a>, the task is initiated when the task flow template specifies one or more of MediaProcessTask, AiAnalysisTask, and AiRecognitionTask.</p>
                     * @return ProcedureTaskId <p>Task ID of the task type Procedure. If a media subsequent task operation (Procedure) is specified during <a href="https://www.tencentcloud.com/document/api/266/35575?from_cn_redirect=1">pull upload</a>, the task is initiated when the task flow template specifies one or more of MediaProcessTask, AiAnalysisTask, and AiRecognitionTask.</p>
                     * 
                     */
                    std::string GetProcedureTaskId() const;

                    /**
                     * 设置<p>Task ID of the task type Procedure. If a media subsequent task operation (Procedure) is specified during <a href="https://www.tencentcloud.com/document/api/266/35575?from_cn_redirect=1">pull upload</a>, the task is initiated when the task flow template specifies one or more of MediaProcessTask, AiAnalysisTask, and AiRecognitionTask.</p>
                     * @param _procedureTaskId <p>Task ID of the task type Procedure. If a media subsequent task operation (Procedure) is specified during <a href="https://www.tencentcloud.com/document/api/266/35575?from_cn_redirect=1">pull upload</a>, the task is initiated when the task flow template specifies one or more of MediaProcessTask, AiAnalysisTask, and AiRecognitionTask.</p>
                     * 
                     */
                    void SetProcedureTaskId(const std::string& _procedureTaskId);

                    /**
                     * 判断参数 ProcedureTaskId 是否已赋值
                     * @return ProcedureTaskId 是否已赋值
                     * 
                     */
                    bool ProcedureTaskIdHasBeenSet() const;

                    /**
                     * 获取<p>Task ID of the task type ReviewAudioVideo. If a media subsequent task operation (Procedure) is specified during <a href="https://www.tencentcloud.com/document/api/266/35575?from_cn_redirect=1">pull upload</a>, the task is initiated when the task flow template specifies ReviewAudioVideoTask.</p>
                     * @return ReviewAudioVideoTaskId <p>Task ID of the task type ReviewAudioVideo. If a media subsequent task operation (Procedure) is specified during <a href="https://www.tencentcloud.com/document/api/266/35575?from_cn_redirect=1">pull upload</a>, the task is initiated when the task flow template specifies ReviewAudioVideoTask.</p>
                     * 
                     */
                    std::string GetReviewAudioVideoTaskId() const;

                    /**
                     * 设置<p>Task ID of the task type ReviewAudioVideo. If a media subsequent task operation (Procedure) is specified during <a href="https://www.tencentcloud.com/document/api/266/35575?from_cn_redirect=1">pull upload</a>, the task is initiated when the task flow template specifies ReviewAudioVideoTask.</p>
                     * @param _reviewAudioVideoTaskId <p>Task ID of the task type ReviewAudioVideo. If a media subsequent task operation (Procedure) is specified during <a href="https://www.tencentcloud.com/document/api/266/35575?from_cn_redirect=1">pull upload</a>, the task is initiated when the task flow template specifies ReviewAudioVideoTask.</p>
                     * 
                     */
                    void SetReviewAudioVideoTaskId(const std::string& _reviewAudioVideoTaskId);

                    /**
                     * 判断参数 ReviewAudioVideoTaskId 是否已赋值
                     * @return ReviewAudioVideoTaskId 是否已赋值
                     * 
                     */
                    bool ReviewAudioVideoTaskIdHasBeenSet() const;

                    /**
                     * 获取<p>Source context, used to pass through user request information. <a href="https://www.tencentcloud.com/document/product/266/7831?from_cn_redirect=1">URL pull video upload completed</a> will return the value of this field, up to 1000 characters.</p>
                     * @return SessionContext <p>Source context, used to pass through user request information. <a href="https://www.tencentcloud.com/document/product/266/7831?from_cn_redirect=1">URL pull video upload completed</a> will return the value of this field, up to 1000 characters.</p>
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置<p>Source context, used to pass through user request information. <a href="https://www.tencentcloud.com/document/product/266/7831?from_cn_redirect=1">URL pull video upload completed</a> will return the value of this field, up to 1000 characters.</p>
                     * @param _sessionContext <p>Source context, used to pass through user request information. <a href="https://www.tencentcloud.com/document/product/266/7831?from_cn_redirect=1">URL pull video upload completed</a> will return the value of this field, up to 1000 characters.</p>
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
                     * 获取<p>Identifier for deduplication. If a request with the same identifier has been sent within the past seven days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.</p>
                     * @return SessionId <p>Identifier for deduplication. If a request with the same identifier has been sent within the past seven days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>Identifier for deduplication. If a request with the same identifier has been sent within the past seven days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.</p>
                     * @param _sessionId <p>Identifier for deduplication. If a request with the same identifier has been sent within the past seven days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.</p>
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
                     * 获取<p>Pull the upload progress, with a value range of [0-100].</p>
                     * @return Progress <p>Pull the upload progress, with a value range of [0-100].</p>
                     * 
                     */
                    int64_t GetProgress() const;

                    /**
                     * 设置<p>Pull the upload progress, with a value range of [0-100].</p>
                     * @param _progress <p>Pull the upload progress, with a value range of [0-100].</p>
                     * 
                     */
                    void SetProgress(const int64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                private:

                    /**
                     * <p>Pull the upload task ID.</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>Task flow status. Valid values: </p><li>PROCESSING: Processing; </li><li>FINISH: Completed.</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Error code. 0 indicates success, and other values indicate failure:</p><li>40000: Invalid input parameters. Check the input parameters.</li><li>60000: Source file error (for example, video data corruption). Confirm whether the source file is normal.</li><li>70000: Internal service error. Retry is recommended.</li>
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * <p>Error message.</p>
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * <p>Pull the video ID generated after upload completion.</p>
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * <p>Pull basic information of the generated media file after upload completion.</p>
                     */
                    MediaBasicInfo m_mediaBasicInfo;
                    bool m_mediaBasicInfoHasBeenSet;

                    /**
                     * <p>Meta-information of the output video.</p>
                     */
                    MediaMetaData m_metaData;
                    bool m_metaDataHasBeenSet;

                    /**
                     * <p>Get the playback address generated after upload completion.</p>
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * <p>Task ID of the task type Procedure. If a media subsequent task operation (Procedure) is specified during <a href="https://www.tencentcloud.com/document/api/266/35575?from_cn_redirect=1">pull upload</a>, the task is initiated when the task flow template specifies one or more of MediaProcessTask, AiAnalysisTask, and AiRecognitionTask.</p>
                     */
                    std::string m_procedureTaskId;
                    bool m_procedureTaskIdHasBeenSet;

                    /**
                     * <p>Task ID of the task type ReviewAudioVideo. If a media subsequent task operation (Procedure) is specified during <a href="https://www.tencentcloud.com/document/api/266/35575?from_cn_redirect=1">pull upload</a>, the task is initiated when the task flow template specifies ReviewAudioVideoTask.</p>
                     */
                    std::string m_reviewAudioVideoTaskId;
                    bool m_reviewAudioVideoTaskIdHasBeenSet;

                    /**
                     * <p>Source context, used to pass through user request information. <a href="https://www.tencentcloud.com/document/product/266/7831?from_cn_redirect=1">URL pull video upload completed</a> will return the value of this field, up to 1000 characters.</p>
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * <p>Identifier for deduplication. If a request with the same identifier has been sent within the past seven days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>Pull the upload progress, with a value range of [0-100].</p>
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_PULLUPLOADTASK_H_
