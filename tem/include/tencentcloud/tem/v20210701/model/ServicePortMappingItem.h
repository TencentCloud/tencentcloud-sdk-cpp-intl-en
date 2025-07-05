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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_SERVICEPORTMAPPINGITEM_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_SERVICEPORTMAPPINGITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * Application port mapping
                */
                class ServicePortMappingItem : public AbstractModel
                {
                public:
                    ServicePortMappingItem();
                    ~ServicePortMappingItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Application access port
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Port Application access port
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置Application access port
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _port Application access port
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Application listening port
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return TargetPort Application listening port
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTargetPort() const;

                    /**
                     * 设置Application listening port
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _targetPort Application listening port
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTargetPort(const int64_t& _targetPort);

                    /**
                     * 判断参数 TargetPort 是否已赋值
                     * @return TargetPort 是否已赋值
                     * 
                     */
                    bool TargetPortHasBeenSet() const;

                    /**
                     * 获取Protocol type
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Protocol Protocol type
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Protocol type
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _protocol Protocol type
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                private:

                    /**
                     * Application access port
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Application listening port
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_targetPort;
                    bool m_targetPortHasBeenSet;

                    /**
                     * Protocol type
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_SERVICEPORTMAPPINGITEM_H_
