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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_URLREDIRECTRULE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_URLREDIRECTRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * URL redirect rule configuration
                */
                class UrlRedirectRule : public AbstractModel
                {
                public:
                    UrlRedirectRule();
                    ~UrlRedirectRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Redirect status code. Valid values: 301, 302
                     * @return RedirectStatusCode Redirect status code. Valid values: 301, 302
                     */
                    int64_t GetRedirectStatusCode() const;

                    /**
                     * 设置Redirect status code. Valid values: 301, 302
                     * @param RedirectStatusCode Redirect status code. Valid values: 301, 302
                     */
                    void SetRedirectStatusCode(const int64_t& _redirectStatusCode);

                    /**
                     * 判断参数 RedirectStatusCode 是否已赋值
                     * @return RedirectStatusCode 是否已赋值
                     */
                    bool RedirectStatusCodeHasBeenSet() const;

                    /**
                     * 获取URL to be matched. Only URLs are supported, while parameters are not. The exact match is used by default. In regex match, up to 5 wildcards `*` are supported. The URL can contain up to 1,024 characters.
                     * @return Pattern URL to be matched. Only URLs are supported, while parameters are not. The exact match is used by default. In regex match, up to 5 wildcards `*` are supported. The URL can contain up to 1,024 characters.
                     */
                    std::string GetPattern() const;

                    /**
                     * 设置URL to be matched. Only URLs are supported, while parameters are not. The exact match is used by default. In regex match, up to 5 wildcards `*` are supported. The URL can contain up to 1,024 characters.
                     * @param Pattern URL to be matched. Only URLs are supported, while parameters are not. The exact match is used by default. In regex match, up to 5 wildcards `*` are supported. The URL can contain up to 1,024 characters.
                     */
                    void SetPattern(const std::string& _pattern);

                    /**
                     * 判断参数 Pattern 是否已赋值
                     * @return Pattern 是否已赋值
                     */
                    bool PatternHasBeenSet() const;

                    /**
                     * 获取Target URL, starting with `/` and excluding parameters. The path can contain up to 1,024 characters. The wildcards in the matching path can be respectively captured using `$1`, `$2`, `$3`, `$4`, and `$5`. Up to 10 values can be captured.
                     * @return RedirectUrl Target URL, starting with `/` and excluding parameters. The path can contain up to 1,024 characters. The wildcards in the matching path can be respectively captured using `$1`, `$2`, `$3`, `$4`, and `$5`. Up to 10 values can be captured.
                     */
                    std::string GetRedirectUrl() const;

                    /**
                     * 设置Target URL, starting with `/` and excluding parameters. The path can contain up to 1,024 characters. The wildcards in the matching path can be respectively captured using `$1`, `$2`, `$3`, `$4`, and `$5`. Up to 10 values can be captured.
                     * @param RedirectUrl Target URL, starting with `/` and excluding parameters. The path can contain up to 1,024 characters. The wildcards in the matching path can be respectively captured using `$1`, `$2`, `$3`, `$4`, and `$5`. Up to 10 values can be captured.
                     */
                    void SetRedirectUrl(const std::string& _redirectUrl);

                    /**
                     * 判断参数 RedirectUrl 是否已赋值
                     * @return RedirectUrl 是否已赋值
                     */
                    bool RedirectUrlHasBeenSet() const;

                    /**
                     * 获取Target host. It should be a standard domain name starting with `http://` or `https://`. If it is left empty, “http://[current domain name]” will be used by default.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return RedirectHost Target host. It should be a standard domain name starting with `http://` or `https://`. If it is left empty, “http://[current domain name]” will be used by default.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetRedirectHost() const;

                    /**
                     * 设置Target host. It should be a standard domain name starting with `http://` or `https://`. If it is left empty, “http://[current domain name]” will be used by default.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param RedirectHost Target host. It should be a standard domain name starting with `http://` or `https://`. If it is left empty, “http://[current domain name]” will be used by default.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetRedirectHost(const std::string& _redirectHost);

                    /**
                     * 判断参数 RedirectHost 是否已赋值
                     * @return RedirectHost 是否已赋值
                     */
                    bool RedirectHostHasBeenSet() const;

                    /**
                     * 获取Whether to use full-path matching or arbitrary matching
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return FullMatch Whether to use full-path matching or arbitrary matching
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool GetFullMatch() const;

                    /**
                     * 设置Whether to use full-path matching or arbitrary matching
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param FullMatch Whether to use full-path matching or arbitrary matching
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetFullMatch(const bool& _fullMatch);

                    /**
                     * 判断参数 FullMatch 是否已赋值
                     * @return FullMatch 是否已赋值
                     */
                    bool FullMatchHasBeenSet() const;

                private:

                    /**
                     * Redirect status code. Valid values: 301, 302
                     */
                    int64_t m_redirectStatusCode;
                    bool m_redirectStatusCodeHasBeenSet;

                    /**
                     * URL to be matched. Only URLs are supported, while parameters are not. The exact match is used by default. In regex match, up to 5 wildcards `*` are supported. The URL can contain up to 1,024 characters.
                     */
                    std::string m_pattern;
                    bool m_patternHasBeenSet;

                    /**
                     * Target URL, starting with `/` and excluding parameters. The path can contain up to 1,024 characters. The wildcards in the matching path can be respectively captured using `$1`, `$2`, `$3`, `$4`, and `$5`. Up to 10 values can be captured.
                     */
                    std::string m_redirectUrl;
                    bool m_redirectUrlHasBeenSet;

                    /**
                     * Target host. It should be a standard domain name starting with `http://` or `https://`. If it is left empty, “http://[current domain name]” will be used by default.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_redirectHost;
                    bool m_redirectHostHasBeenSet;

                    /**
                     * Whether to use full-path matching or arbitrary matching
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool m_fullMatch;
                    bool m_fullMatchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_URLREDIRECTRULE_H_
