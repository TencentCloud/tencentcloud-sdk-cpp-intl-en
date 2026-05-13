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
                     * 获取<p>Availability zone</p>
                     * @return ZoneId <p>Availability zone</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>Availability zone</p>
                     * @param _zoneId <p>Availability zone</p>
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
                     * 获取<p>Whether the APP is internal</p><p>Enumeration value:</p><ul><li>0: Public</li><li>1: Internal</li></ul><p>Default value: 0</p>
                     * @return IsInternalApp <p>Whether the APP is internal</p><p>Enumeration value:</p><ul><li>0: Public</li><li>1: Internal</li></ul><p>Default value: 0</p>
                     * 
                     */
                    int64_t GetIsInternalApp() const;

                    /**
                     * 设置<p>Whether the APP is internal</p><p>Enumeration value:</p><ul><li>0: Public</li><li>1: Internal</li></ul><p>Default value: 0</p>
                     * @param _isInternalApp <p>Whether the APP is internal</p><p>Enumeration value:</p><ul><li>0: Public</li><li>1: Internal</li></ul><p>Default value: 0</p>
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
                     * 获取<p>AppID</p>
                     * @return AppId <p>AppID</p>
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置<p>AppID</p>
                     * @param _appId <p>AppID</p>
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
                     * 获取<p>Flag indicating whether the availability zone is sold out. true indicates sold out, false indicates not sold out.</p>
                     * @return Flag <p>Flag indicating whether the availability zone is sold out. true indicates sold out, false indicates not sold out.</p>
                     * 
                     */
                    bool GetFlag() const;

                    /**
                     * 设置<p>Flag indicating whether the availability zone is sold out. true indicates sold out, false indicates not sold out.</p>
                     * @param _flag <p>Flag indicating whether the availability zone is sold out. true indicates sold out, false indicates not sold out.</p>
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
                     * 获取<p>Availability zone name</p>
                     * @return ZoneName <p>Availability zone name</p>
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置<p>Availability zone name</p>
                     * @param _zoneName <p>Availability zone name</p>
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
                     * 获取<p>Availability zone status</p><p>Enumeration value:</p><ul><li>3: Enable</li><li>4: Disable</li></ul><p>AZ status is subject to SoldOut</p>
                     * @return ZoneStatus <p>Availability zone status</p><p>Enumeration value:</p><ul><li>3: Enable</li><li>4: Disable</li></ul><p>AZ status is subject to SoldOut</p>
                     * 
                     */
                    int64_t GetZoneStatus() const;

                    /**
                     * 设置<p>Availability zone status</p><p>Enumeration value:</p><ul><li>3: Enable</li><li>4: Disable</li></ul><p>AZ status is subject to SoldOut</p>
                     * @param _zoneStatus <p>Availability zone status</p><p>Enumeration value:</p><ul><li>3: Enable</li><li>4: Disable</li></ul><p>AZ status is subject to SoldOut</p>
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
                     * 获取<p>Additional flag</p>
                     * @return Exflag <p>Additional flag</p>
                     * @deprecated
                     */
                    std::string GetExflag() const;

                    /**
                     * 设置<p>Additional flag</p>
                     * @param _exflag <p>Additional flag</p>
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
                     * 获取<p>true indicates sold out, false indicates not sold out.</p>
                     * @return SoldOut <p>true indicates sold out, false indicates not sold out.</p>
                     * 
                     */
                    std::string GetSoldOut() const;

                    /**
                     * 设置<p>true indicates sold out, false indicates not sold out.</p>
                     * @param _soldOut <p>true indicates sold out, false indicates not sold out.</p>
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
                     * 获取<p>Standard version sell-out information</p>
                     * @return SalesInfo <p>Standard version sell-out information</p>
                     * 
                     */
                    std::vector<SaleInfo> GetSalesInfo() const;

                    /**
                     * 设置<p>Standard version sell-out information</p>
                     * @param _salesInfo <p>Standard version sell-out information</p>
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
                     * 获取<p>Additional flag</p>
                     * @return ExtraFlag <p>Additional flag</p>
                     * 
                     */
                    std::string GetExtraFlag() const;

                    /**
                     * 设置<p>Additional flag</p>
                     * @param _extraFlag <p>Additional flag</p>
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
                     * <p>Availability zone</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>Whether the APP is internal</p><p>Enumeration value:</p><ul><li>0: Public</li><li>1: Internal</li></ul><p>Default value: 0</p>
                     */
                    int64_t m_isInternalApp;
                    bool m_isInternalAppHasBeenSet;

                    /**
                     * <p>AppID</p>
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>Flag indicating whether the availability zone is sold out. true indicates sold out, false indicates not sold out.</p>
                     */
                    bool m_flag;
                    bool m_flagHasBeenSet;

                    /**
                     * <p>Availability zone name</p>
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * <p>Availability zone status</p><p>Enumeration value:</p><ul><li>3: Enable</li><li>4: Disable</li></ul><p>AZ status is subject to SoldOut</p>
                     */
                    int64_t m_zoneStatus;
                    bool m_zoneStatusHasBeenSet;

                    /**
                     * <p>Additional flag</p>
                     */
                    std::string m_exflag;
                    bool m_exflagHasBeenSet;

                    /**
                     * <p>true indicates sold out, false indicates not sold out.</p>
                     */
                    std::string m_soldOut;
                    bool m_soldOutHasBeenSet;

                    /**
                     * <p>Standard version sell-out information</p>
                     */
                    std::vector<SaleInfo> m_salesInfo;
                    bool m_salesInfoHasBeenSet;

                    /**
                     * <p>Additional flag</p>
                     */
                    std::string m_extraFlag;
                    bool m_extraFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_ZONEINFO_H_
