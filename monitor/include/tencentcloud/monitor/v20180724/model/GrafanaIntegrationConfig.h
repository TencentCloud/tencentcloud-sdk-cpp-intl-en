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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_GRAFANAINTEGRATIONCONFIG_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_GRAFANAINTEGRATIONCONFIG_H_

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
                * Grafana instance configuration
                */
                class GrafanaIntegrationConfig : public AbstractModel
                {
                public:
                    GrafanaIntegrationConfig();
                    ~GrafanaIntegrationConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Integration ID
                     * @return IntegrationId Integration ID
                     */
                    std::string GetIntegrationId() const;

                    /**
                     * 设置Integration ID
                     * @param IntegrationId Integration ID
                     */
                    void SetIntegrationId(const std::string& _integrationId);

                    /**
                     * 判断参数 IntegrationId 是否已赋值
                     * @return IntegrationId 是否已赋值
                     */
                    bool IntegrationIdHasBeenSet() const;

                    /**
                     * 获取Integration type
                     * @return Kind Integration type
                     */
                    std::string GetKind() const;

                    /**
                     * 设置Integration type
                     * @param Kind Integration type
                     */
                    void SetKind(const std::string& _kind);

                    /**
                     * 判断参数 Kind 是否已赋值
                     * @return Kind 是否已赋值
                     */
                    bool KindHasBeenSet() const;

                    /**
                     * 获取Integration content
                     * @return Content Integration content
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Integration content
                     * @param Content Integration content
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取Integration description
                     * @return Description Integration description
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Integration description
                     * @param Description Integration description
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * Integration ID
                     */
                    std::string m_integrationId;
                    bool m_integrationIdHasBeenSet;

                    /**
                     * Integration type
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * Integration content
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * Integration description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_GRAFANAINTEGRATIONCONFIG_H_
