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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEREFRESHTASKREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEREFRESHTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateRefreshTask request structure.
                */
                class CreateRefreshTaskRequest : public AbstractModel
                {
                public:
                    CreateRefreshTaskRequest();
                    ~CreateRefreshTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取
                     * @return ClusterIDs 
                     * 
                     */
                    std::vector<std::string> GetClusterIDs() const;

                    /**
                     * 设置
                     * @param _clusterIDs 
                     * 
                     */
                    void SetClusterIDs(const std::vector<std::string>& _clusterIDs);

                    /**
                     * 判断参数 ClusterIDs 是否已赋值
                     * @return ClusterIDs 是否已赋值
                     * 
                     */
                    bool ClusterIDsHasBeenSet() const;

                    /**
                     * 获取
                     * @return IsSyncListOnly 
                     * 
                     */
                    bool GetIsSyncListOnly() const;

                    /**
                     * 设置
                     * @param _isSyncListOnly 
                     * 
                     */
                    void SetIsSyncListOnly(const bool& _isSyncListOnly);

                    /**
                     * 判断参数 IsSyncListOnly 是否已赋值
                     * @return IsSyncListOnly 是否已赋值
                     * 
                     */
                    bool IsSyncListOnlyHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::vector<std::string> m_clusterIDs;
                    bool m_clusterIDsHasBeenSet;

                    /**
                     * 
                     */
                    bool m_isSyncListOnly;
                    bool m_isSyncListOnlyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEREFRESHTASKREQUEST_H_
