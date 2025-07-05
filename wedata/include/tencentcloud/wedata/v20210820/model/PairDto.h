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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_PAIRDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_PAIRDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Key-Value Pair
                */
                class PairDto : public AbstractModel
                {
                public:
                    PairDto();
                    ~PairDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Key Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Key Key Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Key Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _key Key Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取ValueNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Value ValueNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置ValueNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _value ValueNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * Key Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * ValueNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_PAIRDTO_H_
