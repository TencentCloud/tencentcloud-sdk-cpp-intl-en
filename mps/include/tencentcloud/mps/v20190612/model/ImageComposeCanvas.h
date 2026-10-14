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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_IMAGECOMPOSECANVAS_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_IMAGECOMPOSECANVAS_H_

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
                * Canvas parameter of the layer fusion feature for image processing
                */
                class ImageComposeCanvas : public AbstractModel
                {
                public:
                    ImageComposeCanvas();
                    ~ImageComposeCanvas() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Canvas width, value ranges from 1 to 10240. Set both this and Height at the same time.</p>
                     * @return Width <p>Canvas width, value ranges from 1 to 10240. Set both this and Height at the same time.</p>
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置<p>Canvas width, value ranges from 1 to 10240. Set both this and Height at the same time.</p>
                     * @param _width <p>Canvas width, value ranges from 1 to 10240. Set both this and Height at the same time.</p>
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
                     * 获取<p>Canvas height, in the range of [1, 10240]. Set it simultaneously with Width.</p>
                     * @return Height <p>Canvas height, in the range of [1, 10240]. Set it simultaneously with Width.</p>
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置<p>Canvas height, in the range of [1, 10240]. Set it simultaneously with Width.</p>
                     * @param _height <p>Canvas height, in the range of [1, 10240]. Set it simultaneously with Width.</p>
                     * 
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取<p>Canvas background color, unified as an 8-digit hexadecimal #RRGGBBAA (including alpha), used as the canvas background color. Default #00000000 (fully transparent). Example: #FFFFFFFF opaque white, #FFFFFF80 semi-transparent white.</p><p>When the output format does not support transparent channel (such as JPEG), transparent areas are collapsed according to the RGB of this background color. The default value will get a black background. If a white background is required, explicitly pass #FFFFFFFF.</p>
                     * @return Background <p>Canvas background color, unified as an 8-digit hexadecimal #RRGGBBAA (including alpha), used as the canvas background color. Default #00000000 (fully transparent). Example: #FFFFFFFF opaque white, #FFFFFF80 semi-transparent white.</p><p>When the output format does not support transparent channel (such as JPEG), transparent areas are collapsed according to the RGB of this background color. The default value will get a black background. If a white background is required, explicitly pass #FFFFFFFF.</p>
                     * 
                     */
                    std::string GetBackground() const;

                    /**
                     * 设置<p>Canvas background color, unified as an 8-digit hexadecimal #RRGGBBAA (including alpha), used as the canvas background color. Default #00000000 (fully transparent). Example: #FFFFFFFF opaque white, #FFFFFF80 semi-transparent white.</p><p>When the output format does not support transparent channel (such as JPEG), transparent areas are collapsed according to the RGB of this background color. The default value will get a black background. If a white background is required, explicitly pass #FFFFFFFF.</p>
                     * @param _background <p>Canvas background color, unified as an 8-digit hexadecimal #RRGGBBAA (including alpha), used as the canvas background color. Default #00000000 (fully transparent). Example: #FFFFFFFF opaque white, #FFFFFF80 semi-transparent white.</p><p>When the output format does not support transparent channel (such as JPEG), transparent areas are collapsed according to the RGB of this background color. The default value will get a black background. If a white background is required, explicitly pass #FFFFFFFF.</p>
                     * 
                     */
                    void SetBackground(const std::string& _background);

                    /**
                     * 判断参数 Background 是否已赋值
                     * @return Background 是否已赋值
                     * 
                     */
                    bool BackgroundHasBeenSet() const;

                private:

                    /**
                     * <p>Canvas width, value ranges from 1 to 10240. Set both this and Height at the same time.</p>
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * <p>Canvas height, in the range of [1, 10240]. Set it simultaneously with Width.</p>
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * <p>Canvas background color, unified as an 8-digit hexadecimal #RRGGBBAA (including alpha), used as the canvas background color. Default #00000000 (fully transparent). Example: #FFFFFFFF opaque white, #FFFFFF80 semi-transparent white.</p><p>When the output format does not support transparent channel (such as JPEG), transparent areas are collapsed according to the RGB of this background color. The default value will get a black background. If a white background is required, explicitly pass #FFFFFFFF.</p>
                     */
                    std::string m_background;
                    bool m_backgroundHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_IMAGECOMPOSECANVAS_H_
