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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SVGWATERMARKINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SVGWATERMARKINPUT_H_

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
                * Input parameters of the SVG watermark template.
                */
                class SvgWatermarkInput : public AbstractModel
                {
                public:
                    SvgWatermarkInput();
                    ~SvgWatermarkInput() = default;
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
                     * 获取Height of a watermark, supporting six formats: px, W%, H%, S%, and L%.
<li>If a string ends with px, it means the watermark Height is in pixels; for example, 100px means the Height is 100 pixels. If 0px is entered and
When Width is not 0px, it means the height of the watermark is proportionally scaled based on the original SVG image. When both Width and Height are set to 0px, it means the height of the watermark is the height of the original SVG image.</li>
<li>If a string ends with W%, it indicates that the `Height` of a watermark is a percentage of a video's width. For example, `10W%` means that `Height` is 10% of a video's width.</li>
<li>If a string ends with H%, it indicates that the `Height` of a watermark is a percentage of a video's height. For example, `10H%` means that `Height` is 10% of a video's height.</li>
<li>If a string ends with S%, it indicates that the `Height` of a watermark is a percentage of the video's short side. For example, `10S%` means that `Height` is 10% of the video's short side.</li>
<li>If a string ends with L%, it indicates that the `Height` of a watermark is a percentage of the long side of the video. For example, `10L%` means that `Height` is 10% of the long side of the video.</li>
<li>When the string ends with %, it has the same meaning as H%.</li>
Default value: 0px.
                     * @return Height Height of a watermark, supporting six formats: px, W%, H%, S%, and L%.
<li>If a string ends with px, it means the watermark Height is in pixels; for example, 100px means the Height is 100 pixels. If 0px is entered and
When Width is not 0px, it means the height of the watermark is proportionally scaled based on the original SVG image. When both Width and Height are set to 0px, it means the height of the watermark is the height of the original SVG image.</li>
<li>If a string ends with W%, it indicates that the `Height` of a watermark is a percentage of a video's width. For example, `10W%` means that `Height` is 10% of a video's width.</li>
<li>If a string ends with H%, it indicates that the `Height` of a watermark is a percentage of a video's height. For example, `10H%` means that `Height` is 10% of a video's height.</li>
<li>If a string ends with S%, it indicates that the `Height` of a watermark is a percentage of the video's short side. For example, `10S%` means that `Height` is 10% of the video's short side.</li>
<li>If a string ends with L%, it indicates that the `Height` of a watermark is a percentage of the long side of the video. For example, `10L%` means that `Height` is 10% of the long side of the video.</li>
<li>When the string ends with %, it has the same meaning as H%.</li>
Default value: 0px.
                     * 
                     */
                    std::string GetHeight() const;

                    /**
                     * 设置Height of a watermark, supporting six formats: px, W%, H%, S%, and L%.
<li>If a string ends with px, it means the watermark Height is in pixels; for example, 100px means the Height is 100 pixels. If 0px is entered and
When Width is not 0px, it means the height of the watermark is proportionally scaled based on the original SVG image. When both Width and Height are set to 0px, it means the height of the watermark is the height of the original SVG image.</li>
<li>If a string ends with W%, it indicates that the `Height` of a watermark is a percentage of a video's width. For example, `10W%` means that `Height` is 10% of a video's width.</li>
<li>If a string ends with H%, it indicates that the `Height` of a watermark is a percentage of a video's height. For example, `10H%` means that `Height` is 10% of a video's height.</li>
<li>If a string ends with S%, it indicates that the `Height` of a watermark is a percentage of the video's short side. For example, `10S%` means that `Height` is 10% of the video's short side.</li>
<li>If a string ends with L%, it indicates that the `Height` of a watermark is a percentage of the long side of the video. For example, `10L%` means that `Height` is 10% of the long side of the video.</li>
<li>When the string ends with %, it has the same meaning as H%.</li>
Default value: 0px.
                     * @param _height Height of a watermark, supporting six formats: px, W%, H%, S%, and L%.
<li>If a string ends with px, it means the watermark Height is in pixels; for example, 100px means the Height is 100 pixels. If 0px is entered and
When Width is not 0px, it means the height of the watermark is proportionally scaled based on the original SVG image. When both Width and Height are set to 0px, it means the height of the watermark is the height of the original SVG image.</li>
<li>If a string ends with W%, it indicates that the `Height` of a watermark is a percentage of a video's width. For example, `10W%` means that `Height` is 10% of a video's width.</li>
<li>If a string ends with H%, it indicates that the `Height` of a watermark is a percentage of a video's height. For example, `10H%` means that `Height` is 10% of a video's height.</li>
<li>If a string ends with S%, it indicates that the `Height` of a watermark is a percentage of the video's short side. For example, `10S%` means that `Height` is 10% of the video's short side.</li>
<li>If a string ends with L%, it indicates that the `Height` of a watermark is a percentage of the long side of the video. For example, `10L%` means that `Height` is 10% of the long side of the video.</li>
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
                     * Height of a watermark, supporting six formats: px, W%, H%, S%, and L%.
<li>If a string ends with px, it means the watermark Height is in pixels; for example, 100px means the Height is 100 pixels. If 0px is entered and
When Width is not 0px, it means the height of the watermark is proportionally scaled based on the original SVG image. When both Width and Height are set to 0px, it means the height of the watermark is the height of the original SVG image.</li>
<li>If a string ends with W%, it indicates that the `Height` of a watermark is a percentage of a video's width. For example, `10W%` means that `Height` is 10% of a video's width.</li>
<li>If a string ends with H%, it indicates that the `Height` of a watermark is a percentage of a video's height. For example, `10H%` means that `Height` is 10% of a video's height.</li>
<li>If a string ends with S%, it indicates that the `Height` of a watermark is a percentage of the video's short side. For example, `10S%` means that `Height` is 10% of the video's short side.</li>
<li>If a string ends with L%, it indicates that the `Height` of a watermark is a percentage of the long side of the video. For example, `10L%` means that `Height` is 10% of the long side of the video.</li>
<li>When the string ends with %, it has the same meaning as H%.</li>
Default value: 0px.
                     */
                    std::string m_height;
                    bool m_heightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SVGWATERMARKINPUT_H_
