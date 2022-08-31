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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATEGRAFANAWHITELISTREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATEGRAFANAWHITELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * UpdateGrafanaWhiteList request structure.
                */
                class UpdateGrafanaWhiteListRequest : public AbstractModel
                {
                public:
                    UpdateGrafanaWhiteListRequest();
                    ~UpdateGrafanaWhiteListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance name
                     * @return InstanceId Instance name
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance name
                     * @param InstanceId Instance name
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Allowlist in array
                     * @return Whitelist Allowlist in array
                     */
                    std::vector<std::string> GetWhitelist() const;

                    /**
                     * 设置Allowlist in array
                     * @param Whitelist Allowlist in array
                     */
                    void SetWhitelist(const std::vector<std::string>& _whitelist);

                    /**
                     * 判断参数 Whitelist 是否已赋值
                     * @return Whitelist 是否已赋值
                     */
                    bool WhitelistHasBeenSet() const;

                private:

                    /**
                     * Instance name
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Allowlist in array
                     */
                    std::vector<std::string> m_whitelist;
                    bool m_whitelistHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATEGRAFANAWHITELISTREQUEST_H_
