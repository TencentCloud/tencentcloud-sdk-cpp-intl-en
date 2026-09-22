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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_IPFILTER_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_IPFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/IpFilterPathRule.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * IP allowlist/blocklist configuration, disabled by default
                */
                class IpFilter : public AbstractModel
                {
                public:
                    IpFilter();
                    ~IpFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IP allowlist/blocklist configuration switch. Parameter value:
<li>`on`: Enable;</li>
<li>`off`: Cache.</li>
                     * @return Switch IP allowlist/blocklist configuration switch. Parameter value:
<li>`on`: Enable;</li>
<li>`off`: Cache.</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置IP allowlist/blocklist configuration switch. Parameter value:
<li>`on`: Enable;</li>
<li>`off`: Cache.</li>
                     * @param _switch IP allowlist/blocklist configuration switch. Parameter value:
<li>`on`: Enable;</li>
<li>`off`: Cache.</li>
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
                     * 获取IP allowlist/blocklist type:
<li>whitelist: allowlist;</li>
<li>blocklist: Blocklist.</li>
                     * @return FilterType IP allowlist/blocklist type:
<li>whitelist: allowlist;</li>
<li>blocklist: Blocklist.</li>
                     * 
                     */
                    std::string GetFilterType() const;

                    /**
                     * 设置IP allowlist/blocklist type:
<li>whitelist: allowlist;</li>
<li>blocklist: Blocklist.</li>
                     * @param _filterType IP allowlist/blocklist type:
<li>whitelist: allowlist;</li>
<li>blocklist: Blocklist.</li>
                     * 
                     */
                    void SetFilterType(const std::string& _filterType);

                    /**
                     * 判断参数 FilterType 是否已赋值
                     * @return FilterType 是否已赋值
                     * 
                     */
                    bool FilterTypeHasBeenSet() const;

                    /**
                     * 获取IP blocklist and allowlist. Supports IPs in the X.X.X.X format or network segments in the /8, /16, or /24 format.
You can fill up to 50 allowlist entries or 50 blocklist entries.
                     * @return Filters IP blocklist and allowlist. Supports IPs in the X.X.X.X format or network segments in the /8, /16, or /24 format.
You can fill up to 50 allowlist entries or 50 blocklist entries.
                     * 
                     */
                    std::vector<std::string> GetFilters() const;

                    /**
                     * 设置IP blocklist and allowlist. Supports IPs in the X.X.X.X format or network segments in the /8, /16, or /24 format.
You can fill up to 50 allowlist entries or 50 blocklist entries.
                     * @param _filters IP blocklist and allowlist. Supports IPs in the X.X.X.X format or network segments in the /8, /16, or /24 format.
You can fill up to 50 allowlist entries or 50 blocklist entries.
                     * 
                     */
                    void SetFilters(const std::vector<std::string>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取IP blocklist/allowlist path-specific configuration.
                     * @return FilterRules IP blocklist/allowlist path-specific configuration.
                     * 
                     */
                    std::vector<IpFilterPathRule> GetFilterRules() const;

                    /**
                     * 设置IP blocklist/allowlist path-specific configuration.
                     * @param _filterRules IP blocklist/allowlist path-specific configuration.
                     * 
                     */
                    void SetFilterRules(const std::vector<IpFilterPathRule>& _filterRules);

                    /**
                     * 判断参数 FilterRules 是否已赋值
                     * @return FilterRules 是否已赋值
                     * 
                     */
                    bool FilterRulesHasBeenSet() const;

                private:

                    /**
                     * IP allowlist/blocklist configuration switch. Parameter value:
<li>`on`: Enable;</li>
<li>`off`: Cache.</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * IP allowlist/blocklist type:
<li>whitelist: allowlist;</li>
<li>blocklist: Blocklist.</li>
                     */
                    std::string m_filterType;
                    bool m_filterTypeHasBeenSet;

                    /**
                     * IP blocklist and allowlist. Supports IPs in the X.X.X.X format or network segments in the /8, /16, or /24 format.
You can fill up to 50 allowlist entries or 50 blocklist entries.
                     */
                    std::vector<std::string> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * IP blocklist/allowlist path-specific configuration.
                     */
                    std::vector<IpFilterPathRule> m_filterRules;
                    bool m_filterRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_IPFILTER_H_
