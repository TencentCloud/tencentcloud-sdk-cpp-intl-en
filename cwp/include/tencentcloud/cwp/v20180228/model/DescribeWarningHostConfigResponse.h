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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEWARNINGHOSTCONFIGRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEWARNINGHOSTCONFIGRESPONSE_H_

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
                * DescribeWarningHostConfig response structure.
                */
                class DescribeWarningHostConfigResponse : public AbstractModel
                {
                public:
                    DescribeWarningHostConfigResponse();
                    ~DescribeWarningHostConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Alarm Host Range Type. 0: All Hosts; 1: By Project; 2: By Tencent Cloud Tag; 3: By Host Security Tag; 4: Custom Hosts
                     * @return HostRange Alarm Host Range Type. 0: All Hosts; 1: By Project; 2: By Tencent Cloud Tag; 3: By Host Security Tag; 4: Custom Hosts
                     * 
                     */
                    int64_t GetHostRange() const;

                    /**
                     * 判断参数 HostRange 是否已赋值
                     * @return HostRange 是否已赋值
                     * 
                     */
                    bool HostRangeHasBeenSet() const;

                    /**
                     * 获取List of Project or Tag Names, empty for custom hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ItemLabels List of Project or Tag Names, empty for custom hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetItemLabels() const;

                    /**
                     * 判断参数 ItemLabels 是否已赋值
                     * @return ItemLabels 是否已赋值
                     * 
                     */
                    bool ItemLabelsHasBeenSet() const;

                    /**
                     * 获取Machine list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Quuids Machine list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetQuuids() const;

                    /**
                     * 判断参数 Quuids 是否已赋值
                     * @return Quuids 是否已赋值
                     * 
                     */
                    bool QuuidsHasBeenSet() const;

                    /**
                     * 获取Total Number of Machine Lists
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TotalCount Total Number of Machine Lists
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取List of Project or Tag IDs, empty for custom hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ItemLabelIds List of Project or Tag IDs, empty for custom hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetItemLabelIds() const;

                    /**
                     * 判断参数 ItemLabelIds 是否已赋值
                     * @return ItemLabelIds 是否已赋值
                     * 
                     */
                    bool ItemLabelIdsHasBeenSet() const;

                    /**
                     * 获取
                     * @return ExcludedQuuids 
                     * 
                     */
                    std::vector<std::string> GetExcludedQuuids() const;

                    /**
                     * 判断参数 ExcludedQuuids 是否已赋值
                     * @return ExcludedQuuids 是否已赋值
                     * 
                     */
                    bool ExcludedQuuidsHasBeenSet() const;

                private:

                    /**
                     * Alarm Host Range Type. 0: All Hosts; 1: By Project; 2: By Tencent Cloud Tag; 3: By Host Security Tag; 4: Custom Hosts
                     */
                    int64_t m_hostRange;
                    bool m_hostRangeHasBeenSet;

                    /**
                     * List of Project or Tag Names, empty for custom hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_itemLabels;
                    bool m_itemLabelsHasBeenSet;

                    /**
                     * Machine list
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_quuids;
                    bool m_quuidsHasBeenSet;

                    /**
                     * Total Number of Machine Lists
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * List of Project or Tag IDs, empty for custom hosts
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_itemLabelIds;
                    bool m_itemLabelIdsHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_excludedQuuids;
                    bool m_excludedQuuidsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEWARNINGHOSTCONFIGRESPONSE_H_
