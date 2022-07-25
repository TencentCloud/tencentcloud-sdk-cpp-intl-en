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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSINSTANCEGRANTINFO_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSINSTANCEGRANTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Instance authorization information
                */
                class PrometheusInstanceGrantInfo : public AbstractModel
                {
                public:
                    PrometheusInstanceGrantInfo();
                    ~PrometheusInstanceGrantInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether there is permission to operate on the billing information. Valid values: 1 (yes), 2 (no).
                     * @return HasChargeOperation Whether there is permission to operate on the billing information. Valid values: 1 (yes), 2 (no).
                     */
                    int64_t GetHasChargeOperation() const;

                    /**
                     * 设置Whether there is permission to operate on the billing information. Valid values: 1 (yes), 2 (no).
                     * @param HasChargeOperation Whether there is permission to operate on the billing information. Valid values: 1 (yes), 2 (no).
                     */
                    void SetHasChargeOperation(const int64_t& _hasChargeOperation);

                    /**
                     * 判断参数 HasChargeOperation 是否已赋值
                     * @return HasChargeOperation 是否已赋值
                     */
                    bool HasChargeOperationHasBeenSet() const;

                    /**
                     * 获取Whether there is permission to display the VPC information. Valid values: 1 (yes), 2 (no).
                     * @return HasVpcDisplay Whether there is permission to display the VPC information. Valid values: 1 (yes), 2 (no).
                     */
                    int64_t GetHasVpcDisplay() const;

                    /**
                     * 设置Whether there is permission to display the VPC information. Valid values: 1 (yes), 2 (no).
                     * @param HasVpcDisplay Whether there is permission to display the VPC information. Valid values: 1 (yes), 2 (no).
                     */
                    void SetHasVpcDisplay(const int64_t& _hasVpcDisplay);

                    /**
                     * 判断参数 HasVpcDisplay 是否已赋值
                     * @return HasVpcDisplay 是否已赋值
                     */
                    bool HasVpcDisplayHasBeenSet() const;

                    /**
                     * 获取Whether there is permission to change the Grafana status. Valid values: 1 (yes), 2 (no).
                     * @return HasGrafanaStatusChange Whether there is permission to change the Grafana status. Valid values: 1 (yes), 2 (no).
                     */
                    int64_t GetHasGrafanaStatusChange() const;

                    /**
                     * 设置Whether there is permission to change the Grafana status. Valid values: 1 (yes), 2 (no).
                     * @param HasGrafanaStatusChange Whether there is permission to change the Grafana status. Valid values: 1 (yes), 2 (no).
                     */
                    void SetHasGrafanaStatusChange(const int64_t& _hasGrafanaStatusChange);

                    /**
                     * 判断参数 HasGrafanaStatusChange 是否已赋值
                     * @return HasGrafanaStatusChange 是否已赋值
                     */
                    bool HasGrafanaStatusChangeHasBeenSet() const;

                    /**
                     * 获取Whether there is permission to manage agents. Valid values: 1 (yes), 2 (no).
                     * @return HasAgentManage Whether there is permission to manage agents. Valid values: 1 (yes), 2 (no).
                     */
                    int64_t GetHasAgentManage() const;

                    /**
                     * 设置Whether there is permission to manage agents. Valid values: 1 (yes), 2 (no).
                     * @param HasAgentManage Whether there is permission to manage agents. Valid values: 1 (yes), 2 (no).
                     */
                    void SetHasAgentManage(const int64_t& _hasAgentManage);

                    /**
                     * 判断参数 HasAgentManage 是否已赋值
                     * @return HasAgentManage 是否已赋值
                     */
                    bool HasAgentManageHasBeenSet() const;

                    /**
                     * 获取Whether there is permission to manage TKE integrations. Valid values: 1 (yes), 2 (no).
                     * @return HasTkeManage Whether there is permission to manage TKE integrations. Valid values: 1 (yes), 2 (no).
                     */
                    int64_t GetHasTkeManage() const;

                    /**
                     * 设置Whether there is permission to manage TKE integrations. Valid values: 1 (yes), 2 (no).
                     * @param HasTkeManage Whether there is permission to manage TKE integrations. Valid values: 1 (yes), 2 (no).
                     */
                    void SetHasTkeManage(const int64_t& _hasTkeManage);

                    /**
                     * 判断参数 HasTkeManage 是否已赋值
                     * @return HasTkeManage 是否已赋值
                     */
                    bool HasTkeManageHasBeenSet() const;

                    /**
                     * 获取Whether there is permission to display the API information. Valid values: 1 (yes), 2 (no).
                     * @return HasApiOperation Whether there is permission to display the API information. Valid values: 1 (yes), 2 (no).
                     */
                    int64_t GetHasApiOperation() const;

                    /**
                     * 设置Whether there is permission to display the API information. Valid values: 1 (yes), 2 (no).
                     * @param HasApiOperation Whether there is permission to display the API information. Valid values: 1 (yes), 2 (no).
                     */
                    void SetHasApiOperation(const int64_t& _hasApiOperation);

                    /**
                     * 判断参数 HasApiOperation 是否已赋值
                     * @return HasApiOperation 是否已赋值
                     */
                    bool HasApiOperationHasBeenSet() const;

                private:

                    /**
                     * Whether there is permission to operate on the billing information. Valid values: 1 (yes), 2 (no).
                     */
                    int64_t m_hasChargeOperation;
                    bool m_hasChargeOperationHasBeenSet;

                    /**
                     * Whether there is permission to display the VPC information. Valid values: 1 (yes), 2 (no).
                     */
                    int64_t m_hasVpcDisplay;
                    bool m_hasVpcDisplayHasBeenSet;

                    /**
                     * Whether there is permission to change the Grafana status. Valid values: 1 (yes), 2 (no).
                     */
                    int64_t m_hasGrafanaStatusChange;
                    bool m_hasGrafanaStatusChangeHasBeenSet;

                    /**
                     * Whether there is permission to manage agents. Valid values: 1 (yes), 2 (no).
                     */
                    int64_t m_hasAgentManage;
                    bool m_hasAgentManageHasBeenSet;

                    /**
                     * Whether there is permission to manage TKE integrations. Valid values: 1 (yes), 2 (no).
                     */
                    int64_t m_hasTkeManage;
                    bool m_hasTkeManageHasBeenSet;

                    /**
                     * Whether there is permission to display the API information. Valid values: 1 (yes), 2 (no).
                     */
                    int64_t m_hasApiOperation;
                    bool m_hasApiOperationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSINSTANCEGRANTINFO_H_
