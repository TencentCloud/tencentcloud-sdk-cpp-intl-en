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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_REQPARAMETER_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_REQPARAMETER_H_

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
                * Request parameter
                */
                class ReqParameter : public AbstractModel
                {
                public:
                    ReqParameter();
                    ~ReqParameter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取API frontend parameter name.
                     * @return Name API frontend parameter name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置API frontend parameter name.
                     * @param _name API frontend parameter name.
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
                     * 获取Position of the API frontend parameter, such as the header. Supported values: `header`, `query`, and `path`.
                     * @return Position Position of the API frontend parameter, such as the header. Supported values: `header`, `query`, and `path`.
                     * 
                     */
                    std::string GetPosition() const;

                    /**
                     * 设置Position of the API frontend parameter, such as the header. Supported values: `header`, `query`, and `path`.
                     * @param _position Position of the API frontend parameter, such as the header. Supported values: `header`, `query`, and `path`.
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
                     * 获取API frontend parameter type, such as `String` and `int`.
                     * @return Type API frontend parameter type, such as `String` and `int`.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置API frontend parameter type, such as `String` and `int`.
                     * @param _type API frontend parameter type, such as `String` and `int`.
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
                     * 获取Default value of API frontend parameter.
                     * @return DefaultValue Default value of API frontend parameter.
                     * 
                     */
                    std::string GetDefaultValue() const;

                    /**
                     * 设置Default value of API frontend parameter.
                     * @param _defaultValue Default value of API frontend parameter.
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
                     * 获取Whether the API frontend parameter is required. True: yes; False: no.
                     * @return Required Whether the API frontend parameter is required. True: yes; False: no.
                     * 
                     */
                    bool GetRequired() const;

                    /**
                     * 设置Whether the API frontend parameter is required. True: yes; False: no.
                     * @param _required Whether the API frontend parameter is required. True: yes; False: no.
                     * 
                     */
                    void SetRequired(const bool& _required);

                    /**
                     * 判断参数 Required 是否已赋值
                     * @return Required 是否已赋值
                     * 
                     */
                    bool RequiredHasBeenSet() const;

                    /**
                     * 获取API frontend parameter remarks.
                     * @return Desc API frontend parameter remarks.
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置API frontend parameter remarks.
                     * @param _desc API frontend parameter remarks.
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                private:

                    /**
                     * API frontend parameter name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Position of the API frontend parameter, such as the header. Supported values: `header`, `query`, and `path`.
                     */
                    std::string m_position;
                    bool m_positionHasBeenSet;

                    /**
                     * API frontend parameter type, such as `String` and `int`.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Default value of API frontend parameter.
                     */
                    std::string m_defaultValue;
                    bool m_defaultValueHasBeenSet;

                    /**
                     * Whether the API frontend parameter is required. True: yes; False: no.
                     */
                    bool m_required;
                    bool m_requiredHasBeenSet;

                    /**
                     * API frontend parameter remarks.
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_REQPARAMETER_H_
