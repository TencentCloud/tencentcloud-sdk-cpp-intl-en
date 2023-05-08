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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENATACRULERESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENATACRULERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/DescAcItem.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeNatAcRule response structure.
                */
                class DescribeNatAcRuleResponse : public AbstractModel
                {
                public:
                    DescribeNatAcRuleResponse();
                    ~DescribeNatAcRuleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of entries.
                     * @return Total Total number of entries.
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取NAT access control list data.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Data NAT access control list data.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DescAcItem> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取Total number of entries returned without filtering.
                     * @return AllTotal Total number of entries returned without filtering.
                     */
                    uint64_t GetAllTotal() const;

                    /**
                     * 判断参数 AllTotal 是否已赋值
                     * @return AllTotal 是否已赋值
                     */
                    bool AllTotalHasBeenSet() const;

                private:

                    /**
                     * Total number of entries.
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * NAT access control list data.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DescAcItem> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * Total number of entries returned without filtering.
                     */
                    uint64_t m_allTotal;
                    bool m_allTotalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENATACRULERESPONSE_H_
