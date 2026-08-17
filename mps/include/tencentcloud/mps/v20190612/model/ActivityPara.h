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


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Orchestrate atomic tasks
                */
                class ActivityPara : public AbstractModel
                {
                public:
                    ActivityPara();
                    ~ActivityPara() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return TranscodeTask 
                     * 
                     */
                    TranscodeTaskInput GetTranscodeTask() const;

                    /**
                     * 设置
                     * @param _transcodeTask 
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
                     * 获取
                     * @return AnimatedGraphicTask 
                     * 
                     */
                    AnimatedGraphicTaskInput GetAnimatedGraphicTask() const;

                    /**
                     * 设置
                     * @param _animatedGraphicTask 
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
                     * 获取
                     * @return SnapshotByTimeOffsetTask 
                     * 
                     */
                    SnapshotByTimeOffsetTaskInput GetSnapshotByTimeOffsetTask() const;

                    /**
                     * 设置
                     * @param _snapshotByTimeOffsetTask 
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
                     * 获取
                     * @return SampleSnapshotTask 
                     * 
                     */
                    SampleSnapshotTaskInput GetSampleSnapshotTask() const;

                    /**
                     * 设置
                     * @param _sampleSnapshotTask 
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
                     * 获取
                     * @return ImageSpriteTask 
                     * 
                     */
                    ImageSpriteTaskInput GetImageSpriteTask() const;

                    /**
                     * 设置
                     * @param _imageSpriteTask 
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
                     * 获取
                     * @return AdaptiveDynamicStreamingTask 
                     * 
                     */
                    AdaptiveDynamicStreamingTaskInput GetAdaptiveDynamicStreamingTask() const;

                    /**
                     * 设置
                     * @param _adaptiveDynamicStreamingTask 
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
                     * 获取
                     * @return AiContentReviewTask 
                     * 
                     */
                    AiContentReviewTaskInput GetAiContentReviewTask() const;

                    /**
                     * 设置
                     * @param _aiContentReviewTask 
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
                     * 获取
                     * @return AiAnalysisTask 
                     * 
                     */
                    AiAnalysisTaskInput GetAiAnalysisTask() const;

                    /**
                     * 设置
                     * @param _aiAnalysisTask 
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
                     * 获取
                     * @return AiRecognitionTask 
                     * 
                     */
                    AiRecognitionTaskInput GetAiRecognitionTask() const;

                    /**
                     * 设置
                     * @param _aiRecognitionTask 
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
                     * 获取
                     * @return QualityControlTask 
                     * 
                     */
                    AiQualityControlTaskInput GetQualityControlTask() const;

                    /**
                     * 设置
                     * @param _qualityControlTask 
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
                     * 获取
                     * @return ExecRulesTask 
                     * 
                     */
                    ExecRulesTask GetExecRulesTask() const;

                    /**
                     * 设置
                     * @param _execRulesTask 
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
                     * 获取
                     * @return SmartSubtitlesTask 
                     * 
                     */
                    SmartSubtitlesTaskInput GetSmartSubtitlesTask() const;

                    /**
                     * 设置
                     * @param _smartSubtitlesTask 
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
                     * 获取
                     * @return SmartEraseTask 
                     * 
                     */
                    SmartEraseTaskInput GetSmartEraseTask() const;

                    /**
                     * 设置
                     * @param _smartEraseTask 
                     * 
                     */
                    void SetSmartEraseTask(const SmartEraseTaskInput& _smartEraseTask);

                    /**
                     * 判断参数 SmartEraseTask 是否已赋值
                     * @return SmartEraseTask 是否已赋值
                     * 
                     */
                    bool SmartEraseTaskHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    TranscodeTaskInput m_transcodeTask;
                    bool m_transcodeTaskHasBeenSet;

                    /**
                     * 
                     */
                    AnimatedGraphicTaskInput m_animatedGraphicTask;
                    bool m_animatedGraphicTaskHasBeenSet;

                    /**
                     * 
                     */
                    SnapshotByTimeOffsetTaskInput m_snapshotByTimeOffsetTask;
                    bool m_snapshotByTimeOffsetTaskHasBeenSet;

                    /**
                     * 
                     */
                    SampleSnapshotTaskInput m_sampleSnapshotTask;
                    bool m_sampleSnapshotTaskHasBeenSet;

                    /**
                     * 
                     */
                    ImageSpriteTaskInput m_imageSpriteTask;
                    bool m_imageSpriteTaskHasBeenSet;

                    /**
                     * 
                     */
                    AdaptiveDynamicStreamingTaskInput m_adaptiveDynamicStreamingTask;
                    bool m_adaptiveDynamicStreamingTaskHasBeenSet;

                    /**
                     * 
                     */
                    AiContentReviewTaskInput m_aiContentReviewTask;
                    bool m_aiContentReviewTaskHasBeenSet;

                    /**
                     * 
                     */
                    AiAnalysisTaskInput m_aiAnalysisTask;
                    bool m_aiAnalysisTaskHasBeenSet;

                    /**
                     * 
                     */
                    AiRecognitionTaskInput m_aiRecognitionTask;
                    bool m_aiRecognitionTaskHasBeenSet;

                    /**
                     * 
                     */
                    AiQualityControlTaskInput m_qualityControlTask;
                    bool m_qualityControlTaskHasBeenSet;

                    /**
                     * 
                     */
                    ExecRulesTask m_execRulesTask;
                    bool m_execRulesTaskHasBeenSet;

                    /**
                     * 
                     */
                    SmartSubtitlesTaskInput m_smartSubtitlesTask;
                    bool m_smartSubtitlesTaskHasBeenSet;

                    /**
                     * 
                     */
                    SmartEraseTaskInput m_smartEraseTask;
                    bool m_smartEraseTaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_ACTIVITYPARA_H_
