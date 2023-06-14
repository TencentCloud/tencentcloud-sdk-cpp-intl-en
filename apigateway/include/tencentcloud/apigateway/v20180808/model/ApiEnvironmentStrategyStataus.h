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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIENVIRONMENTSTRATEGYSTATAUS_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIENVIRONMENTSTRATEGYSTATAUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/ApiEnvironmentStrategy.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * List of policies bound to API
                */
                class ApiEnvironmentStrategyStataus : public AbstractModel
                {
                public:
                    ApiEnvironmentStrategyStataus();
                    ~ApiEnvironmentStrategyStataus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of throttling policies bound to API.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TotalCount Number of throttling policies bound to API.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置Number of throttling policies bound to API.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _totalCount Number of throttling policies bound to API.
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
                     * 获取List of throttling policies bound to API.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ApiEnvironmentStrategySet List of throttling policies bound to API.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ApiEnvironmentStrategy> GetApiEnvironmentStrategySet() const;

                    /**
                     * 设置List of throttling policies bound to API.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _apiEnvironmentStrategySet List of throttling policies bound to API.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetApiEnvironmentStrategySet(const std::vector<ApiEnvironmentStrategy>& _apiEnvironmentStrategySet);

                    /**
                     * 判断参数 ApiEnvironmentStrategySet 是否已赋值
                     * @return ApiEnvironmentStrategySet 是否已赋值
                     * 
                     */
                    bool ApiEnvironmentStrategySetHasBeenSet() const;

                private:

                    /**
                     * Number of throttling policies bound to API.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * List of throttling policies bound to API.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ApiEnvironmentStrategy> m_apiEnvironmentStrategySet;
                    bool m_apiEnvironmentStrategySetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIENVIRONMENTSTRATEGYSTATAUS_H_
