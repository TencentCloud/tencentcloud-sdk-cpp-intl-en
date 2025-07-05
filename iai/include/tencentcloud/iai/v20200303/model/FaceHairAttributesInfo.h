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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_FACEHAIRATTRIBUTESINFO_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_FACEHAIRATTRIBUTESINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
        {
            namespace Model
            {
                /**
                * Hair information in face attributes.
                */
                class FaceHairAttributesInfo : public AbstractModel
                {
                public:
                    FaceHairAttributesInfo();
                    ~FaceHairAttributesInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取0: shaved head, 1: short hair, 2: medium hair, 3: long hair, 4: braid
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Length 0: shaved head, 1: short hair, 2: medium hair, 3: long hair, 4: braid
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetLength() const;

                    /**
                     * 设置0: shaved head, 1: short hair, 2: medium hair, 3: long hair, 4: braid
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _length 0: shaved head, 1: short hair, 2: medium hair, 3: long hair, 4: braid
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLength(const int64_t& _length);

                    /**
                     * 判断参数 Length 是否已赋值
                     * @return Length 是否已赋值
                     * 
                     */
                    bool LengthHasBeenSet() const;

                    /**
                     * 获取0: with bangs, 1: no bangs
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Bang 0: with bangs, 1: no bangs
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetBang() const;

                    /**
                     * 设置0: with bangs, 1: no bangs
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _bang 0: with bangs, 1: no bangs
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBang(const int64_t& _bang);

                    /**
                     * 判断参数 Bang 是否已赋值
                     * @return Bang 是否已赋值
                     * 
                     */
                    bool BangHasBeenSet() const;

                    /**
                     * 获取0: black, 1: golden, 2: brown, 3: gray
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Color 0: black, 1: golden, 2: brown, 3: gray
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetColor() const;

                    /**
                     * 设置0: black, 1: golden, 2: brown, 3: gray
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _color 0: black, 1: golden, 2: brown, 3: gray
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetColor(const int64_t& _color);

                    /**
                     * 判断参数 Color 是否已赋值
                     * @return Color 是否已赋值
                     * 
                     */
                    bool ColorHasBeenSet() const;

                private:

                    /**
                     * 0: shaved head, 1: short hair, 2: medium hair, 3: long hair, 4: braid
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_length;
                    bool m_lengthHasBeenSet;

                    /**
                     * 0: with bangs, 1: no bangs
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_bang;
                    bool m_bangHasBeenSet;

                    /**
                     * 0: black, 1: golden, 2: brown, 3: gray
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_color;
                    bool m_colorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_FACEHAIRATTRIBUTESINFO_H_
