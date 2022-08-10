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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_L7OFFLINELOG_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_L7OFFLINELOG_H_

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
        namespace V20220106
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
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return LogTime Start time of the log packaging
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t GetLogTime() const;

                    /**
                     * 设置Start time of the log packaging
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param LogTime Start time of the log packaging
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetLogTime(const int64_t& _logTime);

                    /**
                     * 判断参数 LogTime 是否已赋值
                     * @return LogTime 是否已赋值
                     */
                    bool LogTimeHasBeenSet() const;

                    /**
                     * 获取Subdomain name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Domain Subdomain name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Subdomain name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param Domain Subdomain name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取Log size, in bytes
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Size Log size, in bytes
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置Log size, in bytes
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param Size Log size, in bytes
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取Download address
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Url Download address
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Download address
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param Url Download address
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取Log package name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return LogPacketName Log package name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string GetLogPacketName() const;

                    /**
                     * 设置Log package name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param LogPacketName Log package name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetLogPacketName(const std::string& _logPacketName);

                    /**
                     * 判断参数 LogPacketName 是否已赋值
                     * @return LogPacketName 是否已赋值
                     */
                    bool LogPacketNameHasBeenSet() const;

                private:

                    /**
                     * Start time of the log packaging
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t m_logTime;
                    bool m_logTimeHasBeenSet;

                    /**
                     * Subdomain name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Log size, in bytes
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * Download address
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Log package name
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_logPacketName;
                    bool m_logPacketNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_L7OFFLINELOG_H_
