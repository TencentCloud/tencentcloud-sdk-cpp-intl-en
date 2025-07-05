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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECERTIFICATEDETAILRESPONSE_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECERTIFICATEDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/CertificateExtra.h>
#include <tencentcloud/ssl/v20191205/model/DvAuthDetail.h>
#include <tencentcloud/ssl/v20191205/model/SubmittedData.h>
#include <tencentcloud/ssl/v20191205/model/Tags.h>
#include <tencentcloud/ssl/v20191205/model/RootCertificates.h>
#include <tencentcloud/ssl/v20191205/model/DvAuths.h>
#include <tencentcloud/ssl/v20191205/model/CertBasicInfo.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * DescribeCertificateDetail response structure.
                */
                class DescribeCertificateDetailResponse : public AbstractModel
                {
                public:
                    DescribeCertificateDetailResponse();
                    ~DescribeCertificateDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Certificate belonging to user main account uin.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return OwnerUin Certificate belonging to user main account uin.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取Project ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ProjectId Project ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Certificate source:.
trustAsia.
upload.
wosign.
sheca.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return From Certificate source:.
trustAsia.
upload.
wosign.
sheca.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFrom() const;

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     * 
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取Certificate type. `CA`: client certificate; `SVR`: server certificate
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CertificateType Certificate type. `CA`: client certificate; `SVR`: server certificate
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCertificateType() const;

                    /**
                     * 判断参数 CertificateType 是否已赋值
                     * @return CertificateType 是否已赋值
                     * 
                     */
                    bool CertificateTypeHasBeenSet() const;

                    /**
                     * 获取Certificate package type:.
null: user uploads a certificate (no package type),.
2: trustasia tls rsa ca,. 
3: securesite enhanced enterprise version (ev pro),. 
4: securesite enhanced (ev),. 
5: securesite enterprise pro (ov pro).
6: securesite enterprise (ov). 
7: securesite enterprise (ov) wildcard. 
8: geotrust enhanced (ev). 
9: geotrust enterprise (ov). 
10: geotrust enterprise (ov) wildcard cert. 
11: trustasia domain name-based multiple domain names ssl certificate. 
12: trustasia domain name-based (dv) wildcard cert. 
13: trustasia enterprise wildcard (ov) ssl certificate (d3). 
14: trustasia enterprise (ov) ssl certificate (d3). 
15: trustasia enterprise multiple domain names (ov) ssl certificate (d3). 
16: trustasia enhanced (ev) ssl certificate (d3). 
17: trustasia enhanced multiple domain names (ev) ssl certificate (d3). 
18: globalsign enterprise (ov) ssl certificate. 
19: globalsign enterprise wildcard (ov) ssl certificate. 
20: globalsign enhanced (ev) ssl certificate. 
21: trustasia enterprise wildcard multiple domain names (ov) ssl certificate (d3). 
22: globalsign enterprise multiple domain names (ov) ssl certificate. 
23: globalsign enterprise wildcard multiple domain names (ov) ssl certificate.
24: globalsign enhanced multiple domain names (ev) ssl certificate.
25: wotrus domain cert.
26: wotrus multi-domain cert.
27: wotrus wildcard cert.
28: wotrus enterprise cert.
29: wotrus enterprise multi-domain cert.
30: wotrus enterprise wildcard certificate.
31: wotrus enhanced certificate.
32: wotrus enhanced multi-domain name certificate.
33: wotrus-national cryptography domain name certificate.
34: wotrus-national cryptography domain name certificate (multiple domain names).
35: wotrus-national cryptography wildcard certificate.
37: wotrus-national cryptography enterprise certificate.
38: wotrus-national cryptography enterprise certificate (multiple domain names).
39: wotrus-national cryptography enterprise certificate (wildcard).
40: wotrus-national cryptography enhanced certificate.
41: wotrus - national cryptography enhanced certificate (multiple domain names).
42: trustasia - domain name certificate (wildcard multiple domain names).
43: DNSPod - enterprise (ov) ssl certificate.
44: DNSPod - enterprise (ov) wildcard ssl certificate.
45: DNSPod - enterprise (ov) multiple domain names ssl certificate.
46: dnspod-enhanced (ev) ssl certificate.
47: dnspod-enhanced (ev) multiple domain names ssl certificate.
48: dnspod-domain name-based (dv) ssl certificate.
49: dnspod-domain name-based (dv) wildcard ssl certificate.
50: dnspod-domain name-based (dv) multiple domain names ssl certificate.
51: DNSPod (national cryptography) - enterprise (ov) ssl certificate.
52: DNSPod (national cryptography) - enterprise (ov) wildcard ssl certificate.
53: DNSPod (national cryptography) - enterprise (ov) multiple domain names ssl certificate.
54: DNSPod (national cryptography) - domain name-based (dv) ssl certificate.
55: DNSPod (national cryptography) - domain name-based (dv) wildcard ssl certificate.
56: DNSPod (national cryptography) - domain name-based (dv) multiple domain names ssl certificate.
57: securesite enterprise professional version multiple domain names (ov pro).
58: securesite enterprise multiple domain names (ov).
59: securesite enhanced professional version multiple domain names (ev pro).
60: securesite enhanced multiple domain names (ev).
61: geotrust enhanced multiple domain names (ev).
75: securesite enterprise (ov).
76: securesite enterprise (ov) wildcard.
77: securesite enhanced (ev).
78: geotrust enterprise (ov).
79: geotrust enterprise (ov) wildcard.
80: geotrust enhanced (ev).
81: globalsign enterprise (ov) ssl certificate.
82: globalsign enterprise wildcard (ov) ssl certificate.
83: trustasia c1 dv free.
85: globalsign enhanced (ev) ssl certificate.
88: globalsign enterprise wildcard multiple domain names (ov) ssl certificate.
89: globalsign enterprise multiple domain names (ov) ssl certificate.
90: globalsign enhanced multiple domain names (ev) ssl certificate.
91: geotrust enhanced multiple domain names (ev).
92: securesite enterprise ov pro for multiple domain names.
93: securesite enterprise for multiple domain names (ov).
94: securesite ev pro for multiple domain names.
95: securesite ev for multiple domain names.
96: securesite ev pro.
97: securesite enterprise professional edition (ov pro).
98: cfca enterprise (ov) ssl certificate.
99: cfca enterprise multiple domain names (ov) ssl certificate.
100: cfca enterprise wildcard (ov) ssl certificate.
101: cfca enhanced (ev) ssl certificate.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return PackageType Certificate package type:.
null: user uploads a certificate (no package type),.
2: trustasia tls rsa ca,. 
3: securesite enhanced enterprise version (ev pro),. 
4: securesite enhanced (ev),. 
5: securesite enterprise pro (ov pro).
6: securesite enterprise (ov). 
7: securesite enterprise (ov) wildcard. 
8: geotrust enhanced (ev). 
9: geotrust enterprise (ov). 
10: geotrust enterprise (ov) wildcard cert. 
11: trustasia domain name-based multiple domain names ssl certificate. 
12: trustasia domain name-based (dv) wildcard cert. 
13: trustasia enterprise wildcard (ov) ssl certificate (d3). 
14: trustasia enterprise (ov) ssl certificate (d3). 
15: trustasia enterprise multiple domain names (ov) ssl certificate (d3). 
16: trustasia enhanced (ev) ssl certificate (d3). 
17: trustasia enhanced multiple domain names (ev) ssl certificate (d3). 
18: globalsign enterprise (ov) ssl certificate. 
19: globalsign enterprise wildcard (ov) ssl certificate. 
20: globalsign enhanced (ev) ssl certificate. 
21: trustasia enterprise wildcard multiple domain names (ov) ssl certificate (d3). 
22: globalsign enterprise multiple domain names (ov) ssl certificate. 
23: globalsign enterprise wildcard multiple domain names (ov) ssl certificate.
24: globalsign enhanced multiple domain names (ev) ssl certificate.
25: wotrus domain cert.
26: wotrus multi-domain cert.
27: wotrus wildcard cert.
28: wotrus enterprise cert.
29: wotrus enterprise multi-domain cert.
30: wotrus enterprise wildcard certificate.
31: wotrus enhanced certificate.
32: wotrus enhanced multi-domain name certificate.
33: wotrus-national cryptography domain name certificate.
34: wotrus-national cryptography domain name certificate (multiple domain names).
35: wotrus-national cryptography wildcard certificate.
37: wotrus-national cryptography enterprise certificate.
38: wotrus-national cryptography enterprise certificate (multiple domain names).
39: wotrus-national cryptography enterprise certificate (wildcard).
40: wotrus-national cryptography enhanced certificate.
41: wotrus - national cryptography enhanced certificate (multiple domain names).
42: trustasia - domain name certificate (wildcard multiple domain names).
43: DNSPod - enterprise (ov) ssl certificate.
44: DNSPod - enterprise (ov) wildcard ssl certificate.
45: DNSPod - enterprise (ov) multiple domain names ssl certificate.
46: dnspod-enhanced (ev) ssl certificate.
47: dnspod-enhanced (ev) multiple domain names ssl certificate.
48: dnspod-domain name-based (dv) ssl certificate.
49: dnspod-domain name-based (dv) wildcard ssl certificate.
50: dnspod-domain name-based (dv) multiple domain names ssl certificate.
51: DNSPod (national cryptography) - enterprise (ov) ssl certificate.
52: DNSPod (national cryptography) - enterprise (ov) wildcard ssl certificate.
53: DNSPod (national cryptography) - enterprise (ov) multiple domain names ssl certificate.
54: DNSPod (national cryptography) - domain name-based (dv) ssl certificate.
55: DNSPod (national cryptography) - domain name-based (dv) wildcard ssl certificate.
56: DNSPod (national cryptography) - domain name-based (dv) multiple domain names ssl certificate.
57: securesite enterprise professional version multiple domain names (ov pro).
58: securesite enterprise multiple domain names (ov).
59: securesite enhanced professional version multiple domain names (ev pro).
60: securesite enhanced multiple domain names (ev).
61: geotrust enhanced multiple domain names (ev).
75: securesite enterprise (ov).
76: securesite enterprise (ov) wildcard.
77: securesite enhanced (ev).
78: geotrust enterprise (ov).
79: geotrust enterprise (ov) wildcard.
80: geotrust enhanced (ev).
81: globalsign enterprise (ov) ssl certificate.
82: globalsign enterprise wildcard (ov) ssl certificate.
83: trustasia c1 dv free.
85: globalsign enhanced (ev) ssl certificate.
88: globalsign enterprise wildcard multiple domain names (ov) ssl certificate.
89: globalsign enterprise multiple domain names (ov) ssl certificate.
90: globalsign enhanced multiple domain names (ev) ssl certificate.
91: geotrust enhanced multiple domain names (ev).
92: securesite enterprise ov pro for multiple domain names.
93: securesite enterprise for multiple domain names (ov).
94: securesite ev pro for multiple domain names.
95: securesite ev for multiple domain names.
96: securesite ev pro.
97: securesite enterprise professional edition (ov pro).
98: cfca enterprise (ov) ssl certificate.
99: cfca enterprise multiple domain names (ov) ssl certificate.
100: cfca enterprise wildcard (ov) ssl certificate.
101: cfca enhanced (ev) ssl certificate.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPackageType() const;

                    /**
                     * 判断参数 PackageType 是否已赋值
                     * @return PackageType 是否已赋值
                     * 
                     */
                    bool PackageTypeHasBeenSet() const;

                    /**
                     * 获取Certificate product name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ProductZhName Certificate product name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProductZhName() const;

                    /**
                     * 判断参数 ProductZhName 是否已赋值
                     * @return ProductZhName 是否已赋值
                     * 
                     */
                    bool ProductZhNameHasBeenSet() const;

                    /**
                     * 获取Certificate binds to a common name domain.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Domain Certificate binds to a common name domain.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Alias
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Alias Alias
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取Certificate status: 0 = under review, 1 = approved, 2 = review failed, 3 = expired, 4 = automatically added dns records, 5 = enterprise certificate, pending document submission, 6 = order cancellation in progress, 7 = canceled, 8 = documents submitted, pending upload of confirmation letter, 9 = certificate revocation in progress, 10 = revoked, 11 = reissue in progress, 12 = pending upload of revocation confirmation letter, 13 = free certificate pending document submission, 14 = certificate has been refunded, 15 = certificate migration in progress.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Status Certificate status: 0 = under review, 1 = approved, 2 = review failed, 3 = expired, 4 = automatically added dns records, 5 = enterprise certificate, pending document submission, 6 = order cancellation in progress, 7 = canceled, 8 = documents submitted, pending upload of confirmation letter, 9 = certificate revocation in progress, 10 = revoked, 11 = reissue in progress, 12 = pending upload of revocation confirmation letter, 13 = free certificate pending document submission, 14 = certificate has been refunded, 15 = certificate migration in progress.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Status information. valid values:.
//Common status information.
PRE-REVIEWING: in prereview.
LEGAL-REVIEWING: in legal review.
CA-REVIEWING: in ca review.
PENDING-DCV: in domain verification.
WAIT-ISSUE: waiting for issue (domain verification passed).
Certificate review failure status information.
1. order review failed.
2. ca review failed, and the domain name did not pass the security review.
3. domain name verification timed out, and the order was automatically closed. please reapply for the certificate.
4. the certificate information did not pass the review of the certificate ca agency. the reviewer will call the contact information reserved for the certificate. please pay attention to the incoming call. subsequently, you can resubmit the information through "modify information".
To be continuously improved.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return StatusMsg Status information. valid values:.
//Common status information.
PRE-REVIEWING: in prereview.
LEGAL-REVIEWING: in legal review.
CA-REVIEWING: in ca review.
PENDING-DCV: in domain verification.
WAIT-ISSUE: waiting for issue (domain verification passed).
Certificate review failure status information.
1. order review failed.
2. ca review failed, and the domain name did not pass the security review.
3. domain name verification timed out, and the order was automatically closed. please reapply for the certificate.
4. the certificate information did not pass the review of the certificate ca agency. the reviewer will call the contact information reserved for the certificate. please pay attention to the incoming call. subsequently, you can resubmit the information through "modify information".
To be continuously improved.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStatusMsg() const;

                    /**
                     * 判断参数 StatusMsg 是否已赋值
                     * @return StatusMsg 是否已赋值
                     * 
                     */
                    bool StatusMsgHasBeenSet() const;

                    /**
                     * 获取Validation type. `DNS_AUTO`: automatic DNS validation; `DNS`: manual DNS validation; `FILE`: file validation; `EMAIL`: email validation
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return VerifyType Validation type. `DNS_AUTO`: automatic DNS validation; `DNS`: manual DNS validation; `FILE`: file validation; `EMAIL`: email validation
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVerifyType() const;

                    /**
                     * 判断参数 VerifyType 是否已赋值
                     * @return VerifyType 是否已赋值
                     * 
                     */
                    bool VerifyTypeHasBeenSet() const;

                    /**
                     * 获取Vulnerability scanning status
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return VulnerabilityStatus Vulnerability scanning status
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVulnerabilityStatus() const;

                    /**
                     * 判断参数 VulnerabilityStatus 是否已赋值
                     * @return VulnerabilityStatus 是否已赋值
                     * 
                     */
                    bool VulnerabilityStatusHasBeenSet() const;

                    /**
                     * 获取Time when the certificate takes effect
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CertBeginTime Time when the certificate takes effect
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCertBeginTime() const;

                    /**
                     * 判断参数 CertBeginTime 是否已赋值
                     * @return CertBeginTime 是否已赋值
                     * 
                     */
                    bool CertBeginTimeHasBeenSet() const;

                    /**
                     * 获取Time when the certificate expires
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CertEndTime Time when the certificate expires
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCertEndTime() const;

                    /**
                     * 判断参数 CertEndTime 是否已赋值
                     * @return CertEndTime 是否已赋值
                     * 
                     */
                    bool CertEndTimeHasBeenSet() const;

                    /**
                     * 获取Validity period of the certificate, in months
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ValidityPeriod Validity period of the certificate, in months
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetValidityPeriod() const;

                    /**
                     * 判断参数 ValidityPeriod 是否已赋值
                     * @return ValidityPeriod 是否已赋值
                     * 
                     */
                    bool ValidityPeriodHasBeenSet() const;

                    /**
                     * 获取Certificate application time.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return InsertTime Certificate application time.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInsertTime() const;

                    /**
                     * 判断参数 InsertTime 是否已赋值
                     * @return InsertTime 是否已赋值
                     * 
                     */
                    bool InsertTimeHasBeenSet() const;

                    /**
                     * 获取CA order id.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return OrderId CA order id.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     * 
                     */
                    bool OrderIdHasBeenSet() const;

                    /**
                     * 获取Extended information of the certificate
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CertificateExtra Extended information of the certificate
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    CertificateExtra GetCertificateExtra() const;

                    /**
                     * 判断参数 CertificateExtra 是否已赋值
                     * @return CertificateExtra 是否已赋值
                     * 
                     */
                    bool CertificateExtraHasBeenSet() const;

                    /**
                     * 获取Private key certificate; for Chinese SM certificates, it refers to the private key certificate in the signature certificate.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CertificatePrivateKey Private key certificate; for Chinese SM certificates, it refers to the private key certificate in the signature certificate.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCertificatePrivateKey() const;

                    /**
                     * 判断参数 CertificatePrivateKey 是否已赋值
                     * @return CertificatePrivateKey 是否已赋值
                     * 
                     */
                    bool CertificatePrivateKeyHasBeenSet() const;

                    /**
                     * 获取Public key certificate; for Chinese SM certificate, it refers to the public key certificate in the signature certificate.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CertificatePublicKey Public key certificate; for Chinese SM certificate, it refers to the public key certificate in the signature certificate.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCertificatePublicKey() const;

                    /**
                     * 判断参数 CertificatePublicKey 是否已赋值
                     * @return CertificatePublicKey 是否已赋值
                     * 
                     */
                    bool CertificatePublicKeyHasBeenSet() const;

                    /**
                     * 获取Certificate domain name verification information.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DvAuthDetail Certificate domain name verification information.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    DvAuthDetail GetDvAuthDetail() const;

                    /**
                     * 判断参数 DvAuthDetail 是否已赋值
                     * @return DvAuthDetail 是否已赋值
                     * 
                     */
                    bool DvAuthDetailHasBeenSet() const;

                    /**
                     * 获取Vulnerability scanning assessment report
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return VulnerabilityReport Vulnerability scanning assessment report
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVulnerabilityReport() const;

                    /**
                     * 判断参数 VulnerabilityReport 是否已赋值
                     * @return VulnerabilityReport 是否已赋值
                     * 
                     */
                    bool VulnerabilityReportHasBeenSet() const;

                    /**
                     * 获取Certificate ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CertificateId Certificate ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 判断参数 CertificateId 是否已赋值
                     * @return CertificateId 是否已赋值
                     * 
                     */
                    bool CertificateIdHasBeenSet() const;

                    /**
                     * 获取Certificate type name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TypeName Certificate type name
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTypeName() const;

                    /**
                     * 判断参数 TypeName 是否已赋值
                     * @return TypeName 是否已赋值
                     * 
                     */
                    bool TypeNameHasBeenSet() const;

                    /**
                     * 获取Status description
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return StatusName Status description
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStatusName() const;

                    /**
                     * 判断参数 StatusName 是否已赋值
                     * @return StatusName 是否已赋值
                     * 
                     */
                    bool StatusNameHasBeenSet() const;

                    /**
                     * 获取Multiple domain names included in the certificate (excluding the primary domain name, which uses the `Domain` field)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubjectAltName Multiple domain names included in the certificate (excluding the primary domain name, which uses the `Domain` field)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetSubjectAltName() const;

                    /**
                     * 判断参数 SubjectAltName 是否已赋值
                     * @return SubjectAltName 是否已赋值
                     * 
                     */
                    bool SubjectAltNameHasBeenSet() const;

                    /**
                     * 获取Whether the certificate is a paid one.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsVip Whether the certificate is a paid one.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsVip() const;

                    /**
                     * 判断参数 IsVip 是否已赋值
                     * @return IsVip 是否已赋值
                     * 
                     */
                    bool IsVipHasBeenSet() const;

                    /**
                     * 获取Whether the certificate is a wildcard certificate
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return IsWildcard Whether the certificate is a wildcard certificate
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsWildcard() const;

                    /**
                     * 判断参数 IsWildcard 是否已赋值
                     * @return IsWildcard 是否已赋值
                     * 
                     */
                    bool IsWildcardHasBeenSet() const;

                    /**
                     * 获取Whether the certificate is a DV certificate
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return IsDv Whether the certificate is a DV certificate
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsDv() const;

                    /**
                     * 判断参数 IsDv 是否已赋值
                     * @return IsDv 是否已赋值
                     * 
                     */
                    bool IsDvHasBeenSet() const;

                    /**
                     * 获取Whether the vulnerability scanning feature is enabled
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return IsVulnerability Whether the vulnerability scanning feature is enabled
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsVulnerability() const;

                    /**
                     * 判断参数 IsVulnerability 是否已赋值
                     * @return IsVulnerability 是否已赋值
                     * 
                     */
                    bool IsVulnerabilityHasBeenSet() const;

                    /**
                     * 获取Profile information submitted for paid certificates.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SubmittedData Profile information submitted for paid certificates.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    SubmittedData GetSubmittedData() const;

                    /**
                     * 判断参数 SubmittedData 是否已赋值
                     * @return SubmittedData 是否已赋值
                     * 
                     */
                    bool SubmittedDataHasBeenSet() const;

                    /**
                     * 获取Whether the certificate can be renewed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RenewAble Whether the certificate can be renewed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetRenewAble() const;

                    /**
                     * 判断参数 RenewAble 是否已赋值
                     * @return RenewAble 是否已赋值
                     * 
                     */
                    bool RenewAbleHasBeenSet() const;

                    /**
                     * 获取Whether the certificate can be deployed
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Deployable Whether the certificate can be deployed
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetDeployable() const;

                    /**
                     * 判断参数 Deployable 是否已赋值
                     * @return Deployable 是否已赋值
                     * 
                     */
                    bool DeployableHasBeenSet() const;

                    /**
                     * 获取List of associated tags
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Tags List of associated tags
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Tags> GetTags() const;

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Root certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RootCert Root certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    RootCertificates GetRootCert() const;

                    /**
                     * 判断参数 RootCert 是否已赋值
                     * @return RootCert 是否已赋值
                     * 
                     */
                    bool RootCertHasBeenSet() const;

                    /**
                     * 获取Chinese SM certificate public key, only has value for national cryptography certificates.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return EncryptCert Chinese SM certificate public key, only has value for national cryptography certificates.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEncryptCert() const;

                    /**
                     * 判断参数 EncryptCert 是否已赋值
                     * @return EncryptCert 是否已赋值
                     * 
                     */
                    bool EncryptCertHasBeenSet() const;

                    /**
                     * 获取Chinese SM certificate private key certificate, only has value for national cryptography certificates.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return EncryptPrivateKey Chinese SM certificate private key certificate, only has value for national cryptography certificates.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEncryptPrivateKey() const;

                    /**
                     * 判断参数 EncryptPrivateKey 是否已赋值
                     * @return EncryptPrivateKey 是否已赋值
                     * 
                     */
                    bool EncryptPrivateKeyHasBeenSet() const;

                    /**
                     * 获取SHA1 fingerprint of the signature certificate
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CertFingerprint SHA1 fingerprint of the signature certificate
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCertFingerprint() const;

                    /**
                     * 判断参数 CertFingerprint 是否已赋值
                     * @return CertFingerprint 是否已赋值
                     * 
                     */
                    bool CertFingerprintHasBeenSet() const;

                    /**
                     * 获取SHA1 fingerprint of the encryption certificate (for Chinese SM certificates only)
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EncryptCertFingerprint SHA1 fingerprint of the encryption certificate (for Chinese SM certificates only)
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEncryptCertFingerprint() const;

                    /**
                     * 判断参数 EncryptCertFingerprint 是否已赋值
                     * @return EncryptCertFingerprint 是否已赋值
                     * 
                     */
                    bool EncryptCertFingerprintHasBeenSet() const;

                    /**
                     * 获取Certificate encryption algorithm (or Chinese SM certificates only).
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return EncryptAlgorithm Certificate encryption algorithm (or Chinese SM certificates only).
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEncryptAlgorithm() const;

                    /**
                     * 判断参数 EncryptAlgorithm 是否已赋值
                     * @return EncryptAlgorithm 是否已赋值
                     * 
                     */
                    bool EncryptAlgorithmHasBeenSet() const;

                    /**
                     * 获取The authentication value for DV certificate revocation.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DvRevokeAuthDetail The authentication value for DV certificate revocation.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<DvAuths> GetDvRevokeAuthDetail() const;

                    /**
                     * 判断参数 DvRevokeAuthDetail 是否已赋值
                     * @return DvRevokeAuthDetail 是否已赋值
                     * 
                     */
                    bool DvRevokeAuthDetailHasBeenSet() const;

                    /**
                     * 获取Certificate chain information.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CertChainInfo Certificate chain information.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<CertBasicInfo> GetCertChainInfo() const;

                    /**
                     * 判断参数 CertChainInfo 是否已赋值
                     * @return CertChainInfo 是否已赋值
                     * 
                     */
                    bool CertChainInfoHasBeenSet() const;

                private:

                    /**
                     * Certificate belonging to user main account uin.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * Project ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Certificate source:.
trustAsia.
upload.
wosign.
sheca.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * Certificate type. `CA`: client certificate; `SVR`: server certificate
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_certificateType;
                    bool m_certificateTypeHasBeenSet;

                    /**
                     * Certificate package type:.
null: user uploads a certificate (no package type),.
2: trustasia tls rsa ca,. 
3: securesite enhanced enterprise version (ev pro),. 
4: securesite enhanced (ev),. 
5: securesite enterprise pro (ov pro).
6: securesite enterprise (ov). 
7: securesite enterprise (ov) wildcard. 
8: geotrust enhanced (ev). 
9: geotrust enterprise (ov). 
10: geotrust enterprise (ov) wildcard cert. 
11: trustasia domain name-based multiple domain names ssl certificate. 
12: trustasia domain name-based (dv) wildcard cert. 
13: trustasia enterprise wildcard (ov) ssl certificate (d3). 
14: trustasia enterprise (ov) ssl certificate (d3). 
15: trustasia enterprise multiple domain names (ov) ssl certificate (d3). 
16: trustasia enhanced (ev) ssl certificate (d3). 
17: trustasia enhanced multiple domain names (ev) ssl certificate (d3). 
18: globalsign enterprise (ov) ssl certificate. 
19: globalsign enterprise wildcard (ov) ssl certificate. 
20: globalsign enhanced (ev) ssl certificate. 
21: trustasia enterprise wildcard multiple domain names (ov) ssl certificate (d3). 
22: globalsign enterprise multiple domain names (ov) ssl certificate. 
23: globalsign enterprise wildcard multiple domain names (ov) ssl certificate.
24: globalsign enhanced multiple domain names (ev) ssl certificate.
25: wotrus domain cert.
26: wotrus multi-domain cert.
27: wotrus wildcard cert.
28: wotrus enterprise cert.
29: wotrus enterprise multi-domain cert.
30: wotrus enterprise wildcard certificate.
31: wotrus enhanced certificate.
32: wotrus enhanced multi-domain name certificate.
33: wotrus-national cryptography domain name certificate.
34: wotrus-national cryptography domain name certificate (multiple domain names).
35: wotrus-national cryptography wildcard certificate.
37: wotrus-national cryptography enterprise certificate.
38: wotrus-national cryptography enterprise certificate (multiple domain names).
39: wotrus-national cryptography enterprise certificate (wildcard).
40: wotrus-national cryptography enhanced certificate.
41: wotrus - national cryptography enhanced certificate (multiple domain names).
42: trustasia - domain name certificate (wildcard multiple domain names).
43: DNSPod - enterprise (ov) ssl certificate.
44: DNSPod - enterprise (ov) wildcard ssl certificate.
45: DNSPod - enterprise (ov) multiple domain names ssl certificate.
46: dnspod-enhanced (ev) ssl certificate.
47: dnspod-enhanced (ev) multiple domain names ssl certificate.
48: dnspod-domain name-based (dv) ssl certificate.
49: dnspod-domain name-based (dv) wildcard ssl certificate.
50: dnspod-domain name-based (dv) multiple domain names ssl certificate.
51: DNSPod (national cryptography) - enterprise (ov) ssl certificate.
52: DNSPod (national cryptography) - enterprise (ov) wildcard ssl certificate.
53: DNSPod (national cryptography) - enterprise (ov) multiple domain names ssl certificate.
54: DNSPod (national cryptography) - domain name-based (dv) ssl certificate.
55: DNSPod (national cryptography) - domain name-based (dv) wildcard ssl certificate.
56: DNSPod (national cryptography) - domain name-based (dv) multiple domain names ssl certificate.
57: securesite enterprise professional version multiple domain names (ov pro).
58: securesite enterprise multiple domain names (ov).
59: securesite enhanced professional version multiple domain names (ev pro).
60: securesite enhanced multiple domain names (ev).
61: geotrust enhanced multiple domain names (ev).
75: securesite enterprise (ov).
76: securesite enterprise (ov) wildcard.
77: securesite enhanced (ev).
78: geotrust enterprise (ov).
79: geotrust enterprise (ov) wildcard.
80: geotrust enhanced (ev).
81: globalsign enterprise (ov) ssl certificate.
82: globalsign enterprise wildcard (ov) ssl certificate.
83: trustasia c1 dv free.
85: globalsign enhanced (ev) ssl certificate.
88: globalsign enterprise wildcard multiple domain names (ov) ssl certificate.
89: globalsign enterprise multiple domain names (ov) ssl certificate.
90: globalsign enhanced multiple domain names (ev) ssl certificate.
91: geotrust enhanced multiple domain names (ev).
92: securesite enterprise ov pro for multiple domain names.
93: securesite enterprise for multiple domain names (ov).
94: securesite ev pro for multiple domain names.
95: securesite ev for multiple domain names.
96: securesite ev pro.
97: securesite enterprise professional edition (ov pro).
98: cfca enterprise (ov) ssl certificate.
99: cfca enterprise multiple domain names (ov) ssl certificate.
100: cfca enterprise wildcard (ov) ssl certificate.
101: cfca enhanced (ev) ssl certificate.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_packageType;
                    bool m_packageTypeHasBeenSet;

                    /**
                     * Certificate product name.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_productZhName;
                    bool m_productZhNameHasBeenSet;

                    /**
                     * Certificate binds to a common name domain.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Alias
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * Certificate status: 0 = under review, 1 = approved, 2 = review failed, 3 = expired, 4 = automatically added dns records, 5 = enterprise certificate, pending document submission, 6 = order cancellation in progress, 7 = canceled, 8 = documents submitted, pending upload of confirmation letter, 9 = certificate revocation in progress, 10 = revoked, 11 = reissue in progress, 12 = pending upload of revocation confirmation letter, 13 = free certificate pending document submission, 14 = certificate has been refunded, 15 = certificate migration in progress.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Status information. valid values:.
//Common status information.
PRE-REVIEWING: in prereview.
LEGAL-REVIEWING: in legal review.
CA-REVIEWING: in ca review.
PENDING-DCV: in domain verification.
WAIT-ISSUE: waiting for issue (domain verification passed).
Certificate review failure status information.
1. order review failed.
2. ca review failed, and the domain name did not pass the security review.
3. domain name verification timed out, and the order was automatically closed. please reapply for the certificate.
4. the certificate information did not pass the review of the certificate ca agency. the reviewer will call the contact information reserved for the certificate. please pay attention to the incoming call. subsequently, you can resubmit the information through "modify information".
To be continuously improved.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_statusMsg;
                    bool m_statusMsgHasBeenSet;

                    /**
                     * Validation type. `DNS_AUTO`: automatic DNS validation; `DNS`: manual DNS validation; `FILE`: file validation; `EMAIL`: email validation
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_verifyType;
                    bool m_verifyTypeHasBeenSet;

                    /**
                     * Vulnerability scanning status
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vulnerabilityStatus;
                    bool m_vulnerabilityStatusHasBeenSet;

                    /**
                     * Time when the certificate takes effect
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_certBeginTime;
                    bool m_certBeginTimeHasBeenSet;

                    /**
                     * Time when the certificate expires
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_certEndTime;
                    bool m_certEndTimeHasBeenSet;

                    /**
                     * Validity period of the certificate, in months
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_validityPeriod;
                    bool m_validityPeriodHasBeenSet;

                    /**
                     * Certificate application time.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_insertTime;
                    bool m_insertTimeHasBeenSet;

                    /**
                     * CA order id.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * Extended information of the certificate
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    CertificateExtra m_certificateExtra;
                    bool m_certificateExtraHasBeenSet;

                    /**
                     * Private key certificate; for Chinese SM certificates, it refers to the private key certificate in the signature certificate.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_certificatePrivateKey;
                    bool m_certificatePrivateKeyHasBeenSet;

                    /**
                     * Public key certificate; for Chinese SM certificate, it refers to the public key certificate in the signature certificate.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_certificatePublicKey;
                    bool m_certificatePublicKeyHasBeenSet;

                    /**
                     * Certificate domain name verification information.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    DvAuthDetail m_dvAuthDetail;
                    bool m_dvAuthDetailHasBeenSet;

                    /**
                     * Vulnerability scanning assessment report
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vulnerabilityReport;
                    bool m_vulnerabilityReportHasBeenSet;

                    /**
                     * Certificate ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                    /**
                     * Certificate type name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_typeName;
                    bool m_typeNameHasBeenSet;

                    /**
                     * Status description
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_statusName;
                    bool m_statusNameHasBeenSet;

                    /**
                     * Multiple domain names included in the certificate (excluding the primary domain name, which uses the `Domain` field)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_subjectAltName;
                    bool m_subjectAltNameHasBeenSet;

                    /**
                     * Whether the certificate is a paid one.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isVip;
                    bool m_isVipHasBeenSet;

                    /**
                     * Whether the certificate is a wildcard certificate
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isWildcard;
                    bool m_isWildcardHasBeenSet;

                    /**
                     * Whether the certificate is a DV certificate
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isDv;
                    bool m_isDvHasBeenSet;

                    /**
                     * Whether the vulnerability scanning feature is enabled
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isVulnerability;
                    bool m_isVulnerabilityHasBeenSet;

                    /**
                     * Profile information submitted for paid certificates.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    SubmittedData m_submittedData;
                    bool m_submittedDataHasBeenSet;

                    /**
                     * Whether the certificate can be renewed.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_renewAble;
                    bool m_renewAbleHasBeenSet;

                    /**
                     * Whether the certificate can be deployed
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_deployable;
                    bool m_deployableHasBeenSet;

                    /**
                     * List of associated tags
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<Tags> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Root certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    RootCertificates m_rootCert;
                    bool m_rootCertHasBeenSet;

                    /**
                     * Chinese SM certificate public key, only has value for national cryptography certificates.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_encryptCert;
                    bool m_encryptCertHasBeenSet;

                    /**
                     * Chinese SM certificate private key certificate, only has value for national cryptography certificates.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_encryptPrivateKey;
                    bool m_encryptPrivateKeyHasBeenSet;

                    /**
                     * SHA1 fingerprint of the signature certificate
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_certFingerprint;
                    bool m_certFingerprintHasBeenSet;

                    /**
                     * SHA1 fingerprint of the encryption certificate (for Chinese SM certificates only)
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_encryptCertFingerprint;
                    bool m_encryptCertFingerprintHasBeenSet;

                    /**
                     * Certificate encryption algorithm (or Chinese SM certificates only).
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_encryptAlgorithm;
                    bool m_encryptAlgorithmHasBeenSet;

                    /**
                     * The authentication value for DV certificate revocation.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DvAuths> m_dvRevokeAuthDetail;
                    bool m_dvRevokeAuthDetailHasBeenSet;

                    /**
                     * Certificate chain information.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<CertBasicInfo> m_certChainInfo;
                    bool m_certChainInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECERTIFICATEDETAILRESPONSE_H_
