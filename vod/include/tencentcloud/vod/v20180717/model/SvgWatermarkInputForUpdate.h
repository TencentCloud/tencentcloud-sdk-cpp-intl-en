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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SVGWATERMARKINPUTFORUPDATE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SVGWATERMARKINPUTFORUPDATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/WatermarkCycleConfigForUpdate.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Input parameters of the SVG watermark template
                */
                class SvgWatermarkInputForUpdate : public AbstractModel
                {
                public:
                    SvgWatermarkInputForUpdate();
                    ~SvgWatermarkInputForUpdate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Width of a watermark, supporting six formats: px, %, W%, H%, S%, and L%.
<li>If a string ends with px, it means the watermark Width is in pixels. For example, 100px means the Width is 100 pixels. If 0px is entered and
When Height is not 0px, it means the width of the watermark is proportionally scaled based on the original SVG image. When both Width and Height are set to 0px, it means the width of the watermark is the width of the original SVG image.</li>
<li>If a string ends with W%, it indicates that the `Width` of a watermark is a percentage of a video's width. For example, `10W%` means that `Width` is 10% of a video's width.</li>
<li>If a string ends with H%, it indicates that the `Width` of a watermark is a percentage of a video's height. For example, `10H%` means that `Width` is 10% of a video's height.</li>
<li>If a string ends with S%, it indicates that the `Width` of a watermark is a percentage of a video's short side. For example, `10S%` means that `Width` is 10% of a video's short side.</li>
<li>If a string ends with L%, it indicates that the `Width` of a watermark is a percentage of the long side of the video. For example, `10L%` means that `Width` is 10% of the long side of the video.</li>
<li>When the string ends with %, it has the same meaning as W%.</li>
Default value: 10W%.
                     * @return Width Width of a watermark, supporting six formats: px, %, W%, H%, S%, and L%.
<li>If a string ends with px, it means the watermark Width is in pixels. For example, 100px means the Width is 100 pixels. If 0px is entered and
When Height is not 0px, it means the width of the watermark is proportionally scaled based on the original SVG image. When both Width and Height are set to 0px, it means the width of the watermark is the width of the original SVG image.</li>
<li>If a string ends with W%, it indicates that the `Width` of a watermark is a percentage of a video's width. For example, `10W%` means that `Width` is 10% of a video's width.</li>
<li>If a string ends with H%, it indicates that the `Width` of a watermark is a percentage of a video's height. For example, `10H%` means that `Width` is 10% of a video's height.</li>
<li>If a string ends with S%, it indicates that the `Width` of a watermark is a percentage of a video's short side. For example, `10S%` means that `Width` is 10% of a video's short side.</li>
<li>If a string ends with L%, it indicates that the `Width` of a watermark is a percentage of the long side of the video. For example, `10L%` means that `Width` is 10% of the long side of the video.</li>
<li>When the string ends with %, it has the same meaning as W%.</li>
Default value: 10W%.
                     * 
                     */
                    std::string GetWidth() const;

                    /**
                     * 设置Width of a watermark, supporting six formats: px, %, W%, H%, S%, and L%.
<li>If a string ends with px, it means the watermark Width is in pixels. For example, 100px means the Width is 100 pixels. If 0px is entered and
When Height is not 0px, it means the width of the watermark is proportionally scaled based on the original SVG image. When both Width and Height are set to 0px, it means the width of the watermark is the width of the original SVG image.</li>
<li>If a string ends with W%, it indicates that the `Width` of a watermark is a percentage of a video's width. For example, `10W%` means that `Width` is 10% of a video's width.</li>
<li>If a string ends with H%, it indicates that the `Width` of a watermark is a percentage of a video's height. For example, `10H%` means that `Width` is 10% of a video's height.</li>
<li>If a string ends with S%, it indicates that the `Width` of a watermark is a percentage of a video's short side. For example, `10S%` means that `Width` is 10% of a video's short side.</li>
<li>If a string ends with L%, it indicates that the `Width` of a watermark is a percentage of the long side of the video. For example, `10L%` means that `Width` is 10% of the long side of the video.</li>
<li>When the string ends with %, it has the same meaning as W%.</li>
Default value: 10W%.
                     * @param _width Width of a watermark, supporting six formats: px, %, W%, H%, S%, and L%.
<li>If a string ends with px, it means the watermark Width is in pixels. For example, 100px means the Width is 100 pixels. If 0px is entered and
When Height is not 0px, it means the width of the watermark is proportionally scaled based on the original SVG image. When both Width and Height are set to 0px, it means the width of the watermark is the width of the original SVG image.</li>
<li>If a string ends with W%, it indicates that the `Width` of a watermark is a percentage of a video's width. For example, `10W%` means that `Width` is 10% of a video's width.</li>
<li>If a string ends with H%, it indicates that the `Width` of a watermark is a percentage of a video's height. For example, `10H%` means that `Width` is 10% of a video's height.</li>
<li>If a string ends with S%, it indicates that the `Width` of a watermark is a percentage of a video's short side. For example, `10S%` means that `Width` is 10% of a video's short side.</li>
<li>If a string ends with L%, it indicates that the `Width` of a watermark is a percentage of the long side of the video. For example, `10L%` means that `Width` is 10% of the long side of the video.</li>
<li>When the string ends with %, it has the same meaning as W%.</li>
Default value: 10W%.
                     * 
                     */
                    void SetWidth(const std::string& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取Height of a watermark, supporting six formats: px, %, W%, H%, S%, and L%.
<li>If a string ends with px, it means the watermark Height is in pixels. For example, 100px means the Height is 100 pixels. If 0px is entered and
When Width is not 0px, it means the height of the watermark is proportionally scaled based on the original SVG image. When both Width and Height are set to 0px, it means the height of the watermark is the height of the original SVG image.</li>
<li>If a string ends with W%, it indicates that the `Height` of a watermark is a percentage of a video's width. For example, `10W%` means that `Height` is 10% of a video's width.</li>
<li>If a string ends with H%, it indicates that the `Height` of a watermark is a percentage of a video's height. For example, `10H%` means that `Height` is 10% of a video's height.</li>
<li>If a string ends with S%, it indicates that the `Height` of a watermark is a percentage of a video's short side. For example, `10S%` means that `Height` is 10% of a video's short side.</li>
<li>If a string ends with L%, it indicates that the `Height` of a watermark is a percentage of the video long side. For example, `10L%` means that `Height` is 10% of the video long side.</li>
<li>When the string ends with %, it has the same meaning as H%.</li>
Default value: 0px.
                     * @return Height Height of a watermark, supporting six formats: px, %, W%, H%, S%, and L%.
<li>If a string ends with px, it means the watermark Height is in pixels. For example, 100px means the Height is 100 pixels. If 0px is entered and
When Width is not 0px, it means the height of the watermark is proportionally scaled based on the original SVG image. When both Width and Height are set to 0px, it means the height of the watermark is the height of the original SVG image.</li>
<li>If a string ends with W%, it indicates that the `Height` of a watermark is a percentage of a video's width. For example, `10W%` means that `Height` is 10% of a video's width.</li>
<li>If a string ends with H%, it indicates that the `Height` of a watermark is a percentage of a video's height. For example, `10H%` means that `Height` is 10% of a video's height.</li>
<li>If a string ends with S%, it indicates that the `Height` of a watermark is a percentage of a video's short side. For example, `10S%` means that `Height` is 10% of a video's short side.</li>
<li>If a string ends with L%, it indicates that the `Height` of a watermark is a percentage of the video long side. For example, `10L%` means that `Height` is 10% of the video long side.</li>
<li>When the string ends with %, it has the same meaning as H%.</li>
Default value: 0px.
                     * 
                     */
                    std::string GetHeight() const;

                    /**
                     * 设置Height of a watermark, supporting six formats: px, %, W%, H%, S%, and L%.
<li>If a string ends with px, it means the watermark Height is in pixels. For example, 100px means the Height is 100 pixels. If 0px is entered and
When Width is not 0px, it means the height of the watermark is proportionally scaled based on the original SVG image. When both Width and Height are set to 0px, it means the height of the watermark is the height of the original SVG image.</li>
<li>If a string ends with W%, it indicates that the `Height` of a watermark is a percentage of a video's width. For example, `10W%` means that `Height` is 10% of a video's width.</li>
<li>If a string ends with H%, it indicates that the `Height` of a watermark is a percentage of a video's height. For example, `10H%` means that `Height` is 10% of a video's height.</li>
<li>If a string ends with S%, it indicates that the `Height` of a watermark is a percentage of a video's short side. For example, `10S%` means that `Height` is 10% of a video's short side.</li>
<li>If a string ends with L%, it indicates that the `Height` of a watermark is a percentage of the video long side. For example, `10L%` means that `Height` is 10% of the video long side.</li>
<li>When the string ends with %, it has the same meaning as H%.</li>
Default value: 0px.
                     * @param _height Height of a watermark, supporting six formats: px, %, W%, H%, S%, and L%.
<li>If a string ends with px, it means the watermark Height is in pixels. For example, 100px means the Height is 100 pixels. If 0px is entered and
When Width is not 0px, it means the height of the watermark is proportionally scaled based on the original SVG image. When both Width and Height are set to 0px, it means the height of the watermark is the height of the original SVG image.</li>
<li>If a string ends with W%, it indicates that the `Height` of a watermark is a percentage of a video's width. For example, `10W%` means that `Height` is 10% of a video's width.</li>
<li>If a string ends with H%, it indicates that the `Height` of a watermark is a percentage of a video's height. For example, `10H%` means that `Height` is 10% of a video's height.</li>
<li>If a string ends with S%, it indicates that the `Height` of a watermark is a percentage of a video's short side. For example, `10S%` means that `Height` is 10% of a video's short side.</li>
<li>If a string ends with L%, it indicates that the `Height` of a watermark is a percentage of the video long side. For example, `10L%` means that `Height` is 10% of the video long side.</li>
<li>When the string ends with %, it has the same meaning as H%.</li>
Default value: 0px.
                     * 
                     */
                    void SetHeight(const std::string& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取Watermark cycle configuration, for configuring the periodic display and hiding of watermarks.
Main usage scenarios: to prevent watermark occlusion in videos, set watermarks in multiple places. These watermarks are displayed and hidden periodically in a fixed sequence.
For example, set four watermarks A, B, C, and D at the upper left corner, upper right corner, bottom-right corner, and bottom-left corner of the video respectively. When the video starts, { A displays for 5 seconds -> B displays for 5 seconds -> C displays for 5 seconds -> D displays for 5 seconds } -> A displays for 5 seconds -> B displays for 5 seconds -> ..., and only one watermark is displayed at any time.
Curly braces {} represent a long cycle consisting of 4 watermarks: A, B, C, and D. You can see each long cycle lasts 20 seconds.
You can see that A, B, C, and D are all displayed for 5 seconds and hidden for 15 seconds periodically, and they have a fixed display order.
This configuration item is used to describe the cycle configuration of each watermark.
                     * @return CycleConfig Watermark cycle configuration, for configuring the periodic display and hiding of watermarks.
Main usage scenarios: to prevent watermark occlusion in videos, set watermarks in multiple places. These watermarks are displayed and hidden periodically in a fixed sequence.
For example, set four watermarks A, B, C, and D at the upper left corner, upper right corner, bottom-right corner, and bottom-left corner of the video respectively. When the video starts, { A displays for 5 seconds -> B displays for 5 seconds -> C displays for 5 seconds -> D displays for 5 seconds } -> A displays for 5 seconds -> B displays for 5 seconds -> ..., and only one watermark is displayed at any time.
Curly braces {} represent a long cycle consisting of 4 watermarks: A, B, C, and D. You can see each long cycle lasts 20 seconds.
You can see that A, B, C, and D are all displayed for 5 seconds and hidden for 15 seconds periodically, and they have a fixed display order.
This configuration item is used to describe the cycle configuration of each watermark.
                     * @deprecated
                     */
                    WatermarkCycleConfigForUpdate GetCycleConfig() const;

                    /**
                     * 设置Watermark cycle configuration, for configuring the periodic display and hiding of watermarks.
Main usage scenarios: to prevent watermark occlusion in videos, set watermarks in multiple places. These watermarks are displayed and hidden periodically in a fixed sequence.
For example, set four watermarks A, B, C, and D at the upper left corner, upper right corner, bottom-right corner, and bottom-left corner of the video respectively. When the video starts, { A displays for 5 seconds -> B displays for 5 seconds -> C displays for 5 seconds -> D displays for 5 seconds } -> A displays for 5 seconds -> B displays for 5 seconds -> ..., and only one watermark is displayed at any time.
Curly braces {} represent a long cycle consisting of 4 watermarks: A, B, C, and D. You can see each long cycle lasts 20 seconds.
You can see that A, B, C, and D are all displayed for 5 seconds and hidden for 15 seconds periodically, and they have a fixed display order.
This configuration item is used to describe the cycle configuration of each watermark.
                     * @param _cycleConfig Watermark cycle configuration, for configuring the periodic display and hiding of watermarks.
Main usage scenarios: to prevent watermark occlusion in videos, set watermarks in multiple places. These watermarks are displayed and hidden periodically in a fixed sequence.
For example, set four watermarks A, B, C, and D at the upper left corner, upper right corner, bottom-right corner, and bottom-left corner of the video respectively. When the video starts, { A displays for 5 seconds -> B displays for 5 seconds -> C displays for 5 seconds -> D displays for 5 seconds } -> A displays for 5 seconds -> B displays for 5 seconds -> ..., and only one watermark is displayed at any time.
Curly braces {} represent a long cycle consisting of 4 watermarks: A, B, C, and D. You can see each long cycle lasts 20 seconds.
You can see that A, B, C, and D are all displayed for 5 seconds and hidden for 15 seconds periodically, and they have a fixed display order.
This configuration item is used to describe the cycle configuration of each watermark.
                     * @deprecated
                     */
                    void SetCycleConfig(const WatermarkCycleConfigForUpdate& _cycleConfig);

                    /**
                     * 判断参数 CycleConfig 是否已赋值
                     * @return CycleConfig 是否已赋值
                     * @deprecated
                     */
                    bool CycleConfigHasBeenSet() const;

                private:

                    /**
                     * Width of a watermark, supporting six formats: px, %, W%, H%, S%, and L%.
<li>If a string ends with px, it means the watermark Width is in pixels. For example, 100px means the Width is 100 pixels. If 0px is entered and
When Height is not 0px, it means the width of the watermark is proportionally scaled based on the original SVG image. When both Width and Height are set to 0px, it means the width of the watermark is the width of the original SVG image.</li>
<li>If a string ends with W%, it indicates that the `Width` of a watermark is a percentage of a video's width. For example, `10W%` means that `Width` is 10% of a video's width.</li>
<li>If a string ends with H%, it indicates that the `Width` of a watermark is a percentage of a video's height. For example, `10H%` means that `Width` is 10% of a video's height.</li>
<li>If a string ends with S%, it indicates that the `Width` of a watermark is a percentage of a video's short side. For example, `10S%` means that `Width` is 10% of a video's short side.</li>
<li>If a string ends with L%, it indicates that the `Width` of a watermark is a percentage of the long side of the video. For example, `10L%` means that `Width` is 10% of the long side of the video.</li>
<li>When the string ends with %, it has the same meaning as W%.</li>
Default value: 10W%.
                     */
                    std::string m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Height of a watermark, supporting six formats: px, %, W%, H%, S%, and L%.
<li>If a string ends with px, it means the watermark Height is in pixels. For example, 100px means the Height is 100 pixels. If 0px is entered and
When Width is not 0px, it means the height of the watermark is proportionally scaled based on the original SVG image. When both Width and Height are set to 0px, it means the height of the watermark is the height of the original SVG image.</li>
<li>If a string ends with W%, it indicates that the `Height` of a watermark is a percentage of a video's width. For example, `10W%` means that `Height` is 10% of a video's width.</li>
<li>If a string ends with H%, it indicates that the `Height` of a watermark is a percentage of a video's height. For example, `10H%` means that `Height` is 10% of a video's height.</li>
<li>If a string ends with S%, it indicates that the `Height` of a watermark is a percentage of a video's short side. For example, `10S%` means that `Height` is 10% of a video's short side.</li>
<li>If a string ends with L%, it indicates that the `Height` of a watermark is a percentage of the video long side. For example, `10L%` means that `Height` is 10% of the video long side.</li>
<li>When the string ends with %, it has the same meaning as H%.</li>
Default value: 0px.
                     */
                    std::string m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * Watermark cycle configuration, for configuring the periodic display and hiding of watermarks.
Main usage scenarios: to prevent watermark occlusion in videos, set watermarks in multiple places. These watermarks are displayed and hidden periodically in a fixed sequence.
For example, set four watermarks A, B, C, and D at the upper left corner, upper right corner, bottom-right corner, and bottom-left corner of the video respectively. When the video starts, { A displays for 5 seconds -> B displays for 5 seconds -> C displays for 5 seconds -> D displays for 5 seconds } -> A displays for 5 seconds -> B displays for 5 seconds -> ..., and only one watermark is displayed at any time.
Curly braces {} represent a long cycle consisting of 4 watermarks: A, B, C, and D. You can see each long cycle lasts 20 seconds.
You can see that A, B, C, and D are all displayed for 5 seconds and hidden for 15 seconds periodically, and they have a fixed display order.
This configuration item is used to describe the cycle configuration of each watermark.
                     */
                    WatermarkCycleConfigForUpdate m_cycleConfig;
                    bool m_cycleConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SVGWATERMARKINPUTFORUPDATE_H_
