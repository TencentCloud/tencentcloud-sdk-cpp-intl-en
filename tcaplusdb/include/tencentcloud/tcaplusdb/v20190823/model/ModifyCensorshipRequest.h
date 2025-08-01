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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYCENSORSHIPREQUEST_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYCENSORSHIPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * ModifyCensorship request structure.
                */
                class ModifyCensorshipRequest : public AbstractModel
                {
                public:
                    ModifyCensorshipRequest();
                    ~ModifyCensorshipRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param _clusterId Cluster ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Whether to enable the operation approval feature for this cluster. Valid values: `0` (disable), `1` (enable)
                     * @return Censorship Whether to enable the operation approval feature for this cluster. Valid values: `0` (disable), `1` (enable)
                     * 
                     */
                    int64_t GetCensorship() const;

                    /**
                     * 设置Whether to enable the operation approval feature for this cluster. Valid values: `0` (disable), `1` (enable)
                     * @param _censorship Whether to enable the operation approval feature for this cluster. Valid values: `0` (disable), `1` (enable)
                     * 
                     */
                    void SetCensorship(const int64_t& _censorship);

                    /**
                     * 判断参数 Censorship 是否已赋值
                     * @return Censorship 是否已赋值
                     * 
                     */
                    bool CensorshipHasBeenSet() const;

                    /**
                     * 获取Approver UIN list
                     * @return Uins Approver UIN list
                     * 
                     */
                    std::vector<std::string> GetUins() const;

                    /**
                     * 设置Approver UIN list
                     * @param _uins Approver UIN list
                     * 
                     */
                    void SetUins(const std::vector<std::string>& _uins);

                    /**
                     * 判断参数 Uins 是否已赋值
                     * @return Uins 是否已赋值
                     * 
                     */
                    bool UinsHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Whether to enable the operation approval feature for this cluster. Valid values: `0` (disable), `1` (enable)
                     */
                    int64_t m_censorship;
                    bool m_censorshipHasBeenSet;

                    /**
                     * Approver UIN list
                     */
                    std::vector<std::string> m_uins;
                    bool m_uinsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYCENSORSHIPREQUEST_H_
