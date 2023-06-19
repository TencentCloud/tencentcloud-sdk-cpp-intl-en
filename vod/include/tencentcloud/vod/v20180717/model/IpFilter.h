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
                     * 获取IP blocklist/allowlist configuration switch :<li>on：Enable;</li> <li>off：Disable.</li>
                     * @return Switch IP blocklist/allowlist configuration switch :<li>on：Enable;</li> <li>off：Disable.</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置IP blocklist/allowlist configuration switch :<li>on：Enable;</li> <li>off：Disable.</li>
                     * @param _switch IP blocklist/allowlist configuration switch :<li>on：Enable;</li> <li>off：Disable.</li>
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
                     * 获取IP blocklist/allowlist type <li>whitelist: IP allowlist;</li> <li>blacklist:IP blocklist.</li>
                     * @return FilterType IP blocklist/allowlist type <li>whitelist: IP allowlist;</li> <li>blacklist:IP blocklist.</li>
                     * 
                     */
                    std::string GetFilterType() const;

                    /**
                     * 设置IP blocklist/allowlist type <li>whitelist: IP allowlist;</li> <li>blacklist:IP blocklist.</li>
                     * @param _filterType IP blocklist/allowlist type <li>whitelist: IP allowlist;</li> <li>blacklist:IP blocklist.</li>
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
                     * 获取IP blocklist/allowlist Supports IPs in X.X.X.X format, or IP ranges in /8, /16, /24 format. Up to 50 whitelists or blacklists can be entered
                     * @return Filters IP blocklist/allowlist Supports IPs in X.X.X.X format, or IP ranges in /8, /16, /24 format. Up to 50 whitelists or blacklists can be entered
                     * 
                     */
                    std::vector<std::string> GetFilters() const;

                    /**
                     * 设置IP blocklist/allowlist Supports IPs in X.X.X.X format, or IP ranges in /8, /16, /24 format. Up to 50 whitelists or blacklists can be entered
                     * @param _filters IP blocklist/allowlist Supports IPs in X.X.X.X format, or IP ranges in /8, /16, /24 format. Up to 50 whitelists or blacklists can be entered
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
                     * 获取IP blocklist/allowlist path-based configuration. This feature is only available to selected beta customers.
                     * @return FilterRules IP blocklist/allowlist path-based configuration. This feature is only available to selected beta customers.
                     * 
                     */
                    std::vector<IpFilterPathRule> GetFilterRules() const;

                    /**
                     * 设置IP blocklist/allowlist path-based configuration. This feature is only available to selected beta customers.
                     * @param _filterRules IP blocklist/allowlist path-based configuration. This feature is only available to selected beta customers.
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
                     * IP blocklist/allowlist configuration switch :<li>on：Enable;</li> <li>off：Disable.</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * IP blocklist/allowlist type <li>whitelist: IP allowlist;</li> <li>blacklist:IP blocklist.</li>
                     */
                    std::string m_filterType;
                    bool m_filterTypeHasBeenSet;

                    /**
                     * IP blocklist/allowlist Supports IPs in X.X.X.X format, or IP ranges in /8, /16, /24 format. Up to 50 whitelists or blacklists can be entered
                     */
                    std::vector<std::string> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * IP blocklist/allowlist path-based configuration. This feature is only available to selected beta customers.
                     */
                    std::vector<IpFilterPathRule> m_filterRules;
                    bool m_filterRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_IPFILTER_H_
