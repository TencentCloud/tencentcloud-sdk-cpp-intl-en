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
                * Video editing task info
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
                     * 获取Task stream status. Valid values:
<li>PROCESSING: Processing;</li>
<li>FINISH: completed</li>
                     * @return Status Task stream status. Valid values:
<li>PROCESSING: Processing;</li>
<li>FINISH: completed</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Task stream status. Valid values:
<li>PROCESSING: Processing;</li>
<li>FINISH: completed</li>
                     * @param _status Task stream status. Valid values:
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
                     * 获取Error code. 0 indicates success. Other values indicate failure:
<li>40000: invalid input parameters. Check the input parameters;</li>
<li>60000: Source file error (for example, video data damage). Confirm whether the source file is normal;</li>
<li>70000: internal service error. Retry is recommended.</li>
                     * @return ErrCode Error code. 0 indicates success. Other values indicate failure:
<li>40000: invalid input parameters. Check the input parameters;</li>
<li>60000: Source file error (for example, video data damage). Confirm whether the source file is normal;</li>
<li>70000: internal service error. Retry is recommended.</li>
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置Error code. 0 indicates success. Other values indicate failure:
<li>40000: invalid input parameters. Check the input parameters;</li>
<li>60000: Source file error (for example, video data damage). Confirm whether the source file is normal;</li>
<li>70000: internal service error. Retry is recommended.</li>
                     * @param _errCode Error code. 0 indicates success. Other values indicate failure:
