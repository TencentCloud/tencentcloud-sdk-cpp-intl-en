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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEGOVERNANCELANEGROUPSREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEGOVERNANCELANEGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * DescribeGovernanceLaneGroups request structure.
                */
                class DescribeGovernanceLaneGroupsRequest : public AbstractModel
                {
                public:
                    DescribeGovernanceLaneGroupsRequest();
                    ~DescribeGovernanceLaneGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Engine Instance ID
                     * @return InstanceId Engine Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Engine Instance ID
                     * @param _instanceId Engine Instance ID
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
                     * 获取Pagination query offset.
                     * @return Offset Pagination query offset.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination query offset.
                     * @param _offset Pagination query offset.
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of items per page.
                     * @return Limit Number of items per page.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of items per page.
                     * @param _limit Number of items per page.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取swimlane name
                     * @return Name swimlane name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置swimlane name
                     * @param _name swimlane name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Lane ID
                     * @return GroupID Lane ID
                     * 
                     */
                    std::string GetGroupID() const;

                    /**
                     * 设置Lane ID
                     * @param _groupID Lane ID
                     * 
                     */
                    void SetGroupID(const std::string& _groupID);

                    /**
                     * 判断参数 GroupID 是否已赋值
                     * @return GroupID 是否已赋值
                     * 
                     */
                    bool GroupIDHasBeenSet() const;

                    /**
                     * 获取Whether to display the lane rule list
                     * @return Brief Whether to display the lane rule list
                     * 
                     */
                    bool GetBrief() const;

                    /**
                     * 设置Whether to display the lane rule list
                     * @param _brief Whether to display the lane rule list
                     * 
                     */
                    void SetBrief(const bool& _brief);

                    /**
                     * 判断参数 Brief 是否已赋值
                     * @return Brief 是否已赋值
                     * 
                     */
                    bool BriefHasBeenSet() const;

                private:

                    /**
                     * Engine Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Pagination query offset.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of items per page.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * swimlane name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Lane ID
                     */
                    std::string m_groupID;
                    bool m_groupIDHasBeenSet;

                    /**
                     * Whether to display the lane rule list
                     */
                    bool m_brief;
                    bool m_briefHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEGOVERNANCELANEGROUPSREQUEST_H_
