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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_HAIR_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_HAIR_H_

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
                * Hair information
                */
                class Hair : public AbstractModel
                {
                public:
                    Hair();
                    ~Hair() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Hair length information.
The `Type` values of the `AttributeItem` include: 0: bald, 1: short hair, 2: medium hair, 3: long hair, 4: braid.
                     * @return Length Hair length information.
The `Type` values of the `AttributeItem` include: 0: bald, 1: short hair, 2: medium hair, 3: long hair, 4: braid.
                     * 
                     */
                    AttributeItem GetLength() const;

                    /**
                     * 设置Hair length information.
The `Type` values of the `AttributeItem` include: 0: bald, 1: short hair, 2: medium hair, 3: long hair, 4: braid.
                     * @param _length Hair length information.
The `Type` values of the `AttributeItem` include: 0: bald, 1: short hair, 2: medium hair, 3: long hair, 4: braid.
                     * 
                     */
                    void SetLength(const AttributeItem& _length);

                    /**
                     * 判断参数 Length 是否已赋值
                     * @return Length 是否已赋值
                     * 
                     */
                    bool LengthHasBeenSet() const;

                    /**
                     * 获取Bang information.
The `Type` values of the `AttributeItem` include: 0: no bang; 1: bang detected.
                     * @return Bang Bang information.
The `Type` values of the `AttributeItem` include: 0: no bang; 1: bang detected.
                     * 
                     */
                    AttributeItem GetBang() const;

                    /**
                     * 设置Bang information.
The `Type` values of the `AttributeItem` include: 0: no bang; 1: bang detected.
                     * @param _bang Bang information.
The `Type` values of the `AttributeItem` include: 0: no bang; 1: bang detected.
                     * 
                     */
                    void SetBang(const AttributeItem& _bang);

                    /**
                     * 判断参数 Bang 是否已赋值
                     * @return Bang 是否已赋值
                     * 
                     */
                    bool BangHasBeenSet() const;

                    /**
                     * 获取Hair color information.
The `Type` values of the `AttributeItem` include: 0: black; 1: golden; 2: brown; 3: gray.
                     * @return Color Hair color information.
The `Type` values of the `AttributeItem` include: 0: black; 1: golden; 2: brown; 3: gray.
                     * 
                     */
                    AttributeItem GetColor() const;

                    /**
                     * 设置Hair color information.
The `Type` values of the `AttributeItem` include: 0: black; 1: golden; 2: brown; 3: gray.
                     * @param _color Hair color information.
The `Type` values of the `AttributeItem` include: 0: black; 1: golden; 2: brown; 3: gray.
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
                     * Hair length information.
The `Type` values of the `AttributeItem` include: 0: bald, 1: short hair, 2: medium hair, 3: long hair, 4: braid.
                     */
                    AttributeItem m_length;
                    bool m_lengthHasBeenSet;

                    /**
                     * Bang information.
The `Type` values of the `AttributeItem` include: 0: no bang; 1: bang detected.
                     */
                    AttributeItem m_bang;
                    bool m_bangHasBeenSet;

                    /**
                     * Hair color information.
The `Type` values of the `AttributeItem` include: 0: black; 1: golden; 2: brown; 3: gray.
                     */
                    AttributeItem m_color;
                    bool m_colorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_HAIR_H_
