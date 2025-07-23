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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_REPLAYINSTANCEAUDITLOGREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_REPLAYINSTANCEAUDITLOGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * ReplayInstanceAuditLog request structure.
                */
                class ReplayInstanceAuditLogRequest : public AbstractModel
                {
                public:
                    ReplayInstanceAuditLogRequest();
                    ~ReplayInstanceAuditLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Source cluster id.
                     * @return SourceClusterId Source cluster id.
                     * 
                     */
                    std::string GetSourceClusterId() const;

                    /**
                     * 设置Source cluster id.
                     * @param _sourceClusterId Source cluster id.
                     * 
                     */
                    void SetSourceClusterId(const std::string& _sourceClusterId);

                    /**
                     * 判断参数 SourceClusterId 是否已赋值
                     * @return SourceClusterId 是否已赋值
                     * 
                     */
                    bool SourceClusterIdHasBeenSet() const;

                    /**
                     * 获取Source instance id.
                     * @return SourceInstanceId Source instance id.
                     * 
                     */
                    std::string GetSourceInstanceId() const;

                    /**
                     * 设置Source instance id.
                     * @param _sourceInstanceId Source instance id.
                     * 
                     */
                    void SetSourceInstanceId(const std::string& _sourceInstanceId);

                    /**
                     * 判断参数 SourceInstanceId 是否已赋值
                     * @return SourceInstanceId 是否已赋值
                     * 
                     */
                    bool SourceInstanceIdHasBeenSet() const;

                    /**
                     * 获取Target cluster id.
Specifies the target cluster must be a cluster cloned from the original cluster within three days.
                     * @return TargetClusterId Target cluster id.
Specifies the target cluster must be a cluster cloned from the original cluster within three days.
                     * 
                     */
                    std::string GetTargetClusterId() const;

                    /**
                     * 设置Target cluster id.
Specifies the target cluster must be a cluster cloned from the original cluster within three days.
                     * @param _targetClusterId Target cluster id.
Specifies the target cluster must be a cluster cloned from the original cluster within three days.
                     * 
                     */
                    void SetTargetClusterId(const std::string& _targetClusterId);

                    /**
                     * 判断参数 TargetClusterId 是否已赋值
                     * @return TargetClusterId 是否已赋值
                     * 
                     */
                    bool TargetClusterIdHasBeenSet() const;

                    /**
                     * 获取Target instance id.
                     * @return TargetInstanceId Target instance id.
                     * 
                     */
                    std::string GetTargetInstanceId() const;

                    /**
                     * 设置Target instance id.
                     * @param _targetInstanceId Target instance id.
                     * 
                     */
                    void SetTargetInstanceId(const std::string& _targetInstanceId);

                    /**
                     * 判断参数 TargetInstanceId 是否已赋值
                     * @return TargetInstanceId 是否已赋值
                     * 
                     */
                    bool TargetInstanceIdHasBeenSet() const;

                    /**
                     * 获取Username. host must be % username.
                     * @return TargetUserName Username. host must be % username.
                     * 
                     */
                    std::string GetTargetUserName() const;

                    /**
                     * 设置Username. host must be % username.
                     * @param _targetUserName Username. host must be % username.
                     * 
                     */
                    void SetTargetUserName(const std::string& _targetUserName);

                    /**
                     * 判断参数 TargetUserName 是否已赋值
                     * @return TargetUserName 是否已赋值
                     * 
                     */
                    bool TargetUserNameHasBeenSet() const;

                    /**
                     * 获取Password.
                     * @return TargetPassword Password.
                     * 
                     */
                    std::string GetTargetPassword() const;

                    /**
                     * 设置Password.
                     * @param _targetPassword Password.
                     * 
                     */
                    void SetTargetPassword(const std::string& _targetPassword);

                    /**
                     * 判断参数 TargetPassword 是否已赋值
                     * @return TargetPassword 是否已赋值
                     * 
                     */
                    bool TargetPasswordHasBeenSet() const;

                    /**
                     * 获取Start time. time format: yyyy-DD-mm hh:mm:ss.
                     * @return StartTime Start time. time format: yyyy-DD-mm hh:mm:ss.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time. time format: yyyy-DD-mm hh:mm:ss.
                     * @param _startTime Start time. time format: yyyy-DD-mm hh:mm:ss.
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
                     * 获取Specifies the end time in the time format yyyy-DD-mm hh:mm:ss.
                     * @return EndTime Specifies the end time in the time format yyyy-DD-mm hh:mm:ss.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Specifies the end time in the time format yyyy-DD-mm hh:mm:ss.
                     * @param _endTime Specifies the end time in the time format yyyy-DD-mm hh:mm:ss.
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * Source cluster id.
                     */
                    std::string m_sourceClusterId;
                    bool m_sourceClusterIdHasBeenSet;

                    /**
                     * Source instance id.
                     */
                    std::string m_sourceInstanceId;
                    bool m_sourceInstanceIdHasBeenSet;

                    /**
                     * Target cluster id.
Specifies the target cluster must be a cluster cloned from the original cluster within three days.
                     */
                    std::string m_targetClusterId;
                    bool m_targetClusterIdHasBeenSet;

                    /**
                     * Target instance id.
                     */
                    std::string m_targetInstanceId;
                    bool m_targetInstanceIdHasBeenSet;

                    /**
                     * Username. host must be % username.
                     */
                    std::string m_targetUserName;
                    bool m_targetUserNameHasBeenSet;

                    /**
                     * Password.
                     */
                    std::string m_targetPassword;
                    bool m_targetPasswordHasBeenSet;

                    /**
                     * Start time. time format: yyyy-DD-mm hh:mm:ss.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Specifies the end time in the time format yyyy-DD-mm hh:mm:ss.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_REPLAYINSTANCEAUDITLOGREQUEST_H_
