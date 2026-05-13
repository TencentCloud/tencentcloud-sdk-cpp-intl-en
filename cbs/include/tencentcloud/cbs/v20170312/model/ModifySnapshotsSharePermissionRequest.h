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
                     * 获取The ID of the snapshot. You can obtain this by using [DescribeSnapshots](https://intl.cloud.tencent.com/document/api/362/15647?from_cn_redirect=1).
                     * @return SnapshotIds The ID of the snapshot. You can obtain this by using [DescribeSnapshots](https://intl.cloud.tencent.com/document/api/362/15647?from_cn_redirect=1).
                     * 
                     */
                    std::vector<std::string> GetSnapshotIds() const;

                    /**
                     * 设置The ID of the snapshot. You can obtain this by using [DescribeSnapshots](https://intl.cloud.tencent.com/document/api/362/15647?from_cn_redirect=1).
                     * @param _snapshotIds The ID of the snapshot. You can obtain this by using [DescribeSnapshots](https://intl.cloud.tencent.com/document/api/362/15647?from_cn_redirect=1).
                     * 
                     */
                    void SetSnapshotIds(const std::vector<std::string>& _snapshotIds);

                    /**
                     * 判断参数 SnapshotIds 是否已赋值
                     * @return SnapshotIds 是否已赋值
                     * 
                     */
                    bool SnapshotIdsHasBeenSet() const;

                    /**
                     * 获取Account Id list for receiving shared snapshots. the format of array-type parameters can be found in the API overview (https://www.tencentcloud.com/document/API/213/568?from_cn_redirect=1). the account Id is different from a QQ number. to query a user account Id, view the account Id column in the account information (https://console.cloud.tencent.com/developer).
                     * @return AccountIds Account Id list for receiving shared snapshots. the format of array-type parameters can be found in the API overview (https://www.tencentcloud.com/document/API/213/568?from_cn_redirect=1). the account Id is different from a QQ number. to query a user account Id, view the account Id column in the account information (https://console.cloud.tencent.com/developer).
                     * 
                     */
                    std::vector<std::string> GetAccountIds() const;

                    /**
                     * 设置Account Id list for receiving shared snapshots. the format of array-type parameters can be found in the API overview (https://www.tencentcloud.com/document/API/213/568?from_cn_redirect=1). the account Id is different from a QQ number. to query a user account Id, view the account Id column in the account information (https://console.cloud.tencent.com/developer).
                     * @param _accountIds Account Id list for receiving shared snapshots. the format of array-type parameters can be found in the API overview (https://www.tencentcloud.com/document/API/213/568?from_cn_redirect=1). the account Id is different from a QQ number. to query a user account Id, view the account Id column in the account information (https://console.cloud.tencent.com/developer).
                     * 
                     */
                    void SetAccountIds(const std::vector<std::string>& _accountIds);

                    /**
                     * 判断参数 AccountIds 是否已赋值
                     * @return AccountIds 是否已赋值
                     * 
                     */
                    bool AccountIdsHasBeenSet() const;

                    /**
                     * 获取Operations. Valid values: `SHARE`, sharing an image; `CANCEL`, cancelling the sharing of an image.
                     * @return Permission Operations. Valid values: `SHARE`, sharing an image; `CANCEL`, cancelling the sharing of an image.
                     * 
                     */
                    std::string GetPermission() const;

                    /**
                     * 设置Operations. Valid values: `SHARE`, sharing an image; `CANCEL`, cancelling the sharing of an image.
                     * @param _permission Operations. Valid values: `SHARE`, sharing an image; `CANCEL`, cancelling the sharing of an image.
                     * 
                     */
                    void SetPermission(const std::string& _permission);

                    /**
                     * 判断参数 Permission 是否已赋值
                     * @return Permission 是否已赋值
                     * 
                     */
                    bool PermissionHasBeenSet() const;

                private:

                    /**
                     * The ID of the snapshot. You can obtain this by using [DescribeSnapshots](https://intl.cloud.tencent.com/document/api/362/15647?from_cn_redirect=1).
                     */
                    std::vector<std::string> m_snapshotIds;
                    bool m_snapshotIdsHasBeenSet;

                    /**
                     * Account Id list for receiving shared snapshots. the format of array-type parameters can be found in the API overview (https://www.tencentcloud.com/document/API/213/568?from_cn_redirect=1). the account Id is different from a QQ number. to query a user account Id, view the account Id column in the account information (https://console.cloud.tencent.com/developer).
                     */
                    std::vector<std::string> m_accountIds;
                    bool m_accountIdsHasBeenSet;

                    /**
                     * Operations. Valid values: `SHARE`, sharing an image; `CANCEL`, cancelling the sharing of an image.
                     */
                    std::string m_permission;
                    bool m_permissionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_MODIFYSNAPSHOTSSHAREPERMISSIONREQUEST_H_
