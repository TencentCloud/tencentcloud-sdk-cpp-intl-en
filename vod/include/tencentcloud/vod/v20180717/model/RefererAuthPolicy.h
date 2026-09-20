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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_REFERERAUTHPOLICY_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_REFERERAUTHPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Referer anti-leech configuration
                */
                class RefererAuthPolicy : public AbstractModel
                {
                public:
                    RefererAuthPolicy();
                    ~RefererAuthPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取[Referer hotlink protection](https://www.tencentcloud.com/document/product/266/14046?from_cn_redirect=1) setting status. Available values:
<li>Enabled: enable;</li>
<li>Disabled: disabled.</li>
                     * @return Status [Referer hotlink protection](https://www.tencentcloud.com/document/product/266/14046?from_cn_redirect=1) setting status. Available values:
<li>Enabled: enable;</li>
<li>Disabled: disabled.</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置[Referer hotlink protection](https://www.tencentcloud.com/document/product/266/14046?from_cn_redirect=1) setting status. Available values:
<li>Enabled: enable;</li>
<li>Disabled: disabled.</li>
                     * @param _status [Referer hotlink protection](https://www.tencentcloud.com/document/product/266/14046?from_cn_redirect=1) setting status. Available values:
<li>Enabled: enable;</li>
<li>Disabled: disabled.</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Referer verification type. Available values:
<li>Black: blocklist verification method. An HTTP request carrying a Referer in the Referers list will be rejected.</li>
<li>White: whitelist method validation. HTTP requests are allowed only when they carry a Referer in the Referers list.</li>
When Status is Enabled, AuthType must be assigned a value.
                     * @return AuthType Referer verification type. Available values:
<li>Black: blocklist verification method. An HTTP request carrying a Referer in the Referers list will be rejected.</li>
<li>White: whitelist method validation. HTTP requests are allowed only when they carry a Referer in the Referers list.</li>
When Status is Enabled, AuthType must be assigned a value.
                     * 
                     */
                    std::string GetAuthType() const;

                    /**
                     * 设置Referer verification type. Available values:
<li>Black: blocklist verification method. An HTTP request carrying a Referer in the Referers list will be rejected.</li>
<li>White: whitelist method validation. HTTP requests are allowed only when they carry a Referer in the Referers list.</li>
When Status is Enabled, AuthType must be assigned a value.
                     * @param _authType Referer verification type. Available values:
<li>Black: blocklist verification method. An HTTP request carrying a Referer in the Referers list will be rejected.</li>
<li>White: whitelist method validation. HTTP requests are allowed only when they carry a Referer in the Referers list.</li>
When Status is Enabled, AuthType must be assigned a value.
                     * 
                     */
                    void SetAuthType(const std::string& _authType);

                    /**
                     * 判断参数 AuthType 是否已赋值
                     * @return AuthType 是否已赋值
                     * 
                     */
                    bool AuthTypeHasBeenSet() const;

                    /**
                     * 获取List of Referers used for verification. Supports up to 400 Referers. When Status value is Enabled, Referers cannot be an empty array. For the Referer format, see the format of the domain.
                     * @return Referers List of Referers used for verification. Supports up to 400 Referers. When Status value is Enabled, Referers cannot be an empty array. For the Referer format, see the format of the domain.
                     * 
                     */
                    std::vector<std::string> GetReferers() const;

                    /**
                     * 设置List of Referers used for verification. Supports up to 400 Referers. When Status value is Enabled, Referers cannot be an empty array. For the Referer format, see the format of the domain.
                     * @param _referers List of Referers used for verification. Supports up to 400 Referers. When Status value is Enabled, Referers cannot be an empty array. For the Referer format, see the format of the domain.
                     * 
                     */
                    void SetReferers(const std::vector<std::string>& _referers);

                    /**
                     * 判断参数 Referers 是否已赋值
                     * @return Referers 是否已赋值
                     * 
                     */
                    bool ReferersHasBeenSet() const;

                    /**
                     * 获取Whether to allow access to this domain name with a null Referer. Available values:
<li>Yes: yes.</li>
<li>No: no</li>
When Status is Enabled, BlankRefererAllowed must be assigned a value.
                     * @return BlankRefererAllowed Whether to allow access to this domain name with a null Referer. Available values:
<li>Yes: yes.</li>
<li>No: no</li>
When Status is Enabled, BlankRefererAllowed must be assigned a value.
                     * 
                     */
                    std::string GetBlankRefererAllowed() const;

                    /**
                     * 设置Whether to allow access to this domain name with a null Referer. Available values:
<li>Yes: yes.</li>
<li>No: no</li>
When Status is Enabled, BlankRefererAllowed must be assigned a value.
                     * @param _blankRefererAllowed Whether to allow access to this domain name with a null Referer. Available values:
<li>Yes: yes.</li>
<li>No: no</li>
When Status is Enabled, BlankRefererAllowed must be assigned a value.
                     * 
                     */
                    void SetBlankRefererAllowed(const std::string& _blankRefererAllowed);

                    /**
                     * 判断参数 BlankRefererAllowed 是否已赋值
                     * @return BlankRefererAllowed 是否已赋值
                     * 
                     */
                    bool BlankRefererAllowedHasBeenSet() const;

                private:

                    /**
                     * [Referer hotlink protection](https://www.tencentcloud.com/document/product/266/14046?from_cn_redirect=1) setting status. Available values:
<li>Enabled: enable;</li>
<li>Disabled: disabled.</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Referer verification type. Available values:
<li>Black: blocklist verification method. An HTTP request carrying a Referer in the Referers list will be rejected.</li>
<li>White: whitelist method validation. HTTP requests are allowed only when they carry a Referer in the Referers list.</li>
When Status is Enabled, AuthType must be assigned a value.
                     */
                    std::string m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * List of Referers used for verification. Supports up to 400 Referers. When Status value is Enabled, Referers cannot be an empty array. For the Referer format, see the format of the domain.
                     */
                    std::vector<std::string> m_referers;
                    bool m_referersHasBeenSet;

                    /**
                     * Whether to allow access to this domain name with a null Referer. Available values:
<li>Yes: yes.</li>
<li>No: no</li>
When Status is Enabled, BlankRefererAllowed must be assigned a value.
                     */
                    std::string m_blankRefererAllowed;
                    bool m_blankRefererAllowedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_REFERERAUTHPOLICY_H_
