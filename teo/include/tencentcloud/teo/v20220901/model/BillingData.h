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
                     * 获取Specifies the data timestamp.
                     * @return Time Specifies the data timestamp.
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置Specifies the data timestamp.
                     * @param _time Specifies the data timestamp.
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
                     * 获取Site ID of the associated data point. if the content identifier feature is enabled, this item is the content identifier.
                     * @return ZoneId Site ID of the associated data point. if the content identifier feature is enabled, this item is the content identifier.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Site ID of the associated data point. if the content identifier feature is enabled, this item is the content identifier.
                     * @param _zoneId Site ID of the associated data point. if the content identifier feature is enabled, this item is the content identifier.
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
                     * 获取Specifies the domain name of the data point.
                     * @return Host Specifies the domain name of the data point.
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置Specifies the domain name of the data point.
                     * @param _host Specifies the domain name of the data point.
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
                     * 获取Specifies the layer-4 proxy instance ID the data point belongs to.
                     * @return ProxyId Specifies the layer-4 proxy instance ID the data point belongs to.
                     * 
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置Specifies the layer-4 proxy instance ID the data point belongs to.
                     * @param _proxyId Specifies the layer-4 proxy instance ID the data point belongs to.
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
                     * 获取Specifies the billing region ID the data point belongs to. the billing region is determined by the EdgeOne node region where the actual service user client is located. valid values: <li>CH: chinese mainland</li><li>AF: africa</li><li>AS1: asia pacific zone 1</li><li>AS2: asia pacific zone 2</li><li>AS3: asia pacific zone 3</li><li>EU: europe</li><li>MidEast: middle east</li><li>NA: north america</li><li>SA: south america</li>.
                     * @return RegionId Specifies the billing region ID the data point belongs to. the billing region is determined by the EdgeOne node region where the actual service user client is located. valid values: <li>CH: chinese mainland</li><li>AF: africa</li><li>AS1: asia pacific zone 1</li><li>AS2: asia pacific zone 2</li><li>AS3: asia pacific zone 3</li><li>EU: europe</li><li>MidEast: middle east</li><li>NA: north america</li><li>SA: south america</li>.
                     * 
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置Specifies the billing region ID the data point belongs to. the billing region is determined by the EdgeOne node region where the actual service user client is located. valid values: <li>CH: chinese mainland</li><li>AF: africa</li><li>AS1: asia pacific zone 1</li><li>AS2: asia pacific zone 2</li><li>AS3: asia pacific zone 3</li><li>EU: europe</li><li>MidEast: middle east</li><li>NA: north america</li><li>SA: south america</li>.
                     * @param _regionId Specifies the billing region ID the data point belongs to. the billing region is determined by the EdgeOne node region where the actual service user client is located. valid values: <li>CH: chinese mainland</li><li>AF: africa</li><li>AS1: asia pacific zone 1</li><li>AS2: asia pacific zone 2</li><li>AS3: asia pacific zone 3</li><li>EU: europe</li><li>MidEast: middle east</li><li>NA: north america</li><li>SA: south america</li>.
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
                     * Specifies the data timestamp.
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * Value.
                     */
                    uint64_t m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Site ID of the associated data point. if the content identifier feature is enabled, this item is the content identifier.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Specifies the domain name of the data point.
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * Specifies the layer-4 proxy instance ID the data point belongs to.
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * Specifies the billing region ID the data point belongs to. the billing region is determined by the EdgeOne node region where the actual service user client is located. valid values: <li>CH: chinese mainland</li><li>AF: africa</li><li>AS1: asia pacific zone 1</li><li>AS2: asia pacific zone 2</li><li>AS3: asia pacific zone 3</li><li>EU: europe</li><li>MidEast: middle east</li><li>NA: north america</li><li>SA: south america</li>.
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_BILLINGDATA_H_
