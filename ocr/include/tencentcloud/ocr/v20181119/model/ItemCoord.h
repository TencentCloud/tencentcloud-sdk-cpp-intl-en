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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_ITEMCOORD_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_ITEMCOORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * Pixel coordinates of the text line in the image after rotation correction, which is in the format of `(X-coordinate of top-left point, Y-coordinate of top-left point, width, height)`.
                */
                class ItemCoord : public AbstractModel
                {
                public:
                    ItemCoord();
                    ~ItemCoord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取X-coordinate of top-left point.
                     * @return X X-coordinate of top-left point.
                     * 
                     */
                    int64_t GetX() const;

                    /**
                     * 设置X-coordinate of top-left point.
                     * @param _x X-coordinate of top-left point.
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
                     * 获取Y-coordinate of top-left point.
                     * @return Y Y-coordinate of top-left point.
                     * 
                     */
                    int64_t GetY() const;

                    /**
                     * 设置Y-coordinate of top-left point.
                     * @param _y Y-coordinate of top-left point.
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
                     * 获取Width
                     * @return Width Width
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置Width
                     * @param _width Width
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
                     * 获取Height
                     * @return Height Height
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置Height
                     * @param _height Height
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
                     * X-coordinate of top-left point.
                     */
                    int64_t m_x;
                    bool m_xHasBeenSet;

                    /**
                     * Y-coordinate of top-left point.
                     */
                    int64_t m_y;
                    bool m_yHasBeenSet;

                    /**
                     * Width
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * Height
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_ITEMCOORD_H_
