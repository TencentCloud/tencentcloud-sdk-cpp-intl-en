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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_WANSERVICENODELIST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_WANSERVICENODELIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * mongodb public network service node information.
                */
                class WanServiceNodeList : public AbstractModel
                {
                public:
                    WanServiceNodeList();
                    ~WanServiceNodeList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取vip and port information of the instance node.
                     * @return VipVport vip and port information of the instance node.
                     * 
                     */
                    std::string GetVipVport() const;

                    /**
                     * 设置vip and port information of the instance node.
                     * @param _vipVport vip and port information of the instance node.
                     * 
                     */
                    void SetVipVport(const std::string& _vipVport);

                    /**
                     * 判断参数 VipVport 是否已赋值
                     * @return VipVport 是否已赋值
                     * 
                     */
                    bool VipVportHasBeenSet() const;

                    /**
                     * 获取The listening port of a CLB listener ranges from 1 to 65535.
                     * @return ListenerPort The listening port of a CLB listener ranges from 1 to 65535.
                     * 
                     */
                    std::string GetListenerPort() const;

                    /**
                     * 设置The listening port of a CLB listener ranges from 1 to 65535.
                     * @param _listenerPort The listening port of a CLB listener ranges from 1 to 65535.
                     * 
                     */
                    void SetListenerPort(const std::string& _listenerPort);

                    /**
                     * 判断参数 ListenerPort 是否已赋值
                     * @return ListenerPort 是否已赋值
                     * 
                     */
                    bool ListenerPortHasBeenSet() const;

                private:

                    /**
                     * vip and port information of the instance node.
                     */
                    std::string m_vipVport;
                    bool m_vipVportHasBeenSet;

                    /**
                     * The listening port of a CLB listener ranges from 1 to 65535.
                     */
                    std::string m_listenerPort;
                    bool m_listenerPortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_WANSERVICENODELIST_H_
