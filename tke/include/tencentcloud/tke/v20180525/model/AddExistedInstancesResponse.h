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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_ADDEXISTEDINSTANCESRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_ADDEXISTEDINSTANCESRESPONSE_H_

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
                * AddExistedInstances response structure.
                */
                class AddExistedInstancesResponse : public AbstractModel
                {
                public:
                    AddExistedInstancesResponse();
                    ~AddExistedInstancesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取IDs of failed nodes
Note: This field may return null, indicating that no valid value was found.
                     * @return FailedInstanceIds IDs of failed nodes
Note: This field may return null, indicating that no valid value was found.
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
                     * 获取IDs of successful nodes
Note: This field may return null, indicating that no valid value was found.
                     * @return SuccInstanceIds IDs of successful nodes
Note: This field may return null, indicating that no valid value was found.
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
                     * 获取IDs of (successful or failed) nodes that timed out
Note: This field may return null, indicating that no valid value was found.
                     * @return TimeoutInstanceIds IDs of (successful or failed) nodes that timed out
Note: This field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::vector<std::string> GetTimeoutInstanceIds() const;

                    /**
                     * 判断参数 TimeoutInstanceIds 是否已赋值
                     * @return TimeoutInstanceIds 是否已赋值
                     * 
                     */
                    bool TimeoutInstanceIdsHasBeenSet() const;

                    /**
                     * 获取Causes of the failure to add a node to a cluster
Note: this field may return `null`, indicating that no valid value is obtained.
                     * @return FailedReasons Causes of the failure to add a node to a cluster
Note: this field may return `null`, indicating that no valid value is obtained.
                     * 
                     */
                    std::vector<std::string> GetFailedReasons() const;

                    /**
                     * 判断参数 FailedReasons 是否已赋值
                     * @return FailedReasons 是否已赋值
                     * 
                     */
                    bool FailedReasonsHasBeenSet() const;

                private:

                    /**
                     * IDs of failed nodes
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::vector<std::string> m_failedInstanceIds;
                    bool m_failedInstanceIdsHasBeenSet;

                    /**
                     * IDs of successful nodes
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::vector<std::string> m_succInstanceIds;
                    bool m_succInstanceIdsHasBeenSet;

                    /**
                     * IDs of (successful or failed) nodes that timed out
Note: This field may return null, indicating that no valid value was found.
                     */
                    std::vector<std::string> m_timeoutInstanceIds;
                    bool m_timeoutInstanceIdsHasBeenSet;

                    /**
                     * Causes of the failure to add a node to a cluster
Note: this field may return `null`, indicating that no valid value is obtained.
                     */
                    std::vector<std::string> m_failedReasons;
                    bool m_failedReasonsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_ADDEXISTEDINSTANCESRESPONSE_H_
