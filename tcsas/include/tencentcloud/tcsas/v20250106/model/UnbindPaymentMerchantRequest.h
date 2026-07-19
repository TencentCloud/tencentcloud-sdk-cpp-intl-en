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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_UNBINDPAYMENTMERCHANTREQUEST_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_UNBINDPAYMENTMERCHANTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * UnbindPaymentMerchant request structure.
                */
                class UnbindPaymentMerchantRequest : public AbstractModel
                {
                public:
                    UnbindPaymentMerchantRequest();
                    ~UnbindPaymentMerchantRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Platform ID.</p>
                     * @return PlatformId <p>Platform ID.</p>
                     * 
                     */
                    std::string GetPlatformId() const;

                    /**
                     * 设置<p>Platform ID.</p>
                     * @param _platformId <p>Platform ID.</p>
                     * 
                     */
                    void SetPlatformId(const std::string& _platformId);

                    /**
                     * 判断参数 PlatformId 是否已赋值
                     * @return PlatformId 是否已赋值
                     * 
                     */
                    bool PlatformIdHasBeenSet() const;

                    /**
                     * 获取<p>Superapp ID.</p>
                     * @return ApplicationId <p>Superapp ID.</p>
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置<p>Superapp ID.</p>
                     * @param _applicationId <p>Superapp ID.</p>
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取<p>Primary key ID, obtained from the API response of approving the merchant binding of a mini program team.</p>
                     * @return ID <p>Primary key ID, obtained from the API response of approving the merchant binding of a mini program team.</p>
                     * 
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置<p>Primary key ID, obtained from the API response of approving the merchant binding of a mini program team.</p>
                     * @param _iD <p>Primary key ID, obtained from the API response of approving the merchant binding of a mini program team.</p>
                     * 
                     */
                    void SetID(const uint64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                private:

                    /**
                     * <p>Platform ID.</p>
                     */
                    std::string m_platformId;
                    bool m_platformIdHasBeenSet;

                    /**
                     * <p>Superapp ID.</p>
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * <p>Primary key ID, obtained from the API response of approving the merchant binding of a mini program team.</p>
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_UNBINDPAYMENTMERCHANTREQUEST_H_
