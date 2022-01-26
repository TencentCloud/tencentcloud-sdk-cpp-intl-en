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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_PERFORMANCEMONITORSET_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_PERFORMANCEMONITORSET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mariadb/v20170312/model/MonitorData.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Set of database performance monitoring metrics
                */
                class PerformanceMonitorSet : public AbstractModel
                {
                public:
                    PerformanceMonitorSet();
                    ~PerformanceMonitorSet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of UPDATE operations
                     * @return UpdateTotal Number of UPDATE operations
                     */
                    MonitorData GetUpdateTotal() const;

                    /**
                     * 设置Number of UPDATE operations
                     * @param UpdateTotal Number of UPDATE operations
                     */
                    void SetUpdateTotal(const MonitorData& _updateTotal);

                    /**
                     * 判断参数 UpdateTotal 是否已赋值
                     * @return UpdateTotal 是否已赋值
                     */
                    bool UpdateTotalHasBeenSet() const;

                    /**
                     * 获取Number of disk IOs per second
                     * @return DiskIops Number of disk IOs per second
                     */
                    MonitorData GetDiskIops() const;

                    /**
                     * 设置Number of disk IOs per second
                     * @param DiskIops Number of disk IOs per second
                     */
                    void SetDiskIops(const MonitorData& _diskIops);

                    /**
                     * 判断参数 DiskIops 是否已赋值
                     * @return DiskIops 是否已赋值
                     */
                    bool DiskIopsHasBeenSet() const;

                    /**
                     * 获取Number of active connections
                     * @return ConnActive Number of active connections
                     */
                    MonitorData GetConnActive() const;

                    /**
                     * 设置Number of active connections
                     * @param ConnActive Number of active connections
                     */
                    void SetConnActive(const MonitorData& _connActive);

                    /**
                     * 判断参数 ConnActive 是否已赋值
                     * @return ConnActive 是否已赋值
                     */
                    bool ConnActiveHasBeenSet() const;

                    /**
                     * 获取Cache hit rate
                     * @return MemHitRate Cache hit rate
                     */
                    MonitorData GetMemHitRate() const;

                    /**
                     * 设置Cache hit rate
                     * @param MemHitRate Cache hit rate
                     */
                    void SetMemHitRate(const MonitorData& _memHitRate);

                    /**
                     * 判断参数 MemHitRate 是否已赋值
                     * @return MemHitRate 是否已赋值
                     */
                    bool MemHitRateHasBeenSet() const;

                    /**
                     * 获取Primary/Secondary delay
                     * @return SlaveDelay Primary/Secondary delay
                     */
                    MonitorData GetSlaveDelay() const;

                    /**
                     * 设置Primary/Secondary delay
                     * @param SlaveDelay Primary/Secondary delay
                     */
                    void SetSlaveDelay(const MonitorData& _slaveDelay);

                    /**
                     * 判断参数 SlaveDelay 是否已赋值
                     * @return SlaveDelay 是否已赋值
                     */
                    bool SlaveDelayHasBeenSet() const;

                    /**
                     * 获取Number of SELECT operations
                     * @return SelectTotal Number of SELECT operations
                     */
                    MonitorData GetSelectTotal() const;

                    /**
                     * 设置Number of SELECT operations
                     * @param SelectTotal Number of SELECT operations
                     */
                    void SetSelectTotal(const MonitorData& _selectTotal);

                    /**
                     * 判断参数 SelectTotal 是否已赋值
                     * @return SelectTotal 是否已赋值
                     */
                    bool SelectTotalHasBeenSet() const;

                    /**
                     * 获取Number of slow queries
                     * @return LongQuery Number of slow queries
                     */
                    MonitorData GetLongQuery() const;

                    /**
                     * 设置Number of slow queries
                     * @param LongQuery Number of slow queries
                     */
                    void SetLongQuery(const MonitorData& _longQuery);

                    /**
                     * 判断参数 LongQuery 是否已赋值
                     * @return LongQuery 是否已赋值
                     */
                    bool LongQueryHasBeenSet() const;

                    /**
                     * 获取Number of DELETE operations
                     * @return DeleteTotal Number of DELETE operations
                     */
                    MonitorData GetDeleteTotal() const;

                    /**
                     * 设置Number of DELETE operations
                     * @param DeleteTotal Number of DELETE operations
                     */
                    void SetDeleteTotal(const MonitorData& _deleteTotal);

                    /**
                     * 判断参数 DeleteTotal 是否已赋值
                     * @return DeleteTotal 是否已赋值
                     */
                    bool DeleteTotalHasBeenSet() const;

                    /**
                     * 获取Number of INSERT operations
                     * @return InsertTotal Number of INSERT operations
                     */
                    MonitorData GetInsertTotal() const;

                    /**
                     * 设置Number of INSERT operations
                     * @param InsertTotal Number of INSERT operations
                     */
                    void SetInsertTotal(const MonitorData& _insertTotal);

                    /**
                     * 判断参数 InsertTotal 是否已赋值
                     * @return InsertTotal 是否已赋值
                     */
                    bool InsertTotalHasBeenSet() const;

                    /**
                     * 获取Whether primary/Secondary switch occurred. 1: yes, 0: no
                     * @return IsMasterSwitched Whether primary/Secondary switch occurred. 1: yes, 0: no
                     */
                    MonitorData GetIsMasterSwitched() const;

                    /**
                     * 设置Whether primary/Secondary switch occurred. 1: yes, 0: no
                     * @param IsMasterSwitched Whether primary/Secondary switch occurred. 1: yes, 0: no
                     */
                    void SetIsMasterSwitched(const MonitorData& _isMasterSwitched);

                    /**
                     * 判断参数 IsMasterSwitched 是否已赋值
                     * @return IsMasterSwitched 是否已赋值
                     */
                    bool IsMasterSwitchedHasBeenSet() const;

                private:

                    /**
                     * Number of UPDATE operations
                     */
                    MonitorData m_updateTotal;
                    bool m_updateTotalHasBeenSet;

                    /**
                     * Number of disk IOs per second
                     */
                    MonitorData m_diskIops;
                    bool m_diskIopsHasBeenSet;

                    /**
                     * Number of active connections
                     */
                    MonitorData m_connActive;
                    bool m_connActiveHasBeenSet;

                    /**
                     * Cache hit rate
                     */
                    MonitorData m_memHitRate;
                    bool m_memHitRateHasBeenSet;

                    /**
                     * Primary/Secondary delay
                     */
                    MonitorData m_slaveDelay;
                    bool m_slaveDelayHasBeenSet;

                    /**
                     * Number of SELECT operations
                     */
                    MonitorData m_selectTotal;
                    bool m_selectTotalHasBeenSet;

                    /**
                     * Number of slow queries
                     */
                    MonitorData m_longQuery;
                    bool m_longQueryHasBeenSet;

                    /**
                     * Number of DELETE operations
                     */
                    MonitorData m_deleteTotal;
                    bool m_deleteTotalHasBeenSet;

                    /**
                     * Number of INSERT operations
                     */
                    MonitorData m_insertTotal;
                    bool m_insertTotalHasBeenSet;

                    /**
                     * Whether primary/Secondary switch occurred. 1: yes, 0: no
                     */
                    MonitorData m_isMasterSwitched;
                    bool m_isMasterSwitchedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_PERFORMANCEMONITORSET_H_
