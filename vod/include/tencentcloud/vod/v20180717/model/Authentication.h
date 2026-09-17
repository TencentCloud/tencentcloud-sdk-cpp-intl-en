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
                * 
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
                     * 获取
                     * @return TypeA 
                     * 
                     */
                    AuthenticationTypeA GetTypeA() const;

                    /**
                     * 设置
                     * @param _typeA 
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
                     * 获取
                     * @return TypeB 
                     * 
                     */
                    AuthenticationTypeB GetTypeB() const;

                    /**
                     * 设置
                     * @param _typeB 
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
                     * 获取
                     * @return TypeC 
                     * 
                     */
                    AuthenticationTypeC GetTypeC() const;

                    /**
                     * 设置
                     * @param _typeC 
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
                     * 获取
                     * @return TypeD 
                     * 
                     */
                    AuthenticationTypeD GetTypeD() const;

                    /**
                     * 设置
                     * @param _typeD 
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
                     * 
                     */
                    AuthenticationTypeA m_typeA;
                    bool m_typeAHasBeenSet;

                    /**
                     * 
                     */
                    AuthenticationTypeB m_typeB;
                    bool m_typeBHasBeenSet;

                    /**
                     * 
                     */
                    AuthenticationTypeC m_typeC;
                    bool m_typeCHasBeenSet;

                    /**
                     * 
                     */
                    AuthenticationTypeD m_typeD;
                    bool m_typeDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AUTHENTICATION_H_
