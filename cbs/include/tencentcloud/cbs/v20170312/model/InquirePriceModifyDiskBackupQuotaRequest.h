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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_INQUIREPRICEMODIFYDISKBACKUPQUOTAREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_INQUIREPRICEMODIFYDISKBACKUPQUOTAREQUEST_H_

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
                * InquirePriceModifyDiskBackupQuota request structure.
                */
                class InquirePriceModifyDiskBackupQuotaRequest : public AbstractModel
                {
                public:
                    InquirePriceModifyDiskBackupQuotaRequest();
                    ~InquirePriceModifyDiskBackupQuotaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cloud disk ID, which can be queried through the `DescribeDisks` API.
                     * @return DiskId Cloud disk ID, which can be queried through the `DescribeDisks` API.
                     * 
                     */
                    std::string GetDiskId() const;

                    /**
                     * 设置Cloud disk ID, which can be queried through the `DescribeDisks` API.
                     * @param _diskId Cloud disk ID, which can be queried through the `DescribeDisks` API.
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
                     * 获取Cloud disk backup point quota after the modification, i.e., the number of backup points that a cloud disk can have.
                     * @return DiskBackupQuota Cloud disk backup point quota after the modification, i.e., the number of backup points that a cloud disk can have.
                     * 
                     */
                    uint64_t GetDiskBackupQuota() const;

                    /**
                     * 设置Cloud disk backup point quota after the modification, i.e., the number of backup points that a cloud disk can have.
                     * @param _diskBackupQuota Cloud disk backup point quota after the modification, i.e., the number of backup points that a cloud disk can have.
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
                     * Cloud disk ID, which can be queried through the `DescribeDisks` API.
                     */
                    std::string m_diskId;
                    bool m_diskIdHasBeenSet;

                    /**
                     * Cloud disk backup point quota after the modification, i.e., the number of backup points that a cloud disk can have.
                     */
                    uint64_t m_diskBackupQuota;
                    bool m_diskBackupQuotaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_INQUIREPRICEMODIFYDISKBACKUPQUOTAREQUEST_H_
