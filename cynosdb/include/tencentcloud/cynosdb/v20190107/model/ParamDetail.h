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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PARAMDETAIL_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PARAMDETAIL_H_

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
                * Detailed description of instance parameters
                */
                class ParamDetail : public AbstractModel
                {
                public:
                    ParamDetail();
                    ~ParamDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Parameter type: integer, enum, float, string, func
                     * @return ParamType Parameter type: integer, enum, float, string, func
                     * 
                     */
                    std::string GetParamType() const;

                    /**
                     * 设置Parameter type: integer, enum, float, string, func
                     * @param _paramType Parameter type: integer, enum, float, string, func
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
                     * 获取true: supports "func"; false: no formula support
                     * @return SupportFunc true: supports "func"; false: no formula support
                     * 
                     */
                    bool GetSupportFunc() const;

                    /**
                     * 设置true: supports "func"; false: no formula support
                     * @param _supportFunc true: supports "func"; false: no formula support
                     * 
                     */
                    void SetSupportFunc(const bool& _supportFunc);

                    /**
                     * 判断参数 SupportFunc 是否已赋值
                     * @return SupportFunc 是否已赋值
                     * 
                     */
                    bool SupportFuncHasBeenSet() const;

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
                     * 获取Current parameter value
                     * @return CurrentValue Current parameter value
                     * 
                     */
                    std::string GetCurrentValue() const;

                    /**
                     * 设置Current parameter value
                     * @param _currentValue Current parameter value
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
                     * 获取Whether database restart is required after modifying parameters to take effect. 0: no restart required; 1: restart required.
                     * @return NeedReboot Whether database restart is required after modifying parameters to take effect. 0: no restart required; 1: restart required.
                     * 
                     */
                    int64_t GetNeedReboot() const;

                    /**
                     * 设置Whether database restart is required after modifying parameters to take effect. 0: no restart required; 1: restart required.
                     * @param _needReboot Whether database restart is required after modifying parameters to take effect. 0: no restart required; 1: restart required.
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
                     * 获取Maximum value allowed for the parameter
                     * @return Max Maximum value allowed for the parameter
                     * 
                     */
                    std::string GetMax() const;

                    /**
                     * 设置Maximum value allowed for the parameter
                     * @param _max Maximum value allowed for the parameter
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
                     * 获取Minimum allowed parameter value
                     * @return Min Minimum allowed parameter value
                     * 
                     */
                    std::string GetMin() const;

                    /**
                     * 设置Minimum allowed parameter value
                     * @param _min Minimum allowed parameter value
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
                     * 获取Optional enumerated values of the parameter. If it is a non-enumerated value, this parameter is empty
                     * @return EnumValue Optional enumerated values of the parameter. If it is a non-enumerated value, this parameter is empty
                     * 
                     */
                    std::vector<std::string> GetEnumValue() const;

                    /**
                     * 设置Optional enumerated values of the parameter. If it is a non-enumerated value, this parameter is empty
                     * @param _enumValue Optional enumerated values of the parameter. If it is a non-enumerated value, this parameter is empty
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
                     * 获取1: global parameter, 0: non-global parameter
                     * @return IsGlobal 1: global parameter, 0: non-global parameter
                     * 
                     */
                    int64_t GetIsGlobal() const;

                    /**
                     * 设置1: global parameter, 0: non-global parameter
                     * @param _isGlobal 1: global parameter, 0: non-global parameter
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
                     * 获取Match type. multiVal
                     * @return MatchType Match type. multiVal
                     * 
                     */
                    std::string GetMatchType() const;

                    /**
                     * 设置Match type. multiVal
                     * @param _matchType Match type. multiVal
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
                     * 获取Match target value. If multiVal is set, separate each key with a comma.
                     * @return MatchValue Match target value. If multiVal is set, separate each key with a comma.
                     * 
                     */
                    std::string GetMatchValue() const;

                    /**
                     * 设置Match target value. If multiVal is set, separate each key with a comma.
                     * @param _matchValue Match target value. If multiVal is set, separate each key with a comma.
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
                     * 获取true: formula; false: non-formula
                     * @return IsFunc true: formula; false: non-formula
                     * 
                     */
                    bool GetIsFunc() const;

                    /**
                     * 设置true: formula; false: non-formula
                     * @param _isFunc true: formula; false: non-formula
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
                     * 获取When the parameter is set to a formula, Func returns the set formula content.
                     * @return Func When the parameter is set to a formula, Func returns the set formula content.
                     * 
                     */
                    std::string GetFunc() const;

                    /**
                     * 设置When the parameter is set to a formula, Func returns the set formula content.
                     * @param _func When the parameter is set to a formula, Func returns the set formula content.
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
                     * Parameter name.
                     */
                    std::string m_paramName;
                    bool m_paramNameHasBeenSet;

                    /**
                     * Parameter type: integer, enum, float, string, func
                     */
                    std::string m_paramType;
                    bool m_paramTypeHasBeenSet;

                    /**
                     * true: supports "func"; false: no formula support
                     */
                    bool m_supportFunc;
                    bool m_supportFuncHasBeenSet;

                    /**
                     * Default value
                     */
                    std::string m_default;
                    bool m_defaultHasBeenSet;

                    /**
                     * Parameter description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Current parameter value
                     */
                    std::string m_currentValue;
                    bool m_currentValueHasBeenSet;

                    /**
                     * Whether database restart is required after modifying parameters to take effect. 0: no restart required; 1: restart required.
                     */
                    int64_t m_needReboot;
                    bool m_needRebootHasBeenSet;

                    /**
                     * Maximum value allowed for the parameter
                     */
                    std::string m_max;
                    bool m_maxHasBeenSet;

                    /**
                     * Minimum allowed parameter value
                     */
                    std::string m_min;
                    bool m_minHasBeenSet;

                    /**
                     * Optional enumerated values of the parameter. If it is a non-enumerated value, this parameter is empty
                     */
                    std::vector<std::string> m_enumValue;
                    bool m_enumValueHasBeenSet;

                    /**
                     * 1: global parameter, 0: non-global parameter
                     */
                    int64_t m_isGlobal;
                    bool m_isGlobalHasBeenSet;

                    /**
                     * Match type. multiVal
                     */
                    std::string m_matchType;
                    bool m_matchTypeHasBeenSet;

                    /**
                     * Match target value. If multiVal is set, separate each key with a comma.
                     */
                    std::string m_matchValue;
                    bool m_matchValueHasBeenSet;

                    /**
                     * true: formula; false: non-formula
                     */
                    bool m_isFunc;
                    bool m_isFuncHasBeenSet;

                    /**
                     * When the parameter is set to a formula, Func returns the set formula content.
                     */
                    std::string m_func;
                    bool m_funcHasBeenSet;

                    /**
                     * Whether the parameter is modifiable
                     */
                    ModifiableInfo m_modifiableInfo;
                    bool m_modifiableInfoHasBeenSet;

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

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PARAMDETAIL_H_
