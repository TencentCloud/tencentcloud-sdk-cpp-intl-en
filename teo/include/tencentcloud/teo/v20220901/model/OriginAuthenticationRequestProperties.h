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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINAUTHENTICATIONREQUESTPROPERTIES_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINAUTHENTICATIONREQUESTPROPERTIES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Specifies the authentication request attribute for origin pull.
                */
                class OriginAuthenticationRequestProperties : public AbstractModel
                {
                public:
                    OriginAuthenticationRequestProperties();
                    ~OriginAuthenticationRequestProperties() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies the origin-pull authentication parameter type. valid values: <li>QueryString: indicates setting the origin-pull authentication parameter type to query string.</li><li>Header: indicates setting the origin-pull authentication parameter type to request Header.</li>.
                     * @return Type Specifies the origin-pull authentication parameter type. valid values: <li>QueryString: indicates setting the origin-pull authentication parameter type to query string.</li><li>Header: indicates setting the origin-pull authentication parameter type to request Header.</li>.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Specifies the origin-pull authentication parameter type. valid values: <li>QueryString: indicates setting the origin-pull authentication parameter type to query string.</li><li>Header: indicates setting the origin-pull authentication parameter type to request Header.</li>.
                     * @param _type Specifies the origin-pull authentication parameter type. valid values: <li>QueryString: indicates setting the origin-pull authentication parameter type to query string.</li><li>Header: indicates setting the origin-pull authentication parameter type to request Header.</li>.
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
                     * 获取Specifies the parameter name for the origin-pull authentication type.
                     * @return Name Specifies the parameter name for the origin-pull authentication type.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Specifies the parameter name for the origin-pull authentication type.
                     * @param _name Specifies the parameter name for the origin-pull authentication type.
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
                     * 获取Specifies the parameter value for the origin-pull authentication type.
                     * @return Value Specifies the parameter value for the origin-pull authentication type.
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Specifies the parameter value for the origin-pull authentication type.
                     * @param _value Specifies the parameter value for the origin-pull authentication type.
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
                     * Specifies the origin-pull authentication parameter type. valid values: <li>QueryString: indicates setting the origin-pull authentication parameter type to query string.</li><li>Header: indicates setting the origin-pull authentication parameter type to request Header.</li>.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Specifies the parameter name for the origin-pull authentication type.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Specifies the parameter value for the origin-pull authentication type.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINAUTHENTICATIONREQUESTPROPERTIES_H_
