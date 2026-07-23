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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_IPNETWORK_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_IPNETWORK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * The basic IP network information
                */
                class IPNetwork : public AbstractModel
                {
                public:
                    IPNetwork();
                    ~IPNetwork() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Internet service provider</p>
                     * @return ISP <p>Internet service provider</p>
                     * 
                     */
                    std::string GetISP() const;

                    /**
                     * 设置<p>Internet service provider</p>
                     * @param _iSP <p>Internet service provider</p>
                     * 
                     */
                    void SetISP(const std::string& _iSP);

                    /**
                     * 判断参数 ISP 是否已赋值
                     * @return ISP 是否已赋值
                     * 
                     */
                    bool ISPHasBeenSet() const;

                    /**
                     * 获取<p>Autonomous system number</p>
                     * @return ASN <p>Autonomous system number</p>
                     * 
                     */
                    std::string GetASN() const;

                    /**
                     * 设置<p>Autonomous system number</p>
                     * @param _aSN <p>Autonomous system number</p>
                     * 
                     */
                    void SetASN(const std::string& _aSN);

                    /**
                     * 判断参数 ASN 是否已赋值
                     * @return ASN 是否已赋值
                     * 
                     */
                    bool ASNHasBeenSet() const;

                    /**
                     * 获取<p>IP registration organization name</p>
                     * @return Organization <p>IP registration organization name</p>
                     * 
                     */
                    std::string GetOrganization() const;

                    /**
                     * 设置<p>IP registration organization name</p>
                     * @param _organization <p>IP registration organization name</p>
                     * 
                     */
                    void SetOrganization(const std::string& _organization);

                    /**
                     * 判断参数 Organization 是否已赋值
                     * @return Organization 是否已赋值
                     * 
                     */
                    bool OrganizationHasBeenSet() const;

                    /**
                     * 获取<p>Whether it is a reserved IP address</p>
                     * @return IsReserved <p>Whether it is a reserved IP address</p>
                     * 
                     */
                    bool GetIsReserved() const;

                    /**
                     * 设置<p>Whether it is a reserved IP address</p>
                     * @param _isReserved <p>Whether it is a reserved IP address</p>
                     * 
                     */
                    void SetIsReserved(const bool& _isReserved);

                    /**
                     * 判断参数 IsReserved 是否已赋值
                     * @return IsReserved 是否已赋值
                     * 
                     */
                    bool IsReservedHasBeenSet() const;

                    /**
                     * 获取<p>Whether it is a gateway IP address</p>
                     * @return IsGateway <p>Whether it is a gateway IP address</p>
                     * 
                     */
                    bool GetIsGateway() const;

                    /**
                     * 设置<p>Whether it is a gateway IP address</p>
                     * @param _isGateway <p>Whether it is a gateway IP address</p>
                     * 
                     */
                    void SetIsGateway(const bool& _isGateway);

                    /**
                     * 判断参数 IsGateway 是否已赋值
                     * @return IsGateway 是否已赋值
                     * 
                     */
                    bool IsGatewayHasBeenSet() const;

                    /**
                     * 获取<p>Whether it belongs to an anycast network</p>
                     * @return IsAnycast <p>Whether it belongs to an anycast network</p>
                     * 
                     */
                    bool GetIsAnycast() const;

                    /**
                     * 设置<p>Whether it belongs to an anycast network</p>
                     * @param _isAnycast <p>Whether it belongs to an anycast network</p>
                     * 
                     */
                    void SetIsAnycast(const bool& _isAnycast);

                    /**
                     * 判断参数 IsAnycast 是否已赋值
                     * @return IsAnycast 是否已赋值
                     * 
                     */
                    bool IsAnycastHasBeenSet() const;

                    /**
                     * 获取<p>Whether it is from a mobile network</p>
                     * @return IsMobile <p>Whether it is from a mobile network</p>
                     * 
                     */
                    bool GetIsMobile() const;

                    /**
                     * 设置<p>Whether it is from a mobile network</p>
                     * @param _isMobile <p>Whether it is from a mobile network</p>
                     * 
                     */
                    void SetIsMobile(const bool& _isMobile);

                    /**
                     * 判断参数 IsMobile 是否已赋值
                     * @return IsMobile 是否已赋值
                     * 
                     */
                    bool IsMobileHasBeenSet() const;

                    /**
                     * 获取<p>Whether it is a dynamic IP address</p>
                     * @return IsDynamic <p>Whether it is a dynamic IP address</p>
                     * 
                     */
                    bool GetIsDynamic() const;

                    /**
                     * 设置<p>Whether it is a dynamic IP address</p>
                     * @param _isDynamic <p>Whether it is a dynamic IP address</p>
                     * 
                     */
                    void SetIsDynamic(const bool& _isDynamic);

                    /**
                     * 判断参数 IsDynamic 是否已赋值
                     * @return IsDynamic 是否已赋值
                     * 
                     */
                    bool IsDynamicHasBeenSet() const;

                    /**
                     * 获取<p>Whether it is a network egress</p>
                     * @return IsEgress <p>Whether it is a network egress</p>
                     * 
                     */
                    bool GetIsEgress() const;

                    /**
                     * 设置<p>Whether it is a network egress</p>
                     * @param _isEgress <p>Whether it is a network egress</p>
                     * 
                     */
                    void SetIsEgress(const bool& _isEgress);

                    /**
                     * 判断参数 IsEgress 是否已赋值
                     * @return IsEgress 是否已赋值
                     * 
                     */
                    bool IsEgressHasBeenSet() const;

                    /**
                     * 获取<p>Whether it is used for domain name resolution</p>
                     * @return IsDNS <p>Whether it is used for domain name resolution</p>
                     * 
                     */
                    bool GetIsDNS() const;

                    /**
                     * 设置<p>Whether it is used for domain name resolution</p>
                     * @param _isDNS <p>Whether it is used for domain name resolution</p>
                     * 
                     */
                    void SetIsDNS(const bool& _isDNS);

                    /**
                     * 判断参数 IsDNS 是否已赋值
                     * @return IsDNS 是否已赋值
                     * 
                     */
                    bool IsDNSHasBeenSet() const;

                    /**
                     * 获取<p>Whether it is an educational institution</p>
                     * @return IsEducation <p>Whether it is an educational institution</p>
                     * 
                     */
                    bool GetIsEducation() const;

                    /**
                     * 设置<p>Whether it is an educational institution</p>
                     * @param _isEducation <p>Whether it is an educational institution</p>
                     * 
                     */
                    void SetIsEducation(const bool& _isEducation);

                    /**
                     * 判断参数 IsEducation 是否已赋值
                     * @return IsEducation 是否已赋值
                     * 
                     */
                    bool IsEducationHasBeenSet() const;

                    /**
                     * 获取<p>Whether it is an organization</p>
                     * @return IsInstitution <p>Whether it is an organization</p>
                     * 
                     */
                    bool GetIsInstitution() const;

                    /**
                     * 设置<p>Whether it is an organization</p>
                     * @param _isInstitution <p>Whether it is an organization</p>
                     * 
                     */
                    void SetIsInstitution(const bool& _isInstitution);

                    /**
                     * 判断参数 IsInstitution 是否已赋值
                     * @return IsInstitution 是否已赋值
                     * 
                     */
                    bool IsInstitutionHasBeenSet() const;

                    /**
                     * 获取<p>Whether it is an enterprise dedicated line</p>
                     * @return IsCompany <p>Whether it is an enterprise dedicated line</p>
                     * 
                     */
                    bool GetIsCompany() const;

                    /**
                     * 设置<p>Whether it is an enterprise dedicated line</p>
                     * @param _isCompany <p>Whether it is an enterprise dedicated line</p>
                     * 
                     */
                    void SetIsCompany(const bool& _isCompany);

                    /**
                     * 判断参数 IsCompany 是否已赋值
                     * @return IsCompany 是否已赋值
                     * 
                     */
                    bool IsCompanyHasBeenSet() const;

                    /**
                     * 获取<p>Whether it is a residence broadband connection</p>
                     * @return IsResidence <p>Whether it is a residence broadband connection</p>
                     * 
                     */
                    bool GetIsResidence() const;

                    /**
                     * 设置<p>Whether it is a residence broadband connection</p>
                     * @param _isResidence <p>Whether it is a residence broadband connection</p>
                     * 
                     */
                    void SetIsResidence(const bool& _isResidence);

                    /**
                     * 判断参数 IsResidence 是否已赋值
                     * @return IsResidence 是否已赋值
                     * 
                     */
                    bool IsResidenceHasBeenSet() const;

                    /**
                     * 获取<p>Whether it is cloud service</p>
                     * @return IsCloudService <p>Whether it is cloud service</p>
                     * 
                     */
                    bool GetIsCloudService() const;

                    /**
                     * 设置<p>Whether it is cloud service</p>
                     * @param _isCloudService <p>Whether it is cloud service</p>
                     * 
                     */
                    void SetIsCloudService(const bool& _isCloudService);

                    /**
                     * 判断参数 IsCloudService 是否已赋值
                     * @return IsCloudService 是否已赋值
                     * 
                     */
                    bool IsCloudServiceHasBeenSet() const;

                    /**
                     * 获取<p>Whether it is infrastructure</p>
                     * @return IsInfrastructure <p>Whether it is infrastructure</p>
                     * 
                     */
                    bool GetIsInfrastructure() const;

                    /**
                     * 设置<p>Whether it is infrastructure</p>
                     * @param _isInfrastructure <p>Whether it is infrastructure</p>
                     * 
                     */
                    void SetIsInfrastructure(const bool& _isInfrastructure);

                    /**
                     * 判断参数 IsInfrastructure 是否已赋值
                     * @return IsInfrastructure 是否已赋值
                     * 
                     */
                    bool IsInfrastructureHasBeenSet() const;

                    /**
                     * 获取<p>Whether it is an mail exchange service</p>
                     * @return IsMXServer <p>Whether it is an mail exchange service</p>
                     * 
                     */
                    bool GetIsMXServer() const;

                    /**
                     * 设置<p>Whether it is an mail exchange service</p>
                     * @param _isMXServer <p>Whether it is an mail exchange service</p>
                     * 
                     */
                    void SetIsMXServer(const bool& _isMXServer);

                    /**
                     * 判断参数 IsMXServer 是否已赋值
                     * @return IsMXServer 是否已赋值
                     * 
                     */
                    bool IsMXServerHasBeenSet() const;

                private:

                    /**
                     * <p>Internet service provider</p>
                     */
                    std::string m_iSP;
                    bool m_iSPHasBeenSet;

                    /**
                     * <p>Autonomous system number</p>
                     */
                    std::string m_aSN;
                    bool m_aSNHasBeenSet;

                    /**
                     * <p>IP registration organization name</p>
                     */
                    std::string m_organization;
                    bool m_organizationHasBeenSet;

                    /**
                     * <p>Whether it is a reserved IP address</p>
                     */
                    bool m_isReserved;
                    bool m_isReservedHasBeenSet;

                    /**
                     * <p>Whether it is a gateway IP address</p>
                     */
                    bool m_isGateway;
                    bool m_isGatewayHasBeenSet;

                    /**
                     * <p>Whether it belongs to an anycast network</p>
                     */
                    bool m_isAnycast;
                    bool m_isAnycastHasBeenSet;

                    /**
                     * <p>Whether it is from a mobile network</p>
                     */
                    bool m_isMobile;
                    bool m_isMobileHasBeenSet;

                    /**
                     * <p>Whether it is a dynamic IP address</p>
                     */
                    bool m_isDynamic;
                    bool m_isDynamicHasBeenSet;

                    /**
                     * <p>Whether it is a network egress</p>
                     */
                    bool m_isEgress;
                    bool m_isEgressHasBeenSet;

                    /**
                     * <p>Whether it is used for domain name resolution</p>
                     */
                    bool m_isDNS;
                    bool m_isDNSHasBeenSet;

                    /**
                     * <p>Whether it is an educational institution</p>
                     */
                    bool m_isEducation;
                    bool m_isEducationHasBeenSet;

                    /**
                     * <p>Whether it is an organization</p>
                     */
                    bool m_isInstitution;
                    bool m_isInstitutionHasBeenSet;

                    /**
                     * <p>Whether it is an enterprise dedicated line</p>
                     */
                    bool m_isCompany;
                    bool m_isCompanyHasBeenSet;

                    /**
                     * <p>Whether it is a residence broadband connection</p>
                     */
                    bool m_isResidence;
                    bool m_isResidenceHasBeenSet;

                    /**
                     * <p>Whether it is cloud service</p>
                     */
                    bool m_isCloudService;
                    bool m_isCloudServiceHasBeenSet;

                    /**
                     * <p>Whether it is infrastructure</p>
                     */
                    bool m_isInfrastructure;
                    bool m_isInfrastructureHasBeenSet;

                    /**
                     * <p>Whether it is an mail exchange service</p>
                     */
                    bool m_isMXServer;
                    bool m_isMXServerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_IPNETWORK_H_
