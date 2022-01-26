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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_REMOTEAUTHENTICATIONRULE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_REMOTEAUTHENTICATIONRULE_H_

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
                * Remote authentication rule
                */
                class RemoteAuthenticationRule : public AbstractModel
                {
                public:
                    RemoteAuthenticationRule();
                    ~RemoteAuthenticationRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Remote authentication server
The server configured in `RemoteAutherntication` is used by default.
                     * @return Server Remote authentication server
The server configured in `RemoteAutherntication` is used by default.
                     */
                    std::string GetServer() const;

                    /**
                     * 设置Remote authentication server
The server configured in `RemoteAutherntication` is used by default.
                     * @param Server Remote authentication server
The server configured in `RemoteAutherntication` is used by default.
                     */
                    void SetServer(const std::string& _server);

                    /**
                     * 判断参数 Server 是否已赋值
                     * @return Server 是否已赋值
                     */
                    bool ServerHasBeenSet() const;

                    /**
                     * 获取HTTP method used by the remote authentication server. Valid values: `get`, `post`, `head`, and `all`. 
`all`: the remote authentication server follows the client request method.
Default: `all`
                     * @return AuthMethod HTTP method used by the remote authentication server. Valid values: `get`, `post`, `head`, and `all`. 
`all`: the remote authentication server follows the client request method.
Default: `all`
                     */
                    std::string GetAuthMethod() const;

                    /**
                     * 设置HTTP method used by the remote authentication server. Valid values: `get`, `post`, `head`, and `all`. 
`all`: the remote authentication server follows the client request method.
Default: `all`
                     * @param AuthMethod HTTP method used by the remote authentication server. Valid values: `get`, `post`, `head`, and `all`. 
`all`: the remote authentication server follows the client request method.
Default: `all`
                     */
                    void SetAuthMethod(const std::string& _authMethod);

                    /**
                     * 判断参数 AuthMethod 是否已赋值
                     * @return AuthMethod 是否已赋值
                     */
                    bool AuthMethodHasBeenSet() const;

                    /**
                     * 获取Rule types:
`all`: apply to all files
`file`: apply to files with the specified suffixes
`directory`: apply to the specified directories
`path`: apply to the specified absolute paths
Default: `all`.
                     * @return RuleType Rule types:
`all`: apply to all files
`file`: apply to files with the specified suffixes
`directory`: apply to the specified directories
`path`: apply to the specified absolute paths
Default: `all`.
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置Rule types:
`all`: apply to all files
`file`: apply to files with the specified suffixes
`directory`: apply to the specified directories
`path`: apply to the specified absolute paths
Default: `all`.
                     * @param RuleType Rule types:
`all`: apply to all files
`file`: apply to files with the specified suffixes
`directory`: apply to the specified directories
`path`: apply to the specified absolute paths
Default: `all`.
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取Content for each `RuleType`:
For `all`, enter a wildcard `*`.
For `file`, enter a suffix, e.g., `jpg` or `txt`.
For `directory`, enter a path, e.g., `/xxx/test/`.
For `path`, enter an absolute path, e.g., `/xxx/test.html`.
For `index`, enter a forward slash `/`.
Default: `*`
                     * @return RulePaths Content for each `RuleType`:
For `all`, enter a wildcard `*`.
For `file`, enter a suffix, e.g., `jpg` or `txt`.
For `directory`, enter a path, e.g., `/xxx/test/`.
For `path`, enter an absolute path, e.g., `/xxx/test.html`.
For `index`, enter a forward slash `/`.
Default: `*`
                     */
                    std::vector<std::string> GetRulePaths() const;

                    /**
                     * 设置Content for each `RuleType`:
For `all`, enter a wildcard `*`.
For `file`, enter a suffix, e.g., `jpg` or `txt`.
For `directory`, enter a path, e.g., `/xxx/test/`.
For `path`, enter an absolute path, e.g., `/xxx/test.html`.
For `index`, enter a forward slash `/`.
Default: `*`
                     * @param RulePaths Content for each `RuleType`:
For `all`, enter a wildcard `*`.
For `file`, enter a suffix, e.g., `jpg` or `txt`.
For `directory`, enter a path, e.g., `/xxx/test/`.
For `path`, enter an absolute path, e.g., `/xxx/test.html`.
For `index`, enter a forward slash `/`.
Default: `*`
                     */
                    void SetRulePaths(const std::vector<std::string>& _rulePaths);

                    /**
                     * 判断参数 RulePaths 是否已赋值
                     * @return RulePaths 是否已赋值
                     */
                    bool RulePathsHasBeenSet() const;

                    /**
                     * 获取Timeout period of the remote authentication server. Unit: ms.
Value range: [1, 30,000]
Default: 20000
                     * @return AuthTimeout Timeout period of the remote authentication server. Unit: ms.
Value range: [1, 30,000]
Default: 20000
                     */
                    int64_t GetAuthTimeout() const;

                    /**
                     * 设置Timeout period of the remote authentication server. Unit: ms.
Value range: [1, 30,000]
Default: 20000
                     * @param AuthTimeout Timeout period of the remote authentication server. Unit: ms.
Value range: [1, 30,000]
Default: 20000
                     */
                    void SetAuthTimeout(const int64_t& _authTimeout);

                    /**
                     * 判断参数 AuthTimeout 是否已赋值
                     * @return AuthTimeout 是否已赋值
                     */
                    bool AuthTimeoutHasBeenSet() const;

                    /**
                     * 获取Whether to deny or allow the request when the remote authentication server is timed out:
`RETURN_200`: the request is allowed when the remote authentication server is timed out.
`RETURN_403`: the request is denied when the remote authentication server is timed out.
Default: `RETURN_200`
                     * @return AuthTimeoutAction Whether to deny or allow the request when the remote authentication server is timed out:
`RETURN_200`: the request is allowed when the remote authentication server is timed out.
`RETURN_403`: the request is denied when the remote authentication server is timed out.
Default: `RETURN_200`
                     */
                    std::string GetAuthTimeoutAction() const;

                    /**
                     * 设置Whether to deny or allow the request when the remote authentication server is timed out:
`RETURN_200`: the request is allowed when the remote authentication server is timed out.
`RETURN_403`: the request is denied when the remote authentication server is timed out.
Default: `RETURN_200`
                     * @param AuthTimeoutAction Whether to deny or allow the request when the remote authentication server is timed out:
`RETURN_200`: the request is allowed when the remote authentication server is timed out.
`RETURN_403`: the request is denied when the remote authentication server is timed out.
Default: `RETURN_200`
                     */
                    void SetAuthTimeoutAction(const std::string& _authTimeoutAction);

                    /**
                     * 判断参数 AuthTimeoutAction 是否已赋值
                     * @return AuthTimeoutAction 是否已赋值
                     */
                    bool AuthTimeoutActionHasBeenSet() const;

                private:

                    /**
                     * Remote authentication server
The server configured in `RemoteAutherntication` is used by default.
                     */
                    std::string m_server;
                    bool m_serverHasBeenSet;

                    /**
                     * HTTP method used by the remote authentication server. Valid values: `get`, `post`, `head`, and `all`. 
`all`: the remote authentication server follows the client request method.
Default: `all`
                     */
                    std::string m_authMethod;
                    bool m_authMethodHasBeenSet;

                    /**
                     * Rule types:
`all`: apply to all files
`file`: apply to files with the specified suffixes
`directory`: apply to the specified directories
`path`: apply to the specified absolute paths
Default: `all`.
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * Content for each `RuleType`:
For `all`, enter a wildcard `*`.
For `file`, enter a suffix, e.g., `jpg` or `txt`.
For `directory`, enter a path, e.g., `/xxx/test/`.
For `path`, enter an absolute path, e.g., `/xxx/test.html`.
For `index`, enter a forward slash `/`.
Default: `*`
                     */
                    std::vector<std::string> m_rulePaths;
                    bool m_rulePathsHasBeenSet;

                    /**
                     * Timeout period of the remote authentication server. Unit: ms.
Value range: [1, 30,000]
Default: 20000
                     */
                    int64_t m_authTimeout;
                    bool m_authTimeoutHasBeenSet;

                    /**
                     * Whether to deny or allow the request when the remote authentication server is timed out:
`RETURN_200`: the request is allowed when the remote authentication server is timed out.
`RETURN_403`: the request is denied when the remote authentication server is timed out.
Default: `RETURN_200`
                     */
                    std::string m_authTimeoutAction;
                    bool m_authTimeoutActionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_REMOTEAUTHENTICATIONRULE_H_
