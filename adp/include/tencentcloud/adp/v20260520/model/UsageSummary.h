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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_USAGESUMMARY_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_USAGESUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/ModelUsageSummary.h>
#include <tencentcloud/adp/v20260520/model/PlatformUsageSummary.h>
#include <tencentcloud/adp/v20260520/model/PluginUsageSummary.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Aggregated details of resource usage
                */
                class UsageSummary : public AbstractModel
                {
                public:
                    UsageSummary();
                    ~UsageSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Exclusive to MODEL domain</p>
                     * @return Model <p>Exclusive to MODEL domain</p>
                     * 
                     */
                    ModelUsageSummary GetModel() const;

                    /**
                     * 设置<p>Exclusive to MODEL domain</p>
                     * @param _model <p>Exclusive to MODEL domain</p>
                     * 
                     */
                    void SetModel(const ModelUsageSummary& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取<p>PLATFORM domain exclusive</p>
                     * @return Platform <p>PLATFORM domain exclusive</p>
                     * 
                     */
                    PlatformUsageSummary GetPlatform() const;

                    /**
                     * 设置<p>PLATFORM domain exclusive</p>
                     * @param _platform <p>PLATFORM domain exclusive</p>
                     * 
                     */
                    void SetPlatform(const PlatformUsageSummary& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取<p>Exclusive to PLUGIN domain</p>
                     * @return Plugin <p>Exclusive to PLUGIN domain</p>
                     * 
                     */
                    PluginUsageSummary GetPlugin() const;

                    /**
                     * 设置<p>Exclusive to PLUGIN domain</p>
                     * @param _plugin <p>Exclusive to PLUGIN domain</p>
                     * 
                     */
                    void SetPlugin(const PluginUsageSummary& _plugin);

                    /**
                     * 判断参数 Plugin 是否已赋值
                     * @return Plugin 是否已赋值
                     * 
                     */
                    bool PluginHasBeenSet() const;

                    /**
                     * 获取<p>Source ID; CORP view=space_id (corporate view grouped by space), SPACE view=app_id (uint64 string), APP view=app_id</p>
                     * @return SourceId <p>Source ID; CORP view=space_id (corporate view grouped by space), SPACE view=app_id (uint64 string), APP view=app_id</p>
                     * 
                     */
                    std::string GetSourceId() const;

                    /**
                     * 设置<p>Source ID; CORP view=space_id (corporate view grouped by space), SPACE view=app_id (uint64 string), APP view=app_id</p>
                     * @param _sourceId <p>Source ID; CORP view=space_id (corporate view grouped by space), SPACE view=app_id (uint64 string), APP view=app_id</p>
                     * 
                     */
                    void SetSourceId(const std::string& _sourceId);

                    /**
                     * 判断参数 SourceId 是否已赋值
                     * @return SourceId 是否已赋值
                     * 
                     */
                    bool SourceIdHasBeenSet() const;

                    /**
                     * 获取<p>Source name; CORP view=space_name, SPACE view=app_name, APP view=app_name</p>
                     * @return SourceName <p>Source name; CORP view=space_name, SPACE view=app_name, APP view=app_name</p>
                     * 
                     */
                    std::string GetSourceName() const;

                    /**
                     * 设置<p>Source name; CORP view=space_name, SPACE view=app_name, APP view=app_name</p>
                     * @param _sourceName <p>Source name; CORP view=space_name, SPACE view=app_name, APP view=app_name</p>
                     * 
                     */
                    void SetSourceName(const std::string& _sourceName);

                    /**
                     * 判断参数 SourceName 是否已赋值
                     * @return SourceName 是否已赋值
                     * 
                     */
                    bool SourceNameHasBeenSet() const;

                    /**
                     * 获取<p>View type, determines the business meaning of SourceId/SourceName</p><table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>VIEW_TYPE_UNSPECIFIED</td><td>0</td><td>Unspecified (invalid value, do not pass in requests)</td></tr><tr><td>VIEW_TYPE_CORP</td><td>1</td><td>Corporate view</td></tr><tr><td>VIEW_TYPE_SPACE</td><td>2</td><td>Space view</td></tr><tr><td>VIEW_TYPE_APP</td><td>3</td><td>Application view</td></tr></tbody></table>
                     * @return ViewType <p>View type, determines the business meaning of SourceId/SourceName</p><table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>VIEW_TYPE_UNSPECIFIED</td><td>0</td><td>Unspecified (invalid value, do not pass in requests)</td></tr><tr><td>VIEW_TYPE_CORP</td><td>1</td><td>Corporate view</td></tr><tr><td>VIEW_TYPE_SPACE</td><td>2</td><td>Space view</td></tr><tr><td>VIEW_TYPE_APP</td><td>3</td><td>Application view</td></tr></tbody></table>
                     * 
                     */
                    int64_t GetViewType() const;

                    /**
                     * 设置<p>View type, determines the business meaning of SourceId/SourceName</p><table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>VIEW_TYPE_UNSPECIFIED</td><td>0</td><td>Unspecified (invalid value, do not pass in requests)</td></tr><tr><td>VIEW_TYPE_CORP</td><td>1</td><td>Corporate view</td></tr><tr><td>VIEW_TYPE_SPACE</td><td>2</td><td>Space view</td></tr><tr><td>VIEW_TYPE_APP</td><td>3</td><td>Application view</td></tr></tbody></table>
                     * @param _viewType <p>View type, determines the business meaning of SourceId/SourceName</p><table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>VIEW_TYPE_UNSPECIFIED</td><td>0</td><td>Unspecified (invalid value, do not pass in requests)</td></tr><tr><td>VIEW_TYPE_CORP</td><td>1</td><td>Corporate view</td></tr><tr><td>VIEW_TYPE_SPACE</td><td>2</td><td>Space view</td></tr><tr><td>VIEW_TYPE_APP</td><td>3</td><td>Application view</td></tr></tbody></table>
                     * 
                     */
                    void SetViewType(const int64_t& _viewType);

                    /**
                     * 判断参数 ViewType 是否已赋值
                     * @return ViewType 是否已赋值
                     * 
                     */
                    bool ViewTypeHasBeenSet() const;

                private:

                    /**
                     * <p>Exclusive to MODEL domain</p>
                     */
                    ModelUsageSummary m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * <p>PLATFORM domain exclusive</p>
                     */
                    PlatformUsageSummary m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * <p>Exclusive to PLUGIN domain</p>
                     */
                    PluginUsageSummary m_plugin;
                    bool m_pluginHasBeenSet;

                    /**
                     * <p>Source ID; CORP view=space_id (corporate view grouped by space), SPACE view=app_id (uint64 string), APP view=app_id</p>
                     */
                    std::string m_sourceId;
                    bool m_sourceIdHasBeenSet;

                    /**
                     * <p>Source name; CORP view=space_name, SPACE view=app_name, APP view=app_name</p>
                     */
                    std::string m_sourceName;
                    bool m_sourceNameHasBeenSet;

                    /**
                     * <p>View type, determines the business meaning of SourceId/SourceName</p><table><tbody><tr><td>Enumeration item</td><td>Enumeration value</td><td>Description</td></tr><tr><td>VIEW_TYPE_UNSPECIFIED</td><td>0</td><td>Unspecified (invalid value, do not pass in requests)</td></tr><tr><td>VIEW_TYPE_CORP</td><td>1</td><td>Corporate view</td></tr><tr><td>VIEW_TYPE_SPACE</td><td>2</td><td>Space view</td></tr><tr><td>VIEW_TYPE_APP</td><td>3</td><td>Application view</td></tr></tbody></table>
                     */
                    int64_t m_viewType;
                    bool m_viewTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_USAGESUMMARY_H_
