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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_L7OFFLINELOG_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_L7OFFLINELOG_H_

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
                * Layer-7 offline log details
                */
                class L7OfflineLog : public AbstractModel
                {
                public:
                    L7OfflineLog();
                    ~L7OfflineLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Start time of the log packaging
                     * @return LogTime Start time of the log packaging
                     * 
                     */
                    int64_t GetLogTime() const;

                    /**
                     * 设置Start time of the log packaging
                     * @param _logTime Start time of the log packaging
                     * 
                     */
                    void SetLogTime(const int64_t& _logTime);

                    /**
                     * 判断参数 LogTime 是否已赋值
                     * @return LogTime 是否已赋值
                     * 
                     */
                    bool LogTimeHasBeenSet() const;

                    /**
                     * 获取The subdomain name.
                     * @return Domain The subdomain name.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置The subdomain name.
                     * @param _domain The subdomain name.
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Log size, in bytes.
                     * @return Size Log size, in bytes.
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置Log size, in bytes.
                     * @param _size Log size, in bytes.
                     * 
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取Download address
                     * @return Url Download address
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Download address
                     * @param _url Download address
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取Log package name
                     * @return LogPacketName Log package name
                     * 
                     */
                    std::string GetLogPacketName() const;

                    /**
                     * 设置Log package name
                     * @param _logPacketName Log package name
                     * 
                     */
                    void SetLogPacketName(const std::string& _logPacketName);

                    /**
                     * 判断参数 LogPacketName 是否已赋值
                     * @return LogPacketName 是否已赋值
                     * 
                     */
                    bool LogPacketNameHasBeenSet() const;

                    /**
                     * 获取Acceleration region. Values:
<li>`mainland`: Chinese mainland;</li>
<li>`overseas`: Global (outside the Chinese mainland);</li>
                     * @return Area Acceleration region. Values:
<li>`mainland`: Chinese mainland;</li>
<li>`overseas`: Global (outside the Chinese mainland);</li>
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Acceleration region. Values:
<li>`mainland`: Chinese mainland;</li>
<li>`overseas`: Global (outside the Chinese mainland);</li>
                     * @param _area Acceleration region. Values:
<li>`mainland`: Chinese mainland;</li>
<li>`overseas`: Global (outside the Chinese mainland);</li>
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                private:

                    /**
                     * Start time of the log packaging
                     */
                    int64_t m_logTime;
                    bool m_logTimeHasBeenSet;

                    /**
                     * The subdomain name.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Log size, in bytes.
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * Download address
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Log package name
                     */
                    std::string m_logPacketName;
                    bool m_logPacketNameHasBeenSet;

                    /**
                     * Acceleration region. Values:
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

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_L7OFFLINELOG_H_
