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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_ORIGINAUTHENTICATIONTYPEA_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_ORIGINAUTHENTICATIONTYPEA_H_

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
                * Origin-pull authentication advanced configuration TypeA
                */
                class OriginAuthenticationTypeA : public AbstractModel
                {
                public:
                    OriginAuthenticationTypeA();
                    ~OriginAuthenticationTypeA() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Key used for signature calculation, allowing 6 to 32 bytes of letters and digits.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return SecretKey Key used for signature calculation, allowing 6 to 32 bytes of letters and digits.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置Key used for signature calculation, allowing 6 to 32 bytes of letters and digits.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _secretKey Key used for signature calculation, allowing 6 to 32 bytes of letters and digits.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSecretKey(const std::string& _secretKey);

                    /**
                     * 判断参数 SecretKey 是否已赋值
                     * @return SecretKey 是否已赋值
                     * 
                     */
                    bool SecretKeyHasBeenSet() const;

                private:

                    /**
                     * Key used for signature calculation, allowing 6 to 32 bytes of letters and digits.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_ORIGINAUTHENTICATIONTYPEA_H_
