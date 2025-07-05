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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_INITIALIZEDISKSREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_INITIALIZEDISKSREQUEST_H_

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
                * InitializeDisks request structure.
                */
                class InitializeDisksRequest : public AbstractModel
                {
                public:
                    InitializeDisksRequest();
                    ~InitializeDisksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID list of the cloud disks to be reinitialized. Up to 20 disks can be reinitialized at a time.
                     * @return DiskIds ID list of the cloud disks to be reinitialized. Up to 20 disks can be reinitialized at a time.
                     * 
                     */
                    std::vector<std::string> GetDiskIds() const;

                    /**
                     * 设置ID list of the cloud disks to be reinitialized. Up to 20 disks can be reinitialized at a time.
                     * @param _diskIds ID list of the cloud disks to be reinitialized. Up to 20 disks can be reinitialized at a time.
                     * 
                     */
                    void SetDiskIds(const std::vector<std::string>& _diskIds);

                    /**
                     * 判断参数 DiskIds 是否已赋值
                     * @return DiskIds 是否已赋值
                     * 
                     */
                    bool DiskIdsHasBeenSet() const;

                private:

                    /**
                     * ID list of the cloud disks to be reinitialized. Up to 20 disks can be reinitialized at a time.
                     */
                    std::vector<std::string> m_diskIds;
                    bool m_diskIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_INITIALIZEDISKSREQUEST_H_
