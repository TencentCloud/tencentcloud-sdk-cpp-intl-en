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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_USAGEPLANENVIRONMENTSTATUS_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_USAGEPLANENVIRONMENTSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/UsagePlanEnvironment.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * List of environments bound to usage plan.
                */
                class UsagePlanEnvironmentStatus : public AbstractModel
                {
                public:
                    UsagePlanEnvironmentStatus();
                    ~UsagePlanEnvironmentStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of environments of the service bound to usage plan.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TotalCount Number of environments of the service bound to usage plan.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置Number of environments of the service bound to usage plan.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _totalCount Number of environments of the service bound to usage plan.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Environment status of services bound to usage plan.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return EnvironmentList Environment status of services bound to usage plan.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<UsagePlanEnvironment> GetEnvironmentList() const;

                    /**
                     * 设置Environment status of services bound to usage plan.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _environmentList Environment status of services bound to usage plan.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEnvironmentList(const std::vector<UsagePlanEnvironment>& _environmentList);

                    /**
                     * 判断参数 EnvironmentList 是否已赋值
                     * @return EnvironmentList 是否已赋值
                     * 
                     */
                    bool EnvironmentListHasBeenSet() const;

                private:

                    /**
                     * Number of environments of the service bound to usage plan.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Environment status of services bound to usage plan.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<UsagePlanEnvironment> m_environmentList;
                    bool m_environmentListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_USAGEPLANENVIRONMENTSTATUS_H_
