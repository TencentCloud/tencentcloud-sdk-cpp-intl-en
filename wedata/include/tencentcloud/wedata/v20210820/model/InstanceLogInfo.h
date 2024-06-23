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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCELOGINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCELOGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/AttributeItemDTO.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Instance Log Summary Information
                */
                class InstanceLogInfo : public AbstractModel
                {
                public:
                    InstanceLogInfo();
                    ~InstanceLogInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @return TaskId Task IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task IDNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _taskId Task IDNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Data TimestampNote: This field may return null, indicating that no valid value can be obtained.
                     * @return CurRunDate Data TimestampNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCurRunDate() const;

                    /**
                     * 设置Data TimestampNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _curRunDate Data TimestampNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCurRunDate(const std::string& _curRunDate);

                    /**
                     * 判断参数 CurRunDate 是否已赋值
                     * @return CurRunDate 是否已赋值
                     * 
                     */
                    bool CurRunDateHasBeenSet() const;

                    /**
                     * 获取Number of trial runs
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Tries Number of trial runs
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTries() const;

                    /**
                     * 设置Number of trial runs
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _tries Number of trial runs
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTries(const std::string& _tries);

                    /**
                     * 判断参数 Tries 是否已赋值
                     * @return Tries 是否已赋值
                     * 
                     */
                    bool TriesHasBeenSet() const;

                    /**
                     * 获取Log Update Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return LastUpdate Log Update Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetLastUpdate() const;

                    /**
                     * 设置Log Update Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _lastUpdate Log Update Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetLastUpdate(const std::string& _lastUpdate);

                    /**
                     * 判断参数 LastUpdate 是否已赋值
                     * @return LastUpdate 是否已赋值
                     * 
                     */
                    bool LastUpdateHasBeenSet() const;

                    /**
                     * 获取Log Node
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return BrokerIp Log Node
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetBrokerIp() const;

                    /**
                     * 设置Log Node
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _brokerIp Log Node
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetBrokerIp(const std::string& _brokerIp);

                    /**
                     * 判断参数 BrokerIp 是否已赋值
                     * @return BrokerIp 是否已赋值
                     * 
                     */
                    bool BrokerIpHasBeenSet() const;

                    /**
                     * 获取File sizeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return FileSize File sizeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetFileSize() const;

                    /**
                     * 设置File sizeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _fileSize File sizeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetFileSize(const std::string& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

                    /**
                     * 获取File Name including Full Path
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return OriginFileName File Name including Full Path
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetOriginFileName() const;

                    /**
                     * 设置File Name including Full Path
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _originFileName File Name including Full Path
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetOriginFileName(const std::string& _originFileName);

                    /**
                     * 判断参数 OriginFileName 是否已赋值
                     * @return OriginFileName 是否已赋值
                     * 
                     */
                    bool OriginFileNameHasBeenSet() const;

                    /**
                     * 获取Log Creation Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CreateTime Log Creation Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Log Creation Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _createTime Log Creation Time
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Instance Log Type, run: running; kill: termination
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return InstanceLogType Instance Log Type, run: running; kill: termination
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetInstanceLogType() const;

                    /**
                     * 设置Instance Log Type, run: running; kill: termination
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _instanceLogType Instance Log Type, run: running; kill: termination
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetInstanceLogType(const std::string& _instanceLogType);

                    /**
                     * 判断参数 InstanceLogType 是否已赋值
                     * @return InstanceLogType 是否已赋值
                     * 
                     */
                    bool InstanceLogTypeHasBeenSet() const;

                    /**
                     * 获取Task NameNote: This field may return null, indicating that no valid value can be obtained.
                     * @return TaskName Task NameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置Task NameNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _taskName Task NameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取Runtime Duration
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CostTime Runtime Duration
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCostTime() const;

                    /**
                     * 设置Runtime Duration
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _costTime Runtime Duration
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCostTime(const std::string& _costTime);

                    /**
                     * 判断参数 CostTime 是否已赋值
                     * @return CostTime 是否已赋值
                     * 
                     */
                    bool CostTimeHasBeenSet() const;

                    /**
                     * 获取Instance Status COMPLETED completed FAILED failed retry EXPIRED failed RUNNING running
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return InstanceStatus Instance Status COMPLETED completed FAILED failed retry EXPIRED failed RUNNING running
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 设置Instance Status COMPLETED completed FAILED failed retry EXPIRED failed RUNNING running
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _instanceStatus Instance Status COMPLETED completed FAILED failed retry EXPIRED failed RUNNING running
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetInstanceStatus(const std::string& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     * 
                     */
                    bool InstanceStatusHasBeenSet() const;

                    /**
                     * 获取Instance Code File, absence indicates the corresponding code file does not exist, possibly due to the executor not being upgraded/certain types of tasks having no code.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CodeFileName Instance Code File, absence indicates the corresponding code file does not exist, possibly due to the executor not being upgraded/certain types of tasks having no code.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCodeFileName() const;

                    /**
                     * 设置Instance Code File, absence indicates the corresponding code file does not exist, possibly due to the executor not being upgraded/certain types of tasks having no code.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _codeFileName Instance Code File, absence indicates the corresponding code file does not exist, possibly due to the executor not being upgraded/certain types of tasks having no code.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCodeFileName(const std::string& _codeFileName);

                    /**
                     * 判断参数 CodeFileName 是否已赋值
                     * @return CodeFileName 是否已赋值
                     * 
                     */
                    bool CodeFileNameHasBeenSet() const;

                    /**
                     * 获取Extended Attributes
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ExtensionInfo Extended Attributes
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<AttributeItemDTO> GetExtensionInfo() const;

                    /**
                     * 设置Extended Attributes
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _extensionInfo Extended Attributes
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetExtensionInfo(const std::vector<AttributeItemDTO>& _extensionInfo);

                    /**
                     * 判断参数 ExtensionInfo 是否已赋值
                     * @return ExtensionInfo 是否已赋值
                     * 
                     */
                    bool ExtensionInfoHasBeenSet() const;

                private:

                    /**
                     * Task IDNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Data TimestampNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_curRunDate;
                    bool m_curRunDateHasBeenSet;

                    /**
                     * Number of trial runs
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_tries;
                    bool m_triesHasBeenSet;

                    /**
                     * Log Update Time
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_lastUpdate;
                    bool m_lastUpdateHasBeenSet;

                    /**
                     * Log Node
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_brokerIp;
                    bool m_brokerIpHasBeenSet;

                    /**
                     * File sizeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * File Name including Full Path
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_originFileName;
                    bool m_originFileNameHasBeenSet;

                    /**
                     * Log Creation Time
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Instance Log Type, run: running; kill: termination
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_instanceLogType;
                    bool m_instanceLogTypeHasBeenSet;

                    /**
                     * Task NameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * Runtime Duration
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_costTime;
                    bool m_costTimeHasBeenSet;

                    /**
                     * Instance Status COMPLETED completed FAILED failed retry EXPIRED failed RUNNING running
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * Instance Code File, absence indicates the corresponding code file does not exist, possibly due to the executor not being upgraded/certain types of tasks having no code.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_codeFileName;
                    bool m_codeFileNameHasBeenSet;

                    /**
                     * Extended Attributes
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<AttributeItemDTO> m_extensionInfo;
                    bool m_extensionInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCELOGINFO_H_
