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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEABTESTCONFIGREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEABTESTCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeABTestConfig request structure.
                */
                class DescribeABTestConfigRequest : public AbstractModel
                {
                public:
                    DescribeABTestConfigRequest();
                    ~DescribeABTestConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Greyscale project name
                     * @return ProjectName Greyscale project name
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置Greyscale project name
                     * @param _projectName Greyscale project name
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                private:

                    /**
                     * Greyscale project name
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEABTESTCONFIGREQUEST_H_
