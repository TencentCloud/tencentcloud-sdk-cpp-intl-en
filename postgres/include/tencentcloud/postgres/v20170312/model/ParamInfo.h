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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_PARAMINFO_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_PARAMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Parameter details
                */
                class ParamInfo : public AbstractModel
                {
                public:
                    ParamInfo();
                    ~ParamInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Parameter ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ID Parameter ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetID() const;

                    /**
                     * 设置Parameter ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param ID Parameter ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取Parameter name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Name Parameter name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetName() const;

                    /**
                     * 设置Parameter name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Name Parameter name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Value type of the parameter. Valid values: `integer`, `real` (floating-point), `bool`, `enum`, `mutil_enum` (this type of parameter can be set to multiple enumerated values).
For an `integer` or `real` parameter, the `Min` field represents the minimum value and the `Max` field the maximum value. 
For a `bool` parameter, the valid values include `true` and `false`; 
For an `enum` or `mutil_enum` parameter, the `EnumValue` field represents the valid values.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ParamValueType Value type of the parameter. Valid values: `integer`, `real` (floating-point), `bool`, `enum`, `mutil_enum` (this type of parameter can be set to multiple enumerated values).
For an `integer` or `real` parameter, the `Min` field represents the minimum value and the `Max` field the maximum value. 
For a `bool` parameter, the valid values include `true` and `false`; 
For an `enum` or `mutil_enum` parameter, the `EnumValue` field represents the valid values.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetParamValueType() const;

                    /**
                     * 设置Value type of the parameter. Valid values: `integer`, `real` (floating-point), `bool`, `enum`, `mutil_enum` (this type of parameter can be set to multiple enumerated values).
For an `integer` or `real` parameter, the `Min` field represents the minimum value and the `Max` field the maximum value. 
For a `bool` parameter, the valid values include `true` and `false`; 
For an `enum` or `mutil_enum` parameter, the `EnumValue` field represents the valid values.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param ParamValueType Value type of the parameter. Valid values: `integer`, `real` (floating-point), `bool`, `enum`, `mutil_enum` (this type of parameter can be set to multiple enumerated values).
For an `integer` or `real` parameter, the `Min` field represents the minimum value and the `Max` field the maximum value. 
For a `bool` parameter, the valid values include `true` and `false`; 
For an `enum` or `mutil_enum` parameter, the `EnumValue` field represents the valid values.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetParamValueType(const std::string& _paramValueType);

                    /**
                     * 判断参数 ParamValueType 是否已赋值
                     * @return ParamValueType 是否已赋值
                     */
                    bool ParamValueTypeHasBeenSet() const;

                    /**
                     * 获取Value unit of the parameter. If the parameter has no unit, this field will return an empty string.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Unit Value unit of the parameter. If the parameter has no unit, this field will return an empty string.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置Value unit of the parameter. If the parameter has no unit, this field will return an empty string.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Unit Value unit of the parameter. If the parameter has no unit, this field will return an empty string.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetUnit(const std::string& _unit);

                    /**
                     * 判断参数 Unit 是否已赋值
                     * @return Unit 是否已赋值
                     */
                    bool UnitHasBeenSet() const;

                    /**
                     * 获取Default value of the parameter, which is returned as a string
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return DefaultValue Default value of the parameter, which is returned as a string
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetDefaultValue() const;

                    /**
                     * 设置Default value of the parameter, which is returned as a string
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param DefaultValue Default value of the parameter, which is returned as a string
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetDefaultValue(const std::string& _defaultValue);

                    /**
                     * 判断参数 DefaultValue 是否已赋值
                     * @return DefaultValue 是否已赋值
                     */
                    bool DefaultValueHasBeenSet() const;

                    /**
                     * 获取Current value of the parameter, which is returned as a string
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return CurrentValue Current value of the parameter, which is returned as a string
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetCurrentValue() const;

                    /**
                     * 设置Current value of the parameter, which is returned as a string
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param CurrentValue Current value of the parameter, which is returned as a string
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetCurrentValue(const std::string& _currentValue);

                    /**
                     * 判断参数 CurrentValue 是否已赋值
                     * @return CurrentValue 是否已赋值
                     */
                    bool CurrentValueHasBeenSet() const;

                    /**
                     * 获取Value range of the enum parameter
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return EnumValue Value range of the enum parameter
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetEnumValue() const;

                    /**
                     * 设置Value range of the enum parameter
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param EnumValue Value range of the enum parameter
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetEnumValue(const std::vector<std::string>& _enumValue);

                    /**
                     * 判断参数 EnumValue 是否已赋值
                     * @return EnumValue 是否已赋值
                     */
                    bool EnumValueHasBeenSet() const;

                    /**
                     * 获取The maximum value of the `integer` or `real` parameter
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Max The maximum value of the `integer` or `real` parameter
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    double GetMax() const;

                    /**
                     * 设置The maximum value of the `integer` or `real` parameter
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Max The maximum value of the `integer` or `real` parameter
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetMax(const double& _max);

                    /**
                     * 判断参数 Max 是否已赋值
                     * @return Max 是否已赋值
                     */
                    bool MaxHasBeenSet() const;

                    /**
                     * 获取The minimum value of the `integer` or `real` parameter
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Min The minimum value of the `integer` or `real` parameter
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    double GetMin() const;

                    /**
                     * 设置The minimum value of the `integer` or `real` parameter
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Min The minimum value of the `integer` or `real` parameter
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetMin(const double& _min);

                    /**
                     * 判断参数 Min 是否已赋值
                     * @return Min 是否已赋值
                     */
                    bool MinHasBeenSet() const;

                    /**
                     * 获取Parameter description in Chinese
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ParamDescriptionCH Parameter description in Chinese
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetParamDescriptionCH() const;

                    /**
                     * 设置Parameter description in Chinese
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param ParamDescriptionCH Parameter description in Chinese
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetParamDescriptionCH(const std::string& _paramDescriptionCH);

                    /**
                     * 判断参数 ParamDescriptionCH 是否已赋值
                     * @return ParamDescriptionCH 是否已赋值
                     */
                    bool ParamDescriptionCHHasBeenSet() const;

                    /**
                     * 获取Parameter description in English
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ParamDescriptionEN Parameter description in English
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetParamDescriptionEN() const;

                    /**
                     * 设置Parameter description in English
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param ParamDescriptionEN Parameter description in English
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetParamDescriptionEN(const std::string& _paramDescriptionEN);

                    /**
                     * 判断参数 ParamDescriptionEN 是否已赋值
                     * @return ParamDescriptionEN 是否已赋值
                     */
                    bool ParamDescriptionENHasBeenSet() const;

                    /**
                     * 获取Whether to restart the instance for the modified parameter to take effect. Valid values: `true` (yes), `false` (no)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return NeedReboot Whether to restart the instance for the modified parameter to take effect. Valid values: `true` (yes), `false` (no)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool GetNeedReboot() const;

                    /**
                     * 设置Whether to restart the instance for the modified parameter to take effect. Valid values: `true` (yes), `false` (no)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param NeedReboot Whether to restart the instance for the modified parameter to take effect. Valid values: `true` (yes), `false` (no)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetNeedReboot(const bool& _needReboot);

                    /**
                     * 判断参数 NeedReboot 是否已赋值
                     * @return NeedReboot 是否已赋值
                     */
                    bool NeedRebootHasBeenSet() const;

                    /**
                     * 获取Parameter category in Chinese
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ClassificationCN Parameter category in Chinese
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetClassificationCN() const;

                    /**
                     * 设置Parameter category in Chinese
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param ClassificationCN Parameter category in Chinese
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetClassificationCN(const std::string& _classificationCN);

                    /**
                     * 判断参数 ClassificationCN 是否已赋值
                     * @return ClassificationCN 是否已赋值
                     */
                    bool ClassificationCNHasBeenSet() const;

                    /**
                     * 获取Parameter category in English
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ClassificationEN Parameter category in English
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetClassificationEN() const;

                    /**
                     * 设置Parameter category in English
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param ClassificationEN Parameter category in English
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetClassificationEN(const std::string& _classificationEN);

                    /**
                     * 判断参数 ClassificationEN 是否已赋值
                     * @return ClassificationEN 是否已赋值
                     */
                    bool ClassificationENHasBeenSet() const;

                    /**
                     * 获取Whether the parameter is related to specifications. Valid values: `true` (yes), `false` (no)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return SpecRelated Whether the parameter is related to specifications. Valid values: `true` (yes), `false` (no)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool GetSpecRelated() const;

                    /**
                     * 设置Whether the parameter is related to specifications. Valid values: `true` (yes), `false` (no)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param SpecRelated Whether the parameter is related to specifications. Valid values: `true` (yes), `false` (no)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetSpecRelated(const bool& _specRelated);

                    /**
                     * 判断参数 SpecRelated 是否已赋值
                     * @return SpecRelated 是否已赋值
                     */
                    bool SpecRelatedHasBeenSet() const;

                    /**
                     * 获取Whether it is a key parameter. Valid values: `true` (yes, and modifying it may affect instance performance), `false` (no)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Advanced Whether it is a key parameter. Valid values: `true` (yes, and modifying it may affect instance performance), `false` (no)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool GetAdvanced() const;

                    /**
                     * 设置Whether it is a key parameter. Valid values: `true` (yes, and modifying it may affect instance performance), `false` (no)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Advanced Whether it is a key parameter. Valid values: `true` (yes, and modifying it may affect instance performance), `false` (no)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetAdvanced(const bool& _advanced);

                    /**
                     * 判断参数 Advanced 是否已赋值
                     * @return Advanced 是否已赋值
                     */
                    bool AdvancedHasBeenSet() const;

                    /**
                     * 获取The last modified time of the parameter
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return LastModifyTime The last modified time of the parameter
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetLastModifyTime() const;

                    /**
                     * 设置The last modified time of the parameter
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param LastModifyTime The last modified time of the parameter
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetLastModifyTime(const std::string& _lastModifyTime);

                    /**
                     * 判断参数 LastModifyTime 是否已赋值
                     * @return LastModifyTime 是否已赋值
                     */
                    bool LastModifyTimeHasBeenSet() const;

                private:

                    /**
                     * Parameter ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * Parameter name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Value type of the parameter. Valid values: `integer`, `real` (floating-point), `bool`, `enum`, `mutil_enum` (this type of parameter can be set to multiple enumerated values).
For an `integer` or `real` parameter, the `Min` field represents the minimum value and the `Max` field the maximum value. 
For a `bool` parameter, the valid values include `true` and `false`; 
For an `enum` or `mutil_enum` parameter, the `EnumValue` field represents the valid values.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_paramValueType;
                    bool m_paramValueTypeHasBeenSet;

                    /**
                     * Value unit of the parameter. If the parameter has no unit, this field will return an empty string.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * Default value of the parameter, which is returned as a string
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_defaultValue;
                    bool m_defaultValueHasBeenSet;

                    /**
                     * Current value of the parameter, which is returned as a string
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_currentValue;
                    bool m_currentValueHasBeenSet;

                    /**
                     * Value range of the enum parameter
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_enumValue;
                    bool m_enumValueHasBeenSet;

                    /**
                     * The maximum value of the `integer` or `real` parameter
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    double m_max;
                    bool m_maxHasBeenSet;

                    /**
                     * The minimum value of the `integer` or `real` parameter
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    double m_min;
                    bool m_minHasBeenSet;

                    /**
                     * Parameter description in Chinese
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_paramDescriptionCH;
                    bool m_paramDescriptionCHHasBeenSet;

                    /**
                     * Parameter description in English
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_paramDescriptionEN;
                    bool m_paramDescriptionENHasBeenSet;

                    /**
                     * Whether to restart the instance for the modified parameter to take effect. Valid values: `true` (yes), `false` (no)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool m_needReboot;
                    bool m_needRebootHasBeenSet;

                    /**
                     * Parameter category in Chinese
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_classificationCN;
                    bool m_classificationCNHasBeenSet;

                    /**
                     * Parameter category in English
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_classificationEN;
                    bool m_classificationENHasBeenSet;

                    /**
                     * Whether the parameter is related to specifications. Valid values: `true` (yes), `false` (no)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool m_specRelated;
                    bool m_specRelatedHasBeenSet;

                    /**
                     * Whether it is a key parameter. Valid values: `true` (yes, and modifying it may affect instance performance), `false` (no)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool m_advanced;
                    bool m_advancedHasBeenSet;

                    /**
                     * The last modified time of the parameter
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_lastModifyTime;
                    bool m_lastModifyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_PARAMINFO_H_
