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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_DESCRIBERABBITMQSERVERLESSBINDINGSRESPONSE_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_DESCRIBERABBITMQSERVERLESSBINDINGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trabbit/v20230418/model/RabbitMQBindingListInfo.h>


namespace TencentCloud
{
    namespace Trabbit
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * DescribeRabbitMQServerlessBindings response structure.
                */
                class DescribeRabbitMQServerlessBindingsResponse : public AbstractModel
                {
                public:
                    DescribeRabbitMQServerlessBindingsResponse();
                    ~DescribeRabbitMQServerlessBindingsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Route relationship list
                     * @return BindingInfoList Route relationship list
                     * 
                     */
                    std::vector<RabbitMQBindingListInfo> GetBindingInfoList() const;

                    /**
                     * 判断参数 BindingInfoList 是否已赋值
                     * @return BindingInfoList 是否已赋值
                     * 
                     */
                    bool BindingInfoListHasBeenSet() const;

                    /**
                     * 获取Quantity
                     * @return TotalCount Quantity
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * Route relationship list
                     */
                    std::vector<RabbitMQBindingListInfo> m_bindingInfoList;
                    bool m_bindingInfoListHasBeenSet;

                    /**
                     * Quantity
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_DESCRIBERABBITMQSERVERLESSBINDINGSRESPONSE_H_
