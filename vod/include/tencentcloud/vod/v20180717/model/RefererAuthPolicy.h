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
                * Referer hotlink protection configuration
                */
                class RefererAuthPolicy : public AbstractModel
                {
                public:
                    RefererAuthPolicy();
                    ~RefererAuthPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取[Referer hotlink protection](https://intl.cloud.tencent.com/document/product/266/33985) status. Valid values:
<li>Enabled</li>
<li>Disabled</li>
                     * @return Status [Referer hotlink protection](https://intl.cloud.tencent.com/document/product/266/33985) status. Valid values:
<li>Enabled</li>
<li>Disabled</li>
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置[Referer hotlink protection](https://intl.cloud.tencent.com/document/product/266/33985) status. Valid values:
<li>Enabled</li>
<li>Disabled</li>
                     * @param Status [Referer hotlink protection](https://intl.cloud.tencent.com/document/product/266/33985) status. Valid values:
<li>Enabled</li>
<li>Disabled</li>
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Referer authentication method. Valid values:
<li>`Black`: blocklist. Any HTTP request carrying a referer in the `Referers` list will be rejected. </li>
<li>`White`: allowlist. Only HTTP requests carrying referers in the `Referers` list will be accepted.</li>
When `Status` is set to `Enabled`, `AuthType` must be specified.
                     * @return AuthType Referer authentication method. Valid values:
<li>`Black`: blocklist. Any HTTP request carrying a referer in the `Referers` list will be rejected. </li>
<li>`White`: allowlist. Only HTTP requests carrying referers in the `Referers` list will be accepted.</li>
When `Status` is set to `Enabled`, `AuthType` must be specified.
                     */
                    std::string GetAuthType() const;

                    /**
                     * 设置Referer authentication method. Valid values:
<li>`Black`: blocklist. Any HTTP request carrying a referer in the `Referers` list will be rejected. </li>
<li>`White`: allowlist. Only HTTP requests carrying referers in the `Referers` list will be accepted.</li>
When `Status` is set to `Enabled`, `AuthType` must be specified.
                     * @param AuthType Referer authentication method. Valid values:
<li>`Black`: blocklist. Any HTTP request carrying a referer in the `Referers` list will be rejected. </li>
<li>`White`: allowlist. Only HTTP requests carrying referers in the `Referers` list will be accepted.</li>
When `Status` is set to `Enabled`, `AuthType` must be specified.
                     */
                    void SetAuthType(const std::string& _authType);

                    /**
                     * 判断参数 AuthType 是否已赋值
                     * @return AuthType 是否已赋值
                     */
                    bool AuthTypeHasBeenSet() const;

                    /**
                     * 获取The list of referers (up to 20). When `Status` is set to `Enabled`, `Referers` cannot be empty. Enter domain names as referers.
                     * @return Referers The list of referers (up to 20). When `Status` is set to `Enabled`, `Referers` cannot be empty. Enter domain names as referers.
                     */
                    std::vector<std::string> GetReferers() const;

                    /**
                     * 设置The list of referers (up to 20). When `Status` is set to `Enabled`, `Referers` cannot be empty. Enter domain names as referers.
                     * @param Referers The list of referers (up to 20). When `Status` is set to `Enabled`, `Referers` cannot be empty. Enter domain names as referers.
                     */
                    void SetReferers(const std::vector<std::string>& _referers);

                    /**
                     * 判断参数 Referers 是否已赋值
                     * @return Referers 是否已赋值
                     */
                    bool ReferersHasBeenSet() const;

                    /**
                     * 获取Whether to allow requests with empty referer to access this domain name. Valid values:
<li>`Yes`</li>
<li>`No`</li>
When `Status` is set to `Enabled`, `BlankRefererAllowed` must be specified.
                     * @return BlankRefererAllowed Whether to allow requests with empty referer to access this domain name. Valid values:
<li>`Yes`</li>
<li>`No`</li>
When `Status` is set to `Enabled`, `BlankRefererAllowed` must be specified.
                     */
                    std::string GetBlankRefererAllowed() const;

                    /**
                     * 设置Whether to allow requests with empty referer to access this domain name. Valid values:
<li>`Yes`</li>
<li>`No`</li>
When `Status` is set to `Enabled`, `BlankRefererAllowed` must be specified.
                     * @param BlankRefererAllowed Whether to allow requests with empty referer to access this domain name. Valid values:
<li>`Yes`</li>
<li>`No`</li>
When `Status` is set to `Enabled`, `BlankRefererAllowed` must be specified.
                     */
                    void SetBlankRefererAllowed(const std::string& _blankRefererAllowed);

                    /**
                     * 判断参数 BlankRefererAllowed 是否已赋值
                     * @return BlankRefererAllowed 是否已赋值
                     */
                    bool BlankRefererAllowedHasBeenSet() const;

                private:

                    /**
                     * [Referer hotlink protection](https://intl.cloud.tencent.com/document/product/266/33985) status. Valid values:
<li>Enabled</li>
<li>Disabled</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Referer authentication method. Valid values:
<li>`Black`: blocklist. Any HTTP request carrying a referer in the `Referers` list will be rejected. </li>
<li>`White`: allowlist. Only HTTP requests carrying referers in the `Referers` list will be accepted.</li>
When `Status` is set to `Enabled`, `AuthType` must be specified.
                     */
                    std::string m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * The list of referers (up to 20). When `Status` is set to `Enabled`, `Referers` cannot be empty. Enter domain names as referers.
                     */
                    std::vector<std::string> m_referers;
                    bool m_referersHasBeenSet;

                    /**
                     * Whether to allow requests with empty referer to access this domain name. Valid values:
<li>`Yes`</li>
<li>`No`</li>
When `Status` is set to `Enabled`, `BlankRefererAllowed` must be specified.
                     */
                    std::string m_blankRefererAllowed;
                    bool m_blankRefererAllowedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_REFERERAUTHPOLICY_H_
