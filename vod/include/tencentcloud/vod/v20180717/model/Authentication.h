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
                     * 获取Hotlink protection configuration switch. Value:
<li>`on`: Enable;</li>
<li>`off`: Cache.</li>

                     * @return Switch Hotlink protection configuration switch. Value:
<li>`on`: Enable;</li>
<li>`off`: Cache.</li>

                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Hotlink protection configuration switch. Value:
<li>`on`: Enable;</li>
<li>`off`: Cache.</li>

                     * @param _switch Hotlink protection configuration switch. Value:
<li>`on`: Enable;</li>
<li>`off`: Cache.</li>

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
                     * 获取Configuration of timestamp hotlink protection mode A.
                     * @return TypeA Configuration of timestamp hotlink protection mode A.
                     * 
                     */
                    AuthenticationTypeA GetTypeA() const;

                    /**
                     * 设置Configuration of timestamp hotlink protection mode A.
                     * @param _typeA Configuration of timestamp hotlink protection mode A.
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
                     * 获取Configuration of timestamp hotlink protection mode B.
                     * @return TypeB Configuration of timestamp hotlink protection mode B.
                     * 
                     */
                    AuthenticationTypeB GetTypeB() const;

                    /**
                     * 设置Configuration of timestamp hotlink protection mode B.
                     * @param _typeB Configuration of timestamp hotlink protection mode B.
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
                     * 获取Configuration of timestamp hotlink protection mode C.
                     * @return TypeC Configuration of timestamp hotlink protection mode C.
                     * 
                     */
                    AuthenticationTypeC GetTypeC() const;

                    /**
                     * 设置Configuration of timestamp hotlink protection mode C.
                     * @param _typeC Configuration of timestamp hotlink protection mode C.
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
                     * 获取Configuration of timestamp hotlink protection mode D.
                     * @return TypeD Configuration of timestamp hotlink protection mode D.
                     * 
                     */
                    AuthenticationTypeD GetTypeD() const;

                    /**
                     * 设置Configuration of timestamp hotlink protection mode D.
                     * @param _typeD Configuration of timestamp hotlink protection mode D.
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
                     * Hotlink protection configuration switch. Value:
<li>`on`: Enable;</li>
<li>`off`: Cache.</li>

                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Configuration of timestamp hotlink protection mode A.
                     */
                    AuthenticationTypeA m_typeA;
                    bool m_typeAHasBeenSet;

                    /**
                     * Configuration of timestamp hotlink protection mode B.
                     */
                    AuthenticationTypeB m_typeB;
                    bool m_typeBHasBeenSet;

                    /**
                     * Configuration of timestamp hotlink protection mode C.
                     */
                    AuthenticationTypeC m_typeC;
                    bool m_typeCHasBeenSet;

                    /**
                     * Configuration of timestamp hotlink protection mode D.
                     */
                    AuthenticationTypeD m_typeD;
                    bool m_typeDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AUTHENTICATION_H_
