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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_NODEMAININFO_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_NODEMAININFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * Main department information.
                */
                class NodeMainInfo : public AbstractModel
                {
                public:
                    NodeMainInfo();
                    ~NodeMainInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Department ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NodeId Department ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetNodeId() const;

                    /**
                     * 设置Department ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _nodeId Department ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNodeId(const int64_t& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

                    /**
                     * 获取Department name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return NodeName Department name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置Department name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _nodeName Department name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                private:

                    /**
                     * Department ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * Department name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_NODEMAININFO_H_
