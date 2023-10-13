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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSECANVAS_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSECANVAS_H_

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
                * The canvas information of a video editing/compositing task.
                */
                class ComposeCanvas : public AbstractModel
                {
                public:
                    ComposeCanvas();
                    ~ComposeCanvas() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The RGB value of the background color. The format is #RRGGBB, such as `#F0F0F0`. 
Default value: `#000000` (black).
                     * @return Color The RGB value of the background color. The format is #RRGGBB, such as `#F0F0F0`. 
Default value: `#000000` (black).
                     * 
                     */
                    std::string GetColor() const;

                    /**
                     * 设置The RGB value of the background color. The format is #RRGGBB, such as `#F0F0F0`. 
Default value: `#000000` (black).
                     * @param _color The RGB value of the background color. The format is #RRGGBB, such as `#F0F0F0`. 
Default value: `#000000` (black).
                     * 
                     */
                    void SetColor(const std::string& _color);

                    /**
                     * 判断参数 Color 是否已赋值
                     * @return Color 是否已赋值
                     * 
                     */
                    bool ColorHasBeenSet() const;

                    /**
                     * 获取The canvas width (px), which is the width of the output video. Value range: 0–3840.  
The default value is `0`, which means that the canvas is as wide as the first video.
                     * @return Width The canvas width (px), which is the width of the output video. Value range: 0–3840.  
The default value is `0`, which means that the canvas is as wide as the first video.
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置The canvas width (px), which is the width of the output video. Value range: 0–3840.  
The default value is `0`, which means that the canvas is as wide as the first video.
                     * @param _width The canvas width (px), which is the width of the output video. Value range: 0–3840.  
The default value is `0`, which means that the canvas is as wide as the first video.
                     * 
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取The canvas height (px), which is the height of the output video. Value range: 0–3840.  
The default value is `0`, which means that the canvas is as high as the first video.
                     * @return Height The canvas height (px), which is the height of the output video. Value range: 0–3840.  
The default value is `0`, which means that the canvas is as high as the first video.
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置The canvas height (px), which is the height of the output video. Value range: 0–3840.  
The default value is `0`, which means that the canvas is as high as the first video.
                     * @param _height The canvas height (px), which is the height of the output video. Value range: 0–3840.  
The default value is `0`, which means that the canvas is as high as the first video.
                     * 
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                private:

                    /**
                     * The RGB value of the background color. The format is #RRGGBB, such as `#F0F0F0`. 
Default value: `#000000` (black).
                     */
                    std::string m_color;
                    bool m_colorHasBeenSet;

                    /**
                     * The canvas width (px), which is the width of the output video. Value range: 0–3840.  
The default value is `0`, which means that the canvas is as wide as the first video.
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * The canvas height (px), which is the height of the output video. Value range: 0–3840.  
The default value is `0`, which means that the canvas is as high as the first video.
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSECANVAS_H_
