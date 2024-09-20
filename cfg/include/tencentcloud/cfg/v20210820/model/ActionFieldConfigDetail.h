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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_ACTIONFIELDCONFIGDETAIL_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_ACTIONFIELDCONFIGDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Response format of dynamic action parameters
                */
                class ActionFieldConfigDetail : public AbstractModel
                {
                public:
                    ActionFieldConfigDetail();
                    ~ActionFieldConfigDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Component type
The options are as follows:
input: text box
textarea: multi-line text box
number: number input box
select: selector
cascader: cascade selector
radio: single choice
time: time selection
                     * @return Type Component type
The options are as follows:
input: text box
textarea: multi-line text box
number: number input box
select: selector
cascader: cascade selector
radio: single choice
time: time selection
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Component type
The options are as follows:
input: text box
textarea: multi-line text box
number: number input box
select: selector
cascader: cascade selector
radio: single choice
time: time selection
                     * @param _type Component type
The options are as follows:
input: text box
textarea: multi-line text box
number: number input box
select: selector
cascader: cascade selector
radio: single choice
time: time selection
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Component label
                     * @return Lable Component label
                     * 
                     */
                    std::string GetLable() const;

                    /**
                     * 设置Component label
                     * @param _lable Component label
                     * 
                     */
                    void SetLable(const std::string& _lable);

                    /**
                     * 判断参数 Lable 是否已赋值
                     * @return Lable 是否已赋值
                     * 
                     */
                    bool LableHasBeenSet() const;

                    /**
                     * 获取Unique identifier of the component, key when it is sent back to the backend
                     * @return Field Unique identifier of the component, key when it is sent back to the backend
                     * 
                     */
                    std::string GetField() const;

                    /**
                     * 设置Unique identifier of the component, key when it is sent back to the backend
                     * @param _field Unique identifier of the component, key when it is sent back to the backend
                     * 
                     */
                    void SetField(const std::string& _field);

                    /**
                     * 判断参数 Field 是否已赋值
                     * @return Field 是否已赋值
                     * 
                     */
                    bool FieldHasBeenSet() const;

                    /**
                     * 获取Default value
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DefaultValue Default value
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDefaultValue() const;

                    /**
                     * 设置Default value
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _defaultValue Default value
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The supported configuration items are as follows. You can select the configuration items as needed. If no configuration is required, set the value to {}.

{  placeholder: string (placeholder)

  tooltip: string (prompt message)

  reg: RegExp (regular expression for the input content format)

  max: number (maximum number of input characters for text boxes and upper limit of the input number for number input boxes)

  min: number (lower limit of the input number for number input boxes)

  step: number (step size for number input boxes; default value: 1)

  format: string (format for time selection, for example YYYY-MM-DD and YYYY-MM-DD HH:mm:ss)

  separator: string[] (separator for multi-line input boxes. If it is left blank, no separator is used, and the text string entered by the user is returned directly.)

  multiple: boolean (multiple-choice or not, valid for selectors and cascade selectors)

  options: selector options (support the following two forms)

Directly provide the option array: { value: string; label: string }[]
Obtain options by calling the API: { api: string (API URL), params: string[] (interface parameters, corresponding to field of the parameter configuration. The frontend uses the input values of all components corresponding to field as parameters to query data. If no value is input, the frontend directly requests data when components are loaded.) 
}
}
                     * @return Config The supported configuration items are as follows. You can select the configuration items as needed. If no configuration is required, set the value to {}.

{  placeholder: string (placeholder)

  tooltip: string (prompt message)

  reg: RegExp (regular expression for the input content format)

  max: number (maximum number of input characters for text boxes and upper limit of the input number for number input boxes)

  min: number (lower limit of the input number for number input boxes)

  step: number (step size for number input boxes; default value: 1)

  format: string (format for time selection, for example YYYY-MM-DD and YYYY-MM-DD HH:mm:ss)

  separator: string[] (separator for multi-line input boxes. If it is left blank, no separator is used, and the text string entered by the user is returned directly.)

  multiple: boolean (multiple-choice or not, valid for selectors and cascade selectors)

  options: selector options (support the following two forms)

Directly provide the option array: { value: string; label: string }[]
Obtain options by calling the API: { api: string (API URL), params: string[] (interface parameters, corresponding to field of the parameter configuration. The frontend uses the input values of all components corresponding to field as parameters to query data. If no value is input, the frontend directly requests data when components are loaded.) 
}
}
                     * 
                     */
                    std::string GetConfig() const;

                    /**
                     * 设置The supported configuration items are as follows. You can select the configuration items as needed. If no configuration is required, set the value to {}.

{  placeholder: string (placeholder)

  tooltip: string (prompt message)

  reg: RegExp (regular expression for the input content format)

  max: number (maximum number of input characters for text boxes and upper limit of the input number for number input boxes)

  min: number (lower limit of the input number for number input boxes)

  step: number (step size for number input boxes; default value: 1)

  format: string (format for time selection, for example YYYY-MM-DD and YYYY-MM-DD HH:mm:ss)

  separator: string[] (separator for multi-line input boxes. If it is left blank, no separator is used, and the text string entered by the user is returned directly.)

  multiple: boolean (multiple-choice or not, valid for selectors and cascade selectors)

  options: selector options (support the following two forms)

Directly provide the option array: { value: string; label: string }[]
Obtain options by calling the API: { api: string (API URL), params: string[] (interface parameters, corresponding to field of the parameter configuration. The frontend uses the input values of all components corresponding to field as parameters to query data. If no value is input, the frontend directly requests data when components are loaded.) 
}
}
                     * @param _config The supported configuration items are as follows. You can select the configuration items as needed. If no configuration is required, set the value to {}.

{  placeholder: string (placeholder)

  tooltip: string (prompt message)

  reg: RegExp (regular expression for the input content format)

  max: number (maximum number of input characters for text boxes and upper limit of the input number for number input boxes)

  min: number (lower limit of the input number for number input boxes)

  step: number (step size for number input boxes; default value: 1)

  format: string (format for time selection, for example YYYY-MM-DD and YYYY-MM-DD HH:mm:ss)

  separator: string[] (separator for multi-line input boxes. If it is left blank, no separator is used, and the text string entered by the user is returned directly.)

  multiple: boolean (multiple-choice or not, valid for selectors and cascade selectors)

  options: selector options (support the following two forms)

Directly provide the option array: { value: string; label: string }[]
Obtain options by calling the API: { api: string (API URL), params: string[] (interface parameters, corresponding to field of the parameter configuration. The frontend uses the input values of all components corresponding to field as parameters to query data. If no value is input, the frontend directly requests data when components are loaded.) 
}
}
                     * 
                     */
                    void SetConfig(const std::string& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取Whether it is required (0: no; 1: yes)
                     * @return Required Whether it is required (0: no; 1: yes)
                     * 
                     */
                    uint64_t GetRequired() const;

                    /**
                     * 设置Whether it is required (0: no; 1: yes)
                     * @param _required Whether it is required (0: no; 1: yes)
                     * 
                     */
                    void SetRequired(const uint64_t& _required);

                    /**
                     * 判断参数 Required 是否已赋值
                     * @return Required 是否已赋值
                     * 
                     */
                    bool RequiredHasBeenSet() const;

                    /**
                     * 获取The compute configuration passes the verification when other fields that it depends on meet the conditions. (For example, at least one of the three form items must be filled in.)

[fieldName,

{ config: This item is retained and will be refined based on subsequent scenes. }

]
                     * @return Validate The compute configuration passes the verification when other fields that it depends on meet the conditions. (For example, at least one of the three form items must be filled in.)

[fieldName,

{ config: This item is retained and will be refined based on subsequent scenes. }

]
                     * 
                     */
                    std::string GetValidate() const;

                    /**
                     * 设置The compute configuration passes the verification when other fields that it depends on meet the conditions. (For example, at least one of the three form items must be filled in.)

[fieldName,

{ config: This item is retained and will be refined based on subsequent scenes. }

]
                     * @param _validate The compute configuration passes the verification when other fields that it depends on meet the conditions. (For example, at least one of the three form items must be filled in.)

[fieldName,

{ config: This item is retained and will be refined based on subsequent scenes. }

]
                     * 
                     */
                    void SetValidate(const std::string& _validate);

                    /**
                     * 判断参数 Validate 是否已赋值
                     * @return Validate 是否已赋值
                     * 
                     */
                    bool ValidateHasBeenSet() const;

                    /**
                     * 获取Whether it is visible
                     * @return Visible Whether it is visible
                     * 
                     */
                    std::string GetVisible() const;

                    /**
                     * 设置Whether it is visible
                     * @param _visible Whether it is visible
                     * 
                     */
                    void SetVisible(const std::string& _visible);

                    /**
                     * 判断参数 Visible 是否已赋值
                     * @return Visible 是否已赋值
                     * 
                     */
                    bool VisibleHasBeenSet() const;

                private:

                    /**
                     * Component type
The options are as follows:
input: text box
textarea: multi-line text box
number: number input box
select: selector
cascader: cascade selector
radio: single choice
time: time selection
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Component label
                     */
                    std::string m_lable;
                    bool m_lableHasBeenSet;

                    /**
                     * Unique identifier of the component, key when it is sent back to the backend
                     */
                    std::string m_field;
                    bool m_fieldHasBeenSet;

                    /**
                     * Default value
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_defaultValue;
                    bool m_defaultValueHasBeenSet;

                    /**
                     * The supported configuration items are as follows. You can select the configuration items as needed. If no configuration is required, set the value to {}.

{  placeholder: string (placeholder)

  tooltip: string (prompt message)

  reg: RegExp (regular expression for the input content format)

  max: number (maximum number of input characters for text boxes and upper limit of the input number for number input boxes)

  min: number (lower limit of the input number for number input boxes)

  step: number (step size for number input boxes; default value: 1)

  format: string (format for time selection, for example YYYY-MM-DD and YYYY-MM-DD HH:mm:ss)

  separator: string[] (separator for multi-line input boxes. If it is left blank, no separator is used, and the text string entered by the user is returned directly.)

  multiple: boolean (multiple-choice or not, valid for selectors and cascade selectors)

  options: selector options (support the following two forms)

Directly provide the option array: { value: string; label: string }[]
Obtain options by calling the API: { api: string (API URL), params: string[] (interface parameters, corresponding to field of the parameter configuration. The frontend uses the input values of all components corresponding to field as parameters to query data. If no value is input, the frontend directly requests data when components are loaded.) 
}
}
                     */
                    std::string m_config;
                    bool m_configHasBeenSet;

                    /**
                     * Whether it is required (0: no; 1: yes)
                     */
                    uint64_t m_required;
                    bool m_requiredHasBeenSet;

                    /**
                     * The compute configuration passes the verification when other fields that it depends on meet the conditions. (For example, at least one of the three form items must be filled in.)

[fieldName,

{ config: This item is retained and will be refined based on subsequent scenes. }

]
                     */
                    std::string m_validate;
                    bool m_validateHasBeenSet;

                    /**
                     * Whether it is visible
                     */
                    std::string m_visible;
                    bool m_visibleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_ACTIONFIELDCONFIGDETAIL_H_
