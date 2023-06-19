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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_IPFILTERPATHRULE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_IPFILTERPATHRULE_H_

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
                * IP blocklist/allowlist path-based configuration
                */
                class IpFilterPathRule : public AbstractModel
                {
                public:
                    IpFilterPathRule();
                    ~IpFilterPathRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IP blocklist/allowlist type: <li>whitelist: allowlist IPs;</li> <li>blacklist: blocklist IPs.</li>
                     * @return FilterType IP blocklist/allowlist type: <li>whitelist: allowlist IPs;</li> <li>blacklist: blocklist IPs.</li>
                     * 
                     */
                    std::string GetFilterType() const;

                    /**
                     * 设置IP blocklist/allowlist type: <li>whitelist: allowlist IPs;</li> <li>blacklist: blocklist IPs.</li>
                     * @param _filterType IP blocklist/allowlist type: <li>whitelist: allowlist IPs;</li> <li>blacklist: blocklist IPs.</li>
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
                     * 获取IP blocklist/allowlist list Supports IPs in X.X.X.X format, or /8, /16, /24 format IP ranges. Up to 50 allowlists or blocklists can be entered.
                     * @return Filters IP blocklist/allowlist list Supports IPs in X.X.X.X format, or /8, /16, /24 format IP ranges. Up to 50 allowlists or blocklists can be entered.
                     * 
                     */
                    std::vector<std::string> GetFilters() const;

                    /**
                     * 设置IP blocklist/allowlist list Supports IPs in X.X.X.X format, or /8, /16, /24 format IP ranges. Up to 50 allowlists or blocklists can be entered.
                     * @param _filters IP blocklist/allowlist list Supports IPs in X.X.X.X format, or /8, /16, /24 format IP ranges. Up to 50 allowlists or blocklists can be entered.
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
                     * 获取Rule types: <li>all: Effective for all files;</li> <li>file: Effective for specified file suffixes;</li> <li>directory: Effective for specified paths;</li> <li>path: Effective for specified absolute paths.</li>
                     * @return RuleType Rule types: <li>all: Effective for all files;</li> <li>file: Effective for specified file suffixes;</li> <li>directory: Effective for specified paths;</li> <li>path: Effective for specified absolute paths.</li>
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置Rule types: <li>all: Effective for all files;</li> <li>file: Effective for specified file suffixes;</li> <li>directory: Effective for specified paths;</li> <li>path: Effective for specified absolute paths.</li>
                     * @param _ruleType Rule types: <li>all: Effective for all files;</li> <li>file: Effective for specified file suffixes;</li> <li>directory: Effective for specified paths;</li> <li>path: Effective for specified absolute paths.</li>
                     * 
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取Content for each RuleType: <li>For all, enter an asterisk (*).</li> <li>For file, enter the suffix, such as jpg, txt.</li> <li>For directory, enter the path, such as /xxx/test/.</li> <li>For path, enter the corresponding absolute path, such as /xxx/test.html.</li>
                     * @return RulePaths Content for each RuleType: <li>For all, enter an asterisk (*).</li> <li>For file, enter the suffix, such as jpg, txt.</li> <li>For directory, enter the path, such as /xxx/test/.</li> <li>For path, enter the corresponding absolute path, such as /xxx/test.html.</li>
                     * 
                     */
                    std::vector<std::string> GetRulePaths() const;

                    /**
                     * 设置Content for each RuleType: <li>For all, enter an asterisk (*).</li> <li>For file, enter the suffix, such as jpg, txt.</li> <li>For directory, enter the path, such as /xxx/test/.</li> <li>For path, enter the corresponding absolute path, such as /xxx/test.html.</li>
                     * @param _rulePaths Content for each RuleType: <li>For all, enter an asterisk (*).</li> <li>For file, enter the suffix, such as jpg, txt.</li> <li>For directory, enter the path, such as /xxx/test/.</li> <li>For path, enter the corresponding absolute path, such as /xxx/test.html.</li>
                     * 
                     */
                    void SetRulePaths(const std::vector<std::string>& _rulePaths);

                    /**
                     * 判断参数 RulePaths 是否已赋值
                     * @return RulePaths 是否已赋值
                     * 
                     */
                    bool RulePathsHasBeenSet() const;

                private:

                    /**
                     * IP blocklist/allowlist type: <li>whitelist: allowlist IPs;</li> <li>blacklist: blocklist IPs.</li>
                     */
                    std::string m_filterType;
                    bool m_filterTypeHasBeenSet;

                    /**
                     * IP blocklist/allowlist list Supports IPs in X.X.X.X format, or /8, /16, /24 format IP ranges. Up to 50 allowlists or blocklists can be entered.
                     */
                    std::vector<std::string> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Rule types: <li>all: Effective for all files;</li> <li>file: Effective for specified file suffixes;</li> <li>directory: Effective for specified paths;</li> <li>path: Effective for specified absolute paths.</li>
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * Content for each RuleType: <li>For all, enter an asterisk (*).</li> <li>For file, enter the suffix, such as jpg, txt.</li> <li>For directory, enter the path, such as /xxx/test/.</li> <li>For path, enter the corresponding absolute path, such as /xxx/test.html.</li>
                     */
                    std::vector<std::string> m_rulePaths;
                    bool m_rulePathsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_IPFILTERPATHRULE_H_
