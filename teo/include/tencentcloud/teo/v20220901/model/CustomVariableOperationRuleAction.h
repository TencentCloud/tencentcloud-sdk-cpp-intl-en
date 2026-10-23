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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMVARIABLEOPERATIONRULEACTION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMVARIABLEOPERATIONRULEACTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/SetParameters.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Custom Variable rule operation.
                */
                class CustomVariableOperationRuleAction : public AbstractModel
                {
                public:
                    CustomVariableOperationRuleAction();
                    ~CustomVariableOperationRuleAction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Operation name. The name should correspond to the parameter structure. For example, if Name=Set, SetParameters is required. Currently only support filling in Set.</p><li>Set: custom variable settings;</li>
                     * @return Name <p>Operation name. The name should correspond to the parameter structure. For example, if Name=Set, SetParameters is required. Currently only support filling in Set.</p><li>Set: custom variable settings;</li>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Operation name. The name should correspond to the parameter structure. For example, if Name=Set, SetParameters is required. Currently only support filling in Set.</p><li>Set: custom variable settings;</li>
                     * @param _name <p>Operation name. The name should correspond to the parameter structure. For example, if Name=Set, SetParameters is required. Currently only support filling in Set.</p><li>Set: custom variable settings;</li>
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
                     * 获取<p>Custom Variable parameter settings. If there are multiple operations in this parameter, they are executed in sequence according to the array order. When the value of Name is Set, this parameter is required.</p>
                     * @return SetParameters <p>Custom Variable parameter settings. If there are multiple operations in this parameter, they are executed in sequence according to the array order. When the value of Name is Set, this parameter is required.</p>
                     * 
                     */
                    SetParameters GetSetParameters() const;

                    /**
                     * 设置<p>Custom Variable parameter settings. If there are multiple operations in this parameter, they are executed in sequence according to the array order. When the value of Name is Set, this parameter is required.</p>
                     * @param _setParameters <p>Custom Variable parameter settings. If there are multiple operations in this parameter, they are executed in sequence according to the array order. When the value of Name is Set, this parameter is required.</p>
                     * 
                     */
                    void SetSetParameters(const SetParameters& _setParameters);

                    /**
                     * 判断参数 SetParameters 是否已赋值
                     * @return SetParameters 是否已赋值
                     * 
                     */
                    bool SetParametersHasBeenSet() const;

                private:

                    /**
                     * <p>Operation name. The name should correspond to the parameter structure. For example, if Name=Set, SetParameters is required. Currently only support filling in Set.</p><li>Set: custom variable settings;</li>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Custom Variable parameter settings. If there are multiple operations in this parameter, they are executed in sequence according to the array order. When the value of Name is Set, this parameter is required.</p>
                     */
                    SetParameters m_setParameters;
                    bool m_setParametersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMVARIABLEOPERATIONRULEACTION_H_
