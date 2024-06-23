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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_LOGCONTENTINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_LOGCONTENTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Log Content Entity
                */
                class LogContentInfo : public AbstractModel
                {
                public:
                    LogContentInfo();
                    ~LogContentInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Log contentNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Log Log contentNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetLog() const;

                    /**
                     * 设置Log contentNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _log Log contentNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetLog(const std::string& _log);

                    /**
                     * 判断参数 Log 是否已赋值
                     * @return Log 是否已赋值
                     * 
                     */
                    bool LogHasBeenSet() const;

                    /**
                     * 获取Log group Id\nNote: This field may return null, indicating that no valid value can be obtained.
                     * @return PkgId Log group Id\nNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetPkgId() const;

                    /**
                     * 设置Log group Id\nNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _pkgId Log group Id\nNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetPkgId(const std::string& _pkgId);

                    /**
                     * 判断参数 PkgId 是否已赋值
                     * @return PkgId 是否已赋值
                     * 
                     */
                    bool PkgIdHasBeenSet() const;

                    /**
                     * 获取Log ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return PkgLogId Log ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetPkgLogId() const;

                    /**
                     * 设置Log ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _pkgLogId Log ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetPkgLogId(const std::string& _pkgLogId);

                    /**
                     * 判断参数 PkgLogId 是否已赋值
                     * @return PkgLogId 是否已赋值
                     * 
                     */
                    bool PkgLogIdHasBeenSet() const;

                    /**
                     * 获取TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Time TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetTime() const;

                    /**
                     * 设置TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _time TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTime(const uint64_t& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取Container Name the Log Belongs To
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ContainerName Container Name the Log Belongs To
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetContainerName() const;

                    /**
                     * 设置Container Name the Log Belongs To
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _containerName Container Name the Log Belongs To
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetContainerName(const std::string& _containerName);

                    /**
                     * 判断参数 ContainerName 是否已赋值
                     * @return ContainerName 是否已赋值
                     * 
                     */
                    bool ContainerNameHasBeenSet() const;

                private:

                    /**
                     * Log contentNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_log;
                    bool m_logHasBeenSet;

                    /**
                     * Log group Id\nNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_pkgId;
                    bool m_pkgIdHasBeenSet;

                    /**
                     * Log ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_pkgLogId;
                    bool m_pkgLogIdHasBeenSet;

                    /**
                     * TimeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * Container Name the Log Belongs To
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_LOGCONTENTINFO_H_
