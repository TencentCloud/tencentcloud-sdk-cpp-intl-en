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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBETOKENUSAGEGRAPHRESPONSE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBETOKENUSAGEGRAPHRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/Stat.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * DescribeTokenUsageGraph response structure.
                */
                class DescribeTokenUsageGraphResponse : public AbstractModel
                {
                public:
                    DescribeTokenUsageGraphResponse();
                    ~DescribeTokenUsageGraphResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total amount of token consumption.
                     * @return Total Total amount of token consumption.
                     * 
                     */
                    std::vector<Stat> GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取Input token consumption.
                     * @return Input Input token consumption.
                     * 
                     */
                    std::vector<Stat> GetInput() const;

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取Output token consumption.
                     * @return Output Output token consumption.
                     * 
                     */
                    std::vector<Stat> GetOutput() const;

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                private:

                    /**
                     * Total amount of token consumption.
                     */
                    std::vector<Stat> m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * Input token consumption.
                     */
                    std::vector<Stat> m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * Output token consumption.
                     */
                    std::vector<Stat> m_output;
                    bool m_outputHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBETOKENUSAGEGRAPHRESPONSE_H_
