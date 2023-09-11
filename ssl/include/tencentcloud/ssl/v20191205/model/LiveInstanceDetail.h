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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_LIVEINSTANCEDETAIL_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_LIVEINSTANCEDETAIL_H_

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
                * Details of a LIVE instance
                */
                class LiveInstanceDetail : public AbstractModel
                {
                public:
                    LiveInstanceDetail();
                    ~LiveInstanceDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The domain.
                     * @return Domain The domain.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置The domain.
                     * @param _domain The domain.
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
                     * 获取The ID of the associated certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CertId The ID of the associated certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置The ID of the associated certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _certId The ID of the associated certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCertId(const std::string& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     * 
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取The status. Valid values: `-1`: No certificate is associated with the domain.
`1`: HTTPS is enabled for the domain.
`0`: HTTPS is disabled for the domain.
                     * @return Status The status. Valid values: `-1`: No certificate is associated with the domain.
`1`: HTTPS is enabled for the domain.
`0`: HTTPS is disabled for the domain.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置The status. Valid values: `-1`: No certificate is associated with the domain.
`1`: HTTPS is enabled for the domain.
`0`: HTTPS is disabled for the domain.
                     * @param _status The status. Valid values: `-1`: No certificate is associated with the domain.
`1`: HTTPS is enabled for the domain.
`0`: HTTPS is disabled for the domain.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * The domain.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * The ID of the associated certificate.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * The status. Valid values: `-1`: No certificate is associated with the domain.
`1`: HTTPS is enabled for the domain.
`0`: HTTPS is disabled for the domain.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_LIVEINSTANCEDETAIL_H_
