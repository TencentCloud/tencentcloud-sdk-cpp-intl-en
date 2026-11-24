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

#ifndef TENCENTCLOUD_CAR_V20220110_MODEL_CREATEMCPTOKENREQUEST_H_
#define TENCENTCLOUD_CAR_V20220110_MODEL_CREATEMCPTOKENREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Car
    {
        namespace V20220110
        {
            namespace Model
            {
                /**
                * CreateMCPToken request structure.
                */
                class CreateMCPTokenRequest : public AbstractModel
                {
                public:
                    CreateMCPTokenRequest();
                    ~CreateMCPTokenRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Token expiration time</p><p>Value range: [0, 2592000]</p><p>Unit: seconds</p><p>Default value: 86400</p><p>If this parameter is not specified, the default timeout is 1 day. The expiration time is the current time + the timeout period.</p>
                     * @return ExpireSeconds <p>Token expiration time</p><p>Value range: [0, 2592000]</p><p>Unit: seconds</p><p>Default value: 86400</p><p>If this parameter is not specified, the default timeout is 1 day. The expiration time is the current time + the timeout period.</p>
                     * 
                     */
                    int64_t GetExpireSeconds() const;

                    /**
                     * 设置<p>Token expiration time</p><p>Value range: [0, 2592000]</p><p>Unit: seconds</p><p>Default value: 86400</p><p>If this parameter is not specified, the default timeout is 1 day. The expiration time is the current time + the timeout period.</p>
                     * @param _expireSeconds <p>Token expiration time</p><p>Value range: [0, 2592000]</p><p>Unit: seconds</p><p>Default value: 86400</p><p>If this parameter is not specified, the default timeout is 1 day. The expiration time is the current time + the timeout period.</p>
                     * 
                     */
                    void SetExpireSeconds(const int64_t& _expireSeconds);

                    /**
                     * 判断参数 ExpireSeconds 是否已赋值
                     * @return ExpireSeconds 是否已赋值
                     * 
                     */
                    bool ExpireSecondsHasBeenSet() const;

                    /**
                     * 获取<p>Token name (comment)</p><p>Format: Only a combination of Chinese characters, English letters, digits, and hyphens (&quot;-&quot;) is supported.</p><p>Maximum length: 16 characters</p>
                     * @return TokenName <p>Token name (comment)</p><p>Format: Only a combination of Chinese characters, English letters, digits, and hyphens (&quot;-&quot;) is supported.</p><p>Maximum length: 16 characters</p>
                     * 
                     */
                    std::string GetTokenName() const;

                    /**
                     * 设置<p>Token name (comment)</p><p>Format: Only a combination of Chinese characters, English letters, digits, and hyphens (&quot;-&quot;) is supported.</p><p>Maximum length: 16 characters</p>
                     * @param _tokenName <p>Token name (comment)</p><p>Format: Only a combination of Chinese characters, English letters, digits, and hyphens (&quot;-&quot;) is supported.</p><p>Maximum length: 16 characters</p>
                     * 
                     */
                    void SetTokenName(const std::string& _tokenName);

                    /**
                     * 判断参数 TokenName 是否已赋值
                     * @return TokenName 是否已赋值
                     * 
                     */
                    bool TokenNameHasBeenSet() const;

                    /**
                     * 获取<p>User Id</p><p>Format: Only a combination of letters (A-Za-z), digits (0-9), and underscores (_) is supported.</p><p>This UserId is always used to operate cloud rendering concurrent resources. Maximum length: 64 characters</p>
                     * @return UserId <p>User Id</p><p>Format: Only a combination of letters (A-Za-z), digits (0-9), and underscores (_) is supported.</p><p>This UserId is always used to operate cloud rendering concurrent resources. Maximum length: 64 characters</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>User Id</p><p>Format: Only a combination of letters (A-Za-z), digits (0-9), and underscores (_) is supported.</p><p>This UserId is always used to operate cloud rendering concurrent resources. Maximum length: 64 characters</p>
                     * @param _userId <p>User Id</p><p>Format: Only a combination of letters (A-Za-z), digits (0-9), and underscores (_) is supported.</p><p>This UserId is always used to operate cloud rendering concurrent resources. Maximum length: 64 characters</p>
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                private:

                    /**
                     * <p>Token expiration time</p><p>Value range: [0, 2592000]</p><p>Unit: seconds</p><p>Default value: 86400</p><p>If this parameter is not specified, the default timeout is 1 day. The expiration time is the current time + the timeout period.</p>
                     */
                    int64_t m_expireSeconds;
                    bool m_expireSecondsHasBeenSet;

                    /**
                     * <p>Token name (comment)</p><p>Format: Only a combination of Chinese characters, English letters, digits, and hyphens (&quot;-&quot;) is supported.</p><p>Maximum length: 16 characters</p>
                     */
                    std::string m_tokenName;
                    bool m_tokenNameHasBeenSet;

                    /**
                     * <p>User Id</p><p>Format: Only a combination of letters (A-Za-z), digits (0-9), and underscores (_) is supported.</p><p>This UserId is always used to operate cloud rendering concurrent resources. Maximum length: 64 characters</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAR_V20220110_MODEL_CREATEMCPTOKENREQUEST_H_
