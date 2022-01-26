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

#ifndef TENCENTCLOUD_ORGANIZATION_V20181225_MODEL_GETORGANIZATIONMEMBERRESPONSE_H_
#define TENCENTCLOUD_ORGANIZATION_V20181225_MODEL_GETORGANIZATIONMEMBERRESPONSE_H_

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
                * GetOrganizationMember response structure.
                */
                class GetOrganizationMemberResponse : public AbstractModel
                {
                public:
                    GetOrganizationMemberResponse();
                    ~GetOrganizationMemberResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Organization member UIN
                     * @return Uin Organization member UIN
                     */
                    uint64_t GetUin() const;

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取Organization member name
                     * @return Name Organization member name
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Notes
                     * @return Remark Notes
                     */
                    std::string GetRemark() const;

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Joining time 
                     * @return JoinTime Joining time 
                     */
                    std::string GetJoinTime() const;

                    /**
                     * 判断参数 JoinTime 是否已赋值
                     * @return JoinTime 是否已赋值
                     */
                    bool JoinTimeHasBeenSet() const;

                    /**
                     * 获取Organizational unit ID
                     * @return NodeId Organizational unit ID
                     */
                    uint64_t GetNodeId() const;

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     */
                    bool NodeIdHasBeenSet() const;

                    /**
                     * 获取Organizational unit name
                     * @return NodeName Organizational unit name
                     */
                    std::string GetNodeName() const;

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取Parent organizational unit ID
                     * @return ParentNodeId Parent organizational unit ID
                     */
                    uint64_t GetParentNodeId() const;

                    /**
                     * 判断参数 ParentNodeId 是否已赋值
                     * @return ParentNodeId 是否已赋值
                     */
                    bool ParentNodeIdHasBeenSet() const;

                private:

                    /**
                     * Organization member UIN
                     */
                    uint64_t m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Organization member name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Notes
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Joining time 
                     */
                    std::string m_joinTime;
                    bool m_joinTimeHasBeenSet;

                    /**
                     * Organizational unit ID
                     */
                    uint64_t m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * Organizational unit name
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * Parent organizational unit ID
                     */
                    uint64_t m_parentNodeId;
                    bool m_parentNodeIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20181225_MODEL_GETORGANIZATIONMEMBERRESPONSE_H_
