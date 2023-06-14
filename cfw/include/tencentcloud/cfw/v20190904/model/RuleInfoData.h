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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_RULEINFODATA_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_RULEINFODATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * Rule input object
                */
                class RuleInfoData : public AbstractModel
                {
                public:
                    RuleInfoData();
                    ~RuleInfoData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Priority
                     * @return OrderIndex Priority
                     * 
                     */
                    uint64_t GetOrderIndex() const;

                    /**
                     * 设置Priority
                     * @param _orderIndex Priority
                     * 
                     */
                    void SetOrderIndex(const uint64_t& _orderIndex);

                    /**
                     * 判断参数 OrderIndex 是否已赋值
                     * @return OrderIndex 是否已赋值
                     * 
                     */
                    bool OrderIndexHasBeenSet() const;

                    /**
                     * 获取Access source
                     * @return SourceIp Access source
                     * 
                     */
                    std::string GetSourceIp() const;

                    /**
                     * 设置Access source
                     * @param _sourceIp Access source
                     * 
                     */
                    void SetSourceIp(const std::string& _sourceIp);

                    /**
                     * 判断参数 SourceIp 是否已赋值
                     * @return SourceIp 是否已赋值
                     * 
                     */
                    bool SourceIpHasBeenSet() const;

                    /**
                     * 获取Access destination
                     * @return TargetIp Access destination
                     * 
                     */
                    std::string GetTargetIp() const;

                    /**
                     * 设置Access destination
                     * @param _targetIp Access destination
                     * 
                     */
                    void SetTargetIp(const std::string& _targetIp);

                    /**
                     * 判断参数 TargetIp 是否已赋值
                     * @return TargetIp 是否已赋值
                     * 
                     */
                    bool TargetIpHasBeenSet() const;

                    /**
                     * 获取Protocol
                     * @return Protocol Protocol
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Protocol
                     * @param _protocol Protocol
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Policy. 0: observe; 1: block; 2: allow
                     * @return Strategy Policy. 0: observe; 1: block; 2: allow
                     * 
                     */
                    std::string GetStrategy() const;

                    /**
                     * 设置Policy. 0: observe; 1: block; 2: allow
                     * @param _strategy Policy. 0: observe; 1: block; 2: allow
                     * 
                     */
                    void SetStrategy(const std::string& _strategy);

                    /**
                     * 判断参数 Strategy 是否已赋值
                     * @return Strategy 是否已赋值
                     * 
                     */
                    bool StrategyHasBeenSet() const;

                    /**
                     * 获取Access source type. 1: IP; 3: domain name; 4: IP address template; 5: domain name address template
                     * @return SourceType Access source type. 1: IP; 3: domain name; 4: IP address template; 5: domain name address template
                     * 
                     */
                    uint64_t GetSourceType() const;

                    /**
                     * 设置Access source type. 1: IP; 3: domain name; 4: IP address template; 5: domain name address template
                     * @param _sourceType Access source type. 1: IP; 3: domain name; 4: IP address template; 5: domain name address template
                     * 
                     */
                    void SetSourceType(const uint64_t& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取Direction. 0: outbound; 1: inbound
                     * @return Direction Direction. 0: outbound; 1: inbound
                     * 
                     */
                    uint64_t GetDirection() const;

                    /**
                     * 设置Direction. 0: outbound; 1: inbound
                     * @param _direction Direction. 0: outbound; 1: inbound
                     * 
                     */
                    void SetDirection(const uint64_t& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取Description
                     * @return Detail Description
                     * 
                     */
                    std::string GetDetail() const;

                    /**
                     * 设置Description
                     * @param _detail Description
                     * 
                     */
                    void SetDetail(const std::string& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     * 
                     */
                    bool DetailHasBeenSet() const;

                    /**
                     * 获取Access destination type. 1: IP, 3: domain name; 4: IP address template; 5: domain name address template
                     * @return TargetType Access destination type. 1: IP, 3: domain name; 4: IP address template; 5: domain name address template
                     * 
                     */
                    uint64_t GetTargetType() const;

                    /**
                     * 设置Access destination type. 1: IP, 3: domain name; 4: IP address template; 5: domain name address template
                     * @param _targetType Access destination type. 1: IP, 3: domain name; 4: IP address template; 5: domain name address template
                     * 
                     */
                    void SetTargetType(const uint64_t& _targetType);

                    /**
                     * 判断参数 TargetType 是否已赋值
                     * @return TargetType 是否已赋值
                     * 
                     */
                    bool TargetTypeHasBeenSet() const;

                    /**
                     * 获取Port
                     * @return Port Port
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置Port
                     * @param _port Port
                     * 
                     */
                    void SetPort(const std::string& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取ID value
                     * @return Id ID value
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置ID value
                     * @param _id ID value
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Log ID, required when an alert log is created
                     * @return LogId Log ID, required when an alert log is created
                     * 
                     */
                    std::string GetLogId() const;

                    /**
                     * 设置Log ID, required when an alert log is created
                     * @param _logId Log ID, required when an alert log is created
                     * 
                     */
                    void SetLogId(const std::string& _logId);

                    /**
                     * 判断参数 LogId 是否已赋值
                     * @return LogId 是否已赋值
                     * 
                     */
                    bool LogIdHasBeenSet() const;

                    /**
                     * 获取City code
                     * @return City City code
                     * 
                     */
                    uint64_t GetCity() const;

                    /**
                     * 设置City code
                     * @param _city City code
                     * 
                     */
                    void SetCity(const uint64_t& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     * 
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取Country code
                     * @return Country Country code
                     * 
                     */
                    uint64_t GetCountry() const;

                    /**
                     * 设置Country code
                     * @param _country Country code
                     * 
                     */
                    void SetCountry(const uint64_t& _country);

                    /**
                     * 判断参数 Country 是否已赋值
                     * @return Country 是否已赋值
                     * 
                     */
                    bool CountryHasBeenSet() const;

                    /**
                     * 获取Cloud vendor. Multiple vendors are supported and separated with commas. 1: Tencent Cloud (only in Hong Kong, China and overseas); 2: Alibaba Cloud; 3: Amazon Cloud; 4: Huawei Cloud; 5: Microsoft Cloud
                     * @return CloudCode Cloud vendor. Multiple vendors are supported and separated with commas. 1: Tencent Cloud (only in Hong Kong, China and overseas); 2: Alibaba Cloud; 3: Amazon Cloud; 4: Huawei Cloud; 5: Microsoft Cloud
                     * 
                     */
                    std::string GetCloudCode() const;

                    /**
                     * 设置Cloud vendor. Multiple vendors are supported and separated with commas. 1: Tencent Cloud (only in Hong Kong, China and overseas); 2: Alibaba Cloud; 3: Amazon Cloud; 4: Huawei Cloud; 5: Microsoft Cloud
                     * @param _cloudCode Cloud vendor. Multiple vendors are supported and separated with commas. 1: Tencent Cloud (only in Hong Kong, China and overseas); 2: Alibaba Cloud; 3: Amazon Cloud; 4: Huawei Cloud; 5: Microsoft Cloud
                     * 
                     */
                    void SetCloudCode(const std::string& _cloudCode);

                    /**
                     * 判断参数 CloudCode 是否已赋值
                     * @return CloudCode 是否已赋值
                     * 
                     */
                    bool CloudCodeHasBeenSet() const;

                    /**
                     * 获取Indicates whether it is a region
                     * @return IsRegion Indicates whether it is a region
                     * 
                     */
                    uint64_t GetIsRegion() const;

                    /**
                     * 设置Indicates whether it is a region
                     * @param _isRegion Indicates whether it is a region
                     * 
                     */
                    void SetIsRegion(const uint64_t& _isRegion);

                    /**
                     * 判断参数 IsRegion 是否已赋值
                     * @return IsRegion 是否已赋值
                     * 
                     */
                    bool IsRegionHasBeenSet() const;

                    /**
                     * 获取City name
                     * @return CityName City name
                     * 
                     */
                    std::string GetCityName() const;

                    /**
                     * 设置City name
                     * @param _cityName City name
                     * 
                     */
                    void SetCityName(const std::string& _cityName);

                    /**
                     * 判断参数 CityName 是否已赋值
                     * @return CityName 是否已赋值
                     * 
                     */
                    bool CityNameHasBeenSet() const;

                    /**
                     * 获取Country name
                     * @return CountryName Country name
                     * 
                     */
                    std::string GetCountryName() const;

                    /**
                     * 设置Country name
                     * @param _countryName Country name
                     * 
                     */
                    void SetCountryName(const std::string& _countryName);

                    /**
                     * 判断参数 CountryName 是否已赋值
                     * @return CountryName 是否已赋值
                     * 
                     */
                    bool CountryNameHasBeenSet() const;

                private:

                    /**
                     * Priority
                     */
                    uint64_t m_orderIndex;
                    bool m_orderIndexHasBeenSet;

                    /**
                     * Access source
                     */
                    std::string m_sourceIp;
                    bool m_sourceIpHasBeenSet;

                    /**
                     * Access destination
                     */
                    std::string m_targetIp;
                    bool m_targetIpHasBeenSet;

                    /**
                     * Protocol
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Policy. 0: observe; 1: block; 2: allow
                     */
                    std::string m_strategy;
                    bool m_strategyHasBeenSet;

                    /**
                     * Access source type. 1: IP; 3: domain name; 4: IP address template; 5: domain name address template
                     */
                    uint64_t m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * Direction. 0: outbound; 1: inbound
                     */
                    uint64_t m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * Description
                     */
                    std::string m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * Access destination type. 1: IP, 3: domain name; 4: IP address template; 5: domain name address template
                     */
                    uint64_t m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * Port
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * ID value
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Log ID, required when an alert log is created
                     */
                    std::string m_logId;
                    bool m_logIdHasBeenSet;

                    /**
                     * City code
                     */
                    uint64_t m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * Country code
                     */
                    uint64_t m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * Cloud vendor. Multiple vendors are supported and separated with commas. 1: Tencent Cloud (only in Hong Kong, China and overseas); 2: Alibaba Cloud; 3: Amazon Cloud; 4: Huawei Cloud; 5: Microsoft Cloud
                     */
                    std::string m_cloudCode;
                    bool m_cloudCodeHasBeenSet;

                    /**
                     * Indicates whether it is a region
                     */
                    uint64_t m_isRegion;
                    bool m_isRegionHasBeenSet;

                    /**
                     * City name
                     */
                    std::string m_cityName;
                    bool m_cityNameHasBeenSet;

                    /**
                     * Country name
                     */
                    std::string m_countryName;
                    bool m_countryNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_RULEINFODATA_H_
