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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_IMAGEAREABOXINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_IMAGEAREABOXINFO_H_

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
                * Information on the box selection area in an image.
                */
                class ImageAreaBoxInfo : public AbstractModel
                {
                public:
                    ImageAreaBoxInfo();
                    ~ImageAreaBoxInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Type of the box selection area in the image. Valid values:
<li>logo: icon.</li>
<li>Text: text.</li>
Default value: logo.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Type Type of the box selection area in the image. Valid values:
<li>logo: icon.</li>
<li>Text: text.</li>
Default value: logo.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Type of the box selection area in the image. Valid values:
<li>logo: icon.</li>
<li>Text: text.</li>
Default value: logo.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _type Type of the box selection area in the image. Valid values:
<li>logo: icon.</li>
<li>Text: text.</li>
Default value: logo.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Coordinates (pixel-level) of the box selection area in the image, in the format of [x1, y1, x2, y2]. It indicates the coordinates of the top left corner and the bottom right corner. Note: The maximum value of this field is 4096.
For example, [101, 85, 111, 95].
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AreaCoordSet Coordinates (pixel-level) of the box selection area in the image, in the format of [x1, y1, x2, y2]. It indicates the coordinates of the top left corner and the bottom right corner. Note: The maximum value of this field is 4096.
For example, [101, 85, 111, 95].
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<int64_t> GetAreaCoordSet() const;

                    /**
                     * 设置Coordinates (pixel-level) of the box selection area in the image, in the format of [x1, y1, x2, y2]. It indicates the coordinates of the top left corner and the bottom right corner. Note: The maximum value of this field is 4096.
For example, [101, 85, 111, 95].
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _areaCoordSet Coordinates (pixel-level) of the box selection area in the image, in the format of [x1, y1, x2, y2]. It indicates the coordinates of the top left corner and the bottom right corner. Note: The maximum value of this field is 4096.
For example, [101, 85, 111, 95].
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAreaCoordSet(const std::vector<int64_t>& _areaCoordSet);

                    /**
                     * 判断参数 AreaCoordSet 是否已赋值
                     * @return AreaCoordSet 是否已赋值
                     * 
                     */
                    bool AreaCoordSetHasBeenSet() const;

                    /**
                     * 获取Coordinates of the box selection area in the image, in the format of [x1, y1, x2, y2]. It indicates the coordinates of the top left corner and the bottom right corner. This field takes effect when AreaCoordSet is not specified. When it indicates the pixel, the maximum value of this field is 4096.
- [0.1, 0.1, 0.3, 0.3]: indicates the ratio (values are less than 1).
- [50, 50, 350, 280]: indicates the pixel (values are greater than or equal to 1).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BoundingBox Coordinates of the box selection area in the image, in the format of [x1, y1, x2, y2]. It indicates the coordinates of the top left corner and the bottom right corner. This field takes effect when AreaCoordSet is not specified. When it indicates the pixel, the maximum value of this field is 4096.
- [0.1, 0.1, 0.3, 0.3]: indicates the ratio (values are less than 1).
- [50, 50, 350, 280]: indicates the pixel (values are greater than or equal to 1).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<double> GetBoundingBox() const;

                    /**
                     * 设置Coordinates of the box selection area in the image, in the format of [x1, y1, x2, y2]. It indicates the coordinates of the top left corner and the bottom right corner. This field takes effect when AreaCoordSet is not specified. When it indicates the pixel, the maximum value of this field is 4096.
- [0.1, 0.1, 0.3, 0.3]: indicates the ratio (values are less than 1).
- [50, 50, 350, 280]: indicates the pixel (values are greater than or equal to 1).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _boundingBox Coordinates of the box selection area in the image, in the format of [x1, y1, x2, y2]. It indicates the coordinates of the top left corner and the bottom right corner. This field takes effect when AreaCoordSet is not specified. When it indicates the pixel, the maximum value of this field is 4096.
- [0.1, 0.1, 0.3, 0.3]: indicates the ratio (values are less than 1).
- [50, 50, 350, 280]: indicates the pixel (values are greater than or equal to 1).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBoundingBox(const std::vector<double>& _boundingBox);

                    /**
                     * 判断参数 BoundingBox 是否已赋值
                     * @return BoundingBox 是否已赋值
                     * 
                     */
                    bool BoundingBoxHasBeenSet() const;

                    /**
                     * 获取BoundingBox field unit. When the value is set to 0, select the unit automatically according to the field rule. When it is set to 1, the unit is ratio. When it is set to 2, the unit is pixel.
                     * @return BoundingBoxUnitType BoundingBox field unit. When the value is set to 0, select the unit automatically according to the field rule. When it is set to 1, the unit is ratio. When it is set to 2, the unit is pixel.
                     * 
                     */
                    uint64_t GetBoundingBoxUnitType() const;

                    /**
                     * 设置BoundingBox field unit. When the value is set to 0, select the unit automatically according to the field rule. When it is set to 1, the unit is ratio. When it is set to 2, the unit is pixel.
                     * @param _boundingBoxUnitType BoundingBox field unit. When the value is set to 0, select the unit automatically according to the field rule. When it is set to 1, the unit is ratio. When it is set to 2, the unit is pixel.
                     * 
                     */
                    void SetBoundingBoxUnitType(const uint64_t& _boundingBoxUnitType);

                    /**
                     * 判断参数 BoundingBoxUnitType 是否已赋值
                     * @return BoundingBoxUnitType 是否已赋值
                     * 
                     */
                    bool BoundingBoxUnitTypeHasBeenSet() const;

                private:

                    /**
                     * Type of the box selection area in the image. Valid values:
<li>logo: icon.</li>
<li>Text: text.</li>
Default value: logo.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Coordinates (pixel-level) of the box selection area in the image, in the format of [x1, y1, x2, y2]. It indicates the coordinates of the top left corner and the bottom right corner. Note: The maximum value of this field is 4096.
For example, [101, 85, 111, 95].
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> m_areaCoordSet;
                    bool m_areaCoordSetHasBeenSet;

                    /**
                     * Coordinates of the box selection area in the image, in the format of [x1, y1, x2, y2]. It indicates the coordinates of the top left corner and the bottom right corner. This field takes effect when AreaCoordSet is not specified. When it indicates the pixel, the maximum value of this field is 4096.
- [0.1, 0.1, 0.3, 0.3]: indicates the ratio (values are less than 1).
- [50, 50, 350, 280]: indicates the pixel (values are greater than or equal to 1).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<double> m_boundingBox;
                    bool m_boundingBoxHasBeenSet;

                    /**
                     * BoundingBox field unit. When the value is set to 0, select the unit automatically according to the field rule. When it is set to 1, the unit is ratio. When it is set to 2, the unit is pixel.
                     */
                    uint64_t m_boundingBoxUnitType;
                    bool m_boundingBoxUnitTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_IMAGEAREABOXINFO_H_
