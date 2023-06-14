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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_ORIGINAUTHENTICATION_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_ORIGINAUTHENTICATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/OriginAuthenticationTypeA.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * Origin-pull authentication advanced configuration
                */
                class OriginAuthentication : public AbstractModel
                {
                public:
                    OriginAuthentication();
                    ~OriginAuthentication() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Authentication switch, which can be on or off.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Switch Authentication switch, which can be on or off.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Authentication switch, which can be on or off.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _switch Authentication switch, which can be on or off.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取Authentication type configuration A
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return TypeA Authentication type configuration A
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    OriginAuthenticationTypeA GetTypeA() const;

                    /**
                     * 设置Authentication type configuration A
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _typeA Authentication type configuration A
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTypeA(const OriginAuthenticationTypeA& _typeA);

                    /**
                     * 判断参数 TypeA 是否已赋值
                     * @return TypeA 是否已赋值
                     * 
                     */
                    bool TypeAHasBeenSet() const;

                private:

                    /**
                     * Authentication switch, which can be on or off.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Authentication type configuration A
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    OriginAuthenticationTypeA m_typeA;
                    bool m_typeAHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_ORIGINAUTHENTICATION_H_
