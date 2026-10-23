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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMACTIONPARAMETER_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMACTIONPARAMETER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Parameter content of a single field in custom configuration.
                */
                class CustomActionParameter : public AbstractModel
                {
                public:
                    CustomActionParameter();
                    ~CustomActionParameter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Field Name of each parameter under custom configuration.</p><p>You can get it through the API return value CustomActionSet[].Parameters[].Name of DescribeAvailableCustomActionsForRuleEngine, such as "Seconds", "Ports", "StatusCode".</p>
                     * @return Name <p>Field Name of each parameter under custom configuration.</p><p>You can get it through the API return value CustomActionSet[].Parameters[].Name of DescribeAvailableCustomActionsForRuleEngine, such as "Seconds", "Ports", "StatusCode".</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Field Name of each parameter under custom configuration.</p><p>You can get it through the API return value CustomActionSet[].Parameters[].Name of DescribeAvailableCustomActionsForRuleEngine, such as "Seconds", "Ports", "StatusCode".</p>
                     * @param _name <p>Field Name of each parameter under custom configuration.</p><p>You can get it through the API return value CustomActionSet[].Parameters[].Name of DescribeAvailableCustomActionsForRuleEngine, such as "Seconds", "Ports", "StatusCode".</p>
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
                     * 获取<p>Data type of each parameter field value under custom configuration.</p><p>Enumeration value:</p><ul><li>String: string type.</li><li>Integer: integer type.</li><li>Float: floating-point type.</li><li>Boolean: boolean type.</li><li>ArrayOfString: string array type.</li><li>ArrayOfInteger: integer array type.</li><li>ArrayOfFloat: floating-point number array type.</li></ul><p>It can be obtained through the API return value CustomActionSet[].Parameters[].Type of DescribeAvailableCustomActionsForRuleEngine.</p>
                     * @return ValueType <p>Data type of each parameter field value under custom configuration.</p><p>Enumeration value:</p><ul><li>String: string type.</li><li>Integer: integer type.</li><li>Float: floating-point type.</li><li>Boolean: boolean type.</li><li>ArrayOfString: string array type.</li><li>ArrayOfInteger: integer array type.</li><li>ArrayOfFloat: floating-point number array type.</li></ul><p>It can be obtained through the API return value CustomActionSet[].Parameters[].Type of DescribeAvailableCustomActionsForRuleEngine.</p>
                     * 
                     */
                    std::string GetValueType() const;

                    /**
                     * 设置<p>Data type of each parameter field value under custom configuration.</p><p>Enumeration value:</p><ul><li>String: string type.</li><li>Integer: integer type.</li><li>Float: floating-point type.</li><li>Boolean: boolean type.</li><li>ArrayOfString: string array type.</li><li>ArrayOfInteger: integer array type.</li><li>ArrayOfFloat: floating-point number array type.</li></ul><p>It can be obtained through the API return value CustomActionSet[].Parameters[].Type of DescribeAvailableCustomActionsForRuleEngine.</p>
                     * @param _valueType <p>Data type of each parameter field value under custom configuration.</p><p>Enumeration value:</p><ul><li>String: string type.</li><li>Integer: integer type.</li><li>Float: floating-point type.</li><li>Boolean: boolean type.</li><li>ArrayOfString: string array type.</li><li>ArrayOfInteger: integer array type.</li><li>ArrayOfFloat: floating-point number array type.</li></ul><p>It can be obtained through the API return value CustomActionSet[].Parameters[].Type of DescribeAvailableCustomActionsForRuleEngine.</p>
                     * 
                     */
                    void SetValueType(const std::string& _valueType);

                    /**
                     * 判断参数 ValueType 是否已赋值
                     * @return ValueType 是否已赋值
                     * 
                     */
                    bool ValueTypeHasBeenSet() const;

                    /**
                     * 获取<p>Parameter value of string type. This parameter is required when ValueType is String.</p><p>You can get the default value, measurement unit, limit and other details of the parameter value through the CustomActionSet[].Parameters in the API return value of DescribeAvailableCustomActionsForRuleEngine.</p>
                     * @return StringValue <p>Parameter value of string type. This parameter is required when ValueType is String.</p><p>You can get the default value, measurement unit, limit and other details of the parameter value through the CustomActionSet[].Parameters in the API return value of DescribeAvailableCustomActionsForRuleEngine.</p>
                     * 
                     */
                    std::string GetStringValue() const;

                    /**
                     * 设置<p>Parameter value of string type. This parameter is required when ValueType is String.</p><p>You can get the default value, measurement unit, limit and other details of the parameter value through the CustomActionSet[].Parameters in the API return value of DescribeAvailableCustomActionsForRuleEngine.</p>
                     * @param _stringValue <p>Parameter value of string type. This parameter is required when ValueType is String.</p><p>You can get the default value, measurement unit, limit and other details of the parameter value through the CustomActionSet[].Parameters in the API return value of DescribeAvailableCustomActionsForRuleEngine.</p>
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
                     * 获取<p>Integer type parameter value. This parameter is required when ValueType is Integer.</p><p>You can get the default value, measurement unit, limit, and other details of the parameter value through the CustomActionSet[].Parameters field in the API return value of DescribeAvailableCustomActionsForRuleEngine.</p>
                     * @return IntegerValue <p>Integer type parameter value. This parameter is required when ValueType is Integer.</p><p>You can get the default value, measurement unit, limit, and other details of the parameter value through the CustomActionSet[].Parameters field in the API return value of DescribeAvailableCustomActionsForRuleEngine.</p>
                     * 
                     */
                    int64_t GetIntegerValue() const;

                    /**
                     * 设置<p>Integer type parameter value. This parameter is required when ValueType is Integer.</p><p>You can get the default value, measurement unit, limit, and other details of the parameter value through the CustomActionSet[].Parameters field in the API return value of DescribeAvailableCustomActionsForRuleEngine.</p>
                     * @param _integerValue <p>Integer type parameter value. This parameter is required when ValueType is Integer.</p><p>You can get the default value, measurement unit, limit, and other details of the parameter value through the CustomActionSet[].Parameters field in the API return value of DescribeAvailableCustomActionsForRuleEngine.</p>
                     * 
                     */
                    void SetIntegerValue(const int64_t& _integerValue);

                    /**
                     * 判断参数 IntegerValue 是否已赋值
                     * @return IntegerValue 是否已赋值
                     * 
                     */
                    bool IntegerValueHasBeenSet() const;

                    /**
                     * 获取<p>Floating-point type parameter value. This parameter is required when ValueType is Float.</p><p>You can get the default value, measurement unit, limitation, and other details of the parameter value through the CustomActionSet[].Parameters field in the API return value of DescribeAvailableCustomActionsForRuleEngine.</p>
                     * @return FloatValue <p>Floating-point type parameter value. This parameter is required when ValueType is Float.</p><p>You can get the default value, measurement unit, limitation, and other details of the parameter value through the CustomActionSet[].Parameters field in the API return value of DescribeAvailableCustomActionsForRuleEngine.</p>
                     * 
                     */
                    double GetFloatValue() const;

                    /**
                     * 设置<p>Floating-point type parameter value. This parameter is required when ValueType is Float.</p><p>You can get the default value, measurement unit, limitation, and other details of the parameter value through the CustomActionSet[].Parameters field in the API return value of DescribeAvailableCustomActionsForRuleEngine.</p>
                     * @param _floatValue <p>Floating-point type parameter value. This parameter is required when ValueType is Float.</p><p>You can get the default value, measurement unit, limitation, and other details of the parameter value through the CustomActionSet[].Parameters field in the API return value of DescribeAvailableCustomActionsForRuleEngine.</p>
                     * 
                     */
                    void SetFloatValue(const double& _floatValue);

                    /**
                     * 判断参数 FloatValue 是否已赋值
                     * @return FloatValue 是否已赋值
                     * 
                     */
                    bool FloatValueHasBeenSet() const;

                    /**
                     * 获取<p>Boolean type parameter value. This parameter is required when ValueType is Boolean.</p><p>You can get the default value, measurement unit, limitation, and other details of the parameter value through the CustomActionSet[].Parameters in the API return value of DescribeAvailableCustomActionsForRuleEngine.</p>
                     * @return BooleanValue <p>Boolean type parameter value. This parameter is required when ValueType is Boolean.</p><p>You can get the default value, measurement unit, limitation, and other details of the parameter value through the CustomActionSet[].Parameters in the API return value of DescribeAvailableCustomActionsForRuleEngine.</p>
                     * 
                     */
                    bool GetBooleanValue() const;

                    /**
                     * 设置<p>Boolean type parameter value. This parameter is required when ValueType is Boolean.</p><p>You can get the default value, measurement unit, limitation, and other details of the parameter value through the CustomActionSet[].Parameters in the API return value of DescribeAvailableCustomActionsForRuleEngine.</p>
                     * @param _booleanValue <p>Boolean type parameter value. This parameter is required when ValueType is Boolean.</p><p>You can get the default value, measurement unit, limitation, and other details of the parameter value through the CustomActionSet[].Parameters in the API return value of DescribeAvailableCustomActionsForRuleEngine.</p>
                     * 
                     */
                    void SetBooleanValue(const bool& _booleanValue);

                    /**
                     * 判断参数 BooleanValue 是否已赋值
                     * @return BooleanValue 是否已赋值
                     * 
                     */
                    bool BooleanValueHasBeenSet() const;

                    /**
                     * 获取<p>String array type parameter value. This parameter is required when ValueType is ArrayOfString.</p><p>You can get the default value, measurement unit, and limitation of the parameter value through the API return value CustomActionSet[].Parameters of the DescribeAvailableCustomActionsForRuleEngine API.</p>
                     * @return StringArrayValue <p>String array type parameter value. This parameter is required when ValueType is ArrayOfString.</p><p>You can get the default value, measurement unit, and limitation of the parameter value through the API return value CustomActionSet[].Parameters of the DescribeAvailableCustomActionsForRuleEngine API.</p>
                     * 
                     */
                    std::vector<std::string> GetStringArrayValue() const;

                    /**
                     * 设置<p>String array type parameter value. This parameter is required when ValueType is ArrayOfString.</p><p>You can get the default value, measurement unit, and limitation of the parameter value through the API return value CustomActionSet[].Parameters of the DescribeAvailableCustomActionsForRuleEngine API.</p>
                     * @param _stringArrayValue <p>String array type parameter value. This parameter is required when ValueType is ArrayOfString.</p><p>You can get the default value, measurement unit, and limitation of the parameter value through the API return value CustomActionSet[].Parameters of the DescribeAvailableCustomActionsForRuleEngine API.</p>
                     * 
                     */
                    void SetStringArrayValue(const std::vector<std::string>& _stringArrayValue);

                    /**
                     * 判断参数 StringArrayValue 是否已赋值
                     * @return StringArrayValue 是否已赋值
                     * 
                     */
                    bool StringArrayValueHasBeenSet() const;

                    /**
                     * 获取<p>Array type parameter value of integer. This parameter is required when ValueType is ArrayOfInteger.</p><p>You can get the default value, measurement unit, limit, and other details of the parameter value through the API return value CustomActionSet[].Parameters of the DescribeAvailableCustomActionsForRuleEngine API.</p>
                     * @return IntegerArrayValue <p>Array type parameter value of integer. This parameter is required when ValueType is ArrayOfInteger.</p><p>You can get the default value, measurement unit, limit, and other details of the parameter value through the API return value CustomActionSet[].Parameters of the DescribeAvailableCustomActionsForRuleEngine API.</p>
                     * 
                     */
                    std::vector<int64_t> GetIntegerArrayValue() const;

                    /**
                     * 设置<p>Array type parameter value of integer. This parameter is required when ValueType is ArrayOfInteger.</p><p>You can get the default value, measurement unit, limit, and other details of the parameter value through the API return value CustomActionSet[].Parameters of the DescribeAvailableCustomActionsForRuleEngine API.</p>
                     * @param _integerArrayValue <p>Array type parameter value of integer. This parameter is required when ValueType is ArrayOfInteger.</p><p>You can get the default value, measurement unit, limit, and other details of the parameter value through the API return value CustomActionSet[].Parameters of the DescribeAvailableCustomActionsForRuleEngine API.</p>
                     * 
                     */
                    void SetIntegerArrayValue(const std::vector<int64_t>& _integerArrayValue);

                    /**
                     * 判断参数 IntegerArrayValue 是否已赋值
                     * @return IntegerArrayValue 是否已赋值
                     * 
                     */
                    bool IntegerArrayValueHasBeenSet() const;

                    /**
                     * 获取<p>Floating-point number array type parameter value. This parameter is required when ValueType is ArrayOfFloat.</p><p>You can get the default value, measurement unit, limitation, and other descriptions of the parameter value through the CustomActionSet[].Parameters field in the API return value of DescribeAvailableCustomActionsForRuleEngine.</p>
                     * @return FloatArrayValue <p>Floating-point number array type parameter value. This parameter is required when ValueType is ArrayOfFloat.</p><p>You can get the default value, measurement unit, limitation, and other descriptions of the parameter value through the CustomActionSet[].Parameters field in the API return value of DescribeAvailableCustomActionsForRuleEngine.</p>
                     * 
                     */
                    std::vector<double> GetFloatArrayValue() const;

                    /**
                     * 设置<p>Floating-point number array type parameter value. This parameter is required when ValueType is ArrayOfFloat.</p><p>You can get the default value, measurement unit, limitation, and other descriptions of the parameter value through the CustomActionSet[].Parameters field in the API return value of DescribeAvailableCustomActionsForRuleEngine.</p>
                     * @param _floatArrayValue <p>Floating-point number array type parameter value. This parameter is required when ValueType is ArrayOfFloat.</p><p>You can get the default value, measurement unit, limitation, and other descriptions of the parameter value through the CustomActionSet[].Parameters field in the API return value of DescribeAvailableCustomActionsForRuleEngine.</p>
                     * 
                     */
                    void SetFloatArrayValue(const std::vector<double>& _floatArrayValue);

                    /**
                     * 判断参数 FloatArrayValue 是否已赋值
                     * @return FloatArrayValue 是否已赋值
                     * 
                     */
                    bool FloatArrayValueHasBeenSet() const;

                private:

                    /**
                     * <p>Field Name of each parameter under custom configuration.</p><p>You can get it through the API return value CustomActionSet[].Parameters[].Name of DescribeAvailableCustomActionsForRuleEngine, such as "Seconds", "Ports", "StatusCode".</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Data type of each parameter field value under custom configuration.</p><p>Enumeration value:</p><ul><li>String: string type.</li><li>Integer: integer type.</li><li>Float: floating-point type.</li><li>Boolean: boolean type.</li><li>ArrayOfString: string array type.</li><li>ArrayOfInteger: integer array type.</li><li>ArrayOfFloat: floating-point number array type.</li></ul><p>It can be obtained through the API return value CustomActionSet[].Parameters[].Type of DescribeAvailableCustomActionsForRuleEngine.</p>
                     */
                    std::string m_valueType;
                    bool m_valueTypeHasBeenSet;

                    /**
                     * <p>Parameter value of string type. This parameter is required when ValueType is String.</p><p>You can get the default value, measurement unit, limit and other details of the parameter value through the CustomActionSet[].Parameters in the API return value of DescribeAvailableCustomActionsForRuleEngine.</p>
                     */
                    std::string m_stringValue;
                    bool m_stringValueHasBeenSet;

                    /**
                     * <p>Integer type parameter value. This parameter is required when ValueType is Integer.</p><p>You can get the default value, measurement unit, limit, and other details of the parameter value through the CustomActionSet[].Parameters field in the API return value of DescribeAvailableCustomActionsForRuleEngine.</p>
                     */
                    int64_t m_integerValue;
                    bool m_integerValueHasBeenSet;

                    /**
                     * <p>Floating-point type parameter value. This parameter is required when ValueType is Float.</p><p>You can get the default value, measurement unit, limitation, and other details of the parameter value through the CustomActionSet[].Parameters field in the API return value of DescribeAvailableCustomActionsForRuleEngine.</p>
                     */
                    double m_floatValue;
                    bool m_floatValueHasBeenSet;

                    /**
                     * <p>Boolean type parameter value. This parameter is required when ValueType is Boolean.</p><p>You can get the default value, measurement unit, limitation, and other details of the parameter value through the CustomActionSet[].Parameters in the API return value of DescribeAvailableCustomActionsForRuleEngine.</p>
                     */
                    bool m_booleanValue;
                    bool m_booleanValueHasBeenSet;

                    /**
                     * <p>String array type parameter value. This parameter is required when ValueType is ArrayOfString.</p><p>You can get the default value, measurement unit, and limitation of the parameter value through the API return value CustomActionSet[].Parameters of the DescribeAvailableCustomActionsForRuleEngine API.</p>
                     */
                    std::vector<std::string> m_stringArrayValue;
                    bool m_stringArrayValueHasBeenSet;

                    /**
                     * <p>Array type parameter value of integer. This parameter is required when ValueType is ArrayOfInteger.</p><p>You can get the default value, measurement unit, limit, and other details of the parameter value through the API return value CustomActionSet[].Parameters of the DescribeAvailableCustomActionsForRuleEngine API.</p>
                     */
                    std::vector<int64_t> m_integerArrayValue;
                    bool m_integerArrayValueHasBeenSet;

                    /**
                     * <p>Floating-point number array type parameter value. This parameter is required when ValueType is ArrayOfFloat.</p><p>You can get the default value, measurement unit, limitation, and other descriptions of the parameter value through the CustomActionSet[].Parameters field in the API return value of DescribeAvailableCustomActionsForRuleEngine.</p>
                     */
                    std::vector<double> m_floatArrayValue;
                    bool m_floatArrayValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMACTIONPARAMETER_H_
