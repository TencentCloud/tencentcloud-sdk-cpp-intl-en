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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_BILLINGDATA_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_BILLINGDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Billing data item.
                */
                class BillingData : public AbstractModel
                {
                public:
                    BillingData();
                    ~BillingData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Data timestamp.
                     * @return Time Data timestamp.
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置Data timestamp.
                     * @param _time Data timestamp.
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取Numeric value.
                     * @return Value Numeric value.
                     * 
                     */
                    uint64_t GetValue() const;

                    /**
                     * 设置Numeric value.
                     * @param _value Numeric value.
                     * 
                     */
                    void SetValue(const uint64_t& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取Site ID to which the data point belongs. If the content identifier feature is used, the value of this item is the content identifier.
                     * @return ZoneId Site ID to which the data point belongs. If the content identifier feature is used, the value of this item is the content identifier.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Site ID to which the data point belongs. If the content identifier feature is used, the value of this item is the content identifier.
                     * @param _zoneId Site ID to which the data point belongs. If the content identifier feature is used, the value of this item is the content identifier.
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
                     * 获取Domain name to which the data point belongs.
                     * @return Host Domain name to which the data point belongs.
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置Domain name to which the data point belongs.
                     * @param _host Domain name to which the data point belongs.
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取ID of the Layer 4 Proxy instance to which the data point belongs.
                     * @return ProxyId ID of the Layer 4 Proxy instance to which the data point belongs.
                     * 
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置ID of the Layer 4 Proxy instance to which the data point belongs.
                     * @param _proxyId ID of the Layer 4 Proxy instance to which the data point belongs.
                     * 
                     */
                    void SetProxyId(const std::string& _proxyId);

                    /**
                     * 判断参数 ProxyId 是否已赋值
                     * @return ProxyId 是否已赋值
                     * 
                     */
                    bool ProxyIdHasBeenSet() const;

                    /**
                     * 获取ID of the billing region to which the data point belongs. The billing region is determined by the region of the EdgeOne node that actually serves the user client. Valid values: <li>CH: Chinese mainland</li><li>AF: Africa</li><li>AS1: Asia Pacific zone 1</li><li>AS2: Asia Pacific zone 2</li><li>AS3: Asia Pacific zone 3</li><li>EU: Europe</li><li>MidEast: Middle East</li><li>NA: North America</li><li> SA: South America</li>
                     * @return RegionId ID of the billing region to which the data point belongs. The billing region is determined by the region of the EdgeOne node that actually serves the user client. Valid values: <li>CH: Chinese mainland</li><li>AF: Africa</li><li>AS1: Asia Pacific zone 1</li><li>AS2: Asia Pacific zone 2</li><li>AS3: Asia Pacific zone 3</li><li>EU: Europe</li><li>MidEast: Middle East</li><li>NA: North America</li><li> SA: South America</li>
                     * 
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置ID of the billing region to which the data point belongs. The billing region is determined by the region of the EdgeOne node that actually serves the user client. Valid values: <li>CH: Chinese mainland</li><li>AF: Africa</li><li>AS1: Asia Pacific zone 1</li><li>AS2: Asia Pacific zone 2</li><li>AS3: Asia Pacific zone 3</li><li>EU: Europe</li><li>MidEast: Middle East</li><li>NA: North America</li><li> SA: South America</li>
                     * @param _regionId ID of the billing region to which the data point belongs. The billing region is determined by the region of the EdgeOne node that actually serves the user client. Valid values: <li>CH: Chinese mainland</li><li>AF: Africa</li><li>AS1: Asia Pacific zone 1</li><li>AS2: Asia Pacific zone 2</li><li>AS3: Asia Pacific zone 3</li><li>EU: Europe</li><li>MidEast: Middle East</li><li>NA: North America</li><li> SA: South America</li>
                     * 
                     */
                    void SetRegionId(const std::string& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                private:

                    /**
                     * Data timestamp.
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * Numeric value.
                     */
                    uint64_t m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Site ID to which the data point belongs. If the content identifier feature is used, the value of this item is the content identifier.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Domain name to which the data point belongs.
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * ID of the Layer 4 Proxy instance to which the data point belongs.
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * ID of the billing region to which the data point belongs. The billing region is determined by the region of the EdgeOne node that actually serves the user client. Valid values: <li>CH: Chinese mainland</li><li>AF: Africa</li><li>AS1: Asia Pacific zone 1</li><li>AS2: Asia Pacific zone 2</li><li>AS3: Asia Pacific zone 3</li><li>EU: Europe</li><li>MidEast: Middle East</li><li>NA: North America</li><li> SA: South America</li>
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_BILLINGDATA_H_
