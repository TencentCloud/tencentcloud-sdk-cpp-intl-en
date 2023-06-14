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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_PATHRULE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_PATHRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/HttpHeaderRule.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * Path-based origin-pull configuration rules
                */
                class PathRule : public AbstractModel
                {
                public:
                    PathRule();
                    ~PathRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable wildcard match (`*`).
`false`: disabled
`true`: enabled
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @return Regex Whether to enable wildcard match (`*`).
`false`: disabled
`true`: enabled
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    bool GetRegex() const;

                    /**
                     * 设置Whether to enable wildcard match (`*`).
`false`: disabled
`true`: enabled
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * @param _regex Whether to enable wildcard match (`*`).
`false`: disabled
`true`: enabled
Note: this field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRegex(const bool& _regex);

                    /**
                     * 判断参数 Regex 是否已赋值
                     * @return Regex 是否已赋值
                     * 
                     */
                    bool RegexHasBeenSet() const;

                    /**
                     * 获取Matched URL. Only URLs are supported, while parameters are not. The exact match is used by default. If wildcard match is enabled, up to 5 wildcards are supported. The URL can contain up to 1,024 characters.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Path Matched URL. Only URLs are supported, while parameters are not. The exact match is used by default. If wildcard match is enabled, up to 5 wildcards are supported. The URL can contain up to 1,024 characters.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置Matched URL. Only URLs are supported, while parameters are not. The exact match is used by default. If wildcard match is enabled, up to 5 wildcards are supported. The URL can contain up to 1,024 characters.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _path Matched URL. Only URLs are supported, while parameters are not. The exact match is used by default. If wildcard match is enabled, up to 5 wildcards are supported. The URL can contain up to 1,024 characters.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取Origin server when the path matches. COS origin with private read/write is not supported. The default origin server will be used by default when this field is left empty.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Origin Origin server when the path matches. COS origin with private read/write is not supported. The default origin server will be used by default when this field is left empty.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOrigin() const;

                    /**
                     * 设置Origin server when the path matches. COS origin with private read/write is not supported. The default origin server will be used by default when this field is left empty.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _origin Origin server when the path matches. COS origin with private read/write is not supported. The default origin server will be used by default when this field is left empty.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOrigin(const std::string& _origin);

                    /**
                     * 判断参数 Origin 是否已赋值
                     * @return Origin 是否已赋值
                     * 
                     */
                    bool OriginHasBeenSet() const;

                    /**
                     * 获取Origin server host header when the path matches. The default `ServerName` will be used by default when this field is left empty.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ServerName Origin server host header when the path matches. The default `ServerName` will be used by default when this field is left empty.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetServerName() const;

                    /**
                     * 设置Origin server host header when the path matches. The default `ServerName` will be used by default when this field is left empty.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _serverName Origin server host header when the path matches. The default `ServerName` will be used by default when this field is left empty.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetServerName(const std::string& _serverName);

                    /**
                     * 判断参数 ServerName 是否已赋值
                     * @return ServerName 是否已赋值
                     * 
                     */
                    bool ServerNameHasBeenSet() const;

                    /**
                     * 获取Region of the origin server. Valid values: `CN` and `OV`.
`CN`: Within the Chinese mainland
`OV`: Outside the Chinese mainland
Default value: `CN`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return OriginArea Region of the origin server. Valid values: `CN` and `OV`.
`CN`: Within the Chinese mainland
`OV`: Outside the Chinese mainland
Default value: `CN`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOriginArea() const;

                    /**
                     * 设置Region of the origin server. Valid values: `CN` and `OV`.
`CN`: Within the Chinese mainland
`OV`: Outside the Chinese mainland
Default value: `CN`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _originArea Region of the origin server. Valid values: `CN` and `OV`.
`CN`: Within the Chinese mainland
`OV`: Outside the Chinese mainland
Default value: `CN`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOriginArea(const std::string& _originArea);

                    /**
                     * 判断参数 OriginArea 是否已赋值
                     * @return OriginArea 是否已赋值
                     * 
                     */
                    bool OriginAreaHasBeenSet() const;

                    /**
                     * 获取Origin server URI path when the path matches, starting with `/` and excluding parameters. The path can contain up to 1,024 characters. The wildcards in the match path can be respectively captured using `$1`, `$2`, `$3`, `$4`, and `$5`. Up to 10 values can be captured.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return ForwardUri Origin server URI path when the path matches, starting with `/` and excluding parameters. The path can contain up to 1,024 characters. The wildcards in the match path can be respectively captured using `$1`, `$2`, `$3`, `$4`, and `$5`. Up to 10 values can be captured.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetForwardUri() const;

                    /**
                     * 设置Origin server URI path when the path matches, starting with `/` and excluding parameters. The path can contain up to 1,024 characters. The wildcards in the match path can be respectively captured using `$1`, `$2`, `$3`, `$4`, and `$5`. Up to 10 values can be captured.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _forwardUri Origin server URI path when the path matches, starting with `/` and excluding parameters. The path can contain up to 1,024 characters. The wildcards in the match path can be respectively captured using `$1`, `$2`, `$3`, `$4`, and `$5`. Up to 10 values can be captured.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetForwardUri(const std::string& _forwardUri);

                    /**
                     * 判断参数 ForwardUri 是否已赋值
                     * @return ForwardUri 是否已赋值
                     * 
                     */
                    bool ForwardUriHasBeenSet() const;

                    /**
                     * 获取Origin-pull header setting when the path matches.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return RequestHeaders Origin-pull header setting when the path matches.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<HttpHeaderRule> GetRequestHeaders() const;

                    /**
                     * 设置Origin-pull header setting when the path matches.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _requestHeaders Origin-pull header setting when the path matches.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRequestHeaders(const std::vector<HttpHeaderRule>& _requestHeaders);

                    /**
                     * 判断参数 RequestHeaders 是否已赋值
                     * @return RequestHeaders 是否已赋值
                     * 
                     */
                    bool RequestHeadersHasBeenSet() const;

                    /**
                     * 获取When `Regex` is `false`, this parameter should be `true`.
`false`: Disabled
`true`: enabled
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return FullMatch When `Regex` is `false`, this parameter should be `true`.
`false`: Disabled
`true`: enabled
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    bool GetFullMatch() const;

                    /**
                     * 设置When `Regex` is `false`, this parameter should be `true`.
`false`: Disabled
`true`: enabled
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _fullMatch When `Regex` is `false`, this parameter should be `true`.
`false`: Disabled
`true`: enabled
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetFullMatch(const bool& _fullMatch);

                    /**
                     * 判断参数 FullMatch 是否已赋值
                     * @return FullMatch 是否已赋值
                     * 
                     */
                    bool FullMatchHasBeenSet() const;

                private:

                    /**
                     * Whether to enable wildcard match (`*`).
`false`: disabled
`true`: enabled
Note: this field may return `null`, indicating that no valid value can be obtained.
                     */
                    bool m_regex;
                    bool m_regexHasBeenSet;

                    /**
                     * Matched URL. Only URLs are supported, while parameters are not. The exact match is used by default. If wildcard match is enabled, up to 5 wildcards are supported. The URL can contain up to 1,024 characters.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * Origin server when the path matches. COS origin with private read/write is not supported. The default origin server will be used by default when this field is left empty.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * Origin server host header when the path matches. The default `ServerName` will be used by default when this field is left empty.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_serverName;
                    bool m_serverNameHasBeenSet;

                    /**
                     * Region of the origin server. Valid values: `CN` and `OV`.
`CN`: Within the Chinese mainland
`OV`: Outside the Chinese mainland
Default value: `CN`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_originArea;
                    bool m_originAreaHasBeenSet;

                    /**
                     * Origin server URI path when the path matches, starting with `/` and excluding parameters. The path can contain up to 1,024 characters. The wildcards in the match path can be respectively captured using `$1`, `$2`, `$3`, `$4`, and `$5`. Up to 10 values can be captured.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_forwardUri;
                    bool m_forwardUriHasBeenSet;

                    /**
                     * Origin-pull header setting when the path matches.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<HttpHeaderRule> m_requestHeaders;
                    bool m_requestHeadersHasBeenSet;

                    /**
                     * When `Regex` is `false`, this parameter should be `true`.
`false`: Disabled
`true`: enabled
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    bool m_fullMatch;
                    bool m_fullMatchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_PATHRULE_H_
