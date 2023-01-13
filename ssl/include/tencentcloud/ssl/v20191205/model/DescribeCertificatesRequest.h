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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECERTIFICATESREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECERTIFICATESREQUEST_H_

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
                * DescribeCertificates request structure.
                */
                class DescribeCertificatesRequest : public AbstractModel
                {
                public:
                    DescribeCertificatesRequest();
                    ~DescribeCertificatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Pagination offset, starting from 0
                     * @return Offset Pagination offset, starting from 0
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Pagination offset, starting from 0
                     * @param Offset Pagination offset, starting from 0
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of entries per page. Default value: `20`. Maximum value: `1000`.
                     * @return Limit Number of entries per page. Default value: `20`. Maximum value: `1000`.
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of entries per page. Default value: `20`. Maximum value: `1000`.
                     * @param Limit Number of entries per page. Default value: `20`. Maximum value: `1000`.
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Keyword for search, which can be a certificate ID, alias, or domain name, for example, a8xHcaIs
                     * @return SearchKey Keyword for search, which can be a certificate ID, alias, or domain name, for example, a8xHcaIs
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置Keyword for search, which can be a certificate ID, alias, or domain name, for example, a8xHcaIs
                     * @param SearchKey Keyword for search, which can be a certificate ID, alias, or domain name, for example, a8xHcaIs
                     */
                    void SetSearchKey(const std::string& _searchKey);

                    /**
                     * 判断参数 SearchKey 是否已赋值
                     * @return SearchKey 是否已赋值
                     */
                    bool SearchKeyHasBeenSet() const;

                    /**
                     * 获取Certificate type. `CA`: client certificate; `SVR`: server certificate
                     * @return CertificateType Certificate type. `CA`: client certificate; `SVR`: server certificate
                     */
                    std::string GetCertificateType() const;

                    /**
                     * 设置Certificate type. `CA`: client certificate; `SVR`: server certificate
                     * @param CertificateType Certificate type. `CA`: client certificate; `SVR`: server certificate
                     */
                    void SetCertificateType(const std::string& _certificateType);

                    /**
                     * 判断参数 CertificateType 是否已赋值
                     * @return CertificateType 是否已赋值
                     */
                    bool CertificateTypeHasBeenSet() const;

                    /**
                     * 获取Project ID
                     * @return ProjectId Project ID
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param ProjectId Project ID
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Sorting by expiration time. `DESC`: descending; `ASC`: ascending
                     * @return ExpirationSort Sorting by expiration time. `DESC`: descending; `ASC`: ascending
                     */
                    std::string GetExpirationSort() const;

                    /**
                     * 设置Sorting by expiration time. `DESC`: descending; `ASC`: ascending
                     * @param ExpirationSort Sorting by expiration time. `DESC`: descending; `ASC`: ascending
                     */
                    void SetExpirationSort(const std::string& _expirationSort);

                    /**
                     * 判断参数 ExpirationSort 是否已赋值
                     * @return ExpirationSort 是否已赋值
                     */
                    bool ExpirationSortHasBeenSet() const;

                    /**
                     * 获取Certificate status. `0`: Reviewing; `1`: Approved; `2`: Unapproved; `3`: Expired; `4`: DNS record added; `5`: Enterprise-grade certificate, pending submission; `6`: Canceling order; `7`: Canceled; `8`: Information submitted, pending confirmation letter upload; `9`: Revoking certificate; `10`: Revoked; `11`: Reissuing; `12`: Pending revocation confirmation letter upload; `13`: Pending information submission for the free certificate.
                     * @return CertificateStatus Certificate status. `0`: Reviewing; `1`: Approved; `2`: Unapproved; `3`: Expired; `4`: DNS record added; `5`: Enterprise-grade certificate, pending submission; `6`: Canceling order; `7`: Canceled; `8`: Information submitted, pending confirmation letter upload; `9`: Revoking certificate; `10`: Revoked; `11`: Reissuing; `12`: Pending revocation confirmation letter upload; `13`: Pending information submission for the free certificate.
                     */
                    std::vector<uint64_t> GetCertificateStatus() const;

                    /**
                     * 设置Certificate status. `0`: Reviewing; `1`: Approved; `2`: Unapproved; `3`: Expired; `4`: DNS record added; `5`: Enterprise-grade certificate, pending submission; `6`: Canceling order; `7`: Canceled; `8`: Information submitted, pending confirmation letter upload; `9`: Revoking certificate; `10`: Revoked; `11`: Reissuing; `12`: Pending revocation confirmation letter upload; `13`: Pending information submission for the free certificate.
                     * @param CertificateStatus Certificate status. `0`: Reviewing; `1`: Approved; `2`: Unapproved; `3`: Expired; `4`: DNS record added; `5`: Enterprise-grade certificate, pending submission; `6`: Canceling order; `7`: Canceled; `8`: Information submitted, pending confirmation letter upload; `9`: Revoking certificate; `10`: Revoked; `11`: Reissuing; `12`: Pending revocation confirmation letter upload; `13`: Pending information submission for the free certificate.
                     */
                    void SetCertificateStatus(const std::vector<uint64_t>& _certificateStatus);

                    /**
                     * 判断参数 CertificateStatus 是否已赋值
                     * @return CertificateStatus 是否已赋值
                     */
                    bool CertificateStatusHasBeenSet() const;

                    /**
                     * 获取Whether the certificate can be deployed. `1`: yes; `0`: no
                     * @return Deployable Whether the certificate can be deployed. `1`: yes; `0`: no
                     */
                    uint64_t GetDeployable() const;

                    /**
                     * 设置Whether the certificate can be deployed. `1`: yes; `0`: no
                     * @param Deployable Whether the certificate can be deployed. `1`: yes; `0`: no
                     */
                    void SetDeployable(const uint64_t& _deployable);

                    /**
                     * 判断参数 Deployable 是否已赋值
                     * @return Deployable 是否已赋值
                     */
                    bool DeployableHasBeenSet() const;

                    /**
                     * 获取Whether to filter uploaded hosted certificates. `1`: Yes; `0`: No.
                     * @return Upload Whether to filter uploaded hosted certificates. `1`: Yes; `0`: No.
                     */
                    int64_t GetUpload() const;

                    /**
                     * 设置Whether to filter uploaded hosted certificates. `1`: Yes; `0`: No.
                     * @param Upload Whether to filter uploaded hosted certificates. `1`: Yes; `0`: No.
                     */
                    void SetUpload(const int64_t& _upload);

                    /**
                     * 判断参数 Upload 是否已赋值
                     * @return Upload 是否已赋值
                     */
                    bool UploadHasBeenSet() const;

                    /**
                     * 获取Whether to filter renewable certificates. `1`: Yes; `0`: No.
                     * @return Renew Whether to filter renewable certificates. `1`: Yes; `0`: No.
                     */
                    int64_t GetRenew() const;

                    /**
                     * 设置Whether to filter renewable certificates. `1`: Yes; `0`: No.
                     * @param Renew Whether to filter renewable certificates. `1`: Yes; `0`: No.
                     */
                    void SetRenew(const int64_t& _renew);

                    /**
                     * 判断参数 Renew 是否已赋值
                     * @return Renew 是否已赋值
                     */
                    bool RenewHasBeenSet() const;

                    /**
                     * 获取Filter by source. `upload`: Uploaded certificate; `buy`: Tencent Cloud certificate. If this parameter is left empty, all certificates will be queried.
                     * @return FilterSource Filter by source. `upload`: Uploaded certificate; `buy`: Tencent Cloud certificate. If this parameter is left empty, all certificates will be queried.
                     */
                    std::string GetFilterSource() const;

                    /**
                     * 设置Filter by source. `upload`: Uploaded certificate; `buy`: Tencent Cloud certificate. If this parameter is left empty, all certificates will be queried.
                     * @param FilterSource Filter by source. `upload`: Uploaded certificate; `buy`: Tencent Cloud certificate. If this parameter is left empty, all certificates will be queried.
                     */
                    void SetFilterSource(const std::string& _filterSource);

                    /**
                     * 判断参数 FilterSource 是否已赋值
                     * @return FilterSource 是否已赋值
                     */
                    bool FilterSourceHasBeenSet() const;

                    /**
                     * 获取Whether to filter Chinese SM certificates. `1`: Yes; `0`: No.
                     * @return IsSM Whether to filter Chinese SM certificates. `1`: Yes; `0`: No.
                     */
                    int64_t GetIsSM() const;

                    /**
                     * 设置Whether to filter Chinese SM certificates. `1`: Yes; `0`: No.
                     * @param IsSM Whether to filter Chinese SM certificates. `1`: Yes; `0`: No.
                     */
                    void SetIsSM(const int64_t& _isSM);

                    /**
                     * 判断参数 IsSM 是否已赋值
                     * @return IsSM 是否已赋值
                     */
                    bool IsSMHasBeenSet() const;

                    /**
                     * 获取Whether to filter expiring certificates. `1`: Yes; `0`: No.
                     * @return FilterExpiring Whether to filter expiring certificates. `1`: Yes; `0`: No.
                     */
                    uint64_t GetFilterExpiring() const;

                    /**
                     * 设置Whether to filter expiring certificates. `1`: Yes; `0`: No.
                     * @param FilterExpiring Whether to filter expiring certificates. `1`: Yes; `0`: No.
                     */
                    void SetFilterExpiring(const uint64_t& _filterExpiring);

                    /**
                     * 判断参数 FilterExpiring 是否已赋值
                     * @return FilterExpiring 是否已赋值
                     */
                    bool FilterExpiringHasBeenSet() const;

                private:

                    /**
                     * Pagination offset, starting from 0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of entries per page. Default value: `20`. Maximum value: `1000`.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Keyword for search, which can be a certificate ID, alias, or domain name, for example, a8xHcaIs
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                    /**
                     * Certificate type. `CA`: client certificate; `SVR`: server certificate
                     */
                    std::string m_certificateType;
                    bool m_certificateTypeHasBeenSet;

                    /**
                     * Project ID
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Sorting by expiration time. `DESC`: descending; `ASC`: ascending
                     */
                    std::string m_expirationSort;
                    bool m_expirationSortHasBeenSet;

                    /**
                     * Certificate status. `0`: Reviewing; `1`: Approved; `2`: Unapproved; `3`: Expired; `4`: DNS record added; `5`: Enterprise-grade certificate, pending submission; `6`: Canceling order; `7`: Canceled; `8`: Information submitted, pending confirmation letter upload; `9`: Revoking certificate; `10`: Revoked; `11`: Reissuing; `12`: Pending revocation confirmation letter upload; `13`: Pending information submission for the free certificate.
                     */
                    std::vector<uint64_t> m_certificateStatus;
                    bool m_certificateStatusHasBeenSet;

                    /**
                     * Whether the certificate can be deployed. `1`: yes; `0`: no
                     */
                    uint64_t m_deployable;
                    bool m_deployableHasBeenSet;

                    /**
                     * Whether to filter uploaded hosted certificates. `1`: Yes; `0`: No.
                     */
                    int64_t m_upload;
                    bool m_uploadHasBeenSet;

                    /**
                     * Whether to filter renewable certificates. `1`: Yes; `0`: No.
                     */
                    int64_t m_renew;
                    bool m_renewHasBeenSet;

                    /**
                     * Filter by source. `upload`: Uploaded certificate; `buy`: Tencent Cloud certificate. If this parameter is left empty, all certificates will be queried.
                     */
                    std::string m_filterSource;
                    bool m_filterSourceHasBeenSet;

                    /**
                     * Whether to filter Chinese SM certificates. `1`: Yes; `0`: No.
                     */
                    int64_t m_isSM;
                    bool m_isSMHasBeenSet;

                    /**
                     * Whether to filter expiring certificates. `1`: Yes; `0`: No.
                     */
                    uint64_t m_filterExpiring;
                    bool m_filterExpiringHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECERTIFICATESREQUEST_H_
