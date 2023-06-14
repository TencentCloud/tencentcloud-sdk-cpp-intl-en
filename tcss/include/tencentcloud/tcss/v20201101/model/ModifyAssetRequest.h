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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYASSETREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYASSETREQUEST_H_

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
                * ModifyAsset request structure.
                */
                class ModifyAssetRequest : public AbstractModel
                {
                public:
                    ModifyAssetRequest();
                    ~ModifyAssetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Sync all
                     * @return All Sync all
                     * 
                     */
                    bool GetAll() const;

                    /**
                     * 设置Sync all
                     * @param _all Sync all
                     * 
                     */
                    void SetAll(const bool& _all);

                    /**
                     * 判断参数 All 是否已赋值
                     * @return All 是否已赋值
                     * 
                     */
                    bool AllHasBeenSet() const;

                    /**
                     * 获取List of servers to be synced. Either this parameter or `All` (preferred) must be selected.
                     * @return Hosts List of servers to be synced. Either this parameter or `All` (preferred) must be selected.
                     * 
                     */
                    std::vector<std::string> GetHosts() const;

                    /**
                     * 设置List of servers to be synced. Either this parameter or `All` (preferred) must be selected.
                     * @param _hosts List of servers to be synced. Either this parameter or `All` (preferred) must be selected.
                     * 
                     */
                    void SetHosts(const std::vector<std::string>& _hosts);

                    /**
                     * 判断参数 Hosts 是否已赋值
                     * @return Hosts 是否已赋值
                     * 
                     */
                    bool HostsHasBeenSet() const;

                private:

                    /**
                     * Sync all
                     */
                    bool m_all;
                    bool m_allHasBeenSet;

                    /**
                     * List of servers to be synced. Either this parameter or `All` (preferred) must be selected.
                     */
                    std::vector<std::string> m_hosts;
                    bool m_hostsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYASSETREQUEST_H_
