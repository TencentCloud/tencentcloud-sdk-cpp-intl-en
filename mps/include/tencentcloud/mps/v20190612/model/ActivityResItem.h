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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_ACTIVITYRESITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_ACTIVITYRESITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/MediaProcessTaskTranscodeResult.h>
#include <tencentcloud/mps/v20190612/model/MediaProcessTaskAnimatedGraphicResult.h>
#include <tencentcloud/mps/v20190612/model/MediaProcessTaskSnapshotByTimeOffsetResult.h>
#include <tencentcloud/mps/v20190612/model/MediaProcessTaskSampleSnapshotResult.h>
#include <tencentcloud/mps/v20190612/model/MediaProcessTaskImageSpriteResult.h>
#include <tencentcloud/mps/v20190612/model/MediaProcessTaskAdaptiveDynamicStreamingResult.h>
#include <tencentcloud/mps/v20190612/model/ScheduleRecognitionTaskResult.h>
#include <tencentcloud/mps/v20190612/model/ScheduleReviewTaskResult.h>
#include <tencentcloud/mps/v20190612/model/ScheduleAnalysisTaskResult.h>
#include <tencentcloud/mps/v20190612/model/ScheduleQualityControlTaskResult.h>
#include <tencentcloud/mps/v20190612/model/ScheduleSmartSubtitleTaskResult.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * The execution results of the subtasks of a scheme.
                */
                class ActivityResItem : public AbstractModel
                {
                public:
                    ActivityResItem();
                    ~ActivityResItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The result of a transcoding task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TranscodeTask The result of a transcoding task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MediaProcessTaskTranscodeResult GetTranscodeTask() const;

                    /**
                     * 设置The result of a transcoding task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _transcodeTask The result of a transcoding task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTranscodeTask(const MediaProcessTaskTranscodeResult& _transcodeTask);

                    /**
                     * 判断参数 TranscodeTask 是否已赋值
                     * @return TranscodeTask 是否已赋值
                     * 
                     */
                    bool TranscodeTaskHasBeenSet() const;

                    /**
                     * 获取The result of an animated image generating task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AnimatedGraphicTask The result of an animated image generating task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MediaProcessTaskAnimatedGraphicResult GetAnimatedGraphicTask() const;

                    /**
                     * 设置The result of an animated image generating task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _animatedGraphicTask The result of an animated image generating task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAnimatedGraphicTask(const MediaProcessTaskAnimatedGraphicResult& _animatedGraphicTask);

                    /**
                     * 判断参数 AnimatedGraphicTask 是否已赋值
                     * @return AnimatedGraphicTask 是否已赋值
                     * 
                     */
                    bool AnimatedGraphicTaskHasBeenSet() const;

                    /**
                     * 获取The result of a time point screenshot task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SnapshotByTimeOffsetTask The result of a time point screenshot task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MediaProcessTaskSnapshotByTimeOffsetResult GetSnapshotByTimeOffsetTask() const;

                    /**
                     * 设置The result of a time point screenshot task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _snapshotByTimeOffsetTask The result of a time point screenshot task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSnapshotByTimeOffsetTask(const MediaProcessTaskSnapshotByTimeOffsetResult& _snapshotByTimeOffsetTask);

                    /**
                     * 判断参数 SnapshotByTimeOffsetTask 是否已赋值
                     * @return SnapshotByTimeOffsetTask 是否已赋值
                     * 
                     */
                    bool SnapshotByTimeOffsetTaskHasBeenSet() const;

                    /**
                     * 获取The result of a sampled screenshot task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SampleSnapshotTask The result of a sampled screenshot task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MediaProcessTaskSampleSnapshotResult GetSampleSnapshotTask() const;

                    /**
                     * 设置The result of a sampled screenshot task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sampleSnapshotTask The result of a sampled screenshot task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSampleSnapshotTask(const MediaProcessTaskSampleSnapshotResult& _sampleSnapshotTask);

                    /**
                     * 判断参数 SampleSnapshotTask 是否已赋值
                     * @return SampleSnapshotTask 是否已赋值
                     * 
                     */
                    bool SampleSnapshotTaskHasBeenSet() const;

                    /**
                     * 获取The result of an image sprite task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ImageSpriteTask The result of an image sprite task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MediaProcessTaskImageSpriteResult GetImageSpriteTask() const;

                    /**
                     * 设置The result of an image sprite task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _imageSpriteTask The result of an image sprite task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetImageSpriteTask(const MediaProcessTaskImageSpriteResult& _imageSpriteTask);

                    /**
                     * 判断参数 ImageSpriteTask 是否已赋值
                     * @return ImageSpriteTask 是否已赋值
                     * 
                     */
                    bool ImageSpriteTaskHasBeenSet() const;

                    /**
                     * 获取The result of an adaptive bitrate streaming task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AdaptiveDynamicStreamingTask The result of an adaptive bitrate streaming task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MediaProcessTaskAdaptiveDynamicStreamingResult GetAdaptiveDynamicStreamingTask() const;

                    /**
                     * 设置The result of an adaptive bitrate streaming task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _adaptiveDynamicStreamingTask The result of an adaptive bitrate streaming task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAdaptiveDynamicStreamingTask(const MediaProcessTaskAdaptiveDynamicStreamingResult& _adaptiveDynamicStreamingTask);

                    /**
                     * 判断参数 AdaptiveDynamicStreamingTask 是否已赋值
                     * @return AdaptiveDynamicStreamingTask 是否已赋值
                     * 
                     */
                    bool AdaptiveDynamicStreamingTaskHasBeenSet() const;

                    /**
                     * 获取The result of a content recognition task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RecognitionTask The result of a content recognition task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ScheduleRecognitionTaskResult GetRecognitionTask() const;

                    /**
                     * 设置The result of a content recognition task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _recognitionTask The result of a content recognition task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRecognitionTask(const ScheduleRecognitionTaskResult& _recognitionTask);

                    /**
                     * 判断参数 RecognitionTask 是否已赋值
                     * @return RecognitionTask 是否已赋值
                     * 
                     */
                    bool RecognitionTaskHasBeenSet() const;

                    /**
                     * 获取The result of a content moderation task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ReviewTask The result of a content moderation task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ScheduleReviewTaskResult GetReviewTask() const;

                    /**
                     * 设置The result of a content moderation task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _reviewTask The result of a content moderation task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetReviewTask(const ScheduleReviewTaskResult& _reviewTask);

                    /**
                     * 判断参数 ReviewTask 是否已赋值
                     * @return ReviewTask 是否已赋值
                     * 
                     */
                    bool ReviewTaskHasBeenSet() const;

                    /**
                     * 获取The result of a content analysis task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AnalysisTask The result of a content analysis task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ScheduleAnalysisTaskResult GetAnalysisTask() const;

                    /**
                     * 设置The result of a content analysis task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _analysisTask The result of a content analysis task.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAnalysisTask(const ScheduleAnalysisTaskResult& _analysisTask);

                    /**
                     * 判断参数 AnalysisTask 是否已赋值
                     * @return AnalysisTask 是否已赋值
                     * 
                     */
                    bool AnalysisTaskHasBeenSet() const;

                    /**
                     * 获取Media quality inspection task output.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return QualityControlTask Media quality inspection task output.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ScheduleQualityControlTaskResult GetQualityControlTask() const;

                    /**
                     * 设置Media quality inspection task output.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _qualityControlTask Media quality inspection task output.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetQualityControlTask(const ScheduleQualityControlTaskResult& _qualityControlTask);

                    /**
                     * 判断参数 QualityControlTask 是否已赋值
                     * @return QualityControlTask 是否已赋值
                     * 
                     */
                    bool QualityControlTaskHasBeenSet() const;

                    /**
                     * 获取Smart subtitle task output.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SmartSubtitlesTask Smart subtitle task output.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    ScheduleSmartSubtitleTaskResult GetSmartSubtitlesTask() const;

                    /**
                     * 设置Smart subtitle task output.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _smartSubtitlesTask Smart subtitle task output.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSmartSubtitlesTask(const ScheduleSmartSubtitleTaskResult& _smartSubtitlesTask);

                    /**
                     * 判断参数 SmartSubtitlesTask 是否已赋值
                     * @return SmartSubtitlesTask 是否已赋值
                     * 
                     */
                    bool SmartSubtitlesTaskHasBeenSet() const;

                private:

                    /**
                     * The result of a transcoding task.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MediaProcessTaskTranscodeResult m_transcodeTask;
                    bool m_transcodeTaskHasBeenSet;

                    /**
                     * The result of an animated image generating task.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MediaProcessTaskAnimatedGraphicResult m_animatedGraphicTask;
                    bool m_animatedGraphicTaskHasBeenSet;

                    /**
                     * The result of a time point screenshot task.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MediaProcessTaskSnapshotByTimeOffsetResult m_snapshotByTimeOffsetTask;
                    bool m_snapshotByTimeOffsetTaskHasBeenSet;

                    /**
                     * The result of a sampled screenshot task.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MediaProcessTaskSampleSnapshotResult m_sampleSnapshotTask;
                    bool m_sampleSnapshotTaskHasBeenSet;

                    /**
                     * The result of an image sprite task.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MediaProcessTaskImageSpriteResult m_imageSpriteTask;
                    bool m_imageSpriteTaskHasBeenSet;

                    /**
                     * The result of an adaptive bitrate streaming task.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MediaProcessTaskAdaptiveDynamicStreamingResult m_adaptiveDynamicStreamingTask;
                    bool m_adaptiveDynamicStreamingTaskHasBeenSet;

                    /**
                     * The result of a content recognition task.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ScheduleRecognitionTaskResult m_recognitionTask;
                    bool m_recognitionTaskHasBeenSet;

                    /**
                     * The result of a content moderation task.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ScheduleReviewTaskResult m_reviewTask;
                    bool m_reviewTaskHasBeenSet;

                    /**
                     * The result of a content analysis task.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ScheduleAnalysisTaskResult m_analysisTask;
                    bool m_analysisTaskHasBeenSet;

                    /**
                     * Media quality inspection task output.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ScheduleQualityControlTaskResult m_qualityControlTask;
                    bool m_qualityControlTaskHasBeenSet;

                    /**
                     * Smart subtitle task output.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    ScheduleSmartSubtitleTaskResult m_smartSubtitlesTask;
                    bool m_smartSubtitlesTaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_ACTIVITYRESITEM_H_
