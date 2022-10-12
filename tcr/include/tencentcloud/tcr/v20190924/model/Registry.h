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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_REGISTRY_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_REGISTRY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/TagSpecification.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * Instance information structure
                */
                class Registry : public AbstractModel
                {
                public:
                    Registry();
                    ~Registry() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance ID
                     * @return RegistryId Instance ID
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置Instance ID
                     * @param RegistryId Instance ID
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取Instance name
                     * @return RegistryName Instance name
                     */
                    std::string GetRegistryName() const;

                    /**
                     * 设置Instance name
                     * @param RegistryName Instance name
                     */
                    void SetRegistryName(const std::string& _registryName);

                    /**
                     * 判断参数 RegistryName 是否已赋值
                     * @return RegistryName 是否已赋值
                     */
                    bool RegistryNameHasBeenSet() const;

                    /**
                     * 获取Instance specification
                     * @return RegistryType Instance specification
                     */
                    std::string GetRegistryType() const;

                    /**
                     * 设置Instance specification
                     * @param RegistryType Instance specification
                     */
                    void SetRegistryType(const std::string& _registryType);

                    /**
                     * 判断参数 RegistryType 是否已赋值
                     * @return RegistryType 是否已赋值
                     */
                    bool RegistryTypeHasBeenSet() const;

                    /**
                     * 获取Instance status
                     * @return Status Instance status
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Instance status
                     * @param Status Instance status
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Public access URL of the instance
                     * @return PublicDomain Public access URL of the instance
                     */
                    std::string GetPublicDomain() const;

                    /**
                     * 设置Public access URL of the instance
                     * @param PublicDomain Public access URL of the instance
                     */
                    void SetPublicDomain(const std::string& _publicDomain);

                    /**
                     * 判断参数 PublicDomain 是否已赋值
                     * @return PublicDomain 是否已赋值
                     */
                    bool PublicDomainHasBeenSet() const;

                    /**
                     * 获取Instance creation time
                     * @return CreatedAt Instance creation time
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置Instance creation time
                     * @param CreatedAt Instance creation time
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取Region name
                     * @return RegionName Region name
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置Region name
                     * @param RegionName Region name
                     */
                    void SetRegionName(const std::string& _regionName);

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     */
                    bool RegionNameHasBeenSet() const;

                    /**
                     * 获取Region ID
                     * @return RegionId Region ID
                     */
                    uint64_t GetRegionId() const;

                    /**
                     * 设置Region ID
                     * @param RegionId Region ID
                     */
                    void SetRegionId(const uint64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取Whether to enable anonymity
                     * @return EnableAnonymous Whether to enable anonymity
                     */
                    bool GetEnableAnonymous() const;

                    /**
                     * 设置Whether to enable anonymity
                     * @param EnableAnonymous Whether to enable anonymity
                     */
                    void SetEnableAnonymous(const bool& _enableAnonymous);

                    /**
                     * 判断参数 EnableAnonymous 是否已赋值
                     * @return EnableAnonymous 是否已赋值
                     */
                    bool EnableAnonymousHasBeenSet() const;

                    /**
                     * 获取Token validity period
                     * @return TokenValidTime Token validity period
                     */
                    uint64_t GetTokenValidTime() const;

                    /**
                     * 设置Token validity period
                     * @param TokenValidTime Token validity period
                     */
                    void SetTokenValidTime(const uint64_t& _tokenValidTime);

                    /**
                     * 判断参数 TokenValidTime 是否已赋值
                     * @return TokenValidTime 是否已赋值
                     */
                    bool TokenValidTimeHasBeenSet() const;

                    /**
                     * 获取Internal access address of the instance
                     * @return InternalEndpoint Internal access address of the instance
                     */
                    std::string GetInternalEndpoint() const;

                    /**
                     * 设置Internal access address of the instance
                     * @param InternalEndpoint Internal access address of the instance
                     */
                    void SetInternalEndpoint(const std::string& _internalEndpoint);

                    /**
                     * 判断参数 InternalEndpoint 是否已赋值
                     * @return InternalEndpoint 是否已赋值
                     */
                    bool InternalEndpointHasBeenSet() const;

                    /**
                     * 获取Cloud tag of the instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TagSpecification Cloud tag of the instance
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    TagSpecification GetTagSpecification() const;

                    /**
                     * 设置Cloud tag of the instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param TagSpecification Cloud tag of the instance
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTagSpecification(const TagSpecification& _tagSpecification);

                    /**
                     * 判断参数 TagSpecification 是否已赋值
                     * @return TagSpecification 是否已赋值
                     */
                    bool TagSpecificationHasBeenSet() const;

                    /**
                     * 获取Instance expiration time (for prepayment)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExpiredAt Instance expiration time (for prepayment)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetExpiredAt() const;

                    /**
                     * 设置Instance expiration time (for prepayment)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ExpiredAt Instance expiration time (for prepayment)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetExpiredAt(const std::string& _expiredAt);

                    /**
                     * 判断参数 ExpiredAt 是否已赋值
                     * @return ExpiredAt 是否已赋值
                     */
                    bool ExpiredAtHasBeenSet() const;

                    /**
                     * 获取Instance billing mode. Valid values: 0: Postpayment; 1: Prepayment.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PayMod Instance billing mode. Valid values: 0: Postpayment; 1: Prepayment.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetPayMod() const;

                    /**
                     * 设置Instance billing mode. Valid values: 0: Postpayment; 1: Prepayment.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param PayMod Instance billing mode. Valid values: 0: Postpayment; 1: Prepayment.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPayMod(const int64_t& _payMod);

                    /**
                     * 判断参数 PayMod 是否已赋值
                     * @return PayMod 是否已赋值
                     */
                    bool PayModHasBeenSet() const;

                    /**
                     * 获取Prepayment renewal flag. Valid values: 0: Manual renewal; 1: Auto-renewal; 2: No renewal and no notification.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RenewFlag Prepayment renewal flag. Valid values: 0: Manual renewal; 1: Auto-renewal; 2: No renewal and no notification.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 设置Prepayment renewal flag. Valid values: 0: Manual renewal; 1: Auto-renewal; 2: No renewal and no notification.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param RenewFlag Prepayment renewal flag. Valid values: 0: Manual renewal; 1: Auto-renewal; 2: No renewal and no notification.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRenewFlag(const int64_t& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     */
                    bool RenewFlagHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * Instance name
                     */
                    std::string m_registryName;
                    bool m_registryNameHasBeenSet;

                    /**
                     * Instance specification
                     */
                    std::string m_registryType;
                    bool m_registryTypeHasBeenSet;

                    /**
                     * Instance status
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Public access URL of the instance
                     */
                    std::string m_publicDomain;
                    bool m_publicDomainHasBeenSet;

                    /**
                     * Instance creation time
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * Region name
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * Region ID
                     */
                    uint64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * Whether to enable anonymity
                     */
                    bool m_enableAnonymous;
                    bool m_enableAnonymousHasBeenSet;

                    /**
                     * Token validity period
                     */
                    uint64_t m_tokenValidTime;
                    bool m_tokenValidTimeHasBeenSet;

                    /**
                     * Internal access address of the instance
                     */
                    std::string m_internalEndpoint;
                    bool m_internalEndpointHasBeenSet;

                    /**
                     * Cloud tag of the instance
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    TagSpecification m_tagSpecification;
                    bool m_tagSpecificationHasBeenSet;

                    /**
                     * Instance expiration time (for prepayment)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_expiredAt;
                    bool m_expiredAtHasBeenSet;

                    /**
                     * Instance billing mode. Valid values: 0: Postpayment; 1: Prepayment.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_payMod;
                    bool m_payModHasBeenSet;

                    /**
                     * Prepayment renewal flag. Valid values: 0: Manual renewal; 1: Auto-renewal; 2: No renewal and no notification.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_REGISTRY_H_
