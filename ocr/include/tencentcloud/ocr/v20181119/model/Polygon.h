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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_POLYGON_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_POLYGON_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/Coord.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * The coordinates of the four vertices of the text
Note: This field may return null, indicating that no valid values can be obtained.
                */
                class Polygon : public AbstractModel
                {
                public:
                    Polygon();
                    ~Polygon() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The coordinates of the upper-left vertex.
                     * @return LeftTop The coordinates of the upper-left vertex.
                     */
                    Coord GetLeftTop() const;

                    /**
                     * 设置The coordinates of the upper-left vertex.
                     * @param LeftTop The coordinates of the upper-left vertex.
                     */
                    void SetLeftTop(const Coord& _leftTop);

                    /**
                     * 判断参数 LeftTop 是否已赋值
                     * @return LeftTop 是否已赋值
                     */
                    bool LeftTopHasBeenSet() const;

                    /**
                     * 获取The coordinates of the upper-right vertex.
                     * @return RightTop The coordinates of the upper-right vertex.
                     */
                    Coord GetRightTop() const;

                    /**
                     * 设置The coordinates of the upper-right vertex.
                     * @param RightTop The coordinates of the upper-right vertex.
                     */
                    void SetRightTop(const Coord& _rightTop);

                    /**
                     * 判断参数 RightTop 是否已赋值
                     * @return RightTop 是否已赋值
                     */
                    bool RightTopHasBeenSet() const;

                    /**
                     * 获取The coordinates of the lower-left vertex.
                     * @return RightBottom The coordinates of the lower-left vertex.
                     */
                    Coord GetRightBottom() const;

                    /**
                     * 设置The coordinates of the lower-left vertex.
                     * @param RightBottom The coordinates of the lower-left vertex.
                     */
                    void SetRightBottom(const Coord& _rightBottom);

                    /**
                     * 判断参数 RightBottom 是否已赋值
                     * @return RightBottom 是否已赋值
                     */
                    bool RightBottomHasBeenSet() const;

                    /**
                     * 获取The coordinates of the lower-right vertex.
                     * @return LeftBottom The coordinates of the lower-right vertex.
                     */
                    Coord GetLeftBottom() const;

                    /**
                     * 设置The coordinates of the lower-right vertex.
                     * @param LeftBottom The coordinates of the lower-right vertex.
                     */
                    void SetLeftBottom(const Coord& _leftBottom);

                    /**
                     * 判断参数 LeftBottom 是否已赋值
                     * @return LeftBottom 是否已赋值
                     */
                    bool LeftBottomHasBeenSet() const;

                private:

                    /**
                     * The coordinates of the upper-left vertex.
                     */
                    Coord m_leftTop;
                    bool m_leftTopHasBeenSet;

                    /**
                     * The coordinates of the upper-right vertex.
                     */
                    Coord m_rightTop;
                    bool m_rightTopHasBeenSet;

                    /**
                     * The coordinates of the lower-left vertex.
                     */
                    Coord m_rightBottom;
                    bool m_rightBottomHasBeenSet;

                    /**
                     * The coordinates of the lower-right vertex.
                     */
                    Coord m_leftBottom;
                    bool m_leftBottomHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_POLYGON_H_
