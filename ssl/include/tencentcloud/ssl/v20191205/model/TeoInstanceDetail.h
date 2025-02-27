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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_TEOINSTANCEDETAIL_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_TEOINSTANCEDETAIL_H_

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
                * Details of TEO instances
                */
                class TeoInstanceDetail : public AbstractModel
                {
                public:
                    TeoInstanceDetail();
                    ~TeoInstanceDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The domain.
                     * @return Host The domain.
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置The domain.
                     * @param _host The domain.
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取The certificate ID.
                     * @return CertId The certificate ID.
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置The certificate ID.
                     * @param _certId The certificate ID.
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
                     * 获取The AZ ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ZoneId The AZ ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置The AZ ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _zoneId The AZ ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Domain status.
`Deployed`: deployed;.
`Processing`: deploying;.
`Applying`: applying;.
`Failed`: application failed;.
`Issued`: binding failed.
                     * @return Status Domain status.
`Deployed`: deployed;.
`Processing`: deploying;.
`Applying`: applying;.
`Failed`: application failed;.
`Issued`: binding failed.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Domain status.
`Deployed`: deployed;.
`Processing`: deploying;.
`Applying`: applying;.
`Failed`: application failed;.
`Issued`: binding failed.
                     * @param _status Domain status.
`Deployed`: deployed;.
`Processing`: deploying;.
`Applying`: applying;.
`Failed`: application failed;.
`Issued`: binding failed.
                     * 
                     */
                    void SetStatus(const std::string& _status);

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
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * The certificate ID.
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * The AZ ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Domain status.
`Deployed`: deployed;.
`Processing`: deploying;.
`Applying`: applying;.
`Failed`: application failed;.
`Issued`: binding failed.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_TEOINSTANCEDETAIL_H_
