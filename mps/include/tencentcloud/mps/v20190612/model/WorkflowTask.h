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
#include <tencentcloud/mps/v20190612/model/AIDubbingTaskResult.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Media processing task information
                */
                class WorkflowTask : public AbstractModel
                {
                public:
                    WorkflowTask();
                    ~WorkflowTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Media processing task ID.</p>
                     * @return TaskId <p>Media processing task ID.</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>Media processing task ID.</p>
                     * @param _taskId <p>Media processing task ID.</p>
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
                     * 获取<p>Returns a non-zero error code when a source error occurs. If 0 is returned, use the ErrCode of each specific task.</p>
                     * @return ErrCode <p>Returns a non-zero error code when a source error occurs. If 0 is returned, use the ErrCode of each specific task.</p>
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置<p>Returns a non-zero error code when a source error occurs. If 0 is returned, use the ErrCode of each specific task.</p>
                     * @param _errCode <p>Returns a non-zero error code when a source error occurs. If 0 is returned, use the ErrCode of each specific task.</p>
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
                     * 获取<p>Returns the corresponding error Message when a source error occurs. Otherwise, use the Message of each specific task.</p>
                     * @return Message <p>Returns the corresponding error Message when a source error occurs. Otherwise, use the Message of each specific task.</p>
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置<p>Returns the corresponding error Message when a source error occurs. Otherwise, use the Message of each specific task.</p>
                     * @param _message <p>Returns the corresponding error Message when a source error occurs. Otherwise, use the Message of each specific task.</p>
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
                     * 获取<p>Target file information of media processing.</p>
                     * @return InputInfo <p>Target file information of media processing.</p>
                     * 
                     */
                    MediaInputInfo GetInputInfo() const;

                    /**
                     * 设置<p>Target file information of media processing.</p>
                     * @param _inputInfo <p>Target file information of media processing.</p>
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
                     * 获取<p>Metadata of the original video.</p>
                     * @return MetaData <p>Metadata of the original video.</p>
                     * 
                     */
                    MediaMetaData GetMetaData() const;

                    /**
                     * 设置<p>Metadata of the original video.</p>
                     * @param _metaData <p>Metadata of the original video.</p>
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
                     * 获取<p>Execution status and result of the media processing task.</p>
                     * @return MediaProcessResultSet <p>Execution status and result of the media processing task.</p>
                     * 
                     */
                    std::vector<MediaProcessTaskResult> GetMediaProcessResultSet() const;

                    /**
                     * 设置<p>Execution status and result of the media processing task.</p>
                     * @param _mediaProcessResultSet <p>Execution status and result of the media processing task.</p>
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
                     * 获取<p>Execution status and results of the video content review task.</p>
                     * @return AiContentReviewResultSet <p>Execution status and results of the video content review task.</p>
                     * 
                     */
                    std::vector<AiContentReviewResult> GetAiContentReviewResultSet() const;

                    /**
                     * 设置<p>Execution status and results of the video content review task.</p>
                     * @param _aiContentReviewResultSet <p>Execution status and results of the video content review task.</p>
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
                     * 获取<p>Execution status and results of the video content analysis task.</p>
                     * @return AiAnalysisResultSet <p>Execution status and results of the video content analysis task.</p>
                     * 
                     */
                    std::vector<AiAnalysisResult> GetAiAnalysisResultSet() const;

                    /**
                     * 设置<p>Execution status and results of the video content analysis task.</p>
                     * @param _aiAnalysisResultSet <p>Execution status and results of the video content analysis task.</p>
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
                     * 获取<p>Execution status and results of the video content recognition task.</p>
                     * @return AiRecognitionResultSet <p>Execution status and results of the video content recognition task.</p>
                     * 
                     */
                    std::vector<AiRecognitionResult> GetAiRecognitionResultSet() const;

                    /**
                     * 设置<p>Execution status and results of the video content recognition task.</p>
                     * @param _aiRecognitionResultSet <p>Execution status and results of the video content recognition task.</p>
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
                     * 获取<p>Execution status and results of a media quality inspection task.</p>
                     * @return AiQualityControlTaskResult <p>Execution status and results of a media quality inspection task.</p>
                     * 
                     */
                    ScheduleQualityControlTaskResult GetAiQualityControlTaskResult() const;

                    /**
                     * 设置<p>Execution status and results of a media quality inspection task.</p>
                     * @param _aiQualityControlTaskResult <p>Execution status and results of a media quality inspection task.</p>
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
                     * 获取<p>Execution result of the smart subtitle task</p>
                     * @return SmartSubtitlesTaskResult <p>Execution result of the smart subtitle task</p>
                     * 
                     */
                    std::vector<SmartSubtitlesResult> GetSmartSubtitlesTaskResult() const;

                    /**
                     * 设置<p>Execution result of the smart subtitle task</p>
                     * @param _smartSubtitlesTaskResult <p>Execution result of the smart subtitle task</p>
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
                     * 获取<p>Outcome of the intelligent erasure task</p>
                     * @return SmartEraseTaskResult <p>Outcome of the intelligent erasure task</p>
                     * 
                     */
                    SmartEraseTaskResult GetSmartEraseTaskResult() const;

                    /**
                     * 设置<p>Outcome of the intelligent erasure task</p>
                     * @param _smartEraseTaskResult <p>Outcome of the intelligent erasure task</p>
                     * 
                     */
                    void SetSmartEraseTaskResult(const SmartEraseTaskResult& _smartEraseTaskResult);

                    /**
                     * 判断参数 SmartEraseTaskResult 是否已赋值
                     * @return SmartEraseTaskResult 是否已赋值
                     * 
                     */
                    bool SmartEraseTaskResultHasBeenSet() const;

                    /**
                     * 获取<p>Outcome of the AI dubbing task.</p>
                     * @return AiDubbingTaskResult <p>Outcome of the AI dubbing task.</p>
                     * 
                     */
                    AIDubbingTaskResult GetAiDubbingTaskResult() const;

                    /**
                     * 设置<p>Outcome of the AI dubbing task.</p>
                     * @param _aiDubbingTaskResult <p>Outcome of the AI dubbing task.</p>
                     * 
                     */
                    void SetAiDubbingTaskResult(const AIDubbingTaskResult& _aiDubbingTaskResult);

                    /**
                     * 判断参数 AiDubbingTaskResult 是否已赋值
                     * @return AiDubbingTaskResult 是否已赋值
                     * 
                     */
                    bool AiDubbingTaskResultHasBeenSet() const;

                private:

                    /**
                     * <p>Media processing task ID.</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>Task flow status. Valid values: </p><li>PROCESSING: Processing; </li><li>FINISH: Completed.</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Returns a non-zero error code when a source error occurs. If 0 is returned, use the ErrCode of each specific task.</p>
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * <p>Returns the corresponding error Message when a source error occurs. Otherwise, use the Message of each specific task.</p>
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * <p>Target file information of media processing.</p>
                     */
                    MediaInputInfo m_inputInfo;
                    bool m_inputInfoHasBeenSet;

                    /**
                     * <p>Metadata of the original video.</p>
                     */
                    MediaMetaData m_metaData;
                    bool m_metaDataHasBeenSet;

                    /**
                     * <p>Execution status and result of the media processing task.</p>
                     */
                    std::vector<MediaProcessTaskResult> m_mediaProcessResultSet;
                    bool m_mediaProcessResultSetHasBeenSet;

                    /**
                     * <p>Execution status and results of the video content review task.</p>
                     */
                    std::vector<AiContentReviewResult> m_aiContentReviewResultSet;
                    bool m_aiContentReviewResultSetHasBeenSet;

                    /**
                     * <p>Execution status and results of the video content analysis task.</p>
                     */
                    std::vector<AiAnalysisResult> m_aiAnalysisResultSet;
                    bool m_aiAnalysisResultSetHasBeenSet;

                    /**
                     * <p>Execution status and results of the video content recognition task.</p>
                     */
                    std::vector<AiRecognitionResult> m_aiRecognitionResultSet;
                    bool m_aiRecognitionResultSetHasBeenSet;

                    /**
                     * <p>Execution status and results of a media quality inspection task.</p>
                     */
                    ScheduleQualityControlTaskResult m_aiQualityControlTaskResult;
                    bool m_aiQualityControlTaskResultHasBeenSet;

                    /**
                     * <p>Execution result of the smart subtitle task</p>
                     */
                    std::vector<SmartSubtitlesResult> m_smartSubtitlesTaskResult;
                    bool m_smartSubtitlesTaskResultHasBeenSet;

                    /**
                     * <p>Outcome of the intelligent erasure task</p>
                     */
                    SmartEraseTaskResult m_smartEraseTaskResult;
                    bool m_smartEraseTaskResultHasBeenSet;

                    /**
                     * <p>Outcome of the AI dubbing task.</p>
                     */
                    AIDubbingTaskResult m_aiDubbingTaskResult;
                    bool m_aiDubbingTaskResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_WORKFLOWTASK_H_
