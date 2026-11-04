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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_VARIABLE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_VARIABLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Variable information
                */
                class Variable : public AbstractModel
                {
                public:
                    Variable();
                    ~Variable() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Default file name.</p>
                     * @return DefaultFileName <p>Default file name.</p>
                     * 
                     */
                    std::string GetDefaultFileName() const;

                    /**
                     * 设置<p>Default file name.</p>
                     * @param _defaultFileName <p>Default file name.</p>
                     * 
                     */
                    void SetDefaultFileName(const std::string& _defaultFileName);

                    /**
                     * 判断参数 DefaultFileName 是否已赋值
                     * @return DefaultFileName 是否已赋值
                     * 
                     */
                    bool DefaultFileNameHasBeenSet() const;

                    /**
                     * 获取<p>Default value.</p>
                     * @return DefaultValue <p>Default value.</p>
                     * 
                     */
                    std::string GetDefaultValue() const;

                    /**
                     * 设置<p>Default value.</p>
                     * @param _defaultValue <p>Default value.</p>
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
                     * 获取<p>Variable description</p>
                     * @return Description <p>Variable description</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Variable description</p>
                     * @param _description <p>Variable description</p>
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
                     * 获取<p>Variable module type</p><p>Enumeration values:</p><ul><li>0: API parameter</li><li>1: environment parameter</li><li>2: application parameter</li><li>3: system parameter</li></ul>
                     * @return ModuleType <p>Variable module type</p><p>Enumeration values:</p><ul><li>0: API parameter</li><li>1: environment parameter</li><li>2: application parameter</li><li>3: system parameter</li></ul>
                     * 
                     */
                    int64_t GetModuleType() const;

                    /**
                     * 设置<p>Variable module type</p><p>Enumeration values:</p><ul><li>0: API parameter</li><li>1: environment parameter</li><li>2: application parameter</li><li>3: system parameter</li></ul>
                     * @param _moduleType <p>Variable module type</p><p>Enumeration values:</p><ul><li>0: API parameter</li><li>1: environment parameter</li><li>2: application parameter</li><li>3: system parameter</li></ul>
                     * 
                     */
                    void SetModuleType(const int64_t& _moduleType);

                    /**
                     * 判断参数 ModuleType 是否已赋值
                     * @return ModuleType 是否已赋值
                     * 
                     */
                    bool ModuleTypeHasBeenSet() const;

                    /**
                     * 获取<p>Variable name</p>
                     * @return Name <p>Variable name</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Variable name</p>
                     * @param _name <p>Variable name</p>
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
                     * 获取<p>Variable type</p><p>Enumeration values:</p><ul><li>0: string</li><li>1: integer</li><li>2: floating-point number</li><li>3: boolean value</li><li>4: object</li><li>5: array of strings</li><li>6: array of integers</li><li>7: array of floating-point numbers</li><li>8: array of boolean values</li><li>9: object array</li><li>10: file</li><li>11: document</li><li>12: image</li><li>13: audio</li><li>14: video</li><li>15: file array</li><li>16: document array</li><li>17: image array</li><li>18: audio array</li><li>19: video array</li><li>20: array of arrays</li><li>21: key</li></ul>
                     * @return Type <p>Variable type</p><p>Enumeration values:</p><ul><li>0: string</li><li>1: integer</li><li>2: floating-point number</li><li>3: boolean value</li><li>4: object</li><li>5: array of strings</li><li>6: array of integers</li><li>7: array of floating-point numbers</li><li>8: array of boolean values</li><li>9: object array</li><li>10: file</li><li>11: document</li><li>12: image</li><li>13: audio</li><li>14: video</li><li>15: file array</li><li>16: document array</li><li>17: image array</li><li>18: audio array</li><li>19: video array</li><li>20: array of arrays</li><li>21: key</li></ul>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>Variable type</p><p>Enumeration values:</p><ul><li>0: string</li><li>1: integer</li><li>2: floating-point number</li><li>3: boolean value</li><li>4: object</li><li>5: array of strings</li><li>6: array of integers</li><li>7: array of floating-point numbers</li><li>8: array of boolean values</li><li>9: object array</li><li>10: file</li><li>11: document</li><li>12: image</li><li>13: audio</li><li>14: video</li><li>15: file array</li><li>16: document array</li><li>17: image array</li><li>18: audio array</li><li>19: video array</li><li>20: array of arrays</li><li>21: key</li></ul>
                     * @param _type <p>Variable type</p><p>Enumeration values:</p><ul><li>0: string</li><li>1: integer</li><li>2: floating-point number</li><li>3: boolean value</li><li>4: object</li><li>5: array of strings</li><li>6: array of integers</li><li>7: array of floating-point numbers</li><li>8: array of boolean values</li><li>9: object array</li><li>10: file</li><li>11: document</li><li>12: image</li><li>13: audio</li><li>14: video</li><li>15: file array</li><li>16: document array</li><li>17: image array</li><li>18: audio array</li><li>19: video array</li><li>20: array of arrays</li><li>21: key</li></ul>
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
                     * 获取<p>Variable ID</p>
                     * @return VariableId <p>Variable ID</p>
                     * 
                     */
                    std::string GetVariableId() const;

                    /**
                     * 设置<p>Variable ID</p>
                     * @param _variableId <p>Variable ID</p>
                     * 
                     */
                    void SetVariableId(const std::string& _variableId);

                    /**
                     * 判断参数 VariableId 是否已赋值
                     * @return VariableId 是否已赋值
                     * 
                     */
                    bool VariableIdHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable network policy (only effective for environment variables)</p>
                     * @return EnableEndpoints <p>Whether to enable network policy (only effective for environment variables)</p>
                     * 
                     */
                    bool GetEnableEndpoints() const;

                    /**
                     * 设置<p>Whether to enable network policy (only effective for environment variables)</p>
                     * @param _enableEndpoints <p>Whether to enable network policy (only effective for environment variables)</p>
                     * 
                     */
                    void SetEnableEndpoints(const bool& _enableEndpoints);

                    /**
                     * 判断参数 EnableEndpoints 是否已赋值
                     * @return EnableEndpoints 是否已赋值
                     * 
                     */
                    bool EnableEndpointsHasBeenSet() const;

                    /**
                     * 获取<p>Network policy list (Supported: precise domain name, *.wildcard domain, with optional protocol/port/path prefix)</p>
                     * @return EndpointList <p>Network policy list (Supported: precise domain name, *.wildcard domain, with optional protocol/port/path prefix)</p>
                     * 
                     */
                    std::vector<std::string> GetEndpointList() const;

                    /**
                     * 设置<p>Network policy list (Supported: precise domain name, *.wildcard domain, with optional protocol/port/path prefix)</p>
                     * @param _endpointList <p>Network policy list (Supported: precise domain name, *.wildcard domain, with optional protocol/port/path prefix)</p>
                     * 
                     */
                    void SetEndpointList(const std::vector<std::string>& _endpointList);

                    /**
                     * 判断参数 EndpointList 是否已赋值
                     * @return EndpointList 是否已赋值
                     * 
                     */
                    bool EndpointListHasBeenSet() const;

                    /**
                     * 获取<p>Whether it is a built-in variable.</p>
                     * @return IsBuiltin <p>Whether it is a built-in variable.</p>
                     * 
                     */
                    bool GetIsBuiltin() const;

                    /**
                     * 设置<p>Whether it is a built-in variable.</p>
                     * @param _isBuiltin <p>Whether it is a built-in variable.</p>
                     * 
                     */
                    void SetIsBuiltin(const bool& _isBuiltin);

                    /**
                     * 判断参数 IsBuiltin 是否已赋值
                     * @return IsBuiltin 是否已赋值
                     * 
                     */
                    bool IsBuiltinHasBeenSet() const;

                    /**
                     * 获取<p>Whether it can be injected into the sandbox environment.</p>
                     * @return EnableSandbox <p>Whether it can be injected into the sandbox environment.</p>
                     * 
                     */
                    bool GetEnableSandbox() const;

                    /**
                     * 设置<p>Whether it can be injected into the sandbox environment.</p>
                     * @param _enableSandbox <p>Whether it can be injected into the sandbox environment.</p>
                     * 
                     */
                    void SetEnableSandbox(const bool& _enableSandbox);

                    /**
                     * 判断参数 EnableSandbox 是否已赋值
                     * @return EnableSandbox 是否已赋值
                     * 
                     */
                    bool EnableSandboxHasBeenSet() const;

                private:

                    /**
                     * <p>Default file name.</p>
                     */
                    std::string m_defaultFileName;
                    bool m_defaultFileNameHasBeenSet;

                    /**
                     * <p>Default value.</p>
                     */
                    std::string m_defaultValue;
                    bool m_defaultValueHasBeenSet;

                    /**
                     * <p>Variable description</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Variable module type</p><p>Enumeration values:</p><ul><li>0: API parameter</li><li>1: environment parameter</li><li>2: application parameter</li><li>3: system parameter</li></ul>
                     */
                    int64_t m_moduleType;
                    bool m_moduleTypeHasBeenSet;

                    /**
                     * <p>Variable name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Variable type</p><p>Enumeration values:</p><ul><li>0: string</li><li>1: integer</li><li>2: floating-point number</li><li>3: boolean value</li><li>4: object</li><li>5: array of strings</li><li>6: array of integers</li><li>7: array of floating-point numbers</li><li>8: array of boolean values</li><li>9: object array</li><li>10: file</li><li>11: document</li><li>12: image</li><li>13: audio</li><li>14: video</li><li>15: file array</li><li>16: document array</li><li>17: image array</li><li>18: audio array</li><li>19: video array</li><li>20: array of arrays</li><li>21: key</li></ul>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Variable ID</p>
                     */
                    std::string m_variableId;
                    bool m_variableIdHasBeenSet;

                    /**
                     * <p>Whether to enable network policy (only effective for environment variables)</p>
                     */
                    bool m_enableEndpoints;
                    bool m_enableEndpointsHasBeenSet;

                    /**
                     * <p>Network policy list (Supported: precise domain name, *.wildcard domain, with optional protocol/port/path prefix)</p>
                     */
                    std::vector<std::string> m_endpointList;
                    bool m_endpointListHasBeenSet;

                    /**
                     * <p>Whether it is a built-in variable.</p>
                     */
                    bool m_isBuiltin;
                    bool m_isBuiltinHasBeenSet;

                    /**
                     * <p>Whether it can be injected into the sandbox environment.</p>
                     */
                    bool m_enableSandbox;
                    bool m_enableSandboxHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_VARIABLE_H_
