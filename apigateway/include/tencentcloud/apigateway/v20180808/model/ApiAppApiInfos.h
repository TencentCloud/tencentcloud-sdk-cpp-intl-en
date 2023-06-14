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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIAPPAPIINFOS_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIAPPAPIINFOS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/ApiAppApiInfo.h>


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
                class ApiAppApiInfos : public AbstractModel
                {
                public:
                    ApiAppApiInfos();
                    ~ApiAppApiInfos() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Quantity
                     * @return TotalCount Quantity
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置Quantity
                     * @param _totalCount Quantity
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
                     * 获取Information array of the API bound to the application
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ApiAppApiSet Information array of the API bound to the application
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ApiAppApiInfo> GetApiAppApiSet() const;

                    /**
                     * 设置Information array of the API bound to the application
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _apiAppApiSet Information array of the API bound to the application
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetApiAppApiSet(const std::vector<ApiAppApiInfo>& _apiAppApiSet);

                    /**
                     * 判断参数 ApiAppApiSet 是否已赋值
                     * @return ApiAppApiSet 是否已赋值
                     * 
                     */
                    bool ApiAppApiSetHasBeenSet() const;

                private:

                    /**
                     * Quantity
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Information array of the API bound to the application
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ApiAppApiInfo> m_apiAppApiSet;
                    bool m_apiAppApiSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIAPPAPIINFOS_H_
