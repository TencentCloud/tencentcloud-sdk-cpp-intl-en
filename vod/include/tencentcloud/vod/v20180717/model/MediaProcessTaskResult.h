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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAPROCESSTASKRESULT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAPROCESSTASKRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaProcessTaskTranscodeResult.h>
#include <tencentcloud/vod/v20180717/model/MediaProcessTaskAnimatedGraphicResult.h>
#include <tencentcloud/vod/v20180717/model/MediaProcessTaskSnapshotByTimeOffsetResult.h>
#include <tencentcloud/vod/v20180717/model/MediaProcessTaskSampleSnapshotResult.h>
#include <tencentcloud/vod/v20180717/model/MediaProcessTaskImageSpriteResult.h>
#include <tencentcloud/vod/v20180717/model/MediaProcessTaskCoverBySnapshotResult.h>
#include <tencentcloud/vod/v20180717/model/MediaProcessTaskAdaptiveDynamicStreamingResult.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Query result type of task
                */
                class MediaProcessTaskResult : public AbstractModel
                {
                public:
                    MediaProcessTaskResult();
                    ~MediaProcessTaskResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task type. Valid values:
<li>Transcode: transcoding</li>
<li>AnimatedGraphics: animated image generating</li>
<li>SnapshotByTimeOffset: time point screencapturing</li>
<li>SampleSnapshot: sampled screencapturing</li>
<li>ImageSprites: image sprite generating</li>
<li>CoverBySnapshot: Screencapturing for cover image</li>
<li>AdaptiveDynamicStreaming: adaptive bitrate streaming</li>
                     * @return Type Task type. Valid values:
<li>Transcode: transcoding</li>
<li>AnimatedGraphics: animated image generating</li>
<li>SnapshotByTimeOffset: time point screencapturing</li>
<li>SampleSnapshot: sampled screencapturing</li>
<li>ImageSprites: image sprite generating</li>
<li>CoverBySnapshot: Screencapturing for cover image</li>
<li>AdaptiveDynamicStreaming: adaptive bitrate streaming</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Task type. Valid values:
<li>Transcode: transcoding</li>
<li>AnimatedGraphics: animated image generating</li>
<li>SnapshotByTimeOffset: time point screencapturing</li>
<li>SampleSnapshot: sampled screencapturing</li>
<li>ImageSprites: image sprite generating</li>
<li>CoverBySnapshot: Screencapturing for cover image</li>
<li>AdaptiveDynamicStreaming: adaptive bitrate streaming</li>
                     * @param _type Task type. Valid values:
<li>Transcode: transcoding</li>
<li>AnimatedGraphics: animated image generating</li>
<li>SnapshotByTimeOffset: time point screencapturing</li>
<li>SampleSnapshot: sampled screencapturing</li>
<li>ImageSprites: image sprite generating</li>
<li>CoverBySnapshot: Screencapturing for cover image</li>
<li>AdaptiveDynamicStreaming: adaptive bitrate streaming</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Query result of transcoding task, which is valid when task type is `Transcode`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TranscodeTask Query result of transcoding task, which is valid when task type is `Transcode`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MediaProcessTaskTranscodeResult GetTranscodeTask() const;

                    /**
                     * 设置Query result of transcoding task, which is valid when task type is `Transcode`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _transcodeTask Query result of transcoding task, which is valid when task type is `Transcode`.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Query result of animated image generating task, which is valid when task type is `AnimatedGraphics`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AnimatedGraphicTask Query result of animated image generating task, which is valid when task type is `AnimatedGraphics`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MediaProcessTaskAnimatedGraphicResult GetAnimatedGraphicTask() const;

                    /**
                     * 设置Query result of animated image generating task, which is valid when task type is `AnimatedGraphics`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _animatedGraphicTask Query result of animated image generating task, which is valid when task type is `AnimatedGraphics`.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Query result of time point screencapturing task, which is valid when task type is `SnapshotByTimeOffset`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SnapshotByTimeOffsetTask Query result of time point screencapturing task, which is valid when task type is `SnapshotByTimeOffset`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MediaProcessTaskSnapshotByTimeOffsetResult GetSnapshotByTimeOffsetTask() const;

                    /**
                     * 设置Query result of time point screencapturing task, which is valid when task type is `SnapshotByTimeOffset`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _snapshotByTimeOffsetTask Query result of time point screencapturing task, which is valid when task type is `SnapshotByTimeOffset`.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Query result of sampled screencapturing task, which is valid when task type is `SampleSnapshot`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SampleSnapshotTask Query result of sampled screencapturing task, which is valid when task type is `SampleSnapshot`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MediaProcessTaskSampleSnapshotResult GetSampleSnapshotTask() const;

                    /**
                     * 设置Query result of sampled screencapturing task, which is valid when task type is `SampleSnapshot`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _sampleSnapshotTask Query result of sampled screencapturing task, which is valid when task type is `SampleSnapshot`.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Query result of image sprite generating task, which is valid when task type is `ImageSprite`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ImageSpriteTask Query result of image sprite generating task, which is valid when task type is `ImageSprite`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MediaProcessTaskImageSpriteResult GetImageSpriteTask() const;

                    /**
                     * 设置Query result of image sprite generating task, which is valid when task type is `ImageSprite`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _imageSpriteTask Query result of image sprite generating task, which is valid when task type is `ImageSprite`.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取Query result of cover generating task, which is valid if task type is `CoverBySnapshot`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CoverBySnapshotTask Query result of cover generating task, which is valid if task type is `CoverBySnapshot`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MediaProcessTaskCoverBySnapshotResult GetCoverBySnapshotTask() const;

                    /**
                     * 设置Query result of cover generating task, which is valid if task type is `CoverBySnapshot`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _coverBySnapshotTask Query result of cover generating task, which is valid if task type is `CoverBySnapshot`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCoverBySnapshotTask(const MediaProcessTaskCoverBySnapshotResult& _coverBySnapshotTask);

                    /**
                     * 判断参数 CoverBySnapshotTask 是否已赋值
                     * @return CoverBySnapshotTask 是否已赋值
                     * 
                     */
                    bool CoverBySnapshotTaskHasBeenSet() const;

                    /**
                     * 获取Query result of adaptive bitrate streaming, which is valid if task type is `AdaptiveDynamicStreaming`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AdaptiveDynamicStreamingTask Query result of adaptive bitrate streaming, which is valid if task type is `AdaptiveDynamicStreaming`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MediaProcessTaskAdaptiveDynamicStreamingResult GetAdaptiveDynamicStreamingTask() const;

                    /**
                     * 设置Query result of adaptive bitrate streaming, which is valid if task type is `AdaptiveDynamicStreaming`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _adaptiveDynamicStreamingTask Query result of adaptive bitrate streaming, which is valid if task type is `AdaptiveDynamicStreaming`.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAdaptiveDynamicStreamingTask(const MediaProcessTaskAdaptiveDynamicStreamingResult& _adaptiveDynamicStreamingTask);

                    /**
                     * 判断参数 AdaptiveDynamicStreamingTask 是否已赋值
                     * @return AdaptiveDynamicStreamingTask 是否已赋值
                     * 
                     */
                    bool AdaptiveDynamicStreamingTaskHasBeenSet() const;

                private:

                    /**
                     * Task type. Valid values:
<li>Transcode: transcoding</li>
<li>AnimatedGraphics: animated image generating</li>
<li>SnapshotByTimeOffset: time point screencapturing</li>
<li>SampleSnapshot: sampled screencapturing</li>
<li>ImageSprites: image sprite generating</li>
<li>CoverBySnapshot: Screencapturing for cover image</li>
<li>AdaptiveDynamicStreaming: adaptive bitrate streaming</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Query result of transcoding task, which is valid when task type is `Transcode`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    MediaProcessTaskTranscodeResult m_transcodeTask;
                    bool m_transcodeTaskHasBeenSet;

                    /**
                     * Query result of animated image generating task, which is valid when task type is `AnimatedGraphics`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    MediaProcessTaskAnimatedGraphicResult m_animatedGraphicTask;
                    bool m_animatedGraphicTaskHasBeenSet;

                    /**
                     * Query result of time point screencapturing task, which is valid when task type is `SnapshotByTimeOffset`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    MediaProcessTaskSnapshotByTimeOffsetResult m_snapshotByTimeOffsetTask;
                    bool m_snapshotByTimeOffsetTaskHasBeenSet;

                    /**
                     * Query result of sampled screencapturing task, which is valid when task type is `SampleSnapshot`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    MediaProcessTaskSampleSnapshotResult m_sampleSnapshotTask;
                    bool m_sampleSnapshotTaskHasBeenSet;

                    /**
                     * Query result of image sprite generating task, which is valid when task type is `ImageSprite`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    MediaProcessTaskImageSpriteResult m_imageSpriteTask;
                    bool m_imageSpriteTaskHasBeenSet;

                    /**
                     * Query result of cover generating task, which is valid if task type is `CoverBySnapshot`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    MediaProcessTaskCoverBySnapshotResult m_coverBySnapshotTask;
                    bool m_coverBySnapshotTaskHasBeenSet;

                    /**
                     * Query result of adaptive bitrate streaming, which is valid if task type is `AdaptiveDynamicStreaming`.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    MediaProcessTaskAdaptiveDynamicStreamingResult m_adaptiveDynamicStreamingTask;
                    bool m_adaptiveDynamicStreamingTaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAPROCESSTASKRESULT_H_
