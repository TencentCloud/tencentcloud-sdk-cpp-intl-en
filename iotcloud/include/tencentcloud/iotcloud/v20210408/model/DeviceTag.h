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

#ifndef TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DEVICETAG_H_
#define TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DEVICETAG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * Device attribute
                */
                class DeviceTag : public AbstractModel
                {
                public:
                    DeviceTag();
                    ~DeviceTag() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Attribute name
                     * @return Tag Attribute name
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置Attribute name
                     * @param _tag Attribute name
                     * 
                     */
                    void SetTag(const std::string& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取Attribute value type. `1`: integer; `2`: string
                     * @return Type Attribute value type. `1`: integer; `2`: string
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置Attribute value type. `1`: integer; `2`: string
                     * @param _type Attribute value type. `1`: integer; `2`: string
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Attribute value
                     * @return Value Attribute value
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Attribute value
                     * @param _value Attribute value
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
                     * 获取Attribute description
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return Name Attribute description
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Attribute description
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @param _name Attribute description
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * Attribute name
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * Attribute value type. `1`: integer; `2`: string
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Attribute value
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Attribute description
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DEVICETAG_H_
