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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVIRUSDETAILRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVIRUSDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeVirusDetail response structure.
                */
                class DescribeVirusDetailResponse : public AbstractModel
                {
                public:
                    DescribeVirusDetailResponse();
                    ~DescribeVirusDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Image ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ImageId Image ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetImageId() const;

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取Image name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ImageName Image name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetImageName() const;

                    /**
                     * 判断参数 ImageName 是否已赋值
                     * @return ImageName 是否已赋值
                     */
                    bool ImageNameHasBeenSet() const;

                    /**
                     * 获取Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Trojan file size
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Size Trojan file size
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetSize() const;

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取Trojan file path
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FilePath Trojan file path
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetFilePath() const;

                    /**
                     * 判断参数 FilePath 是否已赋值
                     * @return FilePath 是否已赋值
                     */
                    bool FilePathHasBeenSet() const;

                    /**
                     * 获取Last generation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ModifyTime Last generation time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取Virus name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VirusName Virus name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetVirusName() const;

                    /**
                     * 判断参数 VirusName 是否已赋值
                     * @return VirusName 是否已赋值
                     */
                    bool VirusNameHasBeenSet() const;

                    /**
                     * 获取Risk level. Valid values: `RISK_CRITICAL`, `RISK_HIGH`, `RISK_MEDIUM`, `RISK_LOW`, `RISK_NOTICE`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RiskLevel Risk level. Valid values: `RISK_CRITICAL`, `RISK_HIGH`, `RISK_MEDIUM`, `RISK_LOW`, `RISK_NOTICE`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取Container name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ContainerName Container name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetContainerName() const;

                    /**
                     * 判断参数 ContainerName 是否已赋值
                     * @return ContainerName 是否已赋值
                     */
                    bool ContainerNameHasBeenSet() const;

                    /**
                     * 获取Container ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ContainerId Container ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetContainerId() const;

                    /**
                     * 判断参数 ContainerId 是否已赋值
                     * @return ContainerId 是否已赋值
                     */
                    bool ContainerIdHasBeenSet() const;

                    /**
                     * 获取Server name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HostName Server name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetHostName() const;

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取Server ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HostId Server ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetHostId() const;

                    /**
                     * 判断参数 HostId 是否已赋值
                     * @return HostId 是否已赋值
                     */
                    bool HostIdHasBeenSet() const;

                    /**
                     * 获取Process name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProcessName Process name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetProcessName() const;

                    /**
                     * 判断参数 ProcessName 是否已赋值
                     * @return ProcessName 是否已赋值
                     */
                    bool ProcessNameHasBeenSet() const;

                    /**
                     * 获取Process path
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProcessPath Process path
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetProcessPath() const;

                    /**
                     * 判断参数 ProcessPath 是否已赋值
                     * @return ProcessPath 是否已赋值
                     */
                    bool ProcessPathHasBeenSet() const;

                    /**
                     * 获取Process MD5
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProcessMd5 Process MD5
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetProcessMd5() const;

                    /**
                     * 判断参数 ProcessMd5 是否已赋值
                     * @return ProcessMd5 是否已赋值
                     */
                    bool ProcessMd5HasBeenSet() const;

                    /**
                     * 获取Process ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProcessId Process ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetProcessId() const;

                    /**
                     * 判断参数 ProcessId 是否已赋值
                     * @return ProcessId 是否已赋值
                     */
                    bool ProcessIdHasBeenSet() const;

                    /**
                     * 获取Process parameter
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProcessArgv Process parameter
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetProcessArgv() const;

                    /**
                     * 判断参数 ProcessArgv 是否已赋值
                     * @return ProcessArgv 是否已赋值
                     */
                    bool ProcessArgvHasBeenSet() const;

                    /**
                     * 获取Process chain
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProcessChan Process chain
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetProcessChan() const;

                    /**
                     * 判断参数 ProcessChan 是否已赋值
                     * @return ProcessChan 是否已赋值
                     */
                    bool ProcessChanHasBeenSet() const;

                    /**
                     * 获取Process group
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProcessAccountGroup Process group
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetProcessAccountGroup() const;

                    /**
                     * 判断参数 ProcessAccountGroup 是否已赋值
                     * @return ProcessAccountGroup 是否已赋值
                     */
                    bool ProcessAccountGroupHasBeenSet() const;

                    /**
                     * 获取Process initiator
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProcessStartAccount Process initiator
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetProcessStartAccount() const;

                    /**
                     * 判断参数 ProcessStartAccount 是否已赋值
                     * @return ProcessStartAccount 是否已赋值
                     */
                    bool ProcessStartAccountHasBeenSet() const;

                    /**
                     * 获取Process file permission
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ProcessFileAuthority Process file permission
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetProcessFileAuthority() const;

                    /**
                     * 判断参数 ProcessFileAuthority 是否已赋值
                     * @return ProcessFileAuthority 是否已赋值
                     */
                    bool ProcessFileAuthorityHasBeenSet() const;

                    /**
                     * 获取Source. Valid values: `0` (quick scan); `1` (scheduled scan); `2` (real-time monitoring).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SourceType Source. Valid values: `0` (quick scan); `1` (scheduled scan); `2` (real-time monitoring).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetSourceType() const;

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取Cluster name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PodName Cluster name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetPodName() const;

                    /**
                     * 判断参数 PodName 是否已赋值
                     * @return PodName 是否已赋值
                     */
                    bool PodNameHasBeenSet() const;

                    /**
                     * 获取Tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tags Tag
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Event description
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HarmDescribe Event description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetHarmDescribe() const;

                    /**
                     * 判断参数 HarmDescribe 是否已赋值
                     * @return HarmDescribe 是否已赋值
                     */
                    bool HarmDescribeHasBeenSet() const;

                    /**
                     * 获取Solution
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SuggestScheme Solution
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetSuggestScheme() const;

                    /**
                     * 判断参数 SuggestScheme 是否已赋值
                     * @return SuggestScheme 是否已赋值
                     */
                    bool SuggestSchemeHasBeenSet() const;

                    /**
                     * 获取Remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Mark Remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetMark() const;

                    /**
                     * 判断参数 Mark 是否已赋值
                     * @return Mark 是否已赋值
                     */
                    bool MarkHasBeenSet() const;

                    /**
                     * 获取Suspicious file name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FileName Suspicious file name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetFileName() const;

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取MD5 checksum of the file
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FileMd5 MD5 checksum of the file
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetFileMd5() const;

                    /**
                     * 判断参数 FileMd5 是否已赋值
                     * @return FileMd5 是否已赋值
                     */
                    bool FileMd5HasBeenSet() const;

                    /**
                     * 获取Event type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EventType Event type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetEventType() const;

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取`DEAL_NONE`: Pending.
`DEAL_IGNORE`: Ignored.
`DEAL_ADD_WHITELIST`: Allowed.
`DEAL_DEL`: Deleted.
`DEAL_ISOLATE`: Isolated.
`DEAL_ISOLATING`: Isolating.
`DEAL_ISOLATE_FAILED`: Isolation failed.
`DEAL_RECOVERING`: Recovering.
`DEAL_RECOVER_FAILED`: Recovery failed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status `DEAL_NONE`: Pending.
`DEAL_IGNORE`: Ignored.
`DEAL_ADD_WHITELIST`: Allowed.
`DEAL_DEL`: Deleted.
`DEAL_ISOLATE`: Isolated.
`DEAL_ISOLATING`: Isolating.
`DEAL_ISOLATE_FAILED`: Isolation failed.
`DEAL_RECOVERING`: Recovering.
`DEAL_RECOVER_FAILED`: Recovery failed.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Sub-status of the failure:
`FILE_NOT_FOUND`: The file does not exist.
`FILE_ABNORMAL`: The file is abnormal.
`FILE_ABNORMAL_DEAL_RECOVER`: The file is abnormal when recovered.
`BACKUP_FILE_NOT_FOUND`: The backup file does not exist.
`CONTAINER_NOT_FOUND_DEAL_ISOLATE`: The container does not exist during isolation.
`CONTAINER_NOT_FOUND_DEAL_RECOVER`: The container does not exist during recovery.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubStatus Sub-status of the failure:
`FILE_NOT_FOUND`: The file does not exist.
`FILE_ABNORMAL`: The file is abnormal.
`FILE_ABNORMAL_DEAL_RECOVER`: The file is abnormal when recovered.
`BACKUP_FILE_NOT_FOUND`: The backup file does not exist.
`CONTAINER_NOT_FOUND_DEAL_ISOLATE`: The container does not exist during isolation.
`CONTAINER_NOT_FOUND_DEAL_RECOVER`: The container does not exist during recovery.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetSubStatus() const;

                    /**
                     * 判断参数 SubStatus 是否已赋值
                     * @return SubStatus 是否已赋值
                     */
                    bool SubStatusHasBeenSet() const;

                    /**
                     * 获取Private IP
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HostIP Private IP
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetHostIP() const;

                    /**
                     * 判断参数 HostIP 是否已赋值
                     * @return HostIP 是否已赋值
                     */
                    bool HostIPHasBeenSet() const;

                    /**
                     * 获取Public IP
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ClientIP Public IP
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetClientIP() const;

                    /**
                     * 判断参数 ClientIP 是否已赋值
                     * @return ClientIP 是否已赋值
                     */
                    bool ClientIPHasBeenSet() const;

                    /**
                     * 获取Parent process initiator
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PProcessStartUser Parent process initiator
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetPProcessStartUser() const;

                    /**
                     * 判断参数 PProcessStartUser 是否已赋值
                     * @return PProcessStartUser 是否已赋值
                     */
                    bool PProcessStartUserHasBeenSet() const;

                    /**
                     * 获取User group of the parent process
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PProcessUserGroup User group of the parent process
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetPProcessUserGroup() const;

                    /**
                     * 判断参数 PProcessUserGroup 是否已赋值
                     * @return PProcessUserGroup 是否已赋值
                     */
                    bool PProcessUserGroupHasBeenSet() const;

                    /**
                     * 获取Path of the parent process
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PProcessPath Path of the parent process
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetPProcessPath() const;

                    /**
                     * 判断参数 PProcessPath 是否已赋值
                     * @return PProcessPath 是否已赋值
                     */
                    bool PProcessPathHasBeenSet() const;

                    /**
                     * 获取Command line parameters of the parent process
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PProcessParam Command line parameters of the parent process
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetPProcessParam() const;

                    /**
                     * 判断参数 PProcessParam 是否已赋值
                     * @return PProcessParam 是否已赋值
                     */
                    bool PProcessParamHasBeenSet() const;

                    /**
                     * 获取Ancestor process initiator
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AncestorProcessStartUser Ancestor process initiator
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetAncestorProcessStartUser() const;

                    /**
                     * 判断参数 AncestorProcessStartUser 是否已赋值
                     * @return AncestorProcessStartUser 是否已赋值
                     */
                    bool AncestorProcessStartUserHasBeenSet() const;

                    /**
                     * 获取Ancestor process user group
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AncestorProcessUserGroup Ancestor process user group
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetAncestorProcessUserGroup() const;

                    /**
                     * 判断参数 AncestorProcessUserGroup 是否已赋值
                     * @return AncestorProcessUserGroup 是否已赋值
                     */
                    bool AncestorProcessUserGroupHasBeenSet() const;

                    /**
                     * 获取Ancestor process path
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AncestorProcessPath Ancestor process path
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetAncestorProcessPath() const;

                    /**
                     * 判断参数 AncestorProcessPath 是否已赋值
                     * @return AncestorProcessPath 是否已赋值
                     */
                    bool AncestorProcessPathHasBeenSet() const;

                    /**
                     * 获取Command line parameters of the ancestor process
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AncestorProcessParam Command line parameters of the ancestor process
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetAncestorProcessParam() const;

                    /**
                     * 判断参数 AncestorProcessParam 是否已赋值
                     * @return AncestorProcessParam 是否已赋值
                     */
                    bool AncestorProcessParamHasBeenSet() const;

                    /**
                     * 获取Last processing time of the event
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OperationTime Last processing time of the event
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetOperationTime() const;

                    /**
                     * 判断参数 OperationTime 是否已赋值
                     * @return OperationTime 是否已赋值
                     */
                    bool OperationTimeHasBeenSet() const;

                    /**
                     * 获取Container isolation status
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ContainerNetStatus Container isolation status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetContainerNetStatus() const;

                    /**
                     * 判断参数 ContainerNetStatus 是否已赋值
                     * @return ContainerNetStatus 是否已赋值
                     */
                    bool ContainerNetStatusHasBeenSet() const;

                    /**
                     * 获取Sub-status of container isolation
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ContainerNetSubStatus Sub-status of container isolation
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetContainerNetSubStatus() const;

                    /**
                     * 判断参数 ContainerNetSubStatus 是否已赋值
                     * @return ContainerNetSubStatus 是否已赋值
                     */
                    bool ContainerNetSubStatusHasBeenSet() const;

                    /**
                     * 获取Container isolation operation source
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ContainerIsolateOperationSrc Container isolation operation source
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetContainerIsolateOperationSrc() const;

                    /**
                     * 判断参数 ContainerIsolateOperationSrc 是否已赋值
                     * @return ContainerIsolateOperationSrc 是否已赋值
                     */
                    bool ContainerIsolateOperationSrcHasBeenSet() const;

                    /**
                     * 获取Check platform
`1`: Tencent Cloud Security Engine.
`2`: tav.
`3`: binaryAi.
`4`: Unusual behavior.
`5`: Threat intelligence.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CheckPlatform Check platform
`1`: Tencent Cloud Security Engine.
`2`: tav.
`3`: binaryAi.
`4`: Unusual behavior.
`5`: Threat intelligence.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetCheckPlatform() const;

                    /**
                     * 判断参数 CheckPlatform 是否已赋值
                     * @return CheckPlatform 是否已赋值
                     */
                    bool CheckPlatformHasBeenSet() const;

                private:

                    /**
                     * Image ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * Image name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Trojan file size
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * Trojan file path
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_filePath;
                    bool m_filePathHasBeenSet;

                    /**
                     * Last generation time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Virus name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_virusName;
                    bool m_virusNameHasBeenSet;

                    /**
                     * Risk level. Valid values: `RISK_CRITICAL`, `RISK_HIGH`, `RISK_MEDIUM`, `RISK_LOW`, `RISK_NOTICE`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * Container name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                    /**
                     * Container ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_containerId;
                    bool m_containerIdHasBeenSet;

                    /**
                     * Server name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * Server ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_hostId;
                    bool m_hostIdHasBeenSet;

                    /**
                     * Process name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_processName;
                    bool m_processNameHasBeenSet;

                    /**
                     * Process path
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_processPath;
                    bool m_processPathHasBeenSet;

                    /**
                     * Process MD5
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_processMd5;
                    bool m_processMd5HasBeenSet;

                    /**
                     * Process ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_processId;
                    bool m_processIdHasBeenSet;

                    /**
                     * Process parameter
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_processArgv;
                    bool m_processArgvHasBeenSet;

                    /**
                     * Process chain
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_processChan;
                    bool m_processChanHasBeenSet;

                    /**
                     * Process group
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_processAccountGroup;
                    bool m_processAccountGroupHasBeenSet;

                    /**
                     * Process initiator
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_processStartAccount;
                    bool m_processStartAccountHasBeenSet;

                    /**
                     * Process file permission
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_processFileAuthority;
                    bool m_processFileAuthorityHasBeenSet;

                    /**
                     * Source. Valid values: `0` (quick scan); `1` (scheduled scan); `2` (real-time monitoring).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * Cluster name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                    /**
                     * Tag
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Event description
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_harmDescribe;
                    bool m_harmDescribeHasBeenSet;

                    /**
                     * Solution
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_suggestScheme;
                    bool m_suggestSchemeHasBeenSet;

                    /**
                     * Remarks
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_mark;
                    bool m_markHasBeenSet;

                    /**
                     * Suspicious file name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * MD5 checksum of the file
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_fileMd5;
                    bool m_fileMd5HasBeenSet;

                    /**
                     * Event type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * `DEAL_NONE`: Pending.
`DEAL_IGNORE`: Ignored.
`DEAL_ADD_WHITELIST`: Allowed.
`DEAL_DEL`: Deleted.
`DEAL_ISOLATE`: Isolated.
`DEAL_ISOLATING`: Isolating.
`DEAL_ISOLATE_FAILED`: Isolation failed.
`DEAL_RECOVERING`: Recovering.
`DEAL_RECOVER_FAILED`: Recovery failed.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Sub-status of the failure:
`FILE_NOT_FOUND`: The file does not exist.
`FILE_ABNORMAL`: The file is abnormal.
`FILE_ABNORMAL_DEAL_RECOVER`: The file is abnormal when recovered.
`BACKUP_FILE_NOT_FOUND`: The backup file does not exist.
`CONTAINER_NOT_FOUND_DEAL_ISOLATE`: The container does not exist during isolation.
`CONTAINER_NOT_FOUND_DEAL_RECOVER`: The container does not exist during recovery.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subStatus;
                    bool m_subStatusHasBeenSet;

                    /**
                     * Private IP
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_hostIP;
                    bool m_hostIPHasBeenSet;

                    /**
                     * Public IP
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_clientIP;
                    bool m_clientIPHasBeenSet;

                    /**
                     * Parent process initiator
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_pProcessStartUser;
                    bool m_pProcessStartUserHasBeenSet;

                    /**
                     * User group of the parent process
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_pProcessUserGroup;
                    bool m_pProcessUserGroupHasBeenSet;

                    /**
                     * Path of the parent process
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_pProcessPath;
                    bool m_pProcessPathHasBeenSet;

                    /**
                     * Command line parameters of the parent process
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_pProcessParam;
                    bool m_pProcessParamHasBeenSet;

                    /**
                     * Ancestor process initiator
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ancestorProcessStartUser;
                    bool m_ancestorProcessStartUserHasBeenSet;

                    /**
                     * Ancestor process user group
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ancestorProcessUserGroup;
                    bool m_ancestorProcessUserGroupHasBeenSet;

                    /**
                     * Ancestor process path
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ancestorProcessPath;
                    bool m_ancestorProcessPathHasBeenSet;

                    /**
                     * Command line parameters of the ancestor process
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_ancestorProcessParam;
                    bool m_ancestorProcessParamHasBeenSet;

                    /**
                     * Last processing time of the event
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_operationTime;
                    bool m_operationTimeHasBeenSet;

                    /**
                     * Container isolation status
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_containerNetStatus;
                    bool m_containerNetStatusHasBeenSet;

                    /**
                     * Sub-status of container isolation
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_containerNetSubStatus;
                    bool m_containerNetSubStatusHasBeenSet;

                    /**
                     * Container isolation operation source
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_containerIsolateOperationSrc;
                    bool m_containerIsolateOperationSrcHasBeenSet;

                    /**
                     * Check platform
`1`: Tencent Cloud Security Engine.
`2`: tav.
`3`: binaryAi.
`4`: Unusual behavior.
`5`: Threat intelligence.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_checkPlatform;
                    bool m_checkPlatformHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVIRUSDETAILRESPONSE_H_