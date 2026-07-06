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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_TEXTDETECTIONRESULT_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_TEXTDETECTIONRESULT_H_

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
                * Recognition result
                */
                class TextDetectionResult : public AbstractModel
                {
                public:
                    TextDetectionResult();
                    ~TextDetectionResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The recognized text line content.
                     * @return Value The recognized text line content.
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置The recognized text line content.
                     * @param _value The recognized text line content.
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取This field is deprecated and will always return an empty array. Usage is not recommended.
                     * @return Polygon This field is deprecated and will always return an empty array. Usage is not recommended.
                     * @deprecated
                     */
                    std::vector<Coord> GetPolygon() const;

                    /**
                     * 设置This field is deprecated and will always return an empty array. Usage is not recommended.
                     * @param _polygon This field is deprecated and will always return an empty array. Usage is not recommended.
                     * @deprecated
                     */
                    void SetPolygon(const std::vector<Coord>& _polygon);

                    /**
                     * 判断参数 Polygon 是否已赋值
                     * @return Polygon 是否已赋值
                     * @deprecated
                     */
                    bool PolygonHasBeenSet() const;

                private:

                    /**
                     * The recognized text line content.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * This field is deprecated and will always return an empty array. Usage is not recommended.
                     */
                    std::vector<Coord> m_polygon;
                    bool m_polygonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_TEXTDETECTIONRESULT_H_
