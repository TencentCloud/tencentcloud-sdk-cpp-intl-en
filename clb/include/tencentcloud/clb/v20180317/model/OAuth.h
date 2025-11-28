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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_OAUTH_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_OAUTH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * OAuth configuration information.
                */
                class OAuth : public AbstractModel
                {
                public:
                    OAuth();
                    ~OAuth() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies whether to turn on or off authentication.
True: enable.
False: disabled.
Disabled by default.
                     * @return OAuthEnable Specifies whether to turn on or off authentication.
True: enable.
False: disabled.
Disabled by default.
                     * 
                     */
                    bool GetOAuthEnable() const;

                    /**
                     * 设置Specifies whether to turn on or off authentication.
True: enable.
False: disabled.
Disabled by default.
                     * @param _oAuthEnable Specifies whether to turn on or off authentication.
True: enable.
False: disabled.
Disabled by default.
                     * 
                     */
                    void SetOAuthEnable(const bool& _oAuthEnable);

                    /**
                     * 判断参数 OAuthEnable 是否已赋值
                     * @return OAuthEnable 是否已赋值
                     * 
                     */
                    bool OAuthEnableHasBeenSet() const;

                    /**
                     * 获取Deny requests or allow when all iaps fail.
BYPASS: specifies the bypass.
REJECT.
Defaults to BYPASS.
                     * @return OAuthFailureStatus Deny requests or allow when all iaps fail.
BYPASS: specifies the bypass.
REJECT.
Defaults to BYPASS.
                     * 
                     */
                    std::string GetOAuthFailureStatus() const;

                    /**
                     * 设置Deny requests or allow when all iaps fail.
BYPASS: specifies the bypass.
REJECT.
Defaults to BYPASS.
                     * @param _oAuthFailureStatus Deny requests or allow when all iaps fail.
BYPASS: specifies the bypass.
REJECT.
Defaults to BYPASS.
                     * 
                     */
                    void SetOAuthFailureStatus(const std::string& _oAuthFailureStatus);

                    /**
                     * 判断参数 OAuthFailureStatus 是否已赋值
                     * @return OAuthFailureStatus 是否已赋值
                     * 
                     */
                    bool OAuthFailureStatusHasBeenSet() const;

                private:

                    /**
                     * Specifies whether to turn on or off authentication.
True: enable.
False: disabled.
Disabled by default.
                     */
                    bool m_oAuthEnable;
                    bool m_oAuthEnableHasBeenSet;

                    /**
                     * Deny requests or allow when all iaps fail.
BYPASS: specifies the bypass.
REJECT.
Defaults to BYPASS.
                     */
                    std::string m_oAuthFailureStatus;
                    bool m_oAuthFailureStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_OAUTH_H_
