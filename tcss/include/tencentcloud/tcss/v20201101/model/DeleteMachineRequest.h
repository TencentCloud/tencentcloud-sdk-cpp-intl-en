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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DELETEMACHINEREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DELETEMACHINEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DeleteMachine request structure.
                */
                class DeleteMachineRequest : public AbstractModel
                {
                public:
                    DeleteMachineRequest();
                    ~DeleteMachineRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Agent UUID
                     * @return Uuid Agent UUID
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置Agent UUID
                     * @param _uuid Agent UUID
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取Super Node Unique ID
                     * @return NodeUniqueIds Super Node Unique ID
                     * 
                     */
                    std::vector<std::string> GetNodeUniqueIds() const;

                    /**
                     * 设置Super Node Unique ID
                     * @param _nodeUniqueIds Super Node Unique ID
                     * 
                     */
                    void SetNodeUniqueIds(const std::vector<std::string>& _nodeUniqueIds);

                    /**
                     * 判断参数 NodeUniqueIds 是否已赋值
                     * @return NodeUniqueIds 是否已赋值
                     * 
                     */
                    bool NodeUniqueIdsHasBeenSet() const;

                    /**
                     * 获取UUID list
                     * @return UUIDs UUID list
                     * 
                     */
                    std::vector<std::string> GetUUIDs() const;

                    /**
                     * 设置UUID list
                     * @param _uUIDs UUID list
                     * 
                     */
                    void SetUUIDs(const std::vector<std::string>& _uUIDs);

                    /**
                     * 判断参数 UUIDs 是否已赋值
                     * @return UUIDs 是否已赋值
                     * 
                     */
                    bool UUIDsHasBeenSet() const;

                private:

                    /**
                     * Agent UUID
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * Super Node Unique ID
                     */
                    std::vector<std::string> m_nodeUniqueIds;
                    bool m_nodeUniqueIdsHasBeenSet;

                    /**
                     * UUID list
                     */
                    std::vector<std::string> m_uUIDs;
                    bool m_uUIDsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DELETEMACHINEREQUEST_H_
