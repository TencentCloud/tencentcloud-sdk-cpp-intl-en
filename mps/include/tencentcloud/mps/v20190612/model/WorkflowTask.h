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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_WORKFLOWTASK_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_WORKFLOWTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/MediaInputInfo.h>
#include <tencentcloud/mps/v20190612/model/MediaMetaData.h>
#include <tencentcloud/mps/v20190612/model/MediaProcessTaskResult.h>
#include <tencentcloud/mps/v20190612/model/AiContentReviewResult.h>
#include <tencentcloud/mps/v20190612/model/AiAnalysisResult.h>
#include <tencentcloud/mps/v20190612/model/AiRecognitionResult.h>
#include <tencentcloud/mps/v20190612/model/ScheduleQualityControlTaskResult.h>
#include <tencentcloud/mps/v20190612/model/SmartSubtitlesResult.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * The information of the media processing task.
                */
                class WorkflowTask : public AbstractModel
                {
                public:
                    WorkflowTask();
                    ~WorkflowTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The media processing task ID.
                     * @return TaskId The media processing task ID.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置The media processing task ID.
                     * @param _taskId The media processing task ID.
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
<li>FINISH: Completed.</li>
                     * @return Status Task flow status. Valid values:
<li>PROCESSING: Processing;</li>
<li>FINISH: Completed.</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Task flow status. Valid values:
<li>PROCESSING: Processing;</li>
<li>FINISH: Completed.</li>
                     * @param _status Task flow status. Valid values:
<li>PROCESSING: Processing;</li>
<li>FINISH: Completed.</li>
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
                     * 获取If the value returned is not 0, there was a source error. If 0 is returned, refer to the error codes of the corresponding task type.
                     * @return ErrCode If the value returned is not 0, there was a source error. If 0 is returned, refer to the error codes of the corresponding task type.
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置If the value returned is not 0, there was a source error. If 0 is returned, refer to the error codes of the corresponding task type.
                     * @param _errCode If the value returned is not 0, there was a source error. If 0 is returned, refer to the error codes of the corresponding task type.
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
                     * 获取Except those for source errors, error messages vary with task type.
                     * @return Message Except those for source errors, error messages vary with task type.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Except those for source errors, error messages vary with task type.
                     * @param _message Except those for source errors, error messages vary with task type.
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
                     * 获取The information of the file processed.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return InputInfo The information of the file processed.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    MediaInputInfo GetInputInfo() const;

                    /**
                     * 设置The information of the file processed.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _inputInfo The information of the file processed.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetInputInfo(const MediaInputInfo& _inputInfo);

                    /**
                     * 判断参数 InputInfo 是否已赋值
                     * @return InputInfo 是否已赋值
                     * 
                     */
                    bool InputInfoHasBeenSet() const;

                    /**
                     * 获取Metadata of a source video.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MetaData Metadata of a source video.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MediaMetaData GetMetaData() const;

                    /**
                     * 设置Metadata of a source video.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _metaData Metadata of a source video.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The execution status and result of the media processing task.
                     * @return MediaProcessResultSet The execution status and result of the media processing task.
                     * 
                     */
                    std::vector<MediaProcessTaskResult> GetMediaProcessResultSet() const;

                    /**
                     * 设置The execution status and result of the media processing task.
                     * @param _mediaProcessResultSet The execution status and result of the media processing task.
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
                     * 获取Execution status and result of a video content audit task.
                     * @return AiContentReviewResultSet Execution status and result of a video content audit task.
                     * 
                     */
                    std::vector<AiContentReviewResult> GetAiContentReviewResultSet() const;

                    /**
                     * 设置Execution status and result of a video content audit task.
                     * @param _aiContentReviewResultSet Execution status and result of a video content audit task.
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
                     * 获取Execution status and result of video content analysis task.
                     * @return AiAnalysisResultSet Execution status and result of video content analysis task.
                     * 
                     */
                    std::vector<AiAnalysisResult> GetAiAnalysisResultSet() const;

                    /**
                     * 设置Execution status and result of video content analysis task.
                     * @param _aiAnalysisResultSet Execution status and result of video content analysis task.
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
                     * 获取Execution status and result of a video content recognition task.
                     * @return AiRecognitionResultSet Execution status and result of a video content recognition task.
                     * 
                     */
                    std::vector<AiRecognitionResult> GetAiRecognitionResultSet() const;

                    /**
                     * 设置Execution status and result of a video content recognition task.
                     * @param _aiRecognitionResultSet Execution status and result of a video content recognition task.
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
                     * 获取Execution status and results of a media quality inspection task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AiQualityControlTaskResult Execution status and results of a media quality inspection task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ScheduleQualityControlTaskResult GetAiQualityControlTaskResult() const;

                    /**
                     * 设置Execution status and results of a media quality inspection task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _aiQualityControlTaskResult Execution status and results of a media quality inspection task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAiQualityControlTaskResult(const ScheduleQualityControlTaskResult& _aiQualityControlTaskResult);

                    /**
                     * 判断参数 AiQualityControlTaskResult 是否已赋值
                     * @return AiQualityControlTaskResult 是否已赋值
                     * 
                     */
                    bool AiQualityControlTaskResultHasBeenSet() const;

                    /**
                     * 获取Execution result of the smart subtitle task.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SmartSubtitlesTaskResult Execution result of the smart subtitle task.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<SmartSubtitlesResult> GetSmartSubtitlesTaskResult() const;

                    /**
                     * 设置Execution result of the smart subtitle task.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _smartSubtitlesTaskResult Execution result of the smart subtitle task.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSmartSubtitlesTaskResult(const std::vector<SmartSubtitlesResult>& _smartSubtitlesTaskResult);

                    /**
                     * 判断参数 SmartSubtitlesTaskResult 是否已赋值
                     * @return SmartSubtitlesTaskResult 是否已赋值
                     * 
                     */
                    bool SmartSubtitlesTaskResultHasBeenSet() const;

                private:

                    /**
                     * The media processing task ID.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Task flow status. Valid values:
<li>PROCESSING: Processing;</li>
<li>FINISH: Completed.</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * If the value returned is not 0, there was a source error. If 0 is returned, refer to the error codes of the corresponding task type.
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * Except those for source errors, error messages vary with task type.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * The information of the file processed.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    MediaInputInfo m_inputInfo;
                    bool m_inputInfoHasBeenSet;

                    /**
                     * Metadata of a source video.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MediaMetaData m_metaData;
                    bool m_metaDataHasBeenSet;

                    /**
                     * The execution status and result of the media processing task.
                     */
                    std::vector<MediaProcessTaskResult> m_mediaProcessResultSet;
                    bool m_mediaProcessResultSetHasBeenSet;

                    /**
                     * Execution status and result of a video content audit task.
                     */
                    std::vector<AiContentReviewResult> m_aiContentReviewResultSet;
                    bool m_aiContentReviewResultSetHasBeenSet;

                    /**
                     * Execution status and result of video content analysis task.
                     */
                    std::vector<AiAnalysisResult> m_aiAnalysisResultSet;
                    bool m_aiAnalysisResultSetHasBeenSet;

                    /**
                     * Execution status and result of a video content recognition task.
                     */
                    std::vector<AiRecognitionResult> m_aiRecognitionResultSet;
                    bool m_aiRecognitionResultSetHasBeenSet;

                    /**
                     * Execution status and results of a media quality inspection task.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ScheduleQualityControlTaskResult m_aiQualityControlTaskResult;
                    bool m_aiQualityControlTaskResultHasBeenSet;

                    /**
                     * Execution result of the smart subtitle task.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<SmartSubtitlesResult> m_smartSubtitlesTaskResult;
                    bool m_smartSubtitlesTaskResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_WORKFLOWTASK_H_
