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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DELETEPROMETHEUSTEMPSYNCREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DELETEPROMETHEUSTEMPSYNCREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/PrometheusTemplateSyncTarget.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DeletePrometheusTempSync request structure.
                */
                class DeletePrometheusTempSyncRequest : public AbstractModel
                {
                public:
                    DeletePrometheusTempSyncRequest();
                    ~DeletePrometheusTempSyncRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Template ID
                     * @return TemplateId Template ID
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置Template ID
                     * @param TemplateId Template ID
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取List of unsynced objects
                     * @return Targets List of unsynced objects
                     */
                    std::vector<PrometheusTemplateSyncTarget> GetTargets() const;

                    /**
                     * 设置List of unsynced objects
                     * @param Targets List of unsynced objects
                     */
                    void SetTargets(const std::vector<PrometheusTemplateSyncTarget>& _targets);

                    /**
                     * 判断参数 Targets 是否已赋值
                     * @return Targets 是否已赋值
                     */
                    bool TargetsHasBeenSet() const;

                private:

                    /**
                     * Template ID
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * List of unsynced objects
                     */
                    std::vector<PrometheusTemplateSyncTarget> m_targets;
                    bool m_targetsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DELETEPROMETHEUSTEMPSYNCREQUEST_H_
