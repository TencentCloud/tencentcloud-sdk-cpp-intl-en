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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_CERTIFICATEDETAIL_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_CERTIFICATEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * Certificate details, including the certificate ID, name, type, content, and key content.
                */
                class CertificateDetail : public AbstractModel
                {
                public:
                    CertificateDetail();
                    ~CertificateDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Certificate type.
                     * @return CertificateType Certificate type.
                     * 
                     */
                    int64_t GetCertificateType() const;

                    /**
                     * 设置Certificate type.
                     * @param _certificateType Certificate type.
                     * 
                     */
                    void SetCertificateType(const int64_t& _certificateType);

                    /**
                     * 判断参数 CertificateType 是否已赋值
                     * @return CertificateType 是否已赋值
                     * 
                     */
                    bool CertificateTypeHasBeenSet() const;

                    /**
                     * 获取Certificate name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CertificateAlias Certificate name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCertificateAlias() const;

                    /**
                     * 设置Certificate name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _certificateAlias Certificate name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCertificateAlias(const std::string& _certificateAlias);

                    /**
                     * 判断参数 CertificateAlias 是否已赋值
                     * @return CertificateAlias 是否已赋值
                     * 
                     */
                    bool CertificateAliasHasBeenSet() const;

                    /**
                     * 获取Certificate content.
                     * @return CertificateContent Certificate content.
                     * 
                     */
                    std::string GetCertificateContent() const;

                    /**
                     * 设置Certificate content.
                     * @param _certificateContent Certificate content.
                     * 
                     */
                    void SetCertificateContent(const std::string& _certificateContent);

                    /**
                     * 判断参数 CertificateContent 是否已赋值
                     * @return CertificateContent 是否已赋值
                     * 
                     */
                    bool CertificateContentHasBeenSet() const;

                    /**
                     * 获取Key content. This field will be returned if the certificate type is the SSL certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CertificateKey Key content. This field will be returned if the certificate type is the SSL certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCertificateKey() const;

                    /**
                     * 设置Key content. This field will be returned if the certificate type is the SSL certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _certificateKey Key content. This field will be returned if the certificate type is the SSL certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCertificateKey(const std::string& _certificateKey);

                    /**
                     * 判断参数 CertificateKey 是否已赋值
                     * @return CertificateKey 是否已赋值
                     * 
                     */
                    bool CertificateKeyHasBeenSet() const;

                    /**
                     * 获取Creation time in the format of UNIX timestamp, indicating the number of seconds that have elapsed since January 1, 1970 (midnight in UTC/GMT).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Creation time in the format of UNIX timestamp, indicating the number of seconds that have elapsed since January 1, 1970 (midnight in UTC/GMT).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置Creation time in the format of UNIX timestamp, indicating the number of seconds that have elapsed since January 1, 1970 (midnight in UTC/GMT).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Creation time in the format of UNIX timestamp, indicating the number of seconds that have elapsed since January 1, 1970 (midnight in UTC/GMT).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Time that the certificate takes effect. Using the UNIX timestamp, indicating the number of seconds that have elapsed since January 1, 1970 (Midnight in UTC/GMT).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BeginTime Time that the certificate takes effect. Using the UNIX timestamp, indicating the number of seconds that have elapsed since January 1, 1970 (Midnight in UTC/GMT).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetBeginTime() const;

                    /**
                     * 设置Time that the certificate takes effect. Using the UNIX timestamp, indicating the number of seconds that have elapsed since January 1, 1970 (Midnight in UTC/GMT).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _beginTime Time that the certificate takes effect. Using the UNIX timestamp, indicating the number of seconds that have elapsed since January 1, 1970 (Midnight in UTC/GMT).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBeginTime(const uint64_t& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取Certificate expiration time. Using the UNIX timestamp, indicating the number of seconds that have elapsed since January 1, 1970 (Midnight in UTC/GMT).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EndTime Certificate expiration time. Using the UNIX timestamp, indicating the number of seconds that have elapsed since January 1, 1970 (Midnight in UTC/GMT).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置Certificate expiration time. Using the UNIX timestamp, indicating the number of seconds that have elapsed since January 1, 1970 (Midnight in UTC/GMT).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _endTime Certificate expiration time. Using the UNIX timestamp, indicating the number of seconds that have elapsed since January 1, 1970 (Midnight in UTC/GMT).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Common name of the certificate’s issuer.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IssuerCN Common name of the certificate’s issuer.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetIssuerCN() const;

                    /**
                     * 设置Common name of the certificate’s issuer.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _issuerCN Common name of the certificate’s issuer.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIssuerCN(const std::string& _issuerCN);

                    /**
                     * 判断参数 IssuerCN 是否已赋值
                     * @return IssuerCN 是否已赋值
                     * 
                     */
                    bool IssuerCNHasBeenSet() const;

                    /**
                     * 获取Common name of the certificate subject.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubjectCN Common name of the certificate subject.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubjectCN() const;

                    /**
                     * 设置Common name of the certificate subject.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _subjectCN Common name of the certificate subject.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSubjectCN(const std::string& _subjectCN);

                    /**
                     * 判断参数 SubjectCN 是否已赋值
                     * @return SubjectCN 是否已赋值
                     * 
                     */
                    bool SubjectCNHasBeenSet() const;

                private:

                    /**
                     * Certificate ID
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                    /**
                     * Certificate type.
                     */
                    int64_t m_certificateType;
                    bool m_certificateTypeHasBeenSet;

                    /**
                     * Certificate name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_certificateAlias;
                    bool m_certificateAliasHasBeenSet;

                    /**
                     * Certificate content.
                     */
                    std::string m_certificateContent;
                    bool m_certificateContentHasBeenSet;

                    /**
                     * Key content. This field will be returned if the certificate type is the SSL certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_certificateKey;
                    bool m_certificateKeyHasBeenSet;

                    /**
                     * Creation time in the format of UNIX timestamp, indicating the number of seconds that have elapsed since January 1, 1970 (midnight in UTC/GMT).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Time that the certificate takes effect. Using the UNIX timestamp, indicating the number of seconds that have elapsed since January 1, 1970 (Midnight in UTC/GMT).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * Certificate expiration time. Using the UNIX timestamp, indicating the number of seconds that have elapsed since January 1, 1970 (Midnight in UTC/GMT).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Common name of the certificate’s issuer.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_issuerCN;
                    bool m_issuerCNHasBeenSet;

                    /**
                     * Common name of the certificate subject.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subjectCN;
                    bool m_subjectCNHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_CERTIFICATEDETAIL_H_
