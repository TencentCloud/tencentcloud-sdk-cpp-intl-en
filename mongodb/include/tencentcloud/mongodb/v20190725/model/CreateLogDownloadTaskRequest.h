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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_CREATELOGDOWNLOADTASKREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_CREATELOGDOWNLOADTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * CreateLogDownloadTask request structure.
                */
                class CreateLogDownloadTaskRequest : public AbstractModel
                {
                public:
                    CreateLogDownloadTaskRequest();
                    ~CreateLogDownloadTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceId Instance ID.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Start time.
                     * @return StartTime Start time.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time.
                     * @param _startTime Start time.
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
                     * 获取End time.
                     * @return EndTime End time.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time.
                     * @param _endTime End time.
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
                     * 获取Node name.
                     * @return NodeNames Node name.
                     * 
                     */
                    std::vector<std::string> GetNodeNames() const;

                    /**
                     * 设置Node name.
                     * @param _nodeNames Node name.
                     * 
                     */
                    void SetNodeNames(const std::vector<std::string>& _nodeNames);

                    /**
                     * 判断参数 NodeNames 是否已赋值
                     * @return NodeNames 是否已赋值
                     * 
                     */
                    bool NodeNamesHasBeenSet() const;

                    /**
                     * 获取Log category.
                     * @return LogComponents Log category.
                     * 
                     */
                    std::vector<std::string> GetLogComponents() const;

                    /**
                     * 设置Log category.
                     * @param _logComponents Log category.
                     * 
                     */
                    void SetLogComponents(const std::vector<std::string>& _logComponents);

                    /**
                     * 判断参数 LogComponents 是否已赋值
                     * @return LogComponents 是否已赋值
                     * 
                     */
                    bool LogComponentsHasBeenSet() const;

                    /**
                     * 获取Log level.
                     * @return LogLevels Log level.
                     * 
                     */
                    std::vector<std::string> GetLogLevels() const;

                    /**
                     * 设置Log level.
                     * @param _logLevels Log level.
                     * 
                     */
                    void SetLogLevels(const std::vector<std::string>& _logLevels);

                    /**
                     * 判断参数 LogLevels 是否已赋值
                     * @return LogLevels 是否已赋值
                     * 
                     */
                    bool LogLevelsHasBeenSet() const;

                    /**
                     * 获取Log ID.
                     * @return LogIds Log ID.
                     * 
                     */
                    std::vector<std::string> GetLogIds() const;

                    /**
                     * 设置Log ID.
                     * @param _logIds Log ID.
                     * 
                     */
                    void SetLogIds(const std::vector<std::string>& _logIds);

                    /**
                     * 判断参数 LogIds 是否已赋值
                     * @return LogIds 是否已赋值
                     * 
                     */
                    bool LogIdsHasBeenSet() const;

                    /**
                     * 获取Log connection information.
                     * @return LogConnections Log connection information.
                     * 
                     */
                    std::vector<std::string> GetLogConnections() const;

                    /**
                     * 设置Log connection information.
                     * @param _logConnections Log connection information.
                     * 
                     */
                    void SetLogConnections(const std::vector<std::string>& _logConnections);

                    /**
                     * 判断参数 LogConnections 是否已赋值
                     * @return LogConnections 是否已赋值
                     * 
                     */
                    bool LogConnectionsHasBeenSet() const;

                    /**
                     * 获取Filtering fields for log details.
                     * @return LogDetailParams Filtering fields for log details.
                     * 
                     */
                    std::vector<std::string> GetLogDetailParams() const;

                    /**
                     * 设置Filtering fields for log details.
                     * @param _logDetailParams Filtering fields for log details.
                     * 
                     */
                    void SetLogDetailParams(const std::vector<std::string>& _logDetailParams);

                    /**
                     * 判断参数 LogDetailParams 是否已赋值
                     * @return LogDetailParams 是否已赋值
                     * 
                     */
                    bool LogDetailParamsHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Start time.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Node name.
                     */
                    std::vector<std::string> m_nodeNames;
                    bool m_nodeNamesHasBeenSet;

                    /**
                     * Log category.
                     */
                    std::vector<std::string> m_logComponents;
                    bool m_logComponentsHasBeenSet;

                    /**
                     * Log level.
                     */
                    std::vector<std::string> m_logLevels;
                    bool m_logLevelsHasBeenSet;

                    /**
                     * Log ID.
                     */
                    std::vector<std::string> m_logIds;
                    bool m_logIdsHasBeenSet;

                    /**
                     * Log connection information.
                     */
                    std::vector<std::string> m_logConnections;
                    bool m_logConnectionsHasBeenSet;

                    /**
                     * Filtering fields for log details.
                     */
                    std::vector<std::string> m_logDetailParams;
                    bool m_logDetailParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_CREATELOGDOWNLOADTASKREQUEST_H_
