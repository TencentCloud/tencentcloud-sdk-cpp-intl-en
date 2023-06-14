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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_APPLYSNAPSHOTREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_APPLYSNAPSHOTREQUEST_H_

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
                * ApplySnapshot request structure.
                */
                class ApplySnapshotRequest : public AbstractModel
                {
                public:
                    ApplySnapshotRequest();
                    ~ApplySnapshotRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Snapshot ID, which can be queried via [DescribeSnapshots](https://intl.cloud.tencent.com/document/product/362/15647?from_cn_redirect=1).
                     * @return SnapshotId Snapshot ID, which can be queried via [DescribeSnapshots](https://intl.cloud.tencent.com/document/product/362/15647?from_cn_redirect=1).
                     * 
                     */
                    std::string GetSnapshotId() const;

                    /**
                     * 设置Snapshot ID, which can be queried via [DescribeSnapshots](https://intl.cloud.tencent.com/document/product/362/15647?from_cn_redirect=1).
                     * @param _snapshotId Snapshot ID, which can be queried via [DescribeSnapshots](https://intl.cloud.tencent.com/document/product/362/15647?from_cn_redirect=1).
                     * 
                     */
                    void SetSnapshotId(const std::string& _snapshotId);

                    /**
                     * 判断参数 SnapshotId 是否已赋值
                     * @return SnapshotId 是否已赋值
                     * 
                     */
                    bool SnapshotIdHasBeenSet() const;

                    /**
                     * 获取ID of the original cloud disk corresponding to the snapshot, which can be queried via the API [DescribeDisks](https://intl.cloud.tencent.com/document/product/362/16315?from_cn_redirect=1).
                     * @return DiskId ID of the original cloud disk corresponding to the snapshot, which can be queried via the API [DescribeDisks](https://intl.cloud.tencent.com/document/product/362/16315?from_cn_redirect=1).
                     * 
                     */
                    std::string GetDiskId() const;

                    /**
                     * 设置ID of the original cloud disk corresponding to the snapshot, which can be queried via the API [DescribeDisks](https://intl.cloud.tencent.com/document/product/362/16315?from_cn_redirect=1).
                     * @param _diskId ID of the original cloud disk corresponding to the snapshot, which can be queried via the API [DescribeDisks](https://intl.cloud.tencent.com/document/product/362/16315?from_cn_redirect=1).
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
                     * 获取Specifies whether to shut down a CVM automatically before a rollback
                     * @return AutoStopInstance Specifies whether to shut down a CVM automatically before a rollback
                     * 
                     */
                    bool GetAutoStopInstance() const;

                    /**
                     * 设置Specifies whether to shut down a CVM automatically before a rollback
                     * @param _autoStopInstance Specifies whether to shut down a CVM automatically before a rollback
                     * 
                     */
                    void SetAutoStopInstance(const bool& _autoStopInstance);

                    /**
                     * 判断参数 AutoStopInstance 是否已赋值
                     * @return AutoStopInstance 是否已赋值
                     * 
                     */
                    bool AutoStopInstanceHasBeenSet() const;

                    /**
                     * 获取Specifies whether to start up a CVM automatically after a rollback
                     * @return AutoStartInstance Specifies whether to start up a CVM automatically after a rollback
                     * 
                     */
                    bool GetAutoStartInstance() const;

                    /**
                     * 设置Specifies whether to start up a CVM automatically after a rollback
                     * @param _autoStartInstance Specifies whether to start up a CVM automatically after a rollback
                     * 
                     */
                    void SetAutoStartInstance(const bool& _autoStartInstance);

                    /**
                     * 判断参数 AutoStartInstance 是否已赋值
                     * @return AutoStartInstance 是否已赋值
                     * 
                     */
                    bool AutoStartInstanceHasBeenSet() const;

                private:

                    /**
                     * Snapshot ID, which can be queried via [DescribeSnapshots](https://intl.cloud.tencent.com/document/product/362/15647?from_cn_redirect=1).
                     */
                    std::string m_snapshotId;
                    bool m_snapshotIdHasBeenSet;

                    /**
                     * ID of the original cloud disk corresponding to the snapshot, which can be queried via the API [DescribeDisks](https://intl.cloud.tencent.com/document/product/362/16315?from_cn_redirect=1).
                     */
                    std::string m_diskId;
                    bool m_diskIdHasBeenSet;

                    /**
                     * Specifies whether to shut down a CVM automatically before a rollback
                     */
                    bool m_autoStopInstance;
                    bool m_autoStopInstanceHasBeenSet;

                    /**
                     * Specifies whether to start up a CVM automatically after a rollback
                     */
                    bool m_autoStartInstance;
                    bool m_autoStartInstanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_APPLYSNAPSHOTREQUEST_H_
