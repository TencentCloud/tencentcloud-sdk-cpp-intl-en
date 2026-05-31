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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SETLIBRADBCLUSTERRENEWFLAGREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SETLIBRADBCLUSTERRENEWFLAGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * SetLibraDBClusterRenewFlag request structure.
                */
                class SetLibraDBClusterRenewFlagRequest : public AbstractModel
                {
                public:
                    SetLibraDBClusterRenewFlagRequest();
                    ~SetLibraDBClusterRenewFlagRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Analysis Cluster ID List
                     * @return ResourceIds Analysis Cluster ID List
                     * 
                     */
                    std::vector<std::string> GetResourceIds() const;

                    /**
                     * 设置Analysis Cluster ID List
                     * @param _resourceIds Analysis Cluster ID List
                     * 
                     */
                    void SetResourceIds(const std::vector<std::string>& _resourceIds);

                    /**
                     * 判断参数 ResourceIds 是否已赋值
                     * @return ResourceIds 是否已赋值
                     * 
                     */
                    bool ResourceIdsHasBeenSet() const;

                    /**
                     * 获取Auto-renewal flag 0: Normal renewal 1: Automatic renewal 2: Non-renewal upon expiration
                     * @return AutoRenewFlag Auto-renewal flag 0: Normal renewal 1: Automatic renewal 2: Non-renewal upon expiration
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置Auto-renewal flag 0: Normal renewal 1: Automatic renewal 2: Non-renewal upon expiration
                     * @param _autoRenewFlag Auto-renewal flag 0: Normal renewal 1: Automatic renewal 2: Non-renewal upon expiration
                     * 
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                private:

                    /**
                     * Analysis Cluster ID List
                     */
                    std::vector<std::string> m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

                    /**
                     * Auto-renewal flag 0: Normal renewal 1: Automatic renewal 2: Non-renewal upon expiration
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SETLIBRADBCLUSTERRENEWFLAGREQUEST_H_
