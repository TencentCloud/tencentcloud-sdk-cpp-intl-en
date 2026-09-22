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
                * IP allowlist/blocklist path-specific configuration
                */
                class IpFilterPathRule : public AbstractModel
                {
                public:
                    IpFilterPathRule();
                    ~IpFilterPathRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取IP blocklist/allowlist list, supporting IPs in X.X.X.X format or network segments in /8, /16, or /24 format.
You can fill up to 50 allowlist entries or 50 blocklist entries.
                     * @return Filters IP blocklist/allowlist list, supporting IPs in X.X.X.X format or network segments in /8, /16, or /24 format.
You can fill up to 50 allowlist entries or 50 blocklist entries.
                     * 
                     */
                    std::vector<std::string> GetFilters() const;

                    /**
                     * 设置IP blocklist/allowlist list, supporting IPs in X.X.X.X format or network segments in /8, /16, or /24 format.
You can fill up to 50 allowlist entries or 50 blocklist entries.
                     * @param _filters IP blocklist/allowlist list, supporting IPs in X.X.X.X format or network segments in /8, /16, or /24 format.
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
                     * 获取Rule type:
<li>all: All files take effect;</li>
<li>file: The specified file suffix takes effect;</li>
<li>directory: The specified path takes effect;</li>
<li>path: The absolute path takes effect.</li>
                     * @return RuleType Rule type:
<li>all: All files take effect;</li>
<li>file: The specified file suffix takes effect;</li>
<li>directory: The specified path takes effect;</li>
<li>path: The absolute path takes effect.</li>
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置Rule type:
<li>all: All files take effect;</li>
<li>file: The specified file suffix takes effect;</li>
<li>directory: The specified path takes effect;</li>
<li>path: The absolute path takes effect.</li>
                     * @param _ruleType Rule type:
<li>all: All files take effect;</li>
<li>file: The specified file suffix takes effect;</li>
<li>directory: The specified path takes effect;</li>
<li>path: The absolute path takes effect.</li>
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
                     * 获取Matching content under the corresponding type of RuleType:
<li>Fill with * when set to all;</li>
<li>For file, fill in the extension, such as jpg or txt;</li>
<li>For directory, fill in the path, such as /xxx/test/;</li>
<li>For path, fill in the absolute path, such as /xxx/test.html.</li>
                     * @return RulePaths Matching content under the corresponding type of RuleType:
<li>Fill with * when set to all;</li>
<li>For file, fill in the extension, such as jpg or txt;</li>
<li>For directory, fill in the path, such as /xxx/test/;</li>
<li>For path, fill in the absolute path, such as /xxx/test.html.</li>
                     * 
                     */
                    std::vector<std::string> GetRulePaths() const;

                    /**
                     * 设置Matching content under the corresponding type of RuleType:
<li>Fill with * when set to all;</li>
<li>For file, fill in the extension, such as jpg or txt;</li>
<li>For directory, fill in the path, such as /xxx/test/;</li>
<li>For path, fill in the absolute path, such as /xxx/test.html.</li>
                     * @param _rulePaths Matching content under the corresponding type of RuleType:
<li>Fill with * when set to all;</li>
<li>For file, fill in the extension, such as jpg or txt;</li>
<li>For directory, fill in the path, such as /xxx/test/;</li>
<li>For path, fill in the absolute path, such as /xxx/test.html.</li>
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
                     * IP allowlist/blocklist type:
<li>whitelist: allowlist;</li>
<li>blocklist: Blocklist.</li>
                     */
                    std::string m_filterType;
                    bool m_filterTypeHasBeenSet;

                    /**
                     * IP blocklist/allowlist list, supporting IPs in X.X.X.X format or network segments in /8, /16, or /24 format.
You can fill up to 50 allowlist entries or 50 blocklist entries.
                     */
                    std::vector<std::string> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Rule type:
<li>all: All files take effect;</li>
<li>file: The specified file suffix takes effect;</li>
<li>directory: The specified path takes effect;</li>
<li>path: The absolute path takes effect.</li>
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * Matching content under the corresponding type of RuleType:
<li>Fill with * when set to all;</li>
<li>For file, fill in the extension, such as jpg or txt;</li>
<li>For directory, fill in the path, such as /xxx/test/;</li>
<li>For path, fill in the absolute path, such as /xxx/test.html.</li>
                     */
                    std::vector<std::string> m_rulePaths;
                    bool m_rulePathsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_IPFILTERPATHRULE_H_
