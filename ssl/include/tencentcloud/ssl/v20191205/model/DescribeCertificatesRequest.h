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
                * DescribeCertificates request structure.
                */
                class DescribeCertificatesRequest : public AbstractModel
                {
                public:
                    DescribeCertificatesRequest();
                    ~DescribeCertificatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Pagination offset, starting from 0. default is 0.
                     * @return Offset Pagination offset, starting from 0. default is 0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Pagination offset, starting from 0. default is 0.
                     * @param _offset Pagination offset, starting from 0. default is 0.
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of items per page. default is 10. maximum value is 1000; values exceeding 1000 will be treated as 1000.
                     * @return Limit Number of items per page. default is 10. maximum value is 1000; values exceeding 1000 will be treated as 1000.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of items per page. default is 10. maximum value is 1000; values exceeding 1000 will be treated as 1000.
                     * @param _limit Number of items per page. default is 10. maximum value is 1000; values exceeding 1000 will be treated as 1000.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Search keywords, supporting fuzzy match by certificate id, remark name, and certificate domain name.
                     * @return SearchKey Search keywords, supporting fuzzy match by certificate id, remark name, and certificate domain name.
                     * 
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置Search keywords, supporting fuzzy match by certificate id, remark name, and certificate domain name.
                     * @param _searchKey Search keywords, supporting fuzzy match by certificate id, remark name, and certificate domain name.
                     * 
                     */
                    void SetSearchKey(const std::string& _searchKey);

                    /**
                     * 判断参数 SearchKey 是否已赋值
                     * @return SearchKey 是否已赋值
                     * 
                     */
                    bool SearchKeyHasBeenSet() const;

                    /**
                     * 获取Certificate type. `CA`: client certificate; `SVR`: server certificate
                     * @return CertificateType Certificate type. `CA`: client certificate; `SVR`: server certificate
                     * 
                     */
                    std::string GetCertificateType() const;

                    /**
                     * 设置Certificate type. `CA`: client certificate; `SVR`: server certificate
                     * @param _certificateType Certificate type. `CA`: client certificate; `SVR`: server certificate
                     * 
                     */
                    void SetCertificateType(const std::string& _certificateType);

                    /**
                     * 判断参数 CertificateType 是否已赋值
                     * @return CertificateType 是否已赋值
                     * 
                     */
                    bool CertificateTypeHasBeenSet() const;

                    /**
                     * 获取Project ID
                     * @return ProjectId Project ID
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param _projectId Project ID
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Default sorting is by certificate application time in descending order. Sort by expiration date if the following values are passed: DESC for descending order of certificate expiration time, ASC for ascending order.
                     * @return ExpirationSort Default sorting is by certificate application time in descending order. Sort by expiration date if the following values are passed: DESC for descending order of certificate expiration time, ASC for ascending order.
                     * 
                     */
                    std::string GetExpirationSort() const;

                    /**
                     * 设置Default sorting is by certificate application time in descending order. Sort by expiration date if the following values are passed: DESC for descending order of certificate expiration time, ASC for ascending order.
                     * @param _expirationSort Default sorting is by certificate application time in descending order. Sort by expiration date if the following values are passed: DESC for descending order of certificate expiration time, ASC for ascending order.
                     * 
                     */
                    void SetExpirationSort(const std::string& _expirationSort);

                    /**
                     * 判断参数 ExpirationSort 是否已赋值
                     * @return ExpirationSort 是否已赋值
                     * 
                     */
                    bool ExpirationSortHasBeenSet() const;

                    /**
                     * 获取Certificate status: 0=under review, 1=approved, 2=review failed, 3=expired, 4=dns record added, 5=enterprise certificate, pending submission, 6=order cancellation in progress, 7=canceled, 8=documents submitted, pending upload of confirmation letter, 9=certificate revocation in progress, 10=revoked, 11=reissue in progress, 12=pending upload of revocation confirmation letter, 13=free certificate pending document submission, 14=refunded, 15=certificate migration in progress.
                     * @return CertificateStatus Certificate status: 0=under review, 1=approved, 2=review failed, 3=expired, 4=dns record added, 5=enterprise certificate, pending submission, 6=order cancellation in progress, 7=canceled, 8=documents submitted, pending upload of confirmation letter, 9=certificate revocation in progress, 10=revoked, 11=reissue in progress, 12=pending upload of revocation confirmation letter, 13=free certificate pending document submission, 14=refunded, 15=certificate migration in progress.
                     * 
                     */
                    std::vector<uint64_t> GetCertificateStatus() const;

                    /**
                     * 设置Certificate status: 0=under review, 1=approved, 2=review failed, 3=expired, 4=dns record added, 5=enterprise certificate, pending submission, 6=order cancellation in progress, 7=canceled, 8=documents submitted, pending upload of confirmation letter, 9=certificate revocation in progress, 10=revoked, 11=reissue in progress, 12=pending upload of revocation confirmation letter, 13=free certificate pending document submission, 14=refunded, 15=certificate migration in progress.
                     * @param _certificateStatus Certificate status: 0=under review, 1=approved, 2=review failed, 3=expired, 4=dns record added, 5=enterprise certificate, pending submission, 6=order cancellation in progress, 7=canceled, 8=documents submitted, pending upload of confirmation letter, 9=certificate revocation in progress, 10=revoked, 11=reissue in progress, 12=pending upload of revocation confirmation letter, 13=free certificate pending document submission, 14=refunded, 15=certificate migration in progress.
                     * 
                     */
                    void SetCertificateStatus(const std::vector<uint64_t>& _certificateStatus);

                    /**
                     * 判断参数 CertificateStatus 是否已赋值
                     * @return CertificateStatus 是否已赋值
                     * 
                     */
                    bool CertificateStatusHasBeenSet() const;

                    /**
                     * 获取Whether the certificate can be deployed. `1`: yes; `0`: no
                     * @return Deployable Whether the certificate can be deployed. `1`: yes; `0`: no
                     * 
                     */
                    uint64_t GetDeployable() const;

                    /**
                     * 设置Whether the certificate can be deployed. `1`: yes; `0`: no
                     * @param _deployable Whether the certificate can be deployed. `1`: yes; `0`: no
                     * 
                     */
                    void SetDeployable(const uint64_t& _deployable);

                    /**
                     * 判断参数 Deployable 是否已赋值
                     * @return Deployable 是否已赋值
                     * 
                     */
                    bool DeployableHasBeenSet() const;

                    /**
                     * 获取Whether to filter uploaded hosted certificates. `1`: Yes; `0`: No.
                     * @return Upload Whether to filter uploaded hosted certificates. `1`: Yes; `0`: No.
                     * 
                     */
                    int64_t GetUpload() const;

                    /**
                     * 设置Whether to filter uploaded hosted certificates. `1`: Yes; `0`: No.
                     * @param _upload Whether to filter uploaded hosted certificates. `1`: Yes; `0`: No.
                     * 
                     */
                    void SetUpload(const int64_t& _upload);

                    /**
                     * 判断参数 Upload 是否已赋值
                     * @return Upload 是否已赋值
                     * 
                     */
                    bool UploadHasBeenSet() const;

                    /**
                     * 获取Whether to filter renewable certificates. `1`: Yes; `0`: No.
                     * @return Renew Whether to filter renewable certificates. `1`: Yes; `0`: No.
                     * 
                     */
                    int64_t GetRenew() const;

                    /**
                     * 设置Whether to filter renewable certificates. `1`: Yes; `0`: No.
                     * @param _renew Whether to filter renewable certificates. `1`: Yes; `0`: No.
                     * 
                     */
                    void SetRenew(const int64_t& _renew);

                    /**
                     * 判断参数 Renew 是否已赋值
                     * @return Renew 是否已赋值
                     * 
                     */
                    bool RenewHasBeenSet() const;

                    /**
                     * 获取Filter by source. `upload`: Uploaded certificate; `buy`: Tencent Cloud certificate. If this parameter is left empty, all certificates will be queried.
                     * @return FilterSource Filter by source. `upload`: Uploaded certificate; `buy`: Tencent Cloud certificate. If this parameter is left empty, all certificates will be queried.
                     * 
                     */
                    std::string GetFilterSource() const;

                    /**
                     * 设置Filter by source. `upload`: Uploaded certificate; `buy`: Tencent Cloud certificate. If this parameter is left empty, all certificates will be queried.
                     * @param _filterSource Filter by source. `upload`: Uploaded certificate; `buy`: Tencent Cloud certificate. If this parameter is left empty, all certificates will be queried.
                     * 
                     */
                    void SetFilterSource(const std::string& _filterSource);

                    /**
                     * 判断参数 FilterSource 是否已赋值
                     * @return FilterSource 是否已赋值
                     * 
                     */
                    bool FilterSourceHasBeenSet() const;

                    /**
                     * 获取Whether to filter Chinese SM certificates. `1`: Yes; `0`: No.
                     * @return IsSM Whether to filter Chinese SM certificates. `1`: Yes; `0`: No.
                     * 
                     */
                    int64_t GetIsSM() const;

                    /**
                     * 设置Whether to filter Chinese SM certificates. `1`: Yes; `0`: No.
                     * @param _isSM Whether to filter Chinese SM certificates. `1`: Yes; `0`: No.
                     * 
                     */
                    void SetIsSM(const int64_t& _isSM);

                    /**
                     * 判断参数 IsSM 是否已赋值
                     * @return IsSM 是否已赋值
                     * 
                     */
                    bool IsSMHasBeenSet() const;

                    /**
                     * 获取Whether to filter expiring certificates. `1`: Yes; `0`: No.
                     * @return FilterExpiring Whether to filter expiring certificates. `1`: Yes; `0`: No.
                     * 
                     */
                    uint64_t GetFilterExpiring() const;

                    /**
                     * 设置Whether to filter expiring certificates. `1`: Yes; `0`: No.
                     * @param _filterExpiring Whether to filter expiring certificates. `1`: Yes; `0`: No.
                     * 
                     */
                    void SetFilterExpiring(const uint64_t& _filterExpiring);

                    /**
                     * 判断参数 FilterExpiring 是否已赋值
                     * @return FilterExpiring 是否已赋值
                     * 
                     */
                    bool FilterExpiringHasBeenSet() const;

                    /**
                     * 获取Whether the certificate can be hosted. Valid values: `1` for yes and `0` for no.
                     * @return Hostable Whether the certificate can be hosted. Valid values: `1` for yes and `0` for no.
                     * 
                     */
                    uint64_t GetHostable() const;

                    /**
                     * 设置Whether the certificate can be hosted. Valid values: `1` for yes and `0` for no.
                     * @param _hostable Whether the certificate can be hosted. Valid values: `1` for yes and `0` for no.
                     * 
                     */
                    void SetHostable(const uint64_t& _hostable);

                    /**
                     * 判断参数 Hostable 是否已赋值
                     * @return Hostable 是否已赋值
                     * 
                     */
                    bool HostableHasBeenSet() const;

                    /**
                     * 获取Filter certificates with specified tags.
                     * @return Tags Filter certificates with specified tags.
                     * 
                     */
                    std::vector<Tags> GetTags() const;

                    /**
                     * 设置Filter certificates with specified tags.
                     * @param _tags Filter certificates with specified tags.
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
                     * 获取Whether to filter certificates pending issue: 1 for filtering, 0 and null for no filtering.
                     * @return IsPendingIssue Whether to filter certificates pending issue: 1 for filtering, 0 and null for no filtering.
                     * 
                     */
                    int64_t GetIsPendingIssue() const;

                    /**
                     * 设置Whether to filter certificates pending issue: 1 for filtering, 0 and null for no filtering.
                     * @param _isPendingIssue Whether to filter certificates pending issue: 1 for filtering, 0 and null for no filtering.
                     * 
                     */
                    void SetIsPendingIssue(const int64_t& _isPendingIssue);

                    /**
                     * 判断参数 IsPendingIssue 是否已赋值
                     * @return IsPendingIssue 是否已赋值
                     * 
                     */
                    bool IsPendingIssueHasBeenSet() const;

                    /**
                     * 获取Filter certificates by the specified certificate id, only supports certificate ids with permission.
                     * @return CertIds Filter certificates by the specified certificate id, only supports certificate ids with permission.
                     * 
                     */
                    std::vector<std::string> GetCertIds() const;

                    /**
                     * 设置Filter certificates by the specified certificate id, only supports certificate ids with permission.
                     * @param _certIds Filter certificates by the specified certificate id, only supports certificate ids with permission.
                     * 
                     */
                    void SetCertIds(const std::vector<std::string>& _certIds);

                    /**
                     * 判断参数 CertIds 是否已赋值
                     * @return CertIds 是否已赋值
                     * 
                     */
                    bool CertIdsHasBeenSet() const;

                private:

                    /**
                     * Pagination offset, starting from 0. default is 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of items per page. default is 10. maximum value is 1000; values exceeding 1000 will be treated as 1000.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Search keywords, supporting fuzzy match by certificate id, remark name, and certificate domain name.
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
                     * Default sorting is by certificate application time in descending order. Sort by expiration date if the following values are passed: DESC for descending order of certificate expiration time, ASC for ascending order.
                     */
                    std::string m_expirationSort;
                    bool m_expirationSortHasBeenSet;

                    /**
                     * Certificate status: 0=under review, 1=approved, 2=review failed, 3=expired, 4=dns record added, 5=enterprise certificate, pending submission, 6=order cancellation in progress, 7=canceled, 8=documents submitted, pending upload of confirmation letter, 9=certificate revocation in progress, 10=revoked, 11=reissue in progress, 12=pending upload of revocation confirmation letter, 13=free certificate pending document submission, 14=refunded, 15=certificate migration in progress.
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

                    /**
                     * Whether the certificate can be hosted. Valid values: `1` for yes and `0` for no.
                     */
                    uint64_t m_hostable;
                    bool m_hostableHasBeenSet;

                    /**
                     * Filter certificates with specified tags.
                     */
                    std::vector<Tags> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Whether to filter certificates pending issue: 1 for filtering, 0 and null for no filtering.
                     */
                    int64_t m_isPendingIssue;
                    bool m_isPendingIssueHasBeenSet;

                    /**
                     * Filter certificates by the specified certificate id, only supports certificate ids with permission.
                     */
                    std::vector<std::string> m_certIds;
                    bool m_certIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECERTIFICATESREQUEST_H_
