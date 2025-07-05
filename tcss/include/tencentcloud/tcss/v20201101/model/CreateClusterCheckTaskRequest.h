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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CREATECLUSTERCHECKTASKREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CREATECLUSTERCHECKTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/ClusterCheckTaskItem.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * CreateClusterCheckTask request structure.
                */
                class CreateClusterCheckTaskRequest : public AbstractModel
                {
                public:
                    CreateClusterCheckTaskRequest();
                    ~CreateClusterCheckTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Information of the specified cluster to be scanned
                     * @return ClusterCheckTaskList Information of the specified cluster to be scanned
                     * 
                     */
                    std::vector<ClusterCheckTaskItem> GetClusterCheckTaskList() const;

                    /**
                     * 设置Information of the specified cluster to be scanned
                     * @param _clusterCheckTaskList Information of the specified cluster to be scanned
                     * 
                     */
                    void SetClusterCheckTaskList(const std::vector<ClusterCheckTaskItem>& _clusterCheckTaskList);

                    /**
                     * 判断参数 ClusterCheckTaskList 是否已赋值
                     * @return ClusterCheckTaskList 是否已赋值
                     * 
                     */
                    bool ClusterCheckTaskListHasBeenSet() const;

                private:

                    /**
                     * Information of the specified cluster to be scanned
                     */
                    std::vector<ClusterCheckTaskItem> m_clusterCheckTaskList;
                    bool m_clusterCheckTaskListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CREATECLUSTERCHECKTASKREQUEST_H_
