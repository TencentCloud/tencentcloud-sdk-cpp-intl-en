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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESCANTASKLISTRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESCANTASKLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/ScanTaskInfoList.h>
#include <tencentcloud/csip/v20221121/model/FilterDataObject.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeScanTaskList response structure.
                */
                class DescribeScanTaskListResponse : public AbstractModel
                {
                public:
                    DescribeScanTaskListResponse();
                    ~DescribeScanTaskListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total quantity.
                     * @return TotalCount Total quantity.
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Task Log List
                     * @return Data Task Log List
                     * 
                     */
                    std::vector<ScanTaskInfoList> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取Host Account ID List
                     * @return UINList Host Account ID List
                     * 
                     */
                    std::vector<std::string> GetUINList() const;

                    /**
                     * 判断参数 UINList 是否已赋值
                     * @return UINList 是否已赋值
                     * 
                     */
                    bool UINListHasBeenSet() const;

                    /**
                     * 获取Health Checkup Mode Filter List
                     * @return TaskModeList Health Checkup Mode Filter List
                     * 
                     */
                    std::vector<FilterDataObject> GetTaskModeList() const;

                    /**
                     * 判断参数 TaskModeList 是否已赋值
                     * @return TaskModeList 是否已赋值
                     * 
                     */
                    bool TaskModeListHasBeenSet() const;

                private:

                    /**
                     * Total quantity.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Task Log List
                     */
                    std::vector<ScanTaskInfoList> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * Host Account ID List
                     */
                    std::vector<std::string> m_uINList;
                    bool m_uINListHasBeenSet;

                    /**
                     * Health Checkup Mode Filter List
                     */
                    std::vector<FilterDataObject> m_taskModeList;
                    bool m_taskModeListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESCANTASKLISTRESPONSE_H_
