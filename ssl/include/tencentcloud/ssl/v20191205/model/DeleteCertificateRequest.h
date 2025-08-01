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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DELETECERTIFICATEREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DELETECERTIFICATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * DeleteCertificate request structure.
                */
                class DeleteCertificateRequest : public AbstractModel
                {
                public:
                    DeleteCertificateRequest();
                    ~DeleteCertificateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Certificate ID
                     * @return CertificateId Certificate ID
                     * 
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 设置Certificate ID
                     * @param _certificateId Certificate ID
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
                     * 获取When deleting, check whether the certificate is associated with cloud resources. By default, no check is performed. if you choose to check (the authorization service role SSL_QCSLinkedRoleInReplaceLoadCertificate is required), the deletion will become asynchronous, and the API will return an asynchronous task id. you need to use the DescribeDeleteCertificatesTaskResult API to check whether the deletion is successful.
                     * @return IsCheckResource When deleting, check whether the certificate is associated with cloud resources. By default, no check is performed. if you choose to check (the authorization service role SSL_QCSLinkedRoleInReplaceLoadCertificate is required), the deletion will become asynchronous, and the API will return an asynchronous task id. you need to use the DescribeDeleteCertificatesTaskResult API to check whether the deletion is successful.
                     * 
                     */
                    bool GetIsCheckResource() const;

                    /**
                     * 设置When deleting, check whether the certificate is associated with cloud resources. By default, no check is performed. if you choose to check (the authorization service role SSL_QCSLinkedRoleInReplaceLoadCertificate is required), the deletion will become asynchronous, and the API will return an asynchronous task id. you need to use the DescribeDeleteCertificatesTaskResult API to check whether the deletion is successful.
                     * @param _isCheckResource When deleting, check whether the certificate is associated with cloud resources. By default, no check is performed. if you choose to check (the authorization service role SSL_QCSLinkedRoleInReplaceLoadCertificate is required), the deletion will become asynchronous, and the API will return an asynchronous task id. you need to use the DescribeDeleteCertificatesTaskResult API to check whether the deletion is successful.
                     * 
                     */
                    void SetIsCheckResource(const bool& _isCheckResource);

                    /**
                     * 判断参数 IsCheckResource 是否已赋值
                     * @return IsCheckResource 是否已赋值
                     * 
                     */
                    bool IsCheckResourceHasBeenSet() const;

                private:

                    /**
                     * Certificate ID
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                    /**
                     * When deleting, check whether the certificate is associated with cloud resources. By default, no check is performed. if you choose to check (the authorization service role SSL_QCSLinkedRoleInReplaceLoadCertificate is required), the deletion will become asynchronous, and the API will return an asynchronous task id. you need to use the DescribeDeleteCertificatesTaskResult API to check whether the deletion is successful.
                     */
                    bool m_isCheckResource;
                    bool m_isCheckResourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DELETECERTIFICATEREQUEST_H_
