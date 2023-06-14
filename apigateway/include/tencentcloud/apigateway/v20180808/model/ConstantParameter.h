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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CONSTANTPARAMETER_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CONSTANTPARAMETER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * Constant parameter
                */
                class ConstantParameter : public AbstractModel
                {
                public:
                    ConstantParameter();
                    ~ConstantParameter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Constant parameter name, which is used only if `ServiceType` is `HTTP`.
                     * @return Name Constant parameter name, which is used only if `ServiceType` is `HTTP`.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Constant parameter name, which is used only if `ServiceType` is `HTTP`.
                     * @param _name Constant parameter name, which is used only if `ServiceType` is `HTTP`.
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
                     * 获取Constant parameter description, which is used only if `ServiceType` is `HTTP`.
                     * @return Desc Constant parameter description, which is used only if `ServiceType` is `HTTP`.
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置Constant parameter description, which is used only if `ServiceType` is `HTTP`.
                     * @param _desc Constant parameter description, which is used only if `ServiceType` is `HTTP`.
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取Constant parameter position, which is used only if `ServiceType` is `HTTP`.
                     * @return Position Constant parameter position, which is used only if `ServiceType` is `HTTP`.
                     * 
                     */
                    std::string GetPosition() const;

                    /**
                     * 设置Constant parameter position, which is used only if `ServiceType` is `HTTP`.
                     * @param _position Constant parameter position, which is used only if `ServiceType` is `HTTP`.
                     * 
                     */
                    void SetPosition(const std::string& _position);

                    /**
                     * 判断参数 Position 是否已赋值
                     * @return Position 是否已赋值
                     * 
                     */
                    bool PositionHasBeenSet() const;

                    /**
                     * 获取Default value of constant parameter, which is used only if `ServiceType` is `HTTP`.
                     * @return DefaultValue Default value of constant parameter, which is used only if `ServiceType` is `HTTP`.
                     * 
                     */
                    std::string GetDefaultValue() const;

                    /**
                     * 设置Default value of constant parameter, which is used only if `ServiceType` is `HTTP`.
                     * @param _defaultValue Default value of constant parameter, which is used only if `ServiceType` is `HTTP`.
                     * 
                     */
                    void SetDefaultValue(const std::string& _defaultValue);

                    /**
                     * 判断参数 DefaultValue 是否已赋值
                     * @return DefaultValue 是否已赋值
                     * 
                     */
                    bool DefaultValueHasBeenSet() const;

                private:

                    /**
                     * Constant parameter name, which is used only if `ServiceType` is `HTTP`.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Constant parameter description, which is used only if `ServiceType` is `HTTP`.
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * Constant parameter position, which is used only if `ServiceType` is `HTTP`.
                     */
                    std::string m_position;
                    bool m_positionHasBeenSet;

                    /**
                     * Default value of constant parameter, which is used only if `ServiceType` is `HTTP`.
                     */
                    std::string m_defaultValue;
                    bool m_defaultValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CONSTANTPARAMETER_H_
