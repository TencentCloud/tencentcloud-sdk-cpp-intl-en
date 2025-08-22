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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_SPECSELLSTATUS_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_SPECSELLSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/ZoneStatus.h>
#include <tencentcloud/sqlserver/v20180328/model/Price.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * 
                */
                class SpecSellStatus : public AbstractModel
                {
                public:
                    SpecSellStatus();
                    ~SpecSellStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Id 
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置
                     * @param _id 
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取
                     * @return SpecId 
                     * 
                     */
                    uint64_t GetSpecId() const;

                    /**
                     * 设置
                     * @param _specId 
                     * 
                     */
                    void SetSpecId(const uint64_t& _specId);

                    /**
                     * 判断参数 SpecId 是否已赋值
                     * @return SpecId 是否已赋值
                     * 
                     */
                    bool SpecIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return PayModeStatus 
                     * 
                     */
                    std::string GetPayModeStatus() const;

                    /**
                     * 设置
                     * @param _payModeStatus 
                     * 
                     */
                    void SetPayModeStatus(const std::string& _payModeStatus);

                    /**
                     * 判断参数 PayModeStatus 是否已赋值
                     * @return PayModeStatus 是否已赋值
                     * 
                     */
                    bool PayModeStatusHasBeenSet() const;

                    /**
                     * 获取
                     * @return InstanceType 
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置
                     * @param _instanceType 
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取
                     * @return MultiZonesStatus 
                     * 
                     */
                    std::string GetMultiZonesStatus() const;

                    /**
                     * 设置
                     * @param _multiZonesStatus 
                     * 
                     */
                    void SetMultiZonesStatus(const std::string& _multiZonesStatus);

                    /**
                     * 判断参数 MultiZonesStatus 是否已赋值
                     * @return MultiZonesStatus 是否已赋值
                     * 
                     */
                    bool MultiZonesStatusHasBeenSet() const;

                    /**
                     * 获取
                     * @return Architecture 
                     * 
                     */
                    std::string GetArchitecture() const;

                    /**
                     * 设置
                     * @param _architecture 
                     * 
                     */
                    void SetArchitecture(const std::string& _architecture);

                    /**
                     * 判断参数 Architecture 是否已赋值
                     * @return Architecture 是否已赋值
                     * 
                     */
                    bool ArchitectureHasBeenSet() const;

                    /**
                     * 获取
                     * @return Style 
                     * 
                     */
                    std::string GetStyle() const;

                    /**
                     * 设置
                     * @param _style 
                     * 
                     */
                    void SetStyle(const std::string& _style);

                    /**
                     * 判断参数 Style 是否已赋值
                     * @return Style 是否已赋值
                     * 
                     */
                    bool StyleHasBeenSet() const;

                    /**
                     * 获取
                     * @return Version 
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置
                     * @param _version 
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取
                     * @return ZoneStatusSet 
                     * 
                     */
                    std::vector<ZoneStatus> GetZoneStatusSet() const;

                    /**
                     * 设置
                     * @param _zoneStatusSet 
                     * 
                     */
                    void SetZoneStatusSet(const std::vector<ZoneStatus>& _zoneStatusSet);

                    /**
                     * 判断参数 ZoneStatusSet 是否已赋值
                     * @return ZoneStatusSet 是否已赋值
                     * 
                     */
                    bool ZoneStatusSetHasBeenSet() const;

                    /**
                     * 获取
                     * @return Price 
                     * 
                     */
                    Price GetPrice() const;

                    /**
                     * 设置
                     * @param _price 
                     * 
                     */
                    void SetPrice(const Price& _price);

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     * 
                     */
                    bool PriceHasBeenSet() const;

                    /**
                     * 获取
                     * @return Status 
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置
                     * @param _status 
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_specId;
                    bool m_specIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_payModeStatus;
                    bool m_payModeStatusHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_multiZonesStatus;
                    bool m_multiZonesStatusHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_architecture;
                    bool m_architectureHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_style;
                    bool m_styleHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<ZoneStatus> m_zoneStatusSet;
                    bool m_zoneStatusSetHasBeenSet;

                    /**
                     * 
                     */
                    Price m_price;
                    bool m_priceHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_SPECSELLSTATUS_H_
