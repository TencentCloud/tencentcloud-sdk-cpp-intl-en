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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MPSSUBTASKRESULT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MPSSUBTASKRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MPSTaskOutput.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Type of the MPS subtask query result.
                */
                class MPSSubTaskResult : public AbstractModel
                {
                public:
                    MPSSubTaskResult();
                    ~MPSSubTaskResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task type. The specific subtask type in the WorkflowTask structure of MPS. Value:
<li>MediaProcess.Transcode: audio and video transcoding task.</li>
<li>AiAnalysis.DeLogo: intelligent erasure task.</li>
<li>AiAnalysis.ClassificationTask: intelligent classification task.</li>
<li>AiAnalysis.CoverTask: Intelligent Cover Task.</li>
<li>AiAnalysis.TagTask: intelligent tag task.</li>
<li>AiAnalysis.FrameTagTask: intelligent frame-specific tagging task.</li>
<li>AiAnalysis.HighlightTask: intelligent highlight task.</li>
<li>AiAnalysis.SegmentTask: intelligent video splitting task.</li>
<li>AiAnalysis.HeadTailTask: intelligent opening and closing credits task.</li>
<li>AiAnalysis.DescriptionTask: intelligent summary task.</li>
<li>AiAnalysis.HorizontalToVerticalTask: Intelligent Landscape to Portrait Task.</li>
<li>AiAnalysis.DubbingTask: intelligent dubbing task.</li>
<li>AiAnalysis.VideoRemakeTask: intelligent deduplication task.</li>
<li>AiAnalysis.VideoComprehensionTask: video understanding task.</li>
<li>SmartSubtitle.AsrFullTextTask: intelligent speech full-text recognition task.</li>
<li>SmartSubtitle.TransTextTask: Translation result.</li>
<li>SmartSubtitle.PureSubtitleTransTask: return the translation result of a pure subtitle file.</li>
<li>SmartSubtitle.OcrFullTextTask: intelligent text extraction subtitle task.</li>
<li>SmartErase: intelligent erasure task.</li>

                     * @return TaskType Task type. The specific subtask type in the WorkflowTask structure of MPS. Value:
<li>MediaProcess.Transcode: audio and video transcoding task.</li>
<li>AiAnalysis.DeLogo: intelligent erasure task.</li>
<li>AiAnalysis.ClassificationTask: intelligent classification task.</li>
<li>AiAnalysis.CoverTask: Intelligent Cover Task.</li>
<li>AiAnalysis.TagTask: intelligent tag task.</li>
<li>AiAnalysis.FrameTagTask: intelligent frame-specific tagging task.</li>
<li>AiAnalysis.HighlightTask: intelligent highlight task.</li>
<li>AiAnalysis.SegmentTask: intelligent video splitting task.</li>
<li>AiAnalysis.HeadTailTask: intelligent opening and closing credits task.</li>
<li>AiAnalysis.DescriptionTask: intelligent summary task.</li>
<li>AiAnalysis.HorizontalToVerticalTask: Intelligent Landscape to Portrait Task.</li>
<li>AiAnalysis.DubbingTask: intelligent dubbing task.</li>
<li>AiAnalysis.VideoRemakeTask: intelligent deduplication task.</li>
<li>AiAnalysis.VideoComprehensionTask: video understanding task.</li>
<li>SmartSubtitle.AsrFullTextTask: intelligent speech full-text recognition task.</li>
<li>SmartSubtitle.TransTextTask: Translation result.</li>
<li>SmartSubtitle.PureSubtitleTransTask: return the translation result of a pure subtitle file.</li>
<li>SmartSubtitle.OcrFullTextTask: intelligent text extraction subtitle task.</li>
<li>SmartErase: intelligent erasure task.</li>

                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置Task type. The specific subtask type in the WorkflowTask structure of MPS. Value:
<li>MediaProcess.Transcode: audio and video transcoding task.</li>
<li>AiAnalysis.DeLogo: intelligent erasure task.</li>
<li>AiAnalysis.ClassificationTask: intelligent classification task.</li>
<li>AiAnalysis.CoverTask: Intelligent Cover Task.</li>
<li>AiAnalysis.TagTask: intelligent tag task.</li>
<li>AiAnalysis.FrameTagTask: intelligent frame-specific tagging task.</li>
<li>AiAnalysis.HighlightTask: intelligent highlight task.</li>
<li>AiAnalysis.SegmentTask: intelligent video splitting task.</li>
<li>AiAnalysis.HeadTailTask: intelligent opening and closing credits task.</li>
<li>AiAnalysis.DescriptionTask: intelligent summary task.</li>
<li>AiAnalysis.HorizontalToVerticalTask: Intelligent Landscape to Portrait Task.</li>
<li>AiAnalysis.DubbingTask: intelligent dubbing task.</li>
<li>AiAnalysis.VideoRemakeTask: intelligent deduplication task.</li>
<li>AiAnalysis.VideoComprehensionTask: video understanding task.</li>
<li>SmartSubtitle.AsrFullTextTask: intelligent speech full-text recognition task.</li>
<li>SmartSubtitle.TransTextTask: Translation result.</li>
<li>SmartSubtitle.PureSubtitleTransTask: return the translation result of a pure subtitle file.</li>
<li>SmartSubtitle.OcrFullTextTask: intelligent text extraction subtitle task.</li>
<li>SmartErase: intelligent erasure task.</li>

                     * @param _taskType Task type. The specific subtask type in the WorkflowTask structure of MPS. Value:
<li>MediaProcess.Transcode: audio and video transcoding task.</li>
<li>AiAnalysis.DeLogo: intelligent erasure task.</li>
<li>AiAnalysis.ClassificationTask: intelligent classification task.</li>
<li>AiAnalysis.CoverTask: Intelligent Cover Task.</li>
<li>AiAnalysis.TagTask: intelligent tag task.</li>
<li>AiAnalysis.FrameTagTask: intelligent frame-specific tagging task.</li>
<li>AiAnalysis.HighlightTask: intelligent highlight task.</li>
<li>AiAnalysis.SegmentTask: intelligent video splitting task.</li>
<li>AiAnalysis.HeadTailTask: intelligent opening and closing credits task.</li>
<li>AiAnalysis.DescriptionTask: intelligent summary task.</li>
<li>AiAnalysis.HorizontalToVerticalTask: Intelligent Landscape to Portrait Task.</li>
<li>AiAnalysis.DubbingTask: intelligent dubbing task.</li>
<li>AiAnalysis.VideoRemakeTask: intelligent deduplication task.</li>
<li>AiAnalysis.VideoComprehensionTask: video understanding task.</li>
<li>SmartSubtitle.AsrFullTextTask: intelligent speech full-text recognition task.</li>
<li>SmartSubtitle.TransTextTask: Translation result.</li>
<li>SmartSubtitle.PureSubtitleTransTask: return the translation result of a pure subtitle file.</li>
<li>SmartSubtitle.OcrFullTextTask: intelligent text extraction subtitle task.</li>
<li>SmartErase: intelligent erasure task.</li>

                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取Task status. It can be PROCESSING, SUCCESS, or FAIL.
                     * @return Status Task status. It can be PROCESSING, SUCCESS, or FAIL.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Task status. It can be PROCESSING, SUCCESS, or FAIL.
                     * @param _status Task status. It can be PROCESSING, SUCCESS, or FAIL.
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
                     * 获取Error code. `0` indicates success. Other values indicate failure.
                     * @return ErrCode Error code. `0` indicates success. Other values indicate failure.
                     * 
                     */
                    std::string GetErrCode() const;

                    /**
                     * 设置Error code. `0` indicates success. Other values indicate failure.
                     * @param _errCode Error code. `0` indicates success. Other values indicate failure.
                     * 
                     */
                    void SetErrCode(const std::string& _errCode);

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     * 
                     */
                    bool ErrCodeHasBeenSet() const;

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
                     * 获取MPS video processing task input. This field corresponds to the Input result in the MPS task response, returned in JSON format.
                     * @return Input MPS video processing task input. This field corresponds to the Input result in the MPS task response, returned in JSON format.
                     * 
                     */
                    std::string GetInput() const;

                    /**
                     * 设置MPS video processing task input. This field corresponds to the Input result in the MPS task response, returned in JSON format.
                     * @param _input MPS video processing task input. This field corresponds to the Input result in the MPS task response, returned in JSON format.
                     * 
                     */
                    void SetInput(const std::string& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取Output of MPS video processing task.
                     * @return Output Output of MPS video processing task.
                     * 
                     */
                    MPSTaskOutput GetOutput() const;

                    /**
                     * 设置Output of MPS video processing task.
                     * @param _output Output of MPS video processing task.
                     * 
                     */
                    void SetOutput(const MPSTaskOutput& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                private:

                    /**
                     * Task type. The specific subtask type in the WorkflowTask structure of MPS. Value:
<li>MediaProcess.Transcode: audio and video transcoding task.</li>
<li>AiAnalysis.DeLogo: intelligent erasure task.</li>
<li>AiAnalysis.ClassificationTask: intelligent classification task.</li>
<li>AiAnalysis.CoverTask: Intelligent Cover Task.</li>
<li>AiAnalysis.TagTask: intelligent tag task.</li>
<li>AiAnalysis.FrameTagTask: intelligent frame-specific tagging task.</li>
<li>AiAnalysis.HighlightTask: intelligent highlight task.</li>
<li>AiAnalysis.SegmentTask: intelligent video splitting task.</li>
<li>AiAnalysis.HeadTailTask: intelligent opening and closing credits task.</li>
<li>AiAnalysis.DescriptionTask: intelligent summary task.</li>
<li>AiAnalysis.HorizontalToVerticalTask: Intelligent Landscape to Portrait Task.</li>
<li>AiAnalysis.DubbingTask: intelligent dubbing task.</li>
<li>AiAnalysis.VideoRemakeTask: intelligent deduplication task.</li>
<li>AiAnalysis.VideoComprehensionTask: video understanding task.</li>
<li>SmartSubtitle.AsrFullTextTask: intelligent speech full-text recognition task.</li>
<li>SmartSubtitle.TransTextTask: Translation result.</li>
<li>SmartSubtitle.PureSubtitleTransTask: return the translation result of a pure subtitle file.</li>
<li>SmartSubtitle.OcrFullTextTask: intelligent text extraction subtitle task.</li>
<li>SmartErase: intelligent erasure task.</li>

                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * Task status. It can be PROCESSING, SUCCESS, or FAIL.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Error code. `0` indicates success. Other values indicate failure.
                     */
                    std::string m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * Error message.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * MPS video processing task input. This field corresponds to the Input result in the MPS task response, returned in JSON format.
                     */
                    std::string m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * Output of MPS video processing task.
                     */
                    MPSTaskOutput m_output;
                    bool m_outputHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MPSSUBTASKRESULT_H_
