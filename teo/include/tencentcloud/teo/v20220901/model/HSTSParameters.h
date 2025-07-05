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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_HSTSPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_HSTSPARAMETERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * HSTS configuration parameters.
                */
                class HSTSParameters : public AbstractModel
                {
                public:
                    HSTSParameters();
                    ~HSTSParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable hsts. values:.
<Li>`On`: enable;</li>
.
<Li>Off: disable.</li>.
                     * @return Switch Whether to enable hsts. values:.
<Li>`On`: enable;</li>
.
<Li>Off: disable.</li>.
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to enable hsts. values:.
<Li>`On`: enable;</li>
.
<Li>Off: disable.</li>.
                     * @param _switch Whether to enable hsts. values:.
<Li>`On`: enable;</li>
.
<Li>Off: disable.</li>.
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
                     * 获取Cache hsts header time, unit: seconds. value range: 1-31536000.<br>note: this field is required when switch is on; when switch is off, this field is not required and will not take effect if filled.
                     * @return Timeout Cache hsts header time, unit: seconds. value range: 1-31536000.<br>note: this field is required when switch is on; when switch is off, this field is not required and will not take effect if filled.
                     * 
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置Cache hsts header time, unit: seconds. value range: 1-31536000.<br>note: this field is required when switch is on; when switch is off, this field is not required and will not take effect if filled.
                     * @param _timeout Cache hsts header time, unit: seconds. value range: 1-31536000.<br>note: this field is required when switch is on; when switch is off, this field is not required and will not take effect if filled.
                     * 
                     */
                    void SetTimeout(const int64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取Whether to allow other subdomains to inherit the same hsts header. values:.
<Li>On: allows other subdomains to inherit the same hsts header.</li>.
<Li>Off: does not allow other subdomains to inherit the same hsts header.</li> note: when switch is on, this field is required; when switch is off, this field is not required and will not take effect if filled.
                     * @return IncludeSubDomains Whether to allow other subdomains to inherit the same hsts header. values:.
<Li>On: allows other subdomains to inherit the same hsts header.</li>.
<Li>Off: does not allow other subdomains to inherit the same hsts header.</li> note: when switch is on, this field is required; when switch is off, this field is not required and will not take effect if filled.
                     * 
                     */
                    std::string GetIncludeSubDomains() const;

                    /**
                     * 设置Whether to allow other subdomains to inherit the same hsts header. values:.
<Li>On: allows other subdomains to inherit the same hsts header.</li>.
<Li>Off: does not allow other subdomains to inherit the same hsts header.</li> note: when switch is on, this field is required; when switch is off, this field is not required and will not take effect if filled.
                     * @param _includeSubDomains Whether to allow other subdomains to inherit the same hsts header. values:.
<Li>On: allows other subdomains to inherit the same hsts header.</li>.
<Li>Off: does not allow other subdomains to inherit the same hsts header.</li> note: when switch is on, this field is required; when switch is off, this field is not required and will not take effect if filled.
                     * 
                     */
                    void SetIncludeSubDomains(const std::string& _includeSubDomains);

                    /**
                     * 判断参数 IncludeSubDomains 是否已赋值
                     * @return IncludeSubDomains 是否已赋值
                     * 
                     */
                    bool IncludeSubDomainsHasBeenSet() const;

                    /**
                     * 获取Whether to allow the browser to preload the hsts header. valid values:.
<Li>On: allows the browser to preload the hsts header.</li>.
<Li>Off: does not allow the browser to preload the hsts header.</li> note: when switch is on, this field is required; when switch is off, this field is not required and will not take effect if filled.
                     * @return Preload Whether to allow the browser to preload the hsts header. valid values:.
<Li>On: allows the browser to preload the hsts header.</li>.
<Li>Off: does not allow the browser to preload the hsts header.</li> note: when switch is on, this field is required; when switch is off, this field is not required and will not take effect if filled.
                     * 
                     */
                    std::string GetPreload() const;

                    /**
                     * 设置Whether to allow the browser to preload the hsts header. valid values:.
<Li>On: allows the browser to preload the hsts header.</li>.
<Li>Off: does not allow the browser to preload the hsts header.</li> note: when switch is on, this field is required; when switch is off, this field is not required and will not take effect if filled.
                     * @param _preload Whether to allow the browser to preload the hsts header. valid values:.
<Li>On: allows the browser to preload the hsts header.</li>.
<Li>Off: does not allow the browser to preload the hsts header.</li> note: when switch is on, this field is required; when switch is off, this field is not required and will not take effect if filled.
                     * 
                     */
                    void SetPreload(const std::string& _preload);

                    /**
                     * 判断参数 Preload 是否已赋值
                     * @return Preload 是否已赋值
                     * 
                     */
                    bool PreloadHasBeenSet() const;

                private:

                    /**
                     * Whether to enable hsts. values:.
<Li>`On`: enable;</li>
.
<Li>Off: disable.</li>.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Cache hsts header time, unit: seconds. value range: 1-31536000.<br>note: this field is required when switch is on; when switch is off, this field is not required and will not take effect if filled.
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * Whether to allow other subdomains to inherit the same hsts header. values:.
<Li>On: allows other subdomains to inherit the same hsts header.</li>.
<Li>Off: does not allow other subdomains to inherit the same hsts header.</li> note: when switch is on, this field is required; when switch is off, this field is not required and will not take effect if filled.
                     */
                    std::string m_includeSubDomains;
                    bool m_includeSubDomainsHasBeenSet;

                    /**
                     * Whether to allow the browser to preload the hsts header. valid values:.
<Li>On: allows the browser to preload the hsts header.</li>.
<Li>Off: does not allow the browser to preload the hsts header.</li> note: when switch is on, this field is required; when switch is off, this field is not required and will not take effect if filled.
                     */
                    std::string m_preload;
                    bool m_preloadHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_HSTSPARAMETERS_H_
