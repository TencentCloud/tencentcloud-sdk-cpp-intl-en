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

#ifndef TENCENTCLOUD_CIAM_V20220331_MODEL_MEMBERMAP_H_
#define TENCENTCLOUD_CIAM_V20220331_MODEL_MEMBERMAP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ciam
    {
        namespace V20220331
        {
            namespace Model
            {
                /**
                * Map data type
                */
                class MemberMap : public AbstractModel
                {
                public:
                    MemberMap();
                    ~MemberMap() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Key
                     * @return Name Key
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Key
                     * @param _name Key
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Value
                     * @return Value Value
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Value
                     * @param _value Value
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
                     * 获取Type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Type Type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _type Type
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * Key
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Value
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CIAM_V20220331_MODEL_MEMBERMAP_H_
