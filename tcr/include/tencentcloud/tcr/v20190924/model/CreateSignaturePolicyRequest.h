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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_CREATESIGNATUREPOLICYREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_CREATESIGNATUREPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * CreateSignaturePolicy request structure.
                */
                class CreateSignaturePolicyRequest : public AbstractModel
                {
                public:
                    CreateSignaturePolicyRequest();
                    ~CreateSignaturePolicyRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Policy name
                     * @return Name Policy name
                     */
                    std::string GetName() const;

                    /**
                     * 设置Policy name
                     * @param Name Policy name
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Namespace name
                     * @return NamespaceName Namespace name
                     */
                    std::string GetNamespaceName() const;

                    /**
                     * 设置Namespace name
                     * @param NamespaceName Namespace name
                     */
                    void SetNamespaceName(const std::string& _namespaceName);

                    /**
                     * 判断参数 NamespaceName 是否已赋值
                     * @return NamespaceName 是否已赋值
                     */
                    bool NamespaceNameHasBeenSet() const;

                    /**
                     * 获取KMS key
                     * @return KmsId KMS key
                     */
                    std::string GetKmsId() const;

                    /**
                     * 设置KMS key
                     * @param KmsId KMS key
                     */
                    void SetKmsId(const std::string& _kmsId);

                    /**
                     * 判断参数 KmsId 是否已赋值
                     * @return KmsId 是否已赋值
                     */
                    bool KmsIdHasBeenSet() const;

                    /**
                     * 获取Region of the KMS key
                     * @return KmsRegion Region of the KMS key
                     */
                    std::string GetKmsRegion() const;

                    /**
                     * 设置Region of the KMS key
                     * @param KmsRegion Region of the KMS key
                     */
                    void SetKmsRegion(const std::string& _kmsRegion);

                    /**
                     * 判断参数 KmsRegion 是否已赋值
                     * @return KmsRegion 是否已赋值
                     */
                    bool KmsRegionHasBeenSet() const;

                    /**
                     * 获取Custom domain name. If this parameter is left empty, the default domain name of the TCR instance will be used to generate the signature.
                     * @return Domain Custom domain name. If this parameter is left empty, the default domain name of the TCR instance will be used to generate the signature.
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Custom domain name. If this parameter is left empty, the default domain name of the TCR instance will be used to generate the signature.
                     * @param Domain Custom domain name. If this parameter is left empty, the default domain name of the TCR instance will be used to generate the signature.
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Whether to disable the signing policy. Default value: false.
                     * @return Disabled Whether to disable the signing policy. Default value: false.
                     */
                    bool GetDisabled() const;

                    /**
                     * 设置Whether to disable the signing policy. Default value: false.
                     * @param Disabled Whether to disable the signing policy. Default value: false.
                     */
                    void SetDisabled(const bool& _disabled);

                    /**
                     * 判断参数 Disabled 是否已赋值
                     * @return Disabled 是否已赋值
                     */
                    bool DisabledHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * Policy name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Namespace name
                     */
                    std::string m_namespaceName;
                    bool m_namespaceNameHasBeenSet;

                    /**
                     * KMS key
                     */
                    std::string m_kmsId;
                    bool m_kmsIdHasBeenSet;

                    /**
                     * Region of the KMS key
                     */
                    std::string m_kmsRegion;
                    bool m_kmsRegionHasBeenSet;

                    /**
                     * Custom domain name. If this parameter is left empty, the default domain name of the TCR instance will be used to generate the signature.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Whether to disable the signing policy. Default value: false.
                     */
                    bool m_disabled;
                    bool m_disabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_CREATESIGNATUREPOLICYREQUEST_H_
