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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEROLLBACKRANGETIMEREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEROLLBACKRANGETIMEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeRollbackRangeTime request structure.
                */
                class DescribeRollbackRangeTimeRequest : public AbstractModel
                {
                public:
                    DescribeRollbackRangeTimeRequest();
                    ~DescribeRollbackRangeTimeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID list. An instance ID is in the format of cdb-c1nl9rpv, which is the same as the instance ID displayed on the TencentDB Console page.
                     * @return InstanceIds Instance ID list. An instance ID is in the format of cdb-c1nl9rpv, which is the same as the instance ID displayed on the TencentDB Console page.
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置Instance ID list. An instance ID is in the format of cdb-c1nl9rpv, which is the same as the instance ID displayed on the TencentDB Console page.
                     * @param _instanceIds Instance ID list. An instance ID is in the format of cdb-c1nl9rpv, which is the same as the instance ID displayed on the TencentDB Console page.
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取Whether the clone instance and the source instance are in the same AZ. Valid values: `true` (yes), `false` (no).
                     * @return IsRemoteZone Whether the clone instance and the source instance are in the same AZ. Valid values: `true` (yes), `false` (no).
                     * 
                     */
                    std::string GetIsRemoteZone() const;

                    /**
                     * 设置Whether the clone instance and the source instance are in the same AZ. Valid values: `true` (yes), `false` (no).
                     * @param _isRemoteZone Whether the clone instance and the source instance are in the same AZ. Valid values: `true` (yes), `false` (no).
                     * 
                     */
                    void SetIsRemoteZone(const std::string& _isRemoteZone);

                    /**
                     * 判断参数 IsRemoteZone 是否已赋值
                     * @return IsRemoteZone 是否已赋值
                     * 
                     */
                    bool IsRemoteZoneHasBeenSet() const;

                    /**
                     * 获取The region of the clone instance, such as `ap-guangzhou`.
                     * @return BackupRegion The region of the clone instance, such as `ap-guangzhou`.
                     * 
                     */
                    std::string GetBackupRegion() const;

                    /**
                     * 设置The region of the clone instance, such as `ap-guangzhou`.
                     * @param _backupRegion The region of the clone instance, such as `ap-guangzhou`.
                     * 
                     */
                    void SetBackupRegion(const std::string& _backupRegion);

                    /**
                     * 判断参数 BackupRegion 是否已赋值
                     * @return BackupRegion 是否已赋值
                     * 
                     */
                    bool BackupRegionHasBeenSet() const;

                private:

                    /**
                     * Instance ID list. An instance ID is in the format of cdb-c1nl9rpv, which is the same as the instance ID displayed on the TencentDB Console page.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * Whether the clone instance and the source instance are in the same AZ. Valid values: `true` (yes), `false` (no).
                     */
                    std::string m_isRemoteZone;
                    bool m_isRemoteZoneHasBeenSet;

                    /**
                     * The region of the clone instance, such as `ap-guangzhou`.
                     */
                    std::string m_backupRegion;
                    bool m_backupRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEROLLBACKRANGETIMEREQUEST_H_
