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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_L4OFFLINELOG_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_L4OFFLINELOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * The L7 log details
                */
                class L4OfflineLog : public AbstractModel
                {
                public:
                    L4OfflineLog();
                    ~L4OfflineLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The start time of the log packaging.
                     * @return LogTime The start time of the log packaging.
                     */
                    int64_t GetLogTime() const;

                    /**
                     * 设置The start time of the log packaging.
                     * @param LogTime The start time of the log packaging.
                     */
                    void SetLogTime(const int64_t& _logTime);

                    /**
                     * 判断参数 LogTime 是否已赋值
                     * @return LogTime 是否已赋值
                     */
                    bool LogTimeHasBeenSet() const;

                    /**
                     * 获取The L4 proxy ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProxyId The L4 proxy ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置The L4 proxy ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param ProxyId The L4 proxy ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetProxyId(const std::string& _proxyId);

                    /**
                     * 判断参数 ProxyId 是否已赋值
                     * @return ProxyId 是否已赋值
                     */
                    bool ProxyIdHasBeenSet() const;

                    /**
                     * 获取The log size, in bytes.
                     * @return Size The log size, in bytes.
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置The log size, in bytes.
                     * @param Size The log size, in bytes.
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取The download address.
                     * @return Url The download address.
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置The download address.
                     * @param Url The download address.
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取The log package name.
                     * @return LogPacketName The log package name.
                     */
                    std::string GetLogPacketName() const;

                    /**
                     * 设置The log package name.
                     * @param LogPacketName The log package name.
                     */
                    void SetLogPacketName(const std::string& _logPacketName);

                    /**
                     * 判断参数 LogPacketName 是否已赋值
                     * @return LogPacketName 是否已赋值
                     */
                    bool LogPacketNameHasBeenSet() const;

                    /**
                     * 获取The acceleration region. Values:
<li>`mainland`: Chinese mainland;</li>
<li>`overseas`: Global (outside the Chinese mainland);</li>
                     * @return Area The acceleration region. Values:
<li>`mainland`: Chinese mainland;</li>
<li>`overseas`: Global (outside the Chinese mainland);</li>
                     */
                    std::string GetArea() const;

                    /**
                     * 设置The acceleration region. Values:
<li>`mainland`: Chinese mainland;</li>
<li>`overseas`: Global (outside the Chinese mainland);</li>
                     * @param Area The acceleration region. Values:
<li>`mainland`: Chinese mainland;</li>
<li>`overseas`: Global (outside the Chinese mainland);</li>
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     */
                    bool AreaHasBeenSet() const;

                private:

                    /**
                     * The start time of the log packaging.
                     */
                    int64_t m_logTime;
                    bool m_logTimeHasBeenSet;

                    /**
                     * The L4 proxy ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * The log size, in bytes.
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * The download address.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * The log package name.
                     */
                    std::string m_logPacketName;
                    bool m_logPacketNameHasBeenSet;

                    /**
                     * The acceleration region. Values:
<li>`mainland`: Chinese mainland;</li>
<li>`overseas`: Global (outside the Chinese mainland);</li>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_L4OFFLINELOG_H_
