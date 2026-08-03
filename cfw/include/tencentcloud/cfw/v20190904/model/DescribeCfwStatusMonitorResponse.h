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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECFWSTATUSMONITORRESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECFWSTATUSMONITORRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeCfwStatusMonitor response structure.
                */
                class DescribeCfwStatusMonitorResponse : public AbstractModel
                {
                public:
                    DescribeCfwStatusMonitorResponse();
                    ~DescribeCfwStatusMonitorResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Query result. UTF-8 JSON object string; the caller needs to parse Response.Data. The scene returned by describe_scene includes metric_options, perspective_options, default_metric, default_perspective, selection_required_by_metric, selection_kind_by_metric, and time_preset_options; selection.available_options returns options applicable to SelectionId, SelectionName, and SelectionInstanceId. fetch_scene returns a data snapshot of the selected scenario, which may contain overview, table, or detail. The example below is a section of the field structure, and the array only shows representative values.
                     * @return Data Query result. UTF-8 JSON object string; the caller needs to parse Response.Data. The scene returned by describe_scene includes metric_options, perspective_options, default_metric, default_perspective, selection_required_by_metric, selection_kind_by_metric, and time_preset_options; selection.available_options returns options applicable to SelectionId, SelectionName, and SelectionInstanceId. fetch_scene returns a data snapshot of the selected scenario, which may contain overview, table, or detail. The example below is a section of the field structure, and the array only shows representative values.
                     * 
                     */
                    std::string GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * Query result. UTF-8 JSON object string; the caller needs to parse Response.Data. The scene returned by describe_scene includes metric_options, perspective_options, default_metric, default_perspective, selection_required_by_metric, selection_kind_by_metric, and time_preset_options; selection.available_options returns options applicable to SelectionId, SelectionName, and SelectionInstanceId. fetch_scene returns a data snapshot of the selected scenario, which may contain overview, table, or detail. The example below is a section of the field structure, and the array only shows representative values.
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECFWSTATUSMONITORRESPONSE_H_
