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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_ADVANCEDAUTHENTICATION_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_ADVANCEDAUTHENTICATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/AdvancedAuthenticationTypeA.h>
#include <tencentcloud/cdn/v20180606/model/AdvancedAuthenticationTypeB.h>
#include <tencentcloud/cdn/v20180606/model/AdvancedAuthenticationTypeC.h>
#include <tencentcloud/cdn/v20180606/model/AdvancedAuthenticationTypeD.h>
#include <tencentcloud/cdn/v20180606/model/AdvancedAuthenticationTypeE.h>
#include <tencentcloud/cdn/v20180606/model/AdvancedAuthenticationTypeF.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * Timestamp hotlink protection advanced configuration (allowlist feature)
                */
                class AdvancedAuthentication : public AbstractModel
                {
                public:
                    AdvancedAuthentication();
                    ~AdvancedAuthentication() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable hot linking protection. Values:
`on`: Enable
`off`: Disable
Only one advanced configuration can be enabled. Set the rests to `null`.
                     * @return Switch Whether to enable hot linking protection. Values:
`on`: Enable
`off`: Disable
Only one advanced configuration can be enabled. Set the rests to `null`.
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to enable hot linking protection. Values:
`on`: Enable
`off`: Disable
Only one advanced configuration can be enabled. Set the rests to `null`.
                     * @param _switch Whether to enable hot linking protection. Values:
`on`: Enable
`off`: Disable
Only one advanced configuration can be enabled. Set the rests to `null`.
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
                     * 获取Timestamp hotlink protection advanced configuration mode A
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return TypeA Timestamp hotlink protection advanced configuration mode A
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    AdvancedAuthenticationTypeA GetTypeA() const;

                    /**
                     * 设置Timestamp hotlink protection advanced configuration mode A
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _typeA Timestamp hotlink protection advanced configuration mode A
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTypeA(const AdvancedAuthenticationTypeA& _typeA);

                    /**
                     * 判断参数 TypeA 是否已赋值
                     * @return TypeA 是否已赋值
                     * 
                     */
                    bool TypeAHasBeenSet() const;

                    /**
                     * 获取Timestamp hotlink protection advanced configuration mode B
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return TypeB Timestamp hotlink protection advanced configuration mode B
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    AdvancedAuthenticationTypeB GetTypeB() const;

                    /**
                     * 设置Timestamp hotlink protection advanced configuration mode B
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _typeB Timestamp hotlink protection advanced configuration mode B
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTypeB(const AdvancedAuthenticationTypeB& _typeB);

                    /**
                     * 判断参数 TypeB 是否已赋值
                     * @return TypeB 是否已赋值
                     * 
                     */
                    bool TypeBHasBeenSet() const;

                    /**
                     * 获取Timestamp hotlink protection advanced configuration mode C
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return TypeC Timestamp hotlink protection advanced configuration mode C
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    AdvancedAuthenticationTypeC GetTypeC() const;

                    /**
                     * 设置Timestamp hotlink protection advanced configuration mode C
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _typeC Timestamp hotlink protection advanced configuration mode C
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTypeC(const AdvancedAuthenticationTypeC& _typeC);

                    /**
                     * 判断参数 TypeC 是否已赋值
                     * @return TypeC 是否已赋值
                     * 
                     */
                    bool TypeCHasBeenSet() const;

                    /**
                     * 获取Timestamp hotlink protection advanced configuration mode D
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return TypeD Timestamp hotlink protection advanced configuration mode D
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    AdvancedAuthenticationTypeD GetTypeD() const;

                    /**
                     * 设置Timestamp hotlink protection advanced configuration mode D
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _typeD Timestamp hotlink protection advanced configuration mode D
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTypeD(const AdvancedAuthenticationTypeD& _typeD);

                    /**
                     * 判断参数 TypeD 是否已赋值
                     * @return TypeD 是否已赋值
                     * 
                     */
                    bool TypeDHasBeenSet() const;

                    /**
                     * 获取Timestamp hotlink protection advanced configuration mode E
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return TypeE Timestamp hotlink protection advanced configuration mode E
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    AdvancedAuthenticationTypeE GetTypeE() const;

                    /**
                     * 设置Timestamp hotlink protection advanced configuration mode E
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _typeE Timestamp hotlink protection advanced configuration mode E
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTypeE(const AdvancedAuthenticationTypeE& _typeE);

                    /**
                     * 判断参数 TypeE 是否已赋值
                     * @return TypeE 是否已赋值
                     * 
                     */
                    bool TypeEHasBeenSet() const;

                    /**
                     * 获取Timestamp hotlink protection advanced configuration mode F
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return TypeF Timestamp hotlink protection advanced configuration mode F
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    AdvancedAuthenticationTypeF GetTypeF() const;

                    /**
                     * 设置Timestamp hotlink protection advanced configuration mode F
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _typeF Timestamp hotlink protection advanced configuration mode F
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTypeF(const AdvancedAuthenticationTypeF& _typeF);

                    /**
                     * 判断参数 TypeF 是否已赋值
                     * @return TypeF 是否已赋值
                     * 
                     */
                    bool TypeFHasBeenSet() const;

                private:

                    /**
                     * Whether to enable hot linking protection. Values:
`on`: Enable
`off`: Disable
Only one advanced configuration can be enabled. Set the rests to `null`.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Timestamp hotlink protection advanced configuration mode A
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    AdvancedAuthenticationTypeA m_typeA;
                    bool m_typeAHasBeenSet;

                    /**
                     * Timestamp hotlink protection advanced configuration mode B
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    AdvancedAuthenticationTypeB m_typeB;
                    bool m_typeBHasBeenSet;

                    /**
                     * Timestamp hotlink protection advanced configuration mode C
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    AdvancedAuthenticationTypeC m_typeC;
                    bool m_typeCHasBeenSet;

                    /**
                     * Timestamp hotlink protection advanced configuration mode D
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    AdvancedAuthenticationTypeD m_typeD;
                    bool m_typeDHasBeenSet;

                    /**
                     * Timestamp hotlink protection advanced configuration mode E
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    AdvancedAuthenticationTypeE m_typeE;
                    bool m_typeEHasBeenSet;

                    /**
                     * Timestamp hotlink protection advanced configuration mode F
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    AdvancedAuthenticationTypeF m_typeF;
                    bool m_typeFHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_ADVANCEDAUTHENTICATION_H_
