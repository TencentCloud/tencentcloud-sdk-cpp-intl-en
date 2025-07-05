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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_UPLOADUPDATECERTIFICATEINSTANCEREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_UPLOADUPDATECERTIFICATEINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/ResourceTypeRegions.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * UploadUpdateCertificateInstance request structure.
                */
                class UploadUpdateCertificateInstanceRequest : public AbstractModel
                {
                public:
                    UploadUpdateCertificateInstanceRequest();
                    ~UploadUpdateCertificateInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Old Certificate ID for One-Click Update. Query the tencent cloud resources bound to this certificate ID and use the new certificate to update these resources.
                     * @return OldCertificateId Old Certificate ID for One-Click Update. Query the tencent cloud resources bound to this certificate ID and use the new certificate to update these resources.
                     * 
                     */
                    std::string GetOldCertificateId() const;

                    /**
                     * 设置Old Certificate ID for One-Click Update. Query the tencent cloud resources bound to this certificate ID and use the new certificate to update these resources.
                     * @param _oldCertificateId Old Certificate ID for One-Click Update. Query the tencent cloud resources bound to this certificate ID and use the new certificate to update these resources.
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
                     * 获取Resource type that needs to be deployed, parameter value (lowercase): clb.
                     * @return ResourceTypes Resource type that needs to be deployed, parameter value (lowercase): clb.
                     * 
                     */
                    std::vector<std::string> GetResourceTypes() const;

                    /**
                     * 设置Resource type that needs to be deployed, parameter value (lowercase): clb.
                     * @param _resourceTypes Resource type that needs to be deployed, parameter value (lowercase): clb.
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
                     * 获取Public key certificate.
                     * @return CertificatePublicKey Public key certificate.
                     * 
                     */
                    std::string GetCertificatePublicKey() const;

                    /**
                     * 设置Public key certificate.
                     * @param _certificatePublicKey Public key certificate.
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
                     * 获取Private key certificate.
                     * @return CertificatePrivateKey Private key certificate.
                     * 
                     */
                    std::string GetCertificatePrivateKey() const;

                    /**
                     * 设置Private key certificate.
                     * @param _certificatePrivateKey Private key certificate.
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
                     * 获取The list of regions where cloud resources need to be deployed. The cloud resource type supported in the region is required. Value: clb.
                     * @return ResourceTypesRegions The list of regions where cloud resources need to be deployed. The cloud resource type supported in the region is required. Value: clb.
                     * 
                     */
                    std::vector<ResourceTypeRegions> GetResourceTypesRegions() const;

                    /**
                     * 设置The list of regions where cloud resources need to be deployed. The cloud resource type supported in the region is required. Value: clb.
                     * @param _resourceTypesRegions The list of regions where cloud resources need to be deployed. The cloud resource type supported in the region is required. Value: clb.
                     * 
                     */
                    void SetResourceTypesRegions(const std::vector<ResourceTypeRegions>& _resourceTypesRegions);

                    /**
                     * 判断参数 ResourceTypesRegions 是否已赋值
                     * @return ResourceTypesRegions 是否已赋值
                     * 
                     */
                    bool ResourceTypesRegionsHasBeenSet() const;

                private:

                    /**
                     * Old Certificate ID for One-Click Update. Query the tencent cloud resources bound to this certificate ID and use the new certificate to update these resources.
                     */
                    std::string m_oldCertificateId;
                    bool m_oldCertificateIdHasBeenSet;

                    /**
                     * Resource type that needs to be deployed, parameter value (lowercase): clb.
                     */
                    std::vector<std::string> m_resourceTypes;
                    bool m_resourceTypesHasBeenSet;

                    /**
                     * Public key certificate.
                     */
                    std::string m_certificatePublicKey;
                    bool m_certificatePublicKeyHasBeenSet;

                    /**
                     * Private key certificate.
                     */
                    std::string m_certificatePrivateKey;
                    bool m_certificatePrivateKeyHasBeenSet;

                    /**
                     * The list of regions where cloud resources need to be deployed. The cloud resource type supported in the region is required. Value: clb.
                     */
                    std::vector<ResourceTypeRegions> m_resourceTypesRegions;
                    bool m_resourceTypesRegionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_UPLOADUPDATECERTIFICATEINSTANCEREQUEST_H_
