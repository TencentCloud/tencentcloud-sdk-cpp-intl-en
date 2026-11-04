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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_REQUESTPARAM_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_REQUESTPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/RequestParam.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * RequestParam
                */
                class RequestParam : public AbstractModel
                {
                public:
                    RequestParam();
                    ~RequestParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Parameters in types of AnyOf</p>
                     * @return AnyOf <p>Parameters in types of AnyOf</p>
                     * 
                     */
                    std::vector<RequestParam> GetAnyOf() const;

                    /**
                     * 设置<p>Parameters in types of AnyOf</p>
                     * @param _anyOf <p>Parameters in types of AnyOf</p>
                     * 
                     */
                    void SetAnyOf(const std::vector<RequestParam>& _anyOf);

                    /**
                     * 判断参数 AnyOf 是否已赋值
                     * @return AnyOf 是否已赋值
                     * 
                     */
                    bool AnyOfHasBeenSet() const;

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
                     * 获取<p>Globally hidden and invisible (different from agent_hidden in the Agent scenario). true: globally hidden and invisible; false: visible</p>
                     * @return IsGlobalHidden <p>Globally hidden and invisible (different from agent_hidden in the Agent scenario). true: globally hidden and invisible; false: visible</p>
                     * 
                     */
                    bool GetIsGlobalHidden() const;

                    /**
                     * 设置<p>Globally hidden and invisible (different from agent_hidden in the Agent scenario). true: globally hidden and invisible; false: visible</p>
                     * @param _isGlobalHidden <p>Globally hidden and invisible (different from agent_hidden in the Agent scenario). true: globally hidden and invisible; false: visible</p>
                     * 
                     */
                    void SetIsGlobalHidden(const bool& _isGlobalHidden);

                    /**
                     * 判断参数 IsGlobalHidden 是否已赋值
                     * @return IsGlobalHidden 是否已赋值
                     * 
                     */
                    bool IsGlobalHiddenHasBeenSet() const;

                    /**
                     * 获取<p>Required or optional</p>
                     * @return IsRequired <p>Required or optional</p>
                     * 
                     */
                    bool GetIsRequired() const;

                    /**
                     * 设置<p>Required or optional</p>
                     * @param _isRequired <p>Required or optional</p>
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
                     * 获取<p>Parameter name</p>
                     * @return Name <p>Parameter name</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Parameter name</p>
                     * @param _name <p>Parameter name</p>
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
                     * 获取<p>Parameters in types of OneOf</p>
                     * @return OneOf <p>Parameters in types of OneOf</p>
                     * 
                     */
                    std::vector<RequestParam> GetOneOf() const;

                    /**
                     * 设置<p>Parameters in types of OneOf</p>
                     * @param _oneOf <p>Parameters in types of OneOf</p>
                     * 
                     */
                    void SetOneOf(const std::vector<RequestParam>& _oneOf);

                    /**
                     * 判断参数 OneOf 是否已赋值
                     * @return OneOf 是否已赋值
                     * 
                     */
                    bool OneOfHasBeenSet() const;

                    /**
                     * 获取<p>Sub-parameter, used only when ParamType is OBJECT or ARRAY&lt;&gt;</p>
                     * @return SubParams <p>Sub-parameter, used only when ParamType is OBJECT or ARRAY&lt;&gt;</p>
                     * 
                     */
                    std::vector<RequestParam> GetSubParams() const;

                    /**
                     * 设置<p>Sub-parameter, used only when ParamType is OBJECT or ARRAY&lt;&gt;</p>
                     * @param _subParams <p>Sub-parameter, used only when ParamType is OBJECT or ARRAY&lt;&gt;</p>
                     * 
                     */
                    void SetSubParams(const std::vector<RequestParam>& _subParams);

                    /**
                     * 判断参数 SubParams 是否已赋值
                     * @return SubParams 是否已赋值
                     * 
                     */
                    bool SubParamsHasBeenSet() const;

                    /**
                     * 获取<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>PARAM_TYPE_STRING</td><td>0</td><td>String</td></tr><tr><td>PARAM_TYPE_INT</td><td>1</td><td>Integer</td></tr><tr><td>PARAM_TYPE_FLOAT</td><td>2</td><td>Floating-point number</td></tr><tr><td>PARAM_TYPE_BOOL</td><td>3</td><td>Boolean value</td></tr><tr><td>PARAM_TYPE_OBJECT</td><td>4</td><td>Object</td></tr><tr><td>PARAM_TYPE_ARRAY_STRING</td><td>5</td><td>Array of strings</td></tr><tr><td>PARAM_TYPE_ARRAY_INT</td><td>6</td><td>Array of integers</td></tr><tr><td>PARAM_TYPE_ARRAY_FLOAT</td><td>7</td><td>Array of floating-point numbers</td></tr><tr><td>PARAM_TYPE_ARRAY_BOOL</td><td>8</td><td>Array of boolean values</td></tr><tr><td>PARAM_TYPE_ARRAY_OBJECT</td><td>9</td><td>Object array</td></tr><tr><td>PARAM_TYPE_ARRAY_ARRAY</td><td>20</td><td>Nested array</td></tr><tr><td>PARAM_TYPE_NULL</td><td>99</td><td>Null</td></tr><tr><td>PARAM_TYPE_UNSPECIFIED</td><td>100</td><td>Unspecified type, for OneOf and AnyOf scenarios</td></tr></tbody></table>
                     * @return Type <table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>PARAM_TYPE_STRING</td><td>0</td><td>String</td></tr><tr><td>PARAM_TYPE_INT</td><td>1</td><td>Integer</td></tr><tr><td>PARAM_TYPE_FLOAT</td><td>2</td><td>Floating-point number</td></tr><tr><td>PARAM_TYPE_BOOL</td><td>3</td><td>Boolean value</td></tr><tr><td>PARAM_TYPE_OBJECT</td><td>4</td><td>Object</td></tr><tr><td>PARAM_TYPE_ARRAY_STRING</td><td>5</td><td>Array of strings</td></tr><tr><td>PARAM_TYPE_ARRAY_INT</td><td>6</td><td>Array of integers</td></tr><tr><td>PARAM_TYPE_ARRAY_FLOAT</td><td>7</td><td>Array of floating-point numbers</td></tr><tr><td>PARAM_TYPE_ARRAY_BOOL</td><td>8</td><td>Array of boolean values</td></tr><tr><td>PARAM_TYPE_ARRAY_OBJECT</td><td>9</td><td>Object array</td></tr><tr><td>PARAM_TYPE_ARRAY_ARRAY</td><td>20</td><td>Nested array</td></tr><tr><td>PARAM_TYPE_NULL</td><td>99</td><td>Null</td></tr><tr><td>PARAM_TYPE_UNSPECIFIED</td><td>100</td><td>Unspecified type, for OneOf and AnyOf scenarios</td></tr></tbody></table>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>PARAM_TYPE_STRING</td><td>0</td><td>String</td></tr><tr><td>PARAM_TYPE_INT</td><td>1</td><td>Integer</td></tr><tr><td>PARAM_TYPE_FLOAT</td><td>2</td><td>Floating-point number</td></tr><tr><td>PARAM_TYPE_BOOL</td><td>3</td><td>Boolean value</td></tr><tr><td>PARAM_TYPE_OBJECT</td><td>4</td><td>Object</td></tr><tr><td>PARAM_TYPE_ARRAY_STRING</td><td>5</td><td>Array of strings</td></tr><tr><td>PARAM_TYPE_ARRAY_INT</td><td>6</td><td>Array of integers</td></tr><tr><td>PARAM_TYPE_ARRAY_FLOAT</td><td>7</td><td>Array of floating-point numbers</td></tr><tr><td>PARAM_TYPE_ARRAY_BOOL</td><td>8</td><td>Array of boolean values</td></tr><tr><td>PARAM_TYPE_ARRAY_OBJECT</td><td>9</td><td>Object array</td></tr><tr><td>PARAM_TYPE_ARRAY_ARRAY</td><td>20</td><td>Nested array</td></tr><tr><td>PARAM_TYPE_NULL</td><td>99</td><td>Null</td></tr><tr><td>PARAM_TYPE_UNSPECIFIED</td><td>100</td><td>Unspecified type, for OneOf and AnyOf scenarios</td></tr></tbody></table>
                     * @param _type <table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>PARAM_TYPE_STRING</td><td>0</td><td>String</td></tr><tr><td>PARAM_TYPE_INT</td><td>1</td><td>Integer</td></tr><tr><td>PARAM_TYPE_FLOAT</td><td>2</td><td>Floating-point number</td></tr><tr><td>PARAM_TYPE_BOOL</td><td>3</td><td>Boolean value</td></tr><tr><td>PARAM_TYPE_OBJECT</td><td>4</td><td>Object</td></tr><tr><td>PARAM_TYPE_ARRAY_STRING</td><td>5</td><td>Array of strings</td></tr><tr><td>PARAM_TYPE_ARRAY_INT</td><td>6</td><td>Array of integers</td></tr><tr><td>PARAM_TYPE_ARRAY_FLOAT</td><td>7</td><td>Array of floating-point numbers</td></tr><tr><td>PARAM_TYPE_ARRAY_BOOL</td><td>8</td><td>Array of boolean values</td></tr><tr><td>PARAM_TYPE_ARRAY_OBJECT</td><td>9</td><td>Object array</td></tr><tr><td>PARAM_TYPE_ARRAY_ARRAY</td><td>20</td><td>Nested array</td></tr><tr><td>PARAM_TYPE_NULL</td><td>99</td><td>Null</td></tr><tr><td>PARAM_TYPE_UNSPECIFIED</td><td>100</td><td>Unspecified type, for OneOf and AnyOf scenarios</td></tr></tbody></table>
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * <p>Parameters in types of AnyOf</p>
                     */
                    std::vector<RequestParam> m_anyOf;
                    bool m_anyOfHasBeenSet;

                    /**
                     * <p>Default value.</p>
                     */
                    std::string m_defaultValue;
                    bool m_defaultValueHasBeenSet;

                    /**
                     * <p>Parameter description</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Globally hidden and invisible (different from agent_hidden in the Agent scenario). true: globally hidden and invisible; false: visible</p>
                     */
                    bool m_isGlobalHidden;
                    bool m_isGlobalHiddenHasBeenSet;

                    /**
                     * <p>Required or optional</p>
                     */
                    bool m_isRequired;
                    bool m_isRequiredHasBeenSet;

                    /**
                     * <p>Parameter name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Parameters in types of OneOf</p>
                     */
                    std::vector<RequestParam> m_oneOf;
                    bool m_oneOfHasBeenSet;

                    /**
                     * <p>Sub-parameter, used only when ParamType is OBJECT or ARRAY&lt;&gt;</p>
                     */
                    std::vector<RequestParam> m_subParams;
                    bool m_subParamsHasBeenSet;

                    /**
                     * <table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>PARAM_TYPE_STRING</td><td>0</td><td>String</td></tr><tr><td>PARAM_TYPE_INT</td><td>1</td><td>Integer</td></tr><tr><td>PARAM_TYPE_FLOAT</td><td>2</td><td>Floating-point number</td></tr><tr><td>PARAM_TYPE_BOOL</td><td>3</td><td>Boolean value</td></tr><tr><td>PARAM_TYPE_OBJECT</td><td>4</td><td>Object</td></tr><tr><td>PARAM_TYPE_ARRAY_STRING</td><td>5</td><td>Array of strings</td></tr><tr><td>PARAM_TYPE_ARRAY_INT</td><td>6</td><td>Array of integers</td></tr><tr><td>PARAM_TYPE_ARRAY_FLOAT</td><td>7</td><td>Array of floating-point numbers</td></tr><tr><td>PARAM_TYPE_ARRAY_BOOL</td><td>8</td><td>Array of boolean values</td></tr><tr><td>PARAM_TYPE_ARRAY_OBJECT</td><td>9</td><td>Object array</td></tr><tr><td>PARAM_TYPE_ARRAY_ARRAY</td><td>20</td><td>Nested array</td></tr><tr><td>PARAM_TYPE_NULL</td><td>99</td><td>Null</td></tr><tr><td>PARAM_TYPE_UNSPECIFIED</td><td>100</td><td>Unspecified type, for OneOf and AnyOf scenarios</td></tr></tbody></table>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_REQUESTPARAM_H_
