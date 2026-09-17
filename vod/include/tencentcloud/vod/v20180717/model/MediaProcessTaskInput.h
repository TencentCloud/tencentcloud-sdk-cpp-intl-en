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
                * 
                */
                class MediaProcessTaskInput : public AbstractModel
                {
                public:
                    MediaProcessTaskInput();
                    ~MediaProcessTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return TranscodeTaskSet 
                     * 
                     */
                    std::vector<TranscodeTaskInput> GetTranscodeTaskSet() const;

                    /**
                     * 设置
                     * @param _transcodeTaskSet 
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
                     * 获取
                     * @return AnimatedGraphicTaskSet 
                     * 
                     */
                    std::vector<AnimatedGraphicTaskInput> GetAnimatedGraphicTaskSet() const;

                    /**
                     * 设置
                     * @param _animatedGraphicTaskSet 
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
                     * 获取
                     * @return SnapshotByTimeOffsetTaskSet 
                     * 
                     */
                    std::vector<SnapshotByTimeOffsetTaskInput> GetSnapshotByTimeOffsetTaskSet() const;

                    /**
                     * 设置
                     * @param _snapshotByTimeOffsetTaskSet 
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
                     * 获取
                     * @return SampleSnapshotTaskSet 
                     * 
                     */
                    std::vector<SampleSnapshotTaskInput> GetSampleSnapshotTaskSet() const;

                    /**
                     * 设置
                     * @param _sampleSnapshotTaskSet 
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
                     * 获取
                     * @return ImageSpriteTaskSet 
                     * 
                     */
                    std::vector<ImageSpriteTaskInput> GetImageSpriteTaskSet() const;

                    /**
                     * 设置
                     * @param _imageSpriteTaskSet 
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
                     * 获取
                     * @return CoverBySnapshotTaskSet 
                     * 
                     */
                    std::vector<CoverBySnapshotTaskInput> GetCoverBySnapshotTaskSet() const;

                    /**
                     * 设置
                     * @param _coverBySnapshotTaskSet 
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
                     * 获取
                     * @return AdaptiveDynamicStreamingTaskSet 
                     * 
                     */
                    std::vector<AdaptiveDynamicStreamingTaskInput> GetAdaptiveDynamicStreamingTaskSet() const;

                    /**
                     * 设置
                     * @param _adaptiveDynamicStreamingTaskSet 
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
                     * 
                     */
                    std::vector<TranscodeTaskInput> m_transcodeTaskSet;
                    bool m_transcodeTaskSetHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<AnimatedGraphicTaskInput> m_animatedGraphicTaskSet;
                    bool m_animatedGraphicTaskSetHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<SnapshotByTimeOffsetTaskInput> m_snapshotByTimeOffsetTaskSet;
                    bool m_snapshotByTimeOffsetTaskSetHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<SampleSnapshotTaskInput> m_sampleSnapshotTaskSet;
                    bool m_sampleSnapshotTaskSetHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<ImageSpriteTaskInput> m_imageSpriteTaskSet;
                    bool m_imageSpriteTaskSetHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<CoverBySnapshotTaskInput> m_coverBySnapshotTaskSet;
                    bool m_coverBySnapshotTaskSetHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<AdaptiveDynamicStreamingTaskInput> m_adaptiveDynamicStreamingTaskSet;
                    bool m_adaptiveDynamicStreamingTaskSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAPROCESSTASKINPUT_H_
