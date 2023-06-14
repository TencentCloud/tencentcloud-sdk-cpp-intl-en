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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCACITEM_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCACITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/BetaInfoByACL.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * Item in the access control list. Each item represents an access control rule.
                */
                class DescAcItem : public AbstractModel
                {
                public:
                    DescAcItem();
                    ~DescAcItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Access source.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SourceContent Access source.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSourceContent() const;

                    /**
                     * 设置Access source.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sourceContent Access source.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSourceContent(const std::string& _sourceContent);

                    /**
                     * 判断参数 SourceContent 是否已赋值
                     * @return SourceContent 是否已赋值
                     * 
                     */
                    bool SourceContentHasBeenSet() const;

                    /**
                     * 获取Access destination.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TargetContent Access destination.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTargetContent() const;

                    /**
                     * 设置Access destination.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _targetContent Access destination.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTargetContent(const std::string& _targetContent);

                    /**
                     * 判断参数 TargetContent 是否已赋值
                     * @return TargetContent 是否已赋值
                     * 
                     */
                    bool TargetContentHasBeenSet() const;

                    /**
                     * 获取Protocol.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Protocol Protocol.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Protocol.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _protocol Protocol.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Port.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Port Port.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置Port.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _port Port.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Action that Cloud Firewall performs on the traffic. Valid values: accept (allow), drop (reject), and log (monitor).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RuleAction Action that Cloud Firewall performs on the traffic. Valid values: accept (allow), drop (reject), and log (monitor).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRuleAction() const;

                    /**
                     * 设置Action that Cloud Firewall performs on the traffic. Valid values: accept (allow), drop (reject), and log (monitor).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ruleAction Action that Cloud Firewall performs on the traffic. Valid values: accept (allow), drop (reject), and log (monitor).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRuleAction(const std::string& _ruleAction);

                    /**
                     * 判断参数 RuleAction 是否已赋值
                     * @return RuleAction 是否已赋值
                     * 
                     */
                    bool RuleActionHasBeenSet() const;

                    /**
                     * 获取Description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Description Description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _description Description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Number of rule matching times.
                     * @return Count Number of rule matching times.
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置Number of rule matching times.
                     * @param _count Number of rule matching times.
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取Rule sequence number.
                     * @return OrderIndex Rule sequence number.
                     * 
                     */
                    uint64_t GetOrderIndex() const;

                    /**
                     * 设置Rule sequence number.
                     * @param _orderIndex Rule sequence number.
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
                     * 获取Access source type. Valid values for an inbound rule: ip, net, template, and location; valid values for an outbound rule: ip, net, template, instance, group, and tag.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SourceType Access source type. Valid values for an inbound rule: ip, net, template, and location; valid values for an outbound rule: ip, net, template, instance, group, and tag.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置Access source type. Valid values for an inbound rule: ip, net, template, and location; valid values for an outbound rule: ip, net, template, instance, group, and tag.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sourceType Access source type. Valid values for an inbound rule: ip, net, template, and location; valid values for an outbound rule: ip, net, template, instance, group, and tag.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取Access destination type. Valid values for an inbound rule: ip, net, template, instance, group, and tag; valid values for an outbound rule: ip, net, domain, template, and location.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TargetType Access destination type. Valid values for an inbound rule: ip, net, template, instance, group, and tag; valid values for an outbound rule: ip, net, domain, template, and location.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTargetType() const;

                    /**
                     * 设置Access destination type. Valid values for an inbound rule: ip, net, template, instance, group, and tag; valid values for an outbound rule: ip, net, domain, template, and location.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _targetType Access destination type. Valid values for an inbound rule: ip, net, template, instance, group, and tag; valid values for an outbound rule: ip, net, domain, template, and location.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTargetType(const std::string& _targetType);

                    /**
                     * 判断参数 TargetType 是否已赋值
                     * @return TargetType 是否已赋值
                     * 
                     */
                    bool TargetTypeHasBeenSet() const;

                    /**
                     * 获取Unique ID of the rule.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Uuid Unique ID of the rule.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetUuid() const;

                    /**
                     * 设置Unique ID of the rule.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _uuid Unique ID of the rule.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUuid(const uint64_t& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取Rule validity.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Invalid Rule validity.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetInvalid() const;

                    /**
                     * 设置Rule validity.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _invalid Rule validity.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInvalid(const uint64_t& _invalid);

                    /**
                     * 判断参数 Invalid 是否已赋值
                     * @return Invalid 是否已赋值
                     * 
                     */
                    bool InvalidHasBeenSet() const;

                    /**
                     * 获取Valid values: 0: common rules; 1: regional rules.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsRegion Valid values: 0: common rules; 1: regional rules.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetIsRegion() const;

                    /**
                     * 设置Valid values: 0: common rules; 1: regional rules.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isRegion Valid values: 0: common rules; 1: regional rules.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Country ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CountryCode Country ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetCountryCode() const;

                    /**
                     * 设置Country ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _countryCode Country ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCountryCode(const uint64_t& _countryCode);

                    /**
                     * 判断参数 CountryCode 是否已赋值
                     * @return CountryCode 是否已赋值
                     * 
                     */
                    bool CountryCodeHasBeenSet() const;

                    /**
                     * 获取City ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CityCode City ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetCityCode() const;

                    /**
                     * 设置City ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cityCode City ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCityCode(const uint64_t& _cityCode);

                    /**
                     * 判断参数 CityCode 是否已赋值
                     * @return CityCode 是否已赋值
                     * 
                     */
                    bool CityCodeHasBeenSet() const;

                    /**
                     * 获取Country name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CountryName Country name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCountryName() const;

                    /**
                     * 设置Country name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _countryName Country name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCountryName(const std::string& _countryName);

                    /**
                     * 判断参数 CountryName 是否已赋值
                     * @return CountryName 是否已赋值
                     * 
                     */
                    bool CountryNameHasBeenSet() const;

                    /**
                     * 获取City name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CityName City name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCityName() const;

                    /**
                     * 设置City name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cityName City name.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Cloud provider code.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CloudCode Cloud provider code.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCloudCode() const;

                    /**
                     * 设置Cloud provider code.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _cloudCode Cloud provider code.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Valid values: 0: common rules; 1: cloud provider rules.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsCloud Valid values: 0: common rules; 1: cloud provider rules.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetIsCloud() const;

                    /**
                     * 设置Valid values: 0: common rules; 1: cloud provider rules.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isCloud Valid values: 0: common rules; 1: cloud provider rules.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsCloud(const uint64_t& _isCloud);

                    /**
                     * 判断参数 IsCloud 是否已赋值
                     * @return IsCloud 是否已赋值
                     * 
                     */
                    bool IsCloudHasBeenSet() const;

                    /**
                     * 获取Rule status. Valid values: true: enabled; false: disabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Enable Rule status. Valid values: true: enabled; false: disabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEnable() const;

                    /**
                     * 设置Rule status. Valid values: true: enabled; false: disabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _enable Rule status. Valid values: true: enabled; false: disabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEnable(const std::string& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取Rule direction. Valid values: 1: inbound; 0: outbound.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Direction Rule direction. Valid values: 1: inbound; 0: outbound.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetDirection() const;

                    /**
                     * 设置Rule direction. Valid values: 1: inbound; 0: outbound.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _direction Rule direction. Valid values: 1: inbound; 0: outbound.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Instance name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InstanceName Instance name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Instance name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _instanceName Instance name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取UUID for internal use. Generally, this field is not required.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InternalUuid UUID for internal use. Generally, this field is not required.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetInternalUuid() const;

                    /**
                     * 设置UUID for internal use. Generally, this field is not required.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _internalUuid UUID for internal use. Generally, this field is not required.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInternalUuid(const int64_t& _internalUuid);

                    /**
                     * 判断参数 InternalUuid 是否已赋值
                     * @return InternalUuid 是否已赋值
                     * 
                     */
                    bool InternalUuidHasBeenSet() const;

                    /**
                     * 获取Rule status. This field is valid when you query rule matching details. Valid values: 0: new; 1: deleted; 2: edited and deleted.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Rule status. This field is valid when you query rule matching details. Valid values: 0: new; 1: deleted; 2: edited and deleted.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Rule status. This field is valid when you query rule matching details. Valid values: 0: new; 1: deleted; 2: edited and deleted.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status Rule status. This field is valid when you query rule matching details. Valid values: 0: new; 1: deleted; 2: edited and deleted.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Details of associated tasks
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return BetaList Details of associated tasks
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<BetaInfoByACL> GetBetaList() const;

                    /**
                     * 设置Details of associated tasks
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _betaList Details of associated tasks
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBetaList(const std::vector<BetaInfoByACL>& _betaList);

                    /**
                     * 判断参数 BetaList 是否已赋值
                     * @return BetaList 是否已赋值
                     * 
                     */
                    bool BetaListHasBeenSet() const;

                private:

                    /**
                     * Access source.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sourceContent;
                    bool m_sourceContentHasBeenSet;

                    /**
                     * Access destination.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_targetContent;
                    bool m_targetContentHasBeenSet;

                    /**
                     * Protocol.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Port.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Action that Cloud Firewall performs on the traffic. Valid values: accept (allow), drop (reject), and log (monitor).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ruleAction;
                    bool m_ruleActionHasBeenSet;

                    /**
                     * Description.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Number of rule matching times.
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Rule sequence number.
                     */
                    uint64_t m_orderIndex;
                    bool m_orderIndexHasBeenSet;

                    /**
                     * Access source type. Valid values for an inbound rule: ip, net, template, and location; valid values for an outbound rule: ip, net, template, instance, group, and tag.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * Access destination type. Valid values for an inbound rule: ip, net, template, instance, group, and tag; valid values for an outbound rule: ip, net, domain, template, and location.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * Unique ID of the rule.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * Rule validity.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_invalid;
                    bool m_invalidHasBeenSet;

                    /**
                     * Valid values: 0: common rules; 1: regional rules.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_isRegion;
                    bool m_isRegionHasBeenSet;

                    /**
                     * Country ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_countryCode;
                    bool m_countryCodeHasBeenSet;

                    /**
                     * City ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_cityCode;
                    bool m_cityCodeHasBeenSet;

                    /**
                     * Country name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_countryName;
                    bool m_countryNameHasBeenSet;

                    /**
                     * City name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cityName;
                    bool m_cityNameHasBeenSet;

                    /**
                     * Cloud provider code.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_cloudCode;
                    bool m_cloudCodeHasBeenSet;

                    /**
                     * Valid values: 0: common rules; 1: cloud provider rules.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_isCloud;
                    bool m_isCloudHasBeenSet;

                    /**
                     * Rule status. Valid values: true: enabled; false: disabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * Rule direction. Valid values: 1: inbound; 0: outbound.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * Instance name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * UUID for internal use. Generally, this field is not required.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_internalUuid;
                    bool m_internalUuidHasBeenSet;

                    /**
                     * Rule status. This field is valid when you query rule matching details. Valid values: 0: new; 1: deleted; 2: edited and deleted.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Details of associated tasks
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<BetaInfoByACL> m_betaList;
                    bool m_betaListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCACITEM_H_
