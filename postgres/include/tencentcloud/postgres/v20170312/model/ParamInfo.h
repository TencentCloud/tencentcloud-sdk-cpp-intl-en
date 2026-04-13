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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_PARAMINFO_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_PARAMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/ParamVersionRelation.h>
#include <tencentcloud/postgres/v20170312/model/ParamSpecRelation.h>


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
                     * @return ID Parameter ID
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置Parameter ID
                     * @param _iD Parameter ID
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取Parameter name.
                     * @return Name Parameter name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Parameter name.
                     * @param _name Parameter name.
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
                     * 获取Parameter value type: integer, real, bool, enum, mutil_enum.
When the parameter type is integer or real (floating-point), the value range is determined based on the Max and Min of the return value. 
When the parameter type is boolean, the valid values are true or false. 
When the parameter type is enum (enumeration type) or mutil_enum (multi-enum type), the valid values are determined by EnumValue in the return value.
                     * @return ParamValueType Parameter value type: integer, real, bool, enum, mutil_enum.
When the parameter type is integer or real (floating-point), the value range is determined based on the Max and Min of the return value. 
When the parameter type is boolean, the valid values are true or false. 
When the parameter type is enum (enumeration type) or mutil_enum (multi-enum type), the valid values are determined by EnumValue in the return value.
                     * 
                     */
                    std::string GetParamValueType() const;

                    /**
                     * 设置Parameter value type: integer, real, bool, enum, mutil_enum.
When the parameter type is integer or real (floating-point), the value range is determined based on the Max and Min of the return value. 
When the parameter type is boolean, the valid values are true or false. 
When the parameter type is enum (enumeration type) or mutil_enum (multi-enum type), the valid values are determined by EnumValue in the return value.
                     * @param _paramValueType Parameter value type: integer, real, bool, enum, mutil_enum.
When the parameter type is integer or real (floating-point), the value range is determined based on the Max and Min of the return value. 
When the parameter type is boolean, the valid values are true or false. 
When the parameter type is enum (enumeration type) or mutil_enum (multi-enum type), the valid values are determined by EnumValue in the return value.
                     * 
                     */
                    void SetParamValueType(const std::string& _paramValueType);

                    /**
                     * 判断参数 ParamValueType 是否已赋值
                     * @return ParamValueType 是否已赋值
                     * 
                     */
                    bool ParamValueTypeHasBeenSet() const;

                    /**
                     * 获取Parameter value unit. returns null if the parameter has no units.
                     * @return Unit Parameter value unit. returns null if the parameter has no units.
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置Parameter value unit. returns null if the parameter has no units.
                     * @param _unit Parameter value unit. returns null if the parameter has no units.
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
                     * 获取Default parameter value. returns in string form.
                     * @return DefaultValue Default parameter value. returns in string form.
                     * 
                     */
                    std::string GetDefaultValue() const;

                    /**
                     * 设置Default parameter value. returns in string form.
                     * @param _defaultValue Default parameter value. returns in string form.
                     * 
                     */
                    void SetDefaultValue(const std::string& _defaultValue);

                    /**
                     * 判断参数 DefaultValue 是否已赋值
                     * @return DefaultValue 是否已赋值
                     * 
                     */
                    bool DefaultValueHasBeenSet() const;

                    /**
                     * 获取Specifies the current value in string form.
                     * @return CurrentValue Specifies the current value in string form.
                     * 
                     */
                    std::string GetCurrentValue() const;

                    /**
                     * 设置Specifies the current value in string form.
                     * @param _currentValue Specifies the current value in string form.
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
                     * 获取Specifies the numerical type (integer, real) parameter and its lower bound.
                     * @return Max Specifies the numerical type (integer, real) parameter and its lower bound.
                     * 
                     */
                    double GetMax() const;

                    /**
                     * 设置Specifies the numerical type (integer, real) parameter and its lower bound.
                     * @param _max Specifies the numerical type (integer, real) parameter and its lower bound.
                     * 
                     */
                    void SetMax(const double& _max);

                    /**
                     * 判断参数 Max 是否已赋值
                     * @return Max 是否已赋值
                     * 
                     */
                    bool MaxHasBeenSet() const;

                    /**
                     * 获取Value range of the enum parameter
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return EnumValue Value range of the enum parameter
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetEnumValue() const;

                    /**
                     * 设置Value range of the enum parameter
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _enumValue Value range of the enum parameter
Note: this field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Numerical type (integer, real) parameter specifies the upper bound.
                     * @return Min Numerical type (integer, real) parameter specifies the upper bound.
                     * 
                     */
                    double GetMin() const;

                    /**
                     * 设置Numerical type (integer, real) parameter specifies the upper bound.
                     * @param _min Numerical type (integer, real) parameter specifies the upper bound.
                     * 
                     */
                    void SetMin(const double& _min);

                    /**
                     * 判断参数 Min 是否已赋值
                     * @return Min 是否已赋值
                     * 
                     */
                    bool MinHasBeenSet() const;

                    /**
                     * 获取Chinese description.
                     * @return ParamDescriptionCH Chinese description.
                     * 
                     */
                    std::string GetParamDescriptionCH() const;

                    /**
                     * 设置Chinese description.
                     * @param _paramDescriptionCH Chinese description.
                     * 
                     */
                    void SetParamDescriptionCH(const std::string& _paramDescriptionCH);

                    /**
                     * 判断参数 ParamDescriptionCH 是否已赋值
                     * @return ParamDescriptionCH 是否已赋值
                     * 
                     */
                    bool ParamDescriptionCHHasBeenSet() const;

                    /**
                     * 获取Specifies the english description of the parameter.
                     * @return ParamDescriptionEN Specifies the english description of the parameter.
                     * 
                     */
                    std::string GetParamDescriptionEN() const;

                    /**
                     * 设置Specifies the english description of the parameter.
                     * @param _paramDescriptionEN Specifies the english description of the parameter.
                     * 
                     */
                    void SetParamDescriptionEN(const std::string& _paramDescriptionEN);

                    /**
                     * 判断参数 ParamDescriptionEN 是否已赋值
                     * @return ParamDescriptionEN 是否已赋值
                     * 
                     */
                    bool ParamDescriptionENHasBeenSet() const;

                    /**
                     * 获取Specifies whether a restart is required for parameter modification (true indicates required, false indicates not required).
                     * @return NeedReboot Specifies whether a restart is required for parameter modification (true indicates required, false indicates not required).
                     * 
                     */
                    bool GetNeedReboot() const;

                    /**
                     * 设置Specifies whether a restart is required for parameter modification (true indicates required, false indicates not required).
                     * @param _needReboot Specifies whether a restart is required for parameter modification (true indicates required, false indicates not required).
                     * 
                     */
                    void SetNeedReboot(const bool& _needReboot);

                    /**
                     * 判断参数 NeedReboot 是否已赋值
                     * @return NeedReboot 是否已赋值
                     * 
                     */
                    bool NeedRebootHasBeenSet() const;

                    /**
                     * 获取Parameter chinese category.
                     * @return ClassificationCN Parameter chinese category.
                     * 
                     */
                    std::string GetClassificationCN() const;

                    /**
                     * 设置Parameter chinese category.
                     * @param _classificationCN Parameter chinese category.
                     * 
                     */
                    void SetClassificationCN(const std::string& _classificationCN);

                    /**
                     * 判断参数 ClassificationCN 是否已赋值
                     * @return ClassificationCN 是否已赋值
                     * 
                     */
                    bool ClassificationCNHasBeenSet() const;

                    /**
                     * 获取Parameter english category.
                     * @return ClassificationEN Parameter english category.
                     * 
                     */
                    std::string GetClassificationEN() const;

                    /**
                     * 设置Parameter english category.
                     * @param _classificationEN Parameter english category.
                     * 
                     */
                    void SetClassificationEN(const std::string& _classificationEN);

                    /**
                     * 判断参数 ClassificationEN 是否已赋值
                     * @return ClassificationEN 是否已赋值
                     * 
                     */
                    bool ClassificationENHasBeenSet() const;

                    /**
                     * 获取Specifies whether it is related to the specification (true for related, false for unrelated).
                     * @return SpecRelated Specifies whether it is related to the specification (true for related, false for unrelated).
                     * 
                     */
                    bool GetSpecRelated() const;

                    /**
                     * 设置Specifies whether it is related to the specification (true for related, false for unrelated).
                     * @param _specRelated Specifies whether it is related to the specification (true for related, false for unrelated).
                     * 
                     */
                    void SetSpecRelated(const bool& _specRelated);

                    /**
                     * 判断参数 SpecRelated 是否已赋值
                     * @return SpecRelated 是否已赋值
                     * 
                     */
                    bool SpecRelatedHasBeenSet() const;

                    /**
                     * 获取Indicates whether it is a key parameter (true means it is a key parameter, modification requires special attention and may affect instance performance).
                     * @return Advanced Indicates whether it is a key parameter (true means it is a key parameter, modification requires special attention and may affect instance performance).
                     * 
                     */
                    bool GetAdvanced() const;

                    /**
                     * 设置Indicates whether it is a key parameter (true means it is a key parameter, modification requires special attention and may affect instance performance).
                     * @param _advanced Indicates whether it is a key parameter (true means it is a key parameter, modification requires special attention and may affect instance performance).
                     * 
                     */
                    void SetAdvanced(const bool& _advanced);

                    /**
                     * 判断参数 Advanced 是否已赋值
                     * @return Advanced 是否已赋值
                     * 
                     */
                    bool AdvancedHasBeenSet() const;

                    /**
                     * 获取Specifies the last modified time.
                     * @return LastModifyTime Specifies the last modified time.
                     * 
                     */
                    std::string GetLastModifyTime() const;

                    /**
                     * 设置Specifies the last modified time.
                     * @param _lastModifyTime Specifies the last modified time.
                     * 
                     */
                    void SetLastModifyTime(const std::string& _lastModifyTime);

                    /**
                     * 判断参数 LastModifyTime 是否已赋值
                     * @return LastModifyTime 是否已赋值
                     * 
                     */
                    bool LastModifyTimeHasBeenSet() const;

                    /**
                     * 获取Parameter primary-secondary constraints. `0`: no constraint between primary and standby. `1`: standby parameter value > primary machine parameter value. `2`: primary parameter value must be greater than that of the standby machine.
                     * @return StandbyRelated Parameter primary-secondary constraints. `0`: no constraint between primary and standby. `1`: standby parameter value > primary machine parameter value. `2`: primary parameter value must be greater than that of the standby machine.
                     * 
                     */
                    int64_t GetStandbyRelated() const;

                    /**
                     * 设置Parameter primary-secondary constraints. `0`: no constraint between primary and standby. `1`: standby parameter value > primary machine parameter value. `2`: primary parameter value must be greater than that of the standby machine.
                     * @param _standbyRelated Parameter primary-secondary constraints. `0`: no constraint between primary and standby. `1`: standby parameter value > primary machine parameter value. `2`: primary parameter value must be greater than that of the standby machine.
                     * 
                     */
                    void SetStandbyRelated(const int64_t& _standbyRelated);

                    /**
                     * 判断参数 StandbyRelated 是否已赋值
                     * @return StandbyRelated 是否已赋值
                     * 
                     */
                    bool StandbyRelatedHasBeenSet() const;

                    /**
                     * 获取Parameter version association information, containing detailed parameter information for the respective kernel version
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VersionRelationSet Parameter version association information, containing detailed parameter information for the respective kernel version
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ParamVersionRelation> GetVersionRelationSet() const;

                    /**
                     * 设置Parameter version association information, containing detailed parameter information for the respective kernel version
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _versionRelationSet Parameter version association information, containing detailed parameter information for the respective kernel version
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetVersionRelationSet(const std::vector<ParamVersionRelation>& _versionRelationSet);

                    /**
                     * 判断参数 VersionRelationSet 是否已赋值
                     * @return VersionRelationSet 是否已赋值
                     * 
                     */
                    bool VersionRelationSetHasBeenSet() const;

                    /**
                     * 获取Parameter specification association information, containing detailed parameter information for the respective specification
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SpecRelationSet Parameter specification association information, containing detailed parameter information for the respective specification
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ParamSpecRelation> GetSpecRelationSet() const;

                    /**
                     * 设置Parameter specification association information, containing detailed parameter information for the respective specification
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _specRelationSet Parameter specification association information, containing detailed parameter information for the respective specification
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSpecRelationSet(const std::vector<ParamSpecRelation>& _specRelationSet);

                    /**
                     * 判断参数 SpecRelationSet 是否已赋值
                     * @return SpecRelationSet 是否已赋值
                     * 
                     */
                    bool SpecRelationSetHasBeenSet() const;

                private:

                    /**
                     * Parameter ID
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * Parameter name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Parameter value type: integer, real, bool, enum, mutil_enum.
When the parameter type is integer or real (floating-point), the value range is determined based on the Max and Min of the return value. 
When the parameter type is boolean, the valid values are true or false. 
When the parameter type is enum (enumeration type) or mutil_enum (multi-enum type), the valid values are determined by EnumValue in the return value.
                     */
                    std::string m_paramValueType;
                    bool m_paramValueTypeHasBeenSet;

                    /**
                     * Parameter value unit. returns null if the parameter has no units.
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * Default parameter value. returns in string form.
                     */
                    std::string m_defaultValue;
                    bool m_defaultValueHasBeenSet;

                    /**
                     * Specifies the current value in string form.
                     */
                    std::string m_currentValue;
                    bool m_currentValueHasBeenSet;

                    /**
                     * Specifies the numerical type (integer, real) parameter and its lower bound.
                     */
                    double m_max;
                    bool m_maxHasBeenSet;

                    /**
                     * Value range of the enum parameter
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_enumValue;
                    bool m_enumValueHasBeenSet;

                    /**
                     * Numerical type (integer, real) parameter specifies the upper bound.
                     */
                    double m_min;
                    bool m_minHasBeenSet;

                    /**
                     * Chinese description.
                     */
                    std::string m_paramDescriptionCH;
                    bool m_paramDescriptionCHHasBeenSet;

                    /**
                     * Specifies the english description of the parameter.
                     */
                    std::string m_paramDescriptionEN;
                    bool m_paramDescriptionENHasBeenSet;

                    /**
                     * Specifies whether a restart is required for parameter modification (true indicates required, false indicates not required).
                     */
                    bool m_needReboot;
                    bool m_needRebootHasBeenSet;

                    /**
                     * Parameter chinese category.
                     */
                    std::string m_classificationCN;
                    bool m_classificationCNHasBeenSet;

                    /**
                     * Parameter english category.
                     */
                    std::string m_classificationEN;
                    bool m_classificationENHasBeenSet;

                    /**
                     * Specifies whether it is related to the specification (true for related, false for unrelated).
                     */
                    bool m_specRelated;
                    bool m_specRelatedHasBeenSet;

                    /**
                     * Indicates whether it is a key parameter (true means it is a key parameter, modification requires special attention and may affect instance performance).
                     */
                    bool m_advanced;
                    bool m_advancedHasBeenSet;

                    /**
                     * Specifies the last modified time.
                     */
                    std::string m_lastModifyTime;
                    bool m_lastModifyTimeHasBeenSet;

                    /**
                     * Parameter primary-secondary constraints. `0`: no constraint between primary and standby. `1`: standby parameter value > primary machine parameter value. `2`: primary parameter value must be greater than that of the standby machine.
                     */
                    int64_t m_standbyRelated;
                    bool m_standbyRelatedHasBeenSet;

                    /**
                     * Parameter version association information, containing detailed parameter information for the respective kernel version
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ParamVersionRelation> m_versionRelationSet;
                    bool m_versionRelationSetHasBeenSet;

                    /**
                     * Parameter specification association information, containing detailed parameter information for the respective specification
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ParamSpecRelation> m_specRelationSet;
                    bool m_specRelationSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_PARAMINFO_H_
