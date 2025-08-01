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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_CLOSECDBPROXYREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_CLOSECDBPROXYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * CloseCDBProxy request structure.
                */
                class CloseCDBProxyRequest : public AbstractModel
                {
                public:
                    CloseCDBProxyRequest();
                    ~CloseCDBProxyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Proxy group ID
                     * @return ProxyGroupId Proxy group ID
                     * 
                     */
                    std::string GetProxyGroupId() const;

                    /**
                     * 设置Proxy group ID
                     * @param _proxyGroupId Proxy group ID
                     * 
                     */
                    void SetProxyGroupId(const std::string& _proxyGroupId);

                    /**
                     * 判断参数 ProxyGroupId 是否已赋值
                     * @return ProxyGroupId 是否已赋值
                     * 
                     */
                    bool ProxyGroupIdHasBeenSet() const;

                    /**
                     * 获取Whether only to disable read/write separation. Valid values: `true`, `false`. Default value: `false`.
                     * @return OnlyCloseRW Whether only to disable read/write separation. Valid values: `true`, `false`. Default value: `false`.
                     * 
                     */
                    bool GetOnlyCloseRW() const;

                    /**
                     * 设置Whether only to disable read/write separation. Valid values: `true`, `false`. Default value: `false`.
                     * @param _onlyCloseRW Whether only to disable read/write separation. Valid values: `true`, `false`. Default value: `false`.
                     * 
                     */
                    void SetOnlyCloseRW(const bool& _onlyCloseRW);

                    /**
                     * 判断参数 OnlyCloseRW 是否已赋值
                     * @return OnlyCloseRW 是否已赋值
                     * 
                     */
                    bool OnlyCloseRWHasBeenSet() const;

                private:

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Proxy group ID
                     */
                    std::string m_proxyGroupId;
                    bool m_proxyGroupIdHasBeenSet;

                    /**
                     * Whether only to disable read/write separation. Valid values: `true`, `false`. Default value: `false`.
                     */
                    bool m_onlyCloseRW;
                    bool m_onlyCloseRWHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_CLOSECDBPROXYREQUEST_H_
