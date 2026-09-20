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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAPROCESSTASKINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAPROCESSTASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/TranscodeTaskInput.h>
#include <tencentcloud/vod/v20180717/model/AnimatedGraphicTaskInput.h>
#include <tencentcloud/vod/v20180717/model/SnapshotByTimeOffsetTaskInput.h>
#include <tencentcloud/vod/v20180717/model/SampleSnapshotTaskInput.h>
#include <tencentcloud/vod/v20180717/model/ImageSpriteTaskInput.h>
#include <tencentcloud/vod/v20180717/model/CoverBySnapshotTaskInput.h>
#include <tencentcloud/vod/v20180717/model/AdaptiveDynamicStreamingTaskInput.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Video processing task type
                */
                class MediaProcessTaskInput : public AbstractModel
                {
                public:
                    MediaProcessTaskInput();
                    ~MediaProcessTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Video transcoding task list.
                     * @return TranscodeTaskSet Video transcoding task list.
                     * 
                     */
                    std::vector<TranscodeTaskInput> GetTranscodeTaskSet() const;

                    /**
                     * 设置Video transcoding task list.
                     * @param _transcodeTaskSet Video transcoding task list.
                     * 
                     */
                    void SetTranscodeTaskSet(const std::vector<TranscodeTaskInput>& _transcodeTaskSet);

                    /**
                     * 判断参数 TranscodeTaskSet 是否已赋值
                     * @return TranscodeTaskSet 是否已赋值
                     * 
                     */
                    bool TranscodeTaskSetHasBeenSet() const;

                    /**
                     * 获取List of video-to-GIF tasks.
                     * @return AnimatedGraphicTaskSet List of video-to-GIF tasks.
                     * 
                     */
                    std::vector<AnimatedGraphicTaskInput> GetAnimatedGraphicTaskSet() const;

                    /**
                     * 设置List of video-to-GIF tasks.
                     * @param _animatedGraphicTaskSet List of video-to-GIF tasks.
                     * 
                     */
                    void SetAnimatedGraphicTaskSet(const std::vector<AnimatedGraphicTaskInput>& _animatedGraphicTaskSet);

                    /**
                     * 判断参数 AnimatedGraphicTaskSet 是否已赋值
                     * @return AnimatedGraphicTaskSet 是否已赋值
                     * 
                     */
                    bool AnimatedGraphicTaskSetHasBeenSet() const;

                    /**
                     * 获取List of time point screencapturing tasks for videos.
                     * @return SnapshotByTimeOffsetTaskSet List of time point screencapturing tasks for videos.
                     * 
                     */
                    std::vector<SnapshotByTimeOffsetTaskInput> GetSnapshotByTimeOffsetTaskSet() const;

                    /**
                     * 设置List of time point screencapturing tasks for videos.
                     * @param _snapshotByTimeOffsetTaskSet List of time point screencapturing tasks for videos.
                     * 
                     */
                    void SetSnapshotByTimeOffsetTaskSet(const std::vector<SnapshotByTimeOffsetTaskInput>& _snapshotByTimeOffsetTaskSet);

                    /**
                     * 判断参数 SnapshotByTimeOffsetTaskSet 是否已赋值
                     * @return SnapshotByTimeOffsetTaskSet 是否已赋值
                     * 
                     */
                    bool SnapshotByTimeOffsetTaskSetHasBeenSet() const;

                    /**
                     * 获取List of sampled screenshot tasks for videos.
                     * @return SampleSnapshotTaskSet List of sampled screenshot tasks for videos.
                     * 
                     */
                    std::vector<SampleSnapshotTaskInput> GetSampleSnapshotTaskSet() const;

                    /**
                     * 设置List of sampled screenshot tasks for videos.
                     * @param _sampleSnapshotTaskSet List of sampled screenshot tasks for videos.
                     * 
                     */
                    void SetSampleSnapshotTaskSet(const std::vector<SampleSnapshotTaskInput>& _sampleSnapshotTaskSet);

                    /**
                     * 判断参数 SampleSnapshotTaskSet 是否已赋值
                     * @return SampleSnapshotTaskSet 是否已赋值
                     * 
                     */
                    bool SampleSnapshotTaskSetHasBeenSet() const;

                    /**
                     * 获取List of image sprite tasks for videos.
                     * @return ImageSpriteTaskSet List of image sprite tasks for videos.
                     * 
                     */
                    std::vector<ImageSpriteTaskInput> GetImageSpriteTaskSet() const;

                    /**
                     * 设置List of image sprite tasks for videos.
                     * @param _imageSpriteTaskSet List of image sprite tasks for videos.
                     * 
                     */
                    void SetImageSpriteTaskSet(const std::vector<ImageSpriteTaskInput>& _imageSpriteTaskSet);

                    /**
                     * 判断参数 ImageSpriteTaskSet 是否已赋值
                     * @return ImageSpriteTaskSet 是否已赋值
                     * 
                     */
                    bool ImageSpriteTaskSetHasBeenSet() const;

                    /**
                     * 获取Task list of screencapturing for cover image tasks for videos.
                     * @return CoverBySnapshotTaskSet Task list of screencapturing for cover image tasks for videos.
                     * 
                     */
                    std::vector<CoverBySnapshotTaskInput> GetCoverBySnapshotTaskSet() const;

                    /**
                     * 设置Task list of screencapturing for cover image tasks for videos.
                     * @param _coverBySnapshotTaskSet Task list of screencapturing for cover image tasks for videos.
                     * 
                     */
                    void SetCoverBySnapshotTaskSet(const std::vector<CoverBySnapshotTaskInput>& _coverBySnapshotTaskSet);

                    /**
                     * 判断参数 CoverBySnapshotTaskSet 是否已赋值
                     * @return CoverBySnapshotTaskSet 是否已赋值
                     * 
                     */
                    bool CoverBySnapshotTaskSetHasBeenSet() const;

                    /**
                     * 获取List of video to adaptive streaming tasks.
                     * @return AdaptiveDynamicStreamingTaskSet List of video to adaptive streaming tasks.
                     * 
                     */
                    std::vector<AdaptiveDynamicStreamingTaskInput> GetAdaptiveDynamicStreamingTaskSet() const;

                    /**
                     * 设置List of video to adaptive streaming tasks.
                     * @param _adaptiveDynamicStreamingTaskSet List of video to adaptive streaming tasks.
                     * 
                     */
                    void SetAdaptiveDynamicStreamingTaskSet(const std::vector<AdaptiveDynamicStreamingTaskInput>& _adaptiveDynamicStreamingTaskSet);

                    /**
                     * 判断参数 AdaptiveDynamicStreamingTaskSet 是否已赋值
                     * @return AdaptiveDynamicStreamingTaskSet 是否已赋值
                     * 
                     */
                    bool AdaptiveDynamicStreamingTaskSetHasBeenSet() const;

                private:

                    /**
                     * Video transcoding task list.
                     */
                    std::vector<TranscodeTaskInput> m_transcodeTaskSet;
                    bool m_transcodeTaskSetHasBeenSet;

                    /**
                     * List of video-to-GIF tasks.
                     */
                    std::vector<AnimatedGraphicTaskInput> m_animatedGraphicTaskSet;
                    bool m_animatedGraphicTaskSetHasBeenSet;

                    /**
                     * List of time point screencapturing tasks for videos.
                     */
                    std::vector<SnapshotByTimeOffsetTaskInput> m_snapshotByTimeOffsetTaskSet;
                    bool m_snapshotByTimeOffsetTaskSetHasBeenSet;

                    /**
                     * List of sampled screenshot tasks for videos.
                     */
                    std::vector<SampleSnapshotTaskInput> m_sampleSnapshotTaskSet;
                    bool m_sampleSnapshotTaskSetHasBeenSet;

                    /**
                     * List of image sprite tasks for videos.
                     */
                    std::vector<ImageSpriteTaskInput> m_imageSpriteTaskSet;
                    bool m_imageSpriteTaskSetHasBeenSet;

                    /**
                     * Task list of screencapturing for cover image tasks for videos.
                     */
                    std::vector<CoverBySnapshotTaskInput> m_coverBySnapshotTaskSet;
                    bool m_coverBySnapshotTaskSetHasBeenSet;

                    /**
                     * List of video to adaptive streaming tasks.
                     */
                    std::vector<AdaptiveDynamicStreamingTaskInput> m_adaptiveDynamicStreamingTaskSet;
                    bool m_adaptiveDynamicStreamingTaskSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAPROCESSTASKINPUT_H_
