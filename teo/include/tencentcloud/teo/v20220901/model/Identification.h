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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_IDENTIFICATION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_IDENTIFICATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/AscriptionInfo.h>
#include <tencentcloud/teo/v20220901/model/FileAscriptionInfo.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Site verification info
                */
                class Identification : public AbstractModel
                {
                public:
                    Identification();
                    ~Identification() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Site name.
                     * @return ZoneName Site name.
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置Site name.
                     * @param _zoneName Site name.
                     * 
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     * 
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取Verify a subdomain. This value is empty when verifying a site. A subdomain is verified for a specific subdomain.
                     * @return Domain Verify a subdomain. This value is empty when verifying a site. A subdomain is verified for a specific subdomain.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Verify a subdomain. This value is empty when verifying a site. A subdomain is verified for a specific subdomain.
                     * @param _domain Verify a subdomain. This value is empty when verifying a site. A subdomain is verified for a specific subdomain.
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
                     * 获取Verification status. Valid values:
<li>pending: verifying.</li>
<li> finished: verification complete.</li>
                     * @return Status Verification status. Valid values:
<li>pending: verifying.</li>
<li> finished: verification complete.</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Verification status. Valid values:
<li>pending: verifying.</li>
<li> finished: verification complete.</li>
                     * @param _status Verification status. Valid values:
<li>pending: verifying.</li>
<li> finished: verification complete.</li>
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
                     * 获取Site ownership verification: Dns verification information.
                     * @return Ascription Site ownership verification: Dns verification information.
                     * 
                     */
                    AscriptionInfo GetAscription() const;

                    /**
                     * 设置Site ownership verification: Dns verification information.
                     * @param _ascription Site ownership verification: Dns verification information.
                     * 
                     */
                    void SetAscription(const AscriptionInfo& _ascription);

                    /**
                     * 判断参数 Ascription 是否已赋值
                     * @return Ascription 是否已赋值
                     * 
                     */
                    bool AscriptionHasBeenSet() const;

                    /**
                     * 获取Current NS record of the domain name.
                     * @return OriginalNameServers Current NS record of the domain name.
                     * 
                     */
                    std::vector<std::string> GetOriginalNameServers() const;

                    /**
                     * 设置Current NS record of the domain name.
                     * @param _originalNameServers Current NS record of the domain name.
                     * 
                     */
                    void SetOriginalNameServers(const std::vector<std::string>& _originalNameServers);

                    /**
                     * 判断参数 OriginalNameServers 是否已赋值
                     * @return OriginalNameServers 是否已赋值
                     * 
                     */
                    bool OriginalNameServersHasBeenSet() const;

                    /**
                     * 获取Site ownership verification: file verification information.
                     * @return FileAscription Site ownership verification: file verification information.
                     * 
                     */
                    FileAscriptionInfo GetFileAscription() const;

                    /**
                     * 设置Site ownership verification: file verification information.
                     * @param _fileAscription Site ownership verification: file verification information.
                     * 
                     */
                    void SetFileAscription(const FileAscriptionInfo& _fileAscription);

                    /**
                     * 判断参数 FileAscription 是否已赋值
                     * @return FileAscription 是否已赋值
                     * 
                     */
                    bool FileAscriptionHasBeenSet() const;

                private:

                    /**
                     * Site name.
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * Verify a subdomain. This value is empty when verifying a site. A subdomain is verified for a specific subdomain.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Verification status. Valid values:
<li>pending: verifying.</li>
<li> finished: verification complete.</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Site ownership verification: Dns verification information.
                     */
                    AscriptionInfo m_ascription;
                    bool m_ascriptionHasBeenSet;

                    /**
                     * Current NS record of the domain name.
                     */
                    std::vector<std::string> m_originalNameServers;
                    bool m_originalNameServersHasBeenSet;

                    /**
                     * Site ownership verification: file verification information.
                     */
                    FileAscriptionInfo m_fileAscription;
                    bool m_fileAscriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_IDENTIFICATION_H_
