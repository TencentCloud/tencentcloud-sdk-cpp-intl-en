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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PARAMINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PARAMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifiableInfo.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Parameter information.
                */
                class ParamInfo : public AbstractModel
                {
                public:
                    ParamInfo();
                    ~ParamInfo() = default;
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
                     * 获取Available option list when the parameter is enum, string, or bool.
                     * @return EnumValue Available option list when the parameter is enum, string, or bool.
                     * 
                     */
                    std::vector<std::string> GetEnumValue() const;

                    /**
                     * 设置Available option list when the parameter is enum, string, or bool.
                     * @param _enumValue Available option list when the parameter is enum, string, or bool.
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
                     * 获取Maximum value when the parameter type is float/integer.
                     * @return Max Maximum value when the parameter type is float/integer.
                     * 
                     */
                    std::string GetMax() const;

                    /**
                     * 设置Maximum value when the parameter type is float/integer.
                     * @param _max Maximum value when the parameter type is float/integer.
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
                     * 获取Minimum value when the parameter type is float/integer
                     * @return Min Minimum value when the parameter type is float/integer
                     * 
                     */
                    std::string GetMin() const;

                    /**
                     * 设置Minimum value when the parameter type is float/integer
                     * @param _min Minimum value when the parameter type is float/integer
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
                     * 获取Parameter name.
                     * @return ParamName Parameter name.
                     * 
                     */
                    std::string GetParamName() const;

                    /**
                     * 设置Parameter name.
                     * @param _paramName Parameter name.
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
                     * 获取Whether a restart is required.
                     * @return NeedReboot Whether a restart is required.
                     * 
                     */
                    int64_t GetNeedReboot() const;

                    /**
                     * 设置Whether a restart is required.
                     * @param _needReboot Whether a restart is required.
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
                     * 获取Parameter type: integer, float, string, enum, or bool.
                     * @return ParamType Parameter type: integer, float, string, enum, or bool.
                     * 
                     */
                    std::string GetParamType() const;

                    /**
                     * 设置Parameter type: integer, float, string, enum, or bool.
                     * @param _paramType Parameter type: integer, float, string, enum, or bool.
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
                     * 获取Match type. multiVal and regex are used when the parameter type is string.
                     * @return MatchType Match type. multiVal and regex are used when the parameter type is string.
                     * 
                     */
                    std::string GetMatchType() const;

                    /**
                     * 设置Match type. multiVal and regex are used when the parameter type is string.
                     * @param _matchType Match type. multiVal and regex are used when the parameter type is string.
                     * 
                     */
                    void SetMatchType(const std::string& _matchType);

                    /**
                     * 判断参数 MatchType 是否已赋值
                     * @return MatchType 是否已赋值
                     * 
                     */
                    bool MatchTypeHasBeenSet() const;

                    /**
                     * 获取Match the target value. For multiVal, separate each key with a semicolon (;).
                     * @return MatchValue Match the target value. For multiVal, separate each key with a semicolon (;).
                     * 
                     */
                    std::string GetMatchValue() const;

                    /**
                     * 设置Match the target value. For multiVal, separate each key with a semicolon (;).
                     * @param _matchValue Match the target value. For multiVal, separate each key with a semicolon (;).
                     * 
                     */
                    void SetMatchValue(const std::string& _matchValue);

                    /**
                     * 判断参数 MatchValue 是否已赋值
                     * @return MatchValue 是否已赋值
                     * 
                     */
                    bool MatchValueHasBeenSet() const;

                    /**
                     * 获取Parameter description.
                     * @return Description Parameter description.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Parameter description.
                     * @param _description Parameter description.
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
                     * 获取Whether it is a global parameter
                     * @return IsGlobal Whether it is a global parameter
                     * 
                     */
                    int64_t GetIsGlobal() const;

                    /**
                     * 设置Whether it is a global parameter
                     * @param _isGlobal Whether it is a global parameter
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
                     * 获取Whether the parameter is modifiable
                     * @return ModifiableInfo Whether the parameter is modifiable
                     * 
                     */
                    ModifiableInfo GetModifiableInfo() const;

                    /**
                     * 设置Whether the parameter is modifiable
                     * @param _modifiableInfo Whether the parameter is modifiable
                     * 
                     */
                    void SetModifiableInfo(const ModifiableInfo& _modifiableInfo);

                    /**
                     * 判断参数 ModifiableInfo 是否已赋值
                     * @return ModifiableInfo 是否已赋值
                     * 
                     */
                    bool ModifiableInfoHasBeenSet() const;

                    /**
                     * 获取Whether it is a function
                     * @return IsFunc Whether it is a function
                     * 
                     */
                    bool GetIsFunc() const;

                    /**
                     * 设置Whether it is a function
                     * @param _isFunc Whether it is a function
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
                     * 获取Function
                     * @return Func Function
                     * 
                     */
                    std::string GetFunc() const;

                    /**
                     * 设置Function
                     * @param _func Function
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
                     * 获取Default formula style for parameters that support formulas
                     * @return FuncPattern Default formula style for parameters that support formulas
                     * 
                     */
                    std::string GetFuncPattern() const;

                    /**
                     * 设置Default formula style for parameters that support formulas
                     * @param _funcPattern Default formula style for parameters that support formulas
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
                     * Available option list when the parameter is enum, string, or bool.
                     */
                    std::vector<std::string> m_enumValue;
                    bool m_enumValueHasBeenSet;

                    /**
                     * Maximum value when the parameter type is float/integer.
                     */
                    std::string m_max;
                    bool m_maxHasBeenSet;

                    /**
                     * Minimum value when the parameter type is float/integer
                     */
                    std::string m_min;
                    bool m_minHasBeenSet;

                    /**
                     * Parameter name.
                     */
                    std::string m_paramName;
                    bool m_paramNameHasBeenSet;

                    /**
                     * Whether a restart is required.
                     */
                    int64_t m_needReboot;
                    bool m_needRebootHasBeenSet;

                    /**
                     * Parameter type: integer, float, string, enum, or bool.
                     */
                    std::string m_paramType;
                    bool m_paramTypeHasBeenSet;

                    /**
                     * Match type. multiVal and regex are used when the parameter type is string.
                     */
                    std::string m_matchType;
                    bool m_matchTypeHasBeenSet;

                    /**
                     * Match the target value. For multiVal, separate each key with a semicolon (;).
                     */
                    std::string m_matchValue;
                    bool m_matchValueHasBeenSet;

                    /**
                     * Parameter description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Whether it is a global parameter
                     */
                    int64_t m_isGlobal;
                    bool m_isGlobalHasBeenSet;

                    /**
                     * Whether the parameter is modifiable
                     */
                    ModifiableInfo m_modifiableInfo;
                    bool m_modifiableInfoHasBeenSet;

                    /**
                     * Whether it is a function
                     */
                    bool m_isFunc;
                    bool m_isFuncHasBeenSet;

                    /**
                     * Function
                     */
                    std::string m_func;
                    bool m_funcHasBeenSet;

                    /**
                     * Default formula style for parameters that support formulas
                     */
                    std::string m_funcPattern;
                    bool m_funcPatternHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PARAMINFO_H_
