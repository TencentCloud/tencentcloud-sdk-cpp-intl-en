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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIAPPINFOS_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIAPPINFOS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/ApiAppInfo.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * Application information set
                */
                class ApiAppInfos : public AbstractModel
                {
                public:
                    ApiAppInfos();
                    ~ApiAppInfos() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of applications
                     * @return TotalCount Number of applications
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置Number of applications
                     * @param _totalCount Number of applications
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
                     * 获取Application information array
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ApiAppSet Application information array
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ApiAppInfo> GetApiAppSet() const;

                    /**
                     * 设置Application information array
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _apiAppSet Application information array
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetApiAppSet(const std::vector<ApiAppInfo>& _apiAppSet);

                    /**
                     * 判断参数 ApiAppSet 是否已赋值
                     * @return ApiAppSet 是否已赋值
                     * 
                     */
                    bool ApiAppSetHasBeenSet() const;

                private:

                    /**
                     * Number of applications
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Application information array
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ApiAppInfo> m_apiAppSet;
                    bool m_apiAppSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIAPPINFOS_H_
