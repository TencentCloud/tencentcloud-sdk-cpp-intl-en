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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DELETEBASELINESTRATEGYREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DELETEBASELINESTRATEGYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DeleteBaselineStrategy request structure.
                */
                class DeleteBaselineStrategyRequest : public AbstractModel
                {
                public:
                    DeleteBaselineStrategyRequest();
                    ~DeleteBaselineStrategyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Baseline policy ID
                     * @return StrategyId Baseline policy ID
                     * 
                     */
                    uint64_t GetStrategyId() const;

                    /**
                     * 设置Baseline policy ID
                     * @param _strategyId Baseline policy ID
                     * 
                     */
                    void SetStrategyId(const uint64_t& _strategyId);

                    /**
                     * 判断参数 StrategyId 是否已赋值
                     * @return StrategyId 是否已赋值
                     * 
                     */
                    bool StrategyIdHasBeenSet() const;

                private:

                    /**
                     * Baseline policy ID
                     */
                    uint64_t m_strategyId;
                    bool m_strategyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DELETEBASELINESTRATEGYREQUEST_H_
