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
                * Billing data item
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
                     * 获取Value.
                     * @return Value Value.
                     * 
                     */
                    uint64_t GetValue() const;

                    /**
                     * 设置Value.
                     * @param _value Value.
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
                     * 获取Zone ID (or content identifier if enabled).
                     * @return ZoneId Zone ID (or content identifier if enabled).
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Zone ID (or content identifier if enabled).
                     * @param _zoneId Zone ID (or content identifier if enabled).
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
                     * 获取Domain name.
                     * @return Host Domain name.
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置Domain name.
                     * @param _host Domain name.
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
                     * 获取Layer-4 proxy instance ID.
                     * @return ProxyId Layer-4 proxy instance ID.
                     * 
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置Layer-4 proxy instance ID.
                     * @param _proxyId Layer-4 proxy instance ID.
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
                     * 获取Billing region (based on EdgeOne node location). Values: 
<li>CH: Mainland China</li> <li>AF: Africa</li> <li>AS1: Asia Pacific Region 1</li> <li>AS2: Asia Pacific Region 2</li> <li>AS3: Asia Pacific Region 3</li> <li>EU: Europe</li> <li>MidEast: Middle East</li> <li>NA: North America</li> <li>SA: South America</li>
                     * @return RegionId Billing region (based on EdgeOne node location). Values: 
<li>CH: Mainland China</li> <li>AF: Africa</li> <li>AS1: Asia Pacific Region 1</li> <li>AS2: Asia Pacific Region 2</li> <li>AS3: Asia Pacific Region 3</li> <li>EU: Europe</li> <li>MidEast: Middle East</li> <li>NA: North America</li> <li>SA: South America</li>
                     * 
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置Billing region (based on EdgeOne node location). Values: 
<li>CH: Mainland China</li> <li>AF: Africa</li> <li>AS1: Asia Pacific Region 1</li> <li>AS2: Asia Pacific Region 2</li> <li>AS3: Asia Pacific Region 3</li> <li>EU: Europe</li> <li>MidEast: Middle East</li> <li>NA: North America</li> <li>SA: South America</li>
                     * @param _regionId Billing region (based on EdgeOne node location). Values: 
<li>CH: Mainland China</li> <li>AF: Africa</li> <li>AS1: Asia Pacific Region 1</li> <li>AS2: Asia Pacific Region 2</li> <li>AS3: Asia Pacific Region 3</li> <li>EU: Europe</li> <li>MidEast: Middle East</li> <li>NA: North America</li> <li>SA: South America</li>
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
                     * Value.
                     */
                    uint64_t m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Zone ID (or content identifier if enabled).
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Domain name.
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * Layer-4 proxy instance ID.
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * Billing region (based on EdgeOne node location). Values: 
<li>CH: Mainland China</li> <li>AF: Africa</li> <li>AS1: Asia Pacific Region 1</li> <li>AS2: Asia Pacific Region 2</li> <li>AS3: Asia Pacific Region 3</li> <li>EU: Europe</li> <li>MidEast: Middle East</li> <li>NA: North America</li> <li>SA: South America</li>
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_BILLINGDATA_H_
