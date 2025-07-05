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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCELOGLIST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCELOGLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Instance log information
                */
                class InstanceLogList : public AbstractModel
                {
                public:
                    InstanceLogList();
                    ~InstanceLogList() = default;
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
                     * 获取Maximum number of retriesNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Tries Maximum number of retriesNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetTries() const;

                    /**
                     * 设置Maximum number of retriesNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _tries Maximum number of retriesNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Last Updated TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return LastUpdate Last Updated TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetLastUpdate() const;

                    /**
                     * 设置Last Updated TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _lastUpdate Last Updated TimeNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Node IP
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return BrokerIp Node IP
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetBrokerIp() const;

                    /**
                     * 设置Node IP
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _brokerIp Node IP
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
                     * 获取Original File Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return OriginFileName Original File Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetOriginFileName() const;

                    /**
                     * 设置Original File Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _originFileName Original File Name
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
                     * 获取Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return CreateTime Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _createTime Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Instance Log Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return InstanceLogType Instance Log Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetInstanceLogType() const;

                    /**
                     * 设置Instance Log Type
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _instanceLogType Instance Log Type
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
                     * 获取Time Consumed
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CostTime Time Consumed
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCostTime() const;

                    /**
                     * 设置Time Consumed
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _costTime Time Consumed
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
                     * Maximum number of retriesNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_tries;
                    bool m_triesHasBeenSet;

                    /**
                     * Last Updated TimeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_lastUpdate;
                    bool m_lastUpdateHasBeenSet;

                    /**
                     * Node IP
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
                     * Original File Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_originFileName;
                    bool m_originFileNameHasBeenSet;

                    /**
                     * Creation TimeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Instance Log Type
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
                     * Time Consumed
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_costTime;
                    bool m_costTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCELOGLIST_H_
