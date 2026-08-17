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


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Orchestration subtask output
                */
                class ActivityResItem : public AbstractModel
                {
                public:
                    ActivityResItem();
                    ~ActivityResItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return TranscodeTask 
                     * 
                     */
                    MediaProcessTaskTranscodeResult GetTranscodeTask() const;

                    /**
                     * 设置
                     * @param _transcodeTask 
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
                     * 获取
                     * @return AnimatedGraphicTask 
                     * 
                     */
                    MediaProcessTaskAnimatedGraphicResult GetAnimatedGraphicTask() const;

                    /**
                     * 设置
                     * @param _animatedGraphicTask 
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
                     * 获取
                     * @return SnapshotByTimeOffsetTask 
                     * 
                     */
                    MediaProcessTaskSnapshotByTimeOffsetResult GetSnapshotByTimeOffsetTask() const;

                    /**
                     * 设置
                     * @param _snapshotByTimeOffsetTask 
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
                     * 获取
                     * @return SampleSnapshotTask 
                     * 
                     */
                    MediaProcessTaskSampleSnapshotResult GetSampleSnapshotTask() const;

                    /**
                     * 设置
                     * @param _sampleSnapshotTask 
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
                     * 获取
                     * @return ImageSpriteTask 
                     * 
                     */
                    MediaProcessTaskImageSpriteResult GetImageSpriteTask() const;

                    /**
                     * 设置
                     * @param _imageSpriteTask 
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
                     * 获取
                     * @return AdaptiveDynamicStreamingTask 
                     * 
                     */
                    MediaProcessTaskAdaptiveDynamicStreamingResult GetAdaptiveDynamicStreamingTask() const;

                    /**
                     * 设置
                     * @param _adaptiveDynamicStreamingTask 
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
                     * 获取
                     * @return RecognitionTask 
                     * 
                     */
                    ScheduleRecognitionTaskResult GetRecognitionTask() const;

                    /**
                     * 设置
                     * @param _recognitionTask 
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
                     * 获取
                     * @return ReviewTask 
                     * 
                     */
                    ScheduleReviewTaskResult GetReviewTask() const;

                    /**
                     * 设置
                     * @param _reviewTask 
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
                     * 获取
                     * @return AnalysisTask 
                     * 
                     */
                    ScheduleAnalysisTaskResult GetAnalysisTask() const;

                    /**
                     * 设置
                     * @param _analysisTask 
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
                     * 获取
                     * @return QualityControlTask 
                     * 
                     */
                    ScheduleQualityControlTaskResult GetQualityControlTask() const;

                    /**
                     * 设置
                     * @param _qualityControlTask 
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
                     * 获取
                     * @return ExecRuleTask 
                     * 
                     */
                    ScheduleExecRuleTaskResult GetExecRuleTask() const;

                    /**
                     * 设置
                     * @param _execRuleTask 
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
                     * 获取
                     * @return SmartSubtitlesTask 
                     * 
                     */
                    ScheduleSmartSubtitleTaskResult GetSmartSubtitlesTask() const;

                    /**
                     * 设置
                     * @param _smartSubtitlesTask 
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
                     * 获取
                     * @return SmartEraseTask 
                     * 
                     */
                    SmartEraseTaskResult GetSmartEraseTask() const;

                    /**
                     * 设置
                     * @param _smartEraseTask 
                     * 
                     */
                    void SetSmartEraseTask(const SmartEraseTaskResult& _smartEraseTask);

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
                    MediaProcessTaskTranscodeResult m_transcodeTask;
                    bool m_transcodeTaskHasBeenSet;

                    /**
                     * 
                     */
                    MediaProcessTaskAnimatedGraphicResult m_animatedGraphicTask;
                    bool m_animatedGraphicTaskHasBeenSet;

                    /**
                     * 
                     */
                    MediaProcessTaskSnapshotByTimeOffsetResult m_snapshotByTimeOffsetTask;
                    bool m_snapshotByTimeOffsetTaskHasBeenSet;

                    /**
                     * 
                     */
                    MediaProcessTaskSampleSnapshotResult m_sampleSnapshotTask;
                    bool m_sampleSnapshotTaskHasBeenSet;

                    /**
                     * 
                     */
                    MediaProcessTaskImageSpriteResult m_imageSpriteTask;
                    bool m_imageSpriteTaskHasBeenSet;

                    /**
                     * 
                     */
                    MediaProcessTaskAdaptiveDynamicStreamingResult m_adaptiveDynamicStreamingTask;
                    bool m_adaptiveDynamicStreamingTaskHasBeenSet;

                    /**
                     * 
                     */
                    ScheduleRecognitionTaskResult m_recognitionTask;
                    bool m_recognitionTaskHasBeenSet;

                    /**
                     * 
                     */
                    ScheduleReviewTaskResult m_reviewTask;
                    bool m_reviewTaskHasBeenSet;

                    /**
                     * 
                     */
                    ScheduleAnalysisTaskResult m_analysisTask;
                    bool m_analysisTaskHasBeenSet;

                    /**
                     * 
                     */
                    ScheduleQualityControlTaskResult m_qualityControlTask;
                    bool m_qualityControlTaskHasBeenSet;

                    /**
                     * 
                     */
                    ScheduleExecRuleTaskResult m_execRuleTask;
                    bool m_execRuleTaskHasBeenSet;

                    /**
                     * 
                     */
                    ScheduleSmartSubtitleTaskResult m_smartSubtitlesTask;
                    bool m_smartSubtitlesTaskHasBeenSet;

                    /**
                     * 
                     */
                    SmartEraseTaskResult m_smartEraseTask;
                    bool m_smartEraseTaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_ACTIVITYRESITEM_H_
