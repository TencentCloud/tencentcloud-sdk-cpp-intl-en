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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_RULEENGINECUSTOMACTIONPARAMETERSCHEMA_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_RULEENGINECUSTOMACTIONPARAMETERSCHEMA_H_

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
                * Rule engine operation custom configuration parameter structure definition.
                */
                class RuleEngineCustomActionParameterSchema : public AbstractModel
                {
                public:
                    RuleEngineCustomActionParameterSchema();
                    ~RuleEngineCustomActionParameterSchema() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Parameter field name.</p>
                     * @return Name <p>Parameter field name.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Parameter field name.</p>
                     * @param _name <p>Parameter field name.</p>
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
                     * 获取<p>Parameter field data type. Valid values: <li>Boolean: boolean;</li><li>Integer: integer;</li><li>Float: floating-point;</li><li>String: string;</li><li>ArrayOfInteger: integer array;</li><li>ArrayOfFloat: floating-point array;</li><li>ArrayOfString: array of strings.</li></p>
                     * @return ValueType <p>Parameter field data type. Valid values: <li>Boolean: boolean;</li><li>Integer: integer;</li><li>Float: floating-point;</li><li>String: string;</li><li>ArrayOfInteger: integer array;</li><li>ArrayOfFloat: floating-point array;</li><li>ArrayOfString: array of strings.</li></p>
                     * 
                     */
                    std::string GetValueType() const;

                    /**
                     * 设置<p>Parameter field data type. Valid values: <li>Boolean: boolean;</li><li>Integer: integer;</li><li>Float: floating-point;</li><li>String: string;</li><li>ArrayOfInteger: integer array;</li><li>ArrayOfFloat: floating-point array;</li><li>ArrayOfString: array of strings.</li></p>
                     * @param _valueType <p>Parameter field data type. Valid values: <li>Boolean: boolean;</li><li>Integer: integer;</li><li>Float: floating-point;</li><li>String: string;</li><li>ArrayOfInteger: integer array;</li><li>ArrayOfFloat: floating-point array;</li><li>ArrayOfString: array of strings.</li></p>
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
                     * 获取<p>Parameter field description.</p>
                     * @return Description <p>Parameter field description.</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Parameter field description.</p>
                     * @param _description <p>Parameter field description.</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>Field default value of the parameter.</p>
                     * @return Default <p>Field default value of the parameter.</p>
                     * 
                     */
                    std::string GetDefault() const;

                    /**
                     * 设置<p>Field default value of the parameter.</p>
                     * @param _default <p>Field default value of the parameter.</p>
                     * 
                     */
                    void SetDefault(const std::string& _default);

                    /**
                     * 判断参数 Default 是否已赋值
                     * @return Default 是否已赋值
                     * 
                     */
                    bool DefaultHasBeenSet() const;

                    /**
                     * 获取<p>Parameter field unit.</p>
                     * @return Unit <p>Parameter field unit.</p>
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置<p>Parameter field unit.</p>
                     * @param _unit <p>Parameter field unit.</p>
                     * 
                     */
                    void SetUnit(const std::string& _unit);

                    /**
                     * 判断参数 Unit 是否已赋值
                     * @return Unit 是否已赋值
                     * 
                     */
                    bool UnitHasBeenSet() const;

                    /**
                     * 获取<p>Whether the parameter field is required or not.</p><p>Default value: false</p><p>If filled, it is applicable to ALL parameter field type verification; if left blank, no verification.</p>
                     * @return Required <p>Whether the parameter field is required or not.</p><p>Default value: false</p><p>If filled, it is applicable to ALL parameter field type verification; if left blank, no verification.</p>
                     * 
                     */
                    bool GetRequired() const;

                    /**
                     * 设置<p>Whether the parameter field is required or not.</p><p>Default value: false</p><p>If filled, it is applicable to ALL parameter field type verification; if left blank, no verification.</p>
                     * @param _required <p>Whether the parameter field is required or not.</p><p>Default value: false</p><p>If filled, it is applicable to ALL parameter field type verification; if left blank, no verification.</p>
                     * 
                     */
                    void SetRequired(const bool& _required);

                    /**
                     * 判断参数 Required 是否已赋值
                     * @return Required 是否已赋值
                     * 
                     */
                    bool RequiredHasBeenSet() const;

                    /**
                     * 获取<p>Minimum value of the parameter field.</p><p>If filled, it is used to validate the value for integer, floating-point number, integer array, and floating-point number array type parameters; if left blank, there is no verification.</p>
                     * @return MinValue <p>Minimum value of the parameter field.</p><p>If filled, it is used to validate the value for integer, floating-point number, integer array, and floating-point number array type parameters; if left blank, there is no verification.</p>
                     * 
                     */
                    double GetMinValue() const;

                    /**
                     * 设置<p>Minimum value of the parameter field.</p><p>If filled, it is used to validate the value for integer, floating-point number, integer array, and floating-point number array type parameters; if left blank, there is no verification.</p>
                     * @param _minValue <p>Minimum value of the parameter field.</p><p>If filled, it is used to validate the value for integer, floating-point number, integer array, and floating-point number array type parameters; if left blank, there is no verification.</p>
                     * 
                     */
                    void SetMinValue(const double& _minValue);

                    /**
                     * 判断参数 MinValue 是否已赋值
                     * @return MinValue 是否已赋值
                     * 
                     */
                    bool MinValueHasBeenSet() const;

                    /**
                     * 获取<p>Maximum value of the parameter field.</p><p>If filled, it is used for value verification of type parameters for integers, floating-point numbers, integer arrays, and floating-point number arrays. If left blank, there is no verification.</p>
                     * @return MaxValue <p>Maximum value of the parameter field.</p><p>If filled, it is used for value verification of type parameters for integers, floating-point numbers, integer arrays, and floating-point number arrays. If left blank, there is no verification.</p>
                     * 
                     */
                    double GetMaxValue() const;

                    /**
                     * 设置<p>Maximum value of the parameter field.</p><p>If filled, it is used for value verification of type parameters for integers, floating-point numbers, integer arrays, and floating-point number arrays. If left blank, there is no verification.</p>
                     * @param _maxValue <p>Maximum value of the parameter field.</p><p>If filled, it is used for value verification of type parameters for integers, floating-point numbers, integer arrays, and floating-point number arrays. If left blank, there is no verification.</p>
                     * 
                     */
                    void SetMaxValue(const double& _maxValue);

                    /**
                     * 判断参数 MaxValue 是否已赋值
                     * @return MaxValue 是否已赋值
                     * 
                     */
                    bool MaxValueHasBeenSet() const;

                    /**
                     * 获取<p>Minimum length of the parameter field.</p><p>If filled, it is used for value verification of string and string array type parameters. If not filled, there is no verification.</p>
                     * @return MinLength <p>Minimum length of the parameter field.</p><p>If filled, it is used for value verification of string and string array type parameters. If not filled, there is no verification.</p>
                     * 
                     */
                    int64_t GetMinLength() const;

                    /**
                     * 设置<p>Minimum length of the parameter field.</p><p>If filled, it is used for value verification of string and string array type parameters. If not filled, there is no verification.</p>
                     * @param _minLength <p>Minimum length of the parameter field.</p><p>If filled, it is used for value verification of string and string array type parameters. If not filled, there is no verification.</p>
                     * 
                     */
                    void SetMinLength(const int64_t& _minLength);

                    /**
                     * 判断参数 MinLength 是否已赋值
                     * @return MinLength 是否已赋值
                     * 
                     */
                    bool MinLengthHasBeenSet() const;

                    /**
                     * 获取<p>Maximum length of the parameter field.</p><p>If filled, it is used for value verification for strings and array of strings type parameters; if left blank, no verification.</p>
                     * @return MaxLength <p>Maximum length of the parameter field.</p><p>If filled, it is used for value verification for strings and array of strings type parameters; if left blank, no verification.</p>
                     * 
                     */
                    int64_t GetMaxLength() const;

                    /**
                     * 设置<p>Maximum length of the parameter field.</p><p>If filled, it is used for value verification for strings and array of strings type parameters; if left blank, no verification.</p>
                     * @param _maxLength <p>Maximum length of the parameter field.</p><p>If filled, it is used for value verification for strings and array of strings type parameters; if left blank, no verification.</p>
                     * 
                     */
                    void SetMaxLength(const int64_t& _maxLength);

                    /**
                     * 判断参数 MaxLength 是否已赋值
                     * @return MaxLength 是否已赋值
                     * 
                     */
                    bool MaxLengthHasBeenSet() const;

                    /**
                     * 获取<p>Minimum item count of the parameter field.</p><p>If filled, it is applicable to value verification for various array type parameters; if left blank, there is no verification.</p>
                     * @return MinItems <p>Minimum item count of the parameter field.</p><p>If filled, it is applicable to value verification for various array type parameters; if left blank, there is no verification.</p>
                     * 
                     */
                    int64_t GetMinItems() const;

                    /**
                     * 设置<p>Minimum item count of the parameter field.</p><p>If filled, it is applicable to value verification for various array type parameters; if left blank, there is no verification.</p>
                     * @param _minItems <p>Minimum item count of the parameter field.</p><p>If filled, it is applicable to value verification for various array type parameters; if left blank, there is no verification.</p>
                     * 
                     */
                    void SetMinItems(const int64_t& _minItems);

                    /**
                     * 判断参数 MinItems 是否已赋值
                     * @return MinItems 是否已赋值
                     * 
                     */
                    bool MinItemsHasBeenSet() const;

                    /**
                     * 获取<p>Maximum item count of the parameter field.</p><p>If filled, it is applicable to value verification for various array type parameters. If left blank, there is no verification.</p>
                     * @return MaxItems <p>Maximum item count of the parameter field.</p><p>If filled, it is applicable to value verification for various array type parameters. If left blank, there is no verification.</p>
                     * 
                     */
                    int64_t GetMaxItems() const;

                    /**
                     * 设置<p>Maximum item count of the parameter field.</p><p>If filled, it is applicable to value verification for various array type parameters. If left blank, there is no verification.</p>
                     * @param _maxItems <p>Maximum item count of the parameter field.</p><p>If filled, it is applicable to value verification for various array type parameters. If left blank, there is no verification.</p>
                     * 
                     */
                    void SetMaxItems(const int64_t& _maxItems);

                    /**
                     * 判断参数 MaxItems 是否已赋值
                     * @return MaxItems 是否已赋值
                     * 
                     */
                    bool MaxItemsHasBeenSet() const;

                    /**
                     * 获取<p>Whether the parameter field item is unique.</p><p>Default value: false</p><p>If filled, it is applicable to various array type parameter value verification; if left blank, no verification.</p>
                     * @return UniqueItems <p>Whether the parameter field item is unique.</p><p>Default value: false</p><p>If filled, it is applicable to various array type parameter value verification; if left blank, no verification.</p>
                     * 
                     */
                    bool GetUniqueItems() const;

                    /**
                     * 设置<p>Whether the parameter field item is unique.</p><p>Default value: false</p><p>If filled, it is applicable to various array type parameter value verification; if left blank, no verification.</p>
                     * @param _uniqueItems <p>Whether the parameter field item is unique.</p><p>Default value: false</p><p>If filled, it is applicable to various array type parameter value verification; if left blank, no verification.</p>
                     * 
                     */
                    void SetUniqueItems(const bool& _uniqueItems);

                    /**
                     * 判断参数 UniqueItems 是否已赋值
                     * @return UniqueItems 是否已赋值
                     * 
                     */
                    bool UniqueItemsHasBeenSet() const;

                    /**
                     * 获取<p>Allowed format of the parameter field.</p><p>If filled, verification of string or string array content is required. If not filled, there is no verification.</p>
                     * @return AllowedPattern <p>Allowed format of the parameter field.</p><p>If filled, verification of string or string array content is required. If not filled, there is no verification.</p>
                     * 
                     */
                    std::string GetAllowedPattern() const;

                    /**
                     * 设置<p>Allowed format of the parameter field.</p><p>If filled, verification of string or string array content is required. If not filled, there is no verification.</p>
                     * @param _allowedPattern <p>Allowed format of the parameter field.</p><p>If filled, verification of string or string array content is required. If not filled, there is no verification.</p>
                     * 
                     */
                    void SetAllowedPattern(const std::string& _allowedPattern);

                    /**
                     * 判断参数 AllowedPattern 是否已赋值
                     * @return AllowedPattern 是否已赋值
                     * 
                     */
                    bool AllowedPatternHasBeenSet() const;

                    /**
                     * 获取<p>Allowed values of the parameter field. If empty, there is no verification.</p><p>If this parameter is filled, it indicates that the corresponding parameter is an enum and only allows values from this parameter array; if left blank, there is no verification.</p>
                     * @return AllowedValues <p>Allowed values of the parameter field. If empty, there is no verification.</p><p>If this parameter is filled, it indicates that the corresponding parameter is an enum and only allows values from this parameter array; if left blank, there is no verification.</p>
                     * 
                     */
                    std::vector<std::string> GetAllowedValues() const;

                    /**
                     * 设置<p>Allowed values of the parameter field. If empty, there is no verification.</p><p>If this parameter is filled, it indicates that the corresponding parameter is an enum and only allows values from this parameter array; if left blank, there is no verification.</p>
                     * @param _allowedValues <p>Allowed values of the parameter field. If empty, there is no verification.</p><p>If this parameter is filled, it indicates that the corresponding parameter is an enum and only allows values from this parameter array; if left blank, there is no verification.</p>
                     * 
                     */
                    void SetAllowedValues(const std::vector<std::string>& _allowedValues);

                    /**
                     * 判断参数 AllowedValues 是否已赋值
                     * @return AllowedValues 是否已赋值
                     * 
                     */
                    bool AllowedValuesHasBeenSet() const;

                    /**
                     * 获取<p>Minimum step size of the parameter field.</p><p>If filled, it is suitable for value verification of floating-point and floating-point array type parameters. If not filled, there is no verification.</p>
                     * @return MultipleOf <p>Minimum step size of the parameter field.</p><p>If filled, it is suitable for value verification of floating-point and floating-point array type parameters. If not filled, there is no verification.</p>
                     * 
                     */
                    std::string GetMultipleOf() const;

                    /**
                     * 设置<p>Minimum step size of the parameter field.</p><p>If filled, it is suitable for value verification of floating-point and floating-point array type parameters. If not filled, there is no verification.</p>
                     * @param _multipleOf <p>Minimum step size of the parameter field.</p><p>If filled, it is suitable for value verification of floating-point and floating-point array type parameters. If not filled, there is no verification.</p>
                     * 
                     */
                    void SetMultipleOf(const std::string& _multipleOf);

                    /**
                     * 判断参数 MultipleOf 是否已赋值
                     * @return MultipleOf 是否已赋值
                     * 
                     */
                    bool MultipleOfHasBeenSet() const;

                private:

                    /**
                     * <p>Parameter field name.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Parameter field data type. Valid values: <li>Boolean: boolean;</li><li>Integer: integer;</li><li>Float: floating-point;</li><li>String: string;</li><li>ArrayOfInteger: integer array;</li><li>ArrayOfFloat: floating-point array;</li><li>ArrayOfString: array of strings.</li></p>
                     */
                    std::string m_valueType;
                    bool m_valueTypeHasBeenSet;

                    /**
                     * <p>Parameter field description.</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Field default value of the parameter.</p>
                     */
                    std::string m_default;
                    bool m_defaultHasBeenSet;

                    /**
                     * <p>Parameter field unit.</p>
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * <p>Whether the parameter field is required or not.</p><p>Default value: false</p><p>If filled, it is applicable to ALL parameter field type verification; if left blank, no verification.</p>
                     */
                    bool m_required;
                    bool m_requiredHasBeenSet;

                    /**
                     * <p>Minimum value of the parameter field.</p><p>If filled, it is used to validate the value for integer, floating-point number, integer array, and floating-point number array type parameters; if left blank, there is no verification.</p>
                     */
                    double m_minValue;
                    bool m_minValueHasBeenSet;

                    /**
                     * <p>Maximum value of the parameter field.</p><p>If filled, it is used for value verification of type parameters for integers, floating-point numbers, integer arrays, and floating-point number arrays. If left blank, there is no verification.</p>
                     */
                    double m_maxValue;
                    bool m_maxValueHasBeenSet;

                    /**
                     * <p>Minimum length of the parameter field.</p><p>If filled, it is used for value verification of string and string array type parameters. If not filled, there is no verification.</p>
                     */
                    int64_t m_minLength;
                    bool m_minLengthHasBeenSet;

                    /**
                     * <p>Maximum length of the parameter field.</p><p>If filled, it is used for value verification for strings and array of strings type parameters; if left blank, no verification.</p>
                     */
                    int64_t m_maxLength;
                    bool m_maxLengthHasBeenSet;

                    /**
                     * <p>Minimum item count of the parameter field.</p><p>If filled, it is applicable to value verification for various array type parameters; if left blank, there is no verification.</p>
                     */
                    int64_t m_minItems;
                    bool m_minItemsHasBeenSet;

                    /**
                     * <p>Maximum item count of the parameter field.</p><p>If filled, it is applicable to value verification for various array type parameters. If left blank, there is no verification.</p>
                     */
                    int64_t m_maxItems;
                    bool m_maxItemsHasBeenSet;

                    /**
                     * <p>Whether the parameter field item is unique.</p><p>Default value: false</p><p>If filled, it is applicable to various array type parameter value verification; if left blank, no verification.</p>
                     */
                    bool m_uniqueItems;
                    bool m_uniqueItemsHasBeenSet;

                    /**
                     * <p>Allowed format of the parameter field.</p><p>If filled, verification of string or string array content is required. If not filled, there is no verification.</p>
                     */
                    std::string m_allowedPattern;
                    bool m_allowedPatternHasBeenSet;

                    /**
                     * <p>Allowed values of the parameter field. If empty, there is no verification.</p><p>If this parameter is filled, it indicates that the corresponding parameter is an enum and only allows values from this parameter array; if left blank, there is no verification.</p>
                     */
                    std::vector<std::string> m_allowedValues;
                    bool m_allowedValuesHasBeenSet;

                    /**
                     * <p>Minimum step size of the parameter field.</p><p>If filled, it is suitable for value verification of floating-point and floating-point array type parameters. If not filled, there is no verification.</p>
                     */
                    std::string m_multipleOf;
                    bool m_multipleOfHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_RULEENGINECUSTOMACTIONPARAMETERSCHEMA_H_
