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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYPROMETHEUSTEMPREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYPROMETHEUSTEMPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/PrometheusTempModify.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * ModifyPrometheusTemp request structure.
                */
                class ModifyPrometheusTempRequest : public AbstractModel
                {
                public:
                    ModifyPrometheusTempRequest();
                    ~ModifyPrometheusTempRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Template ID
                     * @return TemplateId Template ID
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置Template ID
                     * @param _templateId Template ID
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取Modified content
                     * @return Template Modified content
                     * 
                     */
                    PrometheusTempModify GetTemplate() const;

                    /**
                     * 设置Modified content
                     * @param _template Modified content
                     * 
                     */
                    void SetTemplate(const PrometheusTempModify& _template);

                    /**
                     * 判断参数 Template 是否已赋值
                     * @return Template 是否已赋值
                     * 
                     */
                    bool TemplateHasBeenSet() const;

                private:

                    /**
                     * Template ID
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * Modified content
                     */
                    PrometheusTempModify m_template;
                    bool m_templateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_MODIFYPROMETHEUSTEMPREQUEST_H_
