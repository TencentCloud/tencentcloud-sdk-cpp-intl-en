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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_PROXYSIMPLEINFO_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_PROXYSIMPLEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/ListenerInfo.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * Used by internal APIs. It returns connections from which the statistics can be derived, and the listener information.
                */
                class ProxySimpleInfo : public AbstractModel
                {
                public:
                    ProxySimpleInfo();
                    ~ProxySimpleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Connection ID
                     * @return ProxyId Connection ID
                     * 
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置Connection ID
                     * @param _proxyId Connection ID
                     * 
                     */
                    void SetProxyId(const std::string& _proxyId);

                    /**
                     * 判断参数 ProxyId 是否已赋值
                     * @return ProxyId 是否已赋值
                     * 
                     */
                    bool ProxyIdHasBeenSet() const;

                    /**
                     * 获取Connection name
                     * @return ProxyName Connection name
                     * 
                     */
                    std::string GetProxyName() const;

                    /**
                     * 设置Connection name
                     * @param _proxyName Connection name
                     * 
                     */
                    void SetProxyName(const std::string& _proxyName);

                    /**
                     * 判断参数 ProxyName 是否已赋值
                     * @return ProxyName 是否已赋值
                     * 
                     */
                    bool ProxyNameHasBeenSet() const;

                    /**
                     * 获取Listener list
                     * @return ListenerList Listener list
                     * 
                     */
                    std::vector<ListenerInfo> GetListenerList() const;

                    /**
                     * 设置Listener list
                     * @param _listenerList Listener list
                     * 
                     */
                    void SetListenerList(const std::vector<ListenerInfo>& _listenerList);

                    /**
                     * 判断参数 ListenerList 是否已赋值
                     * @return ListenerList 是否已赋值
                     * 
                     */
                    bool ListenerListHasBeenSet() const;

                private:

                    /**
                     * Connection ID
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * Connection name
                     */
                    std::string m_proxyName;
                    bool m_proxyNameHasBeenSet;

                    /**
                     * Listener list
                     */
                    std::vector<ListenerInfo> m_listenerList;
                    bool m_listenerListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_PROXYSIMPLEINFO_H_
