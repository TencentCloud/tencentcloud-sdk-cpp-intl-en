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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_MODIFYDISKBACKUPQUOTAREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_MODIFYDISKBACKUPQUOTAREQUEST_H_

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
                * ModifyDiskBackupQuota request structure.
                */
                class ModifyDiskBackupQuotaRequest : public AbstractModel
                {
                public:
                    ModifyDiskBackupQuotaRequest();
                    ~ModifyDiskBackupQuotaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cloud disk ID.
                     * @return DiskId Cloud disk ID.
                     * 
                     */
                    std::string GetDiskId() const;

                    /**
                     * 设置Cloud disk ID.
                     * @param _diskId Cloud disk ID.
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
                     * 获取Cloud disk backup point quota after the adjustment
                     * @return DiskBackupQuota Cloud disk backup point quota after the adjustment
                     * 
                     */
                    uint64_t GetDiskBackupQuota() const;

                    /**
                     * 设置Cloud disk backup point quota after the adjustment
                     * @param _diskBackupQuota Cloud disk backup point quota after the adjustment
                     * 
                     */
                    void SetDiskBackupQuota(const uint64_t& _diskBackupQuota);

                    /**
                     * 判断参数 DiskBackupQuota 是否已赋值
                     * @return DiskBackupQuota 是否已赋值
                     * 
                     */
                    bool DiskBackupQuotaHasBeenSet() const;

                private:

                    /**
                     * Cloud disk ID.
                     */
                    std::string m_diskId;
                    bool m_diskIdHasBeenSet;

                    /**
                     * Cloud disk backup point quota after the adjustment
                     */
                    uint64_t m_diskBackupQuota;
                    bool m_diskBackupQuotaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_MODIFYDISKBACKUPQUOTAREQUEST_H_
