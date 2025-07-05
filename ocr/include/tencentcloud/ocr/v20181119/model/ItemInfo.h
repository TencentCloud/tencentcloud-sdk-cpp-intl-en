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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_ITEMINFO_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_ITEMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/Key.h>
#include <tencentcloud/ocr/v20181119/model/Value.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * Structured element group
                */
                class ItemInfo : public AbstractModel
                {
                public:
                    ItemInfo();
                    ~ItemInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The key information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Key The key information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    Key GetKey() const;

                    /**
                     * 设置The key information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _key The key information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetKey(const Key& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取The value information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Value The value information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    Value GetValue() const;

                    /**
                     * 设置The value information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _value The value information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetValue(const Value& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * The key information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    Key m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * The value information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    Value m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_ITEMINFO_H_
