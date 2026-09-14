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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_ACTIVITYPARA_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_ACTIVITYPARA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/TranscodeTaskInput.h>
#include <tencentcloud/mps/v20190612/model/AnimatedGraphicTaskInput.h>
#include <tencentcloud/mps/v20190612/model/SnapshotByTimeOffsetTaskInput.h>
#include <tencentcloud/mps/v20190612/model/SampleSnapshotTaskInput.h>
#include <tencentcloud/mps/v20190612/model/ImageSpriteTaskInput.h>
#include <tencentcloud/mps/v20190612/model/AdaptiveDynamicStreamingTaskInput.h>
#include <tencentcloud/mps/v20190612/model/AiContentReviewTaskInput.h>
#include <tencentcloud/mps/v20190612/model/AiAnalysisTaskInput.h>
#include <tencentcloud/mps/v20190612/model/AiRecognitionTaskInput.h>
#include <tencentcloud/mps/v20190612/model/AiQualityControlTaskInput.h>
#include <tencentcloud/mps/v20190612/model/ExecRulesTask.h>
#include <tencentcloud/mps/v20190612/model/SmartSubtitlesTaskInput.h>
#include <tencentcloud/mps/v20190612/model/SmartEraseTaskInput.h>
#include <tencentcloud/mps/v20190612/model/AIDubbingTaskInput.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 
                */
                class ActivityPara : public AbstractModel
                {
                public:
                    ActivityPara();
                    ~ActivityPara() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Video transcoding task</p>
                     * @return TranscodeTask <p>Video transcoding task</p>
                     * 
                     */
                    TranscodeTaskInput GetTranscodeTask() const;

                    /**
                     * 设置<p>Video transcoding task</p>
                     * @param _transcodeTask <p>Video transcoding task</p>
                     * 
                     */
                    void SetTranscodeTask(const TranscodeTaskInput& _transcodeTask);

                    /**
                     * 判断参数 TranscodeTask 是否已赋值
                     * @return TranscodeTask 是否已赋值
                     * 
                     */
                    bool TranscodeTaskHasBeenSet() const;

                    /**
                     * 获取<p>Video-to-GIF task</p>
                     * @return AnimatedGraphicTask <p>Video-to-GIF task</p>
                     * 
                     */
                    AnimatedGraphicTaskInput GetAnimatedGraphicTask() const;

                    /**
                     * 设置<p>Video-to-GIF task</p>
                     * @param _animatedGraphicTask <p>Video-to-GIF task</p>
                     * 
                     */
                    void SetAnimatedGraphicTask(const AnimatedGraphicTaskInput& _animatedGraphicTask);

                    /**
                     * 判断参数 AnimatedGraphicTask 是否已赋值
                     * @return AnimatedGraphicTask 是否已赋值
                     * 
                     */
                    bool AnimatedGraphicTaskHasBeenSet() const;

                    /**
                     * 获取<p>Video time point screenshot task</p>
                     * @return SnapshotByTimeOffsetTask <p>Video time point screenshot task</p>
                     * 
                     */
                    SnapshotByTimeOffsetTaskInput GetSnapshotByTimeOffsetTask() const;

                    /**
                     * 设置<p>Video time point screenshot task</p>
                     * @param _snapshotByTimeOffsetTask <p>Video time point screenshot task</p>
                     * 
                     */
                    void SetSnapshotByTimeOffsetTask(const SnapshotByTimeOffsetTaskInput& _snapshotByTimeOffsetTask);

                    /**
                     * 判断参数 SnapshotByTimeOffsetTask 是否已赋值
                     * @return SnapshotByTimeOffsetTask 是否已赋值
                     * 
                     */
                    bool SnapshotByTimeOffsetTaskHasBeenSet() const;

                    /**
                     * 获取<p>Video sampling screenshot task</p>
                     * @return SampleSnapshotTask <p>Video sampling screenshot task</p>
                     * 
                     */
                    SampleSnapshotTaskInput GetSampleSnapshotTask() const;

                    /**
                     * 设置<p>Video sampling screenshot task</p>
                     * @param _sampleSnapshotTask <p>Video sampling screenshot task</p>
                     * 
                     */
                    void SetSampleSnapshotTask(const SampleSnapshotTaskInput& _sampleSnapshotTask);

                    /**
                     * 判断参数 SampleSnapshotTask 是否已赋值
                     * @return SampleSnapshotTask 是否已赋值
                     * 
                     */
                    bool SampleSnapshotTaskHasBeenSet() const;

                    /**
                     * 获取<p>Video image sprite task</p>
                     * @return ImageSpriteTask <p>Video image sprite task</p>
                     * 
                     */
                    ImageSpriteTaskInput GetImageSpriteTask() const;

                    /**
                     * 设置<p>Video image sprite task</p>
                     * @param _imageSpriteTask <p>Video image sprite task</p>
                     * 
                     */
                    void SetImageSpriteTask(const ImageSpriteTaskInput& _imageSpriteTask);

                    /**
                     * 判断参数 ImageSpriteTask 是否已赋值
                     * @return ImageSpriteTask 是否已赋值
                     * 
                     */
                    bool ImageSpriteTaskHasBeenSet() const;

                    /**
                     * 获取<p>Adaptive bitrate streaming task</p>
                     * @return AdaptiveDynamicStreamingTask <p>Adaptive bitrate streaming task</p>
                     * 
                     */
                    AdaptiveDynamicStreamingTaskInput GetAdaptiveDynamicStreamingTask() const;

                    /**
                     * 设置<p>Adaptive bitrate streaming task</p>
                     * @param _adaptiveDynamicStreamingTask <p>Adaptive bitrate streaming task</p>
                     * 
                     */
                    void SetAdaptiveDynamicStreamingTask(const AdaptiveDynamicStreamingTaskInput& _adaptiveDynamicStreamingTask);

                    /**
                     * 判断参数 AdaptiveDynamicStreamingTask 是否已赋值
                     * @return AdaptiveDynamicStreamingTask 是否已赋值
                     * 
                     */
                    bool AdaptiveDynamicStreamingTaskHasBeenSet() const;

                    /**
                     * 获取<p>Video content review task</p>
                     * @return AiContentReviewTask <p>Video content review task</p>
                     * 
                     */
                    AiContentReviewTaskInput GetAiContentReviewTask() const;

                    /**
                     * 设置<p>Video content review task</p>
                     * @param _aiContentReviewTask <p>Video content review task</p>
                     * 
                     */
                    void SetAiContentReviewTask(const AiContentReviewTaskInput& _aiContentReviewTask);

                    /**
                     * 判断参数 AiContentReviewTask 是否已赋值
                     * @return AiContentReviewTask 是否已赋值
                     * 
                     */
                    bool AiContentReviewTaskHasBeenSet() const;

                    /**
                     * 获取<p>Video content analysis task</p>
                     * @return AiAnalysisTask <p>Video content analysis task</p>
                     * 
                     */
                    AiAnalysisTaskInput GetAiAnalysisTask() const;

                    /**
                     * 设置<p>Video content analysis task</p>
                     * @param _aiAnalysisTask <p>Video content analysis task</p>
                     * 
                     */
                    void SetAiAnalysisTask(const AiAnalysisTaskInput& _aiAnalysisTask);

                    /**
                     * 判断参数 AiAnalysisTask 是否已赋值
                     * @return AiAnalysisTask 是否已赋值
                     * 
                     */
                    bool AiAnalysisTaskHasBeenSet() const;

                    /**
                     * 获取<p>Video content recognition task</p>
                     * @return AiRecognitionTask <p>Video content recognition task</p>
                     * 
                     */
                    AiRecognitionTaskInput GetAiRecognitionTask() const;

                    /**
                     * 设置<p>Video content recognition task</p>
                     * @param _aiRecognitionTask <p>Video content recognition task</p>
                     * 
                     */
                    void SetAiRecognitionTask(const AiRecognitionTaskInput& _aiRecognitionTask);

                    /**
                     * 判断参数 AiRecognitionTask 是否已赋值
                     * @return AiRecognitionTask 是否已赋值
                     * 
                     */
                    bool AiRecognitionTaskHasBeenSet() const;

                    /**
                     * 获取<p>Media quality inspection task</p>
                     * @return QualityControlTask <p>Media quality inspection task</p>
                     * 
                     */
                    AiQualityControlTaskInput GetQualityControlTask() const;

                    /**
                     * 设置<p>Media quality inspection task</p>
                     * @param _qualityControlTask <p>Media quality inspection task</p>
                     * 
                     */
                    void SetQualityControlTask(const AiQualityControlTaskInput& _qualityControlTask);

                    /**
                     * 判断参数 QualityControlTask 是否已赋值
                     * @return QualityControlTask 是否已赋值
                     * 
                     */
                    bool QualityControlTaskHasBeenSet() const;

                    /**
                     * 获取<p>Conditional judgment of the task.</p>
                     * @return ExecRulesTask <p>Conditional judgment of the task.</p>
                     * 
                     */
                    ExecRulesTask GetExecRulesTask() const;

                    /**
                     * 设置<p>Conditional judgment of the task.</p>
                     * @param _execRulesTask <p>Conditional judgment of the task.</p>
                     * 
                     */
                    void SetExecRulesTask(const ExecRulesTask& _execRulesTask);

                    /**
                     * 判断参数 ExecRulesTask 是否已赋值
                     * @return ExecRulesTask 是否已赋值
                     * 
                     */
                    bool ExecRulesTaskHasBeenSet() const;

                    /**
                     * 获取<p>Smart subtitle task.</p>
                     * @return SmartSubtitlesTask <p>Smart subtitle task.</p>
                     * 
                     */
                    SmartSubtitlesTaskInput GetSmartSubtitlesTask() const;

                    /**
                     * 设置<p>Smart subtitle task.</p>
                     * @param _smartSubtitlesTask <p>Smart subtitle task.</p>
                     * 
                     */
                    void SetSmartSubtitlesTask(const SmartSubtitlesTaskInput& _smartSubtitlesTask);

                    /**
                     * 判断参数 SmartSubtitlesTask 是否已赋值
                     * @return SmartSubtitlesTask 是否已赋值
                     * 
                     */
                    bool SmartSubtitlesTaskHasBeenSet() const;

                    /**
                     * 获取<p>Intelligent erasure task</p>
                     * @return SmartEraseTask <p>Intelligent erasure task</p>
                     * 
                     */
                    SmartEraseTaskInput GetSmartEraseTask() const;

                    /**
                     * 设置<p>Intelligent erasure task</p>
                     * @param _smartEraseTask <p>Intelligent erasure task</p>
                     * 
                     */
                    void SetSmartEraseTask(const SmartEraseTaskInput& _smartEraseTask);

                    /**
                     * 判断参数 SmartEraseTask 是否已赋值
                     * @return SmartEraseTask 是否已赋值
                     * 
                     */
                    bool SmartEraseTaskHasBeenSet() const;

                    /**
                     * 获取<p>AI Dubbing task.</p>
                     * @return AIDubbingTask <p>AI Dubbing task.</p>
                     * 
                     */
                    AIDubbingTaskInput GetAIDubbingTask() const;

                    /**
                     * 设置<p>AI Dubbing task.</p>
                     * @param _aIDubbingTask <p>AI Dubbing task.</p>
                     * 
                     */
                    void SetAIDubbingTask(const AIDubbingTaskInput& _aIDubbingTask);

                    /**
                     * 判断参数 AIDubbingTask 是否已赋值
                     * @return AIDubbingTask 是否已赋值
                     * 
                     */
                    bool AIDubbingTaskHasBeenSet() const;

                private:

                    /**
                     * <p>Video transcoding task</p>
                     */
                    TranscodeTaskInput m_transcodeTask;
                    bool m_transcodeTaskHasBeenSet;

                    /**
                     * <p>Video-to-GIF task</p>
                     */
                    AnimatedGraphicTaskInput m_animatedGraphicTask;
                    bool m_animatedGraphicTaskHasBeenSet;

                    /**
                     * <p>Video time point screenshot task</p>
                     */
                    SnapshotByTimeOffsetTaskInput m_snapshotByTimeOffsetTask;
                    bool m_snapshotByTimeOffsetTaskHasBeenSet;

                    /**
                     * <p>Video sampling screenshot task</p>
                     */
                    SampleSnapshotTaskInput m_sampleSnapshotTask;
                    bool m_sampleSnapshotTaskHasBeenSet;

                    /**
                     * <p>Video image sprite task</p>
                     */
                    ImageSpriteTaskInput m_imageSpriteTask;
                    bool m_imageSpriteTaskHasBeenSet;

                    /**
                     * <p>Adaptive bitrate streaming task</p>
                     */
                    AdaptiveDynamicStreamingTaskInput m_adaptiveDynamicStreamingTask;
                    bool m_adaptiveDynamicStreamingTaskHasBeenSet;

                    /**
                     * <p>Video content review task</p>
                     */
                    AiContentReviewTaskInput m_aiContentReviewTask;
                    bool m_aiContentReviewTaskHasBeenSet;

                    /**
                     * <p>Video content analysis task</p>
                     */
                    AiAnalysisTaskInput m_aiAnalysisTask;
                    bool m_aiAnalysisTaskHasBeenSet;

                    /**
                     * <p>Video content recognition task</p>
                     */
                    AiRecognitionTaskInput m_aiRecognitionTask;
                    bool m_aiRecognitionTaskHasBeenSet;

                    /**
                     * <p>Media quality inspection task</p>
                     */
                    AiQualityControlTaskInput m_qualityControlTask;
                    bool m_qualityControlTaskHasBeenSet;

                    /**
                     * <p>Conditional judgment of the task.</p>
                     */
                    ExecRulesTask m_execRulesTask;
                    bool m_execRulesTaskHasBeenSet;

                    /**
                     * <p>Smart subtitle task.</p>
                     */
                    SmartSubtitlesTaskInput m_smartSubtitlesTask;
                    bool m_smartSubtitlesTaskHasBeenSet;

                    /**
                     * <p>Intelligent erasure task</p>
                     */
                    SmartEraseTaskInput m_smartEraseTask;
                    bool m_smartEraseTaskHasBeenSet;

                    /**
                     * <p>AI Dubbing task.</p>
                     */
                    AIDubbingTaskInput m_aIDubbingTask;
                    bool m_aIDubbingTaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_ACTIVITYPARA_H_
