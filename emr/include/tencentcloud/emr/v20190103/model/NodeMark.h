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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_NODEMARK_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_NODEMARK_H_

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
                * Node tag information.
                */
                class NodeMark : public AbstractModel
                {
                public:
                    NodeMark();
                    ~NodeMark() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Node type: master, core, task, router.
                     * @return NodeType Node type: master, core, task, router.
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置Node type: master, core, task, router.
                     * @param _nodeType Node type: master, core, task, router.
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
                     * 获取Node tag information: currently used only in the Terraform. It serves as an input parameter to differentiate information of nodes with the same type.
                     * @return NodeNames Node tag information: currently used only in the Terraform. It serves as an input parameter to differentiate information of nodes with the same type.
                     * 
                     */
                    std::vector<std::string> GetNodeNames() const;

                    /**
                     * 设置Node tag information: currently used only in the Terraform. It serves as an input parameter to differentiate information of nodes with the same type.
                     * @param _nodeNames Node tag information: currently used only in the Terraform. It serves as an input parameter to differentiate information of nodes with the same type.
                     * 
                     */
                    void SetNodeNames(const std::vector<std::string>& _nodeNames);

                    /**
                     * 判断参数 NodeNames 是否已赋值
                     * @return NodeNames 是否已赋值
                     * 
                     */
                    bool NodeNamesHasBeenSet() const;

                    /**
                     * 获取Availability zone name.
                     * @return Zone Availability zone name.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Availability zone name.
                     * @param _zone Availability zone name.
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                private:

                    /**
                     * Node type: master, core, task, router.
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * Node tag information: currently used only in the Terraform. It serves as an input parameter to differentiate information of nodes with the same type.
                     */
                    std::vector<std::string> m_nodeNames;
                    bool m_nodeNamesHasBeenSet;

                    /**
                     * Availability zone name.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_NODEMARK_H_
