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
                     * 获取<P>Specifies the zone list.</p>.
                     * @return ZoneList <P>Specifies the zone list.</p>.
                     * 
                     */
                    std::vector<ZoneInfo> GetZoneList() const;

                    /**
                     * 设置<P>Specifies the zone list.</p>.
                     * @param _zoneList <P>Specifies the zone list.</p>.
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
                     * 获取<P>Maximum number of instances that can be purchased.</p>.
                     * @return MaxBuyInstanceNum <P>Maximum number of instances that can be purchased.</p>.
                     * 
                     */
                    int64_t GetMaxBuyInstanceNum() const;

                    /**
                     * 设置<P>Maximum number of instances that can be purchased.</p>.
                     * @param _maxBuyInstanceNum <P>Maximum number of instances that can be purchased.</p>.
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
                     * 获取<p>Maximum purchase bandwidth in Mb/s.</p>.
                     * @return MaxBandwidth <p>Maximum purchase bandwidth in Mb/s.</p>.
                     * 
                     */
                    int64_t GetMaxBandwidth() const;

                    /**
                     * 设置<p>Maximum purchase bandwidth in Mb/s.</p>.
                     * @param _maxBandwidth <p>Maximum purchase bandwidth in Mb/s.</p>.
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
                     * 获取<P>Unit price for postpayment.</p>.
                     * @return UnitPrice <P>Unit price for postpayment.</p>.
                     * 
                     */
                    Price GetUnitPrice() const;

                    /**
                     * 设置<P>Unit price for postpayment.</p>.
                     * @param _unitPrice <P>Unit price for postpayment.</p>.
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
                     * 获取<P>Message unit price for postpayment.</p>.
                     * @return MessagePrice <P>Message unit price for postpayment.</p>.
                     * 
                     */
                    Price GetMessagePrice() const;

                    /**
                     * 设置<P>Message unit price for postpayment.</p>.
                     * @param _messagePrice <P>Message unit price for postpayment.</p>.
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
                     * 获取<P>User-Exclusive cluster information.</p>.
                     * @return ClusterInfo <P>User-Exclusive cluster information.</p>.
                     * 
                     */
                    std::vector<ClusterInfo> GetClusterInfo() const;

                    /**
                     * 设置<P>User-Exclusive cluster information.</p>.
                     * @param _clusterInfo <P>User-Exclusive cluster information.</p>.
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
                     * 获取<P>Specifies the standard version configuration to purchase.</p>.
                     * @return Standard <P>Specifies the standard version configuration to purchase.</p>.
                     * 
                     */
                    std::string GetStandard() const;

                    /**
                     * 设置<P>Specifies the standard version configuration to purchase.</p>.
                     * @param _standard <P>Specifies the standard version configuration to purchase.</p>.
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
                     * 获取<P>Specifies the purchase of standard version s2 configuration.</p>.
                     * @return StandardS2 <P>Specifies the purchase of standard version s2 configuration.</p>.
                     * 
                     */
                    std::string GetStandardS2() const;

                    /**
                     * 设置<P>Specifies the purchase of standard version s2 configuration.</p>.
                     * @param _standardS2 <P>Specifies the purchase of standard version s2 configuration.</p>.
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
                     * 获取<P>Specifies the configuration for purchasing professional edition.</p>.
                     * @return Profession <P>Specifies the configuration for purchasing professional edition.</p>.
                     * 
                     */
                    std::string GetProfession() const;

                    /**
                     * 设置<P>Specifies the configuration for purchasing professional edition.</p>.
                     * @param _profession <P>Specifies the configuration for purchasing professional edition.</p>.
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
                     * 获取<P>Purchase physical dedicated edition configuration.</p>.
                     * @return Physical <P>Purchase physical dedicated edition configuration.</p>.
                     * 
                     */
                    std::string GetPhysical() const;

                    /**
                     * 设置<P>Purchase physical dedicated edition configuration.</p>.
                     * @param _physical <P>Purchase physical dedicated edition configuration.</p>.
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
                     * 获取<p>Specifies the public network bandwidth. valid values: 3Mbps to 999Mbps. only supported in pro edition. abandoned, meaningless.</p>.
                     * @return PublicNetwork <p>Specifies the public network bandwidth. valid values: 3Mbps to 999Mbps. only supported in pro edition. abandoned, meaningless.</p>.
                     * 
                     */
                    std::string GetPublicNetwork() const;

                    /**
                     * 设置<p>Specifies the public network bandwidth. valid values: 3Mbps to 999Mbps. only supported in pro edition. abandoned, meaningless.</p>.
                     * @param _publicNetwork <p>Specifies the public network bandwidth. valid values: 3Mbps to 999Mbps. only supported in pro edition. abandoned, meaningless.</p>.
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
                     * 获取<P>Public network bandwidth configuration.</p>.
                     * @return PublicNetworkLimit <P>Public network bandwidth configuration.</p>.
                     * 
                     */
                    std::string GetPublicNetworkLimit() const;

                    /**
                     * 设置<P>Public network bandwidth configuration.</p>.
                     * @param _publicNetworkLimit <P>Public network bandwidth configuration.</p>.
                     * 
                     */
                    void SetPublicNetworkLimit(const std::string& _publicNetworkLimit);

                    /**
                     * 判断参数 PublicNetworkLimit 是否已赋值
                     * @return PublicNetworkLimit 是否已赋值
                     * 
                     */
                    bool PublicNetworkLimitHasBeenSet() const;

                    /**
                     * 获取<p>Request Id.</p>.
                     * @return RequestId <p>Request Id.</p>.
                     * 
                     */
                    std::string GetRequestId() const;

                    /**
                     * 设置<p>Request Id.</p>.
                     * @param _requestId <p>Request Id.</p>.
                     * 
                     */
                    void SetRequestId(const std::string& _requestId);

                    /**
                     * 判断参数 RequestId 是否已赋值
                     * @return RequestId 是否已赋值
                     * 
                     */
                    bool RequestIdHasBeenSet() const;

                    /**
                     * 获取<P>Specifies the pagination offset.</p>.
                     * @return Offset <P>Specifies the pagination offset.</p>.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<P>Specifies the pagination offset.</p>.
                     * @param _offset <P>Specifies the pagination offset.</p>.
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<P>Specifies the pagination limit.</p>.
                     * @return Limit <P>Specifies the pagination limit.</p>.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<P>Specifies the pagination limit.</p>.
                     * @param _limit <P>Specifies the pagination limit.</p>.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<P>Specifies whether the tag is mandatory.</p>.
                     * @return ForceCheckTag <P>Specifies whether the tag is mandatory.</p>.
                     * 
                     */
                    bool GetForceCheckTag() const;

                    /**
                     * 设置<P>Specifies whether the tag is mandatory.</p>.
                     * @param _forceCheckTag <P>Specifies whether the tag is mandatory.</p>.
                     * 
                     */
                    void SetForceCheckTag(const bool& _forceCheckTag);

                    /**
                     * 判断参数 ForceCheckTag 是否已赋值
                     * @return ForceCheckTag 是否已赋值
                     * 
                     */
                    bool ForceCheckTagHasBeenSet() const;

                private:

                    /**
                     * <P>Specifies the zone list.</p>.
                     */
                    std::vector<ZoneInfo> m_zoneList;
                    bool m_zoneListHasBeenSet;

                    /**
                     * <P>Maximum number of instances that can be purchased.</p>.
                     */
                    int64_t m_maxBuyInstanceNum;
                    bool m_maxBuyInstanceNumHasBeenSet;

                    /**
                     * <p>Maximum purchase bandwidth in Mb/s.</p>.
                     */
                    int64_t m_maxBandwidth;
                    bool m_maxBandwidthHasBeenSet;

                    /**
                     * <P>Unit price for postpayment.</p>.
                     */
                    Price m_unitPrice;
                    bool m_unitPriceHasBeenSet;

                    /**
                     * <P>Message unit price for postpayment.</p>.
                     */
                    Price m_messagePrice;
                    bool m_messagePriceHasBeenSet;

                    /**
                     * <P>User-Exclusive cluster information.</p>.
                     */
                    std::vector<ClusterInfo> m_clusterInfo;
                    bool m_clusterInfoHasBeenSet;

                    /**
                     * <P>Specifies the standard version configuration to purchase.</p>.
                     */
                    std::string m_standard;
                    bool m_standardHasBeenSet;

                    /**
                     * <P>Specifies the purchase of standard version s2 configuration.</p>.
                     */
                    std::string m_standardS2;
                    bool m_standardS2HasBeenSet;

                    /**
                     * <P>Specifies the configuration for purchasing professional edition.</p>.
                     */
                    std::string m_profession;
                    bool m_professionHasBeenSet;

                    /**
                     * <P>Purchase physical dedicated edition configuration.</p>.
                     */
                    std::string m_physical;
                    bool m_physicalHasBeenSet;

                    /**
                     * <p>Specifies the public network bandwidth. valid values: 3Mbps to 999Mbps. only supported in pro edition. abandoned, meaningless.</p>.
                     */
                    std::string m_publicNetwork;
                    bool m_publicNetworkHasBeenSet;

                    /**
                     * <P>Public network bandwidth configuration.</p>.
                     */
                    std::string m_publicNetworkLimit;
                    bool m_publicNetworkLimitHasBeenSet;

                    /**
                     * <p>Request Id.</p>.
                     */
                    std::string m_requestId;
                    bool m_requestIdHasBeenSet;

                    /**
                     * <P>Specifies the pagination offset.</p>.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <P>Specifies the pagination limit.</p>.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <P>Specifies whether the tag is mandatory.</p>.
                     */
                    bool m_forceCheckTag;
                    bool m_forceCheckTagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_ZONERESPONSE_H_
