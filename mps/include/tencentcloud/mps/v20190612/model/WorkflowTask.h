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
#include <tencentcloud/mps/v20190612/model/SmartEraseTaskResult.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Media Processing Service task information
                */
                class WorkflowTask : public AbstractModel
                {
                public:
                    WorkflowTask();
                    ~WorkflowTask() = default;
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
                     * 获取An error code other than 0 is returned in case of a source exception. Use the error code of the specific task when a value of 0 is returned.
                     * @return ErrCode An error code other than 0 is returned in case of a source exception. Use the error code of the specific task when a value of 0 is returned.
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置An error code other than 0 is returned in case of a source exception. Use the error code of the specific task when a value of 0 is returned.
                     * @param _errCode An error code other than 0 is returned in case of a source exception. Use the error code of the specific task when a value of 0 is returned.
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
                     * 获取The corresponding exception message is returned in case of a source exception. If no source exception occurs, use the message of each specific task.
                     * @return Message The corresponding exception message is returned in case of a source exception. If no source exception occurs, use the message of each specific task.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置The corresponding exception message is returned in case of a source exception. If no source exception occurs, use the message of each specific task.
                     * @param _message The corresponding exception message is returned in case of a source exception. If no source exception occurs, use the message of each specific task.
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
                     * 获取
                     * @return InputInfo 
                     * 
                     */
                    MediaInputInfo GetInputInfo() const;

                    /**
                     * 设置
                     * @param _inputInfo 
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
                     * 获取
                     * @return MetaData 
                     * 
                     */
                    MediaMetaData GetMetaData() const;

                    /**
                     * 设置
                     * @param _metaData 
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
                     * 获取Execution status and results of a Media Processing Service task.
                     * @return MediaProcessResultSet Execution status and results of a Media Processing Service task.
                     * 
                     */
                    std::vector<MediaProcessTaskResult> GetMediaProcessResultSet() const;

                    /**
                     * 设置Execution status and results of a Media Processing Service task.
                     * @param _mediaProcessResultSet Execution status and results of a Media Processing Service task.
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
                     * 获取Execution status and results of a video content review task.
                     * @return AiContentReviewResultSet Execution status and results of a video content review task.
                     * 
                     */
                    std::vector<AiContentReviewResult> GetAiContentReviewResultSet() const;

                    /**
                     * 设置Execution status and results of a video content review task.
                     * @param _aiContentReviewResultSet Execution status and results of a video content review task.
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
                     * 获取Execution status and results of a video content analysis task.
                     * @return AiAnalysisResultSet Execution status and results of a video content analysis task.
                     * 
                     */
                    std::vector<AiAnalysisResult> GetAiAnalysisResultSet() const;

                    /**
                     * 设置Execution status and results of a video content analysis task.
                     * @param _aiAnalysisResultSet Execution status and results of a video content analysis task.
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
                     * 获取Task execution status and results of the video content recognition task.
                     * @return AiRecognitionResultSet Task execution status and results of the video content recognition task.
                     * 
                     */
                    std::vector<AiRecognitionResult> GetAiRecognitionResultSet() const;

                    /**
                     * 设置Task execution status and results of the video content recognition task.
                     * @param _aiRecognitionResultSet Task execution status and results of the video content recognition task.
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
                     * 获取
                     * @return AiQualityControlTaskResult 
                     * 
                     */
                    ScheduleQualityControlTaskResult GetAiQualityControlTaskResult() const;

                    /**
                     * 设置
                     * @param _aiQualityControlTaskResult 
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
                     * 获取
                     * @return SmartSubtitlesTaskResult 
                     * 
                     */
                    std::vector<SmartSubtitlesResult> GetSmartSubtitlesTaskResult() const;

                    /**
                     * 设置
                     * @param _smartSubtitlesTaskResult 
                     * 
                     */
                    void SetSmartSubtitlesTaskResult(const std::vector<SmartSubtitlesResult>& _smartSubtitlesTaskResult);

                    /**
                     * 判断参数 SmartSubtitlesTaskResult 是否已赋值
                     * @return SmartSubtitlesTaskResult 是否已赋值
                     * 
                     */
                    bool SmartSubtitlesTaskResultHasBeenSet() const;

                    /**
                     * 获取
                     * @return SmartEraseTaskResult 
                     * 
                     */
                    SmartEraseTaskResult GetSmartEraseTaskResult() const;

                    /**
                     * 设置
                     * @param _smartEraseTaskResult 
                     * 
                     */
                    void SetSmartEraseTaskResult(const SmartEraseTaskResult& _smartEraseTaskResult);

                    /**
                     * 判断参数 SmartEraseTaskResult 是否已赋值
                     * @return SmartEraseTaskResult 是否已赋值
                     * 
                     */
                    bool SmartEraseTaskResultHasBeenSet() const;

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
                     * An error code other than 0 is returned in case of a source exception. Use the error code of the specific task when a value of 0 is returned.
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * The corresponding exception message is returned in case of a source exception. If no source exception occurs, use the message of each specific task.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 
                     */
                    MediaInputInfo m_inputInfo;
                    bool m_inputInfoHasBeenSet;

                    /**
                     * 
                     */
                    MediaMetaData m_metaData;
                    bool m_metaDataHasBeenSet;

                    /**
                     * Execution status and results of a Media Processing Service task.
                     */
                    std::vector<MediaProcessTaskResult> m_mediaProcessResultSet;
                    bool m_mediaProcessResultSetHasBeenSet;

                    /**
                     * Execution status and results of a video content review task.
                     */
                    std::vector<AiContentReviewResult> m_aiContentReviewResultSet;
                    bool m_aiContentReviewResultSetHasBeenSet;

                    /**
                     * Execution status and results of a video content analysis task.
                     */
                    std::vector<AiAnalysisResult> m_aiAnalysisResultSet;
                    bool m_aiAnalysisResultSetHasBeenSet;

                    /**
                     * Task execution status and results of the video content recognition task.
                     */
                    std::vector<AiRecognitionResult> m_aiRecognitionResultSet;
                    bool m_aiRecognitionResultSetHasBeenSet;

                    /**
                     * 
                     */
                    ScheduleQualityControlTaskResult m_aiQualityControlTaskResult;
                    bool m_aiQualityControlTaskResultHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<SmartSubtitlesResult> m_smartSubtitlesTaskResult;
                    bool m_smartSubtitlesTaskResultHasBeenSet;

                    /**
                     * 
                     */
                    SmartEraseTaskResult m_smartEraseTaskResult;
                    bool m_smartEraseTaskResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_WORKFLOWTASK_H_
