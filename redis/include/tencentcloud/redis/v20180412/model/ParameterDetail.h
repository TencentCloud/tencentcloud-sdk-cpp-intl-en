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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_PARAMETERDETAIL_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_PARAMETERDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * Details of the parameters in the parameter template
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
                     * 获取Parameter Type
                     * @return ParamType Parameter Type
                     */
                    std::string GetParamType() const;

                    /**
                     * 设置Parameter Type
                     * @param ParamType Parameter Type
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
                     * 获取Whether to restart the database for the modified parameters to take effect
- `0`: No restart.
- `1`: Restart required.
                     * @return NeedReboot Whether to restart the database for the modified parameters to take effect
- `0`: No restart.
- `1`: Restart required.
                     */
                    int64_t GetNeedReboot() const;

                    /**
                     * 设置Whether to restart the database for the modified parameters to take effect
- `0`: No restart.
- `1`: Restart required.
                     * @param NeedReboot Whether to restart the database for the modified parameters to take effect
- `0`: No restart.
- `1`: Restart required.
                     */
                    void SetNeedReboot(const int64_t& _needReboot);

                    /**
                     * 判断参数 NeedReboot 是否已赋值
                     * @return NeedReboot 是否已赋值
                     */
                    bool NeedRebootHasBeenSet() const;

                    /**
                     * 获取Maximum value of the parameter
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Max Maximum value of the parameter
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetMax() const;

                    /**
                     * 设置Maximum value of the parameter
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Max Maximum value of the parameter
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMax(const std::string& _max);

                    /**
                     * 判断参数 Max 是否已赋值
                     * @return Max 是否已赋值
                     */
                    bool MaxHasBeenSet() const;

                    /**
                     * 获取Minimum value of the parameter
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Min Minimum value of the parameter
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetMin() const;

                    /**
                     * 设置Minimum value of the parameter
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Min Minimum value of the parameter
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMin(const std::string& _min);

                    /**
                     * 判断参数 Min 是否已赋值
                     * @return Min 是否已赋值
                     */
                    bool MinHasBeenSet() const;

                    /**
                     * 获取Enumerated values of the parameter. It is null if the parameter is non-enumerated
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EnumValue Enumerated values of the parameter. It is null if the parameter is non-enumerated
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetEnumValue() const;

                    /**
                     * 设置Enumerated values of the parameter. It is null if the parameter is non-enumerated
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param EnumValue Enumerated values of the parameter. It is null if the parameter is non-enumerated
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetEnumValue(const std::vector<std::string>& _enumValue);

                    /**
                     * 判断参数 EnumValue 是否已赋值
                     * @return EnumValue 是否已赋值
                     */
                    bool EnumValueHasBeenSet() const;

                private:

                    /**
                     * Parameter name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Parameter Type
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
                     * Whether to restart the database for the modified parameters to take effect
- `0`: No restart.
- `1`: Restart required.
                     */
                    int64_t m_needReboot;
                    bool m_needRebootHasBeenSet;

                    /**
                     * Maximum value of the parameter
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_max;
                    bool m_maxHasBeenSet;

                    /**
                     * Minimum value of the parameter
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_min;
                    bool m_minHasBeenSet;

                    /**
                     * Enumerated values of the parameter. It is null if the parameter is non-enumerated
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_enumValue;
                    bool m_enumValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_PARAMETERDETAIL_H_
