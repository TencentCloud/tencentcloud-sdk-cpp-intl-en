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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_DELETESNAPSHOTGROUPREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_DELETESNAPSHOTGROUPREQUEST_H_

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
                * DeleteSnapshotGroup request structure.
                */
                class DeleteSnapshotGroupRequest : public AbstractModel
                {
                public:
                    DeleteSnapshotGroupRequest();
                    ~DeleteSnapshotGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies the snapshot group ID.
                     * @return SnapshotGroupId Specifies the snapshot group ID.
                     * 
                     */
                    std::string GetSnapshotGroupId() const;

                    /**
                     * 设置Specifies the snapshot group ID.
                     * @param _snapshotGroupId Specifies the snapshot group ID.
                     * 
                     */
                    void SetSnapshotGroupId(const std::string& _snapshotGroupId);

                    /**
                     * 判断参数 SnapshotGroupId 是否已赋值
                     * @return SnapshotGroupId 是否已赋值
                     * 
                     */
                    bool SnapshotGroupIdHasBeenSet() const;

                    /**
                     * 获取List of snapshot group ids. this parameter and the snapshot group ID must provide at least one. if both are provided, they will be merged with the snapshot group ID.
                     * @return SnapshotGroupIds List of snapshot group ids. this parameter and the snapshot group ID must provide at least one. if both are provided, they will be merged with the snapshot group ID.
                     * 
                     */
                    std::vector<std::string> GetSnapshotGroupIds() const;

                    /**
                     * 设置List of snapshot group ids. this parameter and the snapshot group ID must provide at least one. if both are provided, they will be merged with the snapshot group ID.
                     * @param _snapshotGroupIds List of snapshot group ids. this parameter and the snapshot group ID must provide at least one. if both are provided, they will be merged with the snapshot group ID.
                     * 
                     */
                    void SetSnapshotGroupIds(const std::vector<std::string>& _snapshotGroupIds);

                    /**
                     * 判断参数 SnapshotGroupIds 是否已赋值
                     * @return SnapshotGroupIds 是否已赋值
                     * 
                     */
                    bool SnapshotGroupIdsHasBeenSet() const;

                    /**
                     * 获取Specifies whether to delete the image associated with the snapshot group at the same time. valid values: set to false (not delete the image bound to the snapshot group; at this point, if the snapshot group has bound images, deletion will fail) or set to true (delete the image bound to the snapshot group simultaneously). default value is false.
                     * @return DeleteBindImages Specifies whether to delete the image associated with the snapshot group at the same time. valid values: set to false (not delete the image bound to the snapshot group; at this point, if the snapshot group has bound images, deletion will fail) or set to true (delete the image bound to the snapshot group simultaneously). default value is false.
                     * 
                     */
                    bool GetDeleteBindImages() const;

                    /**
                     * 设置Specifies whether to delete the image associated with the snapshot group at the same time. valid values: set to false (not delete the image bound to the snapshot group; at this point, if the snapshot group has bound images, deletion will fail) or set to true (delete the image bound to the snapshot group simultaneously). default value is false.
                     * @param _deleteBindImages Specifies whether to delete the image associated with the snapshot group at the same time. valid values: set to false (not delete the image bound to the snapshot group; at this point, if the snapshot group has bound images, deletion will fail) or set to true (delete the image bound to the snapshot group simultaneously). default value is false.
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
                     * Specifies the snapshot group ID.
                     */
                    std::string m_snapshotGroupId;
                    bool m_snapshotGroupIdHasBeenSet;

                    /**
                     * List of snapshot group ids. this parameter and the snapshot group ID must provide at least one. if both are provided, they will be merged with the snapshot group ID.
                     */
                    std::vector<std::string> m_snapshotGroupIds;
                    bool m_snapshotGroupIdsHasBeenSet;

                    /**
                     * Specifies whether to delete the image associated with the snapshot group at the same time. valid values: set to false (not delete the image bound to the snapshot group; at this point, if the snapshot group has bound images, deletion will fail) or set to true (delete the image bound to the snapshot group simultaneously). default value is false.
                     */
                    bool m_deleteBindImages;
                    bool m_deleteBindImagesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_DELETESNAPSHOTGROUPREQUEST_H_
