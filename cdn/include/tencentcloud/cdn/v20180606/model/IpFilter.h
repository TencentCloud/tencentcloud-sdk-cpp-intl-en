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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_IPFILTER_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_IPFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/IpFilterPathRule.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * IP blocklist/allowlist configuration. This is disabled by default.
                */
                class IpFilter : public AbstractModel
                {
                public:
                    IpFilter();
                    ~IpFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IP blocklist/allowlist configuration switch
`on`: Enable
`off`: Disable
                     * @return Switch IP blocklist/allowlist configuration switch
`on`: Enable
`off`: Disable
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置IP blocklist/allowlist configuration switch
`on`: Enable
`off`: Disable
                     * @param Switch IP blocklist/allowlist configuration switch
`on`: Enable
`off`: Disable
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取IP blocklist/allowlist type
`whitelist`: IP allowlist
`blacklist`: IP blocklist
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return FilterType IP blocklist/allowlist type
`whitelist`: IP allowlist
`blacklist`: IP blocklist
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetFilterType() const;

                    /**
                     * 设置IP blocklist/allowlist type
`whitelist`: IP allowlist
`blacklist`: IP blocklist
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param FilterType IP blocklist/allowlist type
`whitelist`: IP allowlist
`blacklist`: IP blocklist
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetFilterType(const std::string& _filterType);

                    /**
                     * 判断参数 FilterType 是否已赋值
                     * @return FilterType 是否已赋值
                     */
                    bool FilterTypeHasBeenSet() const;

                    /**
                     * 获取IP blocklist/allowlist
Supports IPs in X.X.X.X format, or IP ranges in /8, /16, /24 format.
Up to 50 whitelists or blacklists can be entered
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Filters IP blocklist/allowlist
Supports IPs in X.X.X.X format, or IP ranges in /8, /16, /24 format.
Up to 50 whitelists or blacklists can be entered
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> GetFilters() const;

                    /**
                     * 设置IP blocklist/allowlist
Supports IPs in X.X.X.X format, or IP ranges in /8, /16, /24 format.
Up to 50 whitelists or blacklists can be entered
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param Filters IP blocklist/allowlist
Supports IPs in X.X.X.X format, or IP ranges in /8, /16, /24 format.
Up to 50 whitelists or blacklists can be entered
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetFilters(const std::vector<std::string>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取IP blocklist/allowlist path-based configuration. This feature is only available to selected beta customers.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return FilterRules IP blocklist/allowlist path-based configuration. This feature is only available to selected beta customers.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<IpFilterPathRule> GetFilterRules() const;

                    /**
                     * 设置IP blocklist/allowlist path-based configuration. This feature is only available to selected beta customers.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param FilterRules IP blocklist/allowlist path-based configuration. This feature is only available to selected beta customers.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetFilterRules(const std::vector<IpFilterPathRule>& _filterRules);

                    /**
                     * 判断参数 FilterRules 是否已赋值
                     * @return FilterRules 是否已赋值
                     */
                    bool FilterRulesHasBeenSet() const;

                    /**
                     * 获取HTTP code returned when the IP allowlist/blocklist verification fails
Valid values: 400-499
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return ReturnCode HTTP code returned when the IP allowlist/blocklist verification fails
Valid values: 400-499
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t GetReturnCode() const;

                    /**
                     * 设置HTTP code returned when the IP allowlist/blocklist verification fails
Valid values: 400-499
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param ReturnCode HTTP code returned when the IP allowlist/blocklist verification fails
Valid values: 400-499
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetReturnCode(const int64_t& _returnCode);

                    /**
                     * 判断参数 ReturnCode 是否已赋值
                     * @return ReturnCode 是否已赋值
                     */
                    bool ReturnCodeHasBeenSet() const;

                private:

                    /**
                     * IP blocklist/allowlist configuration switch
`on`: Enable
`off`: Disable
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * IP blocklist/allowlist type
`whitelist`: IP allowlist
`blacklist`: IP blocklist
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_filterType;
                    bool m_filterTypeHasBeenSet;

                    /**
                     * IP blocklist/allowlist
Supports IPs in X.X.X.X format, or IP ranges in /8, /16, /24 format.
Up to 50 whitelists or blacklists can be entered
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * IP blocklist/allowlist path-based configuration. This feature is only available to selected beta customers.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<IpFilterPathRule> m_filterRules;
                    bool m_filterRulesHasBeenSet;

                    /**
                     * HTTP code returned when the IP allowlist/blocklist verification fails
Valid values: 400-499
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t m_returnCode;
                    bool m_returnCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_IPFILTER_H_
