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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_UPDATECERTIFICATEINSTANCEREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_UPDATECERTIFICATEINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/ResourceTypeRegions.h>
#include <tencentcloud/ssl/v20191205/model/Tags.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * UpdateCertificateInstance request structure.
                */
                class UpdateCertificateInstanceRequest : public AbstractModel
                {
                public:
                    UpdateCertificateInstanceRequest();
                    ~UpdateCertificateInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The old certificate id for one-click update. by querying the cloud resources bound to this certificate id, and then updating these cloud resources with the new certificate.
                     * @return OldCertificateId The old certificate id for one-click update. by querying the cloud resources bound to this certificate id, and then updating these cloud resources with the new certificate.
                     * 
                     */
                    std::string GetOldCertificateId() const;

                    /**
                     * 设置The old certificate id for one-click update. by querying the cloud resources bound to this certificate id, and then updating these cloud resources with the new certificate.
                     * @param _oldCertificateId The old certificate id for one-click update. by querying the cloud resources bound to this certificate id, and then updating these cloud resources with the new certificate.
                     * 
                     */
                    void SetOldCertificateId(const std::string& _oldCertificateId);

                    /**
                     * 判断参数 OldCertificateId 是否已赋值
                     * @return OldCertificateId 是否已赋值
                     * 
                     */
                    bool OldCertificateIdHasBeenSet() const;

                    /**
                     * 获取Resource types that need to be deployed, with optional parameter values (lowercase): clb, cdn, waf, live, ddos, teo, apigateway, vod, tke, tcb, tse, cos.
                     * @return ResourceTypes Resource types that need to be deployed, with optional parameter values (lowercase): clb, cdn, waf, live, ddos, teo, apigateway, vod, tke, tcb, tse, cos.
                     * 
                     */
                    std::vector<std::string> GetResourceTypes() const;

                    /**
                     * 设置Resource types that need to be deployed, with optional parameter values (lowercase): clb, cdn, waf, live, ddos, teo, apigateway, vod, tke, tcb, tse, cos.
                     * @param _resourceTypes Resource types that need to be deployed, with optional parameter values (lowercase): clb, cdn, waf, live, ddos, teo, apigateway, vod, tke, tcb, tse, cos.
                     * 
                     */
                    void SetResourceTypes(const std::vector<std::string>& _resourceTypes);

                    /**
                     * 判断参数 ResourceTypes 是否已赋值
                     * @return ResourceTypes 是否已赋值
                     * 
                     */
                    bool ResourceTypesHasBeenSet() const;

                    /**
                     * 获取New certificate id for one-click update. if this parameter is not provided, the public key certificate and private key certificate must be provided.
                     * @return CertificateId New certificate id for one-click update. if this parameter is not provided, the public key certificate and private key certificate must be provided.
                     * 
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 设置New certificate id for one-click update. if this parameter is not provided, the public key certificate and private key certificate must be provided.
                     * @param _certificateId New certificate id for one-click update. if this parameter is not provided, the public key certificate and private key certificate must be provided.
                     * 
                     */
                    void SetCertificateId(const std::string& _certificateId);

                    /**
                     * 判断参数 CertificateId 是否已赋值
                     * @return CertificateId 是否已赋值
                     * 
                     */
                    bool CertificateIdHasBeenSet() const;

                    /**
                     * 获取List of regions that need to be deployed (deprecated)
                     * @return Regions List of regions that need to be deployed (deprecated)
                     * @deprecated
                     */
                    std::vector<std::string> GetRegions() const;

                    /**
                     * 设置List of regions that need to be deployed (deprecated)
                     * @param _regions List of regions that need to be deployed (deprecated)
                     * @deprecated
                     */
                    void SetRegions(const std::vector<std::string>& _regions);

                    /**
                     * 判断参数 Regions 是否已赋值
                     * @return Regions 是否已赋值
                     * @deprecated
                     */
                    bool RegionsHasBeenSet() const;

                    /**
                     * 获取List of regions where cloud resources need to be deployed. the cloud resource type of the supported region must be passed. valid values: clb, tke, apigateway, waf, tcb, tse, cos.
                     * @return ResourceTypesRegions List of regions where cloud resources need to be deployed. the cloud resource type of the supported region must be passed. valid values: clb, tke, apigateway, waf, tcb, tse, cos.
                     * 
                     */
                    std::vector<ResourceTypeRegions> GetResourceTypesRegions() const;

                    /**
                     * 设置List of regions where cloud resources need to be deployed. the cloud resource type of the supported region must be passed. valid values: clb, tke, apigateway, waf, tcb, tse, cos.
                     * @param _resourceTypesRegions List of regions where cloud resources need to be deployed. the cloud resource type of the supported region must be passed. valid values: clb, tke, apigateway, waf, tcb, tse, cos.
                     * 
                     */
                    void SetResourceTypesRegions(const std::vector<ResourceTypeRegions>& _resourceTypesRegions);

                    /**
                     * 判断参数 ResourceTypesRegions 是否已赋值
                     * @return ResourceTypesRegions 是否已赋值
                     * 
                     */
                    bool ResourceTypesRegionsHasBeenSet() const;

                    /**
                     * 获取If a public key certificate is uploaded, the private key certificate must also be uploaded, and the CertificateId does not need to be transmitted.
                     * @return CertificatePublicKey If a public key certificate is uploaded, the private key certificate must also be uploaded, and the CertificateId does not need to be transmitted.
                     * 
                     */
                    std::string GetCertificatePublicKey() const;

                    /**
                     * 设置If a public key certificate is uploaded, the private key certificate must also be uploaded, and the CertificateId does not need to be transmitted.
                     * @param _certificatePublicKey If a public key certificate is uploaded, the private key certificate must also be uploaded, and the CertificateId does not need to be transmitted.
                     * 
                     */
                    void SetCertificatePublicKey(const std::string& _certificatePublicKey);

                    /**
                     * 判断参数 CertificatePublicKey 是否已赋值
                     * @return CertificatePublicKey 是否已赋值
                     * 
                     */
                    bool CertificatePublicKeyHasBeenSet() const;

                    /**
                     * 获取If a private key certificate is uploaded, then a public key certificate must be uploaded; CertificateId is not required.
                     * @return CertificatePrivateKey If a private key certificate is uploaded, then a public key certificate must be uploaded; CertificateId is not required.
                     * 
                     */
                    std::string GetCertificatePrivateKey() const;

                    /**
                     * 设置If a private key certificate is uploaded, then a public key certificate must be uploaded; CertificateId is not required.
                     * @param _certificatePrivateKey If a private key certificate is uploaded, then a public key certificate must be uploaded; CertificateId is not required.
                     * 
                     */
                    void SetCertificatePrivateKey(const std::string& _certificatePrivateKey);

                    /**
                     * 判断参数 CertificatePrivateKey 是否已赋值
                     * @return CertificatePrivateKey 是否已赋值
                     * 
                     */
                    bool CertificatePrivateKeyHasBeenSet() const;

                    /**
                     * 获取Whether to ignore expiration reminder for old certificate  0: do not ignore the notification. 1: ignore the notification, ignore the expiration reminder of OldCertificateId.
                     * @return ExpiringNotificationSwitch Whether to ignore expiration reminder for old certificate  0: do not ignore the notification. 1: ignore the notification, ignore the expiration reminder of OldCertificateId.
                     * 
                     */
                    uint64_t GetExpiringNotificationSwitch() const;

                    /**
                     * 设置Whether to ignore expiration reminder for old certificate  0: do not ignore the notification. 1: ignore the notification, ignore the expiration reminder of OldCertificateId.
                     * @param _expiringNotificationSwitch Whether to ignore expiration reminder for old certificate  0: do not ignore the notification. 1: ignore the notification, ignore the expiration reminder of OldCertificateId.
                     * 
                     */
                    void SetExpiringNotificationSwitch(const uint64_t& _expiringNotificationSwitch);

                    /**
                     * 判断参数 ExpiringNotificationSwitch 是否已赋值
                     * @return ExpiringNotificationSwitch 是否已赋值
                     * 
                     */
                    bool ExpiringNotificationSwitchHasBeenSet() const;

                    /**
                     * 获取It specifies whether the same certificate is allowed to be uploaded repeatedly. If the public key and private key certificates are selected for upload, this parameter can be configured. If there are duplicate certificates, the update task will fail.
                     * @return Repeatable It specifies whether the same certificate is allowed to be uploaded repeatedly. If the public key and private key certificates are selected for upload, this parameter can be configured. If there are duplicate certificates, the update task will fail.
                     * 
                     */
                    bool GetRepeatable() const;

                    /**
                     * 设置It specifies whether the same certificate is allowed to be uploaded repeatedly. If the public key and private key certificates are selected for upload, this parameter can be configured. If there are duplicate certificates, the update task will fail.
                     * @param _repeatable It specifies whether the same certificate is allowed to be uploaded repeatedly. If the public key and private key certificates are selected for upload, this parameter can be configured. If there are duplicate certificates, the update task will fail.
                     * 
                     */
                    void SetRepeatable(const bool& _repeatable);

                    /**
                     * 判断参数 Repeatable 是否已赋值
                     * @return Repeatable 是否已赋值
                     * 
                     */
                    bool RepeatableHasBeenSet() const;

                    /**
                     * 获取Whether to allow downloading. If you choose to upload a public/private key certificate, this parameter can be configured.
                     * @return AllowDownload Whether to allow downloading. If you choose to upload a public/private key certificate, this parameter can be configured.
                     * 
                     */
                    bool GetAllowDownload() const;

                    /**
                     * 设置Whether to allow downloading. If you choose to upload a public/private key certificate, this parameter can be configured.
                     * @param _allowDownload Whether to allow downloading. If you choose to upload a public/private key certificate, this parameter can be configured.
                     * 
                     */
                    void SetAllowDownload(const bool& _allowDownload);

                    /**
                     * 判断参数 AllowDownload 是否已赋值
                     * @return AllowDownload 是否已赋值
                     * 
                     */
                    bool AllowDownloadHasBeenSet() const;

                    /**
                     * 获取Tag list. If you choose to upload a public/private key certificate, you can configure this parameter.
                     * @return Tags Tag list. If you choose to upload a public/private key certificate, you can configure this parameter.
                     * 
                     */
                    std::vector<Tags> GetTags() const;

                    /**
                     * 设置Tag list. If you choose to upload a public/private key certificate, you can configure this parameter.
                     * @param _tags Tag list. If you choose to upload a public/private key certificate, you can configure this parameter.
                     * 
                     */
                    void SetTags(const std::vector<Tags>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Project id. If you choose to upload a public/private key certificate, you can configure this parameter.
                     * @return ProjectId Project id. If you choose to upload a public/private key certificate, you can configure this parameter.
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置Project id. If you choose to upload a public/private key certificate, you can configure this parameter.
                     * @param _projectId Project id. If you choose to upload a public/private key certificate, you can configure this parameter.
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                private:

                    /**
                     * The old certificate id for one-click update. by querying the cloud resources bound to this certificate id, and then updating these cloud resources with the new certificate.
                     */
                    std::string m_oldCertificateId;
                    bool m_oldCertificateIdHasBeenSet;

                    /**
                     * Resource types that need to be deployed, with optional parameter values (lowercase): clb, cdn, waf, live, ddos, teo, apigateway, vod, tke, tcb, tse, cos.
                     */
                    std::vector<std::string> m_resourceTypes;
                    bool m_resourceTypesHasBeenSet;

                    /**
                     * New certificate id for one-click update. if this parameter is not provided, the public key certificate and private key certificate must be provided.
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                    /**
                     * List of regions that need to be deployed (deprecated)
                     */
                    std::vector<std::string> m_regions;
                    bool m_regionsHasBeenSet;

                    /**
                     * List of regions where cloud resources need to be deployed. the cloud resource type of the supported region must be passed. valid values: clb, tke, apigateway, waf, tcb, tse, cos.
                     */
                    std::vector<ResourceTypeRegions> m_resourceTypesRegions;
                    bool m_resourceTypesRegionsHasBeenSet;

                    /**
                     * If a public key certificate is uploaded, the private key certificate must also be uploaded, and the CertificateId does not need to be transmitted.
                     */
                    std::string m_certificatePublicKey;
                    bool m_certificatePublicKeyHasBeenSet;

                    /**
                     * If a private key certificate is uploaded, then a public key certificate must be uploaded; CertificateId is not required.
                     */
                    std::string m_certificatePrivateKey;
                    bool m_certificatePrivateKeyHasBeenSet;

                    /**
                     * Whether to ignore expiration reminder for old certificate  0: do not ignore the notification. 1: ignore the notification, ignore the expiration reminder of OldCertificateId.
                     */
                    uint64_t m_expiringNotificationSwitch;
                    bool m_expiringNotificationSwitchHasBeenSet;

                    /**
                     * It specifies whether the same certificate is allowed to be uploaded repeatedly. If the public key and private key certificates are selected for upload, this parameter can be configured. If there are duplicate certificates, the update task will fail.
                     */
                    bool m_repeatable;
                    bool m_repeatableHasBeenSet;

                    /**
                     * Whether to allow downloading. If you choose to upload a public/private key certificate, this parameter can be configured.
                     */
                    bool m_allowDownload;
                    bool m_allowDownloadHasBeenSet;

                    /**
                     * Tag list. If you choose to upload a public/private key certificate, you can configure this parameter.
                     */
                    std::vector<Tags> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Project id. If you choose to upload a public/private key certificate, you can configure this parameter.
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_UPDATECERTIFICATEINSTANCEREQUEST_H_
