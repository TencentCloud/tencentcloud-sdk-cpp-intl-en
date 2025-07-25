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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_CREATEEMAILIDENTITYRESPONSE_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_CREATEEMAILIDENTITYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ses/v20201002/model/DNSAttributes.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * CreateEmailIdentity response structure.
                */
                class CreateEmailIdentityResponse : public AbstractModel
                {
                public:
                    CreateEmailIdentityResponse();
                    ~CreateEmailIdentityResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Verification type. The value is fixed to `DOMAIN`.
                     * @return IdentityType Verification type. The value is fixed to `DOMAIN`.
                     * 
                     */
                    std::string GetIdentityType() const;

                    /**
                     * 判断参数 IdentityType 是否已赋值
                     * @return IdentityType 是否已赋值
                     * 
                     */
                    bool IdentityTypeHasBeenSet() const;

                    /**
                     * 获取Verification passed or not.
                     * @return VerifiedForSendingStatus Verification passed or not.
                     * 
                     */
                    bool GetVerifiedForSendingStatus() const;

                    /**
                     * 判断参数 VerifiedForSendingStatus 是否已赋值
                     * @return VerifiedForSendingStatus 是否已赋值
                     * 
                     */
                    bool VerifiedForSendingStatusHasBeenSet() const;

                    /**
                     * 获取DNS information that needs to be configured.
                     * @return Attributes DNS information that needs to be configured.
                     * 
                     */
                    std::vector<DNSAttributes> GetAttributes() const;

                    /**
                     * 判断参数 Attributes 是否已赋值
                     * @return Attributes 是否已赋值
                     * 
                     */
                    bool AttributesHasBeenSet() const;

                private:

                    /**
                     * Verification type. The value is fixed to `DOMAIN`.
                     */
                    std::string m_identityType;
                    bool m_identityTypeHasBeenSet;

                    /**
                     * Verification passed or not.
                     */
                    bool m_verifiedForSendingStatus;
                    bool m_verifiedForSendingStatusHasBeenSet;

                    /**
                     * DNS information that needs to be configured.
                     */
                    std::vector<DNSAttributes> m_attributes;
                    bool m_attributesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_CREATEEMAILIDENTITYRESPONSE_H_
