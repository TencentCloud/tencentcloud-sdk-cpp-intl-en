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
#include <tencentcloud/mps/v20190612/model/ScheduleExecRuleTaskResult.h>
#include <tencentcloud/mps/v20190612/model/ScheduleSmartSubtitleTaskResult.h>
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
                * Output of the orchestration subtask
                */
                class ActivityResItem : public AbstractModel
                {
                public:
                    ActivityResItem();
                    ~ActivityResItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Transcoding task output</p>
                     * @return TranscodeTask <p>Transcoding task output</p>
                     * 
                     */
                    MediaProcessTaskTranscodeResult GetTranscodeTask() const;

                    /**
                     * 设置<p>Transcoding task output</p>
                     * @param _transcodeTask <p>Transcoding task output</p>
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
                     * 获取<p>Output of rotating image tasks</p>
                     * @return AnimatedGraphicTask <p>Output of rotating image tasks</p>
                     * 
                     */
                    MediaProcessTaskAnimatedGraphicResult GetAnimatedGraphicTask() const;

                    /**
                     * 设置<p>Output of rotating image tasks</p>
                     * @param _animatedGraphicTask <p>Output of rotating image tasks</p>
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
                     * 获取<p>Time point screenshot task output</p>
                     * @return SnapshotByTimeOffsetTask <p>Time point screenshot task output</p>
                     * 
                     */
                    MediaProcessTaskSnapshotByTimeOffsetResult GetSnapshotByTimeOffsetTask() const;

                    /**
                     * 设置<p>Time point screenshot task output</p>
                     * @param _snapshotByTimeOffsetTask <p>Time point screenshot task output</p>
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
                     * 获取<p>Output of sampling screenshot task</p>
                     * @return SampleSnapshotTask <p>Output of sampling screenshot task</p>
                     * 
                     */
                    MediaProcessTaskSampleSnapshotResult GetSampleSnapshotTask() const;

                    /**
                     * 设置<p>Output of sampling screenshot task</p>
                     * @param _sampleSnapshotTask <p>Output of sampling screenshot task</p>
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
                     * 获取<p>Image sprite output</p>
                     * @return ImageSpriteTask <p>Image sprite output</p>
                     * 
                     */
                    MediaProcessTaskImageSpriteResult GetImageSpriteTask() const;

                    /**
                     * 设置<p>Image sprite output</p>
                     * @param _imageSpriteTask <p>Image sprite output</p>
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
                     * 获取<p>Adaptive bitrate streaming task output</p>
                     * @return AdaptiveDynamicStreamingTask <p>Adaptive bitrate streaming task output</p>
                     * 
                     */
                    MediaProcessTaskAdaptiveDynamicStreamingResult GetAdaptiveDynamicStreamingTask() const;

                    /**
                     * 设置<p>Adaptive bitrate streaming task output</p>
                     * @param _adaptiveDynamicStreamingTask <p>Adaptive bitrate streaming task output</p>
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
                     * 获取<p>Identification task output</p>
                     * @return RecognitionTask <p>Identification task output</p>
                     * 
                     */
                    ScheduleRecognitionTaskResult GetRecognitionTask() const;

                    /**
                     * 设置<p>Identification task output</p>
                     * @param _recognitionTask <p>Identification task output</p>
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
                     * 获取<p>Review task output</p>
                     * @return ReviewTask <p>Review task output</p>
                     * 
                     */
                    ScheduleReviewTaskResult GetReviewTask() const;

                    /**
                     * 设置<p>Review task output</p>
                     * @param _reviewTask <p>Review task output</p>
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
                     * 获取<p>Analysis task output</p>
                     * @return AnalysisTask <p>Analysis task output</p>
                     * 
                     */
                    ScheduleAnalysisTaskResult GetAnalysisTask() const;

                    /**
                     * 设置<p>Analysis task output</p>
                     * @param _analysisTask <p>Analysis task output</p>
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
                     * 获取<p>Media quality inspection task output</p>
                     * @return QualityControlTask <p>Media quality inspection task output</p>
                     * 
                     */
                    ScheduleQualityControlTaskResult GetQualityControlTask() const;

                    /**
                     * 设置<p>Media quality inspection task output</p>
                     * @param _qualityControlTask <p>Media quality inspection task output</p>
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
                     * 获取<p>Conditional judgment task output</p>
                     * @return ExecRuleTask <p>Conditional judgment task output</p>
                     * 
                     */
                    ScheduleExecRuleTaskResult GetExecRuleTask() const;

                    /**
                     * 设置<p>Conditional judgment task output</p>
                     * @param _execRuleTask <p>Conditional judgment task output</p>
                     * 
                     */
                    void SetExecRuleTask(const ScheduleExecRuleTaskResult& _execRuleTask);

                    /**
                     * 判断参数 ExecRuleTask 是否已赋值
                     * @return ExecRuleTask 是否已赋值
                     * 
                     */
                    bool ExecRuleTaskHasBeenSet() const;

                    /**
                     * 获取<p>Smart subtitle task output</p>
                     * @return SmartSubtitlesTask <p>Smart subtitle task output</p>
                     * 
                     */
                    ScheduleSmartSubtitleTaskResult GetSmartSubtitlesTask() const;

                    /**
                     * 设置<p>Smart subtitle task output</p>
                     * @param _smartSubtitlesTask <p>Smart subtitle task output</p>
                     * 
                     */
                    void SetSmartSubtitlesTask(const ScheduleSmartSubtitleTaskResult& _smartSubtitlesTask);

                    /**
                     * 判断参数 SmartSubtitlesTask 是否已赋值
                     * @return SmartSubtitlesTask 是否已赋值
                     * 
                     */
                    bool SmartSubtitlesTaskHasBeenSet() const;

                    /**
                     * 获取<p>Output of the intelligent erasure task</p>
                     * @return SmartEraseTask <p>Output of the intelligent erasure task</p>
                     * 
                     */
                    SmartEraseTaskResult GetSmartEraseTask() const;

                    /**
                     * 设置<p>Output of the intelligent erasure task</p>
                     * @param _smartEraseTask <p>Output of the intelligent erasure task</p>
                     * 
                     */
                    void SetSmartEraseTask(const SmartEraseTaskResult& _smartEraseTask);

                    /**
                     * 判断参数 SmartEraseTask 是否已赋值
                     * @return SmartEraseTask 是否已赋值
                     * 
                     */
                    bool SmartEraseTaskHasBeenSet() const;

                    /**
                     * 获取<p>AI dubbing task output.</p>
                     * @return AIDubbingTask <p>AI dubbing task output.</p>
                     * 
                     */
                    AIDubbingTaskResult GetAIDubbingTask() const;

                    /**
                     * 设置<p>AI dubbing task output.</p>
                     * @param _aIDubbingTask <p>AI dubbing task output.</p>
                     * 
                     */
                    void SetAIDubbingTask(const AIDubbingTaskResult& _aIDubbingTask);

                    /**
                     * 判断参数 AIDubbingTask 是否已赋值
                     * @return AIDubbingTask 是否已赋值
                     * 
                     */
                    bool AIDubbingTaskHasBeenSet() const;

                private:

                    /**
                     * <p>Transcoding task output</p>
                     */
                    MediaProcessTaskTranscodeResult m_transcodeTask;
                    bool m_transcodeTaskHasBeenSet;

                    /**
                     * <p>Output of rotating image tasks</p>
                     */
                    MediaProcessTaskAnimatedGraphicResult m_animatedGraphicTask;
                    bool m_animatedGraphicTaskHasBeenSet;

                    /**
                     * <p>Time point screenshot task output</p>
                     */
                    MediaProcessTaskSnapshotByTimeOffsetResult m_snapshotByTimeOffsetTask;
                    bool m_snapshotByTimeOffsetTaskHasBeenSet;

                    /**
                     * <p>Output of sampling screenshot task</p>
                     */
                    MediaProcessTaskSampleSnapshotResult m_sampleSnapshotTask;
                    bool m_sampleSnapshotTaskHasBeenSet;

                    /**
                     * <p>Image sprite output</p>
                     */
                    MediaProcessTaskImageSpriteResult m_imageSpriteTask;
                    bool m_imageSpriteTaskHasBeenSet;

                    /**
                     * <p>Adaptive bitrate streaming task output</p>
                     */
                    MediaProcessTaskAdaptiveDynamicStreamingResult m_adaptiveDynamicStreamingTask;
                    bool m_adaptiveDynamicStreamingTaskHasBeenSet;

                    /**
                     * <p>Identification task output</p>
                     */
                    ScheduleRecognitionTaskResult m_recognitionTask;
                    bool m_recognitionTaskHasBeenSet;

                    /**
                     * <p>Review task output</p>
                     */
                    ScheduleReviewTaskResult m_reviewTask;
                    bool m_reviewTaskHasBeenSet;

                    /**
                     * <p>Analysis task output</p>
                     */
                    ScheduleAnalysisTaskResult m_analysisTask;
                    bool m_analysisTaskHasBeenSet;

                    /**
                     * <p>Media quality inspection task output</p>
                     */
                    ScheduleQualityControlTaskResult m_qualityControlTask;
                    bool m_qualityControlTaskHasBeenSet;

                    /**
                     * <p>Conditional judgment task output</p>
                     */
                    ScheduleExecRuleTaskResult m_execRuleTask;
                    bool m_execRuleTaskHasBeenSet;

                    /**
                     * <p>Smart subtitle task output</p>
                     */
                    ScheduleSmartSubtitleTaskResult m_smartSubtitlesTask;
                    bool m_smartSubtitlesTaskHasBeenSet;

                    /**
                     * <p>Output of the intelligent erasure task</p>
                     */
                    SmartEraseTaskResult m_smartEraseTask;
                    bool m_smartEraseTaskHasBeenSet;

                    /**
                     * <p>AI dubbing task output.</p>
                     */
                    AIDubbingTaskResult m_aIDubbingTask;
                    bool m_aIDubbingTaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_ACTIVITYRESITEM_H_
