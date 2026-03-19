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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ORGANIZATIONSERVICEASSIGN_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ORGANIZATIONSERVICEASSIGN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * Organization service settings.
                */
                class OrganizationServiceAssign : public AbstractModel
                {
                public:
                    OrganizationServiceAssign();
                    ~OrganizationServiceAssign() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Organization service ID.
                     * @return ServiceId Organization service ID.
                     * 
                     */
                    uint64_t GetServiceId() const;

                    /**
                     * 设置Organization service ID.
                     * @param _serviceId Organization service ID.
                     * 
                     */
                    void SetServiceId(const uint64_t& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取Organization service product name.
                     * @return ProductName Organization service product name.
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置Organization service product name.
                     * @param _productName Organization service product name.
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取Specifies whether delegation is supported. Valid values: 1: yes; 2: no.
                     * @return IsAssign Specifies whether delegation is supported. Valid values: 1: yes; 2: no.
                     * 
                     */
                    uint64_t GetIsAssign() const;

                    /**
                     * 设置Specifies whether delegation is supported. Valid values: 1: yes; 2: no.
                     * @param _isAssign Specifies whether delegation is supported. Valid values: 1: yes; 2: no.
                     * 
                     */
                    void SetIsAssign(const uint64_t& _isAssign);

                    /**
                     * 判断参数 IsAssign 是否已赋值
                     * @return IsAssign 是否已赋值
                     * 
                     */
                    bool IsAssignHasBeenSet() const;

                    /**
                     * 获取Organization service description.
                     * @return Description Organization service description.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Organization service description.
                     * @param _description Organization service description.
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
                     * 获取Number of delegated administrators.
                     * @return MemberNum Number of delegated administrators.
                     * 
                     */
                    std::string GetMemberNum() const;

                    /**
                     * 设置Number of delegated administrators.
                     * @param _memberNum Number of delegated administrators.
                     * 
                     */
                    void SetMemberNum(const std::string& _memberNum);

                    /**
                     * 判断参数 MemberNum 是否已赋值
                     * @return MemberNum 是否已赋值
                     * 
                     */
                    bool MemberNumHasBeenSet() const;

                    /**
                     * 获取Help documentation.
                     * @return Document Help documentation.
                     * 
                     */
                    std::string GetDocument() const;

                    /**
                     * 设置Help documentation.
                     * @param _document Help documentation.
                     * 
                     */
                    void SetDocument(const std::string& _document);

                    /**
                     * 判断参数 Document 是否已赋值
                     * @return Document 是否已赋值
                     * 
                     */
                    bool DocumentHasBeenSet() const;

                    /**
                     * 获取Path to the console for organization service products.
                     * @return ConsoleUrl Path to the console for organization service products.
                     * 
                     */
                    std::string GetConsoleUrl() const;

                    /**
                     * 设置Path to the console for organization service products.
                     * @param _consoleUrl Path to the console for organization service products.
                     * 
                     */
                    void SetConsoleUrl(const std::string& _consoleUrl);

                    /**
                     * 判断参数 ConsoleUrl 是否已赋值
                     * @return ConsoleUrl 是否已赋值
                     * 
                     */
                    bool ConsoleUrlHasBeenSet() const;

                    /**
                     * 获取Whether to access the usage status. valid values: 1 (yes). 
2: no.
                     * @return IsUsageStatus Whether to access the usage status. valid values: 1 (yes). 
2: no.
                     * 
                     */
                    uint64_t GetIsUsageStatus() const;

                    /**
                     * 设置Whether to access the usage status. valid values: 1 (yes). 
2: no.
                     * @param _isUsageStatus Whether to access the usage status. valid values: 1 (yes). 
2: no.
                     * 
                     */
                    void SetIsUsageStatus(const uint64_t& _isUsageStatus);

                    /**
                     * 判断参数 IsUsageStatus 是否已赋值
                     * @return IsUsageStatus 是否已赋值
                     * 
                     */
                    bool IsUsageStatusHasBeenSet() const;

                    /**
                     * 获取Limit on the number of delegated administrators.
                     * @return CanAssignCount Limit on the number of delegated administrators.
                     * 
                     */
                    uint64_t GetCanAssignCount() const;

                    /**
                     * 设置Limit on the number of delegated administrators.
                     * @param _canAssignCount Limit on the number of delegated administrators.
                     * 
                     */
                    void SetCanAssignCount(const uint64_t& _canAssignCount);

                    /**
                     * 判断参数 CanAssignCount 是否已赋值
                     * @return CanAssignCount 是否已赋值
                     * 
                     */
                    bool CanAssignCountHasBeenSet() const;

                    /**
                     * 获取Organization service product ID.
                     * @return Product Organization service product ID.
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置Organization service product ID.
                     * @param _product Organization service product ID.
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取Specifies whether organization service authorization is supported. Valid values: 1: yes; 2: no.
                     * @return ServiceGrant Specifies whether organization service authorization is supported. Valid values: 1: yes; 2: no.
                     * 
                     */
                    uint64_t GetServiceGrant() const;

                    /**
                     * 设置Specifies whether organization service authorization is supported. Valid values: 1: yes; 2: no.
                     * @param _serviceGrant Specifies whether organization service authorization is supported. Valid values: 1: yes; 2: no.
                     * 
                     */
                    void SetServiceGrant(const uint64_t& _serviceGrant);

                    /**
                     * 判断参数 ServiceGrant 是否已赋值
                     * @return ServiceGrant 是否已赋值
                     * 
                     */
                    bool ServiceGrantHasBeenSet() const;

                    /**
                     * 获取Specifies whether organization services are authorized. This field is valid when the value of ServiceGrant is 1. Valid values: Enabled: authorized; Disabled: not authorized. 
                     * @return GrantStatus Specifies whether organization services are authorized. This field is valid when the value of ServiceGrant is 1. Valid values: Enabled: authorized; Disabled: not authorized. 
                     * 
                     */
                    std::string GetGrantStatus() const;

                    /**
                     * 设置Specifies whether organization services are authorized. This field is valid when the value of ServiceGrant is 1. Valid values: Enabled: authorized; Disabled: not authorized. 
                     * @param _grantStatus Specifies whether organization services are authorized. This field is valid when the value of ServiceGrant is 1. Valid values: Enabled: authorized; Disabled: not authorized. 
                     * 
                     */
                    void SetGrantStatus(const std::string& _grantStatus);

                    /**
                     * 判断参数 GrantStatus 是否已赋值
                     * @return GrantStatus 是否已赋值
                     * 
                     */
                    bool GrantStatusHasBeenSet() const;

                    /**
                     * 获取Specifies whether the scope of delegated management can be set. Valid values: 1: yes; 2 no.
                     * @return IsSetManagementScope Specifies whether the scope of delegated management can be set. Valid values: 1: yes; 2 no.
                     * 
                     */
                    uint64_t GetIsSetManagementScope() const;

                    /**
                     * 设置Specifies whether the scope of delegated management can be set. Valid values: 1: yes; 2 no.
                     * @param _isSetManagementScope Specifies whether the scope of delegated management can be set. Valid values: 1: yes; 2 no.
                     * 
                     */
                    void SetIsSetManagementScope(const uint64_t& _isSetManagementScope);

                    /**
                     * 判断参数 IsSetManagementScope 是否已赋值
                     * @return IsSetManagementScope 是否已赋值
                     * 
                     */
                    bool IsSetManagementScopeHasBeenSet() const;

                private:

                    /**
                     * Organization service ID.
                     */
                    uint64_t m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * Organization service product name.
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * Specifies whether delegation is supported. Valid values: 1: yes; 2: no.
                     */
                    uint64_t m_isAssign;
                    bool m_isAssignHasBeenSet;

                    /**
                     * Organization service description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Number of delegated administrators.
                     */
                    std::string m_memberNum;
                    bool m_memberNumHasBeenSet;

                    /**
                     * Help documentation.
                     */
                    std::string m_document;
                    bool m_documentHasBeenSet;

                    /**
                     * Path to the console for organization service products.
                     */
                    std::string m_consoleUrl;
                    bool m_consoleUrlHasBeenSet;

                    /**
                     * Whether to access the usage status. valid values: 1 (yes). 
2: no.
                     */
                    uint64_t m_isUsageStatus;
                    bool m_isUsageStatusHasBeenSet;

                    /**
                     * Limit on the number of delegated administrators.
                     */
                    uint64_t m_canAssignCount;
                    bool m_canAssignCountHasBeenSet;

                    /**
                     * Organization service product ID.
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * Specifies whether organization service authorization is supported. Valid values: 1: yes; 2: no.
                     */
                    uint64_t m_serviceGrant;
                    bool m_serviceGrantHasBeenSet;

                    /**
                     * Specifies whether organization services are authorized. This field is valid when the value of ServiceGrant is 1. Valid values: Enabled: authorized; Disabled: not authorized. 
                     */
                    std::string m_grantStatus;
                    bool m_grantStatusHasBeenSet;

                    /**
                     * Specifies whether the scope of delegated management can be set. Valid values: 1: yes; 2 no.
                     */
                    uint64_t m_isSetManagementScope;
                    bool m_isSetManagementScopeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ORGANIZATIONSERVICEASSIGN_H_
