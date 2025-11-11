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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_ZONEINFO_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_ZONEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/SaleInfo.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * Zone information entity
                */
                class ZoneInfo : public AbstractModel
                {
                public:
                    ZoneInfo();
                    ~ZoneInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Availability zone
                     * @return ZoneId Availability zone
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Availability zone
                     * @param _zoneId Availability zone
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Whether it is an internal application.
                     * @return IsInternalApp Whether it is an internal application.
                     * 
                     */
                    int64_t GetIsInternalApp() const;

                    /**
                     * 设置Whether it is an internal application.
                     * @param _isInternalApp Whether it is an internal application.
                     * 
                     */
                    void SetIsInternalApp(const int64_t& _isInternalApp);

                    /**
                     * 判断参数 IsInternalApp 是否已赋值
                     * @return IsInternalApp 是否已赋值
                     * 
                     */
                    bool IsInternalAppHasBeenSet() const;

                    /**
                     * 获取Application identifier
                     * @return AppId Application identifier
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置Application identifier
                     * @param _appId Application identifier
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取Indicates whether the AZ is sold out. true indicates sold out. false indicates not sold out.
                     * @return Flag Indicates whether the AZ is sold out. true indicates sold out. false indicates not sold out.
                     * 
                     */
                    bool GetFlag() const;

                    /**
                     * 设置Indicates whether the AZ is sold out. true indicates sold out. false indicates not sold out.
                     * @param _flag Indicates whether the AZ is sold out. true indicates sold out. false indicates not sold out.
                     * 
                     */
                    void SetFlag(const bool& _flag);

                    /**
                     * 判断参数 Flag 是否已赋值
                     * @return Flag 是否已赋值
                     * 
                     */
                    bool FlagHasBeenSet() const;

                    /**
                     * 获取Availability zone name.
                     * @return ZoneName Availability zone name.
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置Availability zone name.
                     * @param _zoneName Availability zone name.
                     * 
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     * 
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取Availability zone status. enumerates example: 3: enable, 4: disable. availability zone status is subject to SoldOut.
                     * @return ZoneStatus Availability zone status. enumerates example: 3: enable, 4: disable. availability zone status is subject to SoldOut.
                     * 
                     */
                    int64_t GetZoneStatus() const;

                    /**
                     * 设置Availability zone status. enumerates example: 3: enable, 4: disable. availability zone status is subject to SoldOut.
                     * @param _zoneStatus Availability zone status. enumerates example: 3: enable, 4: disable. availability zone status is subject to SoldOut.
                     * 
                     */
                    void SetZoneStatus(const int64_t& _zoneStatus);

                    /**
                     * 判断参数 ZoneStatus 是否已赋值
                     * @return ZoneStatus 是否已赋值
                     * 
                     */
                    bool ZoneStatusHasBeenSet() const;

                    /**
                     * 获取Extra flag
                     * @return Exflag Extra flag
                     * @deprecated
                     */
                    std::string GetExflag() const;

                    /**
                     * 设置Extra flag
                     * @param _exflag Extra flag
                     * @deprecated
                     */
                    void SetExflag(const std::string& _exflag);

                    /**
                     * 判断参数 Exflag 是否已赋值
                     * @return Exflag 是否已赋值
                     * @deprecated
                     */
                    bool ExflagHasBeenSet() const;

                    /**
                     * 获取Specifies whether the item is sold-out. valid values: true (sold-out), false (not sold out).
                     * @return SoldOut Specifies whether the item is sold-out. valid values: true (sold-out), false (not sold out).
                     * 
                     */
                    std::string GetSoldOut() const;

                    /**
                     * 设置Specifies whether the item is sold-out. valid values: true (sold-out), false (not sold out).
                     * @param _soldOut Specifies whether the item is sold-out. valid values: true (sold-out), false (not sold out).
                     * 
                     */
                    void SetSoldOut(const std::string& _soldOut);

                    /**
                     * 判断参数 SoldOut 是否已赋值
                     * @return SoldOut 是否已赋值
                     * 
                     */
                    bool SoldOutHasBeenSet() const;

                    /**
                     * 获取Specifies the sell-out information of the standard version.
                     * @return SalesInfo Specifies the sell-out information of the standard version.
                     * 
                     */
                    std::vector<SaleInfo> GetSalesInfo() const;

                    /**
                     * 设置Specifies the sell-out information of the standard version.
                     * @param _salesInfo Specifies the sell-out information of the standard version.
                     * 
                     */
                    void SetSalesInfo(const std::vector<SaleInfo>& _salesInfo);

                    /**
                     * 判断参数 SalesInfo 是否已赋值
                     * @return SalesInfo 是否已赋值
                     * 
                     */
                    bool SalesInfoHasBeenSet() const;

                    /**
                     * 获取Additional flag.
                     * @return ExtraFlag Additional flag.
                     * 
                     */
                    std::string GetExtraFlag() const;

                    /**
                     * 设置Additional flag.
                     * @param _extraFlag Additional flag.
                     * 
                     */
                    void SetExtraFlag(const std::string& _extraFlag);

                    /**
                     * 判断参数 ExtraFlag 是否已赋值
                     * @return ExtraFlag 是否已赋值
                     * 
                     */
                    bool ExtraFlagHasBeenSet() const;

                private:

                    /**
                     * Availability zone
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Whether it is an internal application.
                     */
                    int64_t m_isInternalApp;
                    bool m_isInternalAppHasBeenSet;

                    /**
                     * Application identifier
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Indicates whether the AZ is sold out. true indicates sold out. false indicates not sold out.
                     */
                    bool m_flag;
                    bool m_flagHasBeenSet;

                    /**
                     * Availability zone name.
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * Availability zone status. enumerates example: 3: enable, 4: disable. availability zone status is subject to SoldOut.
                     */
                    int64_t m_zoneStatus;
                    bool m_zoneStatusHasBeenSet;

                    /**
                     * Extra flag
                     */
                    std::string m_exflag;
                    bool m_exflagHasBeenSet;

                    /**
                     * Specifies whether the item is sold-out. valid values: true (sold-out), false (not sold out).
                     */
                    std::string m_soldOut;
                    bool m_soldOutHasBeenSet;

                    /**
                     * Specifies the sell-out information of the standard version.
                     */
                    std::vector<SaleInfo> m_salesInfo;
                    bool m_salesInfoHasBeenSet;

                    /**
                     * Additional flag.
                     */
                    std::string m_extraFlag;
                    bool m_extraFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_ZONEINFO_H_
