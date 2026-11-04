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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_AGENTTOOLINPUTPARAMETER_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_AGENTTOOLINPUTPARAMETER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AgentToolInputParameter.h>
#include <tencentcloud/adp/v20260520/model/AgentInput.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Agent tool input parameter definition
                */
                class AgentToolInputParameter : public AbstractModel
                {
                public:
                    AgentToolInputParameter();
                    ~AgentToolInputParameter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Tool name</p>
                     * @return Name <p>Tool name</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Tool name</p>
                     * @param _name <p>Tool name</p>
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
                     * 获取<p>Tool description</p>
                     * @return Description <p>Tool description</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>Tool description</p>
                     * @param _description <p>Tool description</p>
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
                     * 获取<p>Tool parameter type</p><p>Enumeration values:</p><ul><li>0: STRING</li><li>1: INT</li><li>2: FLOAT</li><li>3: BOOL</li><li>4: OBJECT</li><li>5: ARRAY_STRING</li><li>6: ARRAY_INT</li><li>7: ARRAY_FLOAT</li><li>8: ARRAY_BOOL</li><li>9: ARRAY_OBJECT</li><li>20: ARRAY_ARRAY</li><li>99: NULL</li></ul>
                     * @return Type <p>Tool parameter type</p><p>Enumeration values:</p><ul><li>0: STRING</li><li>1: INT</li><li>2: FLOAT</li><li>3: BOOL</li><li>4: OBJECT</li><li>5: ARRAY_STRING</li><li>6: ARRAY_INT</li><li>7: ARRAY_FLOAT</li><li>8: ARRAY_BOOL</li><li>9: ARRAY_OBJECT</li><li>20: ARRAY_ARRAY</li><li>99: NULL</li></ul>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>Tool parameter type</p><p>Enumeration values:</p><ul><li>0: STRING</li><li>1: INT</li><li>2: FLOAT</li><li>3: BOOL</li><li>4: OBJECT</li><li>5: ARRAY_STRING</li><li>6: ARRAY_INT</li><li>7: ARRAY_FLOAT</li><li>8: ARRAY_BOOL</li><li>9: ARRAY_OBJECT</li><li>20: ARRAY_ARRAY</li><li>99: NULL</li></ul>
                     * @param _type <p>Tool parameter type</p><p>Enumeration values:</p><ul><li>0: STRING</li><li>1: INT</li><li>2: FLOAT</li><li>3: BOOL</li><li>4: OBJECT</li><li>5: ARRAY_STRING</li><li>6: ARRAY_INT</li><li>7: ARRAY_FLOAT</li><li>8: ARRAY_BOOL</li><li>9: ARRAY_OBJECT</li><li>20: ARRAY_ARRAY</li><li>99: NULL</li></ul>
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
                     * 获取<p>Required or not</p>
                     * @return IsRequired <p>Required or not</p>
                     * 
                     */
                    bool GetIsRequired() const;

                    /**
                     * 设置<p>Required or not</p>
                     * @param _isRequired <p>Required or not</p>
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
                     * 获取<p>Sub-parameter, used only when the data type is OBJECT or ARRAY&lt;&gt;</p>
                     * @return SubParameterList <p>Sub-parameter, used only when the data type is OBJECT or ARRAY&lt;&gt;</p>
                     * 
                     */
                    std::vector<AgentToolInputParameter> GetSubParameterList() const;

                    /**
                     * 设置<p>Sub-parameter, used only when the data type is OBJECT or ARRAY&lt;&gt;</p>
                     * @param _subParameterList <p>Sub-parameter, used only when the data type is OBJECT or ARRAY&lt;&gt;</p>
                     * 
                     */
                    void SetSubParameterList(const std::vector<AgentToolInputParameter>& _subParameterList);

                    /**
                     * 判断参数 SubParameterList 是否已赋值
                     * @return SubParameterList 是否已赋值
                     * 
                     */
                    bool SubParameterListHasBeenSet() const;

                    /**
                     * 获取<p>Whether to hide from the model in mode</p>
                     * @return IsHidden <p>Whether to hide from the model in mode</p>
                     * 
                     */
                    bool GetIsHidden() const;

                    /**
                     * 设置<p>Whether to hide from the model in mode</p>
                     * @param _isHidden <p>Whether to hide from the model in mode</p>
                     * 
                     */
                    void SetIsHidden(const bool& _isHidden);

                    /**
                     * 判断参数 IsHidden 是否已赋值
                     * @return IsHidden 是否已赋值
                     * 
                     */
                    bool IsHiddenHasBeenSet() const;

                    /**
                     * 获取<p>Parameters in types of OneOf</p>
                     * @return OneOfList <p>Parameters in types of OneOf</p>
                     * 
                     */
                    std::vector<AgentToolInputParameter> GetOneOfList() const;

                    /**
                     * 设置<p>Parameters in types of OneOf</p>
                     * @param _oneOfList <p>Parameters in types of OneOf</p>
                     * 
                     */
                    void SetOneOfList(const std::vector<AgentToolInputParameter>& _oneOfList);

                    /**
                     * 判断参数 OneOfList 是否已赋值
                     * @return OneOfList 是否已赋值
                     * 
                     */
                    bool OneOfListHasBeenSet() const;

                    /**
                     * 获取<p>Parameters in types of AnyOf</p>
                     * @return AnyOfList <p>Parameters in types of AnyOf</p>
                     * 
                     */
                    std::vector<AgentToolInputParameter> GetAnyOfList() const;

                    /**
                     * 设置<p>Parameters in types of AnyOf</p>
                     * @param _anyOfList <p>Parameters in types of AnyOf</p>
                     * 
                     */
                    void SetAnyOfList(const std::vector<AgentToolInputParameter>& _anyOfList);

                    /**
                     * 判断参数 AnyOfList 是否已赋值
                     * @return AnyOfList 是否已赋值
                     * 
                     */
                    bool AnyOfListHasBeenSet() const;

                    /**
                     * 获取<p>Source of parameter value</p>
                     * @return Input <p>Source of parameter value</p>
                     * 
                     */
                    AgentInput GetInput() const;

                    /**
                     * 设置<p>Source of parameter value</p>
                     * @param _input <p>Source of parameter value</p>
                     * 
                     */
                    void SetInput(const AgentInput& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                private:

                    /**
                     * <p>Tool name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Tool description</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Tool parameter type</p><p>Enumeration values:</p><ul><li>0: STRING</li><li>1: INT</li><li>2: FLOAT</li><li>3: BOOL</li><li>4: OBJECT</li><li>5: ARRAY_STRING</li><li>6: ARRAY_INT</li><li>7: ARRAY_FLOAT</li><li>8: ARRAY_BOOL</li><li>9: ARRAY_OBJECT</li><li>20: ARRAY_ARRAY</li><li>99: NULL</li></ul>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Required or not</p>
                     */
                    bool m_isRequired;
                    bool m_isRequiredHasBeenSet;

                    /**
                     * <p>Sub-parameter, used only when the data type is OBJECT or ARRAY&lt;&gt;</p>
                     */
                    std::vector<AgentToolInputParameter> m_subParameterList;
                    bool m_subParameterListHasBeenSet;

                    /**
                     * <p>Whether to hide from the model in mode</p>
                     */
                    bool m_isHidden;
                    bool m_isHiddenHasBeenSet;

                    /**
                     * <p>Parameters in types of OneOf</p>
                     */
                    std::vector<AgentToolInputParameter> m_oneOfList;
                    bool m_oneOfListHasBeenSet;

                    /**
                     * <p>Parameters in types of AnyOf</p>
                     */
                    std::vector<AgentToolInputParameter> m_anyOfList;
                    bool m_anyOfListHasBeenSet;

                    /**
                     * <p>Source of parameter value</p>
                     */
                    AgentInput m_input;
                    bool m_inputHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_AGENTTOOLINPUTPARAMETER_H_
