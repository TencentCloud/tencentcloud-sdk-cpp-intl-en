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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_CFSINSINFO_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_CFSINSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * Configuration information of the CFS instance associated with function
                */
                class CfsInsInfo : public AbstractModel
                {
                public:
                    CfsInsInfo();
                    ~CfsInsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取User ID
                     * @return UserId User ID
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置User ID
                     * @param UserId User ID
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取User group ID
                     * @return UserGroupId User group ID
                     */
                    std::string GetUserGroupId() const;

                    /**
                     * 设置User group ID
                     * @param UserGroupId User group ID
                     */
                    void SetUserGroupId(const std::string& _userGroupId);

                    /**
                     * 判断参数 UserGroupId 是否已赋值
                     * @return UserGroupId 是否已赋值
                     */
                    bool UserGroupIdHasBeenSet() const;

                    /**
                     * 获取CFS instance ID
                     * @return CfsId CFS instance ID
                     */
                    std::string GetCfsId() const;

                    /**
                     * 设置CFS instance ID
                     * @param CfsId CFS instance ID
                     */
                    void SetCfsId(const std::string& _cfsId);

                    /**
                     * 判断参数 CfsId 是否已赋值
                     * @return CfsId 是否已赋值
                     */
                    bool CfsIdHasBeenSet() const;

                    /**
                     * 获取File system mount target ID
                     * @return MountInsId File system mount target ID
                     */
                    std::string GetMountInsId() const;

                    /**
                     * 设置File system mount target ID
                     * @param MountInsId File system mount target ID
                     */
                    void SetMountInsId(const std::string& _mountInsId);

                    /**
                     * 判断参数 MountInsId 是否已赋值
                     * @return MountInsId 是否已赋值
                     */
                    bool MountInsIdHasBeenSet() const;

                    /**
                     * 获取Local mount target
                     * @return LocalMountDir Local mount target
                     */
                    std::string GetLocalMountDir() const;

                    /**
                     * 设置Local mount target
                     * @param LocalMountDir Local mount target
                     */
                    void SetLocalMountDir(const std::string& _localMountDir);

                    /**
                     * 判断参数 LocalMountDir 是否已赋值
                     * @return LocalMountDir 是否已赋值
                     */
                    bool LocalMountDirHasBeenSet() const;

                    /**
                     * 获取Remote mount target
                     * @return RemoteMountDir Remote mount target
                     */
                    std::string GetRemoteMountDir() const;

                    /**
                     * 设置Remote mount target
                     * @param RemoteMountDir Remote mount target
                     */
                    void SetRemoteMountDir(const std::string& _remoteMountDir);

                    /**
                     * 判断参数 RemoteMountDir 是否已赋值
                     * @return RemoteMountDir 是否已赋值
                     */
                    bool RemoteMountDirHasBeenSet() const;

                    /**
                     * 获取File system IP, which is not required when you configure CFS.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return IpAddress File system IP, which is not required when you configure CFS.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetIpAddress() const;

                    /**
                     * 设置File system IP, which is not required when you configure CFS.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param IpAddress File system IP, which is not required when you configure CFS.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetIpAddress(const std::string& _ipAddress);

                    /**
                     * 判断参数 IpAddress 是否已赋值
                     * @return IpAddress 是否已赋值
                     */
                    bool IpAddressHasBeenSet() const;

                    /**
                     * 获取VPC ID of file system, which is not required when you configure CFS.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MountVpcId VPC ID of file system, which is not required when you configure CFS.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetMountVpcId() const;

                    /**
                     * 设置VPC ID of file system, which is not required when you configure CFS.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param MountVpcId VPC ID of file system, which is not required when you configure CFS.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMountVpcId(const std::string& _mountVpcId);

                    /**
                     * 判断参数 MountVpcId 是否已赋值
                     * @return MountVpcId 是否已赋值
                     */
                    bool MountVpcIdHasBeenSet() const;

                    /**
                     * 获取VPC subnet ID of file system, which is not required when you configure CFS.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MountSubnetId VPC subnet ID of file system, which is not required when you configure CFS.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetMountSubnetId() const;

                    /**
                     * 设置VPC subnet ID of file system, which is not required when you configure CFS.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param MountSubnetId VPC subnet ID of file system, which is not required when you configure CFS.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMountSubnetId(const std::string& _mountSubnetId);

                    /**
                     * 判断参数 MountSubnetId 是否已赋值
                     * @return MountSubnetId 是否已赋值
                     */
                    bool MountSubnetIdHasBeenSet() const;

                private:

                    /**
                     * User ID
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * User group ID
                     */
                    std::string m_userGroupId;
                    bool m_userGroupIdHasBeenSet;

                    /**
                     * CFS instance ID
                     */
                    std::string m_cfsId;
                    bool m_cfsIdHasBeenSet;

                    /**
                     * File system mount target ID
                     */
                    std::string m_mountInsId;
                    bool m_mountInsIdHasBeenSet;

                    /**
                     * Local mount target
                     */
                    std::string m_localMountDir;
                    bool m_localMountDirHasBeenSet;

                    /**
                     * Remote mount target
                     */
                    std::string m_remoteMountDir;
                    bool m_remoteMountDirHasBeenSet;

                    /**
                     * File system IP, which is not required when you configure CFS.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ipAddress;
                    bool m_ipAddressHasBeenSet;

                    /**
                     * VPC ID of file system, which is not required when you configure CFS.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mountVpcId;
                    bool m_mountVpcIdHasBeenSet;

                    /**
                     * VPC subnet ID of file system, which is not required when you configure CFS.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mountSubnetId;
                    bool m_mountSubnetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_CFSINSINFO_H_
