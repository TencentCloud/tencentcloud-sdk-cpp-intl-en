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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_VALUE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_VALUE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/Polygon.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * Value information
                */
                class Value : public AbstractModel
                {
                public:
                    Value();
                    ~Value() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The value of the recognized field.
                     * @return AutoContent The value of the recognized field.
                     */
                    std::string GetAutoContent() const;

                    /**
                     * 设置The value of the recognized field.
                     * @param AutoContent The value of the recognized field.
                     */
                    void SetAutoContent(const std::string& _autoContent);

                    /**
                     * 判断参数 AutoContent 是否已赋值
                     * @return AutoContent 是否已赋值
                     */
                    bool AutoContentHasBeenSet() const;

                    /**
                     * 获取The coordinates of the four vertices.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Coord The coordinates of the four vertices.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    Polygon GetCoord() const;

                    /**
                     * 设置The coordinates of the four vertices.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Coord The coordinates of the four vertices.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCoord(const Polygon& _coord);

                    /**
                     * 判断参数 Coord 是否已赋值
                     * @return Coord 是否已赋值
                     */
                    bool CoordHasBeenSet() const;

                private:

                    /**
                     * The value of the recognized field.
                     */
                    std::string m_autoContent;
                    bool m_autoContentHasBeenSet;

                    /**
                     * The coordinates of the four vertices.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    Polygon m_coord;
                    bool m_coordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_VALUE_H_
