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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_PARAMETERDETAIL_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_PARAMETERDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * Instance parameter details
                */
                class ParameterDetail : public AbstractModel
                {
                public:
                    ParameterDetail();
                    ~ParameterDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Parameter name
                     * @return Name Parameter name
                     */
                    std::string GetName() const;

                    /**
                     * 设置Parameter name
                     * @param Name Parameter name
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Data type of the parameter. Valid values: `integer`, `enum`
                     * @return ParamType Data type of the parameter. Valid values: `integer`, `enum`
                     */
                    std::string GetParamType() const;

                    /**
                     * 设置Data type of the parameter. Valid values: `integer`, `enum`
                     * @param ParamType Data type of the parameter. Valid values: `integer`, `enum`
                     */
                    void SetParamType(const std::string& _paramType);

                    /**
                     * 判断参数 ParamType 是否已赋值
                     * @return ParamType 是否已赋值
                     */
                    bool ParamTypeHasBeenSet() const;

                    /**
                     * 获取Default value of the parameter
                     * @return Default Default value of the parameter
                     */
                    std::string GetDefault() const;

                    /**
                     * 设置Default value of the parameter
                     * @param Default Default value of the parameter
                     */
                    void SetDefault(const std::string& _default);

                    /**
                     * 判断参数 Default 是否已赋值
                     * @return Default 是否已赋值
                     */
                    bool DefaultHasBeenSet() const;

                    /**
                     * 获取Parameter description
                     * @return Description Parameter description
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Parameter description
                     * @param Description Parameter description
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Current value of the parameter
                     * @return CurrentValue Current value of the parameter
                     */
                    std::string GetCurrentValue() const;

                    /**
                     * 设置Current value of the parameter
                     * @param CurrentValue Current value of the parameter
                     */
                    void SetCurrentValue(const std::string& _currentValue);

                    /**
                     * 判断参数 CurrentValue 是否已赋值
                     * @return CurrentValue 是否已赋值
                     */
                    bool CurrentValueHasBeenSet() const;

                    /**
                     * 获取Whether the database needs to be restarted for the modified parameter to take effect. Valid values: `0` (no),`1` (yes)
                     * @return NeedReboot Whether the database needs to be restarted for the modified parameter to take effect. Valid values: `0` (no),`1` (yes)
                     */
                    int64_t GetNeedReboot() const;

                    /**
                     * 设置Whether the database needs to be restarted for the modified parameter to take effect. Valid values: `0` (no),`1` (yes)
                     * @param NeedReboot Whether the database needs to be restarted for the modified parameter to take effect. Valid values: `0` (no),`1` (yes)
                     */
                    void SetNeedReboot(const int64_t& _needReboot);

                    /**
                     * 判断参数 NeedReboot 是否已赋值
                     * @return NeedReboot 是否已赋值
                     */
                    bool NeedRebootHasBeenSet() const;

                    /**
                     * 获取Maximum value of the parameter
                     * @return Max Maximum value of the parameter
                     */
                    int64_t GetMax() const;

                    /**
                     * 设置Maximum value of the parameter
                     * @param Max Maximum value of the parameter
                     */
                    void SetMax(const int64_t& _max);

                    /**
                     * 判断参数 Max 是否已赋值
                     * @return Max 是否已赋值
                     */
                    bool MaxHasBeenSet() const;

                    /**
                     * 获取Minimum value of the parameter
                     * @return Min Minimum value of the parameter
                     */
                    int64_t GetMin() const;

                    /**
                     * 设置Minimum value of the parameter
                     * @param Min Minimum value of the parameter
                     */
                    void SetMin(const int64_t& _min);

                    /**
                     * 判断参数 Min 是否已赋值
                     * @return Min 是否已赋值
                     */
                    bool MinHasBeenSet() const;

                    /**
                     * 获取Enumerated values of the parameter
                     * @return EnumValue Enumerated values of the parameter
                     */
                    std::vector<std::string> GetEnumValue() const;

                    /**
                     * 设置Enumerated values of the parameter
                     * @param EnumValue Enumerated values of the parameter
                     */
                    void SetEnumValue(const std::vector<std::string>& _enumValue);

                    /**
                     * 判断参数 EnumValue 是否已赋值
                     * @return EnumValue 是否已赋值
                     */
                    bool EnumValueHasBeenSet() const;

                    /**
                     * 获取Parameter status. Valid values: `0` (normal), `1` (modifying)
                     * @return Status Parameter status. Valid values: `0` (normal), `1` (modifying)
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Parameter status. Valid values: `0` (normal), `1` (modifying)
                     * @param Status Parameter status. Valid values: `0` (normal), `1` (modifying)
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Parameter name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Data type of the parameter. Valid values: `integer`, `enum`
                     */
                    std::string m_paramType;
                    bool m_paramTypeHasBeenSet;

                    /**
                     * Default value of the parameter
                     */
                    std::string m_default;
                    bool m_defaultHasBeenSet;

                    /**
                     * Parameter description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Current value of the parameter
                     */
                    std::string m_currentValue;
                    bool m_currentValueHasBeenSet;

                    /**
                     * Whether the database needs to be restarted for the modified parameter to take effect. Valid values: `0` (no),`1` (yes)
                     */
                    int64_t m_needReboot;
                    bool m_needRebootHasBeenSet;

                    /**
                     * Maximum value of the parameter
                     */
                    int64_t m_max;
                    bool m_maxHasBeenSet;

                    /**
                     * Minimum value of the parameter
                     */
                    int64_t m_min;
                    bool m_minHasBeenSet;

                    /**
                     * Enumerated values of the parameter
                     */
                    std::vector<std::string> m_enumValue;
                    bool m_enumValueHasBeenSet;

                    /**
                     * Parameter status. Valid values: `0` (normal), `1` (modifying)
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_PARAMETERDETAIL_H_
