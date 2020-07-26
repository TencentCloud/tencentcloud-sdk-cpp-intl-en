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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DBROLLBACKTIMEINFO_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DBROLLBACKTIMEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * Information of time range available for database rollback
                */
                class DbRollbackTimeInfo : public AbstractModel
                {
                public:
                    DbRollbackTimeInfo();
                    ~DbRollbackTimeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Database name
                     * @return DBName Database name
                     */
                    std::string GetDBName() const;

                    /**
                     * 设置Database name
                     * @param DBName Database name
                     */
                    void SetDBName(const std::string& _dBName);

                    /**
                     * 判断参数 DBName 是否已赋值
                     * @return DBName 是否已赋值
                     */
                    bool DBNameHasBeenSet() const;

                    /**
                     * 获取Start time of time range available for rollback
                     * @return StartTime Start time of time range available for rollback
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time of time range available for rollback
                     * @param StartTime Start time of time range available for rollback
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time of time range available for rollback
                     * @return EndTime End time of time range available for rollback
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time of time range available for rollback
                     * @param EndTime End time of time range available for rollback
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * Database name
                     */
                    std::string m_dBName;
                    bool m_dBNameHasBeenSet;

                    /**
                     * Start time of time range available for rollback
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time of time range available for rollback
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DBROLLBACKTIMEINFO_H_
