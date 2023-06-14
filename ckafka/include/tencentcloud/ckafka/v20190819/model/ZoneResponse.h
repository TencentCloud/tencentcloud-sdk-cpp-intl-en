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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_ZONERESPONSE_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_ZONERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/ZoneInfo.h>
#include <tencentcloud/ckafka/v20190819/model/Price.h>
#include <tencentcloud/ckafka/v20190819/model/ClusterInfo.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * The entity returned for the query of Kafka’s zone information
                */
                class ZoneResponse : public AbstractModel
                {
                public:
                    ZoneResponse();
                    ~ZoneResponse() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Zone list
                     * @return ZoneList Zone list
                     * 
                     */
                    std::vector<ZoneInfo> GetZoneList() const;

                    /**
                     * 设置Zone list
                     * @param _zoneList Zone list
                     * 
                     */
                    void SetZoneList(const std::vector<ZoneInfo>& _zoneList);

                    /**
                     * 判断参数 ZoneList 是否已赋值
                     * @return ZoneList 是否已赋值
                     * 
                     */
                    bool ZoneListHasBeenSet() const;

                    /**
                     * 获取Maximum number of instances to be purchased
                     * @return MaxBuyInstanceNum Maximum number of instances to be purchased
                     * 
                     */
                    int64_t GetMaxBuyInstanceNum() const;

                    /**
                     * 设置Maximum number of instances to be purchased
                     * @param _maxBuyInstanceNum Maximum number of instances to be purchased
                     * 
                     */
                    void SetMaxBuyInstanceNum(const int64_t& _maxBuyInstanceNum);

                    /**
                     * 判断参数 MaxBuyInstanceNum 是否已赋值
                     * @return MaxBuyInstanceNum 是否已赋值
                     * 
                     */
                    bool MaxBuyInstanceNumHasBeenSet() const;

                    /**
                     * 获取Maximum bandwidth in MB/S
                     * @return MaxBandwidth Maximum bandwidth in MB/S
                     * 
                     */
                    int64_t GetMaxBandwidth() const;

                    /**
                     * 设置Maximum bandwidth in MB/S
                     * @param _maxBandwidth Maximum bandwidth in MB/S
                     * 
                     */
                    void SetMaxBandwidth(const int64_t& _maxBandwidth);

                    /**
                     * 判断参数 MaxBandwidth 是否已赋值
                     * @return MaxBandwidth 是否已赋值
                     * 
                     */
                    bool MaxBandwidthHasBeenSet() const;

                    /**
                     * 获取Pay-as-you-go unit price
                     * @return UnitPrice Pay-as-you-go unit price
                     * 
                     */
                    Price GetUnitPrice() const;

                    /**
                     * 设置Pay-as-you-go unit price
                     * @param _unitPrice Pay-as-you-go unit price
                     * 
                     */
                    void SetUnitPrice(const Price& _unitPrice);

                    /**
                     * 判断参数 UnitPrice 是否已赋值
                     * @return UnitPrice 是否已赋值
                     * 
                     */
                    bool UnitPriceHasBeenSet() const;

                    /**
                     * 获取Pay-as-you-go unit message price
                     * @return MessagePrice Pay-as-you-go unit message price
                     * 
                     */
                    Price GetMessagePrice() const;

                    /**
                     * 设置Pay-as-you-go unit message price
                     * @param _messagePrice Pay-as-you-go unit message price
                     * 
                     */
                    void SetMessagePrice(const Price& _messagePrice);

                    /**
                     * 判断参数 MessagePrice 是否已赋值
                     * @return MessagePrice 是否已赋值
                     * 
                     */
                    bool MessagePriceHasBeenSet() const;

                    /**
                     * 获取Cluster information dedicated to a user
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return ClusterInfo Cluster information dedicated to a user
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ClusterInfo> GetClusterInfo() const;

                    /**
                     * 设置Cluster information dedicated to a user
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param _clusterInfo Cluster information dedicated to a user
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetClusterInfo(const std::vector<ClusterInfo>& _clusterInfo);

                    /**
                     * 判断参数 ClusterInfo 是否已赋值
                     * @return ClusterInfo 是否已赋值
                     * 
                     */
                    bool ClusterInfoHasBeenSet() const;

                    /**
                     * 获取Purchase of Standard Edition configurations
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return Standard Purchase of Standard Edition configurations
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStandard() const;

                    /**
                     * 设置Purchase of Standard Edition configurations
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param _standard Purchase of Standard Edition configurations
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStandard(const std::string& _standard);

                    /**
                     * 判断参数 Standard 是否已赋值
                     * @return Standard 是否已赋值
                     * 
                     */
                    bool StandardHasBeenSet() const;

                    /**
                     * 获取Purchase of Standard S2 Edition configurations
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return StandardS2 Purchase of Standard S2 Edition configurations
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStandardS2() const;

                    /**
                     * 设置Purchase of Standard S2 Edition configurations
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param _standardS2 Purchase of Standard S2 Edition configurations
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStandardS2(const std::string& _standardS2);

                    /**
                     * 判断参数 StandardS2 是否已赋值
                     * @return StandardS2 是否已赋值
                     * 
                     */
                    bool StandardS2HasBeenSet() const;

                    /**
                     * 获取Purchase of Pro Edition configurations
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return Profession Purchase of Pro Edition configurations
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProfession() const;

                    /**
                     * 设置Purchase of Pro Edition configurations
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param _profession Purchase of Pro Edition configurations
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProfession(const std::string& _profession);

                    /**
                     * 判断参数 Profession 是否已赋值
                     * @return Profession 是否已赋值
                     * 
                     */
                    bool ProfessionHasBeenSet() const;

                    /**
                     * 获取Purchase of Physical Dedicated Edition configurations
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return Physical Purchase of Physical Dedicated Edition configurations
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPhysical() const;

                    /**
                     * 设置Purchase of Physical Dedicated Edition configurations
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param _physical Purchase of Physical Dedicated Edition configurations
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPhysical(const std::string& _physical);

                    /**
                     * 判断参数 Physical 是否已赋值
                     * @return Physical 是否已赋值
                     * 
                     */
                    bool PhysicalHasBeenSet() const;

                    /**
                     * 获取Public network bandwidth.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return PublicNetwork Public network bandwidth.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPublicNetwork() const;

                    /**
                     * 设置Public network bandwidth.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _publicNetwork Public network bandwidth.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPublicNetwork(const std::string& _publicNetwork);

                    /**
                     * 判断参数 PublicNetwork 是否已赋值
                     * @return PublicNetwork 是否已赋值
                     * 
                     */
                    bool PublicNetworkHasBeenSet() const;

                    /**
                     * 获取Public network bandwidth configuration.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return PublicNetworkLimit Public network bandwidth configuration.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPublicNetworkLimit() const;

                    /**
                     * 设置Public network bandwidth configuration.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _publicNetworkLimit Public network bandwidth configuration.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPublicNetworkLimit(const std::string& _publicNetworkLimit);

                    /**
                     * 判断参数 PublicNetworkLimit 是否已赋值
                     * @return PublicNetworkLimit 是否已赋值
                     * 
                     */
                    bool PublicNetworkLimitHasBeenSet() const;

                private:

                    /**
                     * Zone list
                     */
                    std::vector<ZoneInfo> m_zoneList;
                    bool m_zoneListHasBeenSet;

                    /**
                     * Maximum number of instances to be purchased
                     */
                    int64_t m_maxBuyInstanceNum;
                    bool m_maxBuyInstanceNumHasBeenSet;

                    /**
                     * Maximum bandwidth in MB/S
                     */
                    int64_t m_maxBandwidth;
                    bool m_maxBandwidthHasBeenSet;

                    /**
                     * Pay-as-you-go unit price
                     */
                    Price m_unitPrice;
                    bool m_unitPriceHasBeenSet;

                    /**
                     * Pay-as-you-go unit message price
                     */
                    Price m_messagePrice;
                    bool m_messagePriceHasBeenSet;

                    /**
                     * Cluster information dedicated to a user
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::vector<ClusterInfo> m_clusterInfo;
                    bool m_clusterInfoHasBeenSet;

                    /**
                     * Purchase of Standard Edition configurations
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string m_standard;
                    bool m_standardHasBeenSet;

                    /**
                     * Purchase of Standard S2 Edition configurations
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string m_standardS2;
                    bool m_standardS2HasBeenSet;

                    /**
                     * Purchase of Pro Edition configurations
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string m_profession;
                    bool m_professionHasBeenSet;

                    /**
                     * Purchase of Physical Dedicated Edition configurations
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::string m_physical;
                    bool m_physicalHasBeenSet;

                    /**
                     * Public network bandwidth.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_publicNetwork;
                    bool m_publicNetworkHasBeenSet;

                    /**
                     * Public network bandwidth configuration.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_publicNetworkLimit;
                    bool m_publicNetworkLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_ZONERESPONSE_H_
