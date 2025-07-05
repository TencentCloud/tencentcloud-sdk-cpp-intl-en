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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_TRANSITIONOPERATION_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_TRANSITIONOPERATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Transition operation
                */
                class TransitionOperation : public AbstractModel
                {
                public:
                    TransitionOperation();
                    ~TransitionOperation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Transition type, the values u200bu200bare:
<ul>
<li>Image transition operation, used for transition processing between two video clip images:
<ul>
<li>ImageFadeInFadeOut: image fade in and fade out. </li>
<li>BowTieHorizontal: horizontal bow tie. </li>
<li>BowTieVertical: vertical bow tie. </li>
<li>ButterflyWaveScrawler: Shake. </li>
<li>Cannabisleaf: maple leaf. </li>
<li>Circle: Arc retraction. </li>
<li>CircleCrop: Circles gather together. </li>
<li>Circleopen: ellipse gathering. </li>
<li>Crosswarp: Horizontal warping. </li>
<li>Cube: Cube. </li>
<li>DoomScreenTransition: Curtain. </li>
<li>Doorway: Porch. </li>
<li>Dreamy: Wave. </li>
<li>DreamyZoom: Horizontal zoom. </li>
<li>FilmBurn: Fire Burning Cloud. </li>
<li>GlitchMemories: Glitch. </li>
<li>Heart: heart shape. </li>
<li>InvertedPageCurl: Page turning. </li>
<li>Luma: Corrosion. </li>
<li>Mosaic: Nine-square grid. </li>
<li>Pinwheel: Windmill. </li>
<li>PolarFunction: elliptical diffusion. </li>
<li>PolkaDotsCurtain: Arc diffusion. </li>
<li>Radial: radar scanning </li>
<li>RotateScaleFade: up and down. </li>
<li>Squeeze: gather up and down. </li>
<li>Swap: zoom in and switch. </li>
<li>Swirl: spiral. </li>
<li>UndulatingBurnOutSwirl: Water spreading. </li>
<li>Windowblinds: blinds. </li>
<li>WipeDown: Wrap downward. </li>
<li>WipeLeft: Wrap to the left. </li>
<li>WipeRight: Wrap to the right. </li>
<li>WipeUp: Wrap up. </li>
<li>ZoomInCircles: Water ripples. </li>
</ul>
</li>
<li>Audio transition operation, used for transition processing between two audio clips:
<ul>
<li>AudioFadeInFadeOut : The sound fades in and out. </li>
</ul>
</li>
</ul>
                     * @return Type Transition type, the values u200bu200bare:
<ul>
<li>Image transition operation, used for transition processing between two video clip images:
<ul>
<li>ImageFadeInFadeOut: image fade in and fade out. </li>
<li>BowTieHorizontal: horizontal bow tie. </li>
<li>BowTieVertical: vertical bow tie. </li>
<li>ButterflyWaveScrawler: Shake. </li>
<li>Cannabisleaf: maple leaf. </li>
<li>Circle: Arc retraction. </li>
<li>CircleCrop: Circles gather together. </li>
<li>Circleopen: ellipse gathering. </li>
<li>Crosswarp: Horizontal warping. </li>
<li>Cube: Cube. </li>
<li>DoomScreenTransition: Curtain. </li>
<li>Doorway: Porch. </li>
<li>Dreamy: Wave. </li>
<li>DreamyZoom: Horizontal zoom. </li>
<li>FilmBurn: Fire Burning Cloud. </li>
<li>GlitchMemories: Glitch. </li>
<li>Heart: heart shape. </li>
<li>InvertedPageCurl: Page turning. </li>
<li>Luma: Corrosion. </li>
<li>Mosaic: Nine-square grid. </li>
<li>Pinwheel: Windmill. </li>
<li>PolarFunction: elliptical diffusion. </li>
<li>PolkaDotsCurtain: Arc diffusion. </li>
<li>Radial: radar scanning </li>
<li>RotateScaleFade: up and down. </li>
<li>Squeeze: gather up and down. </li>
<li>Swap: zoom in and switch. </li>
<li>Swirl: spiral. </li>
<li>UndulatingBurnOutSwirl: Water spreading. </li>
<li>Windowblinds: blinds. </li>
<li>WipeDown: Wrap downward. </li>
<li>WipeLeft: Wrap to the left. </li>
<li>WipeRight: Wrap to the right. </li>
<li>WipeUp: Wrap up. </li>
<li>ZoomInCircles: Water ripples. </li>
</ul>
</li>
<li>Audio transition operation, used for transition processing between two audio clips:
<ul>
<li>AudioFadeInFadeOut : The sound fades in and out. </li>
</ul>
</li>
</ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Transition type, the values u200bu200bare:
<ul>
<li>Image transition operation, used for transition processing between two video clip images:
<ul>
<li>ImageFadeInFadeOut: image fade in and fade out. </li>
<li>BowTieHorizontal: horizontal bow tie. </li>
<li>BowTieVertical: vertical bow tie. </li>
<li>ButterflyWaveScrawler: Shake. </li>
<li>Cannabisleaf: maple leaf. </li>
<li>Circle: Arc retraction. </li>
<li>CircleCrop: Circles gather together. </li>
<li>Circleopen: ellipse gathering. </li>
<li>Crosswarp: Horizontal warping. </li>
<li>Cube: Cube. </li>
<li>DoomScreenTransition: Curtain. </li>
<li>Doorway: Porch. </li>
<li>Dreamy: Wave. </li>
<li>DreamyZoom: Horizontal zoom. </li>
<li>FilmBurn: Fire Burning Cloud. </li>
<li>GlitchMemories: Glitch. </li>
<li>Heart: heart shape. </li>
<li>InvertedPageCurl: Page turning. </li>
<li>Luma: Corrosion. </li>
<li>Mosaic: Nine-square grid. </li>
<li>Pinwheel: Windmill. </li>
<li>PolarFunction: elliptical diffusion. </li>
<li>PolkaDotsCurtain: Arc diffusion. </li>
<li>Radial: radar scanning </li>
<li>RotateScaleFade: up and down. </li>
<li>Squeeze: gather up and down. </li>
<li>Swap: zoom in and switch. </li>
<li>Swirl: spiral. </li>
<li>UndulatingBurnOutSwirl: Water spreading. </li>
<li>Windowblinds: blinds. </li>
<li>WipeDown: Wrap downward. </li>
<li>WipeLeft: Wrap to the left. </li>
<li>WipeRight: Wrap to the right. </li>
<li>WipeUp: Wrap up. </li>
<li>ZoomInCircles: Water ripples. </li>
</ul>
</li>
<li>Audio transition operation, used for transition processing between two audio clips:
<ul>
<li>AudioFadeInFadeOut : The sound fades in and out. </li>
</ul>
</li>
</ul>
                     * @param _type Transition type, the values u200bu200bare:
<ul>
<li>Image transition operation, used for transition processing between two video clip images:
<ul>
<li>ImageFadeInFadeOut: image fade in and fade out. </li>
<li>BowTieHorizontal: horizontal bow tie. </li>
<li>BowTieVertical: vertical bow tie. </li>
<li>ButterflyWaveScrawler: Shake. </li>
<li>Cannabisleaf: maple leaf. </li>
<li>Circle: Arc retraction. </li>
<li>CircleCrop: Circles gather together. </li>
<li>Circleopen: ellipse gathering. </li>
<li>Crosswarp: Horizontal warping. </li>
<li>Cube: Cube. </li>
<li>DoomScreenTransition: Curtain. </li>
<li>Doorway: Porch. </li>
<li>Dreamy: Wave. </li>
<li>DreamyZoom: Horizontal zoom. </li>
<li>FilmBurn: Fire Burning Cloud. </li>
<li>GlitchMemories: Glitch. </li>
<li>Heart: heart shape. </li>
<li>InvertedPageCurl: Page turning. </li>
<li>Luma: Corrosion. </li>
<li>Mosaic: Nine-square grid. </li>
<li>Pinwheel: Windmill. </li>
<li>PolarFunction: elliptical diffusion. </li>
<li>PolkaDotsCurtain: Arc diffusion. </li>
<li>Radial: radar scanning </li>
<li>RotateScaleFade: up and down. </li>
<li>Squeeze: gather up and down. </li>
<li>Swap: zoom in and switch. </li>
<li>Swirl: spiral. </li>
<li>UndulatingBurnOutSwirl: Water spreading. </li>
<li>Windowblinds: blinds. </li>
<li>WipeDown: Wrap downward. </li>
<li>WipeLeft: Wrap to the left. </li>
<li>WipeRight: Wrap to the right. </li>
<li>WipeUp: Wrap up. </li>
<li>ZoomInCircles: Water ripples. </li>
</ul>
</li>
<li>Audio transition operation, used for transition processing between two audio clips:
<ul>
<li>AudioFadeInFadeOut : The sound fades in and out. </li>
</ul>
</li>
</ul>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * Transition type, the values u200bu200bare:
<ul>
<li>Image transition operation, used for transition processing between two video clip images:
<ul>
<li>ImageFadeInFadeOut: image fade in and fade out. </li>
<li>BowTieHorizontal: horizontal bow tie. </li>
<li>BowTieVertical: vertical bow tie. </li>
<li>ButterflyWaveScrawler: Shake. </li>
<li>Cannabisleaf: maple leaf. </li>
<li>Circle: Arc retraction. </li>
<li>CircleCrop: Circles gather together. </li>
<li>Circleopen: ellipse gathering. </li>
<li>Crosswarp: Horizontal warping. </li>
<li>Cube: Cube. </li>
<li>DoomScreenTransition: Curtain. </li>
<li>Doorway: Porch. </li>
<li>Dreamy: Wave. </li>
<li>DreamyZoom: Horizontal zoom. </li>
<li>FilmBurn: Fire Burning Cloud. </li>
<li>GlitchMemories: Glitch. </li>
<li>Heart: heart shape. </li>
<li>InvertedPageCurl: Page turning. </li>
<li>Luma: Corrosion. </li>
<li>Mosaic: Nine-square grid. </li>
<li>Pinwheel: Windmill. </li>
<li>PolarFunction: elliptical diffusion. </li>
<li>PolkaDotsCurtain: Arc diffusion. </li>
<li>Radial: radar scanning </li>
<li>RotateScaleFade: up and down. </li>
<li>Squeeze: gather up and down. </li>
<li>Swap: zoom in and switch. </li>
<li>Swirl: spiral. </li>
<li>UndulatingBurnOutSwirl: Water spreading. </li>
<li>Windowblinds: blinds. </li>
<li>WipeDown: Wrap downward. </li>
<li>WipeLeft: Wrap to the left. </li>
<li>WipeRight: Wrap to the right. </li>
<li>WipeUp: Wrap up. </li>
<li>ZoomInCircles: Water ripples. </li>
</ul>
</li>
<li>Audio transition operation, used for transition processing between two audio clips:
<ul>
<li>AudioFadeInFadeOut : The sound fades in and out. </li>
</ul>
</li>
</ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_TRANSITIONOPERATION_H_
