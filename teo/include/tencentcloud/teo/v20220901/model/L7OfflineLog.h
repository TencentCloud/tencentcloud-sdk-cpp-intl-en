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
                * Layer-7 offline log details.
                */
                class L7OfflineLog : public AbstractModel
                {
                public:
                    L7OfflineLog();
                    ~L7OfflineLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Offline log domain name.
                     * @return Domain Offline log domain name.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Offline log domain name.
                     * @param _domain Offline log domain name.
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
                     * 获取Log associated region. Valid values:
<li>mainland: within the Chinese mainland; </li>
<li>overseas: global (excluding the Chinese mainland).</li>
                     * @return Area Log associated region. Valid values:
<li>mainland: within the Chinese mainland; </li>
<li>overseas: global (excluding the Chinese mainland).</li>
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Log associated region. Valid values:
<li>mainland: within the Chinese mainland; </li>
<li>overseas: global (excluding the Chinese mainland).</li>
                     * @param _area Log associated region. Valid values:
<li>mainland: within the Chinese mainland; </li>
<li>overseas: global (excluding the Chinese mainland).</li>
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取Offline log data packet name.	
                     * @return LogPacketName Offline log data packet name.	
                     * 
                     */
                    std::string GetLogPacketName() const;

                    /**
                     * 设置Offline log data packet name.	
                     * @param _logPacketName Offline log data packet name.	
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
                     * 获取Offline log download address.	
                     * @return Url Offline log download address.	
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Offline log download address.	
                     * @param _url Offline log download address.	
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
                     * 获取Log packaging time. This parameter has been deprecated.
                     * @return LogTime Log packaging time. This parameter has been deprecated.
                     * 
                     */
                    int64_t GetLogTime() const;

                    /**
                     * 设置Log packaging time. This parameter has been deprecated.
                     * @param _logTime Log packaging time. This parameter has been deprecated.
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
                     * 获取Log packaging start time.
                     * @return LogStartTime Log packaging start time.
                     * 
                     */
                    std::string GetLogStartTime() const;

                    /**
                     * 设置Log packaging start time.
                     * @param _logStartTime Log packaging start time.
                     * 
                     */
                    void SetLogStartTime(const std::string& _logStartTime);

                    /**
                     * 判断参数 LogStartTime 是否已赋值
                     * @return LogStartTime 是否已赋值
                     * 
                     */
                    bool LogStartTimeHasBeenSet() const;

                    /**
                     * 获取Log packaging end time.
                     * @return LogEndTime Log packaging end time.
                     * 
                     */
                    std::string GetLogEndTime() const;

                    /**
                     * 设置Log packaging end time.
                     * @param _logEndTime Log packaging end time.
                     * 
                     */
                    void SetLogEndTime(const std::string& _logEndTime);

                    /**
                     * 判断参数 LogEndTime 是否已赋值
                     * @return LogEndTime 是否已赋值
                     * 
                     */
                    bool LogEndTimeHasBeenSet() const;

                    /**
                     * 获取Log original size in bytes.
                     * @return Size Log original size in bytes.
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置Log original size in bytes.
                     * @param _size Log original size in bytes.
                     * 
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                private:

                    /**
                     * Offline log domain name.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Log associated region. Valid values:
<li>mainland: within the Chinese mainland; </li>
<li>overseas: global (excluding the Chinese mainland).</li>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Offline log data packet name.	
                     */
                    std::string m_logPacketName;
                    bool m_logPacketNameHasBeenSet;

                    /**
                     * Offline log download address.	
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Log packaging time. This parameter has been deprecated.
                     */
                    int64_t m_logTime;
                    bool m_logTimeHasBeenSet;

                    /**
                     * Log packaging start time.
                     */
                    std::string m_logStartTime;
                    bool m_logStartTimeHasBeenSet;

                    /**
                     * Log packaging end time.
                     */
                    std::string m_logEndTime;
                    bool m_logEndTimeHasBeenSet;

                    /**
                     * Log original size in bytes.
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_L7OFFLINELOG_H_
