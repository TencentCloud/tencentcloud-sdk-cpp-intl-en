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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_KONGSERVICES_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_KONGSERVICES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/KongServicePreview.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * Service list of the kong instance
                */
                class KongServices : public AbstractModel
                {
                public:
                    KongServices();
                    ~KongServices() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Service list of the kong instance
                     * @return ServiceList Service list of the kong instance
                     * 
                     */
                    std::vector<KongServicePreview> GetServiceList() const;

                    /**
                     * 设置Service list of the kong instance
                     * @param _serviceList Service list of the kong instance
                     * 
                     */
                    void SetServiceList(const std::vector<KongServicePreview>& _serviceList);

                    /**
                     * 判断参数 ServiceList 是否已赋值
                     * @return ServiceList 是否已赋值
                     * 
                     */
                    bool ServiceListHasBeenSet() const;

                    /**
                     * 获取Total Quantity of Lists
                     * @return TotalCount Total Quantity of Lists
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置Total Quantity of Lists
                     * @param _totalCount Total Quantity of Lists
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * Service list of the kong instance
                     */
                    std::vector<KongServicePreview> m_serviceList;
                    bool m_serviceListHasBeenSet;

                    /**
                     * Total Quantity of Lists
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_KONGSERVICES_H_