<li>40000: invalid input parameters. Check the input parameters;</li>
<li>60000: Source file error (for example, video data damage). Confirm whether the source file is normal;</li>
<li>70000: internal service error. Retry is recommended.</li>
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
                     * 获取Error code. An empty string indicates success, and other values indicate failure. For values, see [Video Processing Error Codes](https://www.tencentcloud.com/document/product/266/50368?from_cn_redirect=1#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81).
                     * @return ErrCodeExt Error code. An empty string indicates success, and other values indicate failure. For values, see [Video Processing Error Codes](https://www.tencentcloud.com/document/product/266/50368?from_cn_redirect=1#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81).
                     * 
                     */
                    std::string GetErrCodeExt() const;

                    /**
                     * 设置Error code. An empty string indicates success, and other values indicate failure. For values, see [Video Processing Error Codes](https://www.tencentcloud.com/document/product/266/50368?from_cn_redirect=1#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81).
                     * @param _errCodeExt Error code. An empty string indicates success, and other values indicate failure. For values, see [Video Processing Error Codes](https://www.tencentcloud.com/document/product/266/50368?from_cn_redirect=1#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81).
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
                     * @return Message Error message.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Error message.
                     * @param _message Error message.
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
                     * 获取Video editing task progress, in the range of [0,100].
                     * @return Progress Video editing task progress, in the range of [0,100].
                     * 
                     */
                    int64_t GetProgress() const;

                    /**
                     * 设置Video editing task progress, in the range of [0,100].
                     * @param _progress Video editing task progress, in the range of [0,100].
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
                     * 获取Input of a video editing task.
                     * @return Input Input of a video editing task.
                     * 
                     */
                    EditMediaTaskInput GetInput() const;

                    /**
                     * 设置Input of a video editing task.
                     * @param _input Input of a video editing task.
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
                     * 获取Output of the video editing task.
                     * @return Output Output of the video editing task.
                     * 
                     */
                    EditMediaTaskOutput GetOutput() const;

                    /**
                     * 设置Output of the video editing task.
                     * @param _output Output of the video editing task.
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
                     * 获取Meta information of the output video.
                     * @return MetaData Meta information of the output video.
                     * 
                     */
                    MediaMetaData GetMetaData() const;

                    /**
                     * 设置Meta information of the output video.
                     * @param _metaData Meta information of the output video.
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
                     * 获取Task ID of the task type `Procedure`. If a task flow template (`ProcedureName`) is specified when initiating a video editing task (https://www.tencentcloud.com/document/api/266/34783?from_cn_redirect=1), the task is initiated when the template specifies one or more of `MediaProcessTask`, `AiAnalysisTask`, and `AiRecognitionTask`.
                     * @return ProcedureTaskId Task ID of the task type `Procedure`. If a task flow template (`ProcedureName`) is specified when initiating a video editing task (https://www.tencentcloud.com/document/api/266/34783?from_cn_redirect=1), the task is initiated when the template specifies one or more of `MediaProcessTask`, `AiAnalysisTask`, and `AiRecognitionTask`.
                     * 
                     */
                    std::string GetProcedureTaskId() const;

                    /**
                     * 设置Task ID of the task type `Procedure`. If a task flow template (`ProcedureName`) is specified when initiating a video editing task (https://www.tencentcloud.com/document/api/266/34783?from_cn_redirect=1), the task is initiated when the template specifies one or more of `MediaProcessTask`, `AiAnalysisTask`, and `AiRecognitionTask`.
                     * @param _procedureTaskId Task ID of the task type `Procedure`. If a task flow template (`ProcedureName`) is specified when initiating a video editing task (https://www.tencentcloud.com/document/api/266/34783?from_cn_redirect=1), the task is initiated when the template specifies one or more of `MediaProcessTask`, `AiAnalysisTask`, and `AiRecognitionTask`.
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
                     * 获取Task ID of the `ReviewAudioVideo` task type. If a task flow template (`ProcedureName`) is specified when initiating a video editing task (https://www.tencentcloud.com/document/api/266/34783?from_cn_redirect=1), and the task flow template specifies `ReviewAudioVideoTask`, the task is initiated.
                     * @return ReviewAudioVideoTaskId Task ID of the `ReviewAudioVideo` task type. If a task flow template (`ProcedureName`) is specified when initiating a video editing task (https://www.tencentcloud.com/document/api/266/34783?from_cn_redirect=1), and the task flow template specifies `ReviewAudioVideoTask`, the task is initiated.
                     * 
                     */
                    std::string GetReviewAudioVideoTaskId() const;

                    /**
                     * 设置Task ID of the `ReviewAudioVideo` task type. If a task flow template (`ProcedureName`) is specified when initiating a video editing task (https://www.tencentcloud.com/document/api/266/34783?from_cn_redirect=1), and the task flow template specifies `ReviewAudioVideoTask`, the task is initiated.
                     * @param _reviewAudioVideoTaskId Task ID of the `ReviewAudioVideo` task type. If a task flow template (`ProcedureName`) is specified when initiating a video editing task (https://www.tencentcloud.com/document/api/266/34783?from_cn_redirect=1), and the task flow template specifies `ReviewAudioVideoTask`, the task is initiated.
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
                     * 获取Identifier for deduplication. If a request with the same identifier has been sent within the past seven days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.
                     * @return SessionId Identifier for deduplication. If a request with the same identifier has been sent within the past seven days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置Identifier for deduplication. If a request with the same identifier has been sent within the past seven days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.
                     * @param _sessionId Identifier for deduplication. If a request with the same identifier has been sent within the past seven days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.
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

                private:

                    /**
                     * Task ID.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Task stream status. Valid values:
<li>PROCESSING: Processing;</li>
<li>FINISH: completed</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Error code. 0 indicates success. Other values indicate failure:
<li>40000: invalid input parameters. Check the input parameters;</li>
<li>60000: Source file error (for example, video data damage). Confirm whether the source file is normal;</li>
<li>70000: internal service error. Retry is recommended.</li>
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * Error code. An empty string indicates success, and other values indicate failure. For values, see [Video Processing Error Codes](https://www.tencentcloud.com/document/product/266/50368?from_cn_redirect=1#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81).
                     */
                    std::string m_errCodeExt;
                    bool m_errCodeExtHasBeenSet;

                    /**
                     * Error message.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Video editing task progress, in the range of [0,100].
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * Input of a video editing task.
                     */
                    EditMediaTaskInput m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * Output of the video editing task.
                     */
                    EditMediaTaskOutput m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * Meta information of the output video.
                     */
                    MediaMetaData m_metaData;
                    bool m_metaDataHasBeenSet;

                    /**
                     * Task ID of the task type `Procedure`. If a task flow template (`ProcedureName`) is specified when initiating a video editing task (https://www.tencentcloud.com/document/api/266/34783?from_cn_redirect=1), the task is initiated when the template specifies one or more of `MediaProcessTask`, `AiAnalysisTask`, and `AiRecognitionTask`.
                     */
                    std::string m_procedureTaskId;
                    bool m_procedureTaskIdHasBeenSet;

                    /**
                     * Task ID of the `ReviewAudioVideo` task type. If a task flow template (`ProcedureName`) is specified when initiating a video editing task (https://www.tencentcloud.com/document/api/266/34783?from_cn_redirect=1), and the task flow template specifies `ReviewAudioVideoTask`, the task is initiated.
                     */
                    std::string m_reviewAudioVideoTaskId;
                    bool m_reviewAudioVideoTaskIdHasBeenSet;

                    /**
                     * Identifier for deduplication. If a request with the same identifier has been sent within the past seven days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * Source context, which is used to pass through the user request information. The callback for task flow status changes will return the value of this field. The maximum length is 1,000 characters.
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_EDITMEDIATASK_H_
