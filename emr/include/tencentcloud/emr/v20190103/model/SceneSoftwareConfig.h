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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_SCENESOFTWARECONFIG_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_SCENESOFTWARECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Cluster application scenario and supported deployment component information.
                */
                class SceneSoftwareConfig : public AbstractModel
                {
                public:
                    SceneSoftwareConfig();
                    ~SceneSoftwareConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取List of deployed components. Different EMR product versions (ProductVersion) have different optional component lists. For details about how to query the optional component lists for different product versions, see [Component Version](https://www.tencentcloud.com/document/product/589/20279?from_cn_redirect=1).
Example values: hive and flink.
                     * @return Software List of deployed components. Different EMR product versions (ProductVersion) have different optional component lists. For details about how to query the optional component lists for different product versions, see [Component Version](https://www.tencentcloud.com/document/product/589/20279?from_cn_redirect=1).
Example values: hive and flink.
                     * 
                     */
                    std::vector<std::string> GetSoftware() const;

                    /**
                     * 设置List of deployed components. Different EMR product versions (ProductVersion) have different optional component lists. For details about how to query the optional component lists for different product versions, see [Component Version](https://www.tencentcloud.com/document/product/589/20279?from_cn_redirect=1).
Example values: hive and flink.
                     * @param _software List of deployed components. Different EMR product versions (ProductVersion) have different optional component lists. For details about how to query the optional component lists for different product versions, see [Component Version](https://www.tencentcloud.com/document/product/589/20279?from_cn_redirect=1).
Example values: hive and flink.
                     * 
                     */
                    void SetSoftware(const std::vector<std::string>& _software);

                    /**
                     * 判断参数 Software 是否已赋值
                     * @return Software 是否已赋值
                     * 
                     */
                    bool SoftwareHasBeenSet() const;

                    /**
                     * 获取Default Hadoop-Default. For details about the scenario-based values, see [Scenario Query](https://www.tencentcloud.com/document/product/589/14624?from_cn_redirect=1):
Hadoop-Kudu
Hadoop-Zookeeper
Hadoop-Presto
Hadoop-Hbase
Hadoop-Default
                     * @return SceneName Default Hadoop-Default. For details about the scenario-based values, see [Scenario Query](https://www.tencentcloud.com/document/product/589/14624?from_cn_redirect=1):
Hadoop-Kudu
Hadoop-Zookeeper
Hadoop-Presto
Hadoop-Hbase
Hadoop-Default
                     * 
                     */
                    std::string GetSceneName() const;

                    /**
                     * 设置Default Hadoop-Default. For details about the scenario-based values, see [Scenario Query](https://www.tencentcloud.com/document/product/589/14624?from_cn_redirect=1):
Hadoop-Kudu
Hadoop-Zookeeper
Hadoop-Presto
Hadoop-Hbase
Hadoop-Default
                     * @param _sceneName Default Hadoop-Default. For details about the scenario-based values, see [Scenario Query](https://www.tencentcloud.com/document/product/589/14624?from_cn_redirect=1):
Hadoop-Kudu
Hadoop-Zookeeper
Hadoop-Presto
Hadoop-Hbase
Hadoop-Default
                     * 
                     */
                    void SetSceneName(const std::string& _sceneName);

                    /**
                     * 判断参数 SceneName 是否已赋值
                     * @return SceneName 是否已赋值
                     * 
                     */
                    bool SceneNameHasBeenSet() const;

                private:

                    /**
                     * List of deployed components. Different EMR product versions (ProductVersion) have different optional component lists. For details about how to query the optional component lists for different product versions, see [Component Version](https://www.tencentcloud.com/document/product/589/20279?from_cn_redirect=1).
Example values: hive and flink.
                     */
                    std::vector<std::string> m_software;
                    bool m_softwareHasBeenSet;

                    /**
                     * Default Hadoop-Default. For details about the scenario-based values, see [Scenario Query](https://www.tencentcloud.com/document/product/589/14624?from_cn_redirect=1):
Hadoop-Kudu
Hadoop-Zookeeper
Hadoop-Presto
Hadoop-Hbase
Hadoop-Default
                     */
                    std::string m_sceneName;
                    bool m_sceneNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_SCENESOFTWARECONFIG_H_
