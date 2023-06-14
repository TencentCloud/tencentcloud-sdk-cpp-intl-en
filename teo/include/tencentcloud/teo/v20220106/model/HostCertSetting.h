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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_HOSTCERTSETTING_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_HOSTCERTSETTING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/ServerCertInfo.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * Certificate configurations for domain names
                */
                class HostCertSetting : public AbstractModel
                {
                public:
                    HostCertSetting();
                    ~HostCertSetting() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Domain name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Host Domain name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置Domain name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _host Domain name
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
                     * 获取Server certificate configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return CertInfo Server certificate configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<ServerCertInfo> GetCertInfo() const;

                    /**
                     * 设置Server certificate configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _certInfo Server certificate configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCertInfo(const std::vector<ServerCertInfo>& _certInfo);

                    /**
                     * 判断参数 CertInfo 是否已赋值
                     * @return CertInfo 是否已赋值
                     * 
                     */
                    bool CertInfoHasBeenSet() const;

                private:

                    /**
                     * Domain name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * Server certificate configuration
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<ServerCertInfo> m_certInfo;
                    bool m_certInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_HOSTCERTSETTING_H_
