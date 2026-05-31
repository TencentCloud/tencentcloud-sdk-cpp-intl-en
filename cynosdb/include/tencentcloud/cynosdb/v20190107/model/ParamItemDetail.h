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
                     * 获取<p>Current value</p>
                     * @return CurrentValue <p>Current value</p>
                     * 
                     */
                    std::string GetCurrentValue() const;

                    /**
                     * 设置<p>Current value</p>
                     * @param _currentValue <p>Current value</p>
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
                     * 获取<p>Default value</p>
                     * @return Default <p>Default value</p>
                     * 
                     */
                    std::string GetDefault() const;

                    /**
                     * 设置<p>Default value</p>
                     * @param _default <p>Default value</p>
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
                     * 获取<p>Optional enumerated value of the parameter. If it is a non-enumerated value, it is empty.</p>
                     * @return EnumValue <p>Optional enumerated value of the parameter. If it is a non-enumerated value, it is empty.</p>
                     * 
                     */
                    std::vector<std::string> GetEnumValue() const;

                    /**
                     * 设置<p>Optional enumerated value of the parameter. If it is a non-enumerated value, it is empty.</p>
                     * @param _enumValue <p>Optional enumerated value of the parameter. If it is a non-enumerated value, it is empty.</p>
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
                     * 获取<p>1: Global parameter, 0: Non-global parameter</p>
                     * @return IsGlobal <p>1: Global parameter, 0: Non-global parameter</p>
                     * 
                     */
                    int64_t GetIsGlobal() const;

                    /**
                     * 设置<p>1: Global parameter, 0: Non-global parameter</p>
                     * @param _isGlobal <p>1: Global parameter, 0: Non-global parameter</p>
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
                     * 获取<p>Maximum value</p>
                     * @return Max <p>Maximum value</p>
                     * 
                     */
                    std::string GetMax() const;

                    /**
                     * 设置<p>Maximum value</p>
                     * @param _max <p>Maximum value</p>
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
                     * 获取<p>Minimum value</p>
                     * @return Min <p>Minimum value</p>
                     * 
                     */
                    std::string GetMin() const;

                    /**
                     * 设置<p>Minimum value</p>
                     * @param _min <p>Minimum value</p>
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
                     * 获取<p>After modifying parameters, whether database restart is required to take effect. 0-no restart required, 1-restart required.</p>
                     * @return NeedReboot <p>After modifying parameters, whether database restart is required to take effect. 0-no restart required, 1-restart required.</p>
                     * 
                     */
                    int64_t GetNeedReboot() const;

                    /**
                     * 设置<p>After modifying parameters, whether database restart is required to take effect. 0-no restart required, 1-restart required.</p>
                     * @param _needReboot <p>After modifying parameters, whether database restart is required to take effect. 0-no restart required, 1-restart required.</p>
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
                     * 获取<p>Parameter name</p>
                     * @return ParamName <p>Parameter name</p>
                     * 
                     */
                    std::string GetParamName() const;

                    /**
                     * 设置<p>Parameter name</p>
                     * @param _paramName <p>Parameter name</p>
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
                     * 获取<p>Parameter type: integer, enum, float, string, func</p>
                     * @return ParamType <p>Parameter type: integer, enum, float, string, func</p>
                     * 
                     */
                    std::string GetParamType() const;

                    /**
                     * 设置<p>Parameter type: integer, enum, float, string, func</p>
                     * @param _paramType <p>Parameter type: integer, enum, float, string, func</p>
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
                     * 获取<p>Whether the parameter is modifiable</p>
                     * @return ModifiableInfo <p>Whether the parameter is modifiable</p>
                     * 
                     */
                    ModifiableInfo GetModifiableInfo() const;

                    /**
                     * 设置<p>Whether the parameter is modifiable</p>
                     * @param _modifiableInfo <p>Whether the parameter is modifiable</p>
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
                     * 获取<p>Parameter description</p>
                     * @return Description <p>Parameter description</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Parameter description</p>
                     * @param _description <p>Parameter description</p>
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
                     * 获取<p>Whether the type is formula</p>
                     * @return IsFunc <p>Whether the type is formula</p>
                     * 
                     */
                    bool GetIsFunc() const;

                    /**
                     * 设置<p>Whether the type is formula</p>
                     * @param _isFunc <p>Whether the type is formula</p>
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
                     * 获取<p>Parameter configuration formula</p>
                     * @return Func <p>Parameter configuration formula</p>
                     * 
                     */
                    std::string GetFunc() const;

                    /**
                     * 设置<p>Parameter configuration formula</p>
                     * @param _func <p>Parameter configuration formula</p>
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
                     * 获取<p>Default formula style for parameters that support formulas</p>
                     * @return FuncPattern <p>Default formula style for parameters that support formulas</p>
                     * 
                     */
                    std::string GetFuncPattern() const;

                    /**
                     * 设置<p>Default formula style for parameters that support formulas</p>
                     * @param _funcPattern <p>Default formula style for parameters that support formulas</p>
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
                     * <p>Current value</p>
                     */
                    std::string m_currentValue;
                    bool m_currentValueHasBeenSet;

                    /**
                     * <p>Default value</p>
                     */
                    std::string m_default;
                    bool m_defaultHasBeenSet;

                    /**
                     * <p>Optional enumerated value of the parameter. If it is a non-enumerated value, it is empty.</p>
                     */
                    std::vector<std::string> m_enumValue;
                    bool m_enumValueHasBeenSet;

                    /**
                     * <p>1: Global parameter, 0: Non-global parameter</p>
                     */
                    int64_t m_isGlobal;
                    bool m_isGlobalHasBeenSet;

                    /**
                     * <p>Maximum value</p>
                     */
                    std::string m_max;
                    bool m_maxHasBeenSet;

                    /**
                     * <p>Minimum value</p>
                     */
                    std::string m_min;
                    bool m_minHasBeenSet;

                    /**
                     * <p>After modifying parameters, whether database restart is required to take effect. 0-no restart required, 1-restart required.</p>
                     */
                    int64_t m_needReboot;
                    bool m_needRebootHasBeenSet;

                    /**
                     * <p>Parameter name</p>
                     */
                    std::string m_paramName;
                    bool m_paramNameHasBeenSet;

                    /**
                     * <p>Parameter type: integer, enum, float, string, func</p>
                     */
                    std::string m_paramType;
                    bool m_paramTypeHasBeenSet;

                    /**
                     * <p>Whether the parameter is modifiable</p>
                     */
                    ModifiableInfo m_modifiableInfo;
                    bool m_modifiableInfoHasBeenSet;

                    /**
                     * <p>Parameter description</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Whether the type is formula</p>
                     */
                    bool m_isFunc;
                    bool m_isFuncHasBeenSet;

                    /**
                     * <p>Parameter configuration formula</p>
                     */
                    std::string m_func;
                    bool m_funcHasBeenSet;

                    /**
                     * <p>Default formula style for parameters that support formulas</p>
                     */
                    std::string m_funcPattern;
                    bool m_funcPatternHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PARAMITEMDETAIL_H_
