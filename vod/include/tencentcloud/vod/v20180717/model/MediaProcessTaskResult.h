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
                * Task query result type.
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
<li>Transcode: transcode</li>
<li>AnimatedGraphics: animated image</li>
<li>SnapshotByTimeOffset: time point screenshot.</li>
<li>SampleSnapshot: sampled screenshot.</li>
<li>ImageSprites: sprite sheet</li>
<li>CoverBySnapshot: screencapturing for cover image</li>
<li>AdaptiveDynamicStreaming: adaptive bitrate streaming</li>
                     * @return Type Task type. Valid values:
<li>Transcode: transcode</li>
<li>AnimatedGraphics: animated image</li>
<li>SnapshotByTimeOffset: time point screenshot.</li>
<li>SampleSnapshot: sampled screenshot.</li>
<li>ImageSprites: sprite sheet</li>
<li>CoverBySnapshot: screencapturing for cover image</li>
<li>AdaptiveDynamicStreaming: adaptive bitrate streaming</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Task type. Valid values:
<li>Transcode: transcode</li>
<li>AnimatedGraphics: animated image</li>
<li>SnapshotByTimeOffset: time point screenshot.</li>
<li>SampleSnapshot: sampled screenshot.</li>
<li>ImageSprites: sprite sheet</li>
<li>CoverBySnapshot: screencapturing for cover image</li>
<li>AdaptiveDynamicStreaming: adaptive bitrate streaming</li>
                     * @param _type Task type. Valid values:
