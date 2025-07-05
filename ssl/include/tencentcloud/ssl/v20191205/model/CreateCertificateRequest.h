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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_CREATECERTIFICATEREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_CREATECERTIFICATEREQUEST_H_

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
                * CreateCertificate request structure.
                */
                class CreateCertificateRequest : public AbstractModel
                {
                public:
                    CreateCertificateRequest();
                    ~CreateCertificateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Certificate product id. `3`: securesite ev pro; `4`: securesite ev; `5`: securesite ov pro; `6`: securesite ov; `7`: securesite ov wildcard; `8`: geotrust ev; `9`: geotrust ov; `10`: geotrust ov wildcard; `11`: trustasia dv multi-domain; `12`: trustasia dv wildcard; `13`: trustasia ov wildcard d3; `14`: trustasia ov d3; `15`: trustasia ov multi-domain d3; `16`: trustasia ev d3; `17`: trustasia ev multi-domain d3; `18`: globalsign ov; `19`: globalsign ov wildcard; `20`: globalsign ev; `21`: trustasia ov wildcard multi-domain d3; `22`: globalsign ov multi-domain; `23`: globalsign ov wildcard multi-domain; `24`: globalsign ev multi-domain; `25`: wotrus dv; `26`: wotrus dv multi-domain; `27`: wotrus dv wildcard; `28`: wotrus ov; `29`: wotrus ov multi-domain; `30`: wotrus ov wildcard; `31`: wotrus ev; `32`: wotrus ev multi-domain; `33`: DNSPod sm2 dv; `34`: DNSPod sm2 dv multi-domain; `35`: DNSPod sm2 dv wildcard; `37`: DNSPod sm2 ov; `38`: DNSPod sm2 ov multi-domain; `39`: DNSPod sm2 ov wildcard; `40`: DNSPod sm2 ev; `41`: DNSPod sm2 ev multi-domain; `42`: trustasia dv wildcard multi-domain; `43`: dnspod-ov ssl certificate; `44`: dnspod-ov wildcard ssl certificate; `45`: dnspod-ov multi-domain ssl certificate; `46`: dnspod-ev ssl certificate; `47`: dnspod-ev multi-domain ssl certificate; `48`: dnspod-dv ssl certificate; `49`: dnspod-dv wildcard ssl certificate; `50`: dnspod-dv multi-domain ssl certificate; `51`: DNSPod (sm2)-ov ssl certificate; `52`: DNSPod (sm2)-ov wildcard ssl certificate; `53`: DNSPod (sm2)-ov multi-domain ssl certificate; `54`: DNSPod (sm2)-dv ssl certificate; `55`: DNSPod (sm2)-dv wildcard ssl certificate; `56`: DNSPod (sm2)-dv multi-domain ssl certificate; `57`: securesite ov pro multi-domain; `58`: securesite ov multi-domain; `59`: securesite ev pro multi-domain; `60`: securesite ev multi-domain; `61`: geotrust ev multi-domain.
                     * @return ProductId Certificate product id. `3`: securesite ev pro; `4`: securesite ev; `5`: securesite ov pro; `6`: securesite ov; `7`: securesite ov wildcard; `8`: geotrust ev; `9`: geotrust ov; `10`: geotrust ov wildcard; `11`: trustasia dv multi-domain; `12`: trustasia dv wildcard; `13`: trustasia ov wildcard d3; `14`: trustasia ov d3; `15`: trustasia ov multi-domain d3; `16`: trustasia ev d3; `17`: trustasia ev multi-domain d3; `18`: globalsign ov; `19`: globalsign ov wildcard; `20`: globalsign ev; `21`: trustasia ov wildcard multi-domain d3; `22`: globalsign ov multi-domain; `23`: globalsign ov wildcard multi-domain; `24`: globalsign ev multi-domain; `25`: wotrus dv; `26`: wotrus dv multi-domain; `27`: wotrus dv wildcard; `28`: wotrus ov; `29`: wotrus ov multi-domain; `30`: wotrus ov wildcard; `31`: wotrus ev; `32`: wotrus ev multi-domain; `33`: DNSPod sm2 dv; `34`: DNSPod sm2 dv multi-domain; `35`: DNSPod sm2 dv wildcard; `37`: DNSPod sm2 ov; `38`: DNSPod sm2 ov multi-domain; `39`: DNSPod sm2 ov wildcard; `40`: DNSPod sm2 ev; `41`: DNSPod sm2 ev multi-domain; `42`: trustasia dv wildcard multi-domain; `43`: dnspod-ov ssl certificate; `44`: dnspod-ov wildcard ssl certificate; `45`: dnspod-ov multi-domain ssl certificate; `46`: dnspod-ev ssl certificate; `47`: dnspod-ev multi-domain ssl certificate; `48`: dnspod-dv ssl certificate; `49`: dnspod-dv wildcard ssl certificate; `50`: dnspod-dv multi-domain ssl certificate; `51`: DNSPod (sm2)-ov ssl certificate; `52`: DNSPod (sm2)-ov wildcard ssl certificate; `53`: DNSPod (sm2)-ov multi-domain ssl certificate; `54`: DNSPod (sm2)-dv ssl certificate; `55`: DNSPod (sm2)-dv wildcard ssl certificate; `56`: DNSPod (sm2)-dv multi-domain ssl certificate; `57`: securesite ov pro multi-domain; `58`: securesite ov multi-domain; `59`: securesite ev pro multi-domain; `60`: securesite ev multi-domain; `61`: geotrust ev multi-domain.
                     * 
                     */
                    int64_t GetProductId() const;

                    /**
                     * 设置Certificate product id. `3`: securesite ev pro; `4`: securesite ev; `5`: securesite ov pro; `6`: securesite ov; `7`: securesite ov wildcard; `8`: geotrust ev; `9`: geotrust ov; `10`: geotrust ov wildcard; `11`: trustasia dv multi-domain; `12`: trustasia dv wildcard; `13`: trustasia ov wildcard d3; `14`: trustasia ov d3; `15`: trustasia ov multi-domain d3; `16`: trustasia ev d3; `17`: trustasia ev multi-domain d3; `18`: globalsign ov; `19`: globalsign ov wildcard; `20`: globalsign ev; `21`: trustasia ov wildcard multi-domain d3; `22`: globalsign ov multi-domain; `23`: globalsign ov wildcard multi-domain; `24`: globalsign ev multi-domain; `25`: wotrus dv; `26`: wotrus dv multi-domain; `27`: wotrus dv wildcard; `28`: wotrus ov; `29`: wotrus ov multi-domain; `30`: wotrus ov wildcard; `31`: wotrus ev; `32`: wotrus ev multi-domain; `33`: DNSPod sm2 dv; `34`: DNSPod sm2 dv multi-domain; `35`: DNSPod sm2 dv wildcard; `37`: DNSPod sm2 ov; `38`: DNSPod sm2 ov multi-domain; `39`: DNSPod sm2 ov wildcard; `40`: DNSPod sm2 ev; `41`: DNSPod sm2 ev multi-domain; `42`: trustasia dv wildcard multi-domain; `43`: dnspod-ov ssl certificate; `44`: dnspod-ov wildcard ssl certificate; `45`: dnspod-ov multi-domain ssl certificate; `46`: dnspod-ev ssl certificate; `47`: dnspod-ev multi-domain ssl certificate; `48`: dnspod-dv ssl certificate; `49`: dnspod-dv wildcard ssl certificate; `50`: dnspod-dv multi-domain ssl certificate; `51`: DNSPod (sm2)-ov ssl certificate; `52`: DNSPod (sm2)-ov wildcard ssl certificate; `53`: DNSPod (sm2)-ov multi-domain ssl certificate; `54`: DNSPod (sm2)-dv ssl certificate; `55`: DNSPod (sm2)-dv wildcard ssl certificate; `56`: DNSPod (sm2)-dv multi-domain ssl certificate; `57`: securesite ov pro multi-domain; `58`: securesite ov multi-domain; `59`: securesite ev pro multi-domain; `60`: securesite ev multi-domain; `61`: geotrust ev multi-domain.
                     * @param _productId Certificate product id. `3`: securesite ev pro; `4`: securesite ev; `5`: securesite ov pro; `6`: securesite ov; `7`: securesite ov wildcard; `8`: geotrust ev; `9`: geotrust ov; `10`: geotrust ov wildcard; `11`: trustasia dv multi-domain; `12`: trustasia dv wildcard; `13`: trustasia ov wildcard d3; `14`: trustasia ov d3; `15`: trustasia ov multi-domain d3; `16`: trustasia ev d3; `17`: trustasia ev multi-domain d3; `18`: globalsign ov; `19`: globalsign ov wildcard; `20`: globalsign ev; `21`: trustasia ov wildcard multi-domain d3; `22`: globalsign ov multi-domain; `23`: globalsign ov wildcard multi-domain; `24`: globalsign ev multi-domain; `25`: wotrus dv; `26`: wotrus dv multi-domain; `27`: wotrus dv wildcard; `28`: wotrus ov; `29`: wotrus ov multi-domain; `30`: wotrus ov wildcard; `31`: wotrus ev; `32`: wotrus ev multi-domain; `33`: DNSPod sm2 dv; `34`: DNSPod sm2 dv multi-domain; `35`: DNSPod sm2 dv wildcard; `37`: DNSPod sm2 ov; `38`: DNSPod sm2 ov multi-domain; `39`: DNSPod sm2 ov wildcard; `40`: DNSPod sm2 ev; `41`: DNSPod sm2 ev multi-domain; `42`: trustasia dv wildcard multi-domain; `43`: dnspod-ov ssl certificate; `44`: dnspod-ov wildcard ssl certificate; `45`: dnspod-ov multi-domain ssl certificate; `46`: dnspod-ev ssl certificate; `47`: dnspod-ev multi-domain ssl certificate; `48`: dnspod-dv ssl certificate; `49`: dnspod-dv wildcard ssl certificate; `50`: dnspod-dv multi-domain ssl certificate; `51`: DNSPod (sm2)-ov ssl certificate; `52`: DNSPod (sm2)-ov wildcard ssl certificate; `53`: DNSPod (sm2)-ov multi-domain ssl certificate; `54`: DNSPod (sm2)-dv ssl certificate; `55`: DNSPod (sm2)-dv wildcard ssl certificate; `56`: DNSPod (sm2)-dv multi-domain ssl certificate; `57`: securesite ov pro multi-domain; `58`: securesite ov multi-domain; `59`: securesite ev pro multi-domain; `60`: securesite ev multi-domain; `61`: geotrust ev multi-domain.
                     * 
                     */
                    void SetProductId(const int64_t& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取Number of domains associated with the certificate
                     * @return DomainNum Number of domains associated with the certificate
                     * 
                     */
                    int64_t GetDomainNum() const;

                    /**
                     * 设置Number of domains associated with the certificate
                     * @param _domainNum Number of domains associated with the certificate
                     * 
                     */
                    void SetDomainNum(const int64_t& _domainNum);

                    /**
                     * 判断参数 DomainNum 是否已赋值
                     * @return DomainNum 是否已赋值
                     * 
                     */
                    bool DomainNumHasBeenSet() const;

                    /**
                     * 获取Certificate validity period.
                     * @return TimeSpan Certificate validity period.
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置Certificate validity period.
                     * @param _timeSpan Certificate validity period.
                     * 
                     */
                    void SetTimeSpan(const int64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取Whether to automatically use vouchers: 1 for yes, 0 for no; the default is 1.
                     * @return AutoVoucher Whether to automatically use vouchers: 1 for yes, 0 for no; the default is 1.
                     * 
                     */
                    int64_t GetAutoVoucher() const;

                    /**
                     * 设置Whether to automatically use vouchers: 1 for yes, 0 for no; the default is 1.
                     * @param _autoVoucher Whether to automatically use vouchers: 1 for yes, 0 for no; the default is 1.
                     * 
                     */
                    void SetAutoVoucher(const int64_t& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     * 
                     */
                    bool AutoVoucherHasBeenSet() const;

                    /**
                     * 获取Tag, generate tags for certificates.
                     * @return Tags Tag, generate tags for certificates.
                     * 
                     */
                    std::vector<Tags> GetTags() const;

                    /**
                     * 设置Tag, generate tags for certificates.
                     * @param _tags Tag, generate tags for certificates.
                     * 
                     */
                    void SetTags(const std::vector<Tags>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * Certificate product id. `3`: securesite ev pro; `4`: securesite ev; `5`: securesite ov pro; `6`: securesite ov; `7`: securesite ov wildcard; `8`: geotrust ev; `9`: geotrust ov; `10`: geotrust ov wildcard; `11`: trustasia dv multi-domain; `12`: trustasia dv wildcard; `13`: trustasia ov wildcard d3; `14`: trustasia ov d3; `15`: trustasia ov multi-domain d3; `16`: trustasia ev d3; `17`: trustasia ev multi-domain d3; `18`: globalsign ov; `19`: globalsign ov wildcard; `20`: globalsign ev; `21`: trustasia ov wildcard multi-domain d3; `22`: globalsign ov multi-domain; `23`: globalsign ov wildcard multi-domain; `24`: globalsign ev multi-domain; `25`: wotrus dv; `26`: wotrus dv multi-domain; `27`: wotrus dv wildcard; `28`: wotrus ov; `29`: wotrus ov multi-domain; `30`: wotrus ov wildcard; `31`: wotrus ev; `32`: wotrus ev multi-domain; `33`: DNSPod sm2 dv; `34`: DNSPod sm2 dv multi-domain; `35`: DNSPod sm2 dv wildcard; `37`: DNSPod sm2 ov; `38`: DNSPod sm2 ov multi-domain; `39`: DNSPod sm2 ov wildcard; `40`: DNSPod sm2 ev; `41`: DNSPod sm2 ev multi-domain; `42`: trustasia dv wildcard multi-domain; `43`: dnspod-ov ssl certificate; `44`: dnspod-ov wildcard ssl certificate; `45`: dnspod-ov multi-domain ssl certificate; `46`: dnspod-ev ssl certificate; `47`: dnspod-ev multi-domain ssl certificate; `48`: dnspod-dv ssl certificate; `49`: dnspod-dv wildcard ssl certificate; `50`: dnspod-dv multi-domain ssl certificate; `51`: DNSPod (sm2)-ov ssl certificate; `52`: DNSPod (sm2)-ov wildcard ssl certificate; `53`: DNSPod (sm2)-ov multi-domain ssl certificate; `54`: DNSPod (sm2)-dv ssl certificate; `55`: DNSPod (sm2)-dv wildcard ssl certificate; `56`: DNSPod (sm2)-dv multi-domain ssl certificate; `57`: securesite ov pro multi-domain; `58`: securesite ov multi-domain; `59`: securesite ev pro multi-domain; `60`: securesite ev multi-domain; `61`: geotrust ev multi-domain.
                     */
                    int64_t m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * Number of domains associated with the certificate
                     */
                    int64_t m_domainNum;
                    bool m_domainNumHasBeenSet;

                    /**
                     * Certificate validity period.
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * Whether to automatically use vouchers: 1 for yes, 0 for no; the default is 1.
                     */
                    int64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * Tag, generate tags for certificates.
                     */
                    std::vector<Tags> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_CREATECERTIFICATEREQUEST_H_
