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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEVIEWSRESPONSE_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEVIEWSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/ClusterView.h>
#include <tencentcloud/es/v20180416/model/NodeView.h>
#include <tencentcloud/es/v20180416/model/KibanaView.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * DescribeViews response structure.
                */
                class DescribeViewsResponse : public AbstractModel
                {
                public:
                    DescribeViewsResponse();
                    ~DescribeViewsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster view
Note: This field may return `null`, indicating that no valid value was found.
                     * @return ClusterView Cluster view
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    ClusterView GetClusterView() const;

                    /**
                     * 判断参数 ClusterView 是否已赋值
                     * @return ClusterView 是否已赋值
                     * 
                     */
                    bool ClusterViewHasBeenSet() const;

                    /**
                     * 获取Node view
Note: This field may return `null`, indicating that no valid value was found.
                     * @return NodesView Node view
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::vector<NodeView> GetNodesView() const;

                    /**
                     * 判断参数 NodesView 是否已赋值
                     * @return NodesView 是否已赋值
                     * 
                     */
                    bool NodesViewHasBeenSet() const;

                    /**
                     * 获取Kibana view
Note: This field may return `null`, indicating that no valid value was found.
                     * @return KibanasView Kibana view
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::vector<KibanaView> GetKibanasView() const;

                    /**
                     * 判断参数 KibanasView 是否已赋值
                     * @return KibanasView 是否已赋值
                     * 
                     */
                    bool KibanasViewHasBeenSet() const;

                private:

                    /**
                     * Cluster view
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    ClusterView m_clusterView;
                    bool m_clusterViewHasBeenSet;

                    /**
                     * Node view
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<NodeView> m_nodesView;
                    bool m_nodesViewHasBeenSet;

                    /**
                     * Kibana view
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::vector<KibanaView> m_kibanasView;
                    bool m_kibanasViewHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEVIEWSRESPONSE_H_
