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

#ifndef TENCENTCLOUD_CHDFS_V20201112_MODEL_DESCRIBEMOUNTPOINTSREQUEST_H_
#define TENCENTCLOUD_CHDFS_V20201112_MODEL_DESCRIBEMOUNTPOINTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Chdfs
    {
        namespace V20201112
        {
            namespace Model
            {
                /**
                * DescribeMountPoints request structure.
                */
                class DescribeMountPointsRequest : public AbstractModel
                {
                public:
                    DescribeMountPointsRequest();
                    ~DescribeMountPointsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取File system ID
Note: only one of `AccessGroupId`, `FileSystemId`, and `OwnerUin` can be specified as the input parameter
                     * @return FileSystemId File system ID
Note: only one of `AccessGroupId`, `FileSystemId`, and `OwnerUin` can be specified as the input parameter
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置File system ID
Note: only one of `AccessGroupId`, `FileSystemId`, and `OwnerUin` can be specified as the input parameter
                     * @param _fileSystemId File system ID
Note: only one of `AccessGroupId`, `FileSystemId`, and `OwnerUin` can be specified as the input parameter
                     * 
                     */
                    void SetFileSystemId(const std::string& _fileSystemId);

                    /**
                     * 判断参数 FileSystemId 是否已赋值
                     * @return FileSystemId 是否已赋值
                     * 
                     */
                    bool FileSystemIdHasBeenSet() const;

                    /**
                     * 获取Permission group ID
                     * @return AccessGroupId Permission group ID
                     * 
                     */
                    std::string GetAccessGroupId() const;

                    /**
                     * 设置Permission group ID
                     * @param _accessGroupId Permission group ID
                     * 
                     */
                    void SetAccessGroupId(const std::string& _accessGroupId);

                    /**
                     * 判断参数 AccessGroupId 是否已赋值
                     * @return AccessGroupId 是否已赋值
                     * 
                     */
                    bool AccessGroupIdHasBeenSet() const;

                    /**
                     * 获取Resource owner `Uin`
                     * @return OwnerUin Resource owner `Uin`
                     * 
                     */
                    uint64_t GetOwnerUin() const;

                    /**
                     * 设置Resource owner `Uin`
                     * @param _ownerUin Resource owner `Uin`
                     * 
                     */
                    void SetOwnerUin(const uint64_t& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                private:

                    /**
                     * File system ID
Note: only one of `AccessGroupId`, `FileSystemId`, and `OwnerUin` can be specified as the input parameter
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * Permission group ID
                     */
                    std::string m_accessGroupId;
                    bool m_accessGroupIdHasBeenSet;

                    /**
                     * Resource owner `Uin`
                     */
                    uint64_t m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHDFS_V20201112_MODEL_DESCRIBEMOUNTPOINTSREQUEST_H_
