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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_INTEGRATIONCONFIGURATION_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_INTEGRATIONCONFIGURATION_H_

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
                * Export integration configuration
                */
                class IntegrationConfiguration : public AbstractModel
                {
                public:
                    IntegrationConfiguration();
                    ~IntegrationConfiguration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Name
                     * @return Name Name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name
                     * @param _name Name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Type
                     * @return Kind Type
                     * 
                     */
                    std::string GetKind() const;

                    /**
                     * 设置Type
                     * @param _kind Type
                     * 
                     */
                    void SetKind(const std::string& _kind);

                    /**
                     * 判断参数 Kind 是否已赋值
                     * @return Kind 是否已赋值
                     * 
                     */
                    bool KindHasBeenSet() const;

                    /**
                     * 获取Content
                     * @return Content Content
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Content
                     * @param _content Content
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取Status
                     * @return Status Status
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Status
                     * @param _status Status
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Instance type
                     * @return Category Instance type
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置Instance type
                     * @param _category Instance type
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取Instance description
                     * @return InstanceDesc Instance description
                     * 
                     */
                    std::string GetInstanceDesc() const;

                    /**
                     * 设置Instance description
                     * @param _instanceDesc Instance description
                     * 
                     */
                    void SetInstanceDesc(const std::string& _instanceDesc);

                    /**
                     * 判断参数 InstanceDesc 是否已赋值
                     * @return InstanceDesc 是否已赋值
                     * 
                     */
                    bool InstanceDescHasBeenSet() const;

                    /**
                     * 获取Dashboard URL
                     * @return GrafanaDashboardURL Dashboard URL
                     * 
                     */
                    std::string GetGrafanaDashboardURL() const;

                    /**
                     * 设置Dashboard URL
                     * @param _grafanaDashboardURL Dashboard URL
                     * 
                     */
                    void SetGrafanaDashboardURL(const std::string& _grafanaDashboardURL);

                    /**
                     * 判断参数 GrafanaDashboardURL 是否已赋值
                     * @return GrafanaDashboardURL 是否已赋值
                     * 
                     */
                    bool GrafanaDashboardURLHasBeenSet() const;

                private:

                    /**
                     * Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Type
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * Content
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * Status
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Instance type
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * Instance description
                     */
                    std::string m_instanceDesc;
                    bool m_instanceDescHasBeenSet;

                    /**
                     * Dashboard URL
                     */
                    std::string m_grafanaDashboardURL;
                    bool m_grafanaDashboardURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_INTEGRATIONCONFIGURATION_H_
