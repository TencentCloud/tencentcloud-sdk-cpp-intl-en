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

#ifndef TENCENTCLOUD_CAR_V20220110_MODEL_DESCRIBEAPPLICATIONVERSIONREQUEST_H_
#define TENCENTCLOUD_CAR_V20220110_MODEL_DESCRIBEAPPLICATIONVERSIONREQUEST_H_

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
                * DescribeApplicationVersion request structure.
                */
                class DescribeApplicationVersionRequest : public AbstractModel
                {
                public:
                    DescribeApplicationVersionRequest();
                    ~DescribeApplicationVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Application version ID.
                     * @return ApplicationId Application version ID.
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置Application version ID.
                     * @param _applicationId Application version ID.
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                private:

                    /**
                     * Application version ID.
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAR_V20220110_MODEL_DESCRIBEAPPLICATIONVERSIONREQUEST_H_
