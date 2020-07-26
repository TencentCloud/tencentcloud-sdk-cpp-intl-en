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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_MODIFYSNAPSHOTATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_MODIFYSNAPSHOTATTRIBUTEREQUEST_H_

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
                * ModifySnapshotAttribute request structure.
                */
                class ModifySnapshotAttributeRequest : public AbstractModel
                {
                public:
                    ModifySnapshotAttributeRequest();
                    ~ModifySnapshotAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Snapshot ID, which can be queried via [DescribeSnapshots](/document/product/362/15647).
                     * @return SnapshotId Snapshot ID, which can be queried via [DescribeSnapshots](/document/product/362/15647).
                     */
                    std::string GetSnapshotId() const;

                    /**
                     * 设置Snapshot ID, which can be queried via [DescribeSnapshots](/document/product/362/15647).
                     * @param SnapshotId Snapshot ID, which can be queried via [DescribeSnapshots](/document/product/362/15647).
                     */
                    void SetSnapshotId(const std::string& _snapshotId);

                    /**
                     * 判断参数 SnapshotId 是否已赋值
                     * @return SnapshotId 是否已赋值
                     */
                    bool SnapshotIdHasBeenSet() const;

                    /**
                     * 获取Name of new snapshot. Maximum length is 60 bytes.
                     * @return SnapshotName Name of new snapshot. Maximum length is 60 bytes.
                     */
                    std::string GetSnapshotName() const;

                    /**
                     * 设置Name of new snapshot. Maximum length is 60 bytes.
                     * @param SnapshotName Name of new snapshot. Maximum length is 60 bytes.
                     */
                    void SetSnapshotName(const std::string& _snapshotName);

                    /**
                     * 判断参数 SnapshotName 是否已赋值
                     * @return SnapshotName 是否已赋值
                     */
                    bool SnapshotNameHasBeenSet() const;

                    /**
                     * 获取The retention time of the snapshot. FALSE: non-permanent retention; TRUE: permanent retention. You can only modify non-permanent snapshots to permanent snapshots.
                     * @return IsPermanent The retention time of the snapshot. FALSE: non-permanent retention; TRUE: permanent retention. You can only modify non-permanent snapshots to permanent snapshots.
                     */
                    bool GetIsPermanent() const;

                    /**
                     * 设置The retention time of the snapshot. FALSE: non-permanent retention; TRUE: permanent retention. You can only modify non-permanent snapshots to permanent snapshots.
                     * @param IsPermanent The retention time of the snapshot. FALSE: non-permanent retention; TRUE: permanent retention. You can only modify non-permanent snapshots to permanent snapshots.
                     */
                    void SetIsPermanent(const bool& _isPermanent);

                    /**
                     * 判断参数 IsPermanent 是否已赋值
                     * @return IsPermanent 是否已赋值
                     */
                    bool IsPermanentHasBeenSet() const;

                private:

                    /**
                     * Snapshot ID, which can be queried via [DescribeSnapshots](/document/product/362/15647).
                     */
                    std::string m_snapshotId;
                    bool m_snapshotIdHasBeenSet;

                    /**
                     * Name of new snapshot. Maximum length is 60 bytes.
                     */
                    std::string m_snapshotName;
                    bool m_snapshotNameHasBeenSet;

                    /**
                     * The retention time of the snapshot. FALSE: non-permanent retention; TRUE: permanent retention. You can only modify non-permanent snapshots to permanent snapshots.
                     */
                    bool m_isPermanent;
                    bool m_isPermanentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_MODIFYSNAPSHOTATTRIBUTEREQUEST_H_
