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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_TCBHOSTINSTANCE_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_TCBHOSTINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Details of TCB service instances subject to static hosting
                */
                class TCBHostInstance : public AbstractModel
                {
                public:
                    TCBHostInstance();
                    ~TCBHostInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The domain.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Domain The domain.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置The domain.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _domain The domain.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status The status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置The status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _status The status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取The resolution status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DNSStatus The resolution status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDNSStatus() const;

                    /**
                     * 设置The resolution status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _dNSStatus The resolution status.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDNSStatus(const std::string& _dNSStatus);

                    /**
                     * 判断参数 DNSStatus 是否已赋值
                     * @return DNSStatus 是否已赋值
                     * 
                     */
                    bool DNSStatusHasBeenSet() const;

                    /**
                     * 获取The ID of the associated certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OldCertificateId The ID of the associated certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOldCertificateId() const;

                    /**
                     * 设置The ID of the associated certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _oldCertificateId The ID of the associated certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOldCertificateId(const std::string& _oldCertificateId);

                    /**
                     * 判断参数 OldCertificateId 是否已赋值
                     * @return OldCertificateId 是否已赋值
                     * 
                     */
                    bool OldCertificateIdHasBeenSet() const;

                private:

                    /**
                     * The domain.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * The status.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * The resolution status.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dNSStatus;
                    bool m_dNSStatusHasBeenSet;

                    /**
                     * The ID of the associated certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_oldCertificateId;
                    bool m_oldCertificateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_TCBHOSTINSTANCE_H_
