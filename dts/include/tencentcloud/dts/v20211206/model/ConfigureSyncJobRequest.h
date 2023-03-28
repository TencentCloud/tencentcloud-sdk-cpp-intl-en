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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_CONFIGURESYNCJOBREQUEST_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_CONFIGURESYNCJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/Objects.h>
#include <tencentcloud/dts/v20211206/model/Endpoint.h>
#include <tencentcloud/dts/v20211206/model/SyncDBEndpointInfos.h>
#include <tencentcloud/dts/v20211206/model/Options.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * ConfigureSyncJob request structure.
                */
                class ConfigureSyncJobRequest : public AbstractModel
                {
                public:
                    ConfigureSyncJobRequest();
                    ~ConfigureSyncJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Sync task instance ID in the format of `sync-werwfs23`, which is used to identify a sync task.
                     * @return JobId Sync task instance ID in the format of `sync-werwfs23`, which is used to identify a sync task.
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置Sync task instance ID in the format of `sync-werwfs23`, which is used to identify a sync task.
                     * @param JobId Sync task instance ID in the format of `sync-werwfs23`, which is used to identify a sync task.
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取Source database access type. Valid values: `cdb` (database); `cvm` (self-build on CVM); `vpc` (VPC); `extranet` (public network); `vpncloud` (VPN access); `dcg` (Direct Connect); `ccn` (CCN); `intranet` (intranet). Note that the valid values are subject to the current link.
                     * @return SrcAccessType Source database access type. Valid values: `cdb` (database); `cvm` (self-build on CVM); `vpc` (VPC); `extranet` (public network); `vpncloud` (VPN access); `dcg` (Direct Connect); `ccn` (CCN); `intranet` (intranet). Note that the valid values are subject to the current link.
                     */
                    std::string GetSrcAccessType() const;

                    /**
                     * 设置Source database access type. Valid values: `cdb` (database); `cvm` (self-build on CVM); `vpc` (VPC); `extranet` (public network); `vpncloud` (VPN access); `dcg` (Direct Connect); `ccn` (CCN); `intranet` (intranet). Note that the valid values are subject to the current link.
                     * @param SrcAccessType Source database access type. Valid values: `cdb` (database); `cvm` (self-build on CVM); `vpc` (VPC); `extranet` (public network); `vpncloud` (VPN access); `dcg` (Direct Connect); `ccn` (CCN); `intranet` (intranet). Note that the valid values are subject to the current link.
                     */
                    void SetSrcAccessType(const std::string& _srcAccessType);

                    /**
                     * 判断参数 SrcAccessType 是否已赋值
                     * @return SrcAccessType 是否已赋值
                     */
                    bool SrcAccessTypeHasBeenSet() const;

                    /**
                     * 获取Target database access type. Valid values: `cdb` (database); `cvm` (self-build on CVM); `vpc` (VPC); `extranet` (public network); `vpncloud` (VPN access); `dcg` (Direct Connect); `ccn` (CCN); `intranet` (intranet); `ckafka` (CKafka instance). Note that the valid values are subject to the current link.
                     * @return DstAccessType Target database access type. Valid values: `cdb` (database); `cvm` (self-build on CVM); `vpc` (VPC); `extranet` (public network); `vpncloud` (VPN access); `dcg` (Direct Connect); `ccn` (CCN); `intranet` (intranet); `ckafka` (CKafka instance). Note that the valid values are subject to the current link.
                     */
                    std::string GetDstAccessType() const;

                    /**
                     * 设置Target database access type. Valid values: `cdb` (database); `cvm` (self-build on CVM); `vpc` (VPC); `extranet` (public network); `vpncloud` (VPN access); `dcg` (Direct Connect); `ccn` (CCN); `intranet` (intranet); `ckafka` (CKafka instance). Note that the valid values are subject to the current link.
                     * @param DstAccessType Target database access type. Valid values: `cdb` (database); `cvm` (self-build on CVM); `vpc` (VPC); `extranet` (public network); `vpncloud` (VPN access); `dcg` (Direct Connect); `ccn` (CCN); `intranet` (intranet); `ckafka` (CKafka instance). Note that the valid values are subject to the current link.
                     */
                    void SetDstAccessType(const std::string& _dstAccessType);

                    /**
                     * 判断参数 DstAccessType 是否已赋值
                     * @return DstAccessType 是否已赋值
                     */
                    bool DstAccessTypeHasBeenSet() const;

                    /**
                     * 获取Information of synced database/table objects
                     * @return Objects Information of synced database/table objects
                     */
                    Objects GetObjects() const;

                    /**
                     * 设置Information of synced database/table objects
                     * @param Objects Information of synced database/table objects
                     */
                    void SetObjects(const Objects& _objects);

                    /**
                     * 判断参数 Objects 是否已赋值
                     * @return Objects 是否已赋值
                     */
                    bool ObjectsHasBeenSet() const;

                    /**
                     * 获取Sync task name
                     * @return JobName Sync task name
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置Sync task name
                     * @param JobName Sync task name
                     */
                    void SetJobName(const std::string& _jobName);

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     */
                    bool JobNameHasBeenSet() const;

                    /**
                     * 获取Enumerated values: `liteMode`: Lite mode; `fullMode`: Standard mode
                     * @return JobMode Enumerated values: `liteMode`: Lite mode; `fullMode`: Standard mode
                     */
                    std::string GetJobMode() const;

                    /**
                     * 设置Enumerated values: `liteMode`: Lite mode; `fullMode`: Standard mode
                     * @param JobMode Enumerated values: `liteMode`: Lite mode; `fullMode`: Standard mode
                     */
                    void SetJobMode(const std::string& _jobMode);

                    /**
                     * 判断参数 JobMode 是否已赋值
                     * @return JobMode 是否已赋值
                     */
                    bool JobModeHasBeenSet() const;

                    /**
                     * 获取Running mode. Valid values: `Immediate`, `Timed`. Default value: `Immediate`.
                     * @return RunMode Running mode. Valid values: `Immediate`, `Timed`. Default value: `Immediate`.
                     */
                    std::string GetRunMode() const;

                    /**
                     * 设置Running mode. Valid values: `Immediate`, `Timed`. Default value: `Immediate`.
                     * @param RunMode Running mode. Valid values: `Immediate`, `Timed`. Default value: `Immediate`.
                     */
                    void SetRunMode(const std::string& _runMode);

                    /**
                     * 判断参数 RunMode 是否已赋值
                     * @return RunMode 是否已赋值
                     */
                    bool RunModeHasBeenSet() const;

                    /**
                     * 获取Expected start time in the format of "2006-01-02 15:04:05", which is required if `RunMode` is `Timed`.
                     * @return ExpectRunTime Expected start time in the format of "2006-01-02 15:04:05", which is required if `RunMode` is `Timed`.
                     */
                    std::string GetExpectRunTime() const;

                    /**
                     * 设置Expected start time in the format of "2006-01-02 15:04:05", which is required if `RunMode` is `Timed`.
                     * @param ExpectRunTime Expected start time in the format of "2006-01-02 15:04:05", which is required if `RunMode` is `Timed`.
                     */
                    void SetExpectRunTime(const std::string& _expectRunTime);

                    /**
                     * 判断参数 ExpectRunTime 是否已赋值
                     * @return ExpectRunTime 是否已赋值
                     */
                    bool ExpectRunTimeHasBeenSet() const;

                    /**
                     * 获取Source database information. This parameter only applies to single-node databases, and `SrcNodeType` must be `single`.
                     * @return SrcInfo Source database information. This parameter only applies to single-node databases, and `SrcNodeType` must be `single`.
                     */
                    Endpoint GetSrcInfo() const;

                    /**
                     * 设置Source database information. This parameter only applies to single-node databases, and `SrcNodeType` must be `single`.
                     * @param SrcInfo Source database information. This parameter only applies to single-node databases, and `SrcNodeType` must be `single`.
                     */
                    void SetSrcInfo(const Endpoint& _srcInfo);

                    /**
                     * 判断参数 SrcInfo 是否已赋值
                     * @return SrcInfo 是否已赋值
                     */
                    bool SrcInfoHasBeenSet() const;

                    /**
                     * 获取Source database information. This parameter is valid for multi-node databases, and the value of `SrcNodeType` must be `cluster`.
                     * @return SrcInfos Source database information. This parameter is valid for multi-node databases, and the value of `SrcNodeType` must be `cluster`.
                     */
                    SyncDBEndpointInfos GetSrcInfos() const;

                    /**
                     * 设置Source database information. This parameter is valid for multi-node databases, and the value of `SrcNodeType` must be `cluster`.
                     * @param SrcInfos Source database information. This parameter is valid for multi-node databases, and the value of `SrcNodeType` must be `cluster`.
                     */
                    void SetSrcInfos(const SyncDBEndpointInfos& _srcInfos);

                    /**
                     * 判断参数 SrcInfos 是否已赋值
                     * @return SrcInfos 是否已赋值
                     */
                    bool SrcInfosHasBeenSet() const;

                    /**
                     * 获取Enumerated values: `single` (for single-node source database), `cluster` (for multi-node source database).
                     * @return SrcNodeType Enumerated values: `single` (for single-node source database), `cluster` (for multi-node source database).
                     */
                    std::string GetSrcNodeType() const;

                    /**
                     * 设置Enumerated values: `single` (for single-node source database), `cluster` (for multi-node source database).
                     * @param SrcNodeType Enumerated values: `single` (for single-node source database), `cluster` (for multi-node source database).
                     */
                    void SetSrcNodeType(const std::string& _srcNodeType);

                    /**
                     * 判断参数 SrcNodeType 是否已赋值
                     * @return SrcNodeType 是否已赋值
                     */
                    bool SrcNodeTypeHasBeenSet() const;

                    /**
                     * 获取Target database information. This parameter is used by single-node databases.
                     * @return DstInfo Target database information. This parameter is used by single-node databases.
                     */
                    Endpoint GetDstInfo() const;

                    /**
                     * 设置Target database information. This parameter is used by single-node databases.
                     * @param DstInfo Target database information. This parameter is used by single-node databases.
                     */
                    void SetDstInfo(const Endpoint& _dstInfo);

                    /**
                     * 判断参数 DstInfo 是否已赋值
                     * @return DstInfo 是否已赋值
                     */
                    bool DstInfoHasBeenSet() const;

                    /**
                     * 获取Target database information. This parameter is valid for multi-node databases, and the value of `DstNodeType` must be `cluster`.
                     * @return DstInfos Target database information. This parameter is valid for multi-node databases, and the value of `DstNodeType` must be `cluster`.
                     */
                    SyncDBEndpointInfos GetDstInfos() const;

                    /**
                     * 设置Target database information. This parameter is valid for multi-node databases, and the value of `DstNodeType` must be `cluster`.
                     * @param DstInfos Target database information. This parameter is valid for multi-node databases, and the value of `DstNodeType` must be `cluster`.
                     */
                    void SetDstInfos(const SyncDBEndpointInfos& _dstInfos);

                    /**
                     * 判断参数 DstInfos 是否已赋值
                     * @return DstInfos 是否已赋值
                     */
                    bool DstInfosHasBeenSet() const;

                    /**
                     * 获取Enumerated values: `single` (for single-node target database), `cluster` (for multi-node target database).
                     * @return DstNodeType Enumerated values: `single` (for single-node target database), `cluster` (for multi-node target database).
                     */
                    std::string GetDstNodeType() const;

                    /**
                     * 设置Enumerated values: `single` (for single-node target database), `cluster` (for multi-node target database).
                     * @param DstNodeType Enumerated values: `single` (for single-node target database), `cluster` (for multi-node target database).
                     */
                    void SetDstNodeType(const std::string& _dstNodeType);

                    /**
                     * 判断参数 DstNodeType 是否已赋值
                     * @return DstNodeType 是否已赋值
                     */
                    bool DstNodeTypeHasBeenSet() const;

                    /**
                     * 获取Sync task options
                     * @return Options Sync task options
                     */
                    Options GetOptions() const;

                    /**
                     * 设置Sync task options
                     * @param Options Sync task options
                     */
                    void SetOptions(const Options& _options);

                    /**
                     * 判断参数 Options 是否已赋值
                     * @return Options 是否已赋值
                     */
                    bool OptionsHasBeenSet() const;

                    /**
                     * 获取Automatic retry time, which can be set to 5-720 minutes. 0 indicates that retry is disabled.
                     * @return AutoRetryTimeRangeMinutes Automatic retry time, which can be set to 5-720 minutes. 0 indicates that retry is disabled.
                     */
                    int64_t GetAutoRetryTimeRangeMinutes() const;

                    /**
                     * 设置Automatic retry time, which can be set to 5-720 minutes. 0 indicates that retry is disabled.
                     * @param AutoRetryTimeRangeMinutes Automatic retry time, which can be set to 5-720 minutes. 0 indicates that retry is disabled.
                     */
                    void SetAutoRetryTimeRangeMinutes(const int64_t& _autoRetryTimeRangeMinutes);

                    /**
                     * 判断参数 AutoRetryTimeRangeMinutes 是否已赋值
                     * @return AutoRetryTimeRangeMinutes 是否已赋值
                     */
                    bool AutoRetryTimeRangeMinutesHasBeenSet() const;

                private:

                    /**
                     * Sync task instance ID in the format of `sync-werwfs23`, which is used to identify a sync task.
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * Source database access type. Valid values: `cdb` (database); `cvm` (self-build on CVM); `vpc` (VPC); `extranet` (public network); `vpncloud` (VPN access); `dcg` (Direct Connect); `ccn` (CCN); `intranet` (intranet). Note that the valid values are subject to the current link.
                     */
                    std::string m_srcAccessType;
                    bool m_srcAccessTypeHasBeenSet;

                    /**
                     * Target database access type. Valid values: `cdb` (database); `cvm` (self-build on CVM); `vpc` (VPC); `extranet` (public network); `vpncloud` (VPN access); `dcg` (Direct Connect); `ccn` (CCN); `intranet` (intranet); `ckafka` (CKafka instance). Note that the valid values are subject to the current link.
                     */
                    std::string m_dstAccessType;
                    bool m_dstAccessTypeHasBeenSet;

                    /**
                     * Information of synced database/table objects
                     */
                    Objects m_objects;
                    bool m_objectsHasBeenSet;

                    /**
                     * Sync task name
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * Enumerated values: `liteMode`: Lite mode; `fullMode`: Standard mode
                     */
                    std::string m_jobMode;
                    bool m_jobModeHasBeenSet;

                    /**
                     * Running mode. Valid values: `Immediate`, `Timed`. Default value: `Immediate`.
                     */
                    std::string m_runMode;
                    bool m_runModeHasBeenSet;

                    /**
                     * Expected start time in the format of "2006-01-02 15:04:05", which is required if `RunMode` is `Timed`.
                     */
                    std::string m_expectRunTime;
                    bool m_expectRunTimeHasBeenSet;

                    /**
                     * Source database information. This parameter only applies to single-node databases, and `SrcNodeType` must be `single`.
                     */
                    Endpoint m_srcInfo;
                    bool m_srcInfoHasBeenSet;

                    /**
                     * Source database information. This parameter is valid for multi-node databases, and the value of `SrcNodeType` must be `cluster`.
                     */
                    SyncDBEndpointInfos m_srcInfos;
                    bool m_srcInfosHasBeenSet;

                    /**
                     * Enumerated values: `single` (for single-node source database), `cluster` (for multi-node source database).
                     */
                    std::string m_srcNodeType;
                    bool m_srcNodeTypeHasBeenSet;

                    /**
                     * Target database information. This parameter is used by single-node databases.
                     */
                    Endpoint m_dstInfo;
                    bool m_dstInfoHasBeenSet;

                    /**
                     * Target database information. This parameter is valid for multi-node databases, and the value of `DstNodeType` must be `cluster`.
                     */
                    SyncDBEndpointInfos m_dstInfos;
                    bool m_dstInfosHasBeenSet;

                    /**
                     * Enumerated values: `single` (for single-node target database), `cluster` (for multi-node target database).
                     */
                    std::string m_dstNodeType;
                    bool m_dstNodeTypeHasBeenSet;

                    /**
                     * Sync task options
                     */
                    Options m_options;
                    bool m_optionsHasBeenSet;

                    /**
                     * Automatic retry time, which can be set to 5-720 minutes. 0 indicates that retry is disabled.
                     */
                    int64_t m_autoRetryTimeRangeMinutes;
                    bool m_autoRetryTimeRangeMinutesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_CONFIGURESYNCJOBREQUEST_H_
