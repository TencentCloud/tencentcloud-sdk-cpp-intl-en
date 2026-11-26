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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_HOSTSCERTIFICATE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_HOSTSCERTIFICATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/HostCertInfo.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Domain name certificate configuration
                */
                class HostsCertificate : public AbstractModel
                {
                public:
                    HostsCertificate();
                    ~HostsCertificate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Domain name.
                     * @return Host Domain name.
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置Domain name.
                     * @param _host Domain name.
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
                     * 获取Certificate configuration mode. Valid values:
<li>disable: no certificate configured;</li>
<li>eofreecert: configure EdgeOne free certificate;</li> 
<li>sslcert: configure an SSL certificate;</li>
                     * @return Mode Certificate configuration mode. Valid values:
<li>disable: no certificate configured;</li>
<li>eofreecert: configure EdgeOne free certificate;</li> 
<li>sslcert: configure an SSL certificate;</li>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置Certificate configuration mode. Valid values:
<li>disable: no certificate configured;</li>
<li>eofreecert: configure EdgeOne free certificate;</li> 
<li>sslcert: configure an SSL certificate;</li>
                     * @param _mode Certificate configuration mode. Valid values:
<li>disable: no certificate configured;</li>
<li>eofreecert: configure EdgeOne free certificate;</li> 
<li>sslcert: configure an SSL certificate;</li>
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取Server certificate configuration.
                     * @return HostCertInfo Server certificate configuration.
                     * 
                     */
                    std::vector<HostCertInfo> GetHostCertInfo() const;

                    /**
                     * 设置Server certificate configuration.
                     * @param _hostCertInfo Server certificate configuration.
                     * 
                     */
                    void SetHostCertInfo(const std::vector<HostCertInfo>& _hostCertInfo);

                    /**
                     * 判断参数 HostCertInfo 是否已赋值
                     * @return HostCertInfo 是否已赋值
                     * 
                     */
                    bool HostCertInfoHasBeenSet() const;

                    /**
                     * 获取Application type. Valid values:
<li>apply: manage EdgeOne;</li>
<li>none: EdgeOne is not managed.</li>If not specified, the default value is none.
                     * @return ApplyType Application type. Valid values:
<li>apply: manage EdgeOne;</li>
<li>none: EdgeOne is not managed.</li>If not specified, the default value is none.
                     * @deprecated
                     */
                    std::string GetApplyType() const;

                    /**
                     * 设置Application type. Valid values:
<li>apply: manage EdgeOne;</li>
<li>none: EdgeOne is not managed.</li>If not specified, the default value is none.
                     * @param _applyType Application type. Valid values:
<li>apply: manage EdgeOne;</li>
<li>none: EdgeOne is not managed.</li>If not specified, the default value is none.
                     * @deprecated
                     */
                    void SetApplyType(const std::string& _applyType);

                    /**
                     * 判断参数 ApplyType 是否已赋值
                     * @return ApplyType 是否已赋值
                     * @deprecated
                     */
                    bool ApplyTypeHasBeenSet() const;

                private:

                    /**
                     * Domain name.
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * Certificate configuration mode. Valid values:
<li>disable: no certificate configured;</li>
<li>eofreecert: configure EdgeOne free certificate;</li> 
<li>sslcert: configure an SSL certificate;</li>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * Server certificate configuration.
                     */
                    std::vector<HostCertInfo> m_hostCertInfo;
                    bool m_hostCertInfoHasBeenSet;

                    /**
                     * Application type. Valid values:
<li>apply: manage EdgeOne;</li>
<li>none: EdgeOne is not managed.</li>If not specified, the default value is none.
                     */
                    std::string m_applyType;
                    bool m_applyTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_HOSTSCERTIFICATE_H_
