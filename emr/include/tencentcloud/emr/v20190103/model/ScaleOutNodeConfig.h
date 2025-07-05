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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_SCALEOUTNODECONFIG_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_SCALEOUTNODECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * The type and number of nodes to be added.
                */
                class ScaleOutNodeConfig : public AbstractModel
                {
                public:
                    ScaleOutNodeConfig();
                    ~ScaleOutNodeConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Valid values of node type:
  <li>MASTER</li>
  <li>TASK</li>
  <li>CORE</li>
  <li>ROUTER</li>
                     * @return NodeFlag Valid values of node type:
  <li>MASTER</li>
  <li>TASK</li>
  <li>CORE</li>
  <li>ROUTER</li>
                     * 
                     */
                    std::string GetNodeFlag() const;

                    /**
                     * 设置Valid values of node type:
  <li>MASTER</li>
  <li>TASK</li>
  <li>CORE</li>
  <li>ROUTER</li>
                     * @param _nodeFlag Valid values of node type:
  <li>MASTER</li>
  <li>TASK</li>
  <li>CORE</li>
  <li>ROUTER</li>
                     * 
                     */
                    void SetNodeFlag(const std::string& _nodeFlag);

                    /**
                     * 判断参数 NodeFlag 是否已赋值
                     * @return NodeFlag 是否已赋值
                     * 
                     */
                    bool NodeFlagHasBeenSet() const;

                    /**
                     * 获取The number of nodes.
                     * @return NodeCount The number of nodes.
                     * 
                     */
                    uint64_t GetNodeCount() const;

                    /**
                     * 设置The number of nodes.
                     * @param _nodeCount The number of nodes.
                     * 
                     */
                    void SetNodeCount(const uint64_t& _nodeCount);

                    /**
                     * 判断参数 NodeCount 是否已赋值
                     * @return NodeCount 是否已赋值
                     * 
                     */
                    bool NodeCountHasBeenSet() const;

                private:

                    /**
                     * Valid values of node type:
  <li>MASTER</li>
  <li>TASK</li>
  <li>CORE</li>
  <li>ROUTER</li>
                     */
                    std::string m_nodeFlag;
                    bool m_nodeFlagHasBeenSet;

                    /**
                     * The number of nodes.
                     */
                    uint64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_SCALEOUTNODECONFIG_H_
