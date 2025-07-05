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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_CREATEMIGRATIONSERVICERESPONSE_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_CREATEMIGRATIONSERVICERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * CreateMigrationService response structure.
                */
                class CreateMigrationServiceResponse : public AbstractModel
                {
                public:
                    CreateMigrationServiceResponse();
                    ~CreateMigrationServiceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The list of migration task IDs randomly generated in the format of `dts-c1f6rs21` after a successful order placement
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return JobIds The list of migration task IDs randomly generated in the format of `dts-c1f6rs21` after a successful order placement
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetJobIds() const;

                    /**
                     * 判断参数 JobIds 是否已赋值
                     * @return JobIds 是否已赋值
                     * 
                     */
                    bool JobIdsHasBeenSet() const;

                private:

                    /**
                     * The list of migration task IDs randomly generated in the format of `dts-c1f6rs21` after a successful order placement
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_jobIds;
                    bool m_jobIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_CREATEMIGRATIONSERVICERESPONSE_H_
