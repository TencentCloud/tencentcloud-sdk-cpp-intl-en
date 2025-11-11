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
                     * 获取Specifies the user-exclusive cluster info.
                     * @return ClusterInfo Specifies the user-exclusive cluster info.
                     * 
                     */
                    std::vector<ClusterInfo> GetClusterInfo() const;

                    /**
                     * 设置Specifies the user-exclusive cluster info.
                     * @param _clusterInfo Specifies the user-exclusive cluster info.
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
                     * 获取Purchase the standard version configuration.
                     * @return Standard Purchase the standard version configuration.
                     * 
                     */
                    std::string GetStandard() const;

                    /**
                     * 设置Purchase the standard version configuration.
                     * @param _standard Purchase the standard version configuration.
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
                     * 获取Purchase the standard version S2 configuration.
                     * @return StandardS2 Purchase the standard version S2 configuration.
                     * 
                     */
                    std::string GetStandardS2() const;

                    /**
                     * 设置Purchase the standard version S2 configuration.
                     * @param _standardS2 Purchase the standard version S2 configuration.
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
                     * 获取Specifies the configuration for purchasing the professional edition.
                     * @return Profession Specifies the configuration for purchasing the professional edition.
                     * 
                     */
                    std::string GetProfession() const;

                    /**
                     * 设置Specifies the configuration for purchasing the professional edition.
                     * @param _profession Specifies the configuration for purchasing the professional edition.
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
                     * 获取Purchase physical dedicated edition configuration.
                     * @return Physical Purchase physical dedicated edition configuration.
                     * 
                     */
                    std::string GetPhysical() const;

                    /**
                     * 设置Purchase physical dedicated edition configuration.
                     * @param _physical Purchase physical dedicated edition configuration.
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
                     * 获取Public network bandwidth. minimum 3 Mbps. maximum 999 Mbps. only the pro edition supports filling in. abandoned, meaningless.
                     * @return PublicNetwork Public network bandwidth. minimum 3 Mbps. maximum 999 Mbps. only the pro edition supports filling in. abandoned, meaningless.
                     * 
                     */
                    std::string GetPublicNetwork() const;

                    /**
                     * 设置Public network bandwidth. minimum 3 Mbps. maximum 999 Mbps. only the pro edition supports filling in. abandoned, meaningless.
                     * @param _publicNetwork Public network bandwidth. minimum 3 Mbps. maximum 999 Mbps. only the pro edition supports filling in. abandoned, meaningless.
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
                     * 获取Configures the public network bandwidth.
                     * @return PublicNetworkLimit Configures the public network bandwidth.
                     * 
                     */
                    std::string GetPublicNetworkLimit() const;

                    /**
                     * 设置Configures the public network bandwidth.
                     * @param _publicNetworkLimit Configures the public network bandwidth.
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
                     * 获取Request ID.
                     * @return RequestId Request ID.
                     * 
                     */
                    std::string GetRequestId() const;

                    /**
                     * 设置Request ID.
                     * @param _requestId Request ID.
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
                     * 获取Pagination Offset
                     * @return Offset Pagination Offset
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination Offset
                     * @param _offset Pagination Offset
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
                     * 获取Pagination Limit
                     * @return Limit Pagination Limit
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Pagination Limit
                     * @param _limit Pagination Limit
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
                     * 获取Mandatory. input tag.
                     * @return ForceCheckTag Mandatory. input tag.
                     * 
                     */
                    bool GetForceCheckTag() const;

                    /**
                     * 设置Mandatory. input tag.
                     * @param _forceCheckTag Mandatory. input tag.
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
                     * Specifies the user-exclusive cluster info.
                     */
                    std::vector<ClusterInfo> m_clusterInfo;
                    bool m_clusterInfoHasBeenSet;

                    /**
                     * Purchase the standard version configuration.
                     */
                    std::string m_standard;
                    bool m_standardHasBeenSet;

                    /**
                     * Purchase the standard version S2 configuration.
                     */
                    std::string m_standardS2;
                    bool m_standardS2HasBeenSet;

                    /**
                     * Specifies the configuration for purchasing the professional edition.
                     */
                    std::string m_profession;
                    bool m_professionHasBeenSet;

                    /**
                     * Purchase physical dedicated edition configuration.
                     */
                    std::string m_physical;
                    bool m_physicalHasBeenSet;

                    /**
                     * Public network bandwidth. minimum 3 Mbps. maximum 999 Mbps. only the pro edition supports filling in. abandoned, meaningless.
                     */
                    std::string m_publicNetwork;
                    bool m_publicNetworkHasBeenSet;

                    /**
                     * Configures the public network bandwidth.
                     */
                    std::string m_publicNetworkLimit;
                    bool m_publicNetworkLimitHasBeenSet;

                    /**
                     * Request ID.
                     */
                    std::string m_requestId;
                    bool m_requestIdHasBeenSet;

                    /**
                     * Pagination Offset
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Pagination Limit
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Mandatory. input tag.
                     */
                    bool m_forceCheckTag;
                    bool m_forceCheckTagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_ZONERESPONSE_H_
