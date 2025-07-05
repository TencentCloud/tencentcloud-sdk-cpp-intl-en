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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_BRIEFDOMAIN_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_BRIEFDOMAIN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/Origin.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * Basic domain configuration information, including CNAME, status, service type, acceleration region, creation time, last modified time, and origin server configuration.
                */
                class BriefDomain : public AbstractModel
                {
                public:
                    BriefDomain();
                    ~BriefDomain() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Domain name ID
                     * @return ResourceId Domain name ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Domain name ID
                     * @param _resourceId Domain name ID
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取Tencent Cloud account ID
                     * @return AppId Tencent Cloud account ID
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置Tencent Cloud account ID
                     * @param _appId Tencent Cloud account ID
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取Acceleration domain name
                     * @return Domain Acceleration domain name
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Acceleration domain name
                     * @param _domain Acceleration domain name
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取CNAME address of domain name
                     * @return Cname CNAME address of domain name
                     * 
                     */
                    std::string GetCname() const;

                    /**
                     * 设置CNAME address of domain name
                     * @param _cname CNAME address of domain name
                     * 
                     */
                    void SetCname(const std::string& _cname);

                    /**
                     * 判断参数 Cname 是否已赋值
                     * @return Cname 是否已赋值
                     * 
                     */
                    bool CnameHasBeenSet() const;

                    /**
                     * 获取Acceleration service status
`rejected`: The domain name is rejected due to expiration/deregistration of its ICP filing
`processing`: Deploying
`closing`: Disabling
`online`: Enabled
`offline`: Disabled
                     * @return Status Acceleration service status
`rejected`: The domain name is rejected due to expiration/deregistration of its ICP filing
`processing`: Deploying
`closing`: Disabling
`online`: Enabled
`offline`: Disabled
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Acceleration service status
`rejected`: The domain name is rejected due to expiration/deregistration of its ICP filing
`processing`: Deploying
`closing`: Disabling
`online`: Enabled
`offline`: Disabled
                     * @param _status Acceleration service status
`rejected`: The domain name is rejected due to expiration/deregistration of its ICP filing
`processing`: Deploying
`closing`: Disabling
`online`: Enabled
`offline`: Disabled
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Project ID, which can be viewed on the Tencent Cloud project management page
                     * @return ProjectId Project ID, which can be viewed on the Tencent Cloud project management page
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID, which can be viewed on the Tencent Cloud project management page
                     * @param _projectId Project ID, which can be viewed on the Tencent Cloud project management page
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Domain name service type
`web`: Static acceleration
`download`: Download acceleration
`media`: Streaming media VOD acceleration
                     * @return ServiceType Domain name service type
`web`: Static acceleration
`download`: Download acceleration
`media`: Streaming media VOD acceleration
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置Domain name service type
`web`: Static acceleration
`download`: Download acceleration
`media`: Streaming media VOD acceleration
                     * @param _serviceType Domain name service type
`web`: Static acceleration
`download`: Download acceleration
`media`: Streaming media VOD acceleration
                     * 
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取Domain name creation time.
                     * @return CreateTime Domain name creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Domain name creation time.
                     * @param _createTime Domain name creation time.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Domain name update time.
                     * @return UpdateTime Domain name update time.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Domain name update time.
                     * @param _updateTime Domain name update time.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Origin server configuration details.
                     * @return Origin Origin server configuration details.
                     * 
                     */
                    Origin GetOrigin() const;

                    /**
                     * 设置Origin server configuration details.
                     * @param _origin Origin server configuration details.
                     * 
                     */
                    void SetOrigin(const Origin& _origin);

                    /**
                     * 判断参数 Origin 是否已赋值
                     * @return Origin 是否已赋值
                     * 
                     */
                    bool OriginHasBeenSet() const;

                    /**
                     * 获取Domain name block status
`normal`: Normal
`overdue`: The domain name has been disabled due to account arrears. The acceleration service can be resumed after the account is topped up.
`malicious`: The acceleration service has been forcibly disabled due to detection of malicious behavior.
`ddos`: The acceleration service has been disabled due to large-scale DDoS attacks to the domain name
`idle`: No operations or data has been detected for more than 90 days. The domain name is determined to be inactive which automatically disables the acceleration service. You can restart the service.
`unlicensed`: The acceleration service has been automatically disabled as the domain name has no ICP filing or its ICP filing is deregistered. Service can be resumed after an ICP filing is obtained.
`capping`: The configured upper limit for bandwidth has been reached.
`readonly`: The domain name has a special configuration and has been locked.
                     * @return Disable Domain name block status
`normal`: Normal
`overdue`: The domain name has been disabled due to account arrears. The acceleration service can be resumed after the account is topped up.
`malicious`: The acceleration service has been forcibly disabled due to detection of malicious behavior.
`ddos`: The acceleration service has been disabled due to large-scale DDoS attacks to the domain name
`idle`: No operations or data has been detected for more than 90 days. The domain name is determined to be inactive which automatically disables the acceleration service. You can restart the service.
`unlicensed`: The acceleration service has been automatically disabled as the domain name has no ICP filing or its ICP filing is deregistered. Service can be resumed after an ICP filing is obtained.
`capping`: The configured upper limit for bandwidth has been reached.
`readonly`: The domain name has a special configuration and has been locked.
                     * 
                     */
                    std::string GetDisable() const;

                    /**
                     * 设置Domain name block status
`normal`: Normal
`overdue`: The domain name has been disabled due to account arrears. The acceleration service can be resumed after the account is topped up.
`malicious`: The acceleration service has been forcibly disabled due to detection of malicious behavior.
`ddos`: The acceleration service has been disabled due to large-scale DDoS attacks to the domain name
`idle`: No operations or data has been detected for more than 90 days. The domain name is determined to be inactive which automatically disables the acceleration service. You can restart the service.
`unlicensed`: The acceleration service has been automatically disabled as the domain name has no ICP filing or its ICP filing is deregistered. Service can be resumed after an ICP filing is obtained.
`capping`: The configured upper limit for bandwidth has been reached.
`readonly`: The domain name has a special configuration and has been locked.
                     * @param _disable Domain name block status
`normal`: Normal
`overdue`: The domain name has been disabled due to account arrears. The acceleration service can be resumed after the account is topped up.
`malicious`: The acceleration service has been forcibly disabled due to detection of malicious behavior.
`ddos`: The acceleration service has been disabled due to large-scale DDoS attacks to the domain name
`idle`: No operations or data has been detected for more than 90 days. The domain name is determined to be inactive which automatically disables the acceleration service. You can restart the service.
`unlicensed`: The acceleration service has been automatically disabled as the domain name has no ICP filing or its ICP filing is deregistered. Service can be resumed after an ICP filing is obtained.
`capping`: The configured upper limit for bandwidth has been reached.
`readonly`: The domain name has a special configuration and has been locked.
                     * 
                     */
                    void SetDisable(const std::string& _disable);

                    /**
                     * 判断参数 Disable 是否已赋值
                     * @return Disable 是否已赋值
                     * 
                     */
                    bool DisableHasBeenSet() const;

                    /**
                     * 获取Acceleration region
`mainland`: Acceleration inside the Chinese mainland
`overseas`: Acceleration outside the Chinese mainland
`global`: Acceleration over the globe
                     * @return Area Acceleration region
`mainland`: Acceleration inside the Chinese mainland
`overseas`: Acceleration outside the Chinese mainland
`global`: Acceleration over the globe
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Acceleration region
`mainland`: Acceleration inside the Chinese mainland
`overseas`: Acceleration outside the Chinese mainland
`global`: Acceleration over the globe
                     * @param _area Acceleration region
`mainland`: Acceleration inside the Chinese mainland
`overseas`: Acceleration outside the Chinese mainland
`global`: Acceleration over the globe
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取Domain name lock status
`normal`: Not locked
`mainland`: Locked in the Chinese mainland
overseas: Locked outside the Chinese mainland
global: Locked globally
                     * @return Readonly Domain name lock status
`normal`: Not locked
`mainland`: Locked in the Chinese mainland
overseas: Locked outside the Chinese mainland
global: Locked globally
                     * 
                     */
                    std::string GetReadonly() const;

                    /**
                     * 设置Domain name lock status
`normal`: Not locked
`mainland`: Locked in the Chinese mainland
overseas: Locked outside the Chinese mainland
global: Locked globally
                     * @param _readonly Domain name lock status
`normal`: Not locked
`mainland`: Locked in the Chinese mainland
overseas: Locked outside the Chinese mainland
global: Locked globally
                     * 
                     */
                    void SetReadonly(const std::string& _readonly);

                    /**
                     * 判断参数 Readonly 是否已赋值
                     * @return Readonly 是否已赋值
                     * 
                     */
                    bool ReadonlyHasBeenSet() const;

                    /**
                     * 获取Product of the domain name, either `cdn` or `ecdn`.
                     * @return Product Product of the domain name, either `cdn` or `ecdn`.
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置Product of the domain name, either `cdn` or `ecdn`.
                     * @param _product Product of the domain name, either `cdn` or `ecdn`.
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
                     * 获取Primary domain name
                     * @return ParentHost Primary domain name
                     * 
                     */
                    std::string GetParentHost() const;

                    /**
                     * 设置Primary domain name
                     * @param _parentHost Primary domain name
                     * 
                     */
                    void SetParentHost(const std::string& _parentHost);

                    /**
                     * 判断参数 ParentHost 是否已赋值
                     * @return ParentHost 是否已赋值
                     * 
                     */
                    bool ParentHostHasBeenSet() const;

                private:

                    /**
                     * Domain name ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * Tencent Cloud account ID
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * Acceleration domain name
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * CNAME address of domain name
                     */
                    std::string m_cname;
                    bool m_cnameHasBeenSet;

                    /**
                     * Acceleration service status
`rejected`: The domain name is rejected due to expiration/deregistration of its ICP filing
`processing`: Deploying
`closing`: Disabling
`online`: Enabled
`offline`: Disabled
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Project ID, which can be viewed on the Tencent Cloud project management page
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Domain name service type
`web`: Static acceleration
`download`: Download acceleration
`media`: Streaming media VOD acceleration
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * Domain name creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Domain name update time.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Origin server configuration details.
                     */
                    Origin m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * Domain name block status
`normal`: Normal
`overdue`: The domain name has been disabled due to account arrears. The acceleration service can be resumed after the account is topped up.
`malicious`: The acceleration service has been forcibly disabled due to detection of malicious behavior.
`ddos`: The acceleration service has been disabled due to large-scale DDoS attacks to the domain name
`idle`: No operations or data has been detected for more than 90 days. The domain name is determined to be inactive which automatically disables the acceleration service. You can restart the service.
`unlicensed`: The acceleration service has been automatically disabled as the domain name has no ICP filing or its ICP filing is deregistered. Service can be resumed after an ICP filing is obtained.
`capping`: The configured upper limit for bandwidth has been reached.
`readonly`: The domain name has a special configuration and has been locked.
                     */
                    std::string m_disable;
                    bool m_disableHasBeenSet;

                    /**
                     * Acceleration region
`mainland`: Acceleration inside the Chinese mainland
`overseas`: Acceleration outside the Chinese mainland
`global`: Acceleration over the globe
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Domain name lock status
`normal`: Not locked
`mainland`: Locked in the Chinese mainland
overseas: Locked outside the Chinese mainland
global: Locked globally
                     */
                    std::string m_readonly;
                    bool m_readonlyHasBeenSet;

                    /**
                     * Product of the domain name, either `cdn` or `ecdn`.
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * Primary domain name
                     */
                    std::string m_parentHost;
                    bool m_parentHostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_BRIEFDOMAIN_H_
