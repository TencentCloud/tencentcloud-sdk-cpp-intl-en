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

#ifndef TENCENTCLOUD_ORGANIZATION_V20181225_MODEL_ADDORGANIZATIONNODERESPONSE_H_
#define TENCENTCLOUD_ORGANIZATION_V20181225_MODEL_ADDORGANIZATIONNODERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20181225
        {
            namespace Model
            {
                /**
                * AddOrganizationNode response structure.
                */
                class AddOrganizationNodeResponse : public AbstractModel
                {
                public:
                    AddOrganizationNodeResponse();
                    ~AddOrganizationNodeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Organizational unit ID
                     * @return NodeId Organizational unit ID
                     * 
                     */
                    uint64_t GetNodeId() const;

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

                private:

                    /**
                     * Organizational unit ID
                     */
                    uint64_t m_nodeId;
                    bool m_nodeIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20181225_MODEL_ADDORGANIZATIONNODERESPONSE_H_
