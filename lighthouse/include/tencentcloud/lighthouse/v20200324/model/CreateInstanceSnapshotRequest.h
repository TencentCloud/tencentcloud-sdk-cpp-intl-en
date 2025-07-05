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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_CREATEINSTANCESNAPSHOTREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_CREATEINSTANCESNAPSHOTREQUEST_H_

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
                * CreateInstanceSnapshot request structure.
                */
                class CreateInstanceSnapshotRequest : public AbstractModel
                {
                public:
                    CreateInstanceSnapshotRequest();
                    ~CreateInstanceSnapshotRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the instance for which to create a snapshot.
                     * @return InstanceId ID of the instance for which to create a snapshot.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ID of the instance for which to create a snapshot.
                     * @param _instanceId ID of the instance for which to create a snapshot.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Snapshot name, which can contain up to 60 characters.
                     * @return SnapshotName Snapshot name, which can contain up to 60 characters.
                     * 
                     */
                    std::string GetSnapshotName() const;

                    /**
                     * 设置Snapshot name, which can contain up to 60 characters.
                     * @param _snapshotName Snapshot name, which can contain up to 60 characters.
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
                     * ID of the instance for which to create a snapshot.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Snapshot name, which can contain up to 60 characters.
                     */
                    std::string m_snapshotName;
                    bool m_snapshotNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_CREATEINSTANCESNAPSHOTREQUEST_H_
