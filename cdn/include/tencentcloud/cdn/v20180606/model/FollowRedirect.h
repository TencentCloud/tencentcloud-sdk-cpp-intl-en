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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_FOLLOWREDIRECT_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_FOLLOWREDIRECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/RedirectConfig.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 301/302 automatic origin-pull follow-redirect configuration. It is disabled by default.
                */
                class FollowRedirect : public AbstractModel
                {
                public:
                    FollowRedirect();
                    ~FollowRedirect() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable origin-pull to follow the origin configuration. Values:
`on`: Enable
`off`: Disable
                     * @return Switch Whether to enable origin-pull to follow the origin configuration. Values:
`on`: Enable
`off`: Disable
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to enable origin-pull to follow the origin configuration. Values:
`on`: Enable
`off`: Disable
                     * @param _switch Whether to enable origin-pull to follow the origin configuration. Values:
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
                     * 获取Specifies a host header for 302 redirects. This feature is only available to beta users. To join the beta, please submit a ticket.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RedirectConfig Specifies a host header for 302 redirects. This feature is only available to beta users. To join the beta, please submit a ticket.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    RedirectConfig GetRedirectConfig() const;

                    /**
                     * 设置Specifies a host header for 302 redirects. This feature is only available to beta users. To join the beta, please submit a ticket.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _redirectConfig Specifies a host header for 302 redirects. This feature is only available to beta users. To join the beta, please submit a ticket.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRedirectConfig(const RedirectConfig& _redirectConfig);

                    /**
                     * 判断参数 RedirectConfig 是否已赋值
                     * @return RedirectConfig 是否已赋值
                     * 
                     */
                    bool RedirectConfigHasBeenSet() const;

                private:

                    /**
                     * Whether to enable origin-pull to follow the origin configuration. Values:
`on`: Enable
`off`: Disable
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Specifies a host header for 302 redirects. This feature is only available to beta users. To join the beta, please submit a ticket.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    RedirectConfig m_redirectConfig;
                    bool m_redirectConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_FOLLOWREDIRECT_H_
