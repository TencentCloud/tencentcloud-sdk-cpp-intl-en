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
                * Input parameter of SVG watermarking template
                */
                class SvgWatermarkInputForUpdate : public AbstractModel
                {
                public:
                    SvgWatermarkInputForUpdate();
                    ~SvgWatermarkInputForUpdate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Watermark width, which supports six formats of px, %, W%, H%, S%, and L%:
<li>If the string ends in px, the `Width` of the watermark will be in px; for example, `100px` means that `Width` is 100 px; if `0px` is entered
 and `Height` is not `0px`, the watermark width will be proportionally scaled based on the source SVG image; if `0px` is entered for both `Width` and `Height`, the watermark width will be the width of the source SVG image;</li>
<li>If the string ends in `W%`, the `Width` of the watermark will be the specified percentage of the video width; for example, `10W%` means that `Width` is 10% of the video width;</li>
<li>If the string ends in `H%`, the `Width` of the watermark will be the specified percentage of the video height; for example, `10H%` means that `Width` is 10% of the video height;</li>
<li>If the string ends in `S%`, the `Width` of the watermark will be the specified percentage of the short side of the video; for example, `10S%` means that `Width` is 10% of the short side of the video;</li>
<li>If the string ends in `L%`, the `Width` of the watermark will be the specified percentage of the long side of the video; for example, `10L%` means that `Width` is 10% of the long side of the video;</li>
<li>If the string ends in %, the meaning is the same as `W%`.</li>
Default value: 10W%.
                     * @return Width Watermark width, which supports six formats of px, %, W%, H%, S%, and L%:
<li>If the string ends in px, the `Width` of the watermark will be in px; for example, `100px` means that `Width` is 100 px; if `0px` is entered
 and `Height` is not `0px`, the watermark width will be proportionally scaled based on the source SVG image; if `0px` is entered for both `Width` and `Height`, the watermark width will be the width of the source SVG image;</li>
<li>If the string ends in `W%`, the `Width` of the watermark will be the specified percentage of the video width; for example, `10W%` means that `Width` is 10% of the video width;</li>
<li>If the string ends in `H%`, the `Width` of the watermark will be the specified percentage of the video height; for example, `10H%` means that `Width` is 10% of the video height;</li>
<li>If the string ends in `S%`, the `Width` of the watermark will be the specified percentage of the short side of the video; for example, `10S%` means that `Width` is 10% of the short side of the video;</li>
<li>If the string ends in `L%`, the `Width` of the watermark will be the specified percentage of the long side of the video; for example, `10L%` means that `Width` is 10% of the long side of the video;</li>
<li>If the string ends in %, the meaning is the same as `W%`.</li>
Default value: 10W%.
                     * 
                     */
                    std::string GetWidth() const;

                    /**
                     * 设置Watermark width, which supports six formats of px, %, W%, H%, S%, and L%:
<li>If the string ends in px, the `Width` of the watermark will be in px; for example, `100px` means that `Width` is 100 px; if `0px` is entered
 and `Height` is not `0px`, the watermark width will be proportionally scaled based on the source SVG image; if `0px` is entered for both `Width` and `Height`, the watermark width will be the width of the source SVG image;</li>
<li>If the string ends in `W%`, the `Width` of the watermark will be the specified percentage of the video width; for example, `10W%` means that `Width` is 10% of the video width;</li>
<li>If the string ends in `H%`, the `Width` of the watermark will be the specified percentage of the video height; for example, `10H%` means that `Width` is 10% of the video height;</li>
<li>If the string ends in `S%`, the `Width` of the watermark will be the specified percentage of the short side of the video; for example, `10S%` means that `Width` is 10% of the short side of the video;</li>
<li>If the string ends in `L%`, the `Width` of the watermark will be the specified percentage of the long side of the video; for example, `10L%` means that `Width` is 10% of the long side of the video;</li>
<li>If the string ends in %, the meaning is the same as `W%`.</li>
Default value: 10W%.
                     * @param _width Watermark width, which supports six formats of px, %, W%, H%, S%, and L%:
<li>If the string ends in px, the `Width` of the watermark will be in px; for example, `100px` means that `Width` is 100 px; if `0px` is entered
 and `Height` is not `0px`, the watermark width will be proportionally scaled based on the source SVG image; if `0px` is entered for both `Width` and `Height`, the watermark width will be the width of the source SVG image;</li>
<li>If the string ends in `W%`, the `Width` of the watermark will be the specified percentage of the video width; for example, `10W%` means that `Width` is 10% of the video width;</li>
<li>If the string ends in `H%`, the `Width` of the watermark will be the specified percentage of the video height; for example, `10H%` means that `Width` is 10% of the video height;</li>
<li>If the string ends in `S%`, the `Width` of the watermark will be the specified percentage of the short side of the video; for example, `10S%` means that `Width` is 10% of the short side of the video;</li>
<li>If the string ends in `L%`, the `Width` of the watermark will be the specified percentage of the long side of the video; for example, `10L%` means that `Width` is 10% of the long side of the video;</li>
<li>If the string ends in %, the meaning is the same as `W%`.</li>
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
                     * 获取Watermark height, which supports six formats of px, %, W%, H%, S%, and L%:
<li>If the string ends in px, the `Height` of the watermark will be in px; for example, `100px` means that `Height` is 100 px; if `0px` is entered
 and `Width` is not `0px`, the watermark height will be proportionally scaled based on the source SVG image; if `0px` is entered for both `Width` and `Height`, the watermark height will be the height of the source SVG image;</li>
<li>If the string ends in `W%`, the `Height` of the watermark will be the specified percentage of the video width; for example, `10W%` means that `Height` is 10% of the video width;</li>
<li>If the string ends in `H%`, the `Height` of the watermark will be the specified percentage of the video height; for example, `10H%` means that `Height` is 10% of the video height;</li>
<li>If the string ends in `S%`, the `Height` of the watermark will be the specified percentage of the short side of the video; for example, `10S%` means that `Height` is 10% of the short side of the video;</li>
<li>If the string ends in `L%`, the `Height` of the watermark will be the specified percentage of the long side of the video; for example, `10L%` means that `Height` is 10% of the long side of the video;</li>
<li>If the string ends in %, the meaning is the same as `H%`.
Default value: 0 px.
                     * @return Height Watermark height, which supports six formats of px, %, W%, H%, S%, and L%:
<li>If the string ends in px, the `Height` of the watermark will be in px; for example, `100px` means that `Height` is 100 px; if `0px` is entered
 and `Width` is not `0px`, the watermark height will be proportionally scaled based on the source SVG image; if `0px` is entered for both `Width` and `Height`, the watermark height will be the height of the source SVG image;</li>
<li>If the string ends in `W%`, the `Height` of the watermark will be the specified percentage of the video width; for example, `10W%` means that `Height` is 10% of the video width;</li>
<li>If the string ends in `H%`, the `Height` of the watermark will be the specified percentage of the video height; for example, `10H%` means that `Height` is 10% of the video height;</li>
<li>If the string ends in `S%`, the `Height` of the watermark will be the specified percentage of the short side of the video; for example, `10S%` means that `Height` is 10% of the short side of the video;</li>
<li>If the string ends in `L%`, the `Height` of the watermark will be the specified percentage of the long side of the video; for example, `10L%` means that `Height` is 10% of the long side of the video;</li>
<li>If the string ends in %, the meaning is the same as `H%`.
Default value: 0 px.
                     * 
                     */
                    std::string GetHeight() const;

                    /**
                     * 设置Watermark height, which supports six formats of px, %, W%, H%, S%, and L%:
<li>If the string ends in px, the `Height` of the watermark will be in px; for example, `100px` means that `Height` is 100 px; if `0px` is entered
 and `Width` is not `0px`, the watermark height will be proportionally scaled based on the source SVG image; if `0px` is entered for both `Width` and `Height`, the watermark height will be the height of the source SVG image;</li>
<li>If the string ends in `W%`, the `Height` of the watermark will be the specified percentage of the video width; for example, `10W%` means that `Height` is 10% of the video width;</li>
<li>If the string ends in `H%`, the `Height` of the watermark will be the specified percentage of the video height; for example, `10H%` means that `Height` is 10% of the video height;</li>
<li>If the string ends in `S%`, the `Height` of the watermark will be the specified percentage of the short side of the video; for example, `10S%` means that `Height` is 10% of the short side of the video;</li>
<li>If the string ends in `L%`, the `Height` of the watermark will be the specified percentage of the long side of the video; for example, `10L%` means that `Height` is 10% of the long side of the video;</li>
<li>If the string ends in %, the meaning is the same as `H%`.
Default value: 0 px.
                     * @param _height Watermark height, which supports six formats of px, %, W%, H%, S%, and L%:
<li>If the string ends in px, the `Height` of the watermark will be in px; for example, `100px` means that `Height` is 100 px; if `0px` is entered
 and `Width` is not `0px`, the watermark height will be proportionally scaled based on the source SVG image; if `0px` is entered for both `Width` and `Height`, the watermark height will be the height of the source SVG image;</li>
<li>If the string ends in `W%`, the `Height` of the watermark will be the specified percentage of the video width; for example, `10W%` means that `Height` is 10% of the video width;</li>
<li>If the string ends in `H%`, the `Height` of the watermark will be the specified percentage of the video height; for example, `10H%` means that `Height` is 10% of the video height;</li>
<li>If the string ends in `S%`, the `Height` of the watermark will be the specified percentage of the short side of the video; for example, `10S%` means that `Height` is 10% of the short side of the video;</li>
<li>If the string ends in `L%`, the `Height` of the watermark will be the specified percentage of the long side of the video; for example, `10L%` means that `Height` is 10% of the long side of the video;</li>
<li>If the string ends in %, the meaning is the same as `H%`.
Default value: 0 px.
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
                     * 获取Watermark period configuration is used to configure the watermark to be displayed and hidden periodically. 
The main usage scenario is: in order to prevent video from being blocked, watermarks are set in multiple places on the video. These watermarks are periodically displayed and hidden in a fixed order. 
For example, set four watermarks A, B, C, and D to be located in the upper left corner, upper right corner, lower right corner, and lower left corner of the video respectively. When the video starts, { A displays for 5 seconds -> B displays for 5 seconds -> C Display for 5 seconds -> D Display for 5 seconds} -> A Display for 5 seconds -> B Display for 5 seconds -> ..., only one watermark is displayed at any time. 
The curly brackets {} represent a large cycle consisting of 4 watermarks A, B, C, and D. It can be seen that each large cycle lasts 20 seconds. 
It can be seen that A, B, C, and D are periodically displayed for 5 seconds and hidden for 15 seconds, and the four have a fixed display order. 
This configuration item is used to describe the periodic configuration of a single watermark.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CycleConfig Watermark period configuration is used to configure the watermark to be displayed and hidden periodically. 
The main usage scenario is: in order to prevent video from being blocked, watermarks are set in multiple places on the video. These watermarks are periodically displayed and hidden in a fixed order. 
For example, set four watermarks A, B, C, and D to be located in the upper left corner, upper right corner, lower right corner, and lower left corner of the video respectively. When the video starts, { A displays for 5 seconds -> B displays for 5 seconds -> C Display for 5 seconds -> D Display for 5 seconds} -> A Display for 5 seconds -> B Display for 5 seconds -> ..., only one watermark is displayed at any time. 
The curly brackets {} represent a large cycle consisting of 4 watermarks A, B, C, and D. It can be seen that each large cycle lasts 20 seconds. 
It can be seen that A, B, C, and D are periodically displayed for 5 seconds and hidden for 15 seconds, and the four have a fixed display order. 
This configuration item is used to describe the periodic configuration of a single watermark.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @deprecated
                     */
                    WatermarkCycleConfigForUpdate GetCycleConfig() const;

                    /**
                     * 设置Watermark period configuration is used to configure the watermark to be displayed and hidden periodically. 
The main usage scenario is: in order to prevent video from being blocked, watermarks are set in multiple places on the video. These watermarks are periodically displayed and hidden in a fixed order. 
For example, set four watermarks A, B, C, and D to be located in the upper left corner, upper right corner, lower right corner, and lower left corner of the video respectively. When the video starts, { A displays for 5 seconds -> B displays for 5 seconds -> C Display for 5 seconds -> D Display for 5 seconds} -> A Display for 5 seconds -> B Display for 5 seconds -> ..., only one watermark is displayed at any time. 
The curly brackets {} represent a large cycle consisting of 4 watermarks A, B, C, and D. It can be seen that each large cycle lasts 20 seconds. 
It can be seen that A, B, C, and D are periodically displayed for 5 seconds and hidden for 15 seconds, and the four have a fixed display order. 
This configuration item is used to describe the periodic configuration of a single watermark.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _cycleConfig Watermark period configuration is used to configure the watermark to be displayed and hidden periodically. 
The main usage scenario is: in order to prevent video from being blocked, watermarks are set in multiple places on the video. These watermarks are periodically displayed and hidden in a fixed order. 
For example, set four watermarks A, B, C, and D to be located in the upper left corner, upper right corner, lower right corner, and lower left corner of the video respectively. When the video starts, { A displays for 5 seconds -> B displays for 5 seconds -> C Display for 5 seconds -> D Display for 5 seconds} -> A Display for 5 seconds -> B Display for 5 seconds -> ..., only one watermark is displayed at any time. 
The curly brackets {} represent a large cycle consisting of 4 watermarks A, B, C, and D. It can be seen that each large cycle lasts 20 seconds. 
It can be seen that A, B, C, and D are periodically displayed for 5 seconds and hidden for 15 seconds, and the four have a fixed display order. 
This configuration item is used to describe the periodic configuration of a single watermark.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * Watermark width, which supports six formats of px, %, W%, H%, S%, and L%:
<li>If the string ends in px, the `Width` of the watermark will be in px; for example, `100px` means that `Width` is 100 px; if `0px` is entered
 and `Height` is not `0px`, the watermark width will be proportionally scaled based on the source SVG image; if `0px` is entered for both `Width` and `Height`, the watermark width will be the width of the source SVG image;</li>
<li>If the string ends in `W%`, the `Width` of the watermark will be the specified percentage of the video width; for example, `10W%` means that `Width` is 10% of the video width;</li>
<li>If the string ends in `H%`, the `Width` of the watermark will be the specified percentage of the video height; for example, `10H%` means that `Width` is 10% of the video height;</li>
<li>If the string ends in `S%`, the `Width` of the watermark will be the specified percentage of the short side of the video; for example, `10S%` means that `Width` is 10% of the short side of the video;</li>
<li>If the string ends in `L%`, the `Width` of the watermark will be the specified percentage of the long side of the video; for example, `10L%` means that `Width` is 10% of the long side of the video;</li>
<li>If the string ends in %, the meaning is the same as `W%`.</li>
Default value: 10W%.
                     */
                    std::string m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Watermark height, which supports six formats of px, %, W%, H%, S%, and L%:
<li>If the string ends in px, the `Height` of the watermark will be in px; for example, `100px` means that `Height` is 100 px; if `0px` is entered
 and `Width` is not `0px`, the watermark height will be proportionally scaled based on the source SVG image; if `0px` is entered for both `Width` and `Height`, the watermark height will be the height of the source SVG image;</li>
<li>If the string ends in `W%`, the `Height` of the watermark will be the specified percentage of the video width; for example, `10W%` means that `Height` is 10% of the video width;</li>
<li>If the string ends in `H%`, the `Height` of the watermark will be the specified percentage of the video height; for example, `10H%` means that `Height` is 10% of the video height;</li>
<li>If the string ends in `S%`, the `Height` of the watermark will be the specified percentage of the short side of the video; for example, `10S%` means that `Height` is 10% of the short side of the video;</li>
<li>If the string ends in `L%`, the `Height` of the watermark will be the specified percentage of the long side of the video; for example, `10L%` means that `Height` is 10% of the long side of the video;</li>
<li>If the string ends in %, the meaning is the same as `H%`.
Default value: 0 px.
                     */
                    std::string m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * Watermark period configuration is used to configure the watermark to be displayed and hidden periodically. 
The main usage scenario is: in order to prevent video from being blocked, watermarks are set in multiple places on the video. These watermarks are periodically displayed and hidden in a fixed order. 
For example, set four watermarks A, B, C, and D to be located in the upper left corner, upper right corner, lower right corner, and lower left corner of the video respectively. When the video starts, { A displays for 5 seconds -> B displays for 5 seconds -> C Display for 5 seconds -> D Display for 5 seconds} -> A Display for 5 seconds -> B Display for 5 seconds -> ..., only one watermark is displayed at any time. 
The curly brackets {} represent a large cycle consisting of 4 watermarks A, B, C, and D. It can be seen that each large cycle lasts 20 seconds. 
It can be seen that A, B, C, and D are periodically displayed for 5 seconds and hidden for 15 seconds, and the four have a fixed display order. 
This configuration item is used to describe the periodic configuration of a single watermark.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    WatermarkCycleConfigForUpdate m_cycleConfig;
                    bool m_cycleConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SVGWATERMARKINPUTFORUPDATE_H_
