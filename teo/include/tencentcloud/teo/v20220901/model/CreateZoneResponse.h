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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATEZONERESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATEZONERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/OwnershipVerification.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * CreateZone response structure.
                */
                class CreateZoneResponse : public AbstractModel
                {
                public:
                    CreateZoneResponse();
                    ~CreateZoneResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Zone ID.
                     * @return ZoneId Zone ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Site ownership verification information. After site creation is completed, you also need to complete ownership verification before the site can run properly.

When Type = partial, you need to refer to [site/domain ownership verification](https://www.tencentcloud.com/document/product/1552/70789?from_cn_redirect=1), go to your DNS service provider to add a TXT record or go to the root domain name server to add a file, and then call the API [VerifyOwnership]() to complete the verification;

When Type is full, you need to refer to [modify DNS server](https://www.tencentcloud.com/document/product/1552/90452?from_cn_redirect=1) to switch the DNS server. You can query whether the DNS switchover is successful through the [VerifyOwnership]() API.

When Type is noDomainAccess, this value is empty and no operation is needed.
                     * @return OwnershipVerification Site ownership verification information. After site creation is completed, you also need to complete ownership verification before the site can run properly.

When Type = partial, you need to refer to [site/domain ownership verification](https://www.tencentcloud.com/document/product/1552/70789?from_cn_redirect=1), go to your DNS service provider to add a TXT record or go to the root domain name server to add a file, and then call the API [VerifyOwnership]() to complete the verification;

When Type is full, you need to refer to [modify DNS server](https://www.tencentcloud.com/document/product/1552/90452?from_cn_redirect=1) to switch the DNS server. You can query whether the DNS switchover is successful through the [VerifyOwnership]() API.

When Type is noDomainAccess, this value is empty and no operation is needed.
                     * 
                     */
                    OwnershipVerification GetOwnershipVerification() const;

                    /**
                     * 判断参数 OwnershipVerification 是否已赋值
                     * @return OwnershipVerification 是否已赋值
                     * 
                     */
                    bool OwnershipVerificationHasBeenSet() const;

                private:

                    /**
                     * Zone ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Site ownership verification information. After site creation is completed, you also need to complete ownership verification before the site can run properly.

When Type = partial, you need to refer to [site/domain ownership verification](https://www.tencentcloud.com/document/product/1552/70789?from_cn_redirect=1), go to your DNS service provider to add a TXT record or go to the root domain name server to add a file, and then call the API [VerifyOwnership]() to complete the verification;

When Type is full, you need to refer to [modify DNS server](https://www.tencentcloud.com/document/product/1552/90452?from_cn_redirect=1) to switch the DNS server. You can query whether the DNS switchover is successful through the [VerifyOwnership]() API.

When Type is noDomainAccess, this value is empty and no operation is needed.
                     */
                    OwnershipVerification m_ownershipVerification;
                    bool m_ownershipVerificationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEZONERESPONSE_H_
