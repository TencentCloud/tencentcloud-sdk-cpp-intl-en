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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DOMAINLOG_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DOMAINLOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * Details about a log package download link
                */
                class DomainLog : public AbstractModel
                {
                public:
                    DomainLog();
                    ~DomainLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Starting time of the log package
                     * @return StartTime Starting time of the log package
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Starting time of the log package
                     * @param _startTime Starting time of the log package
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time of the log package
                     * @return EndTime End time of the log package
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time of the log package
                     * @param _endTime End time of the log package
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Log package download link
                     * @return LogPath Log package download link
                     * 
                     */
                    std::string GetLogPath() const;

                    /**
                     * 设置Log package download link
                     * @param _logPath Log package download link
                     * 
                     */
                    void SetLogPath(const std::string& _logPath);

                    /**
                     * 判断参数 LogPath 是否已赋值
                     * @return LogPath 是否已赋值
                     * 
                     */
                    bool LogPathHasBeenSet() const;

                    /**
                     * 获取Acceleration region corresponding to the log package
`mainland`: Within the Chinese mainland
`overseas`: Outside the Chinese mainland
                     * @return Area Acceleration region corresponding to the log package
`mainland`: Within the Chinese mainland
`overseas`: Outside the Chinese mainland
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Acceleration region corresponding to the log package
`mainland`: Within the Chinese mainland
`overseas`: Outside the Chinese mainland
                     * @param _area Acceleration region corresponding to the log package
`mainland`: Within the Chinese mainland
`overseas`: Outside the Chinese mainland
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
                     * 获取Log package filename
                     * @return LogName Log package filename
                     * 
                     */
                    std::string GetLogName() const;

                    /**
                     * 设置Log package filename
                     * @param _logName Log package filename
                     * 
                     */
                    void SetLogName(const std::string& _logName);

                    /**
                     * 判断参数 LogName 是否已赋值
                     * @return LogName 是否已赋值
                     * 
                     */
                    bool LogNameHasBeenSet() const;

                private:

                    /**
                     * Starting time of the log package
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time of the log package
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Log package download link
                     */
                    std::string m_logPath;
                    bool m_logPathHasBeenSet;

                    /**
                     * Acceleration region corresponding to the log package
`mainland`: Within the Chinese mainland
`overseas`: Outside the Chinese mainland
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * Log package filename
                     */
                    std::string m_logName;
                    bool m_logNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DOMAINLOG_H_
