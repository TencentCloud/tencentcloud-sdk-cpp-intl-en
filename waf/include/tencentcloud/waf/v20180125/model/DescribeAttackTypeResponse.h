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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEATTACKTYPERESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEATTACKTYPERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/PiechartItem.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeAttackType response structure.
                */
                class DescribeAttackTypeResponse : public AbstractModel
                {
                public:
                    DescribeAttackTypeResponse();
                    ~DescribeAttackTypeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Quantity
                     * @return Piechart Quantity
                     * 
                     */
                    std::vector<PiechartItem> GetPiechart() const;

                    /**
                     * 判断参数 Piechart 是否已赋值
                     * @return Piechart 是否已赋值
                     * 
                     */
                    bool PiechartHasBeenSet() const;

                private:

                    /**
                     * Quantity
                     */
                    std::vector<PiechartItem> m_piechart;
                    bool m_piechartHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEATTACKTYPERESPONSE_H_
