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
                     * 获取HSTS configuration switch. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
                     * @return Switch HSTS configuration switch. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置HSTS configuration switch. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
                     * @param _switch HSTS configuration switch. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
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
                     * 获取Cache HSTS header time in seconds. Value range: 1-31536000.<br>Note: This field is required when Switch is on. When Switch is off, no need to specify this field, and it does not take effect if specified.
                     * @return Timeout Cache HSTS header time in seconds. Value range: 1-31536000.<br>Note: This field is required when Switch is on. When Switch is off, no need to specify this field, and it does not take effect if specified.
                     * 
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置Cache HSTS header time in seconds. Value range: 1-31536000.<br>Note: This field is required when Switch is on. When Switch is off, no need to specify this field, and it does not take effect if specified.
                     * @param _timeout Cache HSTS header time in seconds. Value range: 1-31536000.<br>Note: This field is required when Switch is on. When Switch is off, no need to specify this field, and it does not take effect if specified.
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
                     * 获取Whether other subdomains are allowed to inherit the same HSTS header. Valid values:
<li>on: Allow other subdomains to inherit the same HSTS header;</li>
<li>off: Other subdomains cannot inherit the same HSTS header.</li>Note: This field is required when Switch is on. When Switch is off, no need to specify this field, and it does not take effect if specified.
                     * @return IncludeSubDomains Whether other subdomains are allowed to inherit the same HSTS header. Valid values:
<li>on: Allow other subdomains to inherit the same HSTS header;</li>
<li>off: Other subdomains cannot inherit the same HSTS header.</li>Note: This field is required when Switch is on. When Switch is off, no need to specify this field, and it does not take effect if specified.
                     * 
                     */
                    std::string GetIncludeSubDomains() const;

                    /**
                     * 设置Whether other subdomains are allowed to inherit the same HSTS header. Valid values:
<li>on: Allow other subdomains to inherit the same HSTS header;</li>
<li>off: Other subdomains cannot inherit the same HSTS header.</li>Note: This field is required when Switch is on. When Switch is off, no need to specify this field, and it does not take effect if specified.
                     * @param _includeSubDomains Whether other subdomains are allowed to inherit the same HSTS header. Valid values:
<li>on: Allow other subdomains to inherit the same HSTS header;</li>
<li>off: Other subdomains cannot inherit the same HSTS header.</li>Note: This field is required when Switch is on. When Switch is off, no need to specify this field, and it does not take effect if specified.
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
                     * 获取Whether the browser is allowed to preload the HSTS header. Valid values:
<li>on: Allow the browser to preload the HSTS header;</li>
<li>off: The browser is not allowed to preload the HSTS header.</li>Note: This field is required when Switch is on. When Switch is off, no need to specify this field, and it does not take effect if specified.
                     * @return Preload Whether the browser is allowed to preload the HSTS header. Valid values:
<li>on: Allow the browser to preload the HSTS header;</li>
<li>off: The browser is not allowed to preload the HSTS header.</li>Note: This field is required when Switch is on. When Switch is off, no need to specify this field, and it does not take effect if specified.
                     * 
                     */
                    std::string GetPreload() const;

                    /**
                     * 设置Whether the browser is allowed to preload the HSTS header. Valid values:
<li>on: Allow the browser to preload the HSTS header;</li>
<li>off: The browser is not allowed to preload the HSTS header.</li>Note: This field is required when Switch is on. When Switch is off, no need to specify this field, and it does not take effect if specified.
                     * @param _preload Whether the browser is allowed to preload the HSTS header. Valid values:
<li>on: Allow the browser to preload the HSTS header;</li>
<li>off: The browser is not allowed to preload the HSTS header.</li>Note: This field is required when Switch is on. When Switch is off, no need to specify this field, and it does not take effect if specified.
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
                     * HSTS configuration switch. Valid values:
<li>`on`: Enable;</li>
<li>off: Disable.</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Cache HSTS header time in seconds. Value range: 1-31536000.<br>Note: This field is required when Switch is on. When Switch is off, no need to specify this field, and it does not take effect if specified.
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * Whether other subdomains are allowed to inherit the same HSTS header. Valid values:
<li>on: Allow other subdomains to inherit the same HSTS header;</li>
<li>off: Other subdomains cannot inherit the same HSTS header.</li>Note: This field is required when Switch is on. When Switch is off, no need to specify this field, and it does not take effect if specified.
                     */
                    std::string m_includeSubDomains;
                    bool m_includeSubDomainsHasBeenSet;

                    /**
                     * Whether the browser is allowed to preload the HSTS header. Valid values:
<li>on: Allow the browser to preload the HSTS header;</li>
<li>off: The browser is not allowed to preload the HSTS header.</li>Note: This field is required when Switch is on. When Switch is off, no need to specify this field, and it does not take effect if specified.
                     */
                    std::string m_preload;
                    bool m_preloadHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_HSTSPARAMETERS_H_
