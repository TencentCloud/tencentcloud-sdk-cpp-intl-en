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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DBBACKUP_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DBBACKUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Database backup information
                */
                class DBBackup : public AbstractModel
                {
                public:
                    DBBackup();
                    ~DBBackup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique backup file ID
                     * @return Id Unique backup file ID
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置Unique backup file ID
                     * @param _id Unique backup file ID
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取File generation start time
                     * @return StartTime File generation start time
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置File generation start time
                     * @param _startTime File generation start time
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
                     * 获取File generation end time
                     * @return EndTime File generation end time
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置File generation end time
                     * @param _endTime File generation end time
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
                     * 获取File size in KB
                     * @return Size File size in KB
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置File size in KB
                     * @param _size File size in KB
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
                     * 获取Policy (0: instance backup, 1: multi-database backup)
                     * @return Strategy Policy (0: instance backup, 1: multi-database backup)
                     * 
                     */
                    int64_t GetStrategy() const;

                    /**
                     * 设置Policy (0: instance backup, 1: multi-database backup)
                     * @param _strategy Policy (0: instance backup, 1: multi-database backup)
                     * 
                     */
                    void SetStrategy(const int64_t& _strategy);

                    /**
                     * 判断参数 Strategy 是否已赋值
                     * @return Strategy 是否已赋值
                     * 
                     */
                    bool StrategyHasBeenSet() const;

                    /**
                     * 获取Type (0: scheduled)
                     * @return Way Type (0: scheduled)
                     * 
                     */
                    int64_t GetWay() const;

                    /**
                     * 设置Type (0: scheduled)
                     * @param _way Type (0: scheduled)
                     * 
                     */
                    void SetWay(const int64_t& _way);

                    /**
                     * 判断参数 Way 是否已赋值
                     * @return Way 是否已赋值
                     * 
                     */
                    bool WayHasBeenSet() const;

                    /**
                     * 获取Backup mode (1: full)
                     * @return Type Backup mode (1: full)
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置Backup mode (1: full)
                     * @param _type Backup mode (1: full)
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Status (1: creating, 2: success, 3: failure)
                     * @return Status Status (1: creating, 2: success, 3: failure)
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Status (1: creating, 2: success, 3: failure)
                     * @param _status Status (1: creating, 2: success, 3: failure)
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取DB list
                     * @return DbList DB list
                     * 
                     */
                    std::vector<std::string> GetDbList() const;

                    /**
                     * 设置DB list
                     * @param _dbList DB list
                     * 
                     */
                    void SetDbList(const std::vector<std::string>& _dbList);

                    /**
                     * 判断参数 DbList 是否已赋值
                     * @return DbList 是否已赋值
                     * 
                     */
                    bool DbListHasBeenSet() const;

                    /**
                     * 获取Download address on private network
                     * @return InternalAddr Download address on private network
                     * 
                     */
                    std::string GetInternalAddr() const;

                    /**
                     * 设置Download address on private network
                     * @param _internalAddr Download address on private network
                     * 
                     */
                    void SetInternalAddr(const std::string& _internalAddr);

                    /**
                     * 判断参数 InternalAddr 是否已赋值
                     * @return InternalAddr 是否已赋值
                     * 
                     */
                    bool InternalAddrHasBeenSet() const;

                    /**
                     * 获取Download address on public network
                     * @return ExternalAddr Download address on public network
                     * 
                     */
                    std::string GetExternalAddr() const;

                    /**
                     * 设置Download address on public network
                     * @param _externalAddr Download address on public network
                     * 
                     */
                    void SetExternalAddr(const std::string& _externalAddr);

                    /**
                     * 判断参数 ExternalAddr 是否已赋值
                     * @return ExternalAddr 是否已赋值
                     * 
                     */
                    bool ExternalAddrHasBeenSet() const;

                    /**
                     * 获取Backup set ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return SetId Backup set ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSetId() const;

                    /**
                     * 设置Backup set ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _setId Backup set ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSetId(const std::string& _setId);

                    /**
                     * 判断参数 SetId 是否已赋值
                     * @return SetId 是否已赋值
                     * 
                     */
                    bool SetIdHasBeenSet() const;

                private:

                    /**
                     * Unique backup file ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * File generation start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * File generation end time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * File size in KB
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * Policy (0: instance backup, 1: multi-database backup)
                     */
                    int64_t m_strategy;
                    bool m_strategyHasBeenSet;

                    /**
                     * Type (0: scheduled)
                     */
                    int64_t m_way;
                    bool m_wayHasBeenSet;

                    /**
                     * Backup mode (1: full)
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Status (1: creating, 2: success, 3: failure)
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * DB list
                     */
                    std::vector<std::string> m_dbList;
                    bool m_dbListHasBeenSet;

                    /**
                     * Download address on private network
                     */
                    std::string m_internalAddr;
                    bool m_internalAddrHasBeenSet;

                    /**
                     * Download address on public network
                     */
                    std::string m_externalAddr;
                    bool m_externalAddrHasBeenSet;

                    /**
                     * Backup set ID
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_setId;
                    bool m_setIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DBBACKUP_H_
