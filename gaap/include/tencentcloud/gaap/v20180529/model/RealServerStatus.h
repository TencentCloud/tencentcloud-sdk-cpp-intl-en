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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_REALSERVERSTATUS_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_REALSERVERSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * Query the binding status of origin servers. BindStatus: 0 (not bound), 1(bound to rules or listeners).
                */
                class RealServerStatus : public AbstractModel
                {
                public:
                    RealServerStatus();
                    ~RealServerStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Origin server ID.
                     * @return RealServerId Origin server ID.
                     */
                    std::string GetRealServerId() const;

                    /**
                     * 设置Origin server ID.
                     * @param RealServerId Origin server ID.
                     */
                    void SetRealServerId(const std::string& _realServerId);

                    /**
                     * 判断参数 RealServerId 是否已赋值
                     * @return RealServerId 是否已赋值
                     */
                    bool RealServerIdHasBeenSet() const;

                    /**
                     * 获取0: not bound, 1: bound to rule or listener.
                     * @return BindStatus 0: not bound, 1: bound to rule or listener.
                     */
                    int64_t GetBindStatus() const;

                    /**
                     * 设置0: not bound, 1: bound to rule or listener.
                     * @param BindStatus 0: not bound, 1: bound to rule or listener.
                     */
                    void SetBindStatus(const int64_t& _bindStatus);

                    /**
                     * 判断参数 BindStatus 是否已赋值
                     * @return BindStatus 是否已赋值
                     */
                    bool BindStatusHasBeenSet() const;

                    /**
                     * 获取ID of the connection bound to this origin server. This string is empty if they are not bound.
                     * @return ProxyId ID of the connection bound to this origin server. This string is empty if they are not bound.
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置ID of the connection bound to this origin server. This string is empty if they are not bound.
                     * @param ProxyId ID of the connection bound to this origin server. This string is empty if they are not bound.
                     */
                    void SetProxyId(const std::string& _proxyId);

                    /**
                     * 判断参数 ProxyId 是否已赋值
                     * @return ProxyId 是否已赋值
                     */
                    bool ProxyIdHasBeenSet() const;

                private:

                    /**
                     * Origin server ID.
                     */
                    std::string m_realServerId;
                    bool m_realServerIdHasBeenSet;

                    /**
                     * 0: not bound, 1: bound to rule or listener.
                     */
                    int64_t m_bindStatus;
                    bool m_bindStatusHasBeenSet;

                    /**
                     * ID of the connection bound to this origin server. This string is empty if they are not bound.
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_REALSERVERSTATUS_H_
