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

#ifndef TENCENTCLOUD_CHDFS_V20201112_MODEL_DESCRIBEACCESSGROUPRESPONSE_H_
#define TENCENTCLOUD_CHDFS_V20201112_MODEL_DESCRIBEACCESSGROUPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/chdfs/v20201112/model/AccessGroup.h>


namespace TencentCloud
{
    namespace Chdfs
    {
        namespace V20201112
        {
            namespace Model
            {
                /**
                * DescribeAccessGroup response structure.
                */
                class DescribeAccessGroupResponse : public AbstractModel
                {
                public:
                    DescribeAccessGroupResponse();
                    ~DescribeAccessGroupResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Permission group
                     * @return AccessGroup Permission group
                     * 
                     */
                    AccessGroup GetAccessGroup() const;

                    /**
                     * 判断参数 AccessGroup 是否已赋值
                     * @return AccessGroup 是否已赋值
                     * 
                     */
                    bool AccessGroupHasBeenSet() const;

                private:

                    /**
                     * Permission group
                     */
                    AccessGroup m_accessGroup;
                    bool m_accessGroupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHDFS_V20201112_MODEL_DESCRIBEACCESSGROUPRESPONSE_H_
