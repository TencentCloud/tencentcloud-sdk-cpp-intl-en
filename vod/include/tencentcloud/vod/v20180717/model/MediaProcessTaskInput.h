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
                     * 获取List of transcoding tasks.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TranscodeTaskSet List of transcoding tasks.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<TranscodeTaskInput> GetTranscodeTaskSet() const;

                    /**
                     * 设置List of transcoding tasks.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _transcodeTaskSet List of transcoding tasks.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取List of animated image generating tasks.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AnimatedGraphicTaskSet List of animated image generating tasks.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AnimatedGraphicTaskInput> GetAnimatedGraphicTaskSet() const;

                    /**
                     * 设置List of animated image generating tasks.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _animatedGraphicTaskSet List of animated image generating tasks.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取List of time point screencapturing tasks.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SnapshotByTimeOffsetTaskSet List of time point screencapturing tasks.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<SnapshotByTimeOffsetTaskInput> GetSnapshotByTimeOffsetTaskSet() const;

                    /**
                     * 设置List of time point screencapturing tasks.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _snapshotByTimeOffsetTaskSet List of time point screencapturing tasks.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取List of sampled screencapturing tasks.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SampleSnapshotTaskSet List of sampled screencapturing tasks.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<SampleSnapshotTaskInput> GetSampleSnapshotTaskSet() const;

                    /**
                     * 设置List of sampled screencapturing tasks.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _sampleSnapshotTaskSet List of sampled screencapturing tasks.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取List of image sprite generating tasks.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ImageSpriteTaskSet List of image sprite generating tasks.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ImageSpriteTaskInput> GetImageSpriteTaskSet() const;

                    /**
                     * 设置List of image sprite generating tasks.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _imageSpriteTaskSet List of image sprite generating tasks.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取List of cover generating tasks.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CoverBySnapshotTaskSet List of cover generating tasks.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<CoverBySnapshotTaskInput> GetCoverBySnapshotTaskSet() const;

                    /**
                     * 设置List of cover generating tasks.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _coverBySnapshotTaskSet List of cover generating tasks.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取List of adaptive bitrate streaming tasks.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AdaptiveDynamicStreamingTaskSet List of adaptive bitrate streaming tasks.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AdaptiveDynamicStreamingTaskInput> GetAdaptiveDynamicStreamingTaskSet() const;

                    /**
                     * 设置List of adaptive bitrate streaming tasks.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _adaptiveDynamicStreamingTaskSet List of adaptive bitrate streaming tasks.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * List of transcoding tasks.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<TranscodeTaskInput> m_transcodeTaskSet;
                    bool m_transcodeTaskSetHasBeenSet;

                    /**
                     * List of animated image generating tasks.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AnimatedGraphicTaskInput> m_animatedGraphicTaskSet;
                    bool m_animatedGraphicTaskSetHasBeenSet;

                    /**
                     * List of time point screencapturing tasks.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<SnapshotByTimeOffsetTaskInput> m_snapshotByTimeOffsetTaskSet;
                    bool m_snapshotByTimeOffsetTaskSetHasBeenSet;

                    /**
                     * List of sampled screencapturing tasks.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<SampleSnapshotTaskInput> m_sampleSnapshotTaskSet;
                    bool m_sampleSnapshotTaskSetHasBeenSet;

                    /**
                     * List of image sprite generating tasks.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ImageSpriteTaskInput> m_imageSpriteTaskSet;
                    bool m_imageSpriteTaskSetHasBeenSet;

                    /**
                     * List of cover generating tasks.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<CoverBySnapshotTaskInput> m_coverBySnapshotTaskSet;
                    bool m_coverBySnapshotTaskSetHasBeenSet;

                    /**
                     * List of adaptive bitrate streaming tasks.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AdaptiveDynamicStreamingTaskInput> m_adaptiveDynamicStreamingTaskSet;
                    bool m_adaptiveDynamicStreamingTaskSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAPROCESSTASKINPUT_H_
