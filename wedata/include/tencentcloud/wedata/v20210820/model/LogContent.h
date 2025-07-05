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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_LOGCONTENT_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_LOGCONTENT_H_

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
                * Real-time Task Log Content
                */
                class LogContent : public AbstractModel
                {
                public:
                    LogContent();
                    ~LogContent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Log Timestamp, in milliseconds
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Time Log Timestamp, in milliseconds
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    uint64_t GetTime() const;

                    /**
                     * 设置Log Timestamp, in milliseconds
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _time Log Timestamp, in milliseconds
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Log Package ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return PkgId Log Package ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetPkgId() const;

                    /**
                     * 设置Log Package ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _pkgId Log Package ID
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Log content
                     * @return Log Log content
                     * 
                     */
                    std::string GetLog() const;

                    /**
                     * 设置Log content
                     * @param _log Log content
                     * 
                     */
                    void SetLog(const std::string& _log);

                    /**
                     * 判断参数 Log 是否已赋值
                     * @return Log 是否已赋值
                     * 
                     */
                    bool LogHasBeenSet() const;

                private:

                    /**
                     * Log Timestamp, in milliseconds
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    uint64_t m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * Log Package ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_pkgId;
                    bool m_pkgIdHasBeenSet;

                    /**
                     * Log content
                     */
                    std::string m_log;
                    bool m_logHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_LOGCONTENT_H_
