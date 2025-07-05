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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSETRANSITIONOPERATION_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSETRANSITIONOPERATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * The transition information of a video editing/compositing task.
                */
                class ComposeTransitionOperation : public AbstractModel
                {
                public:
                    ComposeTransitionOperation();
                    ~ComposeTransitionOperation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The transition type.

The image transition, which connects two video segments.
<li>`ImageFadeInFadeOut` </li>
u200c<li>`BowTieHorizontal` </li>
u200c<li>`BowTieVertical` </li>
u200c<li>`ButterflyWaveScrawler` </li>
<li>`Cannabisleaf` </li>
<li>`Circle` </li>
<li>`CircleCrop` </li>
u200c<li>`Circleopen` </li>
<li>`Crosswarp` </li>
<li>`Cube` </li>
<li>`DoomScreenTransition` </li>
<li>`Doorway` </li>
<li>`Dreamy` </li>
<li>`DreamyZoom` </li>
<li>`FilmBurn` </li>
<li>`GlitchMemories` </li>
<li>`Heart` </li>
<li>`InvertedPageCurl` </li>
<li>`Luma` </li>
<li>`Mosaic` </li>
<li>`Pinwheel` </li>
<li>`PolarFunction` </li>
<li>`PolkaDotsCurtain` </li>
<li>`Radial` </li>
<li>`RotateScaleFade` </li>
<li>`Squeeze` </li>
<li>`Swap` </li>
<li>`Swirl` </li>
<li>`UndulatingBurnOutSwirl` </li>
<li>`Windowblinds` </li>
<li>`WipeDown` </li>
<li>`WipeLeft` </li>
<li>`WipeRight` </li>
<li>`WipeUp` </li>
<li>`ZoomInCircles` </li> 
The audio transition, which connects two audio segments.
<li>`AudioFadeInFadeOut` </li>
                     * @return Type The transition type.

The image transition, which connects two video segments.
<li>`ImageFadeInFadeOut` </li>
u200c<li>`BowTieHorizontal` </li>
u200c<li>`BowTieVertical` </li>
u200c<li>`ButterflyWaveScrawler` </li>
<li>`Cannabisleaf` </li>
<li>`Circle` </li>
<li>`CircleCrop` </li>
u200c<li>`Circleopen` </li>
<li>`Crosswarp` </li>
<li>`Cube` </li>
<li>`DoomScreenTransition` </li>
<li>`Doorway` </li>
<li>`Dreamy` </li>
<li>`DreamyZoom` </li>
<li>`FilmBurn` </li>
<li>`GlitchMemories` </li>
<li>`Heart` </li>
<li>`InvertedPageCurl` </li>
<li>`Luma` </li>
<li>`Mosaic` </li>
<li>`Pinwheel` </li>
<li>`PolarFunction` </li>
<li>`PolkaDotsCurtain` </li>
<li>`Radial` </li>
<li>`RotateScaleFade` </li>
<li>`Squeeze` </li>
<li>`Swap` </li>
<li>`Swirl` </li>
<li>`UndulatingBurnOutSwirl` </li>
<li>`Windowblinds` </li>
<li>`WipeDown` </li>
<li>`WipeLeft` </li>
<li>`WipeRight` </li>
<li>`WipeUp` </li>
<li>`ZoomInCircles` </li> 
The audio transition, which connects two audio segments.
<li>`AudioFadeInFadeOut` </li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置The transition type.

The image transition, which connects two video segments.
<li>`ImageFadeInFadeOut` </li>
u200c<li>`BowTieHorizontal` </li>
u200c<li>`BowTieVertical` </li>
u200c<li>`ButterflyWaveScrawler` </li>
<li>`Cannabisleaf` </li>
<li>`Circle` </li>
<li>`CircleCrop` </li>
u200c<li>`Circleopen` </li>
<li>`Crosswarp` </li>
<li>`Cube` </li>
<li>`DoomScreenTransition` </li>
<li>`Doorway` </li>
<li>`Dreamy` </li>
<li>`DreamyZoom` </li>
<li>`FilmBurn` </li>
<li>`GlitchMemories` </li>
<li>`Heart` </li>
<li>`InvertedPageCurl` </li>
<li>`Luma` </li>
<li>`Mosaic` </li>
<li>`Pinwheel` </li>
<li>`PolarFunction` </li>
<li>`PolkaDotsCurtain` </li>
<li>`Radial` </li>
<li>`RotateScaleFade` </li>
<li>`Squeeze` </li>
<li>`Swap` </li>
<li>`Swirl` </li>
<li>`UndulatingBurnOutSwirl` </li>
<li>`Windowblinds` </li>
<li>`WipeDown` </li>
<li>`WipeLeft` </li>
<li>`WipeRight` </li>
<li>`WipeUp` </li>
<li>`ZoomInCircles` </li> 
The audio transition, which connects two audio segments.
<li>`AudioFadeInFadeOut` </li>
                     * @param _type The transition type.

The image transition, which connects two video segments.
<li>`ImageFadeInFadeOut` </li>
u200c<li>`BowTieHorizontal` </li>
u200c<li>`BowTieVertical` </li>
u200c<li>`ButterflyWaveScrawler` </li>
<li>`Cannabisleaf` </li>
<li>`Circle` </li>
<li>`CircleCrop` </li>
u200c<li>`Circleopen` </li>
<li>`Crosswarp` </li>
<li>`Cube` </li>
<li>`DoomScreenTransition` </li>
<li>`Doorway` </li>
<li>`Dreamy` </li>
<li>`DreamyZoom` </li>
<li>`FilmBurn` </li>
<li>`GlitchMemories` </li>
<li>`Heart` </li>
<li>`InvertedPageCurl` </li>
<li>`Luma` </li>
<li>`Mosaic` </li>
<li>`Pinwheel` </li>
<li>`PolarFunction` </li>
<li>`PolkaDotsCurtain` </li>
<li>`Radial` </li>
<li>`RotateScaleFade` </li>
<li>`Squeeze` </li>
<li>`Swap` </li>
<li>`Swirl` </li>
<li>`UndulatingBurnOutSwirl` </li>
<li>`Windowblinds` </li>
<li>`WipeDown` </li>
<li>`WipeLeft` </li>
<li>`WipeRight` </li>
<li>`WipeUp` </li>
<li>`ZoomInCircles` </li> 
The audio transition, which connects two audio segments.
<li>`AudioFadeInFadeOut` </li>
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
                     * The transition type.

The image transition, which connects two video segments.
<li>`ImageFadeInFadeOut` </li>
u200c<li>`BowTieHorizontal` </li>
u200c<li>`BowTieVertical` </li>
u200c<li>`ButterflyWaveScrawler` </li>
<li>`Cannabisleaf` </li>
<li>`Circle` </li>
<li>`CircleCrop` </li>
u200c<li>`Circleopen` </li>
<li>`Crosswarp` </li>
<li>`Cube` </li>
<li>`DoomScreenTransition` </li>
<li>`Doorway` </li>
<li>`Dreamy` </li>
<li>`DreamyZoom` </li>
<li>`FilmBurn` </li>
<li>`GlitchMemories` </li>
<li>`Heart` </li>
<li>`InvertedPageCurl` </li>
<li>`Luma` </li>
<li>`Mosaic` </li>
<li>`Pinwheel` </li>
<li>`PolarFunction` </li>
<li>`PolkaDotsCurtain` </li>
<li>`Radial` </li>
<li>`RotateScaleFade` </li>
<li>`Squeeze` </li>
<li>`Swap` </li>
<li>`Swirl` </li>
<li>`UndulatingBurnOutSwirl` </li>
<li>`Windowblinds` </li>
<li>`WipeDown` </li>
<li>`WipeLeft` </li>
<li>`WipeRight` </li>
<li>`WipeUp` </li>
<li>`ZoomInCircles` </li> 
The audio transition, which connects two audio segments.
<li>`AudioFadeInFadeOut` </li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSETRANSITIONOPERATION_H_
