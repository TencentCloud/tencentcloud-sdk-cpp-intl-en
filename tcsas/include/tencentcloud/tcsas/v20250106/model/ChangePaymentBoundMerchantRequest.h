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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_CHANGEPAYMENTBOUNDMERCHANTREQUEST_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_CHANGEPAYMENTBOUNDMERCHANTREQUEST_H_

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
                * ChangePaymentBoundMerchant request structure.
                */
                class ChangePaymentBoundMerchantRequest : public AbstractModel
                {
                public:
                    ChangePaymentBoundMerchantRequest();
                    ~ChangePaymentBoundMerchantRequest() = default;
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
                     * 获取<p>Mini program appid.</p>
                     * @return TeamId <p>Mini program appid.</p>
                     * 
                     */
                    std::string GetTeamId() const;

                    /**
                     * 设置<p>Mini program appid.</p>
                     * @param _teamId <p>Mini program appid.</p>
                     * 
                     */
                    void SetTeamId(const std::string& _teamId);

                    /**
                     * 判断参数 TeamId 是否已赋值
                     * @return TeamId 是否已赋值
                     * 
                     */
                    bool TeamIdHasBeenSet() const;

                    /**
                     * 获取<p>Merchant ID.</p>
                     * @return MerchantID <p>Merchant ID.</p>
                     * 
                     */
                    std::string GetMerchantID() const;

                    /**
                     * 设置<p>Merchant ID.</p>
                     * @param _merchantID <p>Merchant ID.</p>
                     * 
                     */
                    void SetMerchantID(const std::string& _merchantID);

                    /**
                     * 判断参数 MerchantID 是否已赋值
                     * @return MerchantID 是否已赋值
                     * 
                     */
                    bool MerchantIDHasBeenSet() const;

                    /**
                     * 获取<p>Merchant name.</p>
                     * @return MerchantName <p>Merchant name.</p>
                     * 
                     */
                    std::string GetMerchantName() const;

                    /**
                     * 设置<p>Merchant name.</p>
                     * @param _merchantName <p>Merchant name.</p>
                     * 
                     */
                    void SetMerchantName(const std::string& _merchantName);

                    /**
                     * 判断参数 MerchantName 是否已赋值
                     * @return MerchantName 是否已赋值
                     * 
                     */
                    bool MerchantNameHasBeenSet() const;

                private:

                    /**
                     * <p>Platform ID.</p>
                     */
                    std::string m_platformId;
                    bool m_platformIdHasBeenSet;

                    /**
                     * <p>Mini program appid.</p>
                     */
                    std::string m_teamId;
                    bool m_teamIdHasBeenSet;

                    /**
                     * <p>Merchant ID.</p>
                     */
                    std::string m_merchantID;
                    bool m_merchantIDHasBeenSet;

                    /**
                     * <p>Merchant name.</p>
                     */
                    std::string m_merchantName;
                    bool m_merchantNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_CHANGEPAYMENTBOUNDMERCHANTREQUEST_H_
