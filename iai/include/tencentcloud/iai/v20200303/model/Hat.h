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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_HAT_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_HAT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iai/v20200303/model/AttributeItem.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
        {
            namespace Model
            {
                /**
                * Hat information
                */
                class Hat : public AbstractModel
                {
                public:
                    Hat();
                    ~Hat() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Hat wearing status information.
The `Type` values of the `AttributeItem` include: 0: no hat; 1: general hat; 2: helmet; 3: security guard hat.
                     * @return Style Hat wearing status information.
The `Type` values of the `AttributeItem` include: 0: no hat; 1: general hat; 2: helmet; 3: security guard hat.
                     * 
                     */
                    AttributeItem GetStyle() const;

                    /**
                     * 设置Hat wearing status information.
The `Type` values of the `AttributeItem` include: 0: no hat; 1: general hat; 2: helmet; 3: security guard hat.
                     * @param _style Hat wearing status information.
The `Type` values of the `AttributeItem` include: 0: no hat; 1: general hat; 2: helmet; 3: security guard hat.
                     * 
                     */
                    void SetStyle(const AttributeItem& _style);

                    /**
                     * 判断参数 Style 是否已赋值
                     * @return Style 是否已赋值
                     * 
                     */
                    bool StyleHasBeenSet() const;

                    /**
                     * 获取Hat color.
The `Type` values of the `AttributeItem` include: 0: no hat; 1: red; 2: yellow; 3: blue; 4: black; 5: gray; 6: mixed colors.
                     * @return Color Hat color.
The `Type` values of the `AttributeItem` include: 0: no hat; 1: red; 2: yellow; 3: blue; 4: black; 5: gray; 6: mixed colors.
                     * 
                     */
                    AttributeItem GetColor() const;

                    /**
                     * 设置Hat color.
The `Type` values of the `AttributeItem` include: 0: no hat; 1: red; 2: yellow; 3: blue; 4: black; 5: gray; 6: mixed colors.
                     * @param _color Hat color.
The `Type` values of the `AttributeItem` include: 0: no hat; 1: red; 2: yellow; 3: blue; 4: black; 5: gray; 6: mixed colors.
                     * 
                     */
                    void SetColor(const AttributeItem& _color);

                    /**
                     * 判断参数 Color 是否已赋值
                     * @return Color 是否已赋值
                     * 
                     */
                    bool ColorHasBeenSet() const;

                private:

                    /**
                     * Hat wearing status information.
The `Type` values of the `AttributeItem` include: 0: no hat; 1: general hat; 2: helmet; 3: security guard hat.
                     */
                    AttributeItem m_style;
                    bool m_styleHasBeenSet;

                    /**
                     * Hat color.
The `Type` values of the `AttributeItem` include: 0: no hat; 1: red; 2: yellow; 3: blue; 4: black; 5: gray; 6: mixed colors.
                     */
                    AttributeItem m_color;
                    bool m_colorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_HAT_H_
