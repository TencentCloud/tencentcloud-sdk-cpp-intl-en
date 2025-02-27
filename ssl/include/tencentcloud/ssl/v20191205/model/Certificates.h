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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_CERTIFICATES_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_CERTIFICATES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/CertificateExtra.h>
#include <tencentcloud/ssl/v20191205/model/ProjectInfo.h>
#include <tencentcloud/ssl/v20191205/model/Tags.h>
#include <tencentcloud/ssl/v20191205/model/PreAuditInfo.h>
#include <tencentcloud/ssl/v20191205/model/SupportDownloadType.h>
#include <tencentcloud/ssl/v20191205/model/HostingConfig.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * Content of the `Certificates` parameter returned by `DescribeCertificates`
                */
                class Certificates : public AbstractModel
                {
                public:
                    Certificates();
                    ~Certificates() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取User uin.
                     * @return OwnerUin User uin.
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置User uin.
                     * @param _ownerUin User uin.
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取Project id.
                     * @return ProjectId Project id.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project id.
                     * @param _projectId Project id.
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Certificate source:.
trustasia.
upload.
wosign.
sheca.
                     * @return From Certificate source:.
trustasia.
upload.
wosign.
sheca.
                     * 
                     */
                    std::string GetFrom() const;

                    /**
                     * 设置Certificate source:.
trustasia.
upload.
wosign.
sheca.
                     * @param _from Certificate source:.
trustasia.
upload.
wosign.
sheca.
                     * 
                     */
                    void SetFrom(const std::string& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     * 
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取Certificate package type:.
Null: user uploads a certificate (without package type),.
2: trustasia tls rsa ca,. 
3: securesite enhanced enterprise edition (ev pro),. 
4: securesite enhanced (ev). 
5: securesite enterprise professional edition (ov pro).
6: securesite enterprise (ov). 
7: securesite enterprise (ov) wildcard. 
8: geotrust enhanced (ev). 
9: geotrust enterprise (ov) cert. 
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
24: globalsign enhanced multiple domain name (ev) ssl certificate.
25: wotrus domain name cert.
26: wotrus domain name multiple domain name cert.
27: wotrus domain name wildcard cert.
28: wotrus enterprise cert.
29: wotrus enterprise multi - domain name certificate.
30: wotrus enterprise wildcard certificate.
31: wotrus enhanced certificate.
32: wotrus enhanced multi - domain name certificate.
33: wotrus - national cryptography domain - type certificate.
34: wotrus-national cryptography domain certificate (multiple domain names).
35: wotrus-national cryptography domain certificate (wildcard).
37: wotrus-national cryptography enterprise certificate.
38: wotrus-national cryptography enterprise certificate (multiple domain names).
39: wotrus-national cryptography enterprise certificate (wildcard).
40: wotrus - enhanced national cryptography certificate.
41: wotrus - enhanced national cryptography certificate (multiple domain names).
42: trustasia - domain name type certificate (wildcard multiple domain names).
43: DNSPod - enterprise (ov) ssl certificate.
44: DNSPod - enterprise (ov) wildcard ssl certificate.
45: DNSPod - enterprise (ov) multiple domain names ssl certificate.
46: DNSPod - enhanced (ev) ssl certificate.
47: DNSPod - enhanced (ev) multiple domain names ssl certificate.
48: DNSPod - domain name-based (dv) ssl certificate.
49: DNSPod - domain name-based (dv) wildcard ssl certificate.
50: DNSPod - domain name-based (dv) multiple domain names ssl certificate.
51: DNSPod (national cryptography) - enterprise (ov) ssl certificate.
52: DNSPod (national cryptography) - enterprise (ov) wildcard ssl certificate.
53: DNSPod (national cryptography) - enterprise (ov) multiple domain names ssl certificate.
54: DNSPod (national cryptography) - domain name-based (dv) ssl certificate.
55: DNSPod (national cryptography) - domain name-based (dv) wildcard ssl certificate.
56: DNSPod (national cryptography) - domain name-based (dv) multiple domain names ssl certificate.
57: securesite enterprise professional edition multiple domain names (ov pro).
58: securesite enterprise multiple domain names (ov).
59: securesite enhanced professional edition multiple domain names (ev pro).
60: securesite enhanced multiple domain names (ev).
61: geotrust enhanced multiple domain names (ev).
75: securesite enterprise (ov).
76: securesite enterprise (ov) wildcard.
77: securesite enhanced (ev).
78: geotrust enterprise (ov).
79: geotrust enterprise wildcard (ov).
80: geotrust enhanced (ev).
81: globalsign enterprise (ov) ssl certificate.
82: globalsign enterprise wildcard (ov) ssl certificate.
83: trustasia c1 dv free.
85: globalsign enhanced (ev) ssl certificate.
88: globalsign enterprise wildcard multiple domain names (ov) ssl certificate.
89: globalsign enterprise multiple domain names (ov) ssl certificate.
90: globalsign enhanced multiple domain names (ev) ssl certificate.
91: geotrust enhanced multiple domain names (ev).
92: securesite enterprise pro multiple domain names (ov pro).
93: securesite enterprise multiple domain names (ov).
94: securesite enhanced pro multiple domain names (ev pro).
95: securesite enhanced multiple domain names (ev).
96: securesite ev pro.
97: securesite enterprise professional edition (ov pro).
98: cfca enterprise (ov) ssl certificate.
99: cfca enterprise ov ssl certificate for multiple domain names.
100: cfca ov wildcard ssl certificate.
101: cfca enhanced (ev) ssl certificate.
                     * @return PackageType Certificate package type:.
Null: user uploads a certificate (without package type),.
2: trustasia tls rsa ca,. 
3: securesite enhanced enterprise edition (ev pro),. 
4: securesite enhanced (ev). 
5: securesite enterprise professional edition (ov pro).
6: securesite enterprise (ov). 
7: securesite enterprise (ov) wildcard. 
8: geotrust enhanced (ev). 
9: geotrust enterprise (ov) cert. 
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
24: globalsign enhanced multiple domain name (ev) ssl certificate.
25: wotrus domain name cert.
26: wotrus domain name multiple domain name cert.
27: wotrus domain name wildcard cert.
28: wotrus enterprise cert.
29: wotrus enterprise multi - domain name certificate.
30: wotrus enterprise wildcard certificate.
31: wotrus enhanced certificate.
32: wotrus enhanced multi - domain name certificate.
33: wotrus - national cryptography domain - type certificate.
34: wotrus-national cryptography domain certificate (multiple domain names).
35: wotrus-national cryptography domain certificate (wildcard).
37: wotrus-national cryptography enterprise certificate.
38: wotrus-national cryptography enterprise certificate (multiple domain names).
39: wotrus-national cryptography enterprise certificate (wildcard).
40: wotrus - enhanced national cryptography certificate.
41: wotrus - enhanced national cryptography certificate (multiple domain names).
42: trustasia - domain name type certificate (wildcard multiple domain names).
43: DNSPod - enterprise (ov) ssl certificate.
44: DNSPod - enterprise (ov) wildcard ssl certificate.
45: DNSPod - enterprise (ov) multiple domain names ssl certificate.
46: DNSPod - enhanced (ev) ssl certificate.
47: DNSPod - enhanced (ev) multiple domain names ssl certificate.
48: DNSPod - domain name-based (dv) ssl certificate.
49: DNSPod - domain name-based (dv) wildcard ssl certificate.
50: DNSPod - domain name-based (dv) multiple domain names ssl certificate.
51: DNSPod (national cryptography) - enterprise (ov) ssl certificate.
52: DNSPod (national cryptography) - enterprise (ov) wildcard ssl certificate.
53: DNSPod (national cryptography) - enterprise (ov) multiple domain names ssl certificate.
54: DNSPod (national cryptography) - domain name-based (dv) ssl certificate.
55: DNSPod (national cryptography) - domain name-based (dv) wildcard ssl certificate.
56: DNSPod (national cryptography) - domain name-based (dv) multiple domain names ssl certificate.
57: securesite enterprise professional edition multiple domain names (ov pro).
58: securesite enterprise multiple domain names (ov).
59: securesite enhanced professional edition multiple domain names (ev pro).
60: securesite enhanced multiple domain names (ev).
61: geotrust enhanced multiple domain names (ev).
75: securesite enterprise (ov).
76: securesite enterprise (ov) wildcard.
77: securesite enhanced (ev).
78: geotrust enterprise (ov).
79: geotrust enterprise wildcard (ov).
80: geotrust enhanced (ev).
81: globalsign enterprise (ov) ssl certificate.
82: globalsign enterprise wildcard (ov) ssl certificate.
83: trustasia c1 dv free.
85: globalsign enhanced (ev) ssl certificate.
88: globalsign enterprise wildcard multiple domain names (ov) ssl certificate.
89: globalsign enterprise multiple domain names (ov) ssl certificate.
90: globalsign enhanced multiple domain names (ev) ssl certificate.
91: geotrust enhanced multiple domain names (ev).
92: securesite enterprise pro multiple domain names (ov pro).
93: securesite enterprise multiple domain names (ov).
94: securesite enhanced pro multiple domain names (ev pro).
95: securesite enhanced multiple domain names (ev).
96: securesite ev pro.
97: securesite enterprise professional edition (ov pro).
98: cfca enterprise (ov) ssl certificate.
99: cfca enterprise ov ssl certificate for multiple domain names.
100: cfca ov wildcard ssl certificate.
101: cfca enhanced (ev) ssl certificate.
                     * 
                     */
                    std::string GetPackageType() const;

                    /**
                     * 设置Certificate package type:.
Null: user uploads a certificate (without package type),.
2: trustasia tls rsa ca,. 
3: securesite enhanced enterprise edition (ev pro),. 
4: securesite enhanced (ev). 
5: securesite enterprise professional edition (ov pro).
6: securesite enterprise (ov). 
7: securesite enterprise (ov) wildcard. 
8: geotrust enhanced (ev). 
9: geotrust enterprise (ov) cert. 
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
24: globalsign enhanced multiple domain name (ev) ssl certificate.
25: wotrus domain name cert.
26: wotrus domain name multiple domain name cert.
27: wotrus domain name wildcard cert.
28: wotrus enterprise cert.
29: wotrus enterprise multi - domain name certificate.
30: wotrus enterprise wildcard certificate.
31: wotrus enhanced certificate.
32: wotrus enhanced multi - domain name certificate.
33: wotrus - national cryptography domain - type certificate.
34: wotrus-national cryptography domain certificate (multiple domain names).
35: wotrus-national cryptography domain certificate (wildcard).
37: wotrus-national cryptography enterprise certificate.
38: wotrus-national cryptography enterprise certificate (multiple domain names).
39: wotrus-national cryptography enterprise certificate (wildcard).
40: wotrus - enhanced national cryptography certificate.
41: wotrus - enhanced national cryptography certificate (multiple domain names).
42: trustasia - domain name type certificate (wildcard multiple domain names).
43: DNSPod - enterprise (ov) ssl certificate.
44: DNSPod - enterprise (ov) wildcard ssl certificate.
45: DNSPod - enterprise (ov) multiple domain names ssl certificate.
46: DNSPod - enhanced (ev) ssl certificate.
47: DNSPod - enhanced (ev) multiple domain names ssl certificate.
48: DNSPod - domain name-based (dv) ssl certificate.
49: DNSPod - domain name-based (dv) wildcard ssl certificate.
50: DNSPod - domain name-based (dv) multiple domain names ssl certificate.
51: DNSPod (national cryptography) - enterprise (ov) ssl certificate.
52: DNSPod (national cryptography) - enterprise (ov) wildcard ssl certificate.
53: DNSPod (national cryptography) - enterprise (ov) multiple domain names ssl certificate.
54: DNSPod (national cryptography) - domain name-based (dv) ssl certificate.
55: DNSPod (national cryptography) - domain name-based (dv) wildcard ssl certificate.
56: DNSPod (national cryptography) - domain name-based (dv) multiple domain names ssl certificate.
57: securesite enterprise professional edition multiple domain names (ov pro).
58: securesite enterprise multiple domain names (ov).
59: securesite enhanced professional edition multiple domain names (ev pro).
60: securesite enhanced multiple domain names (ev).
61: geotrust enhanced multiple domain names (ev).
75: securesite enterprise (ov).
76: securesite enterprise (ov) wildcard.
77: securesite enhanced (ev).
78: geotrust enterprise (ov).
79: geotrust enterprise wildcard (ov).
80: geotrust enhanced (ev).
81: globalsign enterprise (ov) ssl certificate.
82: globalsign enterprise wildcard (ov) ssl certificate.
83: trustasia c1 dv free.
85: globalsign enhanced (ev) ssl certificate.
88: globalsign enterprise wildcard multiple domain names (ov) ssl certificate.
89: globalsign enterprise multiple domain names (ov) ssl certificate.
90: globalsign enhanced multiple domain names (ev) ssl certificate.
91: geotrust enhanced multiple domain names (ev).
92: securesite enterprise pro multiple domain names (ov pro).
93: securesite enterprise multiple domain names (ov).
94: securesite enhanced pro multiple domain names (ev pro).
95: securesite enhanced multiple domain names (ev).
96: securesite ev pro.
97: securesite enterprise professional edition (ov pro).
98: cfca enterprise (ov) ssl certificate.
99: cfca enterprise ov ssl certificate for multiple domain names.
100: cfca ov wildcard ssl certificate.
101: cfca enhanced (ev) ssl certificate.
                     * @param _packageType Certificate package type:.
Null: user uploads a certificate (without package type),.
2: trustasia tls rsa ca,. 
3: securesite enhanced enterprise edition (ev pro),. 
4: securesite enhanced (ev). 
5: securesite enterprise professional edition (ov pro).
6: securesite enterprise (ov). 
7: securesite enterprise (ov) wildcard. 
8: geotrust enhanced (ev). 
9: geotrust enterprise (ov) cert. 
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
24: globalsign enhanced multiple domain name (ev) ssl certificate.
25: wotrus domain name cert.
26: wotrus domain name multiple domain name cert.
27: wotrus domain name wildcard cert.
28: wotrus enterprise cert.
29: wotrus enterprise multi - domain name certificate.
30: wotrus enterprise wildcard certificate.
31: wotrus enhanced certificate.
32: wotrus enhanced multi - domain name certificate.
33: wotrus - national cryptography domain - type certificate.
34: wotrus-national cryptography domain certificate (multiple domain names).
35: wotrus-national cryptography domain certificate (wildcard).
37: wotrus-national cryptography enterprise certificate.
38: wotrus-national cryptography enterprise certificate (multiple domain names).
39: wotrus-national cryptography enterprise certificate (wildcard).
40: wotrus - enhanced national cryptography certificate.
41: wotrus - enhanced national cryptography certificate (multiple domain names).
42: trustasia - domain name type certificate (wildcard multiple domain names).
43: DNSPod - enterprise (ov) ssl certificate.
44: DNSPod - enterprise (ov) wildcard ssl certificate.
45: DNSPod - enterprise (ov) multiple domain names ssl certificate.
46: DNSPod - enhanced (ev) ssl certificate.
47: DNSPod - enhanced (ev) multiple domain names ssl certificate.
48: DNSPod - domain name-based (dv) ssl certificate.
49: DNSPod - domain name-based (dv) wildcard ssl certificate.
50: DNSPod - domain name-based (dv) multiple domain names ssl certificate.
51: DNSPod (national cryptography) - enterprise (ov) ssl certificate.
52: DNSPod (national cryptography) - enterprise (ov) wildcard ssl certificate.
53: DNSPod (national cryptography) - enterprise (ov) multiple domain names ssl certificate.
54: DNSPod (national cryptography) - domain name-based (dv) ssl certificate.
55: DNSPod (national cryptography) - domain name-based (dv) wildcard ssl certificate.
56: DNSPod (national cryptography) - domain name-based (dv) multiple domain names ssl certificate.
57: securesite enterprise professional edition multiple domain names (ov pro).
58: securesite enterprise multiple domain names (ov).
59: securesite enhanced professional edition multiple domain names (ev pro).
60: securesite enhanced multiple domain names (ev).
61: geotrust enhanced multiple domain names (ev).
75: securesite enterprise (ov).
76: securesite enterprise (ov) wildcard.
77: securesite enhanced (ev).
78: geotrust enterprise (ov).
79: geotrust enterprise wildcard (ov).
80: geotrust enhanced (ev).
81: globalsign enterprise (ov) ssl certificate.
82: globalsign enterprise wildcard (ov) ssl certificate.
83: trustasia c1 dv free.
85: globalsign enhanced (ev) ssl certificate.
88: globalsign enterprise wildcard multiple domain names (ov) ssl certificate.
89: globalsign enterprise multiple domain names (ov) ssl certificate.
90: globalsign enhanced multiple domain names (ev) ssl certificate.
91: geotrust enhanced multiple domain names (ev).
92: securesite enterprise pro multiple domain names (ov pro).
93: securesite enterprise multiple domain names (ov).
94: securesite enhanced pro multiple domain names (ev pro).
95: securesite enhanced multiple domain names (ev).
96: securesite ev pro.
97: securesite enterprise professional edition (ov pro).
98: cfca enterprise (ov) ssl certificate.
99: cfca enterprise ov ssl certificate for multiple domain names.
100: cfca ov wildcard ssl certificate.
101: cfca enhanced (ev) ssl certificate.
                     * 
                     */
                    void SetPackageType(const std::string& _packageType);

                    /**
                     * 判断参数 PackageType 是否已赋值
                     * @return PackageType 是否已赋值
                     * 
                     */
                    bool PackageTypeHasBeenSet() const;

                    /**
                     * 获取Certificate type. ca = client certificate; svr = server certificate.
                     * @return CertificateType Certificate type. ca = client certificate; svr = server certificate.
                     * 
                     */
                    std::string GetCertificateType() const;

                    /**
                     * 设置Certificate type. ca = client certificate; svr = server certificate.
                     * @param _certificateType Certificate type. ca = client certificate; svr = server certificate.
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
                     * 获取Certificate product name.
                     * @return ProductZhName Certificate product name.
                     * 
                     */
                    std::string GetProductZhName() const;

                    /**
                     * 设置Certificate product name.
                     * @param _productZhName Certificate product name.
                     * 
                     */
                    void SetProductZhName(const std::string& _productZhName);

                    /**
                     * 判断参数 ProductZhName 是否已赋值
                     * @return ProductZhName 是否已赋值
                     * 
                     */
                    bool ProductZhNameHasBeenSet() const;

                    /**
                     * 获取Primary domain name.
                     * @return Domain Primary domain name.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Primary domain name.
                     * @param _domain Primary domain name.
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Remark name.
                     * @return Alias Remark name.
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置Remark name.
                     * @param _alias Remark name.
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取Certificate status: 0 = under review, 1 = approved, 2 = review failed, 3 = expired, 4 = dns record added automatically, 5 = enterprise certificate, pending documentation submission, 6 = order cancellation in progress, 7 = canceled, 8 = documents submitted, pending upload of confirmation letter, 9 = certificate revocation in progress, 10 = revoked, 11 = reissue in progress, 12 = pending upload of revocation confirmation letter, 13 = free certificate pending documentation submission, 14 = certificate refunded, 15 = certificate migration in progress.
                     * @return Status Certificate status: 0 = under review, 1 = approved, 2 = review failed, 3 = expired, 4 = dns record added automatically, 5 = enterprise certificate, pending documentation submission, 6 = order cancellation in progress, 7 = canceled, 8 = documents submitted, pending upload of confirmation letter, 9 = certificate revocation in progress, 10 = revoked, 11 = reissue in progress, 12 = pending upload of revocation confirmation letter, 13 = free certificate pending documentation submission, 14 = certificate refunded, 15 = certificate migration in progress.
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Certificate status: 0 = under review, 1 = approved, 2 = review failed, 3 = expired, 4 = dns record added automatically, 5 = enterprise certificate, pending documentation submission, 6 = order cancellation in progress, 7 = canceled, 8 = documents submitted, pending upload of confirmation letter, 9 = certificate revocation in progress, 10 = revoked, 11 = reissue in progress, 12 = pending upload of revocation confirmation letter, 13 = free certificate pending documentation submission, 14 = certificate refunded, 15 = certificate migration in progress.
                     * @param _status Certificate status: 0 = under review, 1 = approved, 2 = review failed, 3 = expired, 4 = dns record added automatically, 5 = enterprise certificate, pending documentation submission, 6 = order cancellation in progress, 7 = canceled, 8 = documents submitted, pending upload of confirmation letter, 9 = certificate revocation in progress, 10 = revoked, 11 = reissue in progress, 12 = pending upload of revocation confirmation letter, 13 = free certificate pending documentation submission, 14 = certificate refunded, 15 = certificate migration in progress.
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Certificate extended information.
                     * @return CertificateExtra Certificate extended information.
                     * 
                     */
                    CertificateExtra GetCertificateExtra() const;

                    /**
                     * 设置Certificate extended information.
                     * @param _certificateExtra Certificate extended information.
                     * 
                     */
                    void SetCertificateExtra(const CertificateExtra& _certificateExtra);

                    /**
                     * 判断参数 CertificateExtra 是否已赋值
                     * @return CertificateExtra 是否已赋值
                     * 
                     */
                    bool CertificateExtraHasBeenSet() const;

                    /**
                     * 获取Vulnerability scanning status: INACTIVE = not enabled, ACTIVE = enabled.
                     * @return VulnerabilityStatus Vulnerability scanning status: INACTIVE = not enabled, ACTIVE = enabled.
                     * 
                     */
                    std::string GetVulnerabilityStatus() const;

                    /**
                     * 设置Vulnerability scanning status: INACTIVE = not enabled, ACTIVE = enabled.
                     * @param _vulnerabilityStatus Vulnerability scanning status: INACTIVE = not enabled, ACTIVE = enabled.
                     * 
                     */
                    void SetVulnerabilityStatus(const std::string& _vulnerabilityStatus);

                    /**
                     * 判断参数 VulnerabilityStatus 是否已赋值
                     * @return VulnerabilityStatus 是否已赋值
                     * 
                     */
                    bool VulnerabilityStatusHasBeenSet() const;

                    /**
                     * 获取Status information.
                     * @return StatusMsg Status information.
                     * 
                     */
                    std::string GetStatusMsg() const;

                    /**
                     * 设置Status information.
                     * @param _statusMsg Status information.
                     * 
                     */
                    void SetStatusMsg(const std::string& _statusMsg);

                    /**
                     * 判断参数 StatusMsg 是否已赋值
                     * @return StatusMsg 是否已赋值
                     * 
                     */
                    bool StatusMsgHasBeenSet() const;

                    /**
                     * 获取Validation type: DNS_AUTO = automatic dns validation, DNS = manual dns validation, FILE = file verification, DNS_PROXY = dns proxy validation, FILE_PROXY = file proxy verification.
                     * @return VerifyType Validation type: DNS_AUTO = automatic dns validation, DNS = manual dns validation, FILE = file verification, DNS_PROXY = dns proxy validation, FILE_PROXY = file proxy verification.
                     * 
                     */
                    std::string GetVerifyType() const;

                    /**
                     * 设置Validation type: DNS_AUTO = automatic dns validation, DNS = manual dns validation, FILE = file verification, DNS_PROXY = dns proxy validation, FILE_PROXY = file proxy verification.
                     * @param _verifyType Validation type: DNS_AUTO = automatic dns validation, DNS = manual dns validation, FILE = file verification, DNS_PROXY = dns proxy validation, FILE_PROXY = file proxy verification.
                     * 
                     */
                    void SetVerifyType(const std::string& _verifyType);

                    /**
                     * 判断参数 VerifyType 是否已赋值
                     * @return VerifyType 是否已赋值
                     * 
                     */
                    bool VerifyTypeHasBeenSet() const;

                    /**
                     * 获取Certificate validation time.
                     * @return CertBeginTime Certificate validation time.
                     * 
                     */
                    std::string GetCertBeginTime() const;

                    /**
                     * 设置Certificate validation time.
                     * @param _certBeginTime Certificate validation time.
                     * 
                     */
                    void SetCertBeginTime(const std::string& _certBeginTime);

                    /**
                     * 判断参数 CertBeginTime 是否已赋值
                     * @return CertBeginTime 是否已赋值
                     * 
                     */
                    bool CertBeginTimeHasBeenSet() const;

                    /**
                     * 获取Certificate expiration time.
                     * @return CertEndTime Certificate expiration time.
                     * 
                     */
                    std::string GetCertEndTime() const;

                    /**
                     * 设置Certificate expiration time.
                     * @param _certEndTime Certificate expiration time.
                     * 
                     */
                    void SetCertEndTime(const std::string& _certEndTime);

                    /**
                     * 判断参数 CertEndTime 是否已赋值
                     * @return CertEndTime 是否已赋值
                     * 
                     */
                    bool CertEndTimeHasBeenSet() const;

                    /**
                     * 获取Certificate validity period (month).
                     * @return ValidityPeriod Certificate validity period (month).
                     * 
                     */
                    std::string GetValidityPeriod() const;

                    /**
                     * 设置Certificate validity period (month).
                     * @param _validityPeriod Certificate validity period (month).
                     * 
                     */
                    void SetValidityPeriod(const std::string& _validityPeriod);

                    /**
                     * 判断参数 ValidityPeriod 是否已赋值
                     * @return ValidityPeriod 是否已赋值
                     * 
                     */
                    bool ValidityPeriodHasBeenSet() const;

                    /**
                     * 获取Creation time.
                     * @return InsertTime Creation time.
                     * 
                     */
                    std::string GetInsertTime() const;

                    /**
                     * 设置Creation time.
                     * @param _insertTime Creation time.
                     * 
                     */
                    void SetInsertTime(const std::string& _insertTime);

                    /**
                     * 判断参数 InsertTime 是否已赋值
                     * @return InsertTime 是否已赋值
                     * 
                     */
                    bool InsertTimeHasBeenSet() const;

                    /**
                     * 获取Certificate id.
                     * @return CertificateId Certificate id.
                     * 
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 设置Certificate id.
                     * @param _certificateId Certificate id.
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
                     * 获取Multiple domain names contained in the certificate (including the primary domain name).
                     * @return SubjectAltName Multiple domain names contained in the certificate (including the primary domain name).
                     * 
                     */
                    std::vector<std::string> GetSubjectAltName() const;

                    /**
                     * 设置Multiple domain names contained in the certificate (including the primary domain name).
                     * @param _subjectAltName Multiple domain names contained in the certificate (including the primary domain name).
                     * 
                     */
                    void SetSubjectAltName(const std::vector<std::string>& _subjectAltName);

                    /**
                     * 判断参数 SubjectAltName 是否已赋值
                     * @return SubjectAltName 是否已赋值
                     * 
                     */
                    bool SubjectAltNameHasBeenSet() const;

                    /**
                     * 获取Certificate type name.
                     * @return PackageTypeName Certificate type name.
                     * 
                     */
                    std::string GetPackageTypeName() const;

                    /**
                     * 设置Certificate type name.
                     * @param _packageTypeName Certificate type name.
                     * 
                     */
                    void SetPackageTypeName(const std::string& _packageTypeName);

                    /**
                     * 判断参数 PackageTypeName 是否已赋值
                     * @return PackageTypeName 是否已赋值
                     * 
                     */
                    bool PackageTypeNameHasBeenSet() const;

                    /**
                     * 获取Status name.
                     * @return StatusName Status name.
                     * 
                     */
                    std::string GetStatusName() const;

                    /**
                     * 设置Status name.
                     * @param _statusName Status name.
                     * 
                     */
                    void SetStatusName(const std::string& _statusName);

                    /**
                     * 判断参数 StatusName 是否已赋值
                     * @return StatusName 是否已赋值
                     * 
                     */
                    bool StatusNameHasBeenSet() const;

                    /**
                     * 获取Specifies whether the customer is a vip customer. true indicates yes and false indicates no.
                     * @return IsVip Specifies whether the customer is a vip customer. true indicates yes and false indicates no.
                     * 
                     */
                    bool GetIsVip() const;

                    /**
                     * 设置Specifies whether the customer is a vip customer. true indicates yes and false indicates no.
                     * @param _isVip Specifies whether the customer is a vip customer. true indicates yes and false indicates no.
                     * 
                     */
                    void SetIsVip(const bool& _isVip);

                    /**
                     * 判断参数 IsVip 是否已赋值
                     * @return IsVip 是否已赋值
                     * 
                     */
                    bool IsVipHasBeenSet() const;

                    /**
                     * 获取Specifies whether it is a dv version certificate. true indicates yes and false indicates no.
                     * @return IsDv Specifies whether it is a dv version certificate. true indicates yes and false indicates no.
                     * 
                     */
                    bool GetIsDv() const;

                    /**
                     * 设置Specifies whether it is a dv version certificate. true indicates yes and false indicates no.
                     * @param _isDv Specifies whether it is a dv version certificate. true indicates yes and false indicates no.
                     * 
                     */
                    void SetIsDv(const bool& _isDv);

                    /**
                     * 判断参数 IsDv 是否已赋值
                     * @return IsDv 是否已赋值
                     * 
                     */
                    bool IsDvHasBeenSet() const;

                    /**
                     * 获取Specifies whether it is a wildcard domain name certificate. true indicates yes and false indicates no.
                     * @return IsWildcard Specifies whether it is a wildcard domain name certificate. true indicates yes and false indicates no.
                     * 
                     */
                    bool GetIsWildcard() const;

                    /**
                     * 设置Specifies whether it is a wildcard domain name certificate. true indicates yes and false indicates no.
                     * @param _isWildcard Specifies whether it is a wildcard domain name certificate. true indicates yes and false indicates no.
                     * 
                     */
                    void SetIsWildcard(const bool& _isWildcard);

                    /**
                     * 判断参数 IsWildcard 是否已赋值
                     * @return IsWildcard 是否已赋值
                     * 
                     */
                    bool IsWildcardHasBeenSet() const;

                    /**
                     * 获取Whether the vulnerability scanning feature is enabled.
                     * @return IsVulnerability Whether the vulnerability scanning feature is enabled.
                     * 
                     */
                    bool GetIsVulnerability() const;

                    /**
                     * 设置Whether the vulnerability scanning feature is enabled.
                     * @param _isVulnerability Whether the vulnerability scanning feature is enabled.
                     * 
                     */
                    void SetIsVulnerability(const bool& _isVulnerability);

                    /**
                     * 判断参数 IsVulnerability 是否已赋值
                     * @return IsVulnerability 是否已赋值
                     * 
                     */
                    bool IsVulnerabilityHasBeenSet() const;

                    /**
                     * 获取Whether it is renewable.
                     * @return RenewAble Whether it is renewable.
                     * 
                     */
                    bool GetRenewAble() const;

                    /**
                     * 设置Whether it is renewable.
                     * @param _renewAble Whether it is renewable.
                     * 
                     */
                    void SetRenewAble(const bool& _renewAble);

                    /**
                     * 判断参数 RenewAble 是否已赋值
                     * @return RenewAble 是否已赋值
                     * 
                     */
                    bool RenewAbleHasBeenSet() const;

                    /**
                     * 获取Project information.
                     * @return ProjectInfo Project information.
                     * 
                     */
                    ProjectInfo GetProjectInfo() const;

                    /**
                     * 设置Project information.
                     * @param _projectInfo Project information.
                     * 
                     */
                    void SetProjectInfo(const ProjectInfo& _projectInfo);

                    /**
                     * 判断参数 ProjectInfo 是否已赋值
                     * @return ProjectInfo 是否已赋值
                     * 
                     */
                    bool ProjectInfoHasBeenSet() const;

                    /**
                     * 获取Associated cloud resources are temporarily unavailable.
                     * @return BoundResource Associated cloud resources are temporarily unavailable.
                     * 
                     */
                    std::vector<std::string> GetBoundResource() const;

                    /**
                     * 设置Associated cloud resources are temporarily unavailable.
                     * @param _boundResource Associated cloud resources are temporarily unavailable.
                     * 
                     */
                    void SetBoundResource(const std::vector<std::string>& _boundResource);

                    /**
                     * 判断参数 BoundResource 是否已赋值
                     * @return BoundResource 是否已赋值
                     * 
                     */
                    bool BoundResourceHasBeenSet() const;

                    /**
                     * 获取Whether it can be deployed.
                     * @return Deployable Whether it can be deployed.
                     * 
                     */
                    bool GetDeployable() const;

                    /**
                     * 设置Whether it can be deployed.
                     * @param _deployable Whether it can be deployed.
                     * 
                     */
                    void SetDeployable(const bool& _deployable);

                    /**
                     * 判断参数 Deployable 是否已赋值
                     * @return Deployable 是否已赋值
                     * 
                     */
                    bool DeployableHasBeenSet() const;

                    /**
                     * 获取Tag list.
                     * @return Tags Tag list.
                     * 
                     */
                    std::vector<Tags> GetTags() const;

                    /**
                     * 设置Tag list.
                     * @param _tags Tag list.
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
                     * 获取Whether expiration notice has been ignored.
                     * @return IsIgnore Whether expiration notice has been ignored.
                     * 
                     */
                    bool GetIsIgnore() const;

                    /**
                     * 设置Whether expiration notice has been ignored.
                     * @param _isIgnore Whether expiration notice has been ignored.
                     * 
                     */
                    void SetIsIgnore(const bool& _isIgnore);

                    /**
                     * 判断参数 IsIgnore 是否已赋值
                     * @return IsIgnore 是否已赋值
                     * 
                     */
                    bool IsIgnoreHasBeenSet() const;

                    /**
                     * 获取Whether it is a China SM certificate.
                     * @return IsSM Whether it is a China SM certificate.
                     * 
                     */
                    bool GetIsSM() const;

                    /**
                     * 设置Whether it is a China SM certificate.
                     * @param _isSM Whether it is a China SM certificate.
                     * 
                     */
                    void SetIsSM(const bool& _isSM);

                    /**
                     * 判断参数 IsSM 是否已赋值
                     * @return IsSM 是否已赋值
                     * 
                     */
                    bool IsSMHasBeenSet() const;

                    /**
                     * 获取Certificate algorithm.
                     * @return EncryptAlgorithm Certificate algorithm.
                     * 
                     */
                    std::string GetEncryptAlgorithm() const;

                    /**
                     * 设置Certificate algorithm.
                     * @param _encryptAlgorithm Certificate algorithm.
                     * 
                     */
                    void SetEncryptAlgorithm(const std::string& _encryptAlgorithm);

                    /**
                     * 判断参数 EncryptAlgorithm 是否已赋值
                     * @return EncryptAlgorithm 是否已赋值
                     * 
                     */
                    bool EncryptAlgorithmHasBeenSet() const;

                    /**
                     * 获取Encryption algorithm for upload ca certificate.
                     * @return CAEncryptAlgorithms Encryption algorithm for upload ca certificate.
                     * 
                     */
                    std::vector<std::string> GetCAEncryptAlgorithms() const;

                    /**
                     * 设置Encryption algorithm for upload ca certificate.
                     * @param _cAEncryptAlgorithms Encryption algorithm for upload ca certificate.
                     * 
                     */
                    void SetCAEncryptAlgorithms(const std::vector<std::string>& _cAEncryptAlgorithms);

                    /**
                     * 判断参数 CAEncryptAlgorithms 是否已赋值
                     * @return CAEncryptAlgorithms 是否已赋值
                     * 
                     */
                    bool CAEncryptAlgorithmsHasBeenSet() const;

                    /**
                     * 获取Expiration time for upload ca certificate.
                     * @return CAEndTimes Expiration time for upload ca certificate.
                     * 
                     */
                    std::vector<std::string> GetCAEndTimes() const;

                    /**
                     * 设置Expiration time for upload ca certificate.
                     * @param _cAEndTimes Expiration time for upload ca certificate.
                     * 
                     */
                    void SetCAEndTimes(const std::vector<std::string>& _cAEndTimes);

                    /**
                     * 判断参数 CAEndTimes 是否已赋值
                     * @return CAEndTimes 是否已赋值
                     * 
                     */
                    bool CAEndTimesHasBeenSet() const;

                    /**
                     * 获取Common name of the upload ca certificate.
                     * @return CACommonNames Common name of the upload ca certificate.
                     * 
                     */
                    std::vector<std::string> GetCACommonNames() const;

                    /**
                     * 设置Common name of the upload ca certificate.
                     * @param _cACommonNames Common name of the upload ca certificate.
                     * 
                     */
                    void SetCACommonNames(const std::vector<std::string>& _cACommonNames);

                    /**
                     * 判断参数 CACommonNames 是否已赋值
                     * @return CACommonNames 是否已赋值
                     * 
                     */
                    bool CACommonNamesHasBeenSet() const;

                    /**
                     * 获取Certificate prereview information.
                     * @return PreAuditInfo Certificate prereview information.
                     * 
                     */
                    PreAuditInfo GetPreAuditInfo() const;

                    /**
                     * 设置Certificate prereview information.
                     * @param _preAuditInfo Certificate prereview information.
                     * 
                     */
                    void SetPreAuditInfo(const PreAuditInfo& _preAuditInfo);

                    /**
                     * 判断参数 PreAuditInfo 是否已赋值
                     * @return PreAuditInfo 是否已赋值
                     * 
                     */
                    bool PreAuditInfoHasBeenSet() const;

                    /**
                     * 获取Whether to auto-renew.
                     * @return AutoRenewFlag Whether to auto-renew.
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置Whether to auto-renew.
                     * @param _autoRenewFlag Whether to auto-renew.
                     * 
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取Hosting status: 0, hosting; 5, resource replacement; 10, hosting completed; -1, not hosted. 
                     * @return HostingStatus Hosting status: 0, hosting; 5, resource replacement; 10, hosting completed; -1, not hosted. 
                     * 
                     */
                    int64_t GetHostingStatus() const;

                    /**
                     * 设置Hosting status: 0, hosting; 5, resource replacement; 10, hosting completed; -1, not hosted. 
                     * @param _hostingStatus Hosting status: 0, hosting; 5, resource replacement; 10, hosting completed; -1, not hosted. 
                     * 
                     */
                    void SetHostingStatus(const int64_t& _hostingStatus);

                    /**
                     * 判断参数 HostingStatus 是否已赋值
                     * @return HostingStatus 是否已赋值
                     * 
                     */
                    bool HostingStatusHasBeenSet() const;

                    /**
                     * 获取Hosting completion time.
                     * @return HostingCompleteTime Hosting completion time.
                     * 
                     */
                    std::string GetHostingCompleteTime() const;

                    /**
                     * 设置Hosting completion time.
                     * @param _hostingCompleteTime Hosting completion time.
                     * 
                     */
                    void SetHostingCompleteTime(const std::string& _hostingCompleteTime);

                    /**
                     * 判断参数 HostingCompleteTime 是否已赋值
                     * @return HostingCompleteTime 是否已赋值
                     * 
                     */
                    bool HostingCompleteTimeHasBeenSet() const;

                    /**
                     * 获取Manage the new certificate id.
                     * @return HostingRenewCertId Manage the new certificate id.
                     * 
                     */
                    std::string GetHostingRenewCertId() const;

                    /**
                     * 设置Manage the new certificate id.
                     * @param _hostingRenewCertId Manage the new certificate id.
                     * 
                     */
                    void SetHostingRenewCertId(const std::string& _hostingRenewCertId);

                    /**
                     * 判断参数 HostingRenewCertId 是否已赋值
                     * @return HostingRenewCertId 是否已赋值
                     * 
                     */
                    bool HostingRenewCertIdHasBeenSet() const;

                    /**
                     * 获取Existing renewal certificate id.
                     * @return HasRenewOrder Existing renewal certificate id.
                     * 
                     */
                    std::string GetHasRenewOrder() const;

                    /**
                     * 设置Existing renewal certificate id.
                     * @param _hasRenewOrder Existing renewal certificate id.
                     * 
                     */
                    void SetHasRenewOrder(const std::string& _hasRenewOrder);

                    /**
                     * 判断参数 HasRenewOrder 是否已赋值
                     * @return HasRenewOrder 是否已赋值
                     * 
                     */
                    bool HasRenewOrderHasBeenSet() const;

                    /**
                     * 获取Indicates whether the original certificate is deleted during reissue.
                     * @return ReplaceOriCertIsDelete Indicates whether the original certificate is deleted during reissue.
                     * 
                     */
                    bool GetReplaceOriCertIsDelete() const;

                    /**
                     * 设置Indicates whether the original certificate is deleted during reissue.
                     * @param _replaceOriCertIsDelete Indicates whether the original certificate is deleted during reissue.
                     * 
                     */
                    void SetReplaceOriCertIsDelete(const bool& _replaceOriCertIsDelete);

                    /**
                     * 判断参数 ReplaceOriCertIsDelete 是否已赋值
                     * @return ReplaceOriCertIsDelete 是否已赋值
                     * 
                     */
                    bool ReplaceOriCertIsDeleteHasBeenSet() const;

                    /**
                     * 获取Indicates whether it is about to expire. a certificate is about to expire if it will expire within 30 days.
                     * @return IsExpiring Indicates whether it is about to expire. a certificate is about to expire if it will expire within 30 days.
                     * 
                     */
                    bool GetIsExpiring() const;

                    /**
                     * 设置Indicates whether it is about to expire. a certificate is about to expire if it will expire within 30 days.
                     * @param _isExpiring Indicates whether it is about to expire. a certificate is about to expire if it will expire within 30 days.
                     * 
                     */
                    void SetIsExpiring(const bool& _isExpiring);

                    /**
                     * 判断参数 IsExpiring 是否已赋值
                     * @return IsExpiring 是否已赋值
                     * 
                     */
                    bool IsExpiringHasBeenSet() const;

                    /**
                     * 获取Add validation expiration date for DV certificate
                     * @return DVAuthDeadline Add validation expiration date for DV certificate
                     * 
                     */
                    std::string GetDVAuthDeadline() const;

                    /**
                     * 设置Add validation expiration date for DV certificate
                     * @param _dVAuthDeadline Add validation expiration date for DV certificate
                     * 
                     */
                    void SetDVAuthDeadline(const std::string& _dVAuthDeadline);

                    /**
                     * 判断参数 DVAuthDeadline 是否已赋值
                     * @return DVAuthDeadline 是否已赋值
                     * 
                     */
                    bool DVAuthDeadlineHasBeenSet() const;

                    /**
                     * 获取Domain verification passed time.
                     * @return ValidationPassedTime Domain verification passed time.
                     * 
                     */
                    std::string GetValidationPassedTime() const;

                    /**
                     * 设置Domain verification passed time.
                     * @param _validationPassedTime Domain verification passed time.
                     * 
                     */
                    void SetValidationPassedTime(const std::string& _validationPassedTime);

                    /**
                     * 判断参数 ValidationPassedTime 是否已赋值
                     * @return ValidationPassedTime 是否已赋值
                     * 
                     */
                    bool ValidationPassedTimeHasBeenSet() const;

                    /**
                     * 获取Multiple domain names associated with the certificate.
                     * @return CertSANs Multiple domain names associated with the certificate.
                     * 
                     */
                    std::vector<std::string> GetCertSANs() const;

                    /**
                     * 设置Multiple domain names associated with the certificate.
                     * @param _certSANs Multiple domain names associated with the certificate.
                     * 
                     */
                    void SetCertSANs(const std::vector<std::string>& _certSANs);

                    /**
                     * 判断参数 CertSANs 是否已赋值
                     * @return CertSANs 是否已赋值
                     * 
                     */
                    bool CertSANsHasBeenSet() const;

                    /**
                     * 获取Domain verification rejection information.
                     * @return AwaitingValidationMsg Domain verification rejection information.
                     * 
                     */
                    std::string GetAwaitingValidationMsg() const;

                    /**
                     * 设置Domain verification rejection information.
                     * @param _awaitingValidationMsg Domain verification rejection information.
                     * 
                     */
                    void SetAwaitingValidationMsg(const std::string& _awaitingValidationMsg);

                    /**
                     * 判断参数 AwaitingValidationMsg 是否已赋值
                     * @return AwaitingValidationMsg 是否已赋值
                     * 
                     */
                    bool AwaitingValidationMsgHasBeenSet() const;

                    /**
                     * 获取Whether to allow downloading.
                     * @return AllowDownload Whether to allow downloading.
                     * 
                     */
                    bool GetAllowDownload() const;

                    /**
                     * 设置Whether to allow downloading.
                     * @param _allowDownload Whether to allow downloading.
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
                     * 获取Whether all certificate domain names are managed and resolved by dnspod.
                     * @return IsDNSPODResolve Whether all certificate domain names are managed and resolved by dnspod.
                     * 
                     */
                    bool GetIsDNSPODResolve() const;

                    /**
                     * 设置Whether all certificate domain names are managed and resolved by dnspod.
                     * @param _isDNSPODResolve Whether all certificate domain names are managed and resolved by dnspod.
                     * 
                     */
                    void SetIsDNSPODResolve(const bool& _isDNSPODResolve);

                    /**
                     * 判断参数 IsDNSPODResolve 是否已赋值
                     * @return IsDNSPODResolve 是否已赋值
                     * 
                     */
                    bool IsDNSPODResolveHasBeenSet() const;

                    /**
                     * 获取Whether the certificate is purchased with benefit points.
                     * @return IsPackage Whether the certificate is purchased with benefit points.
                     * 
                     */
                    bool GetIsPackage() const;

                    /**
                     * 设置Whether the certificate is purchased with benefit points.
                     * @param _isPackage Whether the certificate is purchased with benefit points.
                     * 
                     */
                    void SetIsPackage(const bool& _isPackage);

                    /**
                     * 判断参数 IsPackage 是否已赋值
                     * @return IsPackage 是否已赋值
                     * 
                     */
                    bool IsPackageHasBeenSet() const;

                    /**
                     * 获取Whether there is a private key password.
                     * @return KeyPasswordCustomFlag Whether there is a private key password.
                     * 
                     */
                    bool GetKeyPasswordCustomFlag() const;

                    /**
                     * 设置Whether there is a private key password.
                     * @param _keyPasswordCustomFlag Whether there is a private key password.
                     * 
                     */
                    void SetKeyPasswordCustomFlag(const bool& _keyPasswordCustomFlag);

                    /**
                     * 判断参数 KeyPasswordCustomFlag 是否已赋值
                     * @return KeyPasswordCustomFlag 是否已赋值
                     * 
                     */
                    bool KeyPasswordCustomFlagHasBeenSet() const;

                    /**
                     * 获取Types of web servers supported for download: nginx, apache, iis, tomcat, jks, root, other.
                     * @return SupportDownloadType Types of web servers supported for download: nginx, apache, iis, tomcat, jks, root, other.
                     * 
                     */
                    SupportDownloadType GetSupportDownloadType() const;

                    /**
                     * 设置Types of web servers supported for download: nginx, apache, iis, tomcat, jks, root, other.
                     * @param _supportDownloadType Types of web servers supported for download: nginx, apache, iis, tomcat, jks, root, other.
                     * 
                     */
                    void SetSupportDownloadType(const SupportDownloadType& _supportDownloadType);

                    /**
                     * 判断参数 SupportDownloadType 是否已赋值
                     * @return SupportDownloadType 是否已赋值
                     * 
                     */
                    bool SupportDownloadTypeHasBeenSet() const;

                    /**
                     * 获取Certificate revocation completion time.
                     * @return CertRevokedTime Certificate revocation completion time.
                     * 
                     */
                    std::string GetCertRevokedTime() const;

                    /**
                     * 设置Certificate revocation completion time.
                     * @param _certRevokedTime Certificate revocation completion time.
                     * 
                     */
                    void SetCertRevokedTime(const std::string& _certRevokedTime);

                    /**
                     * 判断参数 CertRevokedTime 是否已赋值
                     * @return CertRevokedTime 是否已赋值
                     * 
                     */
                    bool CertRevokedTimeHasBeenSet() const;

                    /**
                     * 获取Hosted resource type list.
                     * @return HostingResourceTypes Hosted resource type list.
                     * 
                     */
                    std::vector<std::string> GetHostingResourceTypes() const;

                    /**
                     * 设置Hosted resource type list.
                     * @param _hostingResourceTypes Hosted resource type list.
                     * 
                     */
                    void SetHostingResourceTypes(const std::vector<std::string>& _hostingResourceTypes);

                    /**
                     * 判断参数 HostingResourceTypes 是否已赋值
                     * @return HostingResourceTypes 是否已赋值
                     * 
                     */
                    bool HostingResourceTypesHasBeenSet() const;

                    /**
                     * 获取Managed configuration information.
                     * @return HostingConfig Managed configuration information.
                     * 
                     */
                    HostingConfig GetHostingConfig() const;

                    /**
                     * 设置Managed configuration information.
                     * @param _hostingConfig Managed configuration information.
                     * 
                     */
                    void SetHostingConfig(const HostingConfig& _hostingConfig);

                    /**
                     * 判断参数 HostingConfig 是否已赋值
                     * @return HostingConfig 是否已赋值
                     * 
                     */
                    bool HostingConfigHasBeenSet() const;

                private:

                    /**
                     * User uin.
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * Project id.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Certificate source:.
trustasia.
upload.
wosign.
sheca.
                     */
                    std::string m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * Certificate package type:.
Null: user uploads a certificate (without package type),.
2: trustasia tls rsa ca,. 
3: securesite enhanced enterprise edition (ev pro),. 
4: securesite enhanced (ev). 
5: securesite enterprise professional edition (ov pro).
6: securesite enterprise (ov). 
7: securesite enterprise (ov) wildcard. 
8: geotrust enhanced (ev). 
9: geotrust enterprise (ov) cert. 
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
24: globalsign enhanced multiple domain name (ev) ssl certificate.
25: wotrus domain name cert.
26: wotrus domain name multiple domain name cert.
27: wotrus domain name wildcard cert.
28: wotrus enterprise cert.
29: wotrus enterprise multi - domain name certificate.
30: wotrus enterprise wildcard certificate.
31: wotrus enhanced certificate.
32: wotrus enhanced multi - domain name certificate.
33: wotrus - national cryptography domain - type certificate.
34: wotrus-national cryptography domain certificate (multiple domain names).
35: wotrus-national cryptography domain certificate (wildcard).
37: wotrus-national cryptography enterprise certificate.
38: wotrus-national cryptography enterprise certificate (multiple domain names).
39: wotrus-national cryptography enterprise certificate (wildcard).
40: wotrus - enhanced national cryptography certificate.
41: wotrus - enhanced national cryptography certificate (multiple domain names).
42: trustasia - domain name type certificate (wildcard multiple domain names).
43: DNSPod - enterprise (ov) ssl certificate.
44: DNSPod - enterprise (ov) wildcard ssl certificate.
45: DNSPod - enterprise (ov) multiple domain names ssl certificate.
46: DNSPod - enhanced (ev) ssl certificate.
47: DNSPod - enhanced (ev) multiple domain names ssl certificate.
48: DNSPod - domain name-based (dv) ssl certificate.
49: DNSPod - domain name-based (dv) wildcard ssl certificate.
50: DNSPod - domain name-based (dv) multiple domain names ssl certificate.
51: DNSPod (national cryptography) - enterprise (ov) ssl certificate.
52: DNSPod (national cryptography) - enterprise (ov) wildcard ssl certificate.
53: DNSPod (national cryptography) - enterprise (ov) multiple domain names ssl certificate.
54: DNSPod (national cryptography) - domain name-based (dv) ssl certificate.
55: DNSPod (national cryptography) - domain name-based (dv) wildcard ssl certificate.
56: DNSPod (national cryptography) - domain name-based (dv) multiple domain names ssl certificate.
57: securesite enterprise professional edition multiple domain names (ov pro).
58: securesite enterprise multiple domain names (ov).
59: securesite enhanced professional edition multiple domain names (ev pro).
60: securesite enhanced multiple domain names (ev).
61: geotrust enhanced multiple domain names (ev).
75: securesite enterprise (ov).
76: securesite enterprise (ov) wildcard.
77: securesite enhanced (ev).
78: geotrust enterprise (ov).
79: geotrust enterprise wildcard (ov).
80: geotrust enhanced (ev).
81: globalsign enterprise (ov) ssl certificate.
82: globalsign enterprise wildcard (ov) ssl certificate.
83: trustasia c1 dv free.
85: globalsign enhanced (ev) ssl certificate.
88: globalsign enterprise wildcard multiple domain names (ov) ssl certificate.
89: globalsign enterprise multiple domain names (ov) ssl certificate.
90: globalsign enhanced multiple domain names (ev) ssl certificate.
91: geotrust enhanced multiple domain names (ev).
92: securesite enterprise pro multiple domain names (ov pro).
93: securesite enterprise multiple domain names (ov).
94: securesite enhanced pro multiple domain names (ev pro).
95: securesite enhanced multiple domain names (ev).
96: securesite ev pro.
97: securesite enterprise professional edition (ov pro).
98: cfca enterprise (ov) ssl certificate.
99: cfca enterprise ov ssl certificate for multiple domain names.
100: cfca ov wildcard ssl certificate.
101: cfca enhanced (ev) ssl certificate.
                     */
                    std::string m_packageType;
                    bool m_packageTypeHasBeenSet;

                    /**
                     * Certificate type. ca = client certificate; svr = server certificate.
                     */
                    std::string m_certificateType;
                    bool m_certificateTypeHasBeenSet;

                    /**
                     * Certificate product name.
                     */
                    std::string m_productZhName;
                    bool m_productZhNameHasBeenSet;

                    /**
                     * Primary domain name.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Remark name.
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * Certificate status: 0 = under review, 1 = approved, 2 = review failed, 3 = expired, 4 = dns record added automatically, 5 = enterprise certificate, pending documentation submission, 6 = order cancellation in progress, 7 = canceled, 8 = documents submitted, pending upload of confirmation letter, 9 = certificate revocation in progress, 10 = revoked, 11 = reissue in progress, 12 = pending upload of revocation confirmation letter, 13 = free certificate pending documentation submission, 14 = certificate refunded, 15 = certificate migration in progress.
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Certificate extended information.
                     */
                    CertificateExtra m_certificateExtra;
                    bool m_certificateExtraHasBeenSet;

                    /**
                     * Vulnerability scanning status: INACTIVE = not enabled, ACTIVE = enabled.
                     */
                    std::string m_vulnerabilityStatus;
                    bool m_vulnerabilityStatusHasBeenSet;

                    /**
                     * Status information.
                     */
                    std::string m_statusMsg;
                    bool m_statusMsgHasBeenSet;

                    /**
                     * Validation type: DNS_AUTO = automatic dns validation, DNS = manual dns validation, FILE = file verification, DNS_PROXY = dns proxy validation, FILE_PROXY = file proxy verification.
                     */
                    std::string m_verifyType;
                    bool m_verifyTypeHasBeenSet;

                    /**
                     * Certificate validation time.
                     */
                    std::string m_certBeginTime;
                    bool m_certBeginTimeHasBeenSet;

                    /**
                     * Certificate expiration time.
                     */
                    std::string m_certEndTime;
                    bool m_certEndTimeHasBeenSet;

                    /**
                     * Certificate validity period (month).
                     */
                    std::string m_validityPeriod;
                    bool m_validityPeriodHasBeenSet;

                    /**
                     * Creation time.
                     */
                    std::string m_insertTime;
                    bool m_insertTimeHasBeenSet;

                    /**
                     * Certificate id.
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                    /**
                     * Multiple domain names contained in the certificate (including the primary domain name).
                     */
                    std::vector<std::string> m_subjectAltName;
                    bool m_subjectAltNameHasBeenSet;

                    /**
                     * Certificate type name.
                     */
                    std::string m_packageTypeName;
                    bool m_packageTypeNameHasBeenSet;

                    /**
                     * Status name.
                     */
                    std::string m_statusName;
                    bool m_statusNameHasBeenSet;

                    /**
                     * Specifies whether the customer is a vip customer. true indicates yes and false indicates no.
                     */
                    bool m_isVip;
                    bool m_isVipHasBeenSet;

                    /**
                     * Specifies whether it is a dv version certificate. true indicates yes and false indicates no.
                     */
                    bool m_isDv;
                    bool m_isDvHasBeenSet;

                    /**
                     * Specifies whether it is a wildcard domain name certificate. true indicates yes and false indicates no.
                     */
                    bool m_isWildcard;
                    bool m_isWildcardHasBeenSet;

                    /**
                     * Whether the vulnerability scanning feature is enabled.
                     */
                    bool m_isVulnerability;
                    bool m_isVulnerabilityHasBeenSet;

                    /**
                     * Whether it is renewable.
                     */
                    bool m_renewAble;
                    bool m_renewAbleHasBeenSet;

                    /**
                     * Project information.
                     */
                    ProjectInfo m_projectInfo;
                    bool m_projectInfoHasBeenSet;

                    /**
                     * Associated cloud resources are temporarily unavailable.
                     */
                    std::vector<std::string> m_boundResource;
                    bool m_boundResourceHasBeenSet;

                    /**
                     * Whether it can be deployed.
                     */
                    bool m_deployable;
                    bool m_deployableHasBeenSet;

                    /**
                     * Tag list.
                     */
                    std::vector<Tags> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Whether expiration notice has been ignored.
                     */
                    bool m_isIgnore;
                    bool m_isIgnoreHasBeenSet;

                    /**
                     * Whether it is a China SM certificate.
                     */
                    bool m_isSM;
                    bool m_isSMHasBeenSet;

                    /**
                     * Certificate algorithm.
                     */
                    std::string m_encryptAlgorithm;
                    bool m_encryptAlgorithmHasBeenSet;

                    /**
                     * Encryption algorithm for upload ca certificate.
                     */
                    std::vector<std::string> m_cAEncryptAlgorithms;
                    bool m_cAEncryptAlgorithmsHasBeenSet;

                    /**
                     * Expiration time for upload ca certificate.
                     */
                    std::vector<std::string> m_cAEndTimes;
                    bool m_cAEndTimesHasBeenSet;

                    /**
                     * Common name of the upload ca certificate.
                     */
                    std::vector<std::string> m_cACommonNames;
                    bool m_cACommonNamesHasBeenSet;

                    /**
                     * Certificate prereview information.
                     */
                    PreAuditInfo m_preAuditInfo;
                    bool m_preAuditInfoHasBeenSet;

                    /**
                     * Whether to auto-renew.
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * Hosting status: 0, hosting; 5, resource replacement; 10, hosting completed; -1, not hosted. 
                     */
                    int64_t m_hostingStatus;
                    bool m_hostingStatusHasBeenSet;

                    /**
                     * Hosting completion time.
                     */
                    std::string m_hostingCompleteTime;
                    bool m_hostingCompleteTimeHasBeenSet;

                    /**
                     * Manage the new certificate id.
                     */
                    std::string m_hostingRenewCertId;
                    bool m_hostingRenewCertIdHasBeenSet;

                    /**
                     * Existing renewal certificate id.
                     */
                    std::string m_hasRenewOrder;
                    bool m_hasRenewOrderHasBeenSet;

                    /**
                     * Indicates whether the original certificate is deleted during reissue.
                     */
                    bool m_replaceOriCertIsDelete;
                    bool m_replaceOriCertIsDeleteHasBeenSet;

                    /**
                     * Indicates whether it is about to expire. a certificate is about to expire if it will expire within 30 days.
                     */
                    bool m_isExpiring;
                    bool m_isExpiringHasBeenSet;

                    /**
                     * Add validation expiration date for DV certificate
                     */
                    std::string m_dVAuthDeadline;
                    bool m_dVAuthDeadlineHasBeenSet;

                    /**
                     * Domain verification passed time.
                     */
                    std::string m_validationPassedTime;
                    bool m_validationPassedTimeHasBeenSet;

                    /**
                     * Multiple domain names associated with the certificate.
                     */
                    std::vector<std::string> m_certSANs;
                    bool m_certSANsHasBeenSet;

                    /**
                     * Domain verification rejection information.
                     */
                    std::string m_awaitingValidationMsg;
                    bool m_awaitingValidationMsgHasBeenSet;

                    /**
                     * Whether to allow downloading.
                     */
                    bool m_allowDownload;
                    bool m_allowDownloadHasBeenSet;

                    /**
                     * Whether all certificate domain names are managed and resolved by dnspod.
                     */
                    bool m_isDNSPODResolve;
                    bool m_isDNSPODResolveHasBeenSet;

                    /**
                     * Whether the certificate is purchased with benefit points.
                     */
                    bool m_isPackage;
                    bool m_isPackageHasBeenSet;

                    /**
                     * Whether there is a private key password.
                     */
                    bool m_keyPasswordCustomFlag;
                    bool m_keyPasswordCustomFlagHasBeenSet;

                    /**
                     * Types of web servers supported for download: nginx, apache, iis, tomcat, jks, root, other.
                     */
                    SupportDownloadType m_supportDownloadType;
                    bool m_supportDownloadTypeHasBeenSet;

                    /**
                     * Certificate revocation completion time.
                     */
                    std::string m_certRevokedTime;
                    bool m_certRevokedTimeHasBeenSet;

                    /**
                     * Hosted resource type list.
                     */
                    std::vector<std::string> m_hostingResourceTypes;
                    bool m_hostingResourceTypesHasBeenSet;

                    /**
                     * Managed configuration information.
                     */
                    HostingConfig m_hostingConfig;
                    bool m_hostingConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_CERTIFICATES_H_
