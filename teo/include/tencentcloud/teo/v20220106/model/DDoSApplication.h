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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DDOSAPPLICATION_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DDOSAPPLICATION_H_

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
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DDoS protection for the application layer (layer 7)
                */
                class DDoSApplication : public AbstractModel
                {
                public:
                    DDoSApplication();
                    ~DDoSApplication() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Second-level domain name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Host Second-level domain name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置Second-level domain name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _host Second-level domain name
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Status of the domain name
`init`: NS to be switched
`offline`: Site acceleration not enabled with DNS
`process`: Deployment in progress
`online`: Normal
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Status Status of the domain name
`init`: NS to be switched
`offline`: Site acceleration not enabled with DNS
`process`: Deployment in progress
`online`: Normal
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status of the domain name
`init`: NS to be switched
`offline`: Site acceleration not enabled with DNS
`process`: Deployment in progress
`online`: Normal
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _status Status of the domain name
`init`: NS to be switched
`offline`: Site acceleration not enabled with DNS
`process`: Deployment in progress
`online`: Normal
Note: This field may return `null`, indicating that no valid value can be obtained.
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
                     * 获取Site acceleration switch. `on`: Enable site acceleration; `off`: Disable site acceleration. This field can be used together with `SecurityType`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return AccelerateType Site acceleration switch. `on`: Enable site acceleration; `off`: Disable site acceleration. This field can be used together with `SecurityType`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetAccelerateType() const;

                    /**
                     * 设置Site acceleration switch. `on`: Enable site acceleration; `off`: Disable site acceleration. This field can be used together with `SecurityType`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _accelerateType Site acceleration switch. `on`: Enable site acceleration; `off`: Disable site acceleration. This field can be used together with `SecurityType`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAccelerateType(const std::string& _accelerateType);

                    /**
                     * 判断参数 AccelerateType 是否已赋值
                     * @return AccelerateType 是否已赋值
                     * 
                     */
                    bool AccelerateTypeHasBeenSet() const;

                    /**
                     * 获取Security acceleration switch. `on`: Enable site acceleration; `off`: Disable site acceleration. This field can be used together with `AccelerateType`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return SecurityType Security acceleration switch. `on`: Enable site acceleration; `off`: Disable site acceleration. This field can be used together with `AccelerateType`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetSecurityType() const;

                    /**
                     * 设置Security acceleration switch. `on`: Enable site acceleration; `off`: Disable site acceleration. This field can be used together with `AccelerateType`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _securityType Security acceleration switch. `on`: Enable site acceleration; `off`: Disable site acceleration. This field can be used together with `AccelerateType`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSecurityType(const std::string& _securityType);

                    /**
                     * 判断参数 SecurityType 是否已赋值
                     * @return SecurityType 是否已赋值
                     * 
                     */
                    bool SecurityTypeHasBeenSet() const;

                private:

                    /**
                     * Second-level domain name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * Status of the domain name
`init`: NS to be switched
`offline`: Site acceleration not enabled with DNS
`process`: Deployment in progress
`online`: Normal
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Site acceleration switch. `on`: Enable site acceleration; `off`: Disable site acceleration. This field can be used together with `SecurityType`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_accelerateType;
                    bool m_accelerateTypeHasBeenSet;

                    /**
                     * Security acceleration switch. `on`: Enable site acceleration; `off`: Disable site acceleration. This field can be used together with `AccelerateType`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_securityType;
                    bool m_securityTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DDOSAPPLICATION_H_
