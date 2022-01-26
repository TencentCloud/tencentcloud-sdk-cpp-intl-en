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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DESCRIBEAPPLICATIONSRESPONSE_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DESCRIBEAPPLICATIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/Application.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * DescribeApplications response structure.
                */
                class DescribeApplicationsResponse : public AbstractModel
                {
                public:
                    DescribeApplicationsResponse();
                    ~DescribeApplicationsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Application list
                     * @return Applications Application list
                     */
                    std::vector<Application> GetApplications() const;

                    /**
                     * 判断参数 Applications 是否已赋值
                     * @return Applications 是否已赋值
                     */
                    bool ApplicationsHasBeenSet() const;

                    /**
                     * 获取Total number of applications
                     * @return TotalCount Total number of applications
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * Application list
                     */
                    std::vector<Application> m_applications;
                    bool m_applicationsHasBeenSet;

                    /**
                     * Total number of applications
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DESCRIBEAPPLICATIONSRESPONSE_H_
