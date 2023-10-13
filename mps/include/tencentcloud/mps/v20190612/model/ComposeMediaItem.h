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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSEMEDIAITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSEMEDIAITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/ComposeVideoItem.h>
#include <tencentcloud/mps/v20190612/model/ComposeAudioItem.h>
#include <tencentcloud/mps/v20190612/model/ComposeImageItem.h>
#include <tencentcloud/mps/v20190612/model/ComposeTransitionItem.h>
#include <tencentcloud/mps/v20190612/model/ComposeSubtitleItem.h>
#include <tencentcloud/mps/v20190612/model/ComposeEmptyItem.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * The element information of a video editing/compositing task.
                */
                class ComposeMediaItem : public AbstractModel
                {
                public:
                    ComposeMediaItem();
                    ~ComposeMediaItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The element type. Valid values:
<li>`Video` </li>
<li>`Audio` </li>
<li>`Image` </li>
<li>`Transition` </li>
<li>`Subtitle` </li>
<li>`Empty` </li>
                     * @return Type The element type. Valid values:
<li>`Video` </li>
<li>`Audio` </li>
<li>`Image` </li>
<li>`Transition` </li>
<li>`Subtitle` </li>
<li>`Empty` </li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置The element type. Valid values:
<li>`Video` </li>
<li>`Audio` </li>
<li>`Image` </li>
<li>`Transition` </li>
<li>`Subtitle` </li>
<li>`Empty` </li>
                     * @param _type The element type. Valid values:
<li>`Video` </li>
<li>`Audio` </li>
<li>`Image` </li>
<li>`Transition` </li>
<li>`Subtitle` </li>
<li>`Empty` </li>
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
                     * 获取The information of the video element, which is valid if `Type` is `Video`.
                     * @return Video The information of the video element, which is valid if `Type` is `Video`.
                     * 
                     */
                    ComposeVideoItem GetVideo() const;

                    /**
                     * 设置The information of the video element, which is valid if `Type` is `Video`.
                     * @param _video The information of the video element, which is valid if `Type` is `Video`.
                     * 
                     */
                    void SetVideo(const ComposeVideoItem& _video);

                    /**
                     * 判断参数 Video 是否已赋值
                     * @return Video 是否已赋值
                     * 
                     */
                    bool VideoHasBeenSet() const;

                    /**
                     * 获取The information of the audio element, which is valid if `Type` is `Audio`.
                     * @return Audio The information of the audio element, which is valid if `Type` is `Audio`.
                     * 
                     */
                    ComposeAudioItem GetAudio() const;

                    /**
                     * 设置The information of the audio element, which is valid if `Type` is `Audio`.
                     * @param _audio The information of the audio element, which is valid if `Type` is `Audio`.
                     * 
                     */
                    void SetAudio(const ComposeAudioItem& _audio);

                    /**
                     * 判断参数 Audio 是否已赋值
                     * @return Audio 是否已赋值
                     * 
                     */
                    bool AudioHasBeenSet() const;

                    /**
                     * 获取The information of the image element, which is valid if `Type` is `Image`.
                     * @return Image The information of the image element, which is valid if `Type` is `Image`.
                     * 
                     */
                    ComposeImageItem GetImage() const;

                    /**
                     * 设置The information of the image element, which is valid if `Type` is `Image`.
                     * @param _image The information of the image element, which is valid if `Type` is `Image`.
                     * 
                     */
                    void SetImage(const ComposeImageItem& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     * 
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取The information of the transition element, which is valid if `Type` is `Transition`.
                     * @return Transition The information of the transition element, which is valid if `Type` is `Transition`.
                     * 
                     */
                    ComposeTransitionItem GetTransition() const;

                    /**
                     * 设置The information of the transition element, which is valid if `Type` is `Transition`.
                     * @param _transition The information of the transition element, which is valid if `Type` is `Transition`.
                     * 
                     */
                    void SetTransition(const ComposeTransitionItem& _transition);

                    /**
                     * 判断参数 Transition 是否已赋值
                     * @return Transition 是否已赋值
                     * 
                     */
                    bool TransitionHasBeenSet() const;

                    /**
                     * 获取The information of the subtitle element, which is valid if `Type` is `Subtitle`.
                     * @return Subtitle The information of the subtitle element, which is valid if `Type` is `Subtitle`.
                     * 
                     */
                    ComposeSubtitleItem GetSubtitle() const;

                    /**
                     * 设置The information of the subtitle element, which is valid if `Type` is `Subtitle`.
                     * @param _subtitle The information of the subtitle element, which is valid if `Type` is `Subtitle`.
                     * 
                     */
                    void SetSubtitle(const ComposeSubtitleItem& _subtitle);

                    /**
                     * 判断参数 Subtitle 是否已赋值
                     * @return Subtitle 是否已赋值
                     * 
                     */
                    bool SubtitleHasBeenSet() const;

                    /**
                     * 获取The information of the empty element, which is valid if `Type` is `Empty`. An empty element is used as a placeholder in the timeline.
                     * @return Empty The information of the empty element, which is valid if `Type` is `Empty`. An empty element is used as a placeholder in the timeline.
                     * 
                     */
                    ComposeEmptyItem GetEmpty() const;

                    /**
                     * 设置The information of the empty element, which is valid if `Type` is `Empty`. An empty element is used as a placeholder in the timeline.
                     * @param _empty The information of the empty element, which is valid if `Type` is `Empty`. An empty element is used as a placeholder in the timeline.
                     * 
                     */
                    void SetEmpty(const ComposeEmptyItem& _empty);

                    /**
                     * 判断参数 Empty 是否已赋值
                     * @return Empty 是否已赋值
                     * 
                     */
                    bool EmptyHasBeenSet() const;

                private:

                    /**
                     * The element type. Valid values:
<li>`Video` </li>
<li>`Audio` </li>
<li>`Image` </li>
<li>`Transition` </li>
<li>`Subtitle` </li>
<li>`Empty` </li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * The information of the video element, which is valid if `Type` is `Video`.
                     */
                    ComposeVideoItem m_video;
                    bool m_videoHasBeenSet;

                    /**
                     * The information of the audio element, which is valid if `Type` is `Audio`.
                     */
                    ComposeAudioItem m_audio;
                    bool m_audioHasBeenSet;

                    /**
                     * The information of the image element, which is valid if `Type` is `Image`.
                     */
                    ComposeImageItem m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * The information of the transition element, which is valid if `Type` is `Transition`.
                     */
                    ComposeTransitionItem m_transition;
                    bool m_transitionHasBeenSet;

                    /**
                     * The information of the subtitle element, which is valid if `Type` is `Subtitle`.
                     */
                    ComposeSubtitleItem m_subtitle;
                    bool m_subtitleHasBeenSet;

                    /**
                     * The information of the empty element, which is valid if `Type` is `Empty`. An empty element is used as a placeholder in the timeline.
                     */
                    ComposeEmptyItem m_empty;
                    bool m_emptyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSEMEDIAITEM_H_
