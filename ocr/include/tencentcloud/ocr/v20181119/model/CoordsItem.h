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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_COORDSITEM_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_COORDSITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/Polygon.h>
#include <tencentcloud/ocr/v20181119/model/ItemCoord.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * Detected coordinate recognition information.
                */
                class CoordsItem : public AbstractModel
                {
                public:
                    CoordsItem();
                    ~CoordsItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Coordinates of four points in the image.
                     * @return Polygon Coordinates of four points in the image.
                     * 
                     */
                    Polygon GetPolygon() const;

                    /**
                     * 设置Coordinates of four points in the image.
                     * @param _polygon Coordinates of four points in the image.
                     * 
                     */
                    void SetPolygon(const Polygon& _polygon);

                    /**
                     * 判断参数 Polygon 是否已赋值
                     * @return Polygon 是否已赋值
                     * 
                     */
                    bool PolygonHasBeenSet() const;

                    /**
                     * 获取Coordinates of two points in the image.
                     * @return Coords Coordinates of two points in the image.
                     * 
                     */
                    ItemCoord GetCoords() const;

                    /**
                     * 设置Coordinates of two points in the image.
                     * @param _coords Coordinates of two points in the image.
                     * 
                     */
                    void SetCoords(const ItemCoord& _coords);

                    /**
                     * 判断参数 Coords 是否已赋值
                     * @return Coords 是否已赋值
                     * 
                     */
                    bool CoordsHasBeenSet() const;

                private:

                    /**
                     * Coordinates of four points in the image.
                     */
                    Polygon m_polygon;
                    bool m_polygonHasBeenSet;

                    /**
                     * Coordinates of two points in the image.
                     */
                    ItemCoord m_coords;
                    bool m_coordsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_COORDSITEM_H_
