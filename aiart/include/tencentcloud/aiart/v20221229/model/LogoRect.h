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

#ifndef TENCENTCLOUD_AIART_V20221229_MODEL_LOGORECT_H_
#define TENCENTCLOUD_AIART_V20221229_MODEL_LOGORECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Aiart
    {
        namespace V20221229
        {
            namespace Model
            {
                /**
                * Input box
                */
                class LogoRect : public AbstractModel
                {
                public:
                    LogoRect();
                    ~LogoRect() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取X-axis coordinate of the upper left corner
                     * @return X X-axis coordinate of the upper left corner
                     * 
                     */
                    int64_t GetX() const;

                    /**
                     * 设置X-axis coordinate of the upper left corner
                     * @param _x X-axis coordinate of the upper left corner
                     * 
                     */
                    void SetX(const int64_t& _x);

                    /**
                     * 判断参数 X 是否已赋值
                     * @return X 是否已赋值
                     * 
                     */
                    bool XHasBeenSet() const;

                    /**
                     * 获取Y-axis coordinate of the upper left corner
                     * @return Y Y-axis coordinate of the upper left corner
                     * 
                     */
                    int64_t GetY() const;

                    /**
                     * 设置Y-axis coordinate of the upper left corner
                     * @param _y Y-axis coordinate of the upper left corner
                     * 
                     */
                    void SetY(const int64_t& _y);

                    /**
                     * 判断参数 Y 是否已赋值
                     * @return Y 是否已赋值
                     * 
                     */
                    bool YHasBeenSet() const;

                    /**
                     * 获取Box width
                     * @return Width Box width
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置Box width
                     * @param _width Box width
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
                     * 获取Box height
                     * @return Height Box height
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置Box height
                     * @param _height Box height
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
                     * X-axis coordinate of the upper left corner
                     */
                    int64_t m_x;
                    bool m_xHasBeenSet;

                    /**
                     * Y-axis coordinate of the upper left corner
                     */
                    int64_t m_y;
                    bool m_yHasBeenSet;

                    /**
                     * Box width
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Box height
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AIART_V20221229_MODEL_LOGORECT_H_
