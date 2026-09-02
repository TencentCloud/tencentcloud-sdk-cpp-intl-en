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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGESCANAUTOMATCHCONFIG_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGESCANAUTOMATCHCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Image scanning auto-match configuration
                */
                class ImageScanAutoMatchConfig : public AbstractModel
                {
                public:
                    ImageScanAutoMatchConfig();
                    ~ImageScanAutoMatchConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Match mode</p><p>Enumeration values:</p><ul><li>BY_CLUSTER: select by cluster</li><li>RUNNING_CONTAINER: images running on the container cluster</li><li>LATEST_VERSION: latest version image</li><li>LOCAL_HOST: images running on the host node</li></ul>
                     * @return Modes <p>Match mode</p><p>Enumeration values:</p><ul><li>BY_CLUSTER: select by cluster</li><li>RUNNING_CONTAINER: images running on the container cluster</li><li>LATEST_VERSION: latest version image</li><li>LOCAL_HOST: images running on the host node</li></ul>
                     * 
                     */
                    std::vector<std::string> GetModes() const;

                    /**
                     * 设置<p>Match mode</p><p>Enumeration values:</p><ul><li>BY_CLUSTER: select by cluster</li><li>RUNNING_CONTAINER: images running on the container cluster</li><li>LATEST_VERSION: latest version image</li><li>LOCAL_HOST: images running on the host node</li></ul>
                     * @param _modes <p>Match mode</p><p>Enumeration values:</p><ul><li>BY_CLUSTER: select by cluster</li><li>RUNNING_CONTAINER: images running on the container cluster</li><li>LATEST_VERSION: latest version image</li><li>LOCAL_HOST: images running on the host node</li></ul>
                     * 
                     */
                    void SetModes(const std::vector<std::string>& _modes);

                    /**
                     * 判断参数 Modes 是否已赋值
                     * @return Modes 是否已赋值
                     * 
                     */
                    bool ModesHasBeenSet() const;

                    /**
                     * 获取<p>Cluster ID.</p>
                     * @return Clusters <p>Cluster ID.</p>
                     * 
                     */
                    std::vector<std::string> GetClusters() const;

                    /**
                     * 设置<p>Cluster ID.</p>
                     * @param _clusters <p>Cluster ID.</p>
                     * 
                     */
                    void SetClusters(const std::vector<std::string>& _clusters);

                    /**
                     * 判断参数 Clusters 是否已赋值
                     * @return Clusters 是否已赋值
                     * 
                     */
                    bool ClustersHasBeenSet() const;

                private:

                    /**
                     * <p>Match mode</p><p>Enumeration values:</p><ul><li>BY_CLUSTER: select by cluster</li><li>RUNNING_CONTAINER: images running on the container cluster</li><li>LATEST_VERSION: latest version image</li><li>LOCAL_HOST: images running on the host node</li></ul>
                     */
                    std::vector<std::string> m_modes;
                    bool m_modesHasBeenSet;

                    /**
                     * <p>Cluster ID.</p>
                     */
                    std::vector<std::string> m_clusters;
                    bool m_clustersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGESCANAUTOMATCHCONFIG_H_
