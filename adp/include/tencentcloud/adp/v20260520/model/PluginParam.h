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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_PLUGINPARAM_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_PLUGINPARAM_H_

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
                * Parameter information of the MCP plug-in.
                */
                class PluginParam : public AbstractModel
                {
                public:
                    PluginParam();
                    ~PluginParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to hide parameter configuration
                     * @return IsGlobalHidden Whether to hide parameter configuration
                     * 
                     */
                    bool GetIsGlobalHidden() const;

                    /**
                     * 设置Whether to hide parameter configuration
                     * @param _isGlobalHidden Whether to hide parameter configuration
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
                     * 获取Whether the parameter is required
                     * @return IsRequired Whether the parameter is required
                     * 
                     */
                    bool GetIsRequired() const;

                    /**
                     * 设置Whether the parameter is required
                     * @param _isRequired Whether the parameter is required
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
                     * 获取Parameter value.
                     * @return Value Parameter value.
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Parameter value.
                     * @param _value Parameter value.
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * Whether to hide parameter configuration
                     */
                    bool m_isGlobalHidden;
                    bool m_isGlobalHiddenHasBeenSet;

                    /**
                     * Whether the parameter is required
                     */
                    bool m_isRequired;
                    bool m_isRequiredHasBeenSet;

                    /**
                     * Parameter name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Parameter value.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_PLUGINPARAM_H_
