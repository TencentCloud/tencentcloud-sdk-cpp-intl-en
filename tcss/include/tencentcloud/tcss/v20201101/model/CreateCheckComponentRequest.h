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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CREATECHECKCOMPONENTREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CREATECHECKCOMPONENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/ClusterCreateComponentItem.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * CreateCheckComponent request structure.
                */
                class CreateCheckComponentRequest : public AbstractModel
                {
                public:
                    CreateCheckComponentRequest();
                    ~CreateCheckComponentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Information of the list of clusters for installation
                     * @return ClusterInfoList Information of the list of clusters for installation
                     * 
                     */
                    std::vector<ClusterCreateComponentItem> GetClusterInfoList() const;

                    /**
                     * 设置Information of the list of clusters for installation
                     * @param _clusterInfoList Information of the list of clusters for installation
                     * 
                     */
                    void SetClusterInfoList(const std::vector<ClusterCreateComponentItem>& _clusterInfoList);

                    /**
                     * 判断参数 ClusterInfoList 是否已赋值
                     * @return ClusterInfoList 是否已赋值
                     * 
                     */
                    bool ClusterInfoListHasBeenSet() const;

                private:

                    /**
                     * Information of the list of clusters for installation
                     */
                    std::vector<ClusterCreateComponentItem> m_clusterInfoList;
                    bool m_clusterInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CREATECHECKCOMPONENTREQUEST_H_
