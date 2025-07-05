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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_SCALEOUTINSTANCEREQUEST_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_SCALEOUTINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwpg
    {
        namespace V20201230
        {
            namespace Model
            {
                /**
                * ScaleOutInstance request structure.
                */
                class ScaleOutInstanceRequest : public AbstractModel
                {
                public:
                    ScaleOutInstanceRequest();
                    ~ScaleOutInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取InstanceId.
                     * @return InstanceId InstanceId.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置InstanceId.
                     * @param _instanceId InstanceId.
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
                     * 获取Node type.
                     * @return NodeType Node type.
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置Node type.
                     * @param _nodeType Node type.
                     * 
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取Number of scale-out nodes.
                     * @return ScaleOutCount Number of scale-out nodes.
                     * 
                     */
                    int64_t GetScaleOutCount() const;

                    /**
                     * 设置Number of scale-out nodes.
                     * @param _scaleOutCount Number of scale-out nodes.
                     * 
                     */
                    void SetScaleOutCount(const int64_t& _scaleOutCount);

                    /**
                     * 判断参数 ScaleOutCount 是否已赋值
                     * @return ScaleOutCount 是否已赋值
                     * 
                     */
                    bool ScaleOutCountHasBeenSet() const;

                private:

                    /**
                     * InstanceId.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Node type.
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * Number of scale-out nodes.
                     */
                    int64_t m_scaleOutCount;
                    bool m_scaleOutCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_SCALEOUTINSTANCEREQUEST_H_
