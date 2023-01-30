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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CLUSTERCREATECOMPONENTITEM_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CLUSTERCREATECOMPONENTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * Input parameters for `CreateCheckComponent`, which are used to batch install defenders.
                */
                class ClusterCreateComponentItem : public AbstractModel
                {
                public:
                    ClusterCreateComponentItem();
                    ~ClusterCreateComponentItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID of the cluster for which to install the component
                     * @return ClusterId ID of the cluster for which to install the component
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置ID of the cluster for which to install the component
                     * @param ClusterId ID of the cluster for which to install the component
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Cluster region
                     * @return ClusterRegion Cluster region
                     */
                    std::string GetClusterRegion() const;

                    /**
                     * 设置Cluster region
                     * @param ClusterRegion Cluster region
                     */
                    void SetClusterRegion(const std::string& _clusterRegion);

                    /**
                     * 判断参数 ClusterRegion 是否已赋值
                     * @return ClusterRegion 是否已赋值
                     */
                    bool ClusterRegionHasBeenSet() const;

                private:

                    /**
                     * ID of the cluster for which to install the component
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Cluster region
                     */
                    std::string m_clusterRegion;
                    bool m_clusterRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CLUSTERCREATECOMPONENTITEM_H_
