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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSEMEDIACONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSEMEDIACONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/ComposeTargetInfo.h>
#include <tencentcloud/mps/v20190612/model/ComposeCanvas.h>
#include <tencentcloud/mps/v20190612/model/ComposeStyles.h>
#include <tencentcloud/mps/v20190612/model/ComposeMediaTrack.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * The information of a video editing/compositing task.

The figure below outlines the relationships among tracks, elements, and the timeline.

![image](https://ie-mps-1258344699.cos.ap-nanjing.tencentcos.cn/common/cloud/EditMedia-Compose-Track-Item-en.png)
                */
                class ComposeMediaConfig : public AbstractModel
                {
                public:
                    ComposeMediaConfig();
                    ~ComposeMediaConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The information of the output video.
                     * @return TargetInfo The information of the output video.
                     * 
                     */
                    ComposeTargetInfo GetTargetInfo() const;

                    /**
                     * 设置The information of the output video.
                     * @param _targetInfo The information of the output video.
                     * 
                     */
                    void SetTargetInfo(const ComposeTargetInfo& _targetInfo);

                    /**
                     * 判断参数 TargetInfo 是否已赋值
                     * @return TargetInfo 是否已赋值
                     * 
                     */
                    bool TargetInfoHasBeenSet() const;

                    /**
                     * 获取The canvas information of the output video.
                     * @return Canvas The canvas information of the output video.
                     * 
                     */
                    ComposeCanvas GetCanvas() const;

                    /**
                     * 设置The canvas information of the output video.
                     * @param _canvas The canvas information of the output video.
                     * 
                     */
                    void SetCanvas(const ComposeCanvas& _canvas);

                    /**
                     * 判断参数 Canvas 是否已赋值
                     * @return Canvas 是否已赋值
                     * 
                     */
                    bool CanvasHasBeenSet() const;

                    /**
                     * 获取The global styles. This parameter is used together with `Tracks` to specify styles, such as the subtitle style.
                     * @return Styles The global styles. This parameter is used together with `Tracks` to specify styles, such as the subtitle style.
                     * 
                     */
                    std::vector<ComposeStyles> GetStyles() const;

                    /**
                     * 设置The global styles. This parameter is used together with `Tracks` to specify styles, such as the subtitle style.
                     * @param _styles The global styles. This parameter is used together with `Tracks` to specify styles, such as the subtitle style.
                     * 
                     */
                    void SetStyles(const std::vector<ComposeStyles>& _styles);

                    /**
                     * 判断参数 Styles 是否已赋值
                     * @return Styles 是否已赋值
                     * 
                     */
                    bool StylesHasBeenSet() const;

                    /**
                     * 获取The information of media tracks (consisting of video, audio, image, and text elements) used to composite the video. About tracks and the timeline:
<ul><li>The timeline of a track is the same as the timeline of the output video. </li><li>The elements of different tracks are overlaid at the same time point in the timeline.</li><ul><li>Video, image, and text elements are overlaid according to their track number, with the first track on top. </li><li>Audio elements are mixed. </li></ul></ul>Note: The different elements of the same track cannot be overlaid (except subtitles).
                     * @return Tracks The information of media tracks (consisting of video, audio, image, and text elements) used to composite the video. About tracks and the timeline:
<ul><li>The timeline of a track is the same as the timeline of the output video. </li><li>The elements of different tracks are overlaid at the same time point in the timeline.</li><ul><li>Video, image, and text elements are overlaid according to their track number, with the first track on top. </li><li>Audio elements are mixed. </li></ul></ul>Note: The different elements of the same track cannot be overlaid (except subtitles).
                     * 
                     */
                    std::vector<ComposeMediaTrack> GetTracks() const;

                    /**
                     * 设置The information of media tracks (consisting of video, audio, image, and text elements) used to composite the video. About tracks and the timeline:
<ul><li>The timeline of a track is the same as the timeline of the output video. </li><li>The elements of different tracks are overlaid at the same time point in the timeline.</li><ul><li>Video, image, and text elements are overlaid according to their track number, with the first track on top. </li><li>Audio elements are mixed. </li></ul></ul>Note: The different elements of the same track cannot be overlaid (except subtitles).
                     * @param _tracks The information of media tracks (consisting of video, audio, image, and text elements) used to composite the video. About tracks and the timeline:
<ul><li>The timeline of a track is the same as the timeline of the output video. </li><li>The elements of different tracks are overlaid at the same time point in the timeline.</li><ul><li>Video, image, and text elements are overlaid according to their track number, with the first track on top. </li><li>Audio elements are mixed. </li></ul></ul>Note: The different elements of the same track cannot be overlaid (except subtitles).
                     * 
                     */
                    void SetTracks(const std::vector<ComposeMediaTrack>& _tracks);

                    /**
                     * 判断参数 Tracks 是否已赋值
                     * @return Tracks 是否已赋值
                     * 
                     */
                    bool TracksHasBeenSet() const;

                private:

                    /**
                     * The information of the output video.
                     */
                    ComposeTargetInfo m_targetInfo;
                    bool m_targetInfoHasBeenSet;

                    /**
                     * The canvas information of the output video.
                     */
                    ComposeCanvas m_canvas;
                    bool m_canvasHasBeenSet;

                    /**
                     * The global styles. This parameter is used together with `Tracks` to specify styles, such as the subtitle style.
                     */
                    std::vector<ComposeStyles> m_styles;
                    bool m_stylesHasBeenSet;

                    /**
                     * The information of media tracks (consisting of video, audio, image, and text elements) used to composite the video. About tracks and the timeline:
<ul><li>The timeline of a track is the same as the timeline of the output video. </li><li>The elements of different tracks are overlaid at the same time point in the timeline.</li><ul><li>Video, image, and text elements are overlaid according to their track number, with the first track on top. </li><li>Audio elements are mixed. </li></ul></ul>Note: The different elements of the same track cannot be overlaid (except subtitles).
                     */
                    std::vector<ComposeMediaTrack> m_tracks;
                    bool m_tracksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSEMEDIACONFIG_H_
