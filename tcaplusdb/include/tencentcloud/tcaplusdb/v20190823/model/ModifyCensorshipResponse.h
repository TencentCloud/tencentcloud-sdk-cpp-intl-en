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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYCENSORSHIPRESPONSE_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYCENSORSHIPRESPONSE_H_

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
                * ModifyCensorship response structure.
                */
                class ModifyCensorshipResponse : public AbstractModel
                {
                public:
                    ModifyCensorshipResponse();
                    ~ModifyCensorshipResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     */
                    std::string GetClusterId() const;

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Approver UIN list
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return Uins Approver UIN list
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetUins() const;

                    /**
                     * 判断参数 Uins 是否已赋值
                     * @return Uins 是否已赋值
                     */
                    bool UinsHasBeenSet() const;

                    /**
                     * 获取Whether the operation approval feature is enabled for this cluster. Valid values: `0` (disabled), `1` (enabled)
                     * @return Censorship Whether the operation approval feature is enabled for this cluster. Valid values: `0` (disabled), `1` (enabled)
                     */
                    int64_t GetCensorship() const;

                    /**
                     * 判断参数 Censorship 是否已赋值
                     * @return Censorship 是否已赋值
                     */
                    bool CensorshipHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Approver UIN list
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_uins;
                    bool m_uinsHasBeenSet;

                    /**
                     * Whether the operation approval feature is enabled for this cluster. Valid values: `0` (disabled), `1` (enabled)
                     */
                    int64_t m_censorship;
                    bool m_censorshipHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYCENSORSHIPRESPONSE_H_
