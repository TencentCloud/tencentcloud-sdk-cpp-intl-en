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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBEPROJECTSRESPONSE_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBEPROJECTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/Project.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * DescribeProjects response structure.
                */
                class DescribeProjectsResponse : public AbstractModel
                {
                public:
                    DescribeProjectsResponse();
                    ~DescribeProjectsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Project list.

Note: This field may return null, indicating that no valid value is found.
                     * @return ProjectSet Project list.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::vector<Project> GetProjectSet() const;

                    /**
                     * 判断参数 ProjectSet 是否已赋值
                     * @return ProjectSet 是否已赋值
                     * 
                     */
                    bool ProjectSetHasBeenSet() const;

                    /**
                     * 获取Total number of projects.
                     * @return Total Total number of projects.
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * Project list.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::vector<Project> m_projectSet;
                    bool m_projectSetHasBeenSet;

                    /**
                     * Total number of projects.
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBEPROJECTSRESPONSE_H_
