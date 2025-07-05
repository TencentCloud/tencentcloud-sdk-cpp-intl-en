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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAPROCESSTASKINPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAPROCESSTASKINPUT_H_

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


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * The type of media processing task.
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
                     * @return TranscodeTaskSet List of transcoding tasks.
                     * 
                     */
                    std::vector<TranscodeTaskInput> GetTranscodeTaskSet() const;

                    /**
                     * 设置List of transcoding tasks.
                     * @param _transcodeTaskSet List of transcoding tasks.
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
                     * 获取List of animated image screenshot tasks.
                     * @return AnimatedGraphicTaskSet List of animated image screenshot tasks.
                     * 
                     */
                    std::vector<AnimatedGraphicTaskInput> GetAnimatedGraphicTaskSet() const;

                    /**
                     * 设置List of animated image screenshot tasks.
                     * @param _animatedGraphicTaskSet List of animated image screenshot tasks.
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
                     * 获取List of time point screenshot tasks.
                     * @return SnapshotByTimeOffsetTaskSet List of time point screenshot tasks.
                     * 
                     */
                    std::vector<SnapshotByTimeOffsetTaskInput> GetSnapshotByTimeOffsetTaskSet() const;

                    /**
                     * 设置List of time point screenshot tasks.
                     * @param _snapshotByTimeOffsetTaskSet List of time point screenshot tasks.
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
                     * 获取List of sampled screenshot tasks.
                     * @return SampleSnapshotTaskSet List of sampled screenshot tasks.
                     * 
                     */
                    std::vector<SampleSnapshotTaskInput> GetSampleSnapshotTaskSet() const;

                    /**
                     * 设置List of sampled screenshot tasks.
                     * @param _sampleSnapshotTaskSet List of sampled screenshot tasks.
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
                     * 获取List of image sprite screenshot tasks.
                     * @return ImageSpriteTaskSet List of image sprite screenshot tasks.
                     * 
                     */
                    std::vector<ImageSpriteTaskInput> GetImageSpriteTaskSet() const;

                    /**
                     * 设置List of image sprite screenshot tasks.
                     * @param _imageSpriteTaskSet List of image sprite screenshot tasks.
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
                     * 获取List of adaptive bitrate streaming tasks.
                     * @return AdaptiveDynamicStreamingTaskSet List of adaptive bitrate streaming tasks.
                     * 
                     */
                    std::vector<AdaptiveDynamicStreamingTaskInput> GetAdaptiveDynamicStreamingTaskSet() const;

                    /**
                     * 设置List of adaptive bitrate streaming tasks.
                     * @param _adaptiveDynamicStreamingTaskSet List of adaptive bitrate streaming tasks.
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
                     */
                    std::vector<TranscodeTaskInput> m_transcodeTaskSet;
                    bool m_transcodeTaskSetHasBeenSet;

                    /**
                     * List of animated image screenshot tasks.
                     */
                    std::vector<AnimatedGraphicTaskInput> m_animatedGraphicTaskSet;
                    bool m_animatedGraphicTaskSetHasBeenSet;

                    /**
                     * List of time point screenshot tasks.
                     */
                    std::vector<SnapshotByTimeOffsetTaskInput> m_snapshotByTimeOffsetTaskSet;
                    bool m_snapshotByTimeOffsetTaskSetHasBeenSet;

                    /**
                     * List of sampled screenshot tasks.
                     */
                    std::vector<SampleSnapshotTaskInput> m_sampleSnapshotTaskSet;
                    bool m_sampleSnapshotTaskSetHasBeenSet;

                    /**
                     * List of image sprite screenshot tasks.
                     */
                    std::vector<ImageSpriteTaskInput> m_imageSpriteTaskSet;
                    bool m_imageSpriteTaskSetHasBeenSet;

                    /**
                     * List of adaptive bitrate streaming tasks.
                     */
                    std::vector<AdaptiveDynamicStreamingTaskInput> m_adaptiveDynamicStreamingTaskSet;
                    bool m_adaptiveDynamicStreamingTaskSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAPROCESSTASKINPUT_H_
