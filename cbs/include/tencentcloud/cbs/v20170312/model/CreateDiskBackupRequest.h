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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_CREATEDISKBACKUPREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_CREATEDISKBACKUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateDiskBackup request structure.
                */
                class CreateDiskBackupRequest : public AbstractModel
                {
                public:
                    CreateDiskBackupRequest();
                    ~CreateDiskBackupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Name of the cloud disk for which to create a backup point.
                     * @return DiskId Name of the cloud disk for which to create a backup point.
                     * 
                     */
                    std::string GetDiskId() const;

                    /**
                     * 设置Name of the cloud disk for which to create a backup point.
                     * @param _diskId Name of the cloud disk for which to create a backup point.
                     * 
                     */
                    void SetDiskId(const std::string& _diskId);

                    /**
                     * 判断参数 DiskId 是否已赋值
                     * @return DiskId 是否已赋值
                     * 
                     */
                    bool DiskIdHasBeenSet() const;

                    /**
                     * 获取Name of the cloud disk backup point, which can contain up to 100 characters.
                     * @return DiskBackupName Name of the cloud disk backup point, which can contain up to 100 characters.
                     * 
                     */
                    std::string GetDiskBackupName() const;

                    /**
                     * 设置Name of the cloud disk backup point, which can contain up to 100 characters.
                     * @param _diskBackupName Name of the cloud disk backup point, which can contain up to 100 characters.
                     * 
                     */
                    void SetDiskBackupName(const std::string& _diskBackupName);

                    /**
                     * 判断参数 DiskBackupName 是否已赋值
                     * @return DiskBackupName 是否已赋值
                     * 
                     */
                    bool DiskBackupNameHasBeenSet() const;

                private:

                    /**
                     * Name of the cloud disk for which to create a backup point.
                     */
                    std::string m_diskId;
                    bool m_diskIdHasBeenSet;

                    /**
                     * Name of the cloud disk backup point, which can contain up to 100 characters.
                     */
                    std::string m_diskBackupName;
                    bool m_diskBackupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_CREATEDISKBACKUPREQUEST_H_
