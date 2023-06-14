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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MODIFYSNAPSHOTATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MODIFYSNAPSHOTATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
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
                     * 获取Snapshot ID, which can be queried through `DescribeSnapshots`.
                     * @return SnapshotId Snapshot ID, which can be queried through `DescribeSnapshots`.
                     * 
                     */
                    std::string GetSnapshotId() const;

                    /**
                     * 设置Snapshot ID, which can be queried through `DescribeSnapshots`.
                     * @param _snapshotId Snapshot ID, which can be queried through `DescribeSnapshots`.
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
                     * 获取New snapshot name, which can contain up to 60 characters.
                     * @return SnapshotName New snapshot name, which can contain up to 60 characters.
                     * 
                     */
                    std::string GetSnapshotName() const;

                    /**
                     * 设置New snapshot name, which can contain up to 60 characters.
                     * @param _snapshotName New snapshot name, which can contain up to 60 characters.
                     * 
                     */
                    void SetSnapshotName(const std::string& _snapshotName);

                    /**
                     * 判断参数 SnapshotName 是否已赋值
                     * @return SnapshotName 是否已赋值
                     * 
                     */
                    bool SnapshotNameHasBeenSet() const;

                private:

                    /**
                     * Snapshot ID, which can be queried through `DescribeSnapshots`.
                     */
                    std::string m_snapshotId;
                    bool m_snapshotIdHasBeenSet;

                    /**
                     * New snapshot name, which can contain up to 60 characters.
                     */
                    std::string m_snapshotName;
                    bool m_snapshotNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MODIFYSNAPSHOTATTRIBUTEREQUEST_H_
