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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_OWNERSHIPVERIFICATION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_OWNERSHIPVERIFICATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/DnsVerification.h>
#include <tencentcloud/teo/v20220901/model/FileVerification.h>
#include <tencentcloud/teo/v20220901/model/NsVerification.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Information of domain name ownership verification.
                */
                class OwnershipVerification : public AbstractModel
                {
                public:
                    OwnershipVerification();
                    ~OwnershipVerification() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CNAME, when there is no domain name access, the information required for DNS resolution verification is used. For details, refer to [Site/Domain Ownership Verification
](https://intl.cloud.tencent.com/document/product/1552/70789?from_cn_redirect=1#7af6ecf8-afca-4e35-8811-b5797ed1bde5).
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @return DnsVerification CNAME, when there is no domain name access, the information required for DNS resolution verification is used. For details, refer to [Site/Domain Ownership Verification
](https://intl.cloud.tencent.com/document/product/1552/70789?from_cn_redirect=1#7af6ecf8-afca-4e35-8811-b5797ed1bde5).
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    DnsVerification GetDnsVerification() const;

                    /**
                     * 设置CNAME, when there is no domain name access, the information required for DNS resolution verification is used. For details, refer to [Site/Domain Ownership Verification
](https://intl.cloud.tencent.com/document/product/1552/70789?from_cn_redirect=1#7af6ecf8-afca-4e35-8811-b5797ed1bde5).
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @param _dnsVerification CNAME, when there is no domain name access, the information required for DNS resolution verification is used. For details, refer to [Site/Domain Ownership Verification
](https://intl.cloud.tencent.com/document/product/1552/70789?from_cn_redirect=1#7af6ecf8-afca-4e35-8811-b5797ed1bde5).
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetDnsVerification(const DnsVerification& _dnsVerification);

                    /**
                     * 判断参数 DnsVerification 是否已赋值
                     * @return DnsVerification 是否已赋值
                     * 
                     */
                    bool DnsVerificationHasBeenSet() const;

                    /**
                     * 获取CNAME, when there is no domain name access, the information required for file verification is used. For details, refer to [Site/Domain Ownership Verification
](https://intl.cloud.tencent.com/document/product/1552/70789?from_cn_redirect=1#7af6ecf8-afca-4e35-8811-b5797ed1bde5).
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @return FileVerification CNAME, when there is no domain name access, the information required for file verification is used. For details, refer to [Site/Domain Ownership Verification
](https://intl.cloud.tencent.com/document/product/1552/70789?from_cn_redirect=1#7af6ecf8-afca-4e35-8811-b5797ed1bde5).
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    FileVerification GetFileVerification() const;

                    /**
                     * 设置CNAME, when there is no domain name access, the information required for file verification is used. For details, refer to [Site/Domain Ownership Verification
](https://intl.cloud.tencent.com/document/product/1552/70789?from_cn_redirect=1#7af6ecf8-afca-4e35-8811-b5797ed1bde5).
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @param _fileVerification CNAME, when there is no domain name access, the information required for file verification is used. For details, refer to [Site/Domain Ownership Verification
](https://intl.cloud.tencent.com/document/product/1552/70789?from_cn_redirect=1#7af6ecf8-afca-4e35-8811-b5797ed1bde5).
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetFileVerification(const FileVerification& _fileVerification);

                    /**
                     * 判断参数 FileVerification 是否已赋值
                     * @return FileVerification 是否已赋值
                     * 
                     */
                    bool FileVerificationHasBeenSet() const;

                    /**
                     * 获取u200cInformation required for switching DNS servers. It's applicable to sites connected via NSs. For details, see [Modifying DNS Server](https://intl.cloud.tencent.com/document/product/1552/90452?from_cn_redirect=1).
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return NsVerification u200cInformation required for switching DNS servers. It's applicable to sites connected via NSs. For details, see [Modifying DNS Server](https://intl.cloud.tencent.com/document/product/1552/90452?from_cn_redirect=1).
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    NsVerification GetNsVerification() const;

                    /**
                     * 设置u200cInformation required for switching DNS servers. It's applicable to sites connected via NSs. For details, see [Modifying DNS Server](https://intl.cloud.tencent.com/document/product/1552/90452?from_cn_redirect=1).
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @param _nsVerification u200cInformation required for switching DNS servers. It's applicable to sites connected via NSs. For details, see [Modifying DNS Server](https://intl.cloud.tencent.com/document/product/1552/90452?from_cn_redirect=1).
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNsVerification(const NsVerification& _nsVerification);

                    /**
                     * 判断参数 NsVerification 是否已赋值
                     * @return NsVerification 是否已赋值
                     * 
                     */
                    bool NsVerificationHasBeenSet() const;

                private:

                    /**
                     * CNAME, when there is no domain name access, the information required for DNS resolution verification is used. For details, refer to [Site/Domain Ownership Verification
](https://intl.cloud.tencent.com/document/product/1552/70789?from_cn_redirect=1#7af6ecf8-afca-4e35-8811-b5797ed1bde5).
Note: This field may return null, which indicates a failure to obtain a valid value.
                     */
                    DnsVerification m_dnsVerification;
                    bool m_dnsVerificationHasBeenSet;

                    /**
                     * CNAME, when there is no domain name access, the information required for file verification is used. For details, refer to [Site/Domain Ownership Verification
](https://intl.cloud.tencent.com/document/product/1552/70789?from_cn_redirect=1#7af6ecf8-afca-4e35-8811-b5797ed1bde5).
Note: This field may return null, which indicates a failure to obtain a valid value.
                     */
                    FileVerification m_fileVerification;
                    bool m_fileVerificationHasBeenSet;

                    /**
                     * u200cInformation required for switching DNS servers. It's applicable to sites connected via NSs. For details, see [Modifying DNS Server](https://intl.cloud.tencent.com/document/product/1552/90452?from_cn_redirect=1).
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    NsVerification m_nsVerification;
                    bool m_nsVerificationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_OWNERSHIPVERIFICATION_H_
