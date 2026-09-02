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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CLBLISTENERITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CLBLISTENERITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * CLB listener
                */
                class ClbListenerItem : public AbstractModel
                {
                public:
                    ClbListenerItem();
                    ~ClbListenerItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Listener ID.</p>
                     * @return ListenerID <p>Listener ID.</p>
                     * 
                     */
                    std::string GetListenerID() const;

                    /**
                     * 设置<p>Listener ID.</p>
                     * @param _listenerID <p>Listener ID.</p>
                     * 
                     */
                    void SetListenerID(const std::string& _listenerID);

                    /**
                     * 判断参数 ListenerID 是否已赋值
                     * @return ListenerID 是否已赋值
                     * 
                     */
                    bool ListenerIDHasBeenSet() const;

                    /**
                     * 获取<p>Listener name</p>
                     * @return ListenerName <p>Listener name</p>
                     * 
                     */
                    std::string GetListenerName() const;

                    /**
                     * 设置<p>Listener name</p>
                     * @param _listenerName <p>Listener name</p>
                     * 
                     */
                    void SetListenerName(const std::string& _listenerName);

                    /**
                     * 判断参数 ListenerName 是否已赋值
                     * @return ListenerName 是否已赋值
                     * 
                     */
                    bool ListenerNameHasBeenSet() const;

                    /**
                     * 获取<p>Protocol</p>
                     * @return Protocol <p>Protocol</p>
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置<p>Protocol</p>
                     * @param _protocol <p>Protocol</p>
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取<p>Port</p>
                     * @return Port <p>Port</p>
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置<p>Port</p>
                     * @param _port <p>Port</p>
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取<p>Creation time.</p>
                     * @return CreateTime <p>Creation time.</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>Creation time.</p>
                     * @param _createTime <p>Creation time.</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>Listener ID.</p>
                     */
                    std::string m_listenerID;
                    bool m_listenerIDHasBeenSet;

                    /**
                     * <p>Listener name</p>
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * <p>Protocol</p>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>Port</p>
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * <p>Creation time.</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CLBLISTENERITEM_H_
