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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_USERITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_USERITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * User information.
                */
                class UserItem : public AbstractModel
                {
                public:
                    UserItem();
                    ~UserItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Login user appid</p>
                     * @return AppID <p>Login user appid</p>
                     * 
                     */
                    uint64_t GetAppID() const;

                    /**
                     * 设置<p>Login user appid</p>
                     * @param _appID <p>Login user appid</p>
                     * 
                     */
                    void SetAppID(const uint64_t& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取<p>Type of user</p>
                     * @return AccountType <p>Type of user</p>
                     * 
                     */
                    uint64_t GetAccountType() const;

                    /**
                     * 设置<p>Type of user</p>
                     * @param _accountType <p>Type of user</p>
                     * 
                     */
                    void SetAccountType(const uint64_t& _accountType);

                    /**
                     * 判断参数 AccountType 是否已赋值
                     * @return AccountType 是否已赋值
                     * 
                     */
                    bool AccountTypeHasBeenSet() const;

                    /**
                     * 获取<p>User payment mode</p>
                     * @return PayType <p>User payment mode</p>
                     * 
                     */
                    uint64_t GetPayType() const;

                    /**
                     * 设置<p>User payment mode</p>
                     * @param _payType <p>User payment mode</p>
                     * 
                     */
                    void SetPayType(const uint64_t& _payType);

                    /**
                     * 判断参数 PayType 是否已赋值
                     * @return PayType 是否已赋值
                     * 
                     */
                    bool PayTypeHasBeenSet() const;

                    /**
                     * 获取<p>Total quota count</p>
                     * @return TotalQuota <p>Total quota count</p>
                     * 
                     */
                    uint64_t GetTotalQuota() const;

                    /**
                     * 设置<p>Total quota count</p>
                     * @param _totalQuota <p>Total quota count</p>
                     * 
                     */
                    void SetTotalQuota(const uint64_t& _totalQuota);

                    /**
                     * 判断参数 TotalQuota 是否已赋值
                     * @return TotalQuota 是否已赋值
                     * 
                     */
                    bool TotalQuotaHasBeenSet() const;

                    /**
                     * 获取<p>Consumed quota count</p>
                     * @return CostQuota <p>Consumed quota count</p>
                     * 
                     */
                    uint64_t GetCostQuota() const;

                    /**
                     * 设置<p>Consumed quota count</p>
                     * @param _costQuota <p>Consumed quota count</p>
                     * 
                     */
                    void SetCostQuota(const uint64_t& _costQuota);

                    /**
                     * 判断参数 CostQuota 是否已赋值
                     * @return CostQuota 是否已赋值
                     * 
                     */
                    bool CostQuotaHasBeenSet() const;

                    /**
                     * 获取<p>Cloud vendor information</p>
                     * @return Providers <p>Cloud vendor information</p>
                     * 
                     */
                    std::vector<std::string> GetProviders() const;

                    /**
                     * 设置<p>Cloud vendor information</p>
                     * @param _providers <p>Cloud vendor information</p>
                     * 
                     */
                    void SetProviders(const std::vector<std::string>& _providers);

                    /**
                     * 判断参数 Providers 是否已赋值
                     * @return Providers 是否已赋值
                     * 
                     */
                    bool ProvidersHasBeenSet() const;

                    /**
                     * 获取<p>refresh: update next time; expire: no longer update next time</p>
                     * @return QuotaFlushType <p>refresh: update next time; expire: no longer update next time</p>
                     * 
                     */
                    std::string GetQuotaFlushType() const;

                    /**
                     * 设置<p>refresh: update next time; expire: no longer update next time</p>
                     * @param _quotaFlushType <p>refresh: update next time; expire: no longer update next time</p>
                     * 
                     */
                    void SetQuotaFlushType(const std::string& _quotaFlushType);

                    /**
                     * 判断参数 QuotaFlushType 是否已赋值
                     * @return QuotaFlushType 是否已赋值
                     * 
                     */
                    bool QuotaFlushTypeHasBeenSet() const;

                    /**
                     * 获取<p>Next quota refresh time</p>
                     * @return QuotaFlushTime <p>Next quota refresh time</p>
                     * 
                     */
                    std::string GetQuotaFlushTime() const;

                    /**
                     * 设置<p>Next quota refresh time</p>
                     * @param _quotaFlushTime <p>Next quota refresh time</p>
                     * 
                     */
                    void SetQuotaFlushTime(const std::string& _quotaFlushTime);

                    /**
                     * 判断参数 QuotaFlushTime 是否已赋值
                     * @return QuotaFlushTime 是否已赋值
                     * 
                     */
                    bool QuotaFlushTimeHasBeenSet() const;

                    /**
                     * 获取<p>Purchase type</p>
                     * @return QuotaSource <p>Purchase type</p>
                     * 
                     */
                    uint64_t GetQuotaSource() const;

                    /**
                     * 设置<p>Purchase type</p>
                     * @param _quotaSource <p>Purchase type</p>
                     * 
                     */
                    void SetQuotaSource(const uint64_t& _quotaSource);

                    /**
                     * 判断参数 QuotaSource 是否已赋值
                     * @return QuotaSource 是否已赋值
                     * 
                     */
                    bool QuotaSourceHasBeenSet() const;

                    /**
                     * 获取<p>The appid of the sharing party when shared, or 0 when purchased or out of quota</p>
                     * @return ShareFromAppID <p>The appid of the sharing party when shared, or 0 when purchased or out of quota</p>
                     * 
                     */
                    uint64_t GetShareFromAppID() const;

                    /**
                     * 设置<p>The appid of the sharing party when shared, or 0 when purchased or out of quota</p>
                     * @param _shareFromAppID <p>The appid of the sharing party when shared, or 0 when purchased or out of quota</p>
                     * 
                     */
                    void SetShareFromAppID(const uint64_t& _shareFromAppID);

                    /**
                     * 判断参数 ShareFromAppID 是否已赋值
                     * @return ShareFromAppID 是否已赋值
                     * 
                     */
                    bool ShareFromAppIDHasBeenSet() const;

                    /**
                     * 获取<p>Quota sharing party account</p>
                     * @return ShareFromUser <p>Quota sharing party account</p>
                     * 
                     */
                    std::string GetShareFromUser() const;

                    /**
                     * 设置<p>Quota sharing party account</p>
                     * @param _shareFromUser <p>Quota sharing party account</p>
                     * 
                     */
                    void SetShareFromUser(const std::string& _shareFromUser);

                    /**
                     * 判断参数 ShareFromUser 是否已赋值
                     * @return ShareFromUser 是否已赋值
                     * 
                     */
                    bool ShareFromUserHasBeenSet() const;

                private:

                    /**
                     * <p>Login user appid</p>
                     */
                    uint64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * <p>Type of user</p>
                     */
                    uint64_t m_accountType;
                    bool m_accountTypeHasBeenSet;

                    /**
                     * <p>User payment mode</p>
                     */
                    uint64_t m_payType;
                    bool m_payTypeHasBeenSet;

                    /**
                     * <p>Total quota count</p>
                     */
                    uint64_t m_totalQuota;
                    bool m_totalQuotaHasBeenSet;

                    /**
                     * <p>Consumed quota count</p>
                     */
                    uint64_t m_costQuota;
                    bool m_costQuotaHasBeenSet;

                    /**
                     * <p>Cloud vendor information</p>
                     */
                    std::vector<std::string> m_providers;
                    bool m_providersHasBeenSet;

                    /**
                     * <p>refresh: update next time; expire: no longer update next time</p>
                     */
                    std::string m_quotaFlushType;
                    bool m_quotaFlushTypeHasBeenSet;

                    /**
                     * <p>Next quota refresh time</p>
                     */
                    std::string m_quotaFlushTime;
                    bool m_quotaFlushTimeHasBeenSet;

                    /**
                     * <p>Purchase type</p>
                     */
                    uint64_t m_quotaSource;
                    bool m_quotaSourceHasBeenSet;

                    /**
                     * <p>The appid of the sharing party when shared, or 0 when purchased or out of quota</p>
                     */
                    uint64_t m_shareFromAppID;
                    bool m_shareFromAppIDHasBeenSet;

                    /**
                     * <p>Quota sharing party account</p>
                     */
                    std::string m_shareFromUser;
                    bool m_shareFromUserHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_USERITEM_H_
