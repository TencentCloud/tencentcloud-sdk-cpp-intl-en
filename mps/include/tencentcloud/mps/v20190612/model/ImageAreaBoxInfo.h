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
                     * 获取Coordinates (pixel-level) of the box selection area in the image. Format: [x1, y1, x2, y2], which indicates the coordinates of the top left corner and the bottom right corner.
For example, [101, 85, 111, 95].
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return AreaCoordSet Coordinates (pixel-level) of the box selection area in the image. Format: [x1, y1, x2, y2], which indicates the coordinates of the top left corner and the bottom right corner.
For example, [101, 85, 111, 95].
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<int64_t> GetAreaCoordSet() const;

                    /**
                     * 设置Coordinates (pixel-level) of the box selection area in the image. Format: [x1, y1, x2, y2], which indicates the coordinates of the top left corner and the bottom right corner.
For example, [101, 85, 111, 95].
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _areaCoordSet Coordinates (pixel-level) of the box selection area in the image. Format: [x1, y1, x2, y2], which indicates the coordinates of the top left corner and the bottom right corner.
For example, [101, 85, 111, 95].
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Coordinates of the box selection area in the image. Format: [x1, y1, x2, y2], which indicates the coordinates of the top left corner and the bottom right corner. This parameter takes effect when AreaCoordSet is not specified.
 - [0.1, 0.1, 0.3, 0.3]: Indicates the ratio (values are less than 1).
 -[50, 50, 350, 280]: Indicates the pixel (values are greater than or equal to 1).
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return BoundingBox Coordinates of the box selection area in the image. Format: [x1, y1, x2, y2], which indicates the coordinates of the top left corner and the bottom right corner. This parameter takes effect when AreaCoordSet is not specified.
 - [0.1, 0.1, 0.3, 0.3]: Indicates the ratio (values are less than 1).
 -[50, 50, 350, 280]: Indicates the pixel (values are greater than or equal to 1).
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<double> GetBoundingBox() const;

                    /**
                     * 设置Coordinates of the box selection area in the image. Format: [x1, y1, x2, y2], which indicates the coordinates of the top left corner and the bottom right corner. This parameter takes effect when AreaCoordSet is not specified.
 - [0.1, 0.1, 0.3, 0.3]: Indicates the ratio (values are less than 1).
 -[50, 50, 350, 280]: Indicates the pixel (values are greater than or equal to 1).
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _boundingBox Coordinates of the box selection area in the image. Format: [x1, y1, x2, y2], which indicates the coordinates of the top left corner and the bottom right corner. This parameter takes effect when AreaCoordSet is not specified.
 - [0.1, 0.1, 0.3, 0.3]: Indicates the ratio (values are less than 1).
 -[50, 50, 350, 280]: Indicates the pixel (values are greater than or equal to 1).
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetBoundingBox(const std::vector<double>& _boundingBox);

                    /**
                     * 判断参数 BoundingBox 是否已赋值
                     * @return BoundingBox 是否已赋值
                     * 
                     */
                    bool BoundingBoxHasBeenSet() const;

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
                     * Coordinates (pixel-level) of the box selection area in the image. Format: [x1, y1, x2, y2], which indicates the coordinates of the top left corner and the bottom right corner.
For example, [101, 85, 111, 95].
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<int64_t> m_areaCoordSet;
                    bool m_areaCoordSetHasBeenSet;

                    /**
                     * Coordinates of the box selection area in the image. Format: [x1, y1, x2, y2], which indicates the coordinates of the top left corner and the bottom right corner. This parameter takes effect when AreaCoordSet is not specified.
 - [0.1, 0.1, 0.3, 0.3]: Indicates the ratio (values are less than 1).
 -[50, 50, 350, 280]: Indicates the pixel (values are greater than or equal to 1).
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<double> m_boundingBox;
                    bool m_boundingBoxHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_IMAGEAREABOXINFO_H_
