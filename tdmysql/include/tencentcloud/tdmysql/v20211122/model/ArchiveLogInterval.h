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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_ARCHIVELOGINTERVAL_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_ARCHIVELOGINTERVAL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * Recoverable time interval.
                */
                class ArchiveLogInterval : public AbstractModel
                {
                public:
                    ArchiveLogInterval();
                    ~ArchiveLogInterval() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取End time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EndTime End time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _endTime End time.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Major version.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MajorVersion Major version.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMajorVersion() const;

                    /**
                     * 设置Major version.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _majorVersion Major version.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMajorVersion(const std::string& _majorVersion);

                    /**
                     * 判断参数 MajorVersion 是否已赋值
                     * @return MajorVersion 是否已赋值
                     * 
                     */
                    bool MajorVersionHasBeenSet() const;

                    /**
                     * 获取Minor version.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MinorVersion Minor version.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMinorVersion() const;

                    /**
                     * 设置Minor version.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _minorVersion Minor version.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMinorVersion(const std::string& _minorVersion);

                    /**
                     * 判断参数 MinorVersion 是否已赋值
                     * @return MinorVersion 是否已赋值
                     * 
                     */
                    bool MinorVersionHasBeenSet() const;

                    /**
                     * 获取Start time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StartTime Start time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _startTime Start time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                private:

                    /**
                     * End time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Major version.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_majorVersion;
                    bool m_majorVersionHasBeenSet;

                    /**
                     * Minor version.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_minorVersion;
                    bool m_minorVersionHasBeenSet;

                    /**
                     * Start time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_ARCHIVELOGINTERVAL_H_
