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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_CREATESDKLOGINTOKENRESPONSE_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_CREATESDKLOGINTOKENRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * CreateSDKLoginToken response structure.
                */
                class CreateSDKLoginTokenResponse : public AbstractModel
                {
                public:
                    CreateSDKLoginTokenResponse();
                    ~CreateSDKLoginTokenResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取SDK log-in token.
                     * @return Token SDK log-in token.
                     * 
                     */
                    std::string GetToken() const;

                    /**
                     * 判断参数 Token 是否已赋值
                     * @return Token 是否已赋值
                     * 
                     */
                    bool TokenHasBeenSet() const;

                    /**
                     * 获取Expiry timestamp. unix timestamp.
                     * @return ExpiredTime Expiry timestamp. unix timestamp.
                     * 
                     */
                    int64_t GetExpiredTime() const;

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     * 
                     */
                    bool ExpiredTimeHasBeenSet() const;

                    /**
                     * 获取The path in which the sdk is loaded will change with its release.
                     * @return SdkURL The path in which the sdk is loaded will change with its release.
                     * 
                     */
                    std::string GetSdkURL() const;

                    /**
                     * 判断参数 SdkURL 是否已赋值
                     * @return SdkURL 是否已赋值
                     * 
                     */
                    bool SdkURLHasBeenSet() const;

                private:

                    /**
                     * SDK log-in token.
                     */
                    std::string m_token;
                    bool m_tokenHasBeenSet;

                    /**
                     * Expiry timestamp. unix timestamp.
                     */
                    int64_t m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * The path in which the sdk is loaded will change with its release.
                     */
                    std::string m_sdkURL;
                    bool m_sdkURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_CREATESDKLOGINTOKENRESPONSE_H_
