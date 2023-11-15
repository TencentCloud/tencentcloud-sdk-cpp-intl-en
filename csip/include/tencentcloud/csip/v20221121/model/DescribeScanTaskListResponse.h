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
                     * 获取Total number of entries
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TotalCount Total number of entries
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取List of scan tasks
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Data List of scan tasks
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取List of account UINs
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return UINList List of account UINs
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * 获取List of task modes
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return TaskModeList List of task modes
Note: This field may return·null, indicating that no valid values can be obtained.
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
                     * Total number of entries
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * List of scan tasks
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::vector<ScanTaskInfoList> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * List of account UINs
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_uINList;
                    bool m_uINListHasBeenSet;

                    /**
                     * List of task modes
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::vector<FilterDataObject> m_taskModeList;
                    bool m_taskModeListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESCANTASKLISTRESPONSE_H_
