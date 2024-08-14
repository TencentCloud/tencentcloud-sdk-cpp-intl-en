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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ServiceId Organization service ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetServiceId() const;

                    /**
                     * 设置Organization service ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _serviceId Organization service ID.
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProductName Organization service product name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置Organization service product name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _productName Organization service product name.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Whether to support delegation. Valid values: 1 (yes), 2 (no).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsAssign Whether to support delegation. Valid values: 1 (yes), 2 (no).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetIsAssign() const;

                    /**
                     * 设置Whether to support delegation. Valid values: 1 (yes), 2 (no).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isAssign Whether to support delegation. Valid values: 1 (yes), 2 (no).
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Description Organization service description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Organization service description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _description Organization service description.
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
                     * 获取Number of the current delegated admins.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MemberNum Number of the current delegated admins.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMemberNum() const;

                    /**
                     * 设置Number of the current delegated admins.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _memberNum Number of the current delegated admins.
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Document Help documentation.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDocument() const;

                    /**
                     * 设置Help documentation.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _document Help documentation.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Console path of the organization service product.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ConsoleUrl Console path of the organization service product.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetConsoleUrl() const;

                    /**
                     * 设置Console path of the organization service product.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _consoleUrl Console path of the organization service product.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Whether to access the usage status. Valid values: 1 (yes), 
 2 (no).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsUsageStatus Whether to access the usage status. Valid values: 1 (yes), 
 2 (no).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetIsUsageStatus() const;

                    /**
                     * 设置Whether to access the usage status. Valid values: 1 (yes), 
 2 (no).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isUsageStatus Whether to access the usage status. Valid values: 1 (yes), 
 2 (no).
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Limit for the number of delegated admins.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CanAssignCount Limit for the number of delegated admins.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetCanAssignCount() const;

                    /**
                     * 设置Limit for the number of delegated admins.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _canAssignCount Limit for the number of delegated admins.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Organization service product identifier.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Product Organization service product identifier.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置Organization service product identifier.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _product Organization service product identifier.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Whether to support organization service authorization. Valid values: 1 (yes), 2 (no).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ServiceGrant Whether to support organization service authorization. Valid values: 1 (yes), 2 (no).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetServiceGrant() const;

                    /**
                     * 设置Whether to support organization service authorization. Valid values: 1 (yes), 2 (no).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _serviceGrant Whether to support organization service authorization. Valid values: 1 (yes), 2 (no).
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Enabling status of organization service authorization. This field is valid when ServiceGrant is 1. Valid values: Enabled, Disabled. 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GrantStatus Enabling status of organization service authorization. This field is valid when ServiceGrant is 1. Valid values: Enabled, Disabled. 
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetGrantStatus() const;

                    /**
                     * 设置Enabling status of organization service authorization. This field is valid when ServiceGrant is 1. Valid values: Enabled, Disabled. 
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _grantStatus Enabling status of organization service authorization. This field is valid when ServiceGrant is 1. Valid values: Enabled, Disabled. 
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Whether to support setting the delegated management scope. Valid values: 1 (yes), 2 (no).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsSetManagementScope Whether to support setting the delegated management scope. Valid values: 1 (yes), 2 (no).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetIsSetManagementScope() const;

                    /**
                     * 设置Whether to support setting the delegated management scope. Valid values: 1 (yes), 2 (no).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isSetManagementScope Whether to support setting the delegated management scope. Valid values: 1 (yes), 2 (no).
Note: This field may return null, indicating that no valid values can be obtained.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * Organization service product name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * Whether to support delegation. Valid values: 1 (yes), 2 (no).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_isAssign;
                    bool m_isAssignHasBeenSet;

                    /**
                     * Organization service description.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Number of the current delegated admins.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_memberNum;
                    bool m_memberNumHasBeenSet;

                    /**
                     * Help documentation.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_document;
                    bool m_documentHasBeenSet;

                    /**
                     * Console path of the organization service product.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_consoleUrl;
                    bool m_consoleUrlHasBeenSet;

                    /**
                     * Whether to access the usage status. Valid values: 1 (yes), 
 2 (no).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_isUsageStatus;
                    bool m_isUsageStatusHasBeenSet;

                    /**
                     * Limit for the number of delegated admins.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_canAssignCount;
                    bool m_canAssignCountHasBeenSet;

                    /**
                     * Organization service product identifier.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * Whether to support organization service authorization. Valid values: 1 (yes), 2 (no).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_serviceGrant;
                    bool m_serviceGrantHasBeenSet;

                    /**
                     * Enabling status of organization service authorization. This field is valid when ServiceGrant is 1. Valid values: Enabled, Disabled. 
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_grantStatus;
                    bool m_grantStatusHasBeenSet;

                    /**
                     * Whether to support setting the delegated management scope. Valid values: 1 (yes), 2 (no).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_isSetManagementScope;
                    bool m_isSetManagementScopeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ORGANIZATIONSERVICEASSIGN_H_
