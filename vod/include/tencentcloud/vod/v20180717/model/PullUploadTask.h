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
                * The information of a pull and upload task.
                */
                class PullUploadTask : public AbstractModel
                {
                public:
                    PullUploadTask();
                    ~PullUploadTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The task ID.
                     * @return TaskId The task ID.
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置The task ID.
                     * @param TaskId The task ID.
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
                     * 获取Error code. 0: success; other values: failure.
<li>40000: invalid input parameter. Please check it;</li>
<li>60000: invalid source file (e.g., video data is corrupted). Please check whether the source file is normal;</li>
<li>70000: internal service error. Please try again.</li>
                     * @return ErrCode Error code. 0: success; other values: failure.
<li>40000: invalid input parameter. Please check it;</li>
<li>60000: invalid source file (e.g., video data is corrupted). Please check whether the source file is normal;</li>
<li>70000: internal service error. Please try again.</li>
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置Error code. 0: success; other values: failure.
<li>40000: invalid input parameter. Please check it;</li>
<li>60000: invalid source file (e.g., video data is corrupted). Please check whether the source file is normal;</li>
<li>70000: internal service error. Please try again.</li>
                     * @param ErrCode Error code. 0: success; other values: failure.
<li>40000: invalid input parameter. Please check it;</li>
<li>60000: invalid source file (e.g., video data is corrupted). Please check whether the source file is normal;</li>
<li>70000: internal service error. Please try again.</li>
                     */
                    void SetErrCode(const int64_t& _errCode);

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取Error message.
                     * @return Message Error message.
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Error message.
                     * @param Message Error message.
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取The ID of the uploaded file.
                     * @return FileId The ID of the uploaded file.
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置The ID of the uploaded file.
                     * @param FileId The ID of the uploaded file.
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取The basic information of the uploaded file.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MediaBasicInfo The basic information of the uploaded file.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MediaBasicInfo GetMediaBasicInfo() const;

                    /**
                     * 设置The basic information of the uploaded file.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param MediaBasicInfo The basic information of the uploaded file.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMediaBasicInfo(const MediaBasicInfo& _mediaBasicInfo);

                    /**
                     * 判断参数 MediaBasicInfo 是否已赋值
                     * @return MediaBasicInfo 是否已赋值
                     */
                    bool MediaBasicInfoHasBeenSet() const;

                    /**
                     * 获取The metadata of the output video.
                     * @return MetaData The metadata of the output video.
                     */
                    MediaMetaData GetMetaData() const;

                    /**
                     * 设置The metadata of the output video.
                     * @param MetaData The metadata of the output video.
                     */
                    void SetMetaData(const MediaMetaData& _metaData);

                    /**
                     * 判断参数 MetaData 是否已赋值
                     * @return MetaData 是否已赋值
                     */
                    bool MetaDataHasBeenSet() const;

                    /**
                     * 获取The playback address of the uploaded file.
                     * @return FileUrl The playback address of the uploaded file.
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置The playback address of the uploaded file.
                     * @param FileUrl The playback address of the uploaded file.
                     */
                    void SetFileUrl(const std::string& _fileUrl);

                    /**
                     * 判断参数 FileUrl 是否已赋值
                     * @return FileUrl 是否已赋值
                     */
                    bool FileUrlHasBeenSet() const;

                    /**
                     * 获取The task ID for the task type `Procedure`. If a task flow is specified by [PullUpload](https://intl.cloud.tencent.com/document/api/266/35575?from_cn_redirect=1), and the task flow includes one or more of `MediaProcessTask`, `AiAnalysisTask`, and `AiRecognitionTask`, the task specified by this parameter will be executed.
                     * @return ProcedureTaskId The task ID for the task type `Procedure`. If a task flow is specified by [PullUpload](https://intl.cloud.tencent.com/document/api/266/35575?from_cn_redirect=1), and the task flow includes one or more of `MediaProcessTask`, `AiAnalysisTask`, and `AiRecognitionTask`, the task specified by this parameter will be executed.
                     */
                    std::string GetProcedureTaskId() const;

                    /**
                     * 设置The task ID for the task type `Procedure`. If a task flow is specified by [PullUpload](https://intl.cloud.tencent.com/document/api/266/35575?from_cn_redirect=1), and the task flow includes one or more of `MediaProcessTask`, `AiAnalysisTask`, and `AiRecognitionTask`, the task specified by this parameter will be executed.
                     * @param ProcedureTaskId The task ID for the task type `Procedure`. If a task flow is specified by [PullUpload](https://intl.cloud.tencent.com/document/api/266/35575?from_cn_redirect=1), and the task flow includes one or more of `MediaProcessTask`, `AiAnalysisTask`, and `AiRecognitionTask`, the task specified by this parameter will be executed.
                     */
                    void SetProcedureTaskId(const std::string& _procedureTaskId);

                    /**
                     * 判断参数 ProcedureTaskId 是否已赋值
                     * @return ProcedureTaskId 是否已赋值
                     */
                    bool ProcedureTaskIdHasBeenSet() const;

                    /**
                     * 获取The task ID for the task type `ReviewAudioVideo`. If a task flow is specified by [PullUpload](https://intl.cloud.tencent.com/document/api/266/35575?from_cn_redirect=1), and the task flow includes `ReviewAudioVideoTask`, the task specified by this parameter will be executed.
                     * @return ReviewAudioVideoTaskId The task ID for the task type `ReviewAudioVideo`. If a task flow is specified by [PullUpload](https://intl.cloud.tencent.com/document/api/266/35575?from_cn_redirect=1), and the task flow includes `ReviewAudioVideoTask`, the task specified by this parameter will be executed.
                     */
                    std::string GetReviewAudioVideoTaskId() const;

                    /**
                     * 设置The task ID for the task type `ReviewAudioVideo`. If a task flow is specified by [PullUpload](https://intl.cloud.tencent.com/document/api/266/35575?from_cn_redirect=1), and the task flow includes `ReviewAudioVideoTask`, the task specified by this parameter will be executed.
                     * @param ReviewAudioVideoTaskId The task ID for the task type `ReviewAudioVideo`. If a task flow is specified by [PullUpload](https://intl.cloud.tencent.com/document/api/266/35575?from_cn_redirect=1), and the task flow includes `ReviewAudioVideoTask`, the task specified by this parameter will be executed.
                     */
                    void SetReviewAudioVideoTaskId(const std::string& _reviewAudioVideoTaskId);

                    /**
                     * 判断参数 ReviewAudioVideoTaskId 是否已赋值
                     * @return ReviewAudioVideoTaskId 是否已赋值
                     */
                    bool ReviewAudioVideoTaskIdHasBeenSet() const;

                    /**
                     * 获取The source context, which is used to pass through user request information. The [PullComplete](https://intl.cloud.tencent.com/document/product/266/7831?from_cn_redirect=1) callback will return the value of this parameter. It can contain up to 1,000 characters.
                     * @return SessionContext The source context, which is used to pass through user request information. The [PullComplete](https://intl.cloud.tencent.com/document/product/266/7831?from_cn_redirect=1) callback will return the value of this parameter. It can contain up to 1,000 characters.
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置The source context, which is used to pass through user request information. The [PullComplete](https://intl.cloud.tencent.com/document/product/266/7831?from_cn_redirect=1) callback will return the value of this parameter. It can contain up to 1,000 characters.
                     * @param SessionContext The source context, which is used to pass through user request information. The [PullComplete](https://intl.cloud.tencent.com/document/product/266/7831?from_cn_redirect=1) callback will return the value of this parameter. It can contain up to 1,000 characters.
                     */
                    void SetSessionContext(const std::string& _sessionContext);

                    /**
                     * 判断参数 SessionContext 是否已赋值
                     * @return SessionContext 是否已赋值
                     */
                    bool SessionContextHasBeenSet() const;

                    /**
                     * 获取The ID used for deduplication. If there was a request with the same ID in the last seven days, the current request will return an error. The ID can contain up to 50 characters. If this parameter is left empty or a blank string is entered, no deduplication will be performed.
                     * @return SessionId The ID used for deduplication. If there was a request with the same ID in the last seven days, the current request will return an error. The ID can contain up to 50 characters. If this parameter is left empty or a blank string is entered, no deduplication will be performed.
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置The ID used for deduplication. If there was a request with the same ID in the last seven days, the current request will return an error. The ID can contain up to 50 characters. If this parameter is left empty or a blank string is entered, no deduplication will be performed.
                     * @param SessionId The ID used for deduplication. If there was a request with the same ID in the last seven days, the current request will return an error. The ID can contain up to 50 characters. If this parameter is left empty or a blank string is entered, no deduplication will be performed.
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取The progress of the pull and upload task. Value range: 1-100.
                     * @return Progress The progress of the pull and upload task. Value range: 1-100.
                     */
                    int64_t GetProgress() const;

                    /**
                     * 设置The progress of the pull and upload task. Value range: 1-100.
                     * @param Progress The progress of the pull and upload task. Value range: 1-100.
                     */
                    void SetProgress(const int64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     */
                    bool ProgressHasBeenSet() const;

                private:

                    /**
                     * The task ID.
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
                     * Error code. 0: success; other values: failure.
<li>40000: invalid input parameter. Please check it;</li>
<li>60000: invalid source file (e.g., video data is corrupted). Please check whether the source file is normal;</li>
<li>70000: internal service error. Please try again.</li>
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * Error message.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * The ID of the uploaded file.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * The basic information of the uploaded file.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MediaBasicInfo m_mediaBasicInfo;
                    bool m_mediaBasicInfoHasBeenSet;

                    /**
                     * The metadata of the output video.
                     */
                    MediaMetaData m_metaData;
                    bool m_metaDataHasBeenSet;

                    /**
                     * The playback address of the uploaded file.
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * The task ID for the task type `Procedure`. If a task flow is specified by [PullUpload](https://intl.cloud.tencent.com/document/api/266/35575?from_cn_redirect=1), and the task flow includes one or more of `MediaProcessTask`, `AiAnalysisTask`, and `AiRecognitionTask`, the task specified by this parameter will be executed.
                     */
                    std::string m_procedureTaskId;
                    bool m_procedureTaskIdHasBeenSet;

                    /**
                     * The task ID for the task type `ReviewAudioVideo`. If a task flow is specified by [PullUpload](https://intl.cloud.tencent.com/document/api/266/35575?from_cn_redirect=1), and the task flow includes `ReviewAudioVideoTask`, the task specified by this parameter will be executed.
                     */
                    std::string m_reviewAudioVideoTaskId;
                    bool m_reviewAudioVideoTaskIdHasBeenSet;

                    /**
                     * The source context, which is used to pass through user request information. The [PullComplete](https://intl.cloud.tencent.com/document/product/266/7831?from_cn_redirect=1) callback will return the value of this parameter. It can contain up to 1,000 characters.
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * The ID used for deduplication. If there was a request with the same ID in the last seven days, the current request will return an error. The ID can contain up to 50 characters. If this parameter is left empty or a blank string is entered, no deduplication will be performed.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * The progress of the pull and upload task. Value range: 1-100.
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_PULLUPLOADTASK_H_
