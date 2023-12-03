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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_ACCESSCONTROL_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_ACCESSCONTROL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/AccessControlRule.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * Request header and request URL access control
                */
                class AccessControl : public AbstractModel
                {
                public:
                    AccessControl();
                    ~AccessControl() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable access control based on the request header and request URL. Values:
`on`: Enable
`off`: Disable
                     * @return Switch Whether to enable access control based on the request header and request URL. Values:
`on`: Enable
`off`: Disable
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to enable access control based on the request header and request URL. Values:
`on`: Enable
`off`: Disable
                     * @param _switch Whether to enable access control based on the request header and request URL. Values:
`on`: Enable
`off`: Disable
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
                     * 获取Request header and request URL access rule
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return AccessControlRules Request header and request URL access rule
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<AccessControlRule> GetAccessControlRules() const;

                    /**
                     * 设置Request header and request URL access rule
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _accessControlRules Request header and request URL access rule
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAccessControlRules(const std::vector<AccessControlRule>& _accessControlRules);

                    /**
                     * 判断参数 AccessControlRules 是否已赋值
                     * @return AccessControlRules 是否已赋值
                     * 
                     */
                    bool AccessControlRulesHasBeenSet() const;

                    /**
                     * 获取Returns status code
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return ReturnCode Returns status code
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetReturnCode() const;

                    /**
                     * 设置Returns status code
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _returnCode Returns status code
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetReturnCode(const int64_t& _returnCode);

                    /**
                     * 判断参数 ReturnCode 是否已赋值
                     * @return ReturnCode 是否已赋值
                     * 
                     */
                    bool ReturnCodeHasBeenSet() const;

                private:

                    /**
                     * Whether to enable access control based on the request header and request URL. Values:
`on`: Enable
`off`: Disable
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Request header and request URL access rule
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<AccessControlRule> m_accessControlRules;
                    bool m_accessControlRulesHasBeenSet;

                    /**
                     * Returns status code
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t m_returnCode;
                    bool m_returnCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_ACCESSCONTROL_H_
