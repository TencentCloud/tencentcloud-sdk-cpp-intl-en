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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_CERTIFICATE_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_CERTIFICATE_H_

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
                * Server Certificate
                */
                class Certificate : public AbstractModel
                {
                public:
                    Certificate();
                    ~Certificate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Certificate ID
                     * @return CertificateId Certificate ID
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 设置Certificate ID
                     * @param CertificateId Certificate ID
                     */
                    void SetCertificateId(const std::string& _certificateId);

                    /**
                     * 判断参数 CertificateId 是否已赋值
                     * @return CertificateId 是否已赋值
                     */
                    bool CertificateIdHasBeenSet() const;

                    /**
                     * 获取Certificate name; It's an old parameter, please switch to CertificateAlias.
                     * @return CertificateName Certificate name; It's an old parameter, please switch to CertificateAlias.
                     */
                    std::string GetCertificateName() const;

                    /**
                     * 设置Certificate name; It's an old parameter, please switch to CertificateAlias.
                     * @param CertificateName Certificate name; It's an old parameter, please switch to CertificateAlias.
                     */
                    void SetCertificateName(const std::string& _certificateName);

                    /**
                     * 判断参数 CertificateName 是否已赋值
                     * @return CertificateName 是否已赋值
                     */
                    bool CertificateNameHasBeenSet() const;

                    /**
                     * 获取Certificate type.
                     * @return CertificateType Certificate type.
                     */
                    int64_t GetCertificateType() const;

                    /**
                     * 设置Certificate type.
                     * @param CertificateType Certificate type.
                     */
                    void SetCertificateType(const int64_t& _certificateType);

                    /**
                     * 判断参数 CertificateType 是否已赋值
                     * @return CertificateType 是否已赋值
                     */
                    bool CertificateTypeHasBeenSet() const;

                    /**
                     * 获取Certificate name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CertificateAlias Certificate name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetCertificateAlias() const;

                    /**
                     * 设置Certificate name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param CertificateAlias Certificate name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCertificateAlias(const std::string& _certificateAlias);

                    /**
                     * 判断参数 CertificateAlias 是否已赋值
                     * @return CertificateAlias 是否已赋值
                     */
                    bool CertificateAliasHasBeenSet() const;

                    /**
                     * 获取Certificate creation time in the format of UNIX timestamp, indicating the number of seconds that have elapsed since January 1, 1970 (midnight in UTC/GMT).
                     * @return CreateTime Certificate creation time in the format of UNIX timestamp, indicating the number of seconds that have elapsed since January 1, 1970 (midnight in UTC/GMT).
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置Certificate creation time in the format of UNIX timestamp, indicating the number of seconds that have elapsed since January 1, 1970 (midnight in UTC/GMT).
                     * @param CreateTime Certificate creation time in the format of UNIX timestamp, indicating the number of seconds that have elapsed since January 1, 1970 (midnight in UTC/GMT).
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Certificate effective time in the format of UNIX timestamp, indicating the number of seconds that have elapsed since January 1, 1970 (midnight in UTC/GMT).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BeginTime Certificate effective time in the format of UNIX timestamp, indicating the number of seconds that have elapsed since January 1, 1970 (midnight in UTC/GMT).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetBeginTime() const;

                    /**
                     * 设置Certificate effective time in the format of UNIX timestamp, indicating the number of seconds that have elapsed since January 1, 1970 (midnight in UTC/GMT).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param BeginTime Certificate effective time in the format of UNIX timestamp, indicating the number of seconds that have elapsed since January 1, 1970 (midnight in UTC/GMT).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetBeginTime(const uint64_t& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取Certificate expiration time in the format of UNIX timestamp, indicating the number of seconds that have elapsed since January 1, 1970 (midnight in UTC/GMT).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EndTime Certificate expiration time in the format of UNIX timestamp, indicating the number of seconds that have elapsed since January 1, 1970 (midnight in UTC/GMT).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置Certificate expiration time in the format of UNIX timestamp, indicating the number of seconds that have elapsed since January 1, 1970 (midnight in UTC/GMT).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param EndTime Certificate expiration time in the format of UNIX timestamp, indicating the number of seconds that have elapsed since January 1, 1970 (midnight in UTC/GMT).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Common name of the certificate issuer.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IssuerCN Common name of the certificate issuer.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetIssuerCN() const;

                    /**
                     * 设置Common name of the certificate issuer.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param IssuerCN Common name of the certificate issuer.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetIssuerCN(const std::string& _issuerCN);

                    /**
                     * 判断参数 IssuerCN 是否已赋值
                     * @return IssuerCN 是否已赋值
                     */
                    bool IssuerCNHasBeenSet() const;

                    /**
                     * 获取Common name of the certificate subject.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubjectCN Common name of the certificate subject.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetSubjectCN() const;

                    /**
                     * 设置Common name of the certificate subject.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param SubjectCN Common name of the certificate subject.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSubjectCN(const std::string& _subjectCN);

                    /**
                     * 判断参数 SubjectCN 是否已赋值
                     * @return SubjectCN 是否已赋值
                     */
                    bool SubjectCNHasBeenSet() const;

                private:

                    /**
                     * Certificate ID
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                    /**
                     * Certificate name; It's an old parameter, please switch to CertificateAlias.
                     */
                    std::string m_certificateName;
                    bool m_certificateNameHasBeenSet;

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
                     * Certificate creation time in the format of UNIX timestamp, indicating the number of seconds that have elapsed since January 1, 1970 (midnight in UTC/GMT).
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Certificate effective time in the format of UNIX timestamp, indicating the number of seconds that have elapsed since January 1, 1970 (midnight in UTC/GMT).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * Certificate expiration time in the format of UNIX timestamp, indicating the number of seconds that have elapsed since January 1, 1970 (midnight in UTC/GMT).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Common name of the certificate issuer.
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

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_CERTIFICATE_H_
