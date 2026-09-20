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
                * Transition
                */
                class TransitionOperation : public AbstractModel
                {
                public:
                    TransitionOperation();
                    ~TransitionOperation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Transition type. Valid values:
<ul>
<li>Image transition operation, used for transition processing between two video clip images:</li>
<ul>
<li>ImageFadeInFadeOut: image fade-in and fade-out. </li>
<li>BowTieHorizontal: horizontal bow. </li>
<li>BowTieVertical: vertical bow. </li>
<li>ButterflyWaveScrawler: shake. </li>
<li>Cannabisleaf: maple leaf. </li>
<li>Circle: retract and release in an arc. </li>
<li>CircleCrop: Ring gather. </li>
<li>Circleopen: ellipse gather. </li>
<li>Crosswarp: horizontal warping. </li>
<li>Cube: cube. </li>
<li>DoomScreenTransition: curtain. </li>
<li>Doorway: Porch. </li>
<li>Dreamy: Wave. </li>
<li>DreamyZoom: horizontal gathering. </li>
<li>FilmBurn: Burning clouds.</li>
<li>GlitchMemories: Jitter. </li>
<li>Heart: heart shape. </li>
<li>InvertedPageCurl: page turning. </li>
<li>Luma: Corrode. </li>
<li>Mosaic: nine-grid. </li>
<li>Pinwheel: windmill. </li>
<li>PolarFunction: elliptic diffusion. </li>
<li>PolkaDotsCurtain: Arc diffusion. </li>
<li>Radial: radar scanning </li>
<li>RotateScaleFade: up-down retraction. </li>
<li>Squeeze: vertical gathering. </li>
<li>Swap: zoom in and switch.</li>
<li>Swirl: spiral. </li>
<li>UndulatingBurnOutSwirl: Water spread. </li>
<li>Windowblinds: window blind. </li>
<li>WipeDown: collapse downward. </li>
<li>WipeLeft: collapse to the left. </li>
<li>WipeRight: Collapse to the right.</li>
<li>WipeUp: collapse upward. </li>
<li>ZoomInCircles: water ripple. </li>
</ul>
</li>
<li>Audio transition operation, used for transition processing between two audio clips:</li>
<ul>
<li>AudioFadeInFadeOut: sound fade-in and fade-out.</li>
</ul>
</li>
</ul>
                     * @return Type Transition type. Valid values:
<ul>
<li>Image transition operation, used for transition processing between two video clip images:</li>
<ul>
<li>ImageFadeInFadeOut: image fade-in and fade-out. </li>
<li>BowTieHorizontal: horizontal bow. </li>
<li>BowTieVertical: vertical bow. </li>
<li>ButterflyWaveScrawler: shake. </li>
<li>Cannabisleaf: maple leaf. </li>
<li>Circle: retract and release in an arc. </li>
<li>CircleCrop: Ring gather. </li>
<li>Circleopen: ellipse gather. </li>
<li>Crosswarp: horizontal warping. </li>
<li>Cube: cube. </li>
<li>DoomScreenTransition: curtain. </li>
<li>Doorway: Porch. </li>
<li>Dreamy: Wave. </li>
<li>DreamyZoom: horizontal gathering. </li>
<li>FilmBurn: Burning clouds.</li>
<li>GlitchMemories: Jitter. </li>
<li>Heart: heart shape. </li>
<li>InvertedPageCurl: page turning. </li>
<li>Luma: Corrode. </li>
<li>Mosaic: nine-grid. </li>
<li>Pinwheel: windmill. </li>
<li>PolarFunction: elliptic diffusion. </li>
<li>PolkaDotsCurtain: Arc diffusion. </li>
<li>Radial: radar scanning </li>
<li>RotateScaleFade: up-down retraction. </li>
<li>Squeeze: vertical gathering. </li>
<li>Swap: zoom in and switch.</li>
<li>Swirl: spiral. </li>
<li>UndulatingBurnOutSwirl: Water spread. </li>
<li>Windowblinds: window blind. </li>
<li>WipeDown: collapse downward. </li>
<li>WipeLeft: collapse to the left. </li>
<li>WipeRight: Collapse to the right.</li>
<li>WipeUp: collapse upward. </li>
<li>ZoomInCircles: water ripple. </li>
</ul>
</li>
<li>Audio transition operation, used for transition processing between two audio clips:</li>
<ul>
<li>AudioFadeInFadeOut: sound fade-in and fade-out.</li>
</ul>
</li>
</ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Transition type. Valid values:
<ul>
<li>Image transition operation, used for transition processing between two video clip images:</li>
<ul>
<li>ImageFadeInFadeOut: image fade-in and fade-out. </li>
<li>BowTieHorizontal: horizontal bow. </li>
<li>BowTieVertical: vertical bow. </li>
<li>ButterflyWaveScrawler: shake. </li>
<li>Cannabisleaf: maple leaf. </li>
<li>Circle: retract and release in an arc. </li>
<li>CircleCrop: Ring gather. </li>
<li>Circleopen: ellipse gather. </li>
<li>Crosswarp: horizontal warping. </li>
<li>Cube: cube. </li>
<li>DoomScreenTransition: curtain. </li>
<li>Doorway: Porch. </li>
<li>Dreamy: Wave. </li>
<li>DreamyZoom: horizontal gathering. </li>
<li>FilmBurn: Burning clouds.</li>
<li>GlitchMemories: Jitter. </li>
<li>Heart: heart shape. </li>
<li>InvertedPageCurl: page turning. </li>
<li>Luma: Corrode. </li>
<li>Mosaic: nine-grid. </li>
<li>Pinwheel: windmill. </li>
<li>PolarFunction: elliptic diffusion. </li>
<li>PolkaDotsCurtain: Arc diffusion. </li>
<li>Radial: radar scanning </li>
<li>RotateScaleFade: up-down retraction. </li>
<li>Squeeze: vertical gathering. </li>
<li>Swap: zoom in and switch.</li>
<li>Swirl: spiral. </li>
<li>UndulatingBurnOutSwirl: Water spread. </li>
<li>Windowblinds: window blind. </li>
<li>WipeDown: collapse downward. </li>
<li>WipeLeft: collapse to the left. </li>
<li>WipeRight: Collapse to the right.</li>
<li>WipeUp: collapse upward. </li>
<li>ZoomInCircles: water ripple. </li>
</ul>
</li>
<li>Audio transition operation, used for transition processing between two audio clips:</li>
<ul>
<li>AudioFadeInFadeOut: sound fade-in and fade-out.</li>
</ul>
</li>
</ul>
                     * @param _type Transition type. Valid values:
<ul>
<li>Image transition operation, used for transition processing between two video clip images:</li>
<ul>
<li>ImageFadeInFadeOut: image fade-in and fade-out. </li>
<li>BowTieHorizontal: horizontal bow. </li>
<li>BowTieVertical: vertical bow. </li>
<li>ButterflyWaveScrawler: shake. </li>
<li>Cannabisleaf: maple leaf. </li>
<li>Circle: retract and release in an arc. </li>
<li>CircleCrop: Ring gather. </li>
<li>Circleopen: ellipse gather. </li>
<li>Crosswarp: horizontal warping. </li>
<li>Cube: cube. </li>
<li>DoomScreenTransition: curtain. </li>
<li>Doorway: Porch. </li>
<li>Dreamy: Wave. </li>
<li>DreamyZoom: horizontal gathering. </li>
<li>FilmBurn: Burning clouds.</li>
<li>GlitchMemories: Jitter. </li>
<li>Heart: heart shape. </li>
<li>InvertedPageCurl: page turning. </li>
<li>Luma: Corrode. </li>
<li>Mosaic: nine-grid. </li>
<li>Pinwheel: windmill. </li>
<li>PolarFunction: elliptic diffusion. </li>
<li>PolkaDotsCurtain: Arc diffusion. </li>
<li>Radial: radar scanning </li>
<li>RotateScaleFade: up-down retraction. </li>
<li>Squeeze: vertical gathering. </li>
<li>Swap: zoom in and switch.</li>
<li>Swirl: spiral. </li>
<li>UndulatingBurnOutSwirl: Water spread. </li>
<li>Windowblinds: window blind. </li>
<li>WipeDown: collapse downward. </li>
<li>WipeLeft: collapse to the left. </li>
<li>WipeRight: Collapse to the right.</li>
<li>WipeUp: collapse upward. </li>
<li>ZoomInCircles: water ripple. </li>
</ul>
</li>
<li>Audio transition operation, used for transition processing between two audio clips:</li>
<ul>
<li>AudioFadeInFadeOut: sound fade-in and fade-out.</li>
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
                     * Transition type. Valid values:
<ul>
<li>Image transition operation, used for transition processing between two video clip images:</li>
<ul>
<li>ImageFadeInFadeOut: image fade-in and fade-out. </li>
<li>BowTieHorizontal: horizontal bow. </li>
<li>BowTieVertical: vertical bow. </li>
<li>ButterflyWaveScrawler: shake. </li>
<li>Cannabisleaf: maple leaf. </li>
<li>Circle: retract and release in an arc. </li>
<li>CircleCrop: Ring gather. </li>
<li>Circleopen: ellipse gather. </li>
<li>Crosswarp: horizontal warping. </li>
<li>Cube: cube. </li>
<li>DoomScreenTransition: curtain. </li>
<li>Doorway: Porch. </li>
<li>Dreamy: Wave. </li>
<li>DreamyZoom: horizontal gathering. </li>
<li>FilmBurn: Burning clouds.</li>
<li>GlitchMemories: Jitter. </li>
<li>Heart: heart shape. </li>
<li>InvertedPageCurl: page turning. </li>
<li>Luma: Corrode. </li>
<li>Mosaic: nine-grid. </li>
<li>Pinwheel: windmill. </li>
<li>PolarFunction: elliptic diffusion. </li>
<li>PolkaDotsCurtain: Arc diffusion. </li>
<li>Radial: radar scanning </li>
<li>RotateScaleFade: up-down retraction. </li>
<li>Squeeze: vertical gathering. </li>
<li>Swap: zoom in and switch.</li>
<li>Swirl: spiral. </li>
<li>UndulatingBurnOutSwirl: Water spread. </li>
<li>Windowblinds: window blind. </li>
<li>WipeDown: collapse downward. </li>
<li>WipeLeft: collapse to the left. </li>
<li>WipeRight: Collapse to the right.</li>
<li>WipeUp: collapse upward. </li>
<li>ZoomInCircles: water ripple. </li>
</ul>
</li>
<li>Audio transition operation, used for transition processing between two audio clips:</li>
<ul>
<li>AudioFadeInFadeOut: sound fade-in and fade-out.</li>
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
