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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_MODIFYSNAPSHOTSSHAREPERMISSIONREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_MODIFYSNAPSHOTSSHAREPERMISSIONREQUEST_H_

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
                * ModifySnapshotsSharePermission request structure.
                */
                class ModifySnapshotsSharePermissionRequest : public AbstractModel
                {
                public:
                    ModifySnapshotsSharePermissionRequest();
                    ~ModifySnapshotsSharePermissionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of account IDs with which a snapshot is shared. For the format of array-type parameters, see [API Introduction](https://cloud.tencent.com/document/api/213/568). You can find the account ID in [Account Information](https://console.cloud.tencent.com/developer).
                     * @return AccountIds List of account IDs with which a snapshot is shared. For the format of array-type parameters, see [API Introduction](https://cloud.tencent.com/document/api/213/568). You can find the account ID in [Account Information](https://console.cloud.tencent.com/developer).
                     */
                    std::vector<std::string> GetAccountIds() const;

                    /**
                     * 设置List of account IDs with which a snapshot is shared. For the format of array-type parameters, see [API Introduction](https://cloud.tencent.com/document/api/213/568). You can find the account ID in [Account Information](https://console.cloud.tencent.com/developer).
                     * @param AccountIds List of account IDs with which a snapshot is shared. For the format of array-type parameters, see [API Introduction](https://cloud.tencent.com/document/api/213/568). You can find the account ID in [Account Information](https://console.cloud.tencent.com/developer).
                     */
                    void SetAccountIds(const std::vector<std::string>& _accountIds);

                    /**
                     * 判断参数 AccountIds 是否已赋值
                     * @return AccountIds 是否已赋值
                     */
                    bool AccountIdsHasBeenSet() const;

                    /**
                     * 获取Operations. Valid values: `SHARE`, sharing an image; `CANCEL`, cancelling the sharing of an image.
                     * @return Permission Operations. Valid values: `SHARE`, sharing an image; `CANCEL`, cancelling the sharing of an image.
                     */
                    std::string GetPermission() const;

                    /**
                     * 设置Operations. Valid values: `SHARE`, sharing an image; `CANCEL`, cancelling the sharing of an image.
                     * @param Permission Operations. Valid values: `SHARE`, sharing an image; `CANCEL`, cancelling the sharing of an image.
                     */
                    void SetPermission(const std::string& _permission);

                    /**
                     * 判断参数 Permission 是否已赋值
                     * @return Permission 是否已赋值
                     */
                    bool PermissionHasBeenSet() const;

                    /**
                     * 获取The ID of the snapshot. You can obtain this by using [DescribeSnapshots](https://cloud.tencent.com/document/api/362/15647).
                     * @return SnapshotIds The ID of the snapshot. You can obtain this by using [DescribeSnapshots](https://cloud.tencent.com/document/api/362/15647).
                     */
                    std::vector<std::string> GetSnapshotIds() const;

                    /**
                     * 设置The ID of the snapshot. You can obtain this by using [DescribeSnapshots](https://cloud.tencent.com/document/api/362/15647).
                     * @param SnapshotIds The ID of the snapshot. You can obtain this by using [DescribeSnapshots](https://cloud.tencent.com/document/api/362/15647).
                     */
                    void SetSnapshotIds(const std::vector<std::string>& _snapshotIds);

                    /**
                     * 判断参数 SnapshotIds 是否已赋值
                     * @return SnapshotIds 是否已赋值
                     */
                    bool SnapshotIdsHasBeenSet() const;

                private:

                    /**
                     * List of account IDs with which a snapshot is shared. For the format of array-type parameters, see [API Introduction](https://cloud.tencent.com/document/api/213/568). You can find the account ID in [Account Information](https://console.cloud.tencent.com/developer).
                     */
                    std::vector<std::string> m_accountIds;
                    bool m_accountIdsHasBeenSet;

                    /**
                     * Operations. Valid values: `SHARE`, sharing an image; `CANCEL`, cancelling the sharing of an image.
                     */
                    std::string m_permission;
                    bool m_permissionHasBeenSet;

                    /**
                     * The ID of the snapshot. You can obtain this by using [DescribeSnapshots](https://cloud.tencent.com/document/api/362/15647).
                     */
                    std::vector<std::string> m_snapshotIds;
                    bool m_snapshotIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_MODIFYSNAPSHOTSSHAREPERMISSIONREQUEST_H_
