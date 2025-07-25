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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_RESIZEDISKREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_RESIZEDISKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * ResizeDisk request structure.
                */
                class ResizeDiskRequest : public AbstractModel
                {
                public:
                    ResizeDiskRequest();
                    ~ResizeDiskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID
                     * @return InstanceId Cluster ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Cluster ID
                     * @param _instanceId Cluster ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Role (MATER/CORE), MASTER corresponds to FE, CORE corresponds to BE.
                     * @return Type Role (MATER/CORE), MASTER corresponds to FE, CORE corresponds to BE.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Role (MATER/CORE), MASTER corresponds to FE, CORE corresponds to BE.
                     * @param _type Role (MATER/CORE), MASTER corresponds to FE, CORE corresponds to BE.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Cloud disk size
                     * @return DiskSize Cloud disk size
                     * 
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置Cloud disk size
                     * @param _diskSize Cloud disk size
                     * 
                     */
                    void SetDiskSize(const uint64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Role (MATER/CORE), MASTER corresponds to FE, CORE corresponds to BE.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Cloud disk size
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_RESIZEDISKREQUEST_H_
