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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_APPSHAREACCESSCONTROL_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_APPSHAREACCESSCONTROL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AppShareWhitelistItem.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * AppShareAccessControl
                */
                class AppShareAccessControl : public AbstractModel
                {
                public:
                    AppShareAccessControl();
                    ~AppShareAccessControl() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>APP_SHARE_ACCESS_TYPE_UNSPECIFIED</td><td>0</td><td></td></tr><tr><td>APP_SHARE_ACCESS_TYPE_PUBLIC</td><td>1</td><td>Public access (accessible to all users)</td></tr><tr><td>APP_SHARE_ACCESS_TYPE_INTERNAL</td><td>2</td><td>Internal access (accessible only to organizational users)</td></tr><tr><td>APP_SHARE_ACCESS_TYPE_ACCOUNT_WHITELIST</td><td>3</td><td>Account allowlist (accessible to specified UIN/mobile phone/mailbox/IP)</td></tr></tbody></table>
                     * @return AccessType <table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>APP_SHARE_ACCESS_TYPE_UNSPECIFIED</td><td>0</td><td></td></tr><tr><td>APP_SHARE_ACCESS_TYPE_PUBLIC</td><td>1</td><td>Public access (accessible to all users)</td></tr><tr><td>APP_SHARE_ACCESS_TYPE_INTERNAL</td><td>2</td><td>Internal access (accessible only to organizational users)</td></tr><tr><td>APP_SHARE_ACCESS_TYPE_ACCOUNT_WHITELIST</td><td>3</td><td>Account allowlist (accessible to specified UIN/mobile phone/mailbox/IP)</td></tr></tbody></table>
                     * 
                     */
                    int64_t GetAccessType() const;

                    /**
                     * 设置<table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>APP_SHARE_ACCESS_TYPE_UNSPECIFIED</td><td>0</td><td></td></tr><tr><td>APP_SHARE_ACCESS_TYPE_PUBLIC</td><td>1</td><td>Public access (accessible to all users)</td></tr><tr><td>APP_SHARE_ACCESS_TYPE_INTERNAL</td><td>2</td><td>Internal access (accessible only to organizational users)</td></tr><tr><td>APP_SHARE_ACCESS_TYPE_ACCOUNT_WHITELIST</td><td>3</td><td>Account allowlist (accessible to specified UIN/mobile phone/mailbox/IP)</td></tr></tbody></table>
                     * @param _accessType <table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>APP_SHARE_ACCESS_TYPE_UNSPECIFIED</td><td>0</td><td></td></tr><tr><td>APP_SHARE_ACCESS_TYPE_PUBLIC</td><td>1</td><td>Public access (accessible to all users)</td></tr><tr><td>APP_SHARE_ACCESS_TYPE_INTERNAL</td><td>2</td><td>Internal access (accessible only to organizational users)</td></tr><tr><td>APP_SHARE_ACCESS_TYPE_ACCOUNT_WHITELIST</td><td>3</td><td>Account allowlist (accessible to specified UIN/mobile phone/mailbox/IP)</td></tr></tbody></table>
                     * 
                     */
                    void SetAccessType(const int64_t& _accessType);

                    /**
                     * 判断参数 AccessType 是否已赋值
                     * @return AccessType 是否已赋值
                     * 
                     */
                    bool AccessTypeHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable access control</p><p>Enumeration values:</p><ul><li>true: Enable</li><li>false: Disable</li></ul>
                     * @return Enabled <p>Whether to enable access control</p><p>Enumeration values:</p><ul><li>true: Enable</li><li>false: Disable</li></ul>
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置<p>Whether to enable access control</p><p>Enumeration values:</p><ul><li>true: Enable</li><li>false: Disable</li></ul>
                     * @param _enabled <p>Whether to enable access control</p><p>Enumeration values:</p><ul><li>true: Enable</li><li>false: Disable</li></ul>
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取<p>Whitelist information</p>
                     * @return Whitelist <p>Whitelist information</p>
                     * 
                     */
                    std::vector<AppShareWhitelistItem> GetWhitelist() const;

                    /**
                     * 设置<p>Whitelist information</p>
                     * @param _whitelist <p>Whitelist information</p>
                     * 
                     */
                    void SetWhitelist(const std::vector<AppShareWhitelistItem>& _whitelist);

                    /**
                     * 判断参数 Whitelist 是否已赋值
                     * @return Whitelist 是否已赋值
                     * 
                     */
                    bool WhitelistHasBeenSet() const;

                private:

                    /**
                     * <table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>APP_SHARE_ACCESS_TYPE_UNSPECIFIED</td><td>0</td><td></td></tr><tr><td>APP_SHARE_ACCESS_TYPE_PUBLIC</td><td>1</td><td>Public access (accessible to all users)</td></tr><tr><td>APP_SHARE_ACCESS_TYPE_INTERNAL</td><td>2</td><td>Internal access (accessible only to organizational users)</td></tr><tr><td>APP_SHARE_ACCESS_TYPE_ACCOUNT_WHITELIST</td><td>3</td><td>Account allowlist (accessible to specified UIN/mobile phone/mailbox/IP)</td></tr></tbody></table>
                     */
                    int64_t m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * <p>Whether to enable access control</p><p>Enumeration values:</p><ul><li>true: Enable</li><li>false: Disable</li></ul>
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * <p>Whitelist information</p>
                     */
                    std::vector<AppShareWhitelistItem> m_whitelist;
                    bool m_whitelistHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_APPSHAREACCESSCONTROL_H_
