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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_LISTCLOUDNATIVEAPIGATEWAYSTRATEGYRESULT_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_LISTCLOUDNATIVEAPIGATEWAYSTRATEGYRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/CloudNativeAPIGatewayStrategy.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * Retrieve the response result of the Cloud Native API gateway instance policy.
                */
                class ListCloudNativeAPIGatewayStrategyResult : public AbstractModel
                {
                public:
                    ListCloudNativeAPIGatewayStrategyResult();
                    ~ListCloudNativeAPIGatewayStrategyResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Total quantity.
                     * @return TotalCount Total quantity.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置Total quantity.
                     * @param _totalCount Total quantity.
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
                     * 获取Cloud Native API gateway instance policy list.
                     * @return StrategyList Cloud Native API gateway instance policy list.
                     * 
                     */
                    std::vector<CloudNativeAPIGatewayStrategy> GetStrategyList() const;

                    /**
                     * 设置Cloud Native API gateway instance policy list.
                     * @param _strategyList Cloud Native API gateway instance policy list.
                     * 
                     */
                    void SetStrategyList(const std::vector<CloudNativeAPIGatewayStrategy>& _strategyList);

                    /**
                     * 判断参数 StrategyList 是否已赋值
                     * @return StrategyList 是否已赋值
                     * 
                     */
                    bool StrategyListHasBeenSet() const;

                private:

                    /**
                     * Total quantity.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Cloud Native API gateway instance policy list.
                     */
                    std::vector<CloudNativeAPIGatewayStrategy> m_strategyList;
                    bool m_strategyListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_LISTCLOUDNATIVEAPIGATEWAYSTRATEGYRESULT_H_
