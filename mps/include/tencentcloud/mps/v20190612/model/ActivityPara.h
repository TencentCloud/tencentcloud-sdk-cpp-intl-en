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
                     */
                    TranscodeTaskInput GetTranscodeTask() const;

                    /**
                     * 设置A transcoding task.
                     * @param TranscodeTask A transcoding task.
                     */
                    void SetTranscodeTask(const TranscodeTaskInput& _transcodeTask);

                    /**
                     * 判断参数 TranscodeTask 是否已赋值
                     * @return TranscodeTask 是否已赋值
                     */
                    bool TranscodeTaskHasBeenSet() const;

                    /**
                     * 获取An animated screenshot generation task.
                     * @return AnimatedGraphicTask An animated screenshot generation task.
                     */
                    AnimatedGraphicTaskInput GetAnimatedGraphicTask() const;

                    /**
                     * 设置An animated screenshot generation task.
                     * @param AnimatedGraphicTask An animated screenshot generation task.
                     */
                    void SetAnimatedGraphicTask(const AnimatedGraphicTaskInput& _animatedGraphicTask);

                    /**
                     * 判断参数 AnimatedGraphicTask 是否已赋值
                     * @return AnimatedGraphicTask 是否已赋值
                     */
                    bool AnimatedGraphicTaskHasBeenSet() const;

                    /**
                     * 获取A time point screencapturing task.
                     * @return SnapshotByTimeOffsetTask A time point screencapturing task.
                     */
                    SnapshotByTimeOffsetTaskInput GetSnapshotByTimeOffsetTask() const;

                    /**
                     * 设置A time point screencapturing task.
                     * @param SnapshotByTimeOffsetTask A time point screencapturing task.
                     */
                    void SetSnapshotByTimeOffsetTask(const SnapshotByTimeOffsetTaskInput& _snapshotByTimeOffsetTask);

                    /**
                     * 判断参数 SnapshotByTimeOffsetTask 是否已赋值
                     * @return SnapshotByTimeOffsetTask 是否已赋值
                     */
                    bool SnapshotByTimeOffsetTaskHasBeenSet() const;

                    /**
                     * 获取A sampled screencapturing task.
                     * @return SampleSnapshotTask A sampled screencapturing task.
                     */
                    SampleSnapshotTaskInput GetSampleSnapshotTask() const;

                    /**
                     * 设置A sampled screencapturing task.
                     * @param SampleSnapshotTask A sampled screencapturing task.
                     */
                    void SetSampleSnapshotTask(const SampleSnapshotTaskInput& _sampleSnapshotTask);

                    /**
                     * 判断参数 SampleSnapshotTask 是否已赋值
                     * @return SampleSnapshotTask 是否已赋值
                     */
                    bool SampleSnapshotTaskHasBeenSet() const;

                    /**
                     * 获取An image sprite generation task.
                     * @return ImageSpriteTask An image sprite generation task.
                     */
                    ImageSpriteTaskInput GetImageSpriteTask() const;

                    /**
                     * 设置An image sprite generation task.
                     * @param ImageSpriteTask An image sprite generation task.
                     */
                    void SetImageSpriteTask(const ImageSpriteTaskInput& _imageSpriteTask);

                    /**
                     * 判断参数 ImageSpriteTask 是否已赋值
                     * @return ImageSpriteTask 是否已赋值
                     */
                    bool ImageSpriteTaskHasBeenSet() const;

                    /**
                     * 获取An adaptive bitrate streaming task.
                     * @return AdaptiveDynamicStreamingTask An adaptive bitrate streaming task.
                     */
                    AdaptiveDynamicStreamingTaskInput GetAdaptiveDynamicStreamingTask() const;

                    /**
                     * 设置An adaptive bitrate streaming task.
                     * @param AdaptiveDynamicStreamingTask An adaptive bitrate streaming task.
                     */
                    void SetAdaptiveDynamicStreamingTask(const AdaptiveDynamicStreamingTaskInput& _adaptiveDynamicStreamingTask);

                    /**
                     * 判断参数 AdaptiveDynamicStreamingTask 是否已赋值
                     * @return AdaptiveDynamicStreamingTask 是否已赋值
                     */
                    bool AdaptiveDynamicStreamingTaskHasBeenSet() const;

                    /**
                     * 获取A content moderation task.
                     * @return AiContentReviewTask A content moderation task.
                     */
                    AiContentReviewTaskInput GetAiContentReviewTask() const;

                    /**
                     * 设置A content moderation task.
                     * @param AiContentReviewTask A content moderation task.
                     */
                    void SetAiContentReviewTask(const AiContentReviewTaskInput& _aiContentReviewTask);

                    /**
                     * 判断参数 AiContentReviewTask 是否已赋值
                     * @return AiContentReviewTask 是否已赋值
                     */
                    bool AiContentReviewTaskHasBeenSet() const;

                    /**
                     * 获取A content analysis task.
                     * @return AiAnalysisTask A content analysis task.
                     */
                    AiAnalysisTaskInput GetAiAnalysisTask() const;

                    /**
                     * 设置A content analysis task.
                     * @param AiAnalysisTask A content analysis task.
                     */
                    void SetAiAnalysisTask(const AiAnalysisTaskInput& _aiAnalysisTask);

                    /**
                     * 判断参数 AiAnalysisTask 是否已赋值
                     * @return AiAnalysisTask 是否已赋值
                     */
                    bool AiAnalysisTaskHasBeenSet() const;

                    /**
                     * 获取A content recognition task.
                     * @return AiRecognitionTask A content recognition task.
                     */
                    AiRecognitionTaskInput GetAiRecognitionTask() const;

                    /**
                     * 设置A content recognition task.
                     * @param AiRecognitionTask A content recognition task.
                     */
                    void SetAiRecognitionTask(const AiRecognitionTaskInput& _aiRecognitionTask);

                    /**
                     * 判断参数 AiRecognitionTask 是否已赋值
                     * @return AiRecognitionTask 是否已赋值
                     */
                    bool AiRecognitionTaskHasBeenSet() const;

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
                     * A time point screencapturing task.
                     */
                    SnapshotByTimeOffsetTaskInput m_snapshotByTimeOffsetTask;
                    bool m_snapshotByTimeOffsetTaskHasBeenSet;

                    /**
                     * A sampled screencapturing task.
                     */
                    SampleSnapshotTaskInput m_sampleSnapshotTask;
                    bool m_sampleSnapshotTaskHasBeenSet;

                    /**
                     * An image sprite generation task.
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_ACTIVITYPARA_H_
