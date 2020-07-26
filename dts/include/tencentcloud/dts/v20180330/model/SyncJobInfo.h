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

#ifndef TENCENTCLOUD_DTS_V20180330_MODEL_SYNCJOBINFO_H_
#define TENCENTCLOUD_DTS_V20180330_MODEL_SYNCJOBINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20180330/model/SyncOption.h>
#include <tencentcloud/dts/v20180330/model/SyncInstanceInfo.h>
#include <tencentcloud/dts/v20180330/model/SyncDetailInfo.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20180330
        {
            namespace Model
            {
                /**
                * Disaster recovery sync task information
                */
                class SyncJobInfo : public AbstractModel
                {
                public:
                    SyncJobInfo();
                    ~SyncJobInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Disaster recovery task ID
                     * @return JobId Disaster recovery task ID
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置Disaster recovery task ID
                     * @param JobId Disaster recovery task ID
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取Disaster recovery task name
                     * @return JobName Disaster recovery task name
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置Disaster recovery task name
                     * @param JobName Disaster recovery task name
                     */
                    void SetJobName(const std::string& _jobName);

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     */
                    bool JobNameHasBeenSet() const;

                    /**
                     * 获取Task sync
                     * @return SyncOption Task sync
                     */
                    SyncOption GetSyncOption() const;

                    /**
                     * 设置Task sync
                     * @param SyncOption Task sync
                     */
                    void SetSyncOption(const SyncOption& _syncOption);

                    /**
                     * 判断参数 SyncOption 是否已赋值
                     * @return SyncOption 是否已赋值
                     */
                    bool SyncOptionHasBeenSet() const;

                    /**
                     * 获取Source access type
                     * @return SrcAccessType Source access type
                     */
                    std::string GetSrcAccessType() const;

                    /**
                     * 设置Source access type
                     * @param SrcAccessType Source access type
                     */
                    void SetSrcAccessType(const std::string& _srcAccessType);

                    /**
                     * 判断参数 SrcAccessType 是否已赋值
                     * @return SrcAccessType 是否已赋值
                     */
                    bool SrcAccessTypeHasBeenSet() const;

                    /**
                     * 获取Source data type
                     * @return SrcDatabaseType Source data type
                     */
                    std::string GetSrcDatabaseType() const;

                    /**
                     * 设置Source data type
                     * @param SrcDatabaseType Source data type
                     */
                    void SetSrcDatabaseType(const std::string& _srcDatabaseType);

                    /**
                     * 判断参数 SrcDatabaseType 是否已赋值
                     * @return SrcDatabaseType 是否已赋值
                     */
                    bool SrcDatabaseTypeHasBeenSet() const;

                    /**
                     * 获取Source instance information
                     * @return SrcInfo Source instance information
                     */
                    SyncInstanceInfo GetSrcInfo() const;

                    /**
                     * 设置Source instance information
                     * @param SrcInfo Source instance information
                     */
                    void SetSrcInfo(const SyncInstanceInfo& _srcInfo);

                    /**
                     * 判断参数 SrcInfo 是否已赋值
                     * @return SrcInfo 是否已赋值
                     */
                    bool SrcInfoHasBeenSet() const;

                    /**
                     * 获取Disaster recovery access type
                     * @return DstAccessType Disaster recovery access type
                     */
                    std::string GetDstAccessType() const;

                    /**
                     * 设置Disaster recovery access type
                     * @param DstAccessType Disaster recovery access type
                     */
                    void SetDstAccessType(const std::string& _dstAccessType);

                    /**
                     * 判断参数 DstAccessType 是否已赋值
                     * @return DstAccessType 是否已赋值
                     */
                    bool DstAccessTypeHasBeenSet() const;

                    /**
                     * 获取Disaster recovery data type
                     * @return DstDatabaseType Disaster recovery data type
                     */
                    std::string GetDstDatabaseType() const;

                    /**
                     * 设置Disaster recovery data type
                     * @param DstDatabaseType Disaster recovery data type
                     */
                    void SetDstDatabaseType(const std::string& _dstDatabaseType);

                    /**
                     * 判断参数 DstDatabaseType 是否已赋值
                     * @return DstDatabaseType 是否已赋值
                     */
                    bool DstDatabaseTypeHasBeenSet() const;

                    /**
                     * 获取Disaster recovery instance information
                     * @return DstInfo Disaster recovery instance information
                     */
                    SyncInstanceInfo GetDstInfo() const;

                    /**
                     * 设置Disaster recovery instance information
                     * @param DstInfo Disaster recovery instance information
                     */
                    void SetDstInfo(const SyncInstanceInfo& _dstInfo);

                    /**
                     * 判断参数 DstInfo 是否已赋值
                     * @return DstInfo 是否已赋值
                     */
                    bool DstInfoHasBeenSet() const;

                    /**
                     * 获取Task information
                     * @return Detail Task information
                     */
                    SyncDetailInfo GetDetail() const;

                    /**
                     * 设置Task information
                     * @param Detail Task information
                     */
                    void SetDetail(const SyncDetailInfo& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     */
                    bool DetailHasBeenSet() const;

                    /**
                     * 获取Task status
                     * @return Status Task status
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Task status
                     * @param Status Task status
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Table to be migrated
                     * @return DatabaseInfo Table to be migrated
                     */
                    std::string GetDatabaseInfo() const;

                    /**
                     * 设置Table to be migrated
                     * @param DatabaseInfo Table to be migrated
                     */
                    void SetDatabaseInfo(const std::string& _databaseInfo);

                    /**
                     * 判断参数 DatabaseInfo 是否已赋值
                     * @return DatabaseInfo 是否已赋值
                     */
                    bool DatabaseInfoHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateTime Creation time
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param CreateTime Creation time
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Start time
                     * @return StartTime Start time
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time
                     * @param StartTime Start time
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time
                     * @return EndTime End time
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time
                     * @param EndTime End time
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * Disaster recovery task ID
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * Disaster recovery task name
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * Task sync
                     */
                    SyncOption m_syncOption;
                    bool m_syncOptionHasBeenSet;

                    /**
                     * Source access type
                     */
                    std::string m_srcAccessType;
                    bool m_srcAccessTypeHasBeenSet;

                    /**
                     * Source data type
                     */
                    std::string m_srcDatabaseType;
                    bool m_srcDatabaseTypeHasBeenSet;

                    /**
                     * Source instance information
                     */
                    SyncInstanceInfo m_srcInfo;
                    bool m_srcInfoHasBeenSet;

                    /**
                     * Disaster recovery access type
                     */
                    std::string m_dstAccessType;
                    bool m_dstAccessTypeHasBeenSet;

                    /**
                     * Disaster recovery data type
                     */
                    std::string m_dstDatabaseType;
                    bool m_dstDatabaseTypeHasBeenSet;

                    /**
                     * Disaster recovery instance information
                     */
                    SyncInstanceInfo m_dstInfo;
                    bool m_dstInfoHasBeenSet;

                    /**
                     * Task information
                     */
                    SyncDetailInfo m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * Task status
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Table to be migrated
                     */
                    std::string m_databaseInfo;
                    bool m_databaseInfoHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20180330_MODEL_SYNCJOBINFO_H_
