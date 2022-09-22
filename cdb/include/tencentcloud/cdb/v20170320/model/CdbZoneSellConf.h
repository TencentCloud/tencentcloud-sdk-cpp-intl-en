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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_CDBZONESELLCONF_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_CDBZONESELLCONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/ZoneConf.h>
#include <tencentcloud/cdb/v20170320/model/CdbSellType.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * Purchasable specifications in an AZ
                */
                class CdbZoneSellConf : public AbstractModel
                {
                public:
                    CdbZoneSellConf();
                    ~CdbZoneSellConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取AZ status, which is used to indicate whether instances are purchasable. Valid values: `1` (purchasable), `3` (not purchasable), `4` (AZ not displayed)
                     * @return Status AZ status, which is used to indicate whether instances are purchasable. Valid values: `1` (purchasable), `3` (not purchasable), `4` (AZ not displayed)
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置AZ status, which is used to indicate whether instances are purchasable. Valid values: `1` (purchasable), `3` (not purchasable), `4` (AZ not displayed)
                     * @param Status AZ status, which is used to indicate whether instances are purchasable. Valid values: `1` (purchasable), `3` (not purchasable), `4` (AZ not displayed)
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取AZ name
                     * @return ZoneName AZ name
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置AZ name
                     * @param ZoneName AZ name
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取Whether it is a custom instance type
                     * @return IsCustom Whether it is a custom instance type
                     */
                    bool GetIsCustom() const;

                    /**
                     * 设置Whether it is a custom instance type
                     * @param IsCustom Whether it is a custom instance type
                     */
                    void SetIsCustom(const bool& _isCustom);

                    /**
                     * 判断参数 IsCustom 是否已赋值
                     * @return IsCustom 是否已赋值
                     */
                    bool IsCustomHasBeenSet() const;

                    /**
                     * 获取Whether disaster recovery is supported
                     * @return IsSupportDr Whether disaster recovery is supported
                     */
                    bool GetIsSupportDr() const;

                    /**
                     * 设置Whether disaster recovery is supported
                     * @param IsSupportDr Whether disaster recovery is supported
                     */
                    void SetIsSupportDr(const bool& _isSupportDr);

                    /**
                     * 判断参数 IsSupportDr 是否已赋值
                     * @return IsSupportDr 是否已赋值
                     */
                    bool IsSupportDrHasBeenSet() const;

                    /**
                     * 获取Whether VPC is supported
                     * @return IsSupportVpc Whether VPC is supported
                     */
                    bool GetIsSupportVpc() const;

                    /**
                     * 设置Whether VPC is supported
                     * @param IsSupportVpc Whether VPC is supported
                     */
                    void SetIsSupportVpc(const bool& _isSupportVpc);

                    /**
                     * 判断参数 IsSupportVpc 是否已赋值
                     * @return IsSupportVpc 是否已赋值
                     */
                    bool IsSupportVpcHasBeenSet() const;

                    /**
                     * 获取Maximum purchasable quantity of hourly billed instances
                     * @return HourInstanceSaleMaxNum Maximum purchasable quantity of hourly billed instances
                     */
                    int64_t GetHourInstanceSaleMaxNum() const;

                    /**
                     * 设置Maximum purchasable quantity of hourly billed instances
                     * @param HourInstanceSaleMaxNum Maximum purchasable quantity of hourly billed instances
                     */
                    void SetHourInstanceSaleMaxNum(const int64_t& _hourInstanceSaleMaxNum);

                    /**
                     * 判断参数 HourInstanceSaleMaxNum 是否已赋值
                     * @return HourInstanceSaleMaxNum 是否已赋值
                     */
                    bool HourInstanceSaleMaxNumHasBeenSet() const;

                    /**
                     * 获取Whether it is a default AZ
                     * @return IsDefaultZone Whether it is a default AZ
                     */
                    bool GetIsDefaultZone() const;

                    /**
                     * 设置Whether it is a default AZ
                     * @param IsDefaultZone Whether it is a default AZ
                     */
                    void SetIsDefaultZone(const bool& _isDefaultZone);

                    /**
                     * 判断参数 IsDefaultZone 是否已赋值
                     * @return IsDefaultZone 是否已赋值
                     */
                    bool IsDefaultZoneHasBeenSet() const;

                    /**
                     * 获取Whether it is a BM zone
                     * @return IsBm Whether it is a BM zone
                     */
                    bool GetIsBm() const;

                    /**
                     * 设置Whether it is a BM zone
                     * @param IsBm Whether it is a BM zone
                     */
                    void SetIsBm(const bool& _isBm);

                    /**
                     * 判断参数 IsBm 是否已赋值
                     * @return IsBm 是否已赋值
                     */
                    bool IsBmHasBeenSet() const;

                    /**
                     * 获取Supported billing method. Valid values: `0` (monthly subscribed), `1` (hourly billed), `2` (pay-as-you-go)
                     * @return PayType Supported billing method. Valid values: `0` (monthly subscribed), `1` (hourly billed), `2` (pay-as-you-go)
                     */
                    std::vector<std::string> GetPayType() const;

                    /**
                     * 设置Supported billing method. Valid values: `0` (monthly subscribed), `1` (hourly billed), `2` (pay-as-you-go)
                     * @param PayType Supported billing method. Valid values: `0` (monthly subscribed), `1` (hourly billed), `2` (pay-as-you-go)
                     */
                    void SetPayType(const std::vector<std::string>& _payType);

                    /**
                     * 判断参数 PayType 是否已赋值
                     * @return PayType 是否已赋值
                     */
                    bool PayTypeHasBeenSet() const;

                    /**
                     * 获取Data replication type. Valid values: `0` (async), `1` (semi-sync), `2` (strong sync)
                     * @return ProtectMode Data replication type. Valid values: `0` (async), `1` (semi-sync), `2` (strong sync)
                     */
                    std::vector<std::string> GetProtectMode() const;

                    /**
                     * 设置Data replication type. Valid values: `0` (async), `1` (semi-sync), `2` (strong sync)
                     * @param ProtectMode Data replication type. Valid values: `0` (async), `1` (semi-sync), `2` (strong sync)
                     */
                    void SetProtectMode(const std::vector<std::string>& _protectMode);

                    /**
                     * 判断参数 ProtectMode 是否已赋值
                     * @return ProtectMode 是否已赋值
                     */
                    bool ProtectModeHasBeenSet() const;

                    /**
                     * 获取AZ name
                     * @return Zone AZ name
                     */
                    std::string GetZone() const;

                    /**
                     * 设置AZ name
                     * @param Zone AZ name
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Multi-AZ information
                     * @return ZoneConf Multi-AZ information
                     */
                    ZoneConf GetZoneConf() const;

                    /**
                     * 设置Multi-AZ information
                     * @param ZoneConf Multi-AZ information
                     */
                    void SetZoneConf(const ZoneConf& _zoneConf);

                    /**
                     * 判断参数 ZoneConf 是否已赋值
                     * @return ZoneConf 是否已赋值
                     */
                    bool ZoneConfHasBeenSet() const;

                    /**
                     * 获取Information of supported disaster recovery AZs
                     * @return DrZone Information of supported disaster recovery AZs
                     */
                    std::vector<std::string> GetDrZone() const;

                    /**
                     * 设置Information of supported disaster recovery AZs
                     * @param DrZone Information of supported disaster recovery AZs
                     */
                    void SetDrZone(const std::vector<std::string>& _drZone);

                    /**
                     * 判断参数 DrZone 是否已赋值
                     * @return DrZone 是否已赋值
                     */
                    bool DrZoneHasBeenSet() const;

                    /**
                     * 获取Whether cross-AZ read-only access is supported
                     * @return IsSupportRemoteRo Whether cross-AZ read-only access is supported
                     */
                    bool GetIsSupportRemoteRo() const;

                    /**
                     * 设置Whether cross-AZ read-only access is supported
                     * @param IsSupportRemoteRo Whether cross-AZ read-only access is supported
                     */
                    void SetIsSupportRemoteRo(const bool& _isSupportRemoteRo);

                    /**
                     * 判断参数 IsSupportRemoteRo 是否已赋值
                     * @return IsSupportRemoteRo 是否已赋值
                     */
                    bool IsSupportRemoteRoHasBeenSet() const;

                    /**
                     * 获取Information of supported cross-AZ read-only zone
                     * @return RemoteRoZone Information of supported cross-AZ read-only zone
                     */
                    std::vector<std::string> GetRemoteRoZone() const;

                    /**
                     * 设置Information of supported cross-AZ read-only zone
                     * @param RemoteRoZone Information of supported cross-AZ read-only zone
                     */
                    void SetRemoteRoZone(const std::vector<std::string>& _remoteRoZone);

                    /**
                     * 判断参数 RemoteRoZone 是否已赋值
                     * @return RemoteRoZone 是否已赋值
                     */
                    bool RemoteRoZoneHasBeenSet() const;

                    /**
                     * 获取AZ status, which is used to indicate whether dedicated instances are purchasable. Valid values: `1 (purchasable), `3` (not purchasable), `4` (AZ not displayed)
                     * @return ExClusterStatus AZ status, which is used to indicate whether dedicated instances are purchasable. Valid values: `1 (purchasable), `3` (not purchasable), `4` (AZ not displayed)
                     */
                    int64_t GetExClusterStatus() const;

                    /**
                     * 设置AZ status, which is used to indicate whether dedicated instances are purchasable. Valid values: `1 (purchasable), `3` (not purchasable), `4` (AZ not displayed)
                     * @param ExClusterStatus AZ status, which is used to indicate whether dedicated instances are purchasable. Valid values: `1 (purchasable), `3` (not purchasable), `4` (AZ not displayed)
                     */
                    void SetExClusterStatus(const int64_t& _exClusterStatus);

                    /**
                     * 判断参数 ExClusterStatus 是否已赋值
                     * @return ExClusterStatus 是否已赋值
                     */
                    bool ExClusterStatusHasBeenSet() const;

                    /**
                     * 获取Information of cross-AZ read-only zones supported by a dedicated instance
                     * @return ExClusterRemoteRoZone Information of cross-AZ read-only zones supported by a dedicated instance
                     */
                    std::vector<std::string> GetExClusterRemoteRoZone() const;

                    /**
                     * 设置Information of cross-AZ read-only zones supported by a dedicated instance
                     * @param ExClusterRemoteRoZone Information of cross-AZ read-only zones supported by a dedicated instance
                     */
                    void SetExClusterRemoteRoZone(const std::vector<std::string>& _exClusterRemoteRoZone);

                    /**
                     * 判断参数 ExClusterRemoteRoZone 是否已赋值
                     * @return ExClusterRemoteRoZone 是否已赋值
                     */
                    bool ExClusterRemoteRoZoneHasBeenSet() const;

                    /**
                     * 获取AZ information of a multi-AZ deployed dedicated instance.
                     * @return ExClusterZoneConf AZ information of a multi-AZ deployed dedicated instance.
                     */
                    ZoneConf GetExClusterZoneConf() const;

                    /**
                     * 设置AZ information of a multi-AZ deployed dedicated instance.
                     * @param ExClusterZoneConf AZ information of a multi-AZ deployed dedicated instance.
                     */
                    void SetExClusterZoneConf(const ZoneConf& _exClusterZoneConf);

                    /**
                     * 判断参数 ExClusterZoneConf 是否已赋值
                     * @return ExClusterZoneConf 是否已赋值
                     */
                    bool ExClusterZoneConfHasBeenSet() const;

                    /**
                     * 获取Array of purchasable instance types. The value of `configIds` and `configs` have a one-to-one correspondence.
                     * @return SellType Array of purchasable instance types. The value of `configIds` and `configs` have a one-to-one correspondence.
                     */
                    std::vector<CdbSellType> GetSellType() const;

                    /**
                     * 设置Array of purchasable instance types. The value of `configIds` and `configs` have a one-to-one correspondence.
                     * @param SellType Array of purchasable instance types. The value of `configIds` and `configs` have a one-to-one correspondence.
                     */
                    void SetSellType(const std::vector<CdbSellType>& _sellType);

                    /**
                     * 判断参数 SellType 是否已赋值
                     * @return SellType 是否已赋值
                     */
                    bool SellTypeHasBeenSet() const;

                    /**
                     * 获取AZ ID
                     * @return ZoneId AZ ID
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置AZ ID
                     * @param ZoneId AZ ID
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Whether IPv6 is supported
                     * @return IsSupportIpv6 Whether IPv6 is supported
                     */
                    bool GetIsSupportIpv6() const;

                    /**
                     * 设置Whether IPv6 is supported
                     * @param IsSupportIpv6 Whether IPv6 is supported
                     */
                    void SetIsSupportIpv6(const bool& _isSupportIpv6);

                    /**
                     * 判断参数 IsSupportIpv6 是否已赋值
                     * @return IsSupportIpv6 是否已赋值
                     */
                    bool IsSupportIpv6HasBeenSet() const;

                    /**
                     * 获取Supported engine types for purchasable database
                     * @return EngineType Supported engine types for purchasable database
                     */
                    std::vector<std::string> GetEngineType() const;

                    /**
                     * 设置Supported engine types for purchasable database
                     * @param EngineType Supported engine types for purchasable database
                     */
                    void SetEngineType(const std::vector<std::string>& _engineType);

                    /**
                     * 判断参数 EngineType 是否已赋值
                     * @return EngineType 是否已赋值
                     */
                    bool EngineTypeHasBeenSet() const;

                private:

                    /**
                     * AZ status, which is used to indicate whether instances are purchasable. Valid values: `1` (purchasable), `3` (not purchasable), `4` (AZ not displayed)
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * AZ name
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * Whether it is a custom instance type
                     */
                    bool m_isCustom;
                    bool m_isCustomHasBeenSet;

                    /**
                     * Whether disaster recovery is supported
                     */
                    bool m_isSupportDr;
                    bool m_isSupportDrHasBeenSet;

                    /**
                     * Whether VPC is supported
                     */
                    bool m_isSupportVpc;
                    bool m_isSupportVpcHasBeenSet;

                    /**
                     * Maximum purchasable quantity of hourly billed instances
                     */
                    int64_t m_hourInstanceSaleMaxNum;
                    bool m_hourInstanceSaleMaxNumHasBeenSet;

                    /**
                     * Whether it is a default AZ
                     */
                    bool m_isDefaultZone;
                    bool m_isDefaultZoneHasBeenSet;

                    /**
                     * Whether it is a BM zone
                     */
                    bool m_isBm;
                    bool m_isBmHasBeenSet;

                    /**
                     * Supported billing method. Valid values: `0` (monthly subscribed), `1` (hourly billed), `2` (pay-as-you-go)
                     */
                    std::vector<std::string> m_payType;
                    bool m_payTypeHasBeenSet;

                    /**
                     * Data replication type. Valid values: `0` (async), `1` (semi-sync), `2` (strong sync)
                     */
                    std::vector<std::string> m_protectMode;
                    bool m_protectModeHasBeenSet;

                    /**
                     * AZ name
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Multi-AZ information
                     */
                    ZoneConf m_zoneConf;
                    bool m_zoneConfHasBeenSet;

                    /**
                     * Information of supported disaster recovery AZs
                     */
                    std::vector<std::string> m_drZone;
                    bool m_drZoneHasBeenSet;

                    /**
                     * Whether cross-AZ read-only access is supported
                     */
                    bool m_isSupportRemoteRo;
                    bool m_isSupportRemoteRoHasBeenSet;

                    /**
                     * Information of supported cross-AZ read-only zone
                     */
                    std::vector<std::string> m_remoteRoZone;
                    bool m_remoteRoZoneHasBeenSet;

                    /**
                     * AZ status, which is used to indicate whether dedicated instances are purchasable. Valid values: `1 (purchasable), `3` (not purchasable), `4` (AZ not displayed)
                     */
                    int64_t m_exClusterStatus;
                    bool m_exClusterStatusHasBeenSet;

                    /**
                     * Information of cross-AZ read-only zones supported by a dedicated instance
                     */
                    std::vector<std::string> m_exClusterRemoteRoZone;
                    bool m_exClusterRemoteRoZoneHasBeenSet;

                    /**
                     * AZ information of a multi-AZ deployed dedicated instance.
                     */
                    ZoneConf m_exClusterZoneConf;
                    bool m_exClusterZoneConfHasBeenSet;

                    /**
                     * Array of purchasable instance types. The value of `configIds` and `configs` have a one-to-one correspondence.
                     */
                    std::vector<CdbSellType> m_sellType;
                    bool m_sellTypeHasBeenSet;

                    /**
                     * AZ ID
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Whether IPv6 is supported
                     */
                    bool m_isSupportIpv6;
                    bool m_isSupportIpv6HasBeenSet;

                    /**
                     * Supported engine types for purchasable database
                     */
                    std::vector<std::string> m_engineType;
                    bool m_engineTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_CDBZONESELLCONF_H_