<li>Transcode: transcode</li>
<li>AnimatedGraphics: animated image</li>
<li>SnapshotByTimeOffset: time point screenshot.</li>
<li>SampleSnapshot: sampled screenshot.</li>
<li>ImageSprites: sprite sheet</li>
<li>CoverBySnapshot: screencapturing for cover image</li>
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
                     * 获取Query result of a video transcoding task. Valid when the task type is Transcode.
                     * @return TranscodeTask Query result of a video transcoding task. Valid when the task type is Transcode.
                     * 
                     */
                    MediaProcessTaskTranscodeResult GetTranscodeTask() const;

                    /**
                     * 设置Query result of a video transcoding task. Valid when the task type is Transcode.
                     * @param _transcodeTask Query result of a video transcoding task. Valid when the task type is Transcode.
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
                     * 获取Query result of a video-to-GIF task. Valid when the task type is AnimatedGraphics.
                     * @return AnimatedGraphicTask Query result of a video-to-GIF task. Valid when the task type is AnimatedGraphics.
                     * 
                     */
                    MediaProcessTaskAnimatedGraphicResult GetAnimatedGraphicTask() const;

                    /**
                     * 设置Query result of a video-to-GIF task. Valid when the task type is AnimatedGraphics.
                     * @param _animatedGraphicTask Query result of a video-to-GIF task. Valid when the task type is AnimatedGraphics.
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
                     * 获取Query result of a video time point screenshot task. Valid when the task type is `SnapshotByTimeOffset`.
                     * @return SnapshotByTimeOffsetTask Query result of a video time point screenshot task. Valid when the task type is `SnapshotByTimeOffset`.
                     * 
                     */
                    MediaProcessTaskSnapshotByTimeOffsetResult GetSnapshotByTimeOffsetTask() const;

                    /**
                     * 设置Query result of a video time point screenshot task. Valid when the task type is `SnapshotByTimeOffset`.
                     * @param _snapshotByTimeOffsetTask Query result of a video time point screenshot task. Valid when the task type is `SnapshotByTimeOffset`.
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
                     * 获取Query result of the video sampling screenshot task. Valid when the task type is `SampleSnapshot`.
                     * @return SampleSnapshotTask Query result of the video sampling screenshot task. Valid when the task type is `SampleSnapshot`.
                     * 
                     */
                    MediaProcessTaskSampleSnapshotResult GetSampleSnapshotTask() const;

                    /**
                     * 设置Query result of the video sampling screenshot task. Valid when the task type is `SampleSnapshot`.
                     * @param _sampleSnapshotTask Query result of the video sampling screenshot task. Valid when the task type is `SampleSnapshot`.
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
                     * 获取Query result of the image sprite task for a video. Valid when the task type is `ImageSprite`.
                     * @return ImageSpriteTask Query result of the image sprite task for a video. Valid when the task type is `ImageSprite`.
                     * 
                     */
                    MediaProcessTaskImageSpriteResult GetImageSpriteTask() const;

                    /**
                     * 设置Query result of the image sprite task for a video. Valid when the task type is `ImageSprite`.
                     * @param _imageSpriteTask Query result of the image sprite task for a video. Valid when the task type is `ImageSprite`.
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
                     * 获取Query result of the video screencapturing for cover image task. Valid when the task type is `CoverBySnapshot`.
                     * @return CoverBySnapshotTask Query result of the video screencapturing for cover image task. Valid when the task type is `CoverBySnapshot`.
                     * 
                     */
                    MediaProcessTaskCoverBySnapshotResult GetCoverBySnapshotTask() const;

                    /**
                     * 设置Query result of the video screencapturing for cover image task. Valid when the task type is `CoverBySnapshot`.
                     * @param _coverBySnapshotTask Query result of the video screencapturing for cover image task. Valid when the task type is `CoverBySnapshot`.
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
                     * 获取Query result of the video to adaptive streaming task. Valid when the task type is AdaptiveDynamicStreaming.
                     * @return AdaptiveDynamicStreamingTask Query result of the video to adaptive streaming task. Valid when the task type is AdaptiveDynamicStreaming.
                     * 
                     */
                    MediaProcessTaskAdaptiveDynamicStreamingResult GetAdaptiveDynamicStreamingTask() const;

                    /**
                     * 设置Query result of the video to adaptive streaming task. Valid when the task type is AdaptiveDynamicStreaming.
                     * @param _adaptiveDynamicStreamingTask Query result of the video to adaptive streaming task. Valid when the task type is AdaptiveDynamicStreaming.
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
<li>Transcode: transcode</li>
<li>AnimatedGraphics: animated image</li>
<li>SnapshotByTimeOffset: time point screenshot.</li>
<li>SampleSnapshot: sampled screenshot.</li>
<li>ImageSprites: sprite sheet</li>
<li>CoverBySnapshot: screencapturing for cover image</li>
<li>AdaptiveDynamicStreaming: adaptive bitrate streaming</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Query result of a video transcoding task. Valid when the task type is Transcode.
                     */
                    MediaProcessTaskTranscodeResult m_transcodeTask;
                    bool m_transcodeTaskHasBeenSet;

                    /**
                     * Query result of a video-to-GIF task. Valid when the task type is AnimatedGraphics.
                     */
                    MediaProcessTaskAnimatedGraphicResult m_animatedGraphicTask;
                    bool m_animatedGraphicTaskHasBeenSet;

                    /**
                     * Query result of a video time point screenshot task. Valid when the task type is `SnapshotByTimeOffset`.
                     */
                    MediaProcessTaskSnapshotByTimeOffsetResult m_snapshotByTimeOffsetTask;
                    bool m_snapshotByTimeOffsetTaskHasBeenSet;

                    /**
                     * Query result of the video sampling screenshot task. Valid when the task type is `SampleSnapshot`.
                     */
                    MediaProcessTaskSampleSnapshotResult m_sampleSnapshotTask;
                    bool m_sampleSnapshotTaskHasBeenSet;

                    /**
                     * Query result of the image sprite task for a video. Valid when the task type is `ImageSprite`.
                     */
                    MediaProcessTaskImageSpriteResult m_imageSpriteTask;
                    bool m_imageSpriteTaskHasBeenSet;

                    /**
                     * Query result of the video screencapturing for cover image task. Valid when the task type is `CoverBySnapshot`.
                     */
                    MediaProcessTaskCoverBySnapshotResult m_coverBySnapshotTask;
                    bool m_coverBySnapshotTaskHasBeenSet;

                    /**
                     * Query result of the video to adaptive streaming task. Valid when the task type is AdaptiveDynamicStreaming.
                     */
                    MediaProcessTaskAdaptiveDynamicStreamingResult m_adaptiveDynamicStreamingTask;
                    bool m_adaptiveDynamicStreamingTaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAPROCESSTASKRESULT_H_
