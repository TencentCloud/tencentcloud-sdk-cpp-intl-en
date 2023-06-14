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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_AUTHENTICATION_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_AUTHENTICATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/AuthenticationTypeA.h>
#include <tencentcloud/cdn/v20180606/model/AuthenticationTypeB.h>
#include <tencentcloud/cdn/v20180606/model/AuthenticationTypeC.h>
#include <tencentcloud/cdn/v20180606/model/AuthenticationTypeD.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * Timestamp hotlink protection configuration
                */
                class Authentication : public AbstractModel
                {
                public:
                    Authentication();
                    ~Authentication() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Hotlink protection configuration switch
`on`: Enable
`off`: Disable
When this is enabled, one mode needs to be configured. Other modes need to be set to null.
                     * @return Switch Hotlink protection configuration switch
`on`: Enable
`off`: Disable
When this is enabled, one mode needs to be configured. Other modes need to be set to null.
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Hotlink protection configuration switch
`on`: Enable
`off`: Disable
When this is enabled, one mode needs to be configured. Other modes need to be set to null.
                     * @param _switch Hotlink protection configuration switch
`on`: Enable
`off`: Disable
When this is enabled, one mode needs to be configured. Other modes need to be set to null.
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
                     * 获取Timestamp hotlink protection mode A configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return TypeA Timestamp hotlink protection mode A configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    AuthenticationTypeA GetTypeA() const;

                    /**
                     * 设置Timestamp hotlink protection mode A configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _typeA Timestamp hotlink protection mode A configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTypeA(const AuthenticationTypeA& _typeA);

                    /**
                     * 判断参数 TypeA 是否已赋值
                     * @return TypeA 是否已赋值
                     * 
                     */
                    bool TypeAHasBeenSet() const;

                    /**
                     * 获取Timestamp hotlink protection mode B configuration (mode B is being upgraded and is currently not supported)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return TypeB Timestamp hotlink protection mode B configuration (mode B is being upgraded and is currently not supported)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    AuthenticationTypeB GetTypeB() const;

                    /**
                     * 设置Timestamp hotlink protection mode B configuration (mode B is being upgraded and is currently not supported)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _typeB Timestamp hotlink protection mode B configuration (mode B is being upgraded and is currently not supported)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTypeB(const AuthenticationTypeB& _typeB);

                    /**
                     * 判断参数 TypeB 是否已赋值
                     * @return TypeB 是否已赋值
                     * 
                     */
                    bool TypeBHasBeenSet() const;

                    /**
                     * 获取Timestamp hotlink protection mode C configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return TypeC Timestamp hotlink protection mode C configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    AuthenticationTypeC GetTypeC() const;

                    /**
                     * 设置Timestamp hotlink protection mode C configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _typeC Timestamp hotlink protection mode C configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTypeC(const AuthenticationTypeC& _typeC);

                    /**
                     * 判断参数 TypeC 是否已赋值
                     * @return TypeC 是否已赋值
                     * 
                     */
                    bool TypeCHasBeenSet() const;

                    /**
                     * 获取Timestamp hotlink protection mode D configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return TypeD Timestamp hotlink protection mode D configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    AuthenticationTypeD GetTypeD() const;

                    /**
                     * 设置Timestamp hotlink protection mode D configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _typeD Timestamp hotlink protection mode D configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTypeD(const AuthenticationTypeD& _typeD);

                    /**
                     * 判断参数 TypeD 是否已赋值
                     * @return TypeD 是否已赋值
                     * 
                     */
                    bool TypeDHasBeenSet() const;

                private:

                    /**
                     * Hotlink protection configuration switch
`on`: Enable
`off`: Disable
When this is enabled, one mode needs to be configured. Other modes need to be set to null.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Timestamp hotlink protection mode A configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    AuthenticationTypeA m_typeA;
                    bool m_typeAHasBeenSet;

                    /**
                     * Timestamp hotlink protection mode B configuration (mode B is being upgraded and is currently not supported)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    AuthenticationTypeB m_typeB;
                    bool m_typeBHasBeenSet;

                    /**
                     * Timestamp hotlink protection mode C configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    AuthenticationTypeC m_typeC;
                    bool m_typeCHasBeenSet;

                    /**
                     * Timestamp hotlink protection mode D configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    AuthenticationTypeD m_typeD;
                    bool m_typeDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_AUTHENTICATION_H_
