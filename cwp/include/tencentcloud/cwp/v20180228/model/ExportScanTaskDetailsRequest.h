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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTSCANTASKDETAILSREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTSCANTASKDETAILSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filters.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ExportScanTaskDetails request structure.
                */
                class ExportScanTaskDetailsRequest : public AbstractModel
                {
                public:
                    ExportScanTaskDetailsRequest();
                    ~ExportScanTaskDetailsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Task ID for this detection (different from the ID of the task for exporting the detection Excel file in the input parameters)
                     * @return TaskId Task ID for this detection (different from the ID of the task for exporting the detection Excel file in the input parameters)
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 设置Task ID for this detection (different from the ID of the task for exporting the detection Excel file in the input parameters)
                     * @param _taskId Task ID for this detection (different from the ID of the task for exporting the detection Excel file in the input parameters)
                     * 
                     */
                    void SetTaskId(const uint64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Module type. Malware: Trojan; Vul: vulnerability; Baseline: baseline.
                     * @return ModuleType Module type. Malware: Trojan; Vul: vulnerability; Baseline: baseline.
                     * 
                     */
                    std::string GetModuleType() const;

                    /**
                     * 设置Module type. Malware: Trojan; Vul: vulnerability; Baseline: baseline.
                     * @param _moduleType Module type. Malware: Trojan; Vul: vulnerability; Baseline: baseline.
                     * 
                     */
                    void SetModuleType(const std::string& _moduleType);

                    /**
                     * 判断参数 ModuleType 是否已赋值
                     * @return ModuleType 是否已赋值
                     * 
                     */
                    bool ModuleTypeHasBeenSet() const;

                    /**
                     * 获取Filter parameter: ipOrAlias (server name/IP address)
                     * @return Filters Filter parameter: ipOrAlias (server name/IP address)
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置Filter parameter: ipOrAlias (server name/IP address)
                     * @param _filters Filter parameter: ipOrAlias (server name/IP address)
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Task ID for this detection (different from the ID of the task for exporting the detection Excel file in the input parameters)
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Module type. Malware: Trojan; Vul: vulnerability; Baseline: baseline.
                     */
                    std::string m_moduleType;
                    bool m_moduleTypeHasBeenSet;

                    /**
                     * Filter parameter: ipOrAlias (server name/IP address)
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTSCANTASKDETAILSREQUEST_H_
