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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PARAMITEMDETAIL_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PARAMITEMDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Instance parameter information
                */
                class ParamItemDetail : public AbstractModel
                {
                public:
                    ParamItemDetail();
                    ~ParamItemDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Current value
                     * @return CurrentValue Current value
                     * 
                     */
                    std::string GetCurrentValue() const;

                    /**
                     * 设置Current value
                     * @param _currentValue Current value
                     * 
                     */
                    void SetCurrentValue(const std::string& _currentValue);

                    /**
                     * 判断参数 CurrentValue 是否已赋值
                     * @return CurrentValue 是否已赋值
                     * 
                     */
                    bool CurrentValueHasBeenSet() const;

                    /**
                     * 获取Default value
                     * @return Default Default value
                     * 
                     */
                    std::string GetDefault() const;

                    /**
                     * 设置Default value
                     * @param _default Default value
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
                     * 获取Enumerated values of the parameter It is null if the parameter is non-enumerated.
                     * @return EnumValue Enumerated values of the parameter It is null if the parameter is non-enumerated.
                     * 
                     */
                    std::vector<std::string> GetEnumValue() const;

                    /**
                     * 设置Enumerated values of the parameter It is null if the parameter is non-enumerated.
                     * @param _enumValue Enumerated values of the parameter It is null if the parameter is non-enumerated.
                     * 
                     */
                    void SetEnumValue(const std::vector<std::string>& _enumValue);

                    /**
                     * 判断参数 EnumValue 是否已赋值
                     * @return EnumValue 是否已赋值
                     * 
                     */
                    bool EnumValueHasBeenSet() const;

                    /**
                     * 获取Valid values: `1` (global parameter),  `0`  (non-global parameter).
                     * @return IsGlobal Valid values: `1` (global parameter),  `0`  (non-global parameter).
                     * 
                     */
                    int64_t GetIsGlobal() const;

                    /**
                     * 设置Valid values: `1` (global parameter),  `0`  (non-global parameter).
                     * @param _isGlobal Valid values: `1` (global parameter),  `0`  (non-global parameter).
                     * 
                     */
                    void SetIsGlobal(const int64_t& _isGlobal);

                    /**
                     * 判断参数 IsGlobal 是否已赋值
                     * @return IsGlobal 是否已赋值
                     * 
                     */
                    bool IsGlobalHasBeenSet() const;

                    /**
                     * 获取Maximum value
                     * @return Max Maximum value
                     * 
                     */
                    std::string GetMax() const;

                    /**
                     * 设置Maximum value
                     * @param _max Maximum value
                     * 
                     */
                    void SetMax(const std::string& _max);

                    /**
                     * 判断参数 Max 是否已赋值
                     * @return Max 是否已赋值
                     * 
                     */
                    bool MaxHasBeenSet() const;

                    /**
                     * 获取Minimum value
                     * @return Min Minimum value
                     * 
                     */
                    std::string GetMin() const;

                    /**
                     * 设置Minimum value
                     * @param _min Minimum value
                     * 
                     */
                    void SetMin(const std::string& _min);

                    /**
                     * 判断参数 Min 是否已赋值
                     * @return Min 是否已赋值
                     * 
                     */
                    bool MinHasBeenSet() const;

                    /**
                     * 获取Whether to restart the database for the modified parameters to take effect. Valid values:  `0` (no), `1` (yes)
                     * @return NeedReboot Whether to restart the database for the modified parameters to take effect. Valid values:  `0` (no), `1` (yes)
                     * 
                     */
                    int64_t GetNeedReboot() const;

                    /**
                     * 设置Whether to restart the database for the modified parameters to take effect. Valid values:  `0` (no), `1` (yes)
                     * @param _needReboot Whether to restart the database for the modified parameters to take effect. Valid values:  `0` (no), `1` (yes)
                     * 
                     */
                    void SetNeedReboot(const int64_t& _needReboot);

                    /**
                     * 判断参数 NeedReboot 是否已赋值
                     * @return NeedReboot 是否已赋值
                     * 
                     */
                    bool NeedRebootHasBeenSet() const;

                    /**
                     * 获取Parameter name
                     * @return ParamName Parameter name
                     * 
                     */
                    std::string GetParamName() const;

                    /**
                     * 设置Parameter name
                     * @param _paramName Parameter name
                     * 
                     */
                    void SetParamName(const std::string& _paramName);

                    /**
                     * 判断参数 ParamName 是否已赋值
                     * @return ParamName 是否已赋值
                     * 
                     */
                    bool ParamNameHasBeenSet() const;

                    /**
                     * 获取Parameter type. Valid values:  `integer`, `enum`, `float`, `string`, `func`.
                     * @return ParamType Parameter type. Valid values:  `integer`, `enum`, `float`, `string`, `func`.
                     * 
                     */
                    std::string GetParamType() const;

                    /**
                     * 设置Parameter type. Valid values:  `integer`, `enum`, `float`, `string`, `func`.
                     * @param _paramType Parameter type. Valid values:  `integer`, `enum`, `float`, `string`, `func`.
                     * 
                     */
                    void SetParamType(const std::string& _paramType);

                    /**
                     * 判断参数 ParamType 是否已赋值
                     * @return ParamType 是否已赋值
                     * 
                     */
                    bool ParamTypeHasBeenSet() const;

                    /**
                     * 获取Parameter description
                     * @return Description Parameter description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Parameter description
                     * @param _description Parameter description
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
                     * 获取Whether the type is a formula.
                     * @return IsFunc Whether the type is a formula.
                     * 
                     */
                    bool GetIsFunc() const;

                    /**
                     * 设置Whether the type is a formula.
                     * @param _isFunc Whether the type is a formula.
                     * 
                     */
                    void SetIsFunc(const bool& _isFunc);

                    /**
                     * 判断参数 IsFunc 是否已赋值
                     * @return IsFunc 是否已赋值
                     * 
                     */
                    bool IsFuncHasBeenSet() const;

                    /**
                     * 获取Parameter configuration formula.
                     * @return Func Parameter configuration formula.
                     * 
                     */
                    std::string GetFunc() const;

                    /**
                     * 设置Parameter configuration formula.
                     * @param _func Parameter configuration formula.
                     * 
                     */
                    void SetFunc(const std::string& _func);

                    /**
                     * 判断参数 Func 是否已赋值
                     * @return Func 是否已赋值
                     * 
                     */
                    bool FuncHasBeenSet() const;

                    /**
                     * 获取The default formula style of parameters that support formulas.
                     * @return FuncPattern The default formula style of parameters that support formulas.
                     * 
                     */
                    std::string GetFuncPattern() const;

                    /**
                     * 设置The default formula style of parameters that support formulas.
                     * @param _funcPattern The default formula style of parameters that support formulas.
                     * 
                     */
                    void SetFuncPattern(const std::string& _funcPattern);

                    /**
                     * 判断参数 FuncPattern 是否已赋值
                     * @return FuncPattern 是否已赋值
                     * 
                     */
                    bool FuncPatternHasBeenSet() const;

                private:

                    /**
                     * Current value
                     */
                    std::string m_currentValue;
                    bool m_currentValueHasBeenSet;

                    /**
                     * Default value
                     */
                    std::string m_default;
                    bool m_defaultHasBeenSet;

                    /**
                     * Enumerated values of the parameter It is null if the parameter is non-enumerated.
                     */
                    std::vector<std::string> m_enumValue;
                    bool m_enumValueHasBeenSet;

                    /**
                     * Valid values: `1` (global parameter),  `0`  (non-global parameter).
                     */
                    int64_t m_isGlobal;
                    bool m_isGlobalHasBeenSet;

                    /**
                     * Maximum value
                     */
                    std::string m_max;
                    bool m_maxHasBeenSet;

                    /**
                     * Minimum value
                     */
                    std::string m_min;
                    bool m_minHasBeenSet;

                    /**
                     * Whether to restart the database for the modified parameters to take effect. Valid values:  `0` (no), `1` (yes)
                     */
                    int64_t m_needReboot;
                    bool m_needRebootHasBeenSet;

                    /**
                     * Parameter name
                     */
                    std::string m_paramName;
                    bool m_paramNameHasBeenSet;

                    /**
                     * Parameter type. Valid values:  `integer`, `enum`, `float`, `string`, `func`.
                     */
                    std::string m_paramType;
                    bool m_paramTypeHasBeenSet;

                    /**
                     * Parameter description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Whether the type is a formula.
                     */
                    bool m_isFunc;
                    bool m_isFuncHasBeenSet;

                    /**
                     * Parameter configuration formula.
                     */
                    std::string m_func;
                    bool m_funcHasBeenSet;

                    /**
                     * The default formula style of parameters that support formulas.
                     */
                    std::string m_funcPattern;
                    bool m_funcPatternHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PARAMITEMDETAIL_H_
