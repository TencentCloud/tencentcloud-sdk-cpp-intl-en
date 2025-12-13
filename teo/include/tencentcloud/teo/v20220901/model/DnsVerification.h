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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DNSVERIFICATION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DNSVERIFICATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Information required for DNS resolution verification when applying for a free certificate in CNAME mode integration to verify ownership of a site or domain name.
                */
                class DnsVerification : public AbstractModel
                {
                public:
                    DnsVerification();
                    ~DnsVerification() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The host record.
                     * @return Subdomain The host record.
                     * 
                     */
                    std::string GetSubdomain() const;

                    /**
                     * 设置The host record.
                     * @param _subdomain The host record.
                     * 
                     */
                    void SetSubdomain(const std::string& _subdomain);

                    /**
                     * 判断参数 Subdomain 是否已赋值
                     * @return Subdomain 是否已赋值
                     * 
                     */
                    bool SubdomainHasBeenSet() const;

                    /**
                     * 获取The record type.
                     * @return RecordType The record type.
                     * 
                     */
                    std::string GetRecordType() const;

                    /**
                     * 设置The record type.
                     * @param _recordType The record type.
                     * 
                     */
                    void SetRecordType(const std::string& _recordType);

                    /**
                     * 判断参数 RecordType 是否已赋值
                     * @return RecordType 是否已赋值
                     * 
                     */
                    bool RecordTypeHasBeenSet() const;

                    /**
                     * 获取The record value.
                     * @return RecordValue The record value.
                     * 
                     */
                    std::string GetRecordValue() const;

                    /**
                     * 设置The record value.
                     * @param _recordValue The record value.
                     * 
                     */
                    void SetRecordValue(const std::string& _recordValue);

                    /**
                     * 判断参数 RecordValue 是否已赋值
                     * @return RecordValue 是否已赋值
                     * 
                     */
                    bool RecordValueHasBeenSet() const;

                private:

                    /**
                     * The host record.
                     */
                    std::string m_subdomain;
                    bool m_subdomainHasBeenSet;

                    /**
                     * The record type.
                     */
                    std::string m_recordType;
                    bool m_recordTypeHasBeenSet;

                    /**
                     * The record value.
                     */
                    std::string m_recordValue;
                    bool m_recordValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DNSVERIFICATION_H_
