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

#ifndef TENCENTCLOUD_CAR_V20220110_MODEL_DESCRIBEAPPLICATIONSTATUSREQUEST_H_
#define TENCENTCLOUD_CAR_V20220110_MODEL_DESCRIBEAPPLICATIONSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Car
    {
        namespace V20220110
        {
            namespace Model
            {
                /**
                * DescribeApplicationStatus request structure.
                */
                class DescribeApplicationStatusRequest : public AbstractModel
                {
                public:
                    DescribeApplicationStatusRequest();
                    ~DescribeApplicationStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Application ID list.
                     * @return ApplicationIdList Application ID list.
                     * 
                     */
                    std::vector<std::string> GetApplicationIdList() const;

                    /**
                     * 设置Application ID list.
                     * @param _applicationIdList Application ID list.
                     * 
                     */
                    void SetApplicationIdList(const std::vector<std::string>& _applicationIdList);

                    /**
                     * 判断参数 ApplicationIdList 是否已赋值
                     * @return ApplicationIdList 是否已赋值
                     * 
                     */
                    bool ApplicationIdListHasBeenSet() const;

                private:

                    /**
                     * Application ID list.
                     */
                    std::vector<std::string> m_applicationIdList;
                    bool m_applicationIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAR_V20220110_MODEL_DESCRIBEAPPLICATIONSTATUSREQUEST_H_
