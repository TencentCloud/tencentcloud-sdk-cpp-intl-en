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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_EDITMEDIATASK_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_EDITMEDIATASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/EditMediaTaskInput.h>
#include <tencentcloud/vod/v20180717/model/EditMediaTaskOutput.h>
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
                * Video editing task information
                */
                class EditMediaTask : public AbstractModel
                {
                public:
                    EditMediaTask();
                    ~EditMediaTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task ID.
                     * @return TaskId Task ID.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID.
                     * @param _taskId Task ID.
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
<li>PROCESSING: processing;</li>
<li>FINISH: completed.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Status Task flow status. Valid values:
<li>PROCESSING: processing;</li>
<li>FINISH: completed.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Task flow status. Valid values:
<li>PROCESSING: processing;</li>
<li>FINISH: completed.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _status Task flow status. Valid values:
<li>PROCESSING: processing;</li>
<li>FINISH: completed.</li>
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Error code. 0: success; other values: failure.
<li>40000: invalid input parameter. Please check it;</li>
<li>60000: invalid source file (e.g., video data is corrupted). Please check whether the source file is normal;</li>
<li>70000: internal service error. Please try again.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ErrCode Error code. 0: success; other values: failure.
<li>40000: invalid input parameter. Please check it;</li>
<li>60000: invalid source file (e.g., video data is corrupted). Please check whether the source file is normal;</li>
<li>70000: internal service error. Please try again.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置Error code. 0: success; other values: failure.
<li>40000: invalid input parameter. Please check it;</li>
<li>60000: invalid source file (e.g., video data is corrupted). Please check whether the source file is normal;</li>
<li>70000: internal service error. Please try again.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _errCode Error code. 0: success; other values: failure.
<li>40000: invalid input parameter. Please check it;</li>
<li>60000: invalid source file (e.g., video data is corrupted). Please check whether the source file is normal;</li>
<li>70000: internal service error. Please try again.</li>
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Error code. An empty string indicates the task is successful; other values indicate failure. For details, see [Video Processing Error Codes](https://intl.cloud.tencent.com/zh/document/product/266/39145).
                     * @return ErrCodeExt Error code. An empty string indicates the task is successful; other values indicate failure. For details, see [Video Processing Error Codes](https://intl.cloud.tencent.com/zh/document/product/266/39145).
                     * 
                     */
                    std::string GetErrCodeExt() const;

                    /**
                     * 设置Error code. An empty string indicates the task is successful; other values indicate failure. For details, see [Video Processing Error Codes](https://intl.cloud.tencent.com/zh/document/product/266/39145).
                     * @param _errCodeExt Error code. An empty string indicates the task is successful; other values indicate failure. For details, see [Video Processing Error Codes](https://intl.cloud.tencent.com/zh/document/product/266/39145).
                     * 
                     */
                    void SetErrCodeExt(const std::string& _errCodeExt);

                    /**
                     * 判断参数 ErrCodeExt 是否已赋值
                     * @return ErrCodeExt 是否已赋值
                     * 
                     */
                    bool ErrCodeExtHasBeenSet() const;

                    /**
                     * 获取Error message.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Message Error message.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Error message.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _message Error message.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Progress of a video editing task. Value range: [0, 100]
                     * @return Progress Progress of a video editing task. Value range: [0, 100]
                     * 
                     */
                    int64_t GetProgress() const;

                    /**
                     * 设置Progress of a video editing task. Value range: [0, 100]
                     * @param _progress Progress of a video editing task. Value range: [0, 100]
                     * 
                     */
                    void SetProgress(const int64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取Input of video editing task.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Input Input of video editing task.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    EditMediaTaskInput GetInput() const;

                    /**
                     * 设置Input of video editing task.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _input Input of video editing task.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInput(const EditMediaTaskInput& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取Output of video editing task.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Output Output of video editing task.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    EditMediaTaskOutput GetOutput() const;

                    /**
                     * 设置Output of video editing task.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _output Output of video editing task.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOutput(const EditMediaTaskOutput& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取The metadata of the output video.
                     * @return MetaData The metadata of the output video.
                     * 
                     */
                    MediaMetaData GetMetaData() const;

                    /**
                     * 设置The metadata of the output video.
                     * @param _metaData The metadata of the output video.
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
                     * 获取The task ID for the task type `Procedure`. If a task flow (`ProcedureName`) is specified by [EditMedia](https://intl.cloud.tencent.com/document/api/266/34783?from_cn_redirect=1), and the task flow includes one or more of `MediaProcessTask`, `AiAnalysisTask`, and `AiRecognitionTask`, the task specified by this parameter will be executed.
                     * @return ProcedureTaskId The task ID for the task type `Procedure`. If a task flow (`ProcedureName`) is specified by [EditMedia](https://intl.cloud.tencent.com/document/api/266/34783?from_cn_redirect=1), and the task flow includes one or more of `MediaProcessTask`, `AiAnalysisTask`, and `AiRecognitionTask`, the task specified by this parameter will be executed.
                     * 
                     */
                    std::string GetProcedureTaskId() const;

                    /**
                     * 设置The task ID for the task type `Procedure`. If a task flow (`ProcedureName`) is specified by [EditMedia](https://intl.cloud.tencent.com/document/api/266/34783?from_cn_redirect=1), and the task flow includes one or more of `MediaProcessTask`, `AiAnalysisTask`, and `AiRecognitionTask`, the task specified by this parameter will be executed.
                     * @param _procedureTaskId The task ID for the task type `Procedure`. If a task flow (`ProcedureName`) is specified by [EditMedia](https://intl.cloud.tencent.com/document/api/266/34783?from_cn_redirect=1), and the task flow includes one or more of `MediaProcessTask`, `AiAnalysisTask`, and `AiRecognitionTask`, the task specified by this parameter will be executed.
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
                     * 获取The task ID for the task type `ReviewAudioVideo`. If a task flow (`ProcedureName`) is specified by [EditMedia](https://intl.cloud.tencent.com/document/api/266/34783?from_cn_redirect=1), and the task flow includes `ReviewAudioVideoTask`, the task specified by this parameter will be executed.
                     * @return ReviewAudioVideoTaskId The task ID for the task type `ReviewAudioVideo`. If a task flow (`ProcedureName`) is specified by [EditMedia](https://intl.cloud.tencent.com/document/api/266/34783?from_cn_redirect=1), and the task flow includes `ReviewAudioVideoTask`, the task specified by this parameter will be executed.
                     * 
                     */
                    std::string GetReviewAudioVideoTaskId() const;

                    /**
                     * 设置The task ID for the task type `ReviewAudioVideo`. If a task flow (`ProcedureName`) is specified by [EditMedia](https://intl.cloud.tencent.com/document/api/266/34783?from_cn_redirect=1), and the task flow includes `ReviewAudioVideoTask`, the task specified by this parameter will be executed.
                     * @param _reviewAudioVideoTaskId The task ID for the task type `ReviewAudioVideo`. If a task flow (`ProcedureName`) is specified by [EditMedia](https://intl.cloud.tencent.com/document/api/266/34783?from_cn_redirect=1), and the task flow includes `ReviewAudioVideoTask`, the task specified by this parameter will be executed.
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
                     * 获取The ID used for deduplication. If there was a request with the same ID in the last seven days, the current request will return an error. The ID can contain up to 50 characters. If this parameter is left empty or a blank string is entered, no deduplication will be performed.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SessionId The ID used for deduplication. If there was a request with the same ID in the last seven days, the current request will return an error. The ID can contain up to 50 characters. If this parameter is left empty or a blank string is entered, no deduplication will be performed.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置The ID used for deduplication. If there was a request with the same ID in the last seven days, the current request will return an error. The ID can contain up to 50 characters. If this parameter is left empty or a blank string is entered, no deduplication will be performed.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _sessionId The ID used for deduplication. If there was a request with the same ID in the last seven days, the current request will return an error. The ID can contain up to 50 characters. If this parameter is left empty or a blank string is entered, no deduplication will be performed.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取The source context which is used to pass through the user request information. The task flow status change callback will return the value of this field. It can contain up to 1,000 characters.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SessionContext The source context which is used to pass through the user request information. The task flow status change callback will return the value of this field. It can contain up to 1,000 characters.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置The source context which is used to pass through the user request information. The task flow status change callback will return the value of this field. It can contain up to 1,000 characters.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _sessionContext The source context which is used to pass through the user request information. The task flow status change callback will return the value of this field. It can contain up to 1,000 characters.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSessionContext(const std::string& _sessionContext);

                    /**
                     * 判断参数 SessionContext 是否已赋值
                     * @return SessionContext 是否已赋值
                     * 
                     */
                    bool SessionContextHasBeenSet() const;

                private:

                    /**
                     * Task ID.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Task flow status. Valid values:
<li>PROCESSING: processing;</li>
<li>FINISH: completed.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Error code. 0: success; other values: failure.
<li>40000: invalid input parameter. Please check it;</li>
<li>60000: invalid source file (e.g., video data is corrupted). Please check whether the source file is normal;</li>
<li>70000: internal service error. Please try again.</li>
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * Error code. An empty string indicates the task is successful; other values indicate failure. For details, see [Video Processing Error Codes](https://intl.cloud.tencent.com/zh/document/product/266/39145).
                     */
                    std::string m_errCodeExt;
                    bool m_errCodeExtHasBeenSet;

                    /**
                     * Error message.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Progress of a video editing task. Value range: [0, 100]
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * Input of video editing task.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    EditMediaTaskInput m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * Output of video editing task.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    EditMediaTaskOutput m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * The metadata of the output video.
                     */
                    MediaMetaData m_metaData;
                    bool m_metaDataHasBeenSet;

                    /**
                     * The task ID for the task type `Procedure`. If a task flow (`ProcedureName`) is specified by [EditMedia](https://intl.cloud.tencent.com/document/api/266/34783?from_cn_redirect=1), and the task flow includes one or more of `MediaProcessTask`, `AiAnalysisTask`, and `AiRecognitionTask`, the task specified by this parameter will be executed.
                     */
                    std::string m_procedureTaskId;
                    bool m_procedureTaskIdHasBeenSet;

                    /**
                     * The task ID for the task type `ReviewAudioVideo`. If a task flow (`ProcedureName`) is specified by [EditMedia](https://intl.cloud.tencent.com/document/api/266/34783?from_cn_redirect=1), and the task flow includes `ReviewAudioVideoTask`, the task specified by this parameter will be executed.
                     */
                    std::string m_reviewAudioVideoTaskId;
                    bool m_reviewAudioVideoTaskIdHasBeenSet;

                    /**
                     * The ID used for deduplication. If there was a request with the same ID in the last seven days, the current request will return an error. The ID can contain up to 50 characters. If this parameter is left empty or a blank string is entered, no deduplication will be performed.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * The source context which is used to pass through the user request information. The task flow status change callback will return the value of this field. It can contain up to 1,000 characters.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_EDITMEDIATASK_H_
