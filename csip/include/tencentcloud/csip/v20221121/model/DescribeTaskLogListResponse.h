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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBETASKLOGLISTRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBETASKLOGLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/TaskLogInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeTaskLogList response structure.
                */
                class DescribeTaskLogListResponse : public AbstractModel
                {
                public:
                    DescribeTaskLogListResponse();
                    ~DescribeTaskLogListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of entries
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TotalCount Total number of entries
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
                     * 获取List of reports
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Data List of reports
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<TaskLogInfo> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取Number of reports pending viewed
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return NotViewNumber Number of reports pending viewed
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetNotViewNumber() const;

                    /**
                     * 判断参数 NotViewNumber 是否已赋值
                     * @return NotViewNumber 是否已赋值
                     * 
                     */
                    bool NotViewNumberHasBeenSet() const;

                    /**
                     * 获取Number of report templates
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return ReportTemplateNumber Number of report templates
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetReportTemplateNumber() const;

                    /**
                     * 判断参数 ReportTemplateNumber 是否已赋值
                     * @return ReportTemplateNumber 是否已赋值
                     * 
                     */
                    bool ReportTemplateNumberHasBeenSet() const;

                private:

                    /**
                     * Total number of entries
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * List of reports
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::vector<TaskLogInfo> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * Number of reports pending viewed
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    int64_t m_notViewNumber;
                    bool m_notViewNumberHasBeenSet;

                    /**
                     * Number of report templates
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    int64_t m_reportTemplateNumber;
                    bool m_reportTemplateNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBETASKLOGLISTRESPONSE_H_
