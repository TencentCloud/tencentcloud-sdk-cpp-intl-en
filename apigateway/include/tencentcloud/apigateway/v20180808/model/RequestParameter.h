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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_REQUESTPARAMETER_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_REQUESTPARAMETER_H_

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
                class RequestParameter : public AbstractModel
                {
                public:
                    RequestParameter();
                    ~RequestParameter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Request parameter name
                     * @return Name Request parameter name
                     */
                    std::string GetName() const;

                    /**
                     * 设置Request parameter name
                     * @param Name Request parameter name
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Description
                     * @return Desc Description
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置Description
                     * @param Desc Description
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取Parameter position
                     * @return Position Parameter position
                     */
                    std::string GetPosition() const;

                    /**
                     * 设置Parameter position
                     * @param Position Parameter position
                     */
                    void SetPosition(const std::string& _position);

                    /**
                     * 判断参数 Position 是否已赋值
                     * @return Position 是否已赋值
                     */
                    bool PositionHasBeenSet() const;

                    /**
                     * 获取Parameter type
                     * @return Type Parameter type
                     */
                    std::string GetType() const;

                    /**
                     * 设置Parameter type
                     * @param Type Parameter type
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Default value
                     * @return DefaultValue Default value
                     */
                    std::string GetDefaultValue() const;

                    /**
                     * 设置Default value
                     * @param DefaultValue Default value
                     */
                    void SetDefaultValue(const std::string& _defaultValue);

                    /**
                     * 判断参数 DefaultValue 是否已赋值
                     * @return DefaultValue 是否已赋值
                     */
                    bool DefaultValueHasBeenSet() const;

                    /**
                     * 获取Whether it is required
                     * @return Required Whether it is required
                     */
                    bool GetRequired() const;

                    /**
                     * 设置Whether it is required
                     * @param Required Whether it is required
                     */
                    void SetRequired(const bool& _required);

                    /**
                     * 判断参数 Required 是否已赋值
                     * @return Required 是否已赋值
                     */
                    bool RequiredHasBeenSet() const;

                private:

                    /**
                     * Request parameter name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Description
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * Parameter position
                     */
                    std::string m_position;
                    bool m_positionHasBeenSet;

                    /**
                     * Parameter type
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Default value
                     */
                    std::string m_defaultValue;
                    bool m_defaultValueHasBeenSet;

                    /**
                     * Whether it is required
                     */
                    bool m_required;
                    bool m_requiredHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_REQUESTPARAMETER_H_
