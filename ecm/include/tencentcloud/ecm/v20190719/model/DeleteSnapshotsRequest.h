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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DELETESNAPSHOTSREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DELETESNAPSHOTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DeleteSnapshots request structure.
                */
                class DeleteSnapshotsRequest : public AbstractModel
                {
                public:
                    DeleteSnapshotsRequest();
                    ~DeleteSnapshotsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of IDs of the snapshots to be deleted, which can be queried through [DescribeSnapshots](https://intl.cloud.tencent.com/document/product/362/15647?from_cn_redirect=1).
                     * @return SnapshotIds List of IDs of the snapshots to be deleted, which can be queried through [DescribeSnapshots](https://intl.cloud.tencent.com/document/product/362/15647?from_cn_redirect=1).
                     * 
                     */
                    std::vector<std::string> GetSnapshotIds() const;

                    /**
                     * 设置List of IDs of the snapshots to be deleted, which can be queried through [DescribeSnapshots](https://intl.cloud.tencent.com/document/product/362/15647?from_cn_redirect=1).
                     * @param _snapshotIds List of IDs of the snapshots to be deleted, which can be queried through [DescribeSnapshots](https://intl.cloud.tencent.com/document/product/362/15647?from_cn_redirect=1).
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
                     * 获取Whether to force delete the images associated with the snapshot.
                     * @return DeleteBindImages Whether to force delete the images associated with the snapshot.
                     * 
                     */
                    bool GetDeleteBindImages() const;

                    /**
                     * 设置Whether to force delete the images associated with the snapshot.
                     * @param _deleteBindImages Whether to force delete the images associated with the snapshot.
                     * 
                     */
                    void SetDeleteBindImages(const bool& _deleteBindImages);

                    /**
                     * 判断参数 DeleteBindImages 是否已赋值
                     * @return DeleteBindImages 是否已赋值
                     * 
                     */
                    bool DeleteBindImagesHasBeenSet() const;

                private:

                    /**
                     * List of IDs of the snapshots to be deleted, which can be queried through [DescribeSnapshots](https://intl.cloud.tencent.com/document/product/362/15647?from_cn_redirect=1).
                     */
                    std::vector<std::string> m_snapshotIds;
                    bool m_snapshotIdsHasBeenSet;

                    /**
                     * Whether to force delete the images associated with the snapshot.
                     */
                    bool m_deleteBindImages;
                    bool m_deleteBindImagesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DELETESNAPSHOTSREQUEST_H_
