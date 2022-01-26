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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_EMAILIDENTITY_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_EMAILIDENTITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * Sender domain verification list structure
                */
                class EmailIdentity : public AbstractModel
                {
                public:
                    EmailIdentity();
                    ~EmailIdentity() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Sender domain.
                     * @return IdentityName Sender domain.
                     */
                    std::string GetIdentityName() const;

                    /**
                     * 设置Sender domain.
                     * @param IdentityName Sender domain.
                     */
                    void SetIdentityName(const std::string& _identityName);

                    /**
                     * 判断参数 IdentityName 是否已赋值
                     * @return IdentityName 是否已赋值
                     */
                    bool IdentityNameHasBeenSet() const;

                    /**
                     * 获取Verification type. The value is fixed to `DOMAIN`.
                     * @return IdentityType Verification type. The value is fixed to `DOMAIN`.
                     */
                    std::string GetIdentityType() const;

                    /**
                     * 设置Verification type. The value is fixed to `DOMAIN`.
                     * @param IdentityType Verification type. The value is fixed to `DOMAIN`.
                     */
                    void SetIdentityType(const std::string& _identityType);

                    /**
                     * 判断参数 IdentityType 是否已赋值
                     * @return IdentityType 是否已赋值
                     */
                    bool IdentityTypeHasBeenSet() const;

                    /**
                     * 获取Verification passed or not.
                     * @return SendingEnabled Verification passed or not.
                     */
                    bool GetSendingEnabled() const;

                    /**
                     * 设置Verification passed or not.
                     * @param SendingEnabled Verification passed or not.
                     */
                    void SetSendingEnabled(const bool& _sendingEnabled);

                    /**
                     * 判断参数 SendingEnabled 是否已赋值
                     * @return SendingEnabled 是否已赋值
                     */
                    bool SendingEnabledHasBeenSet() const;

                private:

                    /**
                     * Sender domain.
                     */
                    std::string m_identityName;
                    bool m_identityNameHasBeenSet;

                    /**
                     * Verification type. The value is fixed to `DOMAIN`.
                     */
                    std::string m_identityType;
                    bool m_identityTypeHasBeenSet;

                    /**
                     * Verification passed or not.
                     */
                    bool m_sendingEnabled;
                    bool m_sendingEnabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_EMAILIDENTITY_H_
