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
                * Parameter information
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
                     * 获取List of valid values when parameter type is `enum`, `string` or `bool`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EnumValue List of valid values when parameter type is `enum`, `string` or `bool`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetEnumValue() const;

                    /**
                     * 设置List of valid values when parameter type is `enum`, `string` or `bool`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _enumValue List of valid values when parameter type is `enum`, `string` or `bool`.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Maximum value when parameter type is `float` or `integer`.
                     * @return Max Maximum value when parameter type is `float` or `integer`.
                     * 
                     */
                    std::string GetMax() const;

                    /**
                     * 设置Maximum value when parameter type is `float` or `integer`.
                     * @param _max Maximum value when parameter type is `float` or `integer`.
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
                     * 获取Minimum value when parameter type is `float` or `integer`.
                     * @return Min Minimum value when parameter type is `float` or `integer`.
                     * 
                     */
                    std::string GetMin() const;

                    /**
                     * 设置Minimum value when parameter type is `float` or `integer`.
                     * @param _min Minimum value when parameter type is `float` or `integer`.
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
                     * 获取Whether to restart the instance for the modified parameters to take effect.
                     * @return NeedReboot Whether to restart the instance for the modified parameters to take effect.
                     * 
                     */
                    int64_t GetNeedReboot() const;

                    /**
                     * 设置Whether to restart the instance for the modified parameters to take effect.
                     * @param _needReboot Whether to restart the instance for the modified parameters to take effect.
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
                     * 获取Parameter type: `integer`, `float`, `string`, `enum`, `bool`.
                     * @return ParamType Parameter type: `integer`, `float`, `string`, `enum`, `bool`.
                     * 
                     */
                    std::string GetParamType() const;

                    /**
                     * 设置Parameter type: `integer`, `float`, `string`, `enum`, `bool`.
                     * @param _paramType Parameter type: `integer`, `float`, `string`, `enum`, `bool`.
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
                     * 获取Match type. Regex can be used when parameter type is `string`. Valid value: `multiVal`.
                     * @return MatchType Match type. Regex can be used when parameter type is `string`. Valid value: `multiVal`.
                     * 
                     */
                    std::string GetMatchType() const;

                    /**
                     * 设置Match type. Regex can be used when parameter type is `string`. Valid value: `multiVal`.
                     * @param _matchType Match type. Regex can be used when parameter type is `string`. Valid value: `multiVal`.
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
                     * 获取Match values, which will be separated by semicolon when match type is `multiVal`.
                     * @return MatchValue Match values, which will be separated by semicolon when match type is `multiVal`.
                     * 
                     */
                    std::string GetMatchValue() const;

                    /**
                     * 设置Match values, which will be separated by semicolon when match type is `multiVal`.
                     * @param _matchValue Match values, which will be separated by semicolon when match type is `multiVal`.
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
                     * 获取Whether it is global parameter
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsGlobal Whether it is global parameter
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetIsGlobal() const;

                    /**
                     * 设置Whether it is global parameter
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isGlobal Whether it is global parameter
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Whether the parameter can be modified
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ModifiableInfo Whether the parameter can be modified
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    ModifiableInfo GetModifiableInfo() const;

                    /**
                     * 设置Whether the parameter can be modified
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _modifiableInfo Whether the parameter can be modified
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsFunc Whether it is a function
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsFunc() const;

                    /**
                     * 设置Whether it is a function
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isFunc Whether it is a function
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Func Function
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFunc() const;

                    /**
                     * 设置Function
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _func Function
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFunc(const std::string& _func);

                    /**
                     * 判断参数 Func 是否已赋值
                     * @return Func 是否已赋值
                     * 
                     */
                    bool FuncHasBeenSet() const;

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
                     * List of valid values when parameter type is `enum`, `string` or `bool`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_enumValue;
                    bool m_enumValueHasBeenSet;

                    /**
                     * Maximum value when parameter type is `float` or `integer`.
                     */
                    std::string m_max;
                    bool m_maxHasBeenSet;

                    /**
                     * Minimum value when parameter type is `float` or `integer`.
                     */
                    std::string m_min;
                    bool m_minHasBeenSet;

                    /**
                     * Parameter name
                     */
                    std::string m_paramName;
                    bool m_paramNameHasBeenSet;

                    /**
                     * Whether to restart the instance for the modified parameters to take effect.
                     */
                    int64_t m_needReboot;
                    bool m_needRebootHasBeenSet;

                    /**
                     * Parameter type: `integer`, `float`, `string`, `enum`, `bool`.
                     */
                    std::string m_paramType;
                    bool m_paramTypeHasBeenSet;

                    /**
                     * Match type. Regex can be used when parameter type is `string`. Valid value: `multiVal`.
                     */
                    std::string m_matchType;
                    bool m_matchTypeHasBeenSet;

                    /**
                     * Match values, which will be separated by semicolon when match type is `multiVal`.
                     */
                    std::string m_matchValue;
                    bool m_matchValueHasBeenSet;

                    /**
                     * Parameter description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Whether it is global parameter
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_isGlobal;
                    bool m_isGlobalHasBeenSet;

                    /**
                     * Whether the parameter can be modified
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    ModifiableInfo m_modifiableInfo;
                    bool m_modifiableInfoHasBeenSet;

                    /**
                     * Whether it is a function
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isFunc;
                    bool m_isFuncHasBeenSet;

                    /**
                     * Function
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_func;
                    bool m_funcHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PARAMINFO_H_
