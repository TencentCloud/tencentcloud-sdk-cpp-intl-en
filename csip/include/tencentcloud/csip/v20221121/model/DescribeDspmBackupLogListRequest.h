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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMBACKUPLOGLISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMBACKUPLOGLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeDspmBackupLogList request structure.
                */
                class DescribeDspmBackupLogListRequest : public AbstractModel
                {
                public:
                    DescribeDspmBackupLogListRequest();
                    ~DescribeDspmBackupLogListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Number limit.</p>
                     * @return Limit <p>Number limit.</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>Number limit.</p>
                     * @param _limit <p>Number limit.</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>Offset.</p>
                     * @return Offset <p>Offset.</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>Offset.</p>
                     * @param _offset <p>Offset.</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>Group account member id</p>
                     * @return MemberId <p>Group account member id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>Group account member id</p>
                     * @param _memberId <p>Group account member id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>Sorting method (desc = descending order, asc = ascending order)</p>
                     * @return Sort <p>Sorting method (desc = descending order, asc = ascending order)</p>
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置<p>Sorting method (desc = descending order, asc = ascending order)</p>
                     * @param _sort <p>Sorting method (desc = descending order, asc = ascending order)</p>
                     * 
                     */
                    void SetSort(const std::string& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取<p>Sorting field (supports 'StartTime')</p>
                     * @return Field <p>Sorting field (supports 'StartTime')</p>
                     * 
                     */
                    std::string GetField() const;

                    /**
                     * 设置<p>Sorting field (supports 'StartTime')</p>
                     * @param _field <p>Sorting field (supports 'StartTime')</p>
                     * 
                     */
                    void SetField(const std::string& _field);

                    /**
                     * 判断参数 Field 是否已赋值
                     * @return Field 是否已赋值
                     * 
                     */
                    bool FieldHasBeenSet() const;

                    /**
                     * 获取<p>Start time.</p>
                     * @return StartTime <p>Start time.</p>
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置<p>Start time.</p>
                     * @param _startTime <p>Start time.</p>
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>End time.</p>
                     * @return EndTime <p>End time.</p>
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置<p>End time.</p>
                     * @param _endTime <p>End time.</p>
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>Backup log status. 0: incomplete; 1: backup file; 2: recovering; 3: restored; 4: deleted; -1: full query.</p>
                     * @return Status <p>Backup log status. 0: incomplete; 1: backup file; 2: recovering; 3: restored; 4: deleted; -1: full query.</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>Backup log status. 0: incomplete; 1: backup file; 2: recovering; 3: restored; 4: deleted; -1: full query.</p>
                     * @param _status <p>Backup log status. 0: incomplete; 1: backup file; 2: recovering; 3: restored; 4: deleted; -1: full query.</p>
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
                     * 获取<p>Database type, for example: cdb, mariadb</p>
                     * @return DbTypes <p>Database type, for example: cdb, mariadb</p>
                     * 
                     */
                    std::vector<std::string> GetDbTypes() const;

                    /**
                     * 设置<p>Database type, for example: cdb, mariadb</p>
                     * @param _dbTypes <p>Database type, for example: cdb, mariadb</p>
                     * 
                     */
                    void SetDbTypes(const std::vector<std::string>& _dbTypes);

                    /**
                     * 判断参数 DbTypes 是否已赋值
                     * @return DbTypes 是否已赋值
                     * 
                     */
                    bool DbTypesHasBeenSet() const;

                private:

                    /**
                     * <p>Number limit.</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Offset.</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Sorting method (desc = descending order, asc = ascending order)</p>
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * <p>Sorting field (supports 'StartTime')</p>
                     */
                    std::string m_field;
                    bool m_fieldHasBeenSet;

                    /**
                     * <p>Start time.</p>
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>End time.</p>
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>Backup log status. 0: incomplete; 1: backup file; 2: recovering; 3: restored; 4: deleted; -1: full query.</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Database type, for example: cdb, mariadb</p>
                     */
                    std::vector<std::string> m_dbTypes;
                    bool m_dbTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMBACKUPLOGLISTREQUEST_H_
