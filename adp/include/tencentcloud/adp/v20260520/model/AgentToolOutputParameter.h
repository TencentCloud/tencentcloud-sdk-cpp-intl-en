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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_AGENTTOOLOUTPUTPARAMETER_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_AGENTTOOLOUTPUTPARAMETER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AgentToolOutputParameter.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Agent tool output parameter
                */
                class AgentToolOutputParameter : public AbstractModel
                {
                public:
                    AgentToolOutputParameter();
                    ~AgentToolOutputParameter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取<p>Parameter type</p><p>Enumeration values:</p><ul><li>0: STRING</li><li>1: INT</li><li>2: FLOAT</li><li>3: BOOL</li><li>4: OBJECT</li><li>5: ARRAY_STRING</li><li>6: ARRAY_INT</li><li>7: ARRAY_FLOAT</li><li>8: ARRAY_BOOL</li><li>9: ARRAY_OBJECT</li><li>20: ARRAY_ARRAY</li><li>99: NULL</li></ul>
                     * @return Type <p>Parameter type</p><p>Enumeration values:</p><ul><li>0: STRING</li><li>1: INT</li><li>2: FLOAT</li><li>3: BOOL</li><li>4: OBJECT</li><li>5: ARRAY_STRING</li><li>6: ARRAY_INT</li><li>7: ARRAY_FLOAT</li><li>8: ARRAY_BOOL</li><li>9: ARRAY_OBJECT</li><li>20: ARRAY_ARRAY</li><li>99: NULL</li></ul>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>Parameter type</p><p>Enumeration values:</p><ul><li>0: STRING</li><li>1: INT</li><li>2: FLOAT</li><li>3: BOOL</li><li>4: OBJECT</li><li>5: ARRAY_STRING</li><li>6: ARRAY_INT</li><li>7: ARRAY_FLOAT</li><li>8: ARRAY_BOOL</li><li>9: ARRAY_OBJECT</li><li>20: ARRAY_ARRAY</li><li>99: NULL</li></ul>
                     * @param _type <p>Parameter type</p><p>Enumeration values:</p><ul><li>0: STRING</li><li>1: INT</li><li>2: FLOAT</li><li>3: BOOL</li><li>4: OBJECT</li><li>5: ARRAY_STRING</li><li>6: ARRAY_INT</li><li>7: ARRAY_FLOAT</li><li>8: ARRAY_BOOL</li><li>9: ARRAY_OBJECT</li><li>20: ARRAY_ARRAY</li><li>99: NULL</li></ul>
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
                     * 获取<p>Sub-parameter, used only when the data type is OBJECT or ARRAY_OBJECT</p>
                     * @return SubParameterList <p>Sub-parameter, used only when the data type is OBJECT or ARRAY_OBJECT</p>
                     * 
                     */
                    std::vector<AgentToolOutputParameter> GetSubParameterList() const;

                    /**
                     * 设置<p>Sub-parameter, used only when the data type is OBJECT or ARRAY_OBJECT</p>
                     * @param _subParameterList <p>Sub-parameter, used only when the data type is OBJECT or ARRAY_OBJECT</p>
                     * 
                     */
                    void SetSubParameterList(const std::vector<AgentToolOutputParameter>& _subParameterList);

                    /**
                     * 判断参数 SubParameterList 是否已赋值
                     * @return SubParameterList 是否已赋值
                     * 
                     */
                    bool SubParameterListHasBeenSet() const;

                    /**
                     * 获取<p>Parsing method</p>
                     * @return RenderMode <p>Parsing method</p>
                     * 
                     */
                    int64_t GetRenderMode() const;

                    /**
                     * 设置<p>Parsing method</p>
                     * @param _renderMode <p>Parsing method</p>
                     * 
                     */
                    void SetRenderMode(const int64_t& _renderMode);

                    /**
                     * 判断参数 RenderMode 是否已赋值
                     * @return RenderMode 是否已赋值
                     * 
                     */
                    bool RenderModeHasBeenSet() const;

                private:

                    /**
                     * <p>Parameter name</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Variable description</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Parameter type</p><p>Enumeration values:</p><ul><li>0: STRING</li><li>1: INT</li><li>2: FLOAT</li><li>3: BOOL</li><li>4: OBJECT</li><li>5: ARRAY_STRING</li><li>6: ARRAY_INT</li><li>7: ARRAY_FLOAT</li><li>8: ARRAY_BOOL</li><li>9: ARRAY_OBJECT</li><li>20: ARRAY_ARRAY</li><li>99: NULL</li></ul>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Sub-parameter, used only when the data type is OBJECT or ARRAY_OBJECT</p>
                     */
                    std::vector<AgentToolOutputParameter> m_subParameterList;
                    bool m_subParameterListHasBeenSet;

                    /**
                     * <p>Parsing method</p>
                     */
                    int64_t m_renderMode;
                    bool m_renderModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_AGENTTOOLOUTPUTPARAMETER_H_
