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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CCPRECISIONPLYRECORD_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CCPRECISIONPLYRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * CC precise protection configuration fields
                */
                class CCPrecisionPlyRecord : public AbstractModel
                {
                public:
                    CCPrecisionPlyRecord();
                    ~CCPrecisionPlyRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Type of the configuration field. Only `value` is supported.
                     * @return FieldType Type of the configuration field. Only `value` is supported.
                     * 
                     */
                    std::string GetFieldType() const;

                    /**
                     * 设置Type of the configuration field. Only `value` is supported.
                     * @param _fieldType Type of the configuration field. Only `value` is supported.
                     * 
                     */
                    void SetFieldType(const std::string& _fieldType);

                    /**
                     * 判断参数 FieldType 是否已赋值
                     * @return FieldType 是否已赋值
                     * 
                     */
                    bool FieldTypeHasBeenSet() const;

                    /**
                     * 获取Configuration field. Valid values: `cgi`, `ua`, `cookie`, `referer`, `accept`, and `srcip`.
                     * @return FieldName Configuration field. Valid values: `cgi`, `ua`, `cookie`, `referer`, `accept`, and `srcip`.
                     * 
                     */
                    std::string GetFieldName() const;

                    /**
                     * 设置Configuration field. Valid values: `cgi`, `ua`, `cookie`, `referer`, `accept`, and `srcip`.
                     * @param _fieldName Configuration field. Valid values: `cgi`, `ua`, `cookie`, `referer`, `accept`, and `srcip`.
                     * 
                     */
                    void SetFieldName(const std::string& _fieldName);

                    /**
                     * 判断参数 FieldName 是否已赋值
                     * @return FieldName 是否已赋值
                     * 
                     */
                    bool FieldNameHasBeenSet() const;

                    /**
                     * 获取Value of the configuration field
                     * @return Value Value of the configuration field
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Value of the configuration field
                     * @param _value Value of the configuration field
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
                     * 获取Filters values of configuration fields. `equal`: The value matches the configuration field. `not_equal`: The value does not match the configuration field. `include`: The value is included.
                     * @return ValueOperator Filters values of configuration fields. `equal`: The value matches the configuration field. `not_equal`: The value does not match the configuration field. `include`: The value is included.
                     * 
                     */
                    std::string GetValueOperator() const;

                    /**
                     * 设置Filters values of configuration fields. `equal`: The value matches the configuration field. `not_equal`: The value does not match the configuration field. `include`: The value is included.
                     * @param _valueOperator Filters values of configuration fields. `equal`: The value matches the configuration field. `not_equal`: The value does not match the configuration field. `include`: The value is included.
                     * 
                     */
                    void SetValueOperator(const std::string& _valueOperator);

                    /**
                     * 判断参数 ValueOperator 是否已赋值
                     * @return ValueOperator 是否已赋值
                     * 
                     */
                    bool ValueOperatorHasBeenSet() const;

                private:

                    /**
                     * Type of the configuration field. Only `value` is supported.
                     */
                    std::string m_fieldType;
                    bool m_fieldTypeHasBeenSet;

                    /**
                     * Configuration field. Valid values: `cgi`, `ua`, `cookie`, `referer`, `accept`, and `srcip`.
                     */
                    std::string m_fieldName;
                    bool m_fieldNameHasBeenSet;

                    /**
                     * Value of the configuration field
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Filters values of configuration fields. `equal`: The value matches the configuration field. `not_equal`: The value does not match the configuration field. `include`: The value is included.
                     */
                    std::string m_valueOperator;
                    bool m_valueOperatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CCPRECISIONPLYRECORD_H_
