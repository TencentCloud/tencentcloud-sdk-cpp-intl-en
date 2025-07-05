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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIUSAGEPLANSET_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIUSAGEPLANSET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/ApiUsagePlan.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * List of usage plans bound to API
                */
                class ApiUsagePlanSet : public AbstractModel
                {
                public:
                    ApiUsagePlanSet();
                    ~ApiUsagePlanSet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Total number of usage plans bound to API.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TotalCount Total number of usage plans bound to API.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置Total number of usage plans bound to API.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _totalCount Total number of usage plans bound to API.
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
                     * 获取List of usage plans bound to API.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ApiUsagePlanList List of usage plans bound to API.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ApiUsagePlan> GetApiUsagePlanList() const;

                    /**
                     * 设置List of usage plans bound to API.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _apiUsagePlanList List of usage plans bound to API.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetApiUsagePlanList(const std::vector<ApiUsagePlan>& _apiUsagePlanList);

                    /**
                     * 判断参数 ApiUsagePlanList 是否已赋值
                     * @return ApiUsagePlanList 是否已赋值
                     * 
                     */
                    bool ApiUsagePlanListHasBeenSet() const;

                private:

                    /**
                     * Total number of usage plans bound to API.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * List of usage plans bound to API.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ApiUsagePlan> m_apiUsagePlanList;
                    bool m_apiUsagePlanListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIUSAGEPLANSET_H_
