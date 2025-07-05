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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AUTHENTICATION_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AUTHENTICATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AuthenticationTypeA.h>
#include <tencentcloud/vod/v20180717/model/AuthenticationTypeB.h>
#include <tencentcloud/vod/v20180717/model/AuthenticationTypeC.h>
#include <tencentcloud/vod/v20180717/model/AuthenticationTypeD.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
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
                     * 获取Anti-hotlink configuration switch, value: <li>on: on; </li> <li>off: off. </li>
                     * @return Switch Anti-hotlink configuration switch, value: <li>on: on; </li> <li>off: off. </li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Anti-hotlink configuration switch, value: <li>on: on; </li> <li>off: off. </li>
                     * @param _switch Anti-hotlink configuration switch, value: <li>on: on; </li> <li>off: off. </li>
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
                     * @return TypeA Timestamp hotlink protection mode A configuration
                     * 
                     */
                    AuthenticationTypeA GetTypeA() const;

                    /**
                     * 设置Timestamp hotlink protection mode A configuration
                     * @param _typeA Timestamp hotlink protection mode A configuration
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
                     * 获取Timestamp hotlink protection mode B configuration
                     * @return TypeB Timestamp hotlink protection mode B configuration
                     * 
                     */
                    AuthenticationTypeB GetTypeB() const;

                    /**
                     * 设置Timestamp hotlink protection mode B configuration
                     * @param _typeB Timestamp hotlink protection mode B configuration
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
                     * @return TypeC Timestamp hotlink protection mode C configuration
                     * 
                     */
                    AuthenticationTypeC GetTypeC() const;

                    /**
                     * 设置Timestamp hotlink protection mode C configuration
                     * @param _typeC Timestamp hotlink protection mode C configuration
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
                     * @return TypeD Timestamp hotlink protection mode D configuration
                     * 
                     */
                    AuthenticationTypeD GetTypeD() const;

                    /**
                     * 设置Timestamp hotlink protection mode D configuration
                     * @param _typeD Timestamp hotlink protection mode D configuration
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
                     * Anti-hotlink configuration switch, value: <li>on: on; </li> <li>off: off. </li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Timestamp hotlink protection mode A configuration
                     */
                    AuthenticationTypeA m_typeA;
                    bool m_typeAHasBeenSet;

                    /**
                     * Timestamp hotlink protection mode B configuration
                     */
                    AuthenticationTypeB m_typeB;
                    bool m_typeBHasBeenSet;

                    /**
                     * Timestamp hotlink protection mode C configuration
                     */
                    AuthenticationTypeC m_typeC;
                    bool m_typeCHasBeenSet;

                    /**
                     * Timestamp hotlink protection mode D configuration
                     */
                    AuthenticationTypeD m_typeD;
                    bool m_typeDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AUTHENTICATION_H_
