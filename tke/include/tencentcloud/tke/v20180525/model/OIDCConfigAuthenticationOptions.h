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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_OIDCCONFIGAUTHENTICATIONOPTIONS_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_OIDCCONFIGAUTHENTICATIONOPTIONS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * OIDC authentication related configurations
                */
                class OIDCConfigAuthenticationOptions : public AbstractModel
                {
                public:
                    OIDCConfigAuthenticationOptions();
                    ~OIDCConfigAuthenticationOptions() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Creating an identity provider
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return AutoCreateOIDCConfig Creating an identity provider
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    bool GetAutoCreateOIDCConfig() const;

                    /**
                     * 设置Creating an identity provider
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _autoCreateOIDCConfig Creating an identity provider
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAutoCreateOIDCConfig(const bool& _autoCreateOIDCConfig);

                    /**
                     * 判断参数 AutoCreateOIDCConfig 是否已赋值
                     * @return AutoCreateOIDCConfig 是否已赋值
                     * 
                     */
                    bool AutoCreateOIDCConfigHasBeenSet() const;

                    /**
                     * 获取Creating ClientId of the identity provider
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return AutoCreateClientId Creating ClientId of the identity provider
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetAutoCreateClientId() const;

                    /**
                     * 设置Creating ClientId of the identity provider
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _autoCreateClientId Creating ClientId of the identity provider
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAutoCreateClientId(const std::vector<std::string>& _autoCreateClientId);

                    /**
                     * 判断参数 AutoCreateClientId 是否已赋值
                     * @return AutoCreateClientId 是否已赋值
                     * 
                     */
                    bool AutoCreateClientIdHasBeenSet() const;

                    /**
                     * 获取Creating the PodIdentityWebhook component
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return AutoInstallPodIdentityWebhookAddon Creating the PodIdentityWebhook component
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    bool GetAutoInstallPodIdentityWebhookAddon() const;

                    /**
                     * 设置Creating the PodIdentityWebhook component
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _autoInstallPodIdentityWebhookAddon Creating the PodIdentityWebhook component
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAutoInstallPodIdentityWebhookAddon(const bool& _autoInstallPodIdentityWebhookAddon);

                    /**
                     * 判断参数 AutoInstallPodIdentityWebhookAddon 是否已赋值
                     * @return AutoInstallPodIdentityWebhookAddon 是否已赋值
                     * 
                     */
                    bool AutoInstallPodIdentityWebhookAddonHasBeenSet() const;

                private:

                    /**
                     * Creating an identity provider
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    bool m_autoCreateOIDCConfig;
                    bool m_autoCreateOIDCConfigHasBeenSet;

                    /**
                     * Creating ClientId of the identity provider
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_autoCreateClientId;
                    bool m_autoCreateClientIdHasBeenSet;

                    /**
                     * Creating the PodIdentityWebhook component
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    bool m_autoInstallPodIdentityWebhookAddon;
                    bool m_autoInstallPodIdentityWebhookAddonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_OIDCCONFIGAUTHENTICATIONOPTIONS_H_
