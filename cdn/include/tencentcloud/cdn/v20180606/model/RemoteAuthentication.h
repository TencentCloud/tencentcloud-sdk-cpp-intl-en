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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_REMOTEAUTHENTICATION_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_REMOTEAUTHENTICATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/RemoteAuthenticationRule.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * Configuration of remote authentication rules. Setting up multiple rules is supported.
`RemoteAuthenticationRules` and `Server` cannot be configured at the same time.
If only `Server` is configured, all parameters of `RemoteAuthenticationRules` will be set to the default values. The default values are described in each configuration parameter.
                */
                class RemoteAuthentication : public AbstractModel
                {
                public:
                    RemoteAuthentication();
                    ~RemoteAuthentication() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable remote authentication. Values:
`on`: Enable
`off`: Disable
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Switch Whether to enable remote authentication. Values:
`on`: Enable
`off`: Disable
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to enable remote authentication. Values:
`on`: Enable
`off`: Disable
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _switch Whether to enable remote authentication. Values:
`on`: Enable
`off`: Disable
Note: This field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Remote authentication rule configuration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return RemoteAuthenticationRules Remote authentication rule configuration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<RemoteAuthenticationRule> GetRemoteAuthenticationRules() const;

                    /**
                     * 设置Remote authentication rule configuration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _remoteAuthenticationRules Remote authentication rule configuration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRemoteAuthenticationRules(const std::vector<RemoteAuthenticationRule>& _remoteAuthenticationRules);

                    /**
                     * 判断参数 RemoteAuthenticationRules 是否已赋值
                     * @return RemoteAuthenticationRules 是否已赋值
                     * 
                     */
                    bool RemoteAuthenticationRulesHasBeenSet() const;

                    /**
                     * 获取Remote authentication server
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Server Remote authentication server
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetServer() const;

                    /**
                     * 设置Remote authentication server
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _server Remote authentication server
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetServer(const std::string& _server);

                    /**
                     * 判断参数 Server 是否已赋值
                     * @return Server 是否已赋值
                     * 
                     */
                    bool ServerHasBeenSet() const;

                private:

                    /**
                     * Whether to enable remote authentication. Values:
`on`: Enable
`off`: Disable
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Remote authentication rule configuration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<RemoteAuthenticationRule> m_remoteAuthenticationRules;
                    bool m_remoteAuthenticationRulesHasBeenSet;

                    /**
                     * Remote authentication server
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_server;
                    bool m_serverHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_REMOTEAUTHENTICATION_H_
