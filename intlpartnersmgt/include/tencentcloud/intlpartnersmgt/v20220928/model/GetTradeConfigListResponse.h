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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_GETTRADECONFIGLISTRESPONSE_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_GETTRADECONFIGLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/TradeOneNode.h>


namespace TencentCloud
{
    namespace Intlpartnersmgt
    {
        namespace V20220928
        {
            namespace Model
            {
                /**
                * GetTradeConfigList response structure.
                */
                class GetTradeConfigListResponse : public AbstractModel
                {
                public:
                    GetTradeConfigListResponse();
                    ~GetTradeConfigListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Industry information.
                     * @return TradeList Industry information.
                     * 
                     */
                    std::vector<TradeOneNode> GetTradeList() const;

                    /**
                     * 判断参数 TradeList 是否已赋值
                     * @return TradeList 是否已赋值
                     * 
                     */
                    bool TradeListHasBeenSet() const;

                private:

                    /**
                     * Industry information.
                     */
                    std::vector<TradeOneNode> m_tradeList;
                    bool m_tradeListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_GETTRADECONFIGLISTRESPONSE_H_
