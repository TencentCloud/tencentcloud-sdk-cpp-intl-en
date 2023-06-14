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

#ifndef TENCENTCLOUD_ORGANIZATION_V20181225_MODEL_ADDORGANIZATIONNODEREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20181225_MODEL_ADDORGANIZATIONNODEREQUEST_H_

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
                * AddOrganizationNode request structure.
                */
                class AddOrganizationNodeRequest : public AbstractModel
                {
                public:
                    AddOrganizationNodeRequest();
                    ~AddOrganizationNodeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Parent organizational unit ID
                     * @return ParentNodeId Parent organizational unit ID
                     * 
                     */
                    uint64_t GetParentNodeId() const;

                    /**
                     * 设置Parent organizational unit ID
                     * @param _parentNodeId Parent organizational unit ID
                     * 
                     */
                    void SetParentNodeId(const uint64_t& _parentNodeId);

                    /**
                     * 判断参数 ParentNodeId 是否已赋值
                     * @return ParentNodeId 是否已赋值
                     * 
                     */
                    bool ParentNodeIdHasBeenSet() const;

                    /**
                     * 获取Organizational unit name
                     * @return Name Organizational unit name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Organizational unit name
                     * @param _name Organizational unit name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * Parent organizational unit ID
                     */
                    uint64_t m_parentNodeId;
                    bool m_parentNodeIdHasBeenSet;

                    /**
                     * Organizational unit name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20181225_MODEL_ADDORGANIZATIONNODEREQUEST_H_
