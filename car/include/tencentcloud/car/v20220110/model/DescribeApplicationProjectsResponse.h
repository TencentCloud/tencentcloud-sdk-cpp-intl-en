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

#ifndef TENCENTCLOUD_CAR_V20220110_MODEL_DESCRIBEAPPLICATIONPROJECTSRESPONSE_H_
#define TENCENTCLOUD_CAR_V20220110_MODEL_DESCRIBEAPPLICATIONPROJECTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/car/v20220110/model/ApplicationProject.h>


namespace TencentCloud
{
    namespace Car
    {
        namespace V20220110
        {
            namespace Model
            {
                /**
                * DescribeApplicationProjects response structure.
                */
                class DescribeApplicationProjectsResponse : public AbstractModel
                {
                public:
                    DescribeApplicationProjectsResponse();
                    ~DescribeApplicationProjectsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Project list.Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Projects Project list.Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ApplicationProject> GetProjects() const;

                    /**
                     * 判断参数 Projects 是否已赋值
                     * @return Projects 是否已赋值
                     * 
                     */
                    bool ProjectsHasBeenSet() const;

                    /**
                     * 获取Total number.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Total Total number.

Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Project list.Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ApplicationProject> m_projects;
                    bool m_projectsHasBeenSet;

                    /**
                     * Total number.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAR_V20220110_MODEL_DESCRIBEAPPLICATIONPROJECTSRESPONSE_H_
