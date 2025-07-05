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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_APPLYLIVENESSTOKENREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_APPLYLIVENESSTOKENREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * ApplyLivenessToken request structure.
                */
                class ApplyLivenessTokenRequest : public AbstractModel
                {
                public:
                    ApplyLivenessTokenRequest();
                    ~ApplyLivenessTokenRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Enumerated value. Valid values: `1`, `2`, `3`, and `4`.
Their meanings are as follows:
1 - silent
2 - blinking
3 - light
4 - blinking + light (default)
                     * @return SecureLevel Enumerated value. Valid values: `1`, `2`, `3`, and `4`.
Their meanings are as follows:
1 - silent
2 - blinking
3 - light
4 - blinking + light (default)
                     * 
                     */
                    std::string GetSecureLevel() const;

                    /**
                     * 设置Enumerated value. Valid values: `1`, `2`, `3`, and `4`.
Their meanings are as follows:
1 - silent
2 - blinking
3 - light
4 - blinking + light (default)
                     * @param _secureLevel Enumerated value. Valid values: `1`, `2`, `3`, and `4`.
Their meanings are as follows:
1 - silent
2 - blinking
3 - light
4 - blinking + light (default)
                     * 
                     */
                    void SetSecureLevel(const std::string& _secureLevel);

                    /**
                     * 判断参数 SecureLevel 是否已赋值
                     * @return SecureLevel 是否已赋值
                     * 
                     */
                    bool SecureLevelHasBeenSet() const;

                private:

                    /**
                     * Enumerated value. Valid values: `1`, `2`, `3`, and `4`.
Their meanings are as follows:
1 - silent
2 - blinking
3 - light
4 - blinking + light (default)
                     */
                    std::string m_secureLevel;
                    bool m_secureLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_APPLYLIVENESSTOKENREQUEST_H_
