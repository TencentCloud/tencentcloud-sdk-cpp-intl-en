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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_GRAFANAPLUGIN_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_GRAFANAPLUGIN_H_

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
                * Grafana plugin
                */
                class GrafanaPlugin : public AbstractModel
                {
                public:
                    GrafanaPlugin();
                    ~GrafanaPlugin() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Grafana plugin ID
                     * @return PluginId Grafana plugin ID
                     */
                    std::string GetPluginId() const;

                    /**
                     * 设置Grafana plugin ID
                     * @param PluginId Grafana plugin ID
                     */
                    void SetPluginId(const std::string& _pluginId);

                    /**
                     * 判断参数 PluginId 是否已赋值
                     * @return PluginId 是否已赋值
                     */
                    bool PluginIdHasBeenSet() const;

                    /**
                     * 获取Grafana plugin version
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Version Grafana plugin version
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置Grafana plugin version
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Version Grafana plugin version
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     */
                    bool VersionHasBeenSet() const;

                private:

                    /**
                     * Grafana plugin ID
                     */
                    std::string m_pluginId;
                    bool m_pluginIdHasBeenSet;

                    /**
                     * Grafana plugin version
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_GRAFANAPLUGIN_H_
