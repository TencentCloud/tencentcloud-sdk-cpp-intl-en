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
                * This structure represents the content used to verify user ownership of a site domain name in various scenarios and modes.
                */
                class OwnershipVerification : public AbstractModel
                {
                public:
                    OwnershipVerification();
                    ~OwnershipVerification() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Information required for CNAME and domainless access when using DNS resolution verification. For details, see [Site/Domain Ownership Verification].
](https://www.tencentcloud.com/document/product/1552/70789?from_cn_redirect=1#7af6ecf8-afca-4e35-8811-b5797ed1bde5).
                     * @return DnsVerification Information required for CNAME and domainless access when using DNS resolution verification. For details, see [Site/Domain Ownership Verification].
](https://www.tencentcloud.com/document/product/1552/70789?from_cn_redirect=1#7af6ecf8-afca-4e35-8811-b5797ed1bde5).
                     * 
                     */
                    DnsVerification GetDnsVerification() const;

                    /**
                     * 设置Information required for CNAME and domainless access when using DNS resolution verification. For details, see [Site/Domain Ownership Verification].
](https://www.tencentcloud.com/document/product/1552/70789?from_cn_redirect=1#7af6ecf8-afca-4e35-8811-b5797ed1bde5).
                     * @param _dnsVerification Information required for CNAME and domainless access when using DNS resolution verification. For details, see [Site/Domain Ownership Verification].
](https://www.tencentcloud.com/document/product/1552/70789?from_cn_redirect=1#7af6ecf8-afca-4e35-8811-b5797ed1bde5).
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
                     * 获取CNAME, when there is no domain name access, the information required for file verification is used. For details, see [Site/Domain Ownership Verification
](https://www.tencentcloud.com/document/product/1552/70789?from_cn_redirect=1#7af6ecf8-afca-4e35-8811-b5797ed1bde5).
                     * @return FileVerification CNAME, when there is no domain name access, the information required for file verification is used. For details, see [Site/Domain Ownership Verification
](https://www.tencentcloud.com/document/product/1552/70789?from_cn_redirect=1#7af6ecf8-afca-4e35-8811-b5797ed1bde5).
                     * 
                     */
                    FileVerification GetFileVerification() const;

                    /**
                     * 设置CNAME, when there is no domain name access, the information required for file verification is used. For details, see [Site/Domain Ownership Verification
](https://www.tencentcloud.com/document/product/1552/70789?from_cn_redirect=1#7af6ecf8-afca-4e35-8811-b5797ed1bde5).
                     * @param _fileVerification CNAME, when there is no domain name access, the information required for file verification is used. For details, see [Site/Domain Ownership Verification
](https://www.tencentcloud.com/document/product/1552/70789?from_cn_redirect=1#7af6ecf8-afca-4e35-8811-b5797ed1bde5).
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
                     * 获取Information required for access via NS and switching DNS servers. For details, see [Modify DNS Server](https://www.tencentcloud.com/document/product/1552/90452?from_cn_redirect=1).
                     * @return NsVerification Information required for access via NS and switching DNS servers. For details, see [Modify DNS Server](https://www.tencentcloud.com/document/product/1552/90452?from_cn_redirect=1).
                     * 
                     */
                    NsVerification GetNsVerification() const;

                    /**
                     * 设置Information required for access via NS and switching DNS servers. For details, see [Modify DNS Server](https://www.tencentcloud.com/document/product/1552/90452?from_cn_redirect=1).
                     * @param _nsVerification Information required for access via NS and switching DNS servers. For details, see [Modify DNS Server](https://www.tencentcloud.com/document/product/1552/90452?from_cn_redirect=1).
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
                     * Information required for CNAME and domainless access when using DNS resolution verification. For details, see [Site/Domain Ownership Verification].
](https://www.tencentcloud.com/document/product/1552/70789?from_cn_redirect=1#7af6ecf8-afca-4e35-8811-b5797ed1bde5).
                     */
                    DnsVerification m_dnsVerification;
                    bool m_dnsVerificationHasBeenSet;

                    /**
                     * CNAME, when there is no domain name access, the information required for file verification is used. For details, see [Site/Domain Ownership Verification
](https://www.tencentcloud.com/document/product/1552/70789?from_cn_redirect=1#7af6ecf8-afca-4e35-8811-b5797ed1bde5).
                     */
                    FileVerification m_fileVerification;
                    bool m_fileVerificationHasBeenSet;

                    /**
                     * Information required for access via NS and switching DNS servers. For details, see [Modify DNS Server](https://www.tencentcloud.com/document/product/1552/90452?from_cn_redirect=1).
                     */
                    NsVerification m_nsVerification;
                    bool m_nsVerificationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_OWNERSHIPVERIFICATION_H_
