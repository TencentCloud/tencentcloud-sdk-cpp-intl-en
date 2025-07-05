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

#ifndef TENCENTCLOUD_CAR_V20220110_MODEL_DESCRIBEAPPLICATIONPATHLISTRESPONSE_H_
#define TENCENTCLOUD_CAR_V20220110_MODEL_DESCRIBEAPPLICATIONPATHLISTRESPONSE_H_

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
                * DescribeApplicationPathList response structure.
                */
                class DescribeApplicationPathListResponse : public AbstractModel
                {
                public:
                    DescribeApplicationPathListResponse();
                    ~DescribeApplicationPathListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Application .exe file path list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PathList Application .exe file path list.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetPathList() const;

                    /**
                     * 判断参数 PathList 是否已赋值
                     * @return PathList 是否已赋值
                     * 
                     */
                    bool PathListHasBeenSet() const;

                private:

                    /**
                     * Application .exe file path list.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_pathList;
                    bool m_pathListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAR_V20220110_MODEL_DESCRIBEAPPLICATIONPATHLISTRESPONSE_H_
