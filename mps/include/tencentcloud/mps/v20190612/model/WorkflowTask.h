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
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置The media processing task ID.
                     * @param TaskId The media processing task ID.
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Task flow status. Valid values:
<li>PROCESSING: Processing;</li>
<li>FINISH: Completed.</li>
                     * @return Status Task flow status. Valid values:
<li>PROCESSING: Processing;</li>
<li>FINISH: Completed.</li>
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Task flow status. Valid values:
<li>PROCESSING: Processing;</li>
<li>FINISH: Completed.</li>
                     * @param Status Task flow status. Valid values:
<li>PROCESSING: Processing;</li>
<li>FINISH: Completed.</li>
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Disused. Please use `ErrCode` of each specific task.
                     * @return ErrCode Disused. Please use `ErrCode` of each specific task.
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置Disused. Please use `ErrCode` of each specific task.
                     * @param ErrCode Disused. Please use `ErrCode` of each specific task.
                     */
                    void SetErrCode(const int64_t& _errCode);

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取Disused. Please use `Message` of each specific task.
                     * @return Message Disused. Please use `Message` of each specific task.
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Disused. Please use `Message` of each specific task.
                     * @param Message Disused. Please use `Message` of each specific task.
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取The information of the file processed.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return InputInfo The information of the file processed.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    MediaInputInfo GetInputInfo() const;

                    /**
                     * 设置The information of the file processed.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param InputInfo The information of the file processed.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    void SetInputInfo(const MediaInputInfo& _inputInfo);

                    /**
                     * 判断参数 InputInfo 是否已赋值
                     * @return InputInfo 是否已赋值
                     */
                    bool InputInfoHasBeenSet() const;

                    /**
                     * 获取Metadata of a source video.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MetaData Metadata of a source video.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MediaMetaData GetMetaData() const;

                    /**
                     * 设置Metadata of a source video.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param MetaData Metadata of a source video.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMetaData(const MediaMetaData& _metaData);

                    /**
                     * 判断参数 MetaData 是否已赋值
                     * @return MetaData 是否已赋值
                     */
                    bool MetaDataHasBeenSet() const;

                    /**
                     * 获取The execution status and result of the media processing task.
                     * @return MediaProcessResultSet The execution status and result of the media processing task.
                     */
                    std::vector<MediaProcessTaskResult> GetMediaProcessResultSet() const;

                    /**
                     * 设置The execution status and result of the media processing task.
                     * @param MediaProcessResultSet The execution status and result of the media processing task.
                     */
                    void SetMediaProcessResultSet(const std::vector<MediaProcessTaskResult>& _mediaProcessResultSet);

                    /**
                     * 判断参数 MediaProcessResultSet 是否已赋值
                     * @return MediaProcessResultSet 是否已赋值
                     */
                    bool MediaProcessResultSetHasBeenSet() const;

                    /**
                     * 获取Execution status and result of a video content audit task.
                     * @return AiContentReviewResultSet Execution status and result of a video content audit task.
                     */
                    std::vector<AiContentReviewResult> GetAiContentReviewResultSet() const;

                    /**
                     * 设置Execution status and result of a video content audit task.
                     * @param AiContentReviewResultSet Execution status and result of a video content audit task.
                     */
                    void SetAiContentReviewResultSet(const std::vector<AiContentReviewResult>& _aiContentReviewResultSet);

                    /**
                     * 判断参数 AiContentReviewResultSet 是否已赋值
                     * @return AiContentReviewResultSet 是否已赋值
                     */
                    bool AiContentReviewResultSetHasBeenSet() const;

                    /**
                     * 获取Execution status and result of video content analysis task.
                     * @return AiAnalysisResultSet Execution status and result of video content analysis task.
                     */
                    std::vector<AiAnalysisResult> GetAiAnalysisResultSet() const;

                    /**
                     * 设置Execution status and result of video content analysis task.
                     * @param AiAnalysisResultSet Execution status and result of video content analysis task.
                     */
                    void SetAiAnalysisResultSet(const std::vector<AiAnalysisResult>& _aiAnalysisResultSet);

                    /**
                     * 判断参数 AiAnalysisResultSet 是否已赋值
                     * @return AiAnalysisResultSet 是否已赋值
                     */
                    bool AiAnalysisResultSetHasBeenSet() const;

                    /**
                     * 获取Execution status and result of a video content recognition task.
                     * @return AiRecognitionResultSet Execution status and result of a video content recognition task.
                     */
                    std::vector<AiRecognitionResult> GetAiRecognitionResultSet() const;

                    /**
                     * 设置Execution status and result of a video content recognition task.
                     * @param AiRecognitionResultSet Execution status and result of a video content recognition task.
                     */
                    void SetAiRecognitionResultSet(const std::vector<AiRecognitionResult>& _aiRecognitionResultSet);

                    /**
                     * 判断参数 AiRecognitionResultSet 是否已赋值
                     * @return AiRecognitionResultSet 是否已赋值
                     */
                    bool AiRecognitionResultSetHasBeenSet() const;

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
                     * Disused. Please use `ErrCode` of each specific task.
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * Disused. Please use `Message` of each specific task.
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_WORKFLOWTASK_H_
