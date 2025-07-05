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

#ifndef TENCENTCLOUD_CAR_V20220110_MODEL_DESCRIBEAPPLICATIONSTATUSRESPONSE_H_
#define TENCENTCLOUD_CAR_V20220110_MODEL_DESCRIBEAPPLICATIONSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/car/v20220110/model/UserApplicationStatus.h>


namespace TencentCloud
{
    namespace Car
    {
        namespace V20220110
        {
            namespace Model
            {
                /**
                * DescribeApplicationStatus response structure.
                */
                class DescribeApplicationStatusResponse : public AbstractModel
                {
                public:
                    DescribeApplicationStatusResponse();
                    ~DescribeApplicationStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Application status list.
                     * @return StatusList Application status list.
                     * 
                     */
                    std::vector<UserApplicationStatus> GetStatusList() const;

                    /**
                     * 判断参数 StatusList 是否已赋值
                     * @return StatusList 是否已赋值
                     * 
                     */
                    bool StatusListHasBeenSet() const;

                private:

                    /**
                     * Application status list.
                     */
                    std::vector<UserApplicationStatus> m_statusList;
                    bool m_statusListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAR_V20220110_MODEL_DESCRIBEAPPLICATIONSTATUSRESPONSE_H_
