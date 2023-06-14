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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBERESOURCEGROUPNEWREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBERESOURCEGROUPNEWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeResourceGroupNew request structure.
                */
                class DescribeResourceGroupNewRequest : public AbstractModel
                {
                public:
                    DescribeResourceGroupNewRequest();
                    ~DescribeResourceGroupNewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Query type. Network–VPC; business recognition–resource; resource tag–tag
                     * @return QueryType Query type. Network–VPC; business recognition–resource; resource tag–tag
                     * 
                     */
                    std::string GetQueryType() const;

                    /**
                     * 设置Query type. Network–VPC; business recognition–resource; resource tag–tag
                     * @param _queryType Query type. Network–VPC; business recognition–resource; resource tag–tag
                     * 
                     */
                    void SetQueryType(const std::string& _queryType);

                    /**
                     * 判断参数 QueryType 是否已赋值
                     * @return QueryType 是否已赋值
                     * 
                     */
                    bool QueryTypeHasBeenSet() const;

                    /**
                     * 获取Asset group ID, 0: all asset group IDs
                     * @return GroupId Asset group ID, 0: all asset group IDs
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Asset group ID, 0: all asset group IDs
                     * @param _groupId Asset group ID, 0: all asset group IDs
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取all: all, including subgroups; own: my asset groups only
                     * @return ShowType all: all, including subgroups; own: my asset groups only
                     * 
                     */
                    std::string GetShowType() const;

                    /**
                     * 设置all: all, including subgroups; own: my asset groups only
                     * @param _showType all: all, including subgroups; own: my asset groups only
                     * 
                     */
                    void SetShowType(const std::string& _showType);

                    /**
                     * 判断参数 ShowType 是否已赋值
                     * @return ShowType 是否已赋值
                     * 
                     */
                    bool ShowTypeHasBeenSet() const;

                private:

                    /**
                     * Query type. Network–VPC; business recognition–resource; resource tag–tag
                     */
                    std::string m_queryType;
                    bool m_queryTypeHasBeenSet;

                    /**
                     * Asset group ID, 0: all asset group IDs
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * all: all, including subgroups; own: my asset groups only
                     */
                    std::string m_showType;
                    bool m_showTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBERESOURCEGROUPNEWREQUEST_H_
