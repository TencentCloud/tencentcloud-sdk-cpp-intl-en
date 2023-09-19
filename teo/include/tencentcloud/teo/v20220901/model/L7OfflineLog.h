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
                * Details of L7 logs.
                */
                class L7OfflineLog : public AbstractModel
                {
                public:
                    L7OfflineLog();
                    ~L7OfflineLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Log domain name.
                     * @return Domain Log domain name.
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Log domain name.
                     * @param _domain Log domain name.
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
                     * 获取Log query area. Valid values:
<li>`mainland`: Chinese mainland;</li>
<li>`overseas`: Global (outside the Chinese mainland). </li>
                     * @return Area Log query area. Valid values:
<li>`mainland`: Chinese mainland;</li>
<li>`overseas`: Global (outside the Chinese mainland). </li>
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Log query area. Valid values:
<li>`mainland`: Chinese mainland;</li>
<li>`overseas`: Global (outside the Chinese mainland). </li>
                     * @param _area Log query area. Valid values:
<li>`mainland`: Chinese mainland;</li>
<li>`overseas`: Global (outside the Chinese mainland). </li>
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
                     * 获取Log packet name.	
                     * @return LogPacketName Log packet name.	
                     * 
                     */
                    std::string GetLogPacketName() const;

                    /**
                     * 设置Log packet name.	
                     * @param _logPacketName Log packet name.	
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
                     * 获取Log download address.	
                     * @return Url Log download address.	
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Log download address.	
                     * @param _url Log download address.	
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
                     * 获取(Disused) Log packaging time. 
                     * @return LogTime (Disused) Log packaging time. 
                     * 
                     */
                    int64_t GetLogTime() const;

                    /**
                     * 设置(Disused) Log packaging time. 
                     * @param _logTime (Disused) Log packaging time. 
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
                     * 获取Start time of log packaging.
                     * @return LogStartTime Start time of log packaging.
                     * 
                     */
                    std::string GetLogStartTime() const;

                    /**
                     * 设置Start time of log packaging.
                     * @param _logStartTime Start time of log packaging.
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
                     * 获取End time of the log package.
                     * @return LogEndTime End time of the log package.
                     * 
                     */
                    std::string GetLogEndTime() const;

                    /**
                     * 设置End time of the log package.
                     * @param _logEndTime End time of the log package.
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
                     * 获取Original log size (in bytes).
                     * @return Size Original log size (in bytes).
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置Original log size (in bytes).
                     * @param _size Original log size (in bytes).
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
                     * Log domain name.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Log query area. Valid values:
<li>`mainland`: Chinese mainland;</li>
<li>`overseas`: Global (outside the Chinese mainland). </li>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Log packet name.	
                     */
                    std::string m_logPacketName;
                    bool m_logPacketNameHasBeenSet;

                    /**
                     * Log download address.	
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * (Disused) Log packaging time. 
                     */
                    int64_t m_logTime;
                    bool m_logTimeHasBeenSet;

                    /**
                     * Start time of log packaging.
                     */
                    std::string m_logStartTime;
                    bool m_logStartTimeHasBeenSet;

                    /**
                     * End time of the log package.
                     */
                    std::string m_logEndTime;
                    bool m_logEndTimeHasBeenSet;

                    /**
                     * Original log size (in bytes).
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_L7OFFLINELOG_H_
