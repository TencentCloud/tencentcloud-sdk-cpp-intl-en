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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_REDIRECTCONFIG_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_REDIRECTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * Host header for 302 redirects
                */
                class RedirectConfig : public AbstractModel
                {
                public:
                    RedirectConfig();
                    ~RedirectConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable the custom origin-pull request to follow the host when a 302 code is returned. Values:
`on`: Enable
`off`: Disable
                     * @return Switch Whether to enable the custom origin-pull request to follow the host when a 302 code is returned. Values:
`on`: Enable
`off`: Disable
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to enable the custom origin-pull request to follow the host when a 302 code is returned. Values:
`on`: Enable
`off`: Disable
                     * @param _switch Whether to enable the custom origin-pull request to follow the host when a 302 code is returned. Values:
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
                     * 获取The custom host header that is sent when the primary origin server follows 302 redirects
                     * @return FollowRedirectHost The custom host header that is sent when the primary origin server follows 302 redirects
                     * 
                     */
                    std::string GetFollowRedirectHost() const;

                    /**
                     * 设置The custom host header that is sent when the primary origin server follows 302 redirects
                     * @param _followRedirectHost The custom host header that is sent when the primary origin server follows 302 redirects
                     * 
                     */
                    void SetFollowRedirectHost(const std::string& _followRedirectHost);

                    /**
                     * 判断参数 FollowRedirectHost 是否已赋值
                     * @return FollowRedirectHost 是否已赋值
                     * 
                     */
                    bool FollowRedirectHostHasBeenSet() const;

                    /**
                     * 获取The custom host header that is sent when the secondary origin server follows 302 redirects
                     * @return FollowRedirectBackupHost The custom host header that is sent when the secondary origin server follows 302 redirects
                     * 
                     */
                    std::string GetFollowRedirectBackupHost() const;

                    /**
                     * 设置The custom host header that is sent when the secondary origin server follows 302 redirects
                     * @param _followRedirectBackupHost The custom host header that is sent when the secondary origin server follows 302 redirects
                     * 
                     */
                    void SetFollowRedirectBackupHost(const std::string& _followRedirectBackupHost);

                    /**
                     * 判断参数 FollowRedirectBackupHost 是否已赋值
                     * @return FollowRedirectBackupHost 是否已赋值
                     * 
                     */
                    bool FollowRedirectBackupHostHasBeenSet() const;

                private:

                    /**
                     * Whether to enable the custom origin-pull request to follow the host when a 302 code is returned. Values:
`on`: Enable
`off`: Disable
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * The custom host header that is sent when the primary origin server follows 302 redirects
                     */
                    std::string m_followRedirectHost;
                    bool m_followRedirectHostHasBeenSet;

                    /**
                     * The custom host header that is sent when the secondary origin server follows 302 redirects
                     */
                    std::string m_followRedirectBackupHost;
                    bool m_followRedirectBackupHostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_REDIRECTCONFIG_H_
