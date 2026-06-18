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
                     * 获取<p>Total number of licenses (including unavailable licenses such as isolated and expired ones)</p>
                     * @return LicenseCnt <p>Total number of licenses (including unavailable licenses such as isolated and expired ones)</p>
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
                     * 获取<p>Available licenses</p>
                     * @return AvailableLicenseCnt <p>Available licenses</p>
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
                     * 获取<p>Number of available Pro Edition licenses (including postpaid licenses)</p>
                     * @return AvailableProVersionLicenseCnt <p>Number of available Pro Edition licenses (including postpaid licenses)</p>
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
                     * 获取<p>Number of available Ultimate Edition licenses</p>
                     * @return AvailableFlagshipVersionLicenseCnt <p>Number of available Ultimate Edition licenses</p>
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
                     * 获取<p>Number of licenses expiring within 15 days</p>
                     * @return NearExpiryLicenseCnt <p>Number of licenses expiring within 15 days</p>
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
                     * 获取<p>Number of expired licenses (excluding deleted records)</p>
                     * @return ExpireLicenseCnt <p>Number of expired licenses (excluding deleted records)</p>
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
                     * 获取<p>Automatic upgrade switch status. Default value: false. true: enabled; false: disabled.</p>
                     * @return AutoOpenStatus <p>Automatic upgrade switch status. Default value: false. true: enabled; false: disabled.</p>
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
                     * 获取<p>PROVERSION_POSTPAY: Pro Edition - postpaid; PROVERSION_PREPAY: Pro Edition - prepaid; FLAGSHIP_PREPAY: Ultimate Edition - prepaid.</p>
                     * @return ProtectType <p>PROVERSION_POSTPAY: Pro Edition - postpaid; PROVERSION_PREPAY: Pro Edition - prepaid; FLAGSHIP_PREPAY: Ultimate Edition - prepaid.</p>
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
                     * 获取<p>Whether automatic upgrade has been enabled before</p>
                     * @return IsOpenStatusHistory <p>Whether automatic upgrade has been enabled before</p>
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
                     * 获取<p>Number of used licenses</p>
                     * @return UsedLicenseCnt <p>Number of used licenses</p>
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
                     * 获取<p>Number of unexpired licenses</p>
                     * @return NotExpiredLicenseCnt <p>Number of unexpired licenses</p>
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
                     * 获取<p>Total number of Ultimate Edition licenses (valid orders)</p>
                     * @return FlagshipVersionLicenseCnt <p>Total number of Ultimate Edition licenses (valid orders)</p>
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
                     * 获取<p>Total number of Pro Edition licenses (valid orders)</p>
                     * @return ProVersionLicenseCnt <p>Total number of Pro Edition licenses (valid orders)</p>
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
                     * 获取<p>Lightweight edition total number of licenses (valid order licenses count)</p>
                     * @return CwpVersionLicenseCnt <p>Lightweight edition total number of licenses (valid order licenses count)</p>
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
                     * 获取<p>Number of available Lightweight Edition licenses</p>
                     * @return AvailableLHLicenseCnt <p>Number of available Lightweight Edition licenses</p>
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
                     * 获取<p>Auto-purchase switch. true: enabled; false: disabled.</p>
                     * @return AutoRepurchaseSwitch <p>Auto-purchase switch. true: enabled; false: disabled.</p>
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
                     * 获取<p>Whether auto-purchase orders are automatically renewed. true: enabled; false: disabled.</p>
                     * @return AutoRepurchaseRenewSwitch <p>Whether auto-purchase orders are automatically renewed. true: enabled; false: disabled.</p>
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
                     * 获取<p>Number of terminated orders</p>
                     * @return DestroyOrderNum <p>Number of terminated orders</p>
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
                     * 获取<p>Auto-renewal switch for auto-purchase. true: enabled; false: disabled.</p>
                     * @return RepurchaseRenewSwitch <p>Auto-renewal switch for auto-purchase. true: enabled; false: disabled.</p>
                     * 
                     */
                    bool GetRepurchaseRenewSwitch() const;

                    /**
                     * 判断参数 RepurchaseRenewSwitch 是否已赋值
                     * @return RepurchaseRenewSwitch 是否已赋值
                     * 
                     */
                    bool RepurchaseRenewSwitchHasBeenSet() const;

                    /**
                     * 获取<p>Whether to automatically bind RASP protection to newly added machines. false: disabled; true: enabled.</p>
                     * @return AutoBindRaspSwitch <p>Whether to automatically bind RASP protection to newly added machines. false: disabled; true: enabled.</p>
                     * 
                     */
                    bool GetAutoBindRaspSwitch() const;

                    /**
                     * 判断参数 AutoBindRaspSwitch 是否已赋值
                     * @return AutoBindRaspSwitch 是否已赋值
                     * 
                     */
                    bool AutoBindRaspSwitchHasBeenSet() const;

                    /**
                     * 获取<p>Whether to automatically enable RASP protection for newly added machines. false: disabled; true: enabled.</p>
                     * @return AutoOpenRaspSwitch <p>Whether to automatically enable RASP protection for newly added machines. false: disabled; true: enabled.</p>
                     * 
                     */
                    bool GetAutoOpenRaspSwitch() const;

                    /**
                     * 判断参数 AutoOpenRaspSwitch 是否已赋值
                     * @return AutoOpenRaspSwitch 是否已赋值
                     * 
                     */
                    bool AutoOpenRaspSwitchHasBeenSet() const;

                    /**
                     * 获取<p>Whether the auto-downgrade switch is enabled</p>
                     * @return AutoDowngradeSwitch <p>Whether the auto-downgrade switch is enabled</p>
                     * 
                     */
                    bool GetAutoDowngradeSwitch() const;

                    /**
                     * 判断参数 AutoDowngradeSwitch 是否已赋值
                     * @return AutoDowngradeSwitch 是否已赋值
                     * 
                     */
                    bool AutoDowngradeSwitchHasBeenSet() const;

                    /**
                     * 获取<p>Number of available AI Protection Edition licenses</p>
                     * @return AvailableAISecurityLicenseCnt <p>Number of available AI Protection Edition licenses</p>
                     * 
                     */
                    uint64_t GetAvailableAISecurityLicenseCnt() const;

                    /**
                     * 判断参数 AvailableAISecurityLicenseCnt 是否已赋值
                     * @return AvailableAISecurityLicenseCnt 是否已赋值
                     * 
                     */
                    bool AvailableAISecurityLicenseCntHasBeenSet() const;

                    /**
                     * 获取<p>Total number of AI Protection Edition licenses</p>
                     * @return AISecurityVersionLicenseCnt <p>Total number of AI Protection Edition licenses</p>
                     * 
                     */
                    uint64_t GetAISecurityVersionLicenseCnt() const;

                    /**
                     * 判断参数 AISecurityVersionLicenseCnt 是否已赋值
                     * @return AISecurityVersionLicenseCnt 是否已赋值
                     * 
                     */
                    bool AISecurityVersionLicenseCntHasBeenSet() const;

                    /**
                     * 获取<p>Number of available licenses after combining application protection licenses with Ultimate Edition licenses</p>
                     * @return ApplicationAvailableLicenseCnt <p>Number of available licenses after combining application protection licenses with Ultimate Edition licenses</p>
                     * 
                     */
                    uint64_t GetApplicationAvailableLicenseCnt() const;

                    /**
                     * 判断参数 ApplicationAvailableLicenseCnt 是否已赋值
                     * @return ApplicationAvailableLicenseCnt 是否已赋值
                     * 
                     */
                    bool ApplicationAvailableLicenseCntHasBeenSet() const;

                private:

                    /**
                     * <p>Total number of licenses (including unavailable licenses such as isolated and expired ones)</p>
                     */
                    uint64_t m_licenseCnt;
                    bool m_licenseCntHasBeenSet;

                    /**
                     * <p>Available licenses</p>
                     */
                    uint64_t m_availableLicenseCnt;
                    bool m_availableLicenseCntHasBeenSet;

                    /**
                     * <p>Number of available Pro Edition licenses (including postpaid licenses)</p>
                     */
                    uint64_t m_availableProVersionLicenseCnt;
                    bool m_availableProVersionLicenseCntHasBeenSet;

                    /**
                     * <p>Number of available Ultimate Edition licenses</p>
                     */
                    uint64_t m_availableFlagshipVersionLicenseCnt;
                    bool m_availableFlagshipVersionLicenseCntHasBeenSet;

                    /**
                     * <p>Number of licenses expiring within 15 days</p>
                     */
                    uint64_t m_nearExpiryLicenseCnt;
                    bool m_nearExpiryLicenseCntHasBeenSet;

                    /**
                     * <p>Number of expired licenses (excluding deleted records)</p>
                     */
                    uint64_t m_expireLicenseCnt;
                    bool m_expireLicenseCntHasBeenSet;

                    /**
                     * <p>Automatic upgrade switch status. Default value: false. true: enabled; false: disabled.</p>
                     */
                    bool m_autoOpenStatus;
                    bool m_autoOpenStatusHasBeenSet;

                    /**
                     * <p>PROVERSION_POSTPAY: Pro Edition - postpaid; PROVERSION_PREPAY: Pro Edition - prepaid; FLAGSHIP_PREPAY: Ultimate Edition - prepaid.</p>
                     */
                    std::string m_protectType;
                    bool m_protectTypeHasBeenSet;

                    /**
                     * <p>Whether automatic upgrade has been enabled before</p>
                     */
                    bool m_isOpenStatusHistory;
                    bool m_isOpenStatusHistoryHasBeenSet;

                    /**
                     * <p>Number of used licenses</p>
                     */
                    uint64_t m_usedLicenseCnt;
                    bool m_usedLicenseCntHasBeenSet;

                    /**
                     * <p>Number of unexpired licenses</p>
                     */
                    uint64_t m_notExpiredLicenseCnt;
                    bool m_notExpiredLicenseCntHasBeenSet;

                    /**
                     * <p>Total number of Ultimate Edition licenses (valid orders)</p>
                     */
                    uint64_t m_flagshipVersionLicenseCnt;
                    bool m_flagshipVersionLicenseCntHasBeenSet;

                    /**
                     * <p>Total number of Pro Edition licenses (valid orders)</p>
                     */
                    uint64_t m_proVersionLicenseCnt;
                    bool m_proVersionLicenseCntHasBeenSet;

                    /**
                     * <p>Lightweight edition total number of licenses (valid order licenses count)</p>
                     */
                    uint64_t m_cwpVersionLicenseCnt;
                    bool m_cwpVersionLicenseCntHasBeenSet;

                    /**
                     * <p>Number of available Lightweight Edition licenses</p>
                     */
                    uint64_t m_availableLHLicenseCnt;
                    bool m_availableLHLicenseCntHasBeenSet;

                    /**
                     * <p>Auto-purchase switch. true: enabled; false: disabled.</p>
                     */
                    bool m_autoRepurchaseSwitch;
                    bool m_autoRepurchaseSwitchHasBeenSet;

                    /**
                     * <p>Whether auto-purchase orders are automatically renewed. true: enabled; false: disabled.</p>
                     */
                    bool m_autoRepurchaseRenewSwitch;
                    bool m_autoRepurchaseRenewSwitchHasBeenSet;

                    /**
                     * <p>Number of terminated orders</p>
                     */
                    uint64_t m_destroyOrderNum;
                    bool m_destroyOrderNumHasBeenSet;

                    /**
                     * <p>Auto-renewal switch for auto-purchase. true: enabled; false: disabled.</p>
                     */
                    bool m_repurchaseRenewSwitch;
                    bool m_repurchaseRenewSwitchHasBeenSet;

                    /**
                     * <p>Whether to automatically bind RASP protection to newly added machines. false: disabled; true: enabled.</p>
                     */
                    bool m_autoBindRaspSwitch;
                    bool m_autoBindRaspSwitchHasBeenSet;

                    /**
                     * <p>Whether to automatically enable RASP protection for newly added machines. false: disabled; true: enabled.</p>
                     */
                    bool m_autoOpenRaspSwitch;
                    bool m_autoOpenRaspSwitchHasBeenSet;

                    /**
                     * <p>Whether the auto-downgrade switch is enabled</p>
                     */
                    bool m_autoDowngradeSwitch;
                    bool m_autoDowngradeSwitchHasBeenSet;

                    /**
                     * <p>Number of available AI Protection Edition licenses</p>
                     */
                    uint64_t m_availableAISecurityLicenseCnt;
                    bool m_availableAISecurityLicenseCntHasBeenSet;

                    /**
                     * <p>Total number of AI Protection Edition licenses</p>
                     */
                    uint64_t m_aISecurityVersionLicenseCnt;
                    bool m_aISecurityVersionLicenseCntHasBeenSet;

                    /**
                     * <p>Number of available licenses after combining application protection licenses with Ultimate Edition licenses</p>
                     */
                    uint64_t m_applicationAvailableLicenseCnt;
                    bool m_applicationAvailableLicenseCntHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBELICENSEGENERALRESPONSE_H_
