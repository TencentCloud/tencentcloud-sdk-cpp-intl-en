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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_TEMPLATEPARAMINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_TEMPLATEPARAMINFO_H_

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
                * Parameter template details
                */
                class TemplateParamInfo : public AbstractModel
                {
                public:
                    TemplateParamInfo();
                    ~TemplateParamInfo() = default;
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
                     * 获取The collection of optional value types when the parameter type is `enum`.
                     * @return EnumValue The collection of optional value types when the parameter type is `enum`.
                     * 
                     */
                    std::vector<std::string> GetEnumValue() const;

                    /**
                     * 设置The collection of optional value types when the parameter type is `enum`.
                     * @param _enumValue The collection of optional value types when the parameter type is `enum`.
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
                     * 获取The maximum value when the parameter type is float/integer.
                     * @return Max The maximum value when the parameter type is float/integer.
                     * 
                     */
                    std::string GetMax() const;

                    /**
                     * 设置The maximum value when the parameter type is float/integer.
                     * @param _max The maximum value when the parameter type is float/integer.
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
                     * 获取Minimum value when the parameter type is float/integer.
                     * @return Min Minimum value when the parameter type is float/integer.
                     * 
                     */
                    std::string GetMin() const;

                    /**
                     * 设置Minimum value when the parameter type is float/integer.
                     * @param _min Minimum value when the parameter type is float/integer.
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
                     * 获取Whether to restart the instance for the parameter to take effect
                     * @return NeedReboot Whether to restart the instance for the parameter to take effect
                     * 
                     */
                    int64_t GetNeedReboot() const;

                    /**
                     * 设置Whether to restart the instance for the parameter to take effect
                     * @param _needReboot Whether to restart the instance for the parameter to take effect
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
                     * 获取Parameter type. Valid value: `integer`, `float`, `string`, `enum`.
                     * @return ParamType Parameter type. Valid value: `integer`, `float`, `string`, `enum`.
                     * 
                     */
                    std::string GetParamType() const;

                    /**
                     * 设置Parameter type. Valid value: `integer`, `float`, `string`, `enum`.
                     * @param _paramType Parameter type. Valid value: `integer`, `float`, `string`, `enum`.
                     * 
                     */
                    void SetParamType(const std::string& _paramType);

                    /**
                     * 判断参数 ParamType 是否已赋值
                     * @return ParamType 是否已赋值
                     * 
                     */
                    bool ParamTypeHasBeenSet() const;

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
                     * The collection of optional value types when the parameter type is `enum`.
                     */
                    std::vector<std::string> m_enumValue;
                    bool m_enumValueHasBeenSet;

                    /**
                     * The maximum value when the parameter type is float/integer.
                     */
                    std::string m_max;
                    bool m_maxHasBeenSet;

                    /**
                     * Minimum value when the parameter type is float/integer.
                     */
                    std::string m_min;
                    bool m_minHasBeenSet;

                    /**
                     * Parameter name
                     */
                    std::string m_paramName;
                    bool m_paramNameHasBeenSet;

                    /**
                     * Whether to restart the instance for the parameter to take effect
                     */
                    int64_t m_needReboot;
                    bool m_needRebootHasBeenSet;

                    /**
                     * Parameter description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Parameter type. Valid value: `integer`, `float`, `string`, `enum`.
                     */
                    std::string m_paramType;
                    bool m_paramTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_TEMPLATEPARAMINFO_H_
