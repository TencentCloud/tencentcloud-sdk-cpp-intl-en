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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DELETECLUSTERINSTANCESRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DELETECLUSTERINSTANCESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DeleteClusterInstances response structure.
                */
                class DeleteClusterInstancesResponse : public AbstractModel
                {
                public:
                    DeleteClusterInstancesResponse();
                    ~DeleteClusterInstancesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取IDs of deleted instances
                     * @return SuccInstanceIds IDs of deleted instances
                     * 
                     */
                    std::vector<std::string> GetSuccInstanceIds() const;

                    /**
                     * 判断参数 SuccInstanceIds 是否已赋值
                     * @return SuccInstanceIds 是否已赋值
                     * 
                     */
                    bool SuccInstanceIdsHasBeenSet() const;

                    /**
                     * 获取IDs of instances failed to be deleted
                     * @return FailedInstanceIds IDs of instances failed to be deleted
                     * 
                     */
                    std::vector<std::string> GetFailedInstanceIds() const;

                    /**
                     * 判断参数 FailedInstanceIds 是否已赋值
                     * @return FailedInstanceIds 是否已赋值
                     * 
                     */
                    bool FailedInstanceIdsHasBeenSet() const;

                    /**
                     * 获取IDs of instances that cannot be found
                     * @return NotFoundInstanceIds IDs of instances that cannot be found
                     * 
                     */
                    std::vector<std::string> GetNotFoundInstanceIds() const;

                    /**
                     * 判断参数 NotFoundInstanceIds 是否已赋值
                     * @return NotFoundInstanceIds 是否已赋值
                     * 
                     */
                    bool NotFoundInstanceIdsHasBeenSet() const;

                private:

                    /**
                     * IDs of deleted instances
                     */
                    std::vector<std::string> m_succInstanceIds;
                    bool m_succInstanceIdsHasBeenSet;

                    /**
                     * IDs of instances failed to be deleted
                     */
                    std::vector<std::string> m_failedInstanceIds;
                    bool m_failedInstanceIdsHasBeenSet;

                    /**
                     * IDs of instances that cannot be found
                     */
                    std::vector<std::string> m_notFoundInstanceIds;
                    bool m_notFoundInstanceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DELETECLUSTERINSTANCESRESPONSE_H_
