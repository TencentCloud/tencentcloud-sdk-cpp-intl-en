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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_STICKYSESSIONCONFIG_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_STICKYSESSIONCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * Session persistence configuration.
                */
                class StickySessionConfig : public AbstractModel
                {
                public:
                    StickySessionConfig();
                    ~StickySessionConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable session persistence.
- **true**: enabled.
- **false**: not enabled.
                     * @return StickySessionEnabled Whether to enable session persistence.
- **true**: enabled.
- **false**: not enabled.
                     * 
                     */
                    bool GetStickySessionEnabled() const;

                    /**
                     * 设置Whether to enable session persistence.
- **true**: enabled.
- **false**: not enabled.
                     * @param _stickySessionEnabled Whether to enable session persistence.
- **true**: enabled.
- **false**: not enabled.
                     * 
                     */
                    void SetStickySessionEnabled(const bool& _stickySessionEnabled);

                    /**
                     * 判断参数 StickySessionEnabled 是否已赋值
                     * @return StickySessionEnabled 是否已赋值
                     * 
                     */
                    bool StickySessionEnabledHasBeenSet() const;

                    /**
                     * 获取Custom Cookie name.
Length: 1-255 characters. It can only contain English letters and digits, and cannot be `tgw_l7_tg_route`. This field is a reserved field for the session persistence Cookie between target groups.
>This parameter takes effect only when **StickySessionEnabled** is **true**.
                     * @return Cookie Custom Cookie name.
Length: 1-255 characters. It can only contain English letters and digits, and cannot be `tgw_l7_tg_route`. This field is a reserved field for the session persistence Cookie between target groups.
>This parameter takes effect only when **StickySessionEnabled** is **true**.
                     * 
                     */
                    std::string GetCookie() const;

                    /**
                     * 设置Custom Cookie name.
Length: 1-255 characters. It can only contain English letters and digits, and cannot be `tgw_l7_tg_route`. This field is a reserved field for the session persistence Cookie between target groups.
>This parameter takes effect only when **StickySessionEnabled** is **true**.
                     * @param _cookie Custom Cookie name.
Length: 1-255 characters. It can only contain English letters and digits, and cannot be `tgw_l7_tg_route`. This field is a reserved field for the session persistence Cookie between target groups.
>This parameter takes effect only when **StickySessionEnabled** is **true**.
                     * 
                     */
                    void SetCookie(const std::string& _cookie);

                    /**
                     * 判断参数 Cookie 是否已赋值
                     * @return Cookie 是否已赋值
                     * 
                     */
                    bool CookieHasBeenSet() const;

                    /**
                     * 获取Session hold time.
Value range: **1-86400**. Unit: **seconds**.
Default value: **1000**.
>This parameter takes effect only when **StickySessionEnabled** is **true**.
                     * @return CookieTimeout Session hold time.
Value range: **1-86400**. Unit: **seconds**.
Default value: **1000**.
>This parameter takes effect only when **StickySessionEnabled** is **true**.
                     * 
                     */
                    int64_t GetCookieTimeout() const;

                    /**
                     * 设置Session hold time.
Value range: **1-86400**. Unit: **seconds**.
Default value: **1000**.
>This parameter takes effect only when **StickySessionEnabled** is **true**.
                     * @param _cookieTimeout Session hold time.
Value range: **1-86400**. Unit: **seconds**.
Default value: **1000**.
>This parameter takes effect only when **StickySessionEnabled** is **true**.
                     * 
                     */
                    void SetCookieTimeout(const int64_t& _cookieTimeout);

                    /**
                     * 判断参数 CookieTimeout 是否已赋值
                     * @return CookieTimeout 是否已赋值
                     * 
                     */
                    bool CookieTimeoutHasBeenSet() const;

                    /**
                     * 获取Session persistence type (the way cookies are handled).
- **Insert** (default value): Embed a Cookie. When a client accesses the backend service for the first time, the application CLB will embed a Cookie in the Return Request. The next time the client carries this Cookie in a request, load balancing will forward the request to the same backend service as last time.
- **Rewrite**: Rewrite the Cookie. Load balancing rewrites the user-defined Cookie. The next client request carries the Cookie, and load balancing forwards the request to the same backend service as the last request.
>This parameter takes effect only when **StickySessionEnabled** is **true**.
                     * @return StickySessionType Session persistence type (the way cookies are handled).
- **Insert** (default value): Embed a Cookie. When a client accesses the backend service for the first time, the application CLB will embed a Cookie in the Return Request. The next time the client carries this Cookie in a request, load balancing will forward the request to the same backend service as last time.
- **Rewrite**: Rewrite the Cookie. Load balancing rewrites the user-defined Cookie. The next client request carries the Cookie, and load balancing forwards the request to the same backend service as the last request.
>This parameter takes effect only when **StickySessionEnabled** is **true**.
                     * 
                     */
                    std::string GetStickySessionType() const;

                    /**
                     * 设置Session persistence type (the way cookies are handled).
- **Insert** (default value): Embed a Cookie. When a client accesses the backend service for the first time, the application CLB will embed a Cookie in the Return Request. The next time the client carries this Cookie in a request, load balancing will forward the request to the same backend service as last time.
- **Rewrite**: Rewrite the Cookie. Load balancing rewrites the user-defined Cookie. The next client request carries the Cookie, and load balancing forwards the request to the same backend service as the last request.
>This parameter takes effect only when **StickySessionEnabled** is **true**.
                     * @param _stickySessionType Session persistence type (the way cookies are handled).
- **Insert** (default value): Embed a Cookie. When a client accesses the backend service for the first time, the application CLB will embed a Cookie in the Return Request. The next time the client carries this Cookie in a request, load balancing will forward the request to the same backend service as last time.
- **Rewrite**: Rewrite the Cookie. Load balancing rewrites the user-defined Cookie. The next client request carries the Cookie, and load balancing forwards the request to the same backend service as the last request.
>This parameter takes effect only when **StickySessionEnabled** is **true**.
                     * 
                     */
                    void SetStickySessionType(const std::string& _stickySessionType);

                    /**
                     * 判断参数 StickySessionType 是否已赋值
                     * @return StickySessionType 是否已赋值
                     * 
                     */
                    bool StickySessionTypeHasBeenSet() const;

                private:

                    /**
                     * Whether to enable session persistence.
- **true**: enabled.
- **false**: not enabled.
                     */
                    bool m_stickySessionEnabled;
                    bool m_stickySessionEnabledHasBeenSet;

                    /**
                     * Custom Cookie name.
Length: 1-255 characters. It can only contain English letters and digits, and cannot be `tgw_l7_tg_route`. This field is a reserved field for the session persistence Cookie between target groups.
>This parameter takes effect only when **StickySessionEnabled** is **true**.
                     */
                    std::string m_cookie;
                    bool m_cookieHasBeenSet;

                    /**
                     * Session hold time.
Value range: **1-86400**. Unit: **seconds**.
Default value: **1000**.
>This parameter takes effect only when **StickySessionEnabled** is **true**.
                     */
                    int64_t m_cookieTimeout;
                    bool m_cookieTimeoutHasBeenSet;

                    /**
                     * Session persistence type (the way cookies are handled).
- **Insert** (default value): Embed a Cookie. When a client accesses the backend service for the first time, the application CLB will embed a Cookie in the Return Request. The next time the client carries this Cookie in a request, load balancing will forward the request to the same backend service as last time.
- **Rewrite**: Rewrite the Cookie. Load balancing rewrites the user-defined Cookie. The next client request carries the Cookie, and load balancing forwards the request to the same backend service as the last request.
>This parameter takes effect only when **StickySessionEnabled** is **true**.
                     */
                    std::string m_stickySessionType;
                    bool m_stickySessionTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_STICKYSESSIONCONFIG_H_
