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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_FILESYSTEMCLIENT_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_FILESYSTEMCLIENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * Information on the file system client
                */
                class FileSystemClient : public AbstractModel
                {
                public:
                    FileSystemClient();
                    ~FileSystemClient() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IP address of the file system
                     * @return CfsVip IP address of the file system
                     * 
                     */
                    std::string GetCfsVip() const;

                    /**
                     * 设置IP address of the file system
                     * @param _cfsVip IP address of the file system
                     * 
                     */
                    void SetCfsVip(const std::string& _cfsVip);

                    /**
                     * 判断参数 CfsVip 是否已赋值
                     * @return CfsVip 是否已赋值
                     * 
                     */
                    bool CfsVipHasBeenSet() const;

                    /**
                     * 获取Client IP
                     * @return ClientIp Client IP
                     * 
                     */
                    std::string GetClientIp() const;

                    /**
                     * 设置Client IP
                     * @param _clientIp Client IP
                     * 
                     */
                    void SetClientIp(const std::string& _clientIp);

                    /**
                     * 判断参数 ClientIp 是否已赋值
                     * @return ClientIp 是否已赋值
                     * 
                     */
                    bool ClientIpHasBeenSet() const;

                    /**
                     * 获取File system VPCID
                     * @return VpcId File system VPCID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置File system VPCID
                     * @param _vpcId File system VPCID
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Availability zone name, such as ap-beijing-1. see the region and availability zone list in the description document (https://www.tencentcloud.com/document/api/582/38144?from_cn_redirect=1).
                     * @return Zone Availability zone name, such as ap-beijing-1. see the region and availability zone list in the description document (https://www.tencentcloud.com/document/api/582/38144?from_cn_redirect=1).
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Availability zone name, such as ap-beijing-1. see the region and availability zone list in the description document (https://www.tencentcloud.com/document/api/582/38144?from_cn_redirect=1).
                     * @param _zone Availability zone name, such as ap-beijing-1. see the region and availability zone list in the description document (https://www.tencentcloud.com/document/api/582/38144?from_cn_redirect=1).
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取AZ name
                     * @return ZoneName AZ name
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置AZ name
                     * @param _zoneName AZ name
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
                     * 获取Path in which the file system is mounted to the client
                     * @return MountDirectory Path in which the file system is mounted to the client
                     * 
                     */
                    std::string GetMountDirectory() const;

                    /**
                     * 设置Path in which the file system is mounted to the client
                     * @param _mountDirectory Path in which the file system is mounted to the client
                     * 
                     */
                    void SetMountDirectory(const std::string& _mountDirectory);

                    /**
                     * 判断参数 MountDirectory 是否已赋值
                     * @return MountDirectory 是否已赋值
                     * 
                     */
                    bool MountDirectoryHasBeenSet() const;

                private:

                    /**
                     * IP address of the file system
                     */
                    std::string m_cfsVip;
                    bool m_cfsVipHasBeenSet;

                    /**
                     * Client IP
                     */
                    std::string m_clientIp;
                    bool m_clientIpHasBeenSet;

                    /**
                     * File system VPCID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Availability zone name, such as ap-beijing-1. see the region and availability zone list in the description document (https://www.tencentcloud.com/document/api/582/38144?from_cn_redirect=1).
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * AZ name
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * Path in which the file system is mounted to the client
                     */
                    std::string m_mountDirectory;
                    bool m_mountDirectoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_FILESYSTEMCLIENT_H_
