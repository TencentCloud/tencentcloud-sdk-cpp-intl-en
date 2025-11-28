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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_LOGINFO_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_LOGINFO_H_

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
                * Log details.
                */
                class LogInfo : public AbstractModel
                {
                public:
                    LogInfo();
                    ~LogInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Log category.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LogComponent Log category.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLogComponent() const;

                    /**
                     * 设置Log category.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _logComponent Log category.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLogComponent(const std::string& _logComponent);

                    /**
                     * 判断参数 LogComponent 是否已赋值
                     * @return LogComponent 是否已赋值
                     * 
                     */
                    bool LogComponentHasBeenSet() const;

                    /**
                     * 获取Log level.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LogLevel Log level.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLogLevel() const;

                    /**
                     * 设置Log level.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _logLevel Log level.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLogLevel(const std::string& _logLevel);

                    /**
                     * 判断参数 LogLevel 是否已赋值
                     * @return LogLevel 是否已赋值
                     * 
                     */
                    bool LogLevelHasBeenSet() const;

                    /**
                     * 获取Log generation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LogTime Log generation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLogTime() const;

                    /**
                     * 设置Log generation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _logTime Log generation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLogTime(const std::string& _logTime);

                    /**
                     * 判断参数 LogTime 是否已赋值
                     * @return LogTime 是否已赋值
                     * 
                     */
                    bool LogTimeHasBeenSet() const;

                    /**
                     * 获取Log details.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LogDetail Log details.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLogDetail() const;

                    /**
                     * 设置Log details.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _logDetail Log details.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLogDetail(const std::string& _logDetail);

                    /**
                     * 判断参数 LogDetail 是否已赋值
                     * @return LogDetail 是否已赋值
                     * 
                     */
                    bool LogDetailHasBeenSet() const;

                    /**
                     * 获取Log connection information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LogConnection Log connection information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLogConnection() const;

                    /**
                     * 设置Log connection information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _logConnection Log connection information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLogConnection(const std::string& _logConnection);

                    /**
                     * 判断参数 LogConnection 是否已赋值
                     * @return LogConnection 是否已赋值
                     * 
                     */
                    bool LogConnectionHasBeenSet() const;

                    /**
                     * 获取Log ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LogId Log ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLogId() const;

                    /**
                     * 设置Log ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _logId Log ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLogId(const std::string& _logId);

                    /**
                     * 判断参数 LogId 是否已赋值
                     * @return LogId 是否已赋值
                     * 
                     */
                    bool LogIdHasBeenSet() const;

                private:

                    /**
                     * Log category.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_logComponent;
                    bool m_logComponentHasBeenSet;

                    /**
                     * Log level.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_logLevel;
                    bool m_logLevelHasBeenSet;

                    /**
                     * Log generation time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_logTime;
                    bool m_logTimeHasBeenSet;

                    /**
                     * Log details.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_logDetail;
                    bool m_logDetailHasBeenSet;

                    /**
                     * Log connection information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_logConnection;
                    bool m_logConnectionHasBeenSet;

                    /**
                     * Log ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_logId;
                    bool m_logIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_LOGINFO_H_
