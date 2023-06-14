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
                     * 获取Zone ID
                     * @return ZoneId Zone ID
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Zone ID
                     * @param _zoneId Zone ID
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
                     * 获取Application ID
                     * @return AppId Application ID
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置Application ID
                     * @param _appId Application ID
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
                     * 获取Flag
                     * @return Flag Flag
                     * 
                     */
                    bool GetFlag() const;

                    /**
                     * 设置Flag
                     * @param _flag Flag
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
                     * 获取Zone name
                     * @return ZoneName Zone name
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置Zone name
                     * @param _zoneName Zone name
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
                     * 获取Zone status
                     * @return ZoneStatus Zone status
                     * 
                     */
                    int64_t GetZoneStatus() const;

                    /**
                     * 设置Zone status
                     * @param _zoneStatus Zone status
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
                     * 
                     */
                    std::string GetExflag() const;

                    /**
                     * 设置Extra flag
                     * @param _exflag Extra flag
                     * 
                     */
                    void SetExflag(const std::string& _exflag);

                    /**
                     * 判断参数 Exflag 是否已赋值
                     * @return Exflag 是否已赋值
                     * 
                     */
                    bool ExflagHasBeenSet() const;

                    /**
                     * 获取JSON object. The key is the model. The value `true` means “sold out”, and `false` means “not sold out”.
                     * @return SoldOut JSON object. The key is the model. The value `true` means “sold out”, and `false` means “not sold out”.
                     * 
                     */
                    std::string GetSoldOut() const;

                    /**
                     * 设置JSON object. The key is the model. The value `true` means “sold out”, and `false` means “not sold out”.
                     * @param _soldOut JSON object. The key is the model. The value `true` means “sold out”, and `false` means “not sold out”.
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
                     * 获取Information on whether Standard Edition has been sold out.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return SalesInfo Information on whether Standard Edition has been sold out.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<SaleInfo> GetSalesInfo() const;

                    /**
                     * 设置Information on whether Standard Edition has been sold out.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _salesInfo Information on whether Standard Edition has been sold out.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSalesInfo(const std::vector<SaleInfo>& _salesInfo);

                    /**
                     * 判断参数 SalesInfo 是否已赋值
                     * @return SalesInfo 是否已赋值
                     * 
                     */
                    bool SalesInfoHasBeenSet() const;

                private:

                    /**
                     * Zone ID
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Whether it is an internal application.
                     */
                    int64_t m_isInternalApp;
                    bool m_isInternalAppHasBeenSet;

                    /**
                     * Application ID
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Flag
                     */
                    bool m_flag;
                    bool m_flagHasBeenSet;

                    /**
                     * Zone name
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * Zone status
                     */
                    int64_t m_zoneStatus;
                    bool m_zoneStatusHasBeenSet;

                    /**
                     * Extra flag
                     */
                    std::string m_exflag;
                    bool m_exflagHasBeenSet;

                    /**
                     * JSON object. The key is the model. The value `true` means “sold out”, and `false` means “not sold out”.
                     */
                    std::string m_soldOut;
                    bool m_soldOutHasBeenSet;

                    /**
                     * Information on whether Standard Edition has been sold out.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<SaleInfo> m_salesInfo;
                    bool m_salesInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_ZONEINFO_H_
