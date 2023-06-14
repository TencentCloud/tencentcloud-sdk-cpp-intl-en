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

#ifndef TENCENTCLOUD_GPM_V20200820_MODEL_MATCHATTRIBUTE_H_
#define TENCENTCLOUD_GPM_V20200820_MODEL_MATCHATTRIBUTE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gpm/v20200820/model/AttributeMap.h>


namespace TencentCloud
{
    namespace Gpm
    {
        namespace V20200820
        {
            namespace Model
            {
                /**
                * Player attributes for matching
                */
                class MatchAttribute : public AbstractModel
                {
                public:
                    MatchAttribute();
                    ~MatchAttribute() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Attribute name. It can contain up to 128 characters, supporting [a-zA-Z0-9-\.]*.
                     * @return Name Attribute name. It can contain up to 128 characters, supporting [a-zA-Z0-9-\.]*.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Attribute name. It can contain up to 128 characters, supporting [a-zA-Z0-9-\.]*.
                     * @param _name Attribute name. It can contain up to 128 characters, supporting [a-zA-Z0-9-\.]*.
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
                     * 获取Attribute type. 0: number, 1: string. Default value: 0
                     * @return Type Attribute type. 0: number, 1: string. Default value: 0
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置Attribute type. 0: number, 1: string. Default value: 0
                     * @param _type Attribute type. 0: number, 1: string. Default value: 0
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
                     * 获取Numeric attribute value. Default value: 0.0
                     * @return NumberValue Numeric attribute value. Default value: 0.0
                     * 
                     */
                    double GetNumberValue() const;

                    /**
                     * 设置Numeric attribute value. Default value: 0.0
                     * @param _numberValue Numeric attribute value. Default value: 0.0
                     * 
                     */
                    void SetNumberValue(const double& _numberValue);

                    /**
                     * 判断参数 NumberValue 是否已赋值
                     * @return NumberValue 是否已赋值
                     * 
                     */
                    bool NumberValueHasBeenSet() const;

                    /**
                     * 获取String attribute value. Up to 128 characters are allowed. Default value: ""
                     * @return StringValue String attribute value. Up to 128 characters are allowed. Default value: ""
                     * 
                     */
                    std::string GetStringValue() const;

                    /**
                     * 设置String attribute value. Up to 128 characters are allowed. Default value: ""
                     * @param _stringValue String attribute value. Up to 128 characters are allowed. Default value: ""
                     * 
                     */
                    void SetStringValue(const std::string& _stringValue);

                    /**
                     * 判断参数 StringValue 是否已赋值
                     * @return StringValue 是否已赋值
                     * 
                     */
                    bool StringValueHasBeenSet() const;

                    /**
                     * 获取List attribute value
                     * @return ListValue List attribute value
                     * 
                     */
                    std::vector<std::string> GetListValue() const;

                    /**
                     * 设置List attribute value
                     * @param _listValue List attribute value
                     * 
                     */
                    void SetListValue(const std::vector<std::string>& _listValue);

                    /**
                     * 判断参数 ListValue 是否已赋值
                     * @return ListValue 是否已赋值
                     * 
                     */
                    bool ListValueHasBeenSet() const;

                    /**
                     * 获取Map attribute value
                     * @return MapValue Map attribute value
                     * 
                     */
                    std::vector<AttributeMap> GetMapValue() const;

                    /**
                     * 设置Map attribute value
                     * @param _mapValue Map attribute value
                     * 
                     */
                    void SetMapValue(const std::vector<AttributeMap>& _mapValue);

                    /**
                     * 判断参数 MapValue 是否已赋值
                     * @return MapValue 是否已赋值
                     * 
                     */
                    bool MapValueHasBeenSet() const;

                private:

                    /**
                     * Attribute name. It can contain up to 128 characters, supporting [a-zA-Z0-9-\.]*.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Attribute type. 0: number, 1: string. Default value: 0
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Numeric attribute value. Default value: 0.0
                     */
                    double m_numberValue;
                    bool m_numberValueHasBeenSet;

                    /**
                     * String attribute value. Up to 128 characters are allowed. Default value: ""
                     */
                    std::string m_stringValue;
                    bool m_stringValueHasBeenSet;

                    /**
                     * List attribute value
                     */
                    std::vector<std::string> m_listValue;
                    bool m_listValueHasBeenSet;

                    /**
                     * Map attribute value
                     */
                    std::vector<AttributeMap> m_mapValue;
                    bool m_mapValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GPM_V20200820_MODEL_MATCHATTRIBUTE_H_
