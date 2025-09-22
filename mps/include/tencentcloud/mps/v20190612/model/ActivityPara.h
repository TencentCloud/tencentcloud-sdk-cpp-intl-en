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
                * A subtask of a scheme.
                */
                class ActivityPara : public AbstractModel
                {
                public:
                    ActivityPara();
                    ~ActivityPara() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取A transcoding task.
                     * @return TranscodeTask A transcoding task.
                     * 
                     */
                    TranscodeTaskInput GetTranscodeTask() const;

                    /**
                     * 设置A transcoding task.
                     * @param _transcodeTask A transcoding task.
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
                     * 获取An animated screenshot generation task.
                     * @return AnimatedGraphicTask An animated screenshot generation task.
                     * 
                     */
                    AnimatedGraphicTaskInput GetAnimatedGraphicTask() const;

                    /**
                     * 设置An animated screenshot generation task.
                     * @param _animatedGraphicTask An animated screenshot generation task.
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
                     * 获取A time point screenshot task.
                     * @return SnapshotByTimeOffsetTask A time point screenshot task.
                     * 
                     */
                    SnapshotByTimeOffsetTaskInput GetSnapshotByTimeOffsetTask() const;

                    /**
                     * 设置A time point screenshot task.
                     * @param _snapshotByTimeOffsetTask A time point screenshot task.
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
                     * 获取A sampled screenshot task.
                     * @return SampleSnapshotTask A sampled screenshot task.
                     * 
                     */
                    SampleSnapshotTaskInput GetSampleSnapshotTask() const;

                    /**
                     * 设置A sampled screenshot task.
                     * @param _sampleSnapshotTask A sampled screenshot task.
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
                     * 获取An image sprite screenshot task.
                     * @return ImageSpriteTask An image sprite screenshot task.
                     * 
                     */
                    ImageSpriteTaskInput GetImageSpriteTask() const;

                    /**
                     * 设置An image sprite screenshot task.
                     * @param _imageSpriteTask An image sprite screenshot task.
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
                     * 获取An adaptive bitrate streaming task.
                     * @return AdaptiveDynamicStreamingTask An adaptive bitrate streaming task.
                     * 
                     */
                    AdaptiveDynamicStreamingTaskInput GetAdaptiveDynamicStreamingTask() const;

                    /**
                     * 设置An adaptive bitrate streaming task.
                     * @param _adaptiveDynamicStreamingTask An adaptive bitrate streaming task.
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
                     * 获取A content moderation task.
                     * @return AiContentReviewTask A content moderation task.
                     * 
                     */
                    AiContentReviewTaskInput GetAiContentReviewTask() const;

                    /**
                     * 设置A content moderation task.
                     * @param _aiContentReviewTask A content moderation task.
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
                     * 获取A content analysis task.
                     * @return AiAnalysisTask A content analysis task.
                     * 
                     */
                    AiAnalysisTaskInput GetAiAnalysisTask() const;

                    /**
                     * 设置A content analysis task.
                     * @param _aiAnalysisTask A content analysis task.
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
                     * 获取A content recognition task.
                     * @return AiRecognitionTask A content recognition task.
                     * 
                     */
                    AiRecognitionTaskInput GetAiRecognitionTask() const;

                    /**
                     * 设置A content recognition task.
                     * @param _aiRecognitionTask A content recognition task.
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
                     * 获取Media quality inspection task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return QualityControlTask Media quality inspection task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    AiQualityControlTaskInput GetQualityControlTask() const;

                    /**
                     * 设置Media quality inspection task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _qualityControlTask Media quality inspection task.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Conditional judgment of the task.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ExecRulesTask Conditional judgment of the task.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    ExecRulesTask GetExecRulesTask() const;

                    /**
                     * 设置Conditional judgment of the task.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _execRulesTask Conditional judgment of the task.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Smart subtitle task.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SmartSubtitlesTask Smart subtitle task.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    SmartSubtitlesTaskInput GetSmartSubtitlesTask() const;

                    /**
                     * 设置Smart subtitle task.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _smartSubtitlesTask Smart subtitle task.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Smart erasure task.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SmartEraseTask Smart erasure task.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    SmartEraseTaskInput GetSmartEraseTask() const;

                    /**
                     * 设置Smart erasure task.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _smartEraseTask Smart erasure task.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * A transcoding task.
                     */
                    TranscodeTaskInput m_transcodeTask;
                    bool m_transcodeTaskHasBeenSet;

                    /**
                     * An animated screenshot generation task.
                     */
                    AnimatedGraphicTaskInput m_animatedGraphicTask;
                    bool m_animatedGraphicTaskHasBeenSet;

                    /**
                     * A time point screenshot task.
                     */
                    SnapshotByTimeOffsetTaskInput m_snapshotByTimeOffsetTask;
                    bool m_snapshotByTimeOffsetTaskHasBeenSet;

                    /**
                     * A sampled screenshot task.
                     */
                    SampleSnapshotTaskInput m_sampleSnapshotTask;
                    bool m_sampleSnapshotTaskHasBeenSet;

                    /**
                     * An image sprite screenshot task.
                     */
                    ImageSpriteTaskInput m_imageSpriteTask;
                    bool m_imageSpriteTaskHasBeenSet;

                    /**
                     * An adaptive bitrate streaming task.
                     */
                    AdaptiveDynamicStreamingTaskInput m_adaptiveDynamicStreamingTask;
                    bool m_adaptiveDynamicStreamingTaskHasBeenSet;

                    /**
                     * A content moderation task.
                     */
                    AiContentReviewTaskInput m_aiContentReviewTask;
                    bool m_aiContentReviewTaskHasBeenSet;

                    /**
                     * A content analysis task.
                     */
                    AiAnalysisTaskInput m_aiAnalysisTask;
                    bool m_aiAnalysisTaskHasBeenSet;

                    /**
                     * A content recognition task.
                     */
                    AiRecognitionTaskInput m_aiRecognitionTask;
                    bool m_aiRecognitionTaskHasBeenSet;

                    /**
                     * Media quality inspection task.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    AiQualityControlTaskInput m_qualityControlTask;
                    bool m_qualityControlTaskHasBeenSet;

                    /**
                     * Conditional judgment of the task.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    ExecRulesTask m_execRulesTask;
                    bool m_execRulesTaskHasBeenSet;

                    /**
                     * Smart subtitle task.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    SmartSubtitlesTaskInput m_smartSubtitlesTask;
                    bool m_smartSubtitlesTaskHasBeenSet;

                    /**
                     * Smart erasure task.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    SmartEraseTaskInput m_smartEraseTask;
                    bool m_smartEraseTaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_ACTIVITYPARA_H_
