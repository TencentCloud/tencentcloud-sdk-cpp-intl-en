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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_VALUEINFO_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_VALUEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Task flow parameter information.
                */
                class ValueInfo : public AbstractModel
                {
                public:
                    ValueInfo();
                    ~ValueInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Value ID.
                     * @return Id Value ID.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Value ID.
                     * @param _id Value ID.
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Name.
                     * @return Name Name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name.
                     * @param _name Name.
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
                     * 获取Value type, 0: unknown or empty; 1: string; 2: integer; 3: float; 4: boolean; 5: array (string array); 6: object_array (structure array); 7: object (structure).
                     * @return ValueType Value type, 0: unknown or empty; 1: string; 2: integer; 3: float; 4: boolean; 5: array (string array); 6: object_array (structure array); 7: object (structure).
                     * 
                     */
                    int64_t GetValueType() const;

                    /**
                     * 设置Value type, 0: unknown or empty; 1: string; 2: integer; 3: float; 4: boolean; 5: array (string array); 6: object_array (structure array); 7: object (structure).
                     * @param _valueType Value type, 0: unknown or empty; 1: string; 2: integer; 3: float; 4: boolean; 5: array (string array); 6: object_array (structure array); 7: object (structure).
                     * 
                     */
                    void SetValueType(const int64_t& _valueType);

                    /**
                     * 判断参数 ValueType 是否已赋值
                     * @return ValueType 是否已赋值
                     * 
                     */
                    bool ValueTypeHasBeenSet() const;

                    /**
                     * 获取String.
                     * @return ValueStr String.
                     * 
                     */
                    std::string GetValueStr() const;

                    /**
                     * 设置String.
                     * @param _valueStr String.
                     * 
                     */
                    void SetValueStr(const std::string& _valueStr);

                    /**
                     * 判断参数 ValueStr 是否已赋值
                     * @return ValueStr 是否已赋值
                     * 
                     */
                    bool ValueStrHasBeenSet() const;

                    /**
                     * 获取Int (return as a string to avoid precision loss).
                     * @return ValueInt Int (return as a string to avoid precision loss).
                     * 
                     */
                    std::string GetValueInt() const;

                    /**
                     * 设置Int (return as a string to avoid precision loss).
                     * @param _valueInt Int (return as a string to avoid precision loss).
                     * 
                     */
                    void SetValueInt(const std::string& _valueInt);

                    /**
                     * 判断参数 ValueInt 是否已赋值
                     * @return ValueInt 是否已赋值
                     * 
                     */
                    bool ValueIntHasBeenSet() const;

                    /**
                     * 获取Float.
                     * @return ValueFloat Float.
                     * 
                     */
                    double GetValueFloat() const;

                    /**
                     * 设置Float.
                     * @param _valueFloat Float.
                     * 
                     */
                    void SetValueFloat(const double& _valueFloat);

                    /**
                     * 判断参数 ValueFloat 是否已赋值
                     * @return ValueFloat 是否已赋值
                     * 
                     */
                    bool ValueFloatHasBeenSet() const;

                    /**
                     * 获取Bool.
                     * @return ValueBool Bool.
                     * 
                     */
                    bool GetValueBool() const;

                    /**
                     * 设置Bool.
                     * @param _valueBool Bool.
                     * 
                     */
                    void SetValueBool(const bool& _valueBool);

                    /**
                     * 判断参数 ValueBool 是否已赋值
                     * @return ValueBool 是否已赋值
                     * 
                     */
                    bool ValueBoolHasBeenSet() const;

                    /**
                     * 获取Array.
                     * @return ValueStrArray Array.
                     * 
                     */
                    std::vector<std::string> GetValueStrArray() const;

                    /**
                     * 设置Array.
                     * @param _valueStrArray Array.
                     * 
                     */
                    void SetValueStrArray(const std::vector<std::string>& _valueStrArray);

                    /**
                     * 判断参数 ValueStrArray 是否已赋值
                     * @return ValueStrArray 是否已赋值
                     * 
                     */
                    bool ValueStrArrayHasBeenSet() const;

                private:

                    /**
                     * Value ID.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Value type, 0: unknown or empty; 1: string; 2: integer; 3: float; 4: boolean; 5: array (string array); 6: object_array (structure array); 7: object (structure).
                     */
                    int64_t m_valueType;
                    bool m_valueTypeHasBeenSet;

                    /**
                     * String.
                     */
                    std::string m_valueStr;
                    bool m_valueStrHasBeenSet;

                    /**
                     * Int (return as a string to avoid precision loss).
                     */
                    std::string m_valueInt;
                    bool m_valueIntHasBeenSet;

                    /**
                     * Float.
                     */
                    double m_valueFloat;
                    bool m_valueFloatHasBeenSet;

                    /**
                     * Bool.
                     */
                    bool m_valueBool;
                    bool m_valueBoolHasBeenSet;

                    /**
                     * Array.
                     */
                    std::vector<std::string> m_valueStrArray;
                    bool m_valueStrArrayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_VALUEINFO_H_
