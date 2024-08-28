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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBELICENSEGENERALRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBELICENSEGENERALRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeLicenseGeneral response structure.
                */
                class DescribeLicenseGeneralResponse : public AbstractModel
                {
                public:
                    DescribeLicenseGeneralResponse();
                    ~DescribeLicenseGeneralResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of authorizations (including those that are isolated, expired, and in other states)
                     * @return LicenseCnt Total number of authorizations (including those that are isolated, expired, and in other states)
                     * 
                     */
                    uint64_t GetLicenseCnt() const;

                    /**
                     * 判断参数 LicenseCnt 是否已赋值
                     * @return LicenseCnt 是否已赋值
                     * 
                     */
                    bool LicenseCntHasBeenSet() const;

                    /**
                     * 获取Number of available authorizations
                     * @return AvailableLicenseCnt Number of available authorizations
                     * 
                     */
                    uint64_t GetAvailableLicenseCnt() const;

                    /**
                     * 判断参数 AvailableLicenseCnt 是否已赋值
                     * @return AvailableLicenseCnt 是否已赋值
                     * 
                     */
                    bool AvailableLicenseCntHasBeenSet() const;

                    /**
                     * 获取Number of available Professional Edition authorizations (including those in postpaid mode)
                     * @return AvailableProVersionLicenseCnt Number of available Professional Edition authorizations (including those in postpaid mode)
                     * 
                     */
                    uint64_t GetAvailableProVersionLicenseCnt() const;

                    /**
                     * 判断参数 AvailableProVersionLicenseCnt 是否已赋值
                     * @return AvailableProVersionLicenseCnt 是否已赋值
                     * 
                     */
                    bool AvailableProVersionLicenseCntHasBeenSet() const;

                    /**
                     * 获取Number of available Ultimate Edition authorizations
                     * @return AvailableFlagshipVersionLicenseCnt Number of available Ultimate Edition authorizations
                     * 
                     */
                    uint64_t GetAvailableFlagshipVersionLicenseCnt() const;

                    /**
                     * 判断参数 AvailableFlagshipVersionLicenseCnt 是否已赋值
                     * @return AvailableFlagshipVersionLicenseCnt 是否已赋值
                     * 
                     */
                    bool AvailableFlagshipVersionLicenseCntHasBeenSet() const;

                    /**
                     * 获取Number of authorizations about to expire (no more than 15 days left)
                     * @return NearExpiryLicenseCnt Number of authorizations about to expire (no more than 15 days left)
                     * 
                     */
                    uint64_t GetNearExpiryLicenseCnt() const;

                    /**
                     * 判断参数 NearExpiryLicenseCnt 是否已赋值
                     * @return NearExpiryLicenseCnt 是否已赋值
                     * 
                     */
                    bool NearExpiryLicenseCntHasBeenSet() const;

                    /**
                     * 获取Number of expired authorizations (excluding deleted ones)
                     * @return ExpireLicenseCnt Number of expired authorizations (excluding deleted ones)
                     * 
                     */
                    uint64_t GetExpireLicenseCnt() const;

                    /**
                     * 判断参数 ExpireLicenseCnt 是否已赋值
                     * @return ExpireLicenseCnt 是否已赋值
                     * 
                     */
                    bool ExpireLicenseCntHasBeenSet() const;

                    /**
                     * 获取Automatic upgrade enabling status. True: enabled; false: disabled. Default value: false.
                     * @return AutoOpenStatus Automatic upgrade enabling status. True: enabled; false: disabled. Default value: false.
                     * 
                     */
                    bool GetAutoOpenStatus() const;

                    /**
                     * 判断参数 AutoOpenStatus 是否已赋值
                     * @return AutoOpenStatus 是否已赋值
                     * 
                     */
                    bool AutoOpenStatusHasBeenSet() const;

                    /**
                     * 获取PROVERSION_POSTPAY: Pro Edition - postpaid; PROVERSION_PREPAY: Pro edition - prepaid; FLAGSHIP_PREPAY: Ultimate Edition - prepaid.
                     * @return ProtectType PROVERSION_POSTPAY: Pro Edition - postpaid; PROVERSION_PREPAY: Pro edition - prepaid; FLAGSHIP_PREPAY: Ultimate Edition - prepaid.
                     * 
                     */
                    std::string GetProtectType() const;

                    /**
                     * 判断参数 ProtectType 是否已赋值
                     * @return ProtectType 是否已赋值
                     * 
                     */
                    bool ProtectTypeHasBeenSet() const;

                    /**
                     * 获取Whether automatic upgrade has been enabled before
                     * @return IsOpenStatusHistory Whether automatic upgrade has been enabled before
                     * 
                     */
                    bool GetIsOpenStatusHistory() const;

                    /**
                     * 判断参数 IsOpenStatusHistory 是否已赋值
                     * @return IsOpenStatusHistory 是否已赋值
                     * 
                     */
                    bool IsOpenStatusHistoryHasBeenSet() const;

                    /**
                     * 获取Number of used authorizations
                     * @return UsedLicenseCnt Number of used authorizations
                     * 
                     */
                    uint64_t GetUsedLicenseCnt() const;

                    /**
                     * 判断参数 UsedLicenseCnt 是否已赋值
                     * @return UsedLicenseCnt 是否已赋值
                     * 
                     */
                    bool UsedLicenseCntHasBeenSet() const;

                    /**
                     * 获取Number of authorizations that have not expired
                     * @return NotExpiredLicenseCnt Number of authorizations that have not expired
                     * 
                     */
                    uint64_t GetNotExpiredLicenseCnt() const;

                    /**
                     * 判断参数 NotExpiredLicenseCnt 是否已赋值
                     * @return NotExpiredLicenseCnt 是否已赋值
                     * 
                     */
                    bool NotExpiredLicenseCntHasBeenSet() const;

                    /**
                     * 获取Total number of Ultimate Edition authorizations (valid orders)
                     * @return FlagshipVersionLicenseCnt Total number of Ultimate Edition authorizations (valid orders)
                     * 
                     */
                    uint64_t GetFlagshipVersionLicenseCnt() const;

                    /**
                     * 判断参数 FlagshipVersionLicenseCnt 是否已赋值
                     * @return FlagshipVersionLicenseCnt 是否已赋值
                     * 
                     */
                    bool FlagshipVersionLicenseCntHasBeenSet() const;

                    /**
                     * 获取Total number of Pro Edition authorizations (valid orders)
                     * @return ProVersionLicenseCnt Total number of Pro Edition authorizations (valid orders)
                     * 
                     */
                    uint64_t GetProVersionLicenseCnt() const;

                    /**
                     * 判断参数 ProVersionLicenseCnt 是否已赋值
                     * @return ProVersionLicenseCnt 是否已赋值
                     * 
                     */
                    bool ProVersionLicenseCntHasBeenSet() const;

                    /**
                     * 获取Total number of Inclusive Edition authorizations (those of valid orders)
                     * @return CwpVersionLicenseCnt Total number of Inclusive Edition authorizations (those of valid orders)
                     * 
                     */
                    uint64_t GetCwpVersionLicenseCnt() const;

                    /**
                     * 判断参数 CwpVersionLicenseCnt 是否已赋值
                     * @return CwpVersionLicenseCnt 是否已赋值
                     * 
                     */
                    bool CwpVersionLicenseCntHasBeenSet() const;

                    /**
                     * 获取Number of available Inclusive Edition authorizations
                     * @return AvailableLHLicenseCnt Number of available Inclusive Edition authorizations
                     * 
                     */
                    uint64_t GetAvailableLHLicenseCnt() const;

                    /**
                     * 判断参数 AvailableLHLicenseCnt 是否已赋值
                     * @return AvailableLHLicenseCnt 是否已赋值
                     * 
                     */
                    bool AvailableLHLicenseCntHasBeenSet() const;

                    /**
                     * 获取Auto-purchase switch, true for ON, false for OFF
                     * @return AutoRepurchaseSwitch Auto-purchase switch, true for ON, false for OFF
                     * 
                     */
                    bool GetAutoRepurchaseSwitch() const;

                    /**
                     * 判断参数 AutoRepurchaseSwitch 是否已赋值
                     * @return AutoRepurchaseSwitch 是否已赋值
                     * 
                     */
                    bool AutoRepurchaseSwitchHasBeenSet() const;

                    /**
                     * 获取Is auto-renewal required for auto-purchase orders, true for ON, false for OFF
                     * @return AutoRepurchaseRenewSwitch Is auto-renewal required for auto-purchase orders, true for ON, false for OFF
                     * 
                     */
                    bool GetAutoRepurchaseRenewSwitch() const;

                    /**
                     * 判断参数 AutoRepurchaseRenewSwitch 是否已赋值
                     * @return AutoRepurchaseRenewSwitch 是否已赋值
                     * 
                     */
                    bool AutoRepurchaseRenewSwitchHasBeenSet() const;

                    /**
                     * 获取Number of terminated orders
                     * @return DestroyOrderNum Number of terminated orders
                     * 
                     */
                    uint64_t GetDestroyOrderNum() const;

                    /**
                     * 判断参数 DestroyOrderNum 是否已赋值
                     * @return DestroyOrderNum 是否已赋值
                     * 
                     */
                    bool DestroyOrderNumHasBeenSet() const;

                    /**
                     * 获取Whether automatic renewal is enabled. True: enabled; false: disabled.
                     * @return RepurchaseRenewSwitch Whether automatic renewal is enabled. True: enabled; false: disabled.
                     * 
                     */
                    bool GetRepurchaseRenewSwitch() const;

                    /**
                     * 判断参数 RepurchaseRenewSwitch 是否已赋值
                     * @return RepurchaseRenewSwitch 是否已赋值
                     * 
                     */
                    bool RepurchaseRenewSwitchHasBeenSet() const;

                private:

                    /**
                     * Total number of authorizations (including those that are isolated, expired, and in other states)
                     */
                    uint64_t m_licenseCnt;
                    bool m_licenseCntHasBeenSet;

                    /**
                     * Number of available authorizations
                     */
                    uint64_t m_availableLicenseCnt;
                    bool m_availableLicenseCntHasBeenSet;

                    /**
                     * Number of available Professional Edition authorizations (including those in postpaid mode)
                     */
                    uint64_t m_availableProVersionLicenseCnt;
                    bool m_availableProVersionLicenseCntHasBeenSet;

                    /**
                     * Number of available Ultimate Edition authorizations
                     */
                    uint64_t m_availableFlagshipVersionLicenseCnt;
                    bool m_availableFlagshipVersionLicenseCntHasBeenSet;

                    /**
                     * Number of authorizations about to expire (no more than 15 days left)
                     */
                    uint64_t m_nearExpiryLicenseCnt;
                    bool m_nearExpiryLicenseCntHasBeenSet;

                    /**
                     * Number of expired authorizations (excluding deleted ones)
                     */
                    uint64_t m_expireLicenseCnt;
                    bool m_expireLicenseCntHasBeenSet;

                    /**
                     * Automatic upgrade enabling status. True: enabled; false: disabled. Default value: false.
                     */
                    bool m_autoOpenStatus;
                    bool m_autoOpenStatusHasBeenSet;

                    /**
                     * PROVERSION_POSTPAY: Pro Edition - postpaid; PROVERSION_PREPAY: Pro edition - prepaid; FLAGSHIP_PREPAY: Ultimate Edition - prepaid.
                     */
                    std::string m_protectType;
                    bool m_protectTypeHasBeenSet;

                    /**
                     * Whether automatic upgrade has been enabled before
                     */
                    bool m_isOpenStatusHistory;
                    bool m_isOpenStatusHistoryHasBeenSet;

                    /**
                     * Number of used authorizations
                     */
                    uint64_t m_usedLicenseCnt;
                    bool m_usedLicenseCntHasBeenSet;

                    /**
                     * Number of authorizations that have not expired
                     */
                    uint64_t m_notExpiredLicenseCnt;
                    bool m_notExpiredLicenseCntHasBeenSet;

                    /**
                     * Total number of Ultimate Edition authorizations (valid orders)
                     */
                    uint64_t m_flagshipVersionLicenseCnt;
                    bool m_flagshipVersionLicenseCntHasBeenSet;

                    /**
                     * Total number of Pro Edition authorizations (valid orders)
                     */
                    uint64_t m_proVersionLicenseCnt;
                    bool m_proVersionLicenseCntHasBeenSet;

                    /**
                     * Total number of Inclusive Edition authorizations (those of valid orders)
                     */
                    uint64_t m_cwpVersionLicenseCnt;
                    bool m_cwpVersionLicenseCntHasBeenSet;

                    /**
                     * Number of available Inclusive Edition authorizations
                     */
                    uint64_t m_availableLHLicenseCnt;
                    bool m_availableLHLicenseCntHasBeenSet;

                    /**
                     * Auto-purchase switch, true for ON, false for OFF
                     */
                    bool m_autoRepurchaseSwitch;
                    bool m_autoRepurchaseSwitchHasBeenSet;

                    /**
                     * Is auto-renewal required for auto-purchase orders, true for ON, false for OFF
                     */
                    bool m_autoRepurchaseRenewSwitch;
                    bool m_autoRepurchaseRenewSwitchHasBeenSet;

                    /**
                     * Number of terminated orders
                     */
                    uint64_t m_destroyOrderNum;
                    bool m_destroyOrderNumHasBeenSet;

                    /**
                     * Whether automatic renewal is enabled. True: enabled; false: disabled.
                     */
                    bool m_repurchaseRenewSwitch;
                    bool m_repurchaseRenewSwitchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBELICENSEGENERALRESPONSE_H_
