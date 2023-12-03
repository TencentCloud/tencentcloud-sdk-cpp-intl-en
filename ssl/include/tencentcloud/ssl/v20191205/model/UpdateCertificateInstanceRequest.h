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
                     * 获取One-click update old certificate ID
                     * @return OldCertificateId One-click update old certificate ID
                     * 
                     */
                    std::string GetOldCertificateId() const;

                    /**
                     * 设置One-click update old certificate ID
                     * @param _oldCertificateId One-click update old certificate ID
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
                     * 获取Type of the resource that needs to be deployed. The following parameter values are optional: clb, cdn, waf, live, ddos, teo, apigateway, vod, tke, and tcb.
                     * @return ResourceTypes Type of the resource that needs to be deployed. The following parameter values are optional: clb, cdn, waf, live, ddos, teo, apigateway, vod, tke, and tcb.
                     * 
                     */
                    std::vector<std::string> GetResourceTypes() const;

                    /**
                     * 设置Type of the resource that needs to be deployed. The following parameter values are optional: clb, cdn, waf, live, ddos, teo, apigateway, vod, tke, and tcb.
                     * @param _resourceTypes Type of the resource that needs to be deployed. The following parameter values are optional: clb, cdn, waf, live, ddos, teo, apigateway, vod, tke, and tcb.
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
                     * 获取One-click update new certificate ID
                     * @return CertificateId One-click update new certificate ID
                     * 
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 设置One-click update new certificate ID
                     * @param _certificateId One-click update new certificate ID
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
                     * 获取List of regions for which cloud resources need to be deployed
                     * @return ResourceTypesRegions List of regions for which cloud resources need to be deployed
                     * 
                     */
                    std::vector<ResourceTypeRegions> GetResourceTypesRegions() const;

                    /**
                     * 设置List of regions for which cloud resources need to be deployed
                     * @param _resourceTypesRegions List of regions for which cloud resources need to be deployed
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
                     * 获取Public key of the certificate. If the public key of the certificate is uploaded, CertificateId does not need to be uploaded.
                     * @return CertificatePublicKey Public key of the certificate. If the public key of the certificate is uploaded, CertificateId does not need to be uploaded.
                     * 
                     */
                    std::string GetCertificatePublicKey() const;

                    /**
                     * 设置Public key of the certificate. If the public key of the certificate is uploaded, CertificateId does not need to be uploaded.
                     * @param _certificatePublicKey Public key of the certificate. If the public key of the certificate is uploaded, CertificateId does not need to be uploaded.
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
                     * 获取Private key of the certificate. If the public key of the certificate is uploaded, the private key of the certificate is required.
                     * @return CertificatePrivateKey Private key of the certificate. If the public key of the certificate is uploaded, the private key of the certificate is required.
                     * 
                     */
                    std::string GetCertificatePrivateKey() const;

                    /**
                     * 设置Private key of the certificate. If the public key of the certificate is uploaded, the private key of the certificate is required.
                     * @param _certificatePrivateKey Private key of the certificate. If the public key of the certificate is uploaded, the private key of the certificate is required.
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
                     * 获取Whether an expiration reminder is ignored for the old certificate. 0: The notification is not ignored. 1: The notification is ignored.
                     * @return ExpiringNotificationSwitch Whether an expiration reminder is ignored for the old certificate. 0: The notification is not ignored. 1: The notification is ignored.
                     * 
                     */
                    uint64_t GetExpiringNotificationSwitch() const;

                    /**
                     * 设置Whether an expiration reminder is ignored for the old certificate. 0: The notification is not ignored. 1: The notification is ignored.
                     * @param _expiringNotificationSwitch Whether an expiration reminder is ignored for the old certificate. 0: The notification is not ignored. 1: The notification is ignored.
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
                     * 获取Whether repeated uploading of the same certificate is allowed. If the public key of the certificate is uploaded, this parameter can be configured.
                     * @return Repeatable Whether repeated uploading of the same certificate is allowed. If the public key of the certificate is uploaded, this parameter can be configured.
                     * 
                     */
                    bool GetRepeatable() const;

                    /**
                     * 设置Whether repeated uploading of the same certificate is allowed. If the public key of the certificate is uploaded, this parameter can be configured.
                     * @param _repeatable Whether repeated uploading of the same certificate is allowed. If the public key of the certificate is uploaded, this parameter can be configured.
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
                     * 获取Whether downloading is allowed. If the public key of the certificate is uploaded, this parameter can be configured.
                     * @return AllowDownload Whether downloading is allowed. If the public key of the certificate is uploaded, this parameter can be configured.
                     * 
                     */
                    bool GetAllowDownload() const;

                    /**
                     * 设置Whether downloading is allowed. If the public key of the certificate is uploaded, this parameter can be configured.
                     * @param _allowDownload Whether downloading is allowed. If the public key of the certificate is uploaded, this parameter can be configured.
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
                     * 获取Tag list. If the public key of the certificate is uploaded, this parameter can be configured.
                     * @return Tags Tag list. If the public key of the certificate is uploaded, this parameter can be configured.
                     * 
                     */
                    std::vector<Tags> GetTags() const;

                    /**
                     * 设置Tag list. If the public key of the certificate is uploaded, this parameter can be configured.
                     * @param _tags Tag list. If the public key of the certificate is uploaded, this parameter can be configured.
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
                     * 获取Project ID. If the public key of the certificate is uploaded, this parameter can be configured.
                     * @return ProjectId Project ID. If the public key of the certificate is uploaded, this parameter can be configured.
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置Project ID. If the public key of the certificate is uploaded, this parameter can be configured.
                     * @param _projectId Project ID. If the public key of the certificate is uploaded, this parameter can be configured.
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
                     * One-click update old certificate ID
                     */
                    std::string m_oldCertificateId;
                    bool m_oldCertificateIdHasBeenSet;

                    /**
                     * Type of the resource that needs to be deployed. The following parameter values are optional: clb, cdn, waf, live, ddos, teo, apigateway, vod, tke, and tcb.
                     */
                    std::vector<std::string> m_resourceTypes;
                    bool m_resourceTypesHasBeenSet;

                    /**
                     * One-click update new certificate ID
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                    /**
                     * List of regions that need to be deployed (deprecated)
                     */
                    std::vector<std::string> m_regions;
                    bool m_regionsHasBeenSet;

                    /**
                     * List of regions for which cloud resources need to be deployed
                     */
                    std::vector<ResourceTypeRegions> m_resourceTypesRegions;
                    bool m_resourceTypesRegionsHasBeenSet;

                    /**
                     * Public key of the certificate. If the public key of the certificate is uploaded, CertificateId does not need to be uploaded.
                     */
                    std::string m_certificatePublicKey;
                    bool m_certificatePublicKeyHasBeenSet;

                    /**
                     * Private key of the certificate. If the public key of the certificate is uploaded, the private key of the certificate is required.
                     */
                    std::string m_certificatePrivateKey;
                    bool m_certificatePrivateKeyHasBeenSet;

                    /**
                     * Whether an expiration reminder is ignored for the old certificate. 0: The notification is not ignored. 1: The notification is ignored.
                     */
                    uint64_t m_expiringNotificationSwitch;
                    bool m_expiringNotificationSwitchHasBeenSet;

                    /**
                     * Whether repeated uploading of the same certificate is allowed. If the public key of the certificate is uploaded, this parameter can be configured.
                     */
                    bool m_repeatable;
                    bool m_repeatableHasBeenSet;

                    /**
                     * Whether downloading is allowed. If the public key of the certificate is uploaded, this parameter can be configured.
                     */
                    bool m_allowDownload;
                    bool m_allowDownloadHasBeenSet;

                    /**
                     * Tag list. If the public key of the certificate is uploaded, this parameter can be configured.
                     */
                    std::vector<Tags> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Project ID. If the public key of the certificate is uploaded, this parameter can be configured.
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_UPDATECERTIFICATEINSTANCEREQUEST_H_
