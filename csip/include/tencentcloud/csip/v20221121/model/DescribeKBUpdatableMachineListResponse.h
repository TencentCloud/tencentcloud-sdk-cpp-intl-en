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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEKBUPDATABLEMACHINELISTRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEKBUPDATABLEMACHINELISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/KBUpdateMachineItem.h>
#include <tencentcloud/csip/v20221121/model/KBFixSummaryItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeKBUpdatableMachineList response structure.
                */
                class DescribeKBUpdatableMachineListResponse : public AbstractModel
                {
                public:
                    DescribeKBUpdatableMachineListResponse();
                    ~DescribeKBUpdatableMachineListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Host list for patch updates</p>
                     * @return Data <p>Host list for patch updates</p>
                     * 
                     */
                    std::vector<KBUpdateMachineItem> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取<p>Total quantity.</p>
                     * @return TotalCount <p>Total quantity.</p>
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of hosts that can be repaired in one click</p>
                     * @return FixableCount <p>Number of hosts that can be repaired in one click</p>
                     * 
                     */
                    int64_t GetFixableCount() const;

                    /**
                     * 判断参数 FixableCount 是否已赋值
                     * @return FixableCount 是否已赋值
                     * 
                     */
                    bool FixableCountHasBeenSet() const;

                    /**
                     * 获取<p>Number of hosts that cannot be repaired with one click</p>
                     * @return NotFixableCount <p>Number of hosts that cannot be repaired with one click</p>
                     * 
                     */
                    int64_t GetNotFixableCount() const;

                    /**
                     * 判断参数 NotFixableCount 是否已赋值
                     * @return NotFixableCount 是否已赋值
                     * 
                     */
                    bool NotFixableCountHasBeenSet() const;

                    /**
                     * 获取<p>KB patch dimensional summary, showing an overview of the repaired patch list</p>
                     * @return KBSummary <p>KB patch dimensional summary, showing an overview of the repaired patch list</p>
                     * 
                     */
                    std::vector<KBFixSummaryItem> GetKBSummary() const;

                    /**
                     * 判断参数 KBSummary 是否已赋值
                     * @return KBSummary 是否已赋值
                     * 
                     */
                    bool KBSummaryHasBeenSet() const;

                private:

                    /**
                     * <p>Host list for patch updates</p>
                     */
                    std::vector<KBUpdateMachineItem> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * <p>Total quantity.</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>Number of hosts that can be repaired in one click</p>
                     */
                    int64_t m_fixableCount;
                    bool m_fixableCountHasBeenSet;

                    /**
                     * <p>Number of hosts that cannot be repaired with one click</p>
                     */
                    int64_t m_notFixableCount;
                    bool m_notFixableCountHasBeenSet;

                    /**
                     * <p>KB patch dimensional summary, showing an overview of the repaired patch list</p>
                     */
                    std::vector<KBFixSummaryItem> m_kBSummary;
                    bool m_kBSummaryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEKBUPDATABLEMACHINELISTRESPONSE_H_
