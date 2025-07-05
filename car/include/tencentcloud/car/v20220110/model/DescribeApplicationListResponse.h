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

#ifndef TENCENTCLOUD_CAR_V20220110_MODEL_DESCRIBEAPPLICATIONLISTRESPONSE_H_
#define TENCENTCLOUD_CAR_V20220110_MODEL_DESCRIBEAPPLICATIONLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/car/v20220110/model/UserApplicationInfo.h>
#include <tencentcloud/car/v20220110/model/UserMobileApplicationInfo.h>


namespace TencentCloud
{
    namespace Car
    {
        namespace V20220110
        {
            namespace Model
            {
                /**
                * DescribeApplicationList response structure.
                */
                class DescribeApplicationListResponse : public AbstractModel
                {
                public:
                    DescribeApplicationListResponse();
                    ~DescribeApplicationListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Application list information.
                     * @return UserApplicationList Application list information.
                     * 
                     */
                    std::vector<UserApplicationInfo> GetUserApplicationList() const;

                    /**
                     * 判断参数 UserApplicationList 是否已赋值
                     * @return UserApplicationList 是否已赋值
                     * 
                     */
                    bool UserApplicationListHasBeenSet() const;

                    /**
                     * 获取Total number of applications.
                     * @return ApplicationTotal Total number of applications.
                     * 
                     */
                    int64_t GetApplicationTotal() const;

                    /**
                     * 判断参数 ApplicationTotal 是否已赋值
                     * @return ApplicationTotal 是否已赋值
                     * 
                     */
                    bool ApplicationTotalHasBeenSet() const;

                    /**
                     * 获取Mobile application list information.
                     * @return UserMobileApplicationList Mobile application list information.
                     * 
                     */
                    std::vector<UserMobileApplicationInfo> GetUserMobileApplicationList() const;

                    /**
                     * 判断参数 UserMobileApplicationList 是否已赋值
                     * @return UserMobileApplicationList 是否已赋值
                     * 
                     */
                    bool UserMobileApplicationListHasBeenSet() const;

                private:

                    /**
                     * Application list information.
                     */
                    std::vector<UserApplicationInfo> m_userApplicationList;
                    bool m_userApplicationListHasBeenSet;

                    /**
                     * Total number of applications.
                     */
                    int64_t m_applicationTotal;
                    bool m_applicationTotalHasBeenSet;

                    /**
                     * Mobile application list information.
                     */
                    std::vector<UserMobileApplicationInfo> m_userMobileApplicationList;
                    bool m_userMobileApplicationListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAR_V20220110_MODEL_DESCRIBEAPPLICATIONLISTRESPONSE_H_
