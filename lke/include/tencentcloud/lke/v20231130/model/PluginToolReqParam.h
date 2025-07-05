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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_PLUGINTOOLREQPARAM_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_PLUGINTOOLREQPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/PluginToolReqParam.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Plugin parameter request structure.
                */
                class PluginToolReqParam : public AbstractModel
                {
                public:
                    PluginToolReqParam();
                    ~PluginToolReqParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Parameter description.
                     * @return Desc Parameter description.
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置Parameter description.
                     * @param _desc Parameter description.
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取Parameter type, 0: string; 1: int; 2: float; 3: bool; 4: object; 5: array_string; 6: array_int; 7: array_float; 8: array_bool; 9: array_object, 99: null, 100: upspecified.
                     * @return Type Parameter type, 0: string; 1: int; 2: float; 3: bool; 4: object; 5: array_string; 6: array_int; 7: array_float; 8: array_bool; 9: array_object, 99: null, 100: upspecified.
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置Parameter type, 0: string; 1: int; 2: float; 3: bool; 4: object; 5: array_string; 6: array_int; 7: array_float; 8: array_bool; 9: array_object, 99: null, 100: upspecified.
                     * @param _type Parameter type, 0: string; 1: int; 2: float; 3: bool; 4: object; 5: array_string; 6: array_int; 7: array_float; 8: array_bool; 9: array_object, 99: null, 100: upspecified.
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Whether the parameter is required.
                     * @return IsRequired Whether the parameter is required.
                     * 
                     */
                    bool GetIsRequired() const;

                    /**
                     * 设置Whether the parameter is required.
                     * @param _isRequired Whether the parameter is required.
                     * 
                     */
                    void SetIsRequired(const bool& _isRequired);

                    /**
                     * 判断参数 IsRequired 是否已赋值
                     * @return IsRequired 是否已赋值
                     * 
                     */
                    bool IsRequiredHasBeenSet() const;

                    /**
                     * 获取Parameter default value.
                     * @return DefaultValue Parameter default value.
                     * 
                     */
                    std::string GetDefaultValue() const;

                    /**
                     * 设置Parameter default value.
                     * @param _defaultValue Parameter default value.
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
                     * 获取Sub-parameter. "ParamType" is useful when it is "OBJECT " or "ARRAY<>" type.
                     * @return SubParams Sub-parameter. "ParamType" is useful when it is "OBJECT " or "ARRAY<>" type.
                     * 
                     */
                    std::vector<PluginToolReqParam> GetSubParams() const;

                    /**
                     * 设置Sub-parameter. "ParamType" is useful when it is "OBJECT " or "ARRAY<>" type.
                     * @param _subParams Sub-parameter. "ParamType" is useful when it is "OBJECT " or "ARRAY<>" type.
                     * 
                     */
                    void SetSubParams(const std::vector<PluginToolReqParam>& _subParams);

                    /**
                     * 判断参数 SubParams 是否已赋值
                     * @return SubParams 是否已赋值
                     * 
                     */
                    bool SubParamsHasBeenSet() const;

                    /**
                     * 获取Whether the plugin parameter configuration is hidden and invisible. true - Hidden and invisible; false - Visible.
                     * @return GlobalHidden Whether the plugin parameter configuration is hidden and invisible. true - Hidden and invisible; false - Visible.
                     * 
                     */
                    bool GetGlobalHidden() const;

                    /**
                     * 设置Whether the plugin parameter configuration is hidden and invisible. true - Hidden and invisible; false - Visible.
                     * @param _globalHidden Whether the plugin parameter configuration is hidden and invisible. true - Hidden and invisible; false - Visible.
                     * 
                     */
                    void SetGlobalHidden(const bool& _globalHidden);

                    /**
                     * 判断参数 GlobalHidden 是否已赋值
                     * @return GlobalHidden 是否已赋值
                     * 
                     */
                    bool GlobalHiddenHasBeenSet() const;

                    /**
                     * 获取OneOf type parameter.
                     * @return OneOf OneOf type parameter.
                     * 
                     */
                    std::vector<PluginToolReqParam> GetOneOf() const;

                    /**
                     * 设置OneOf type parameter.
                     * @param _oneOf OneOf type parameter.
                     * 
                     */
                    void SetOneOf(const std::vector<PluginToolReqParam>& _oneOf);

                    /**
                     * 判断参数 OneOf 是否已赋值
                     * @return OneOf 是否已赋值
                     * 
                     */
                    bool OneOfHasBeenSet() const;

                    /**
                     * 获取AnyOf type parameter.
                     * @return AnyOf AnyOf type parameter.
                     * 
                     */
                    std::vector<PluginToolReqParam> GetAnyOf() const;

                    /**
                     * 设置AnyOf type parameter.
                     * @param _anyOf AnyOf type parameter.
                     * 
                     */
                    void SetAnyOf(const std::vector<PluginToolReqParam>& _anyOf);

                    /**
                     * 判断参数 AnyOf 是否已赋值
                     * @return AnyOf 是否已赋值
                     * 
                     */
                    bool AnyOfHasBeenSet() const;

                private:

                    /**
                     * Parameter name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Parameter description.
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * Parameter type, 0: string; 1: int; 2: float; 3: bool; 4: object; 5: array_string; 6: array_int; 7: array_float; 8: array_bool; 9: array_object, 99: null, 100: upspecified.
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Whether the parameter is required.
                     */
                    bool m_isRequired;
                    bool m_isRequiredHasBeenSet;

                    /**
                     * Parameter default value.
                     */
                    std::string m_defaultValue;
                    bool m_defaultValueHasBeenSet;

                    /**
                     * Sub-parameter. "ParamType" is useful when it is "OBJECT " or "ARRAY<>" type.
                     */
                    std::vector<PluginToolReqParam> m_subParams;
                    bool m_subParamsHasBeenSet;

                    /**
                     * Whether the plugin parameter configuration is hidden and invisible. true - Hidden and invisible; false - Visible.
                     */
                    bool m_globalHidden;
                    bool m_globalHiddenHasBeenSet;

                    /**
                     * OneOf type parameter.
                     */
                    std::vector<PluginToolReqParam> m_oneOf;
                    bool m_oneOfHasBeenSet;

                    /**
                     * AnyOf type parameter.
                     */
                    std::vector<PluginToolReqParam> m_anyOf;
                    bool m_anyOfHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_PLUGINTOOLREQPARAM_H_
