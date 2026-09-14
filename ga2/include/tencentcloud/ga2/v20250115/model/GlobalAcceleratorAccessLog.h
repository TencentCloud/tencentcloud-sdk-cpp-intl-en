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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_GLOBALACCELERATORACCESSLOG_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_GLOBALACCELERATORACCESSLOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ga2
    {
        namespace V20250115
        {
            namespace Model
            {
                /**
                * GA access log
                */
                class GlobalAcceleratorAccessLog : public AbstractModel
                {
                public:
                    GlobalAcceleratorAccessLog();
                    ~GlobalAcceleratorAccessLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Log Unique Id</p>
                     * @return LogPushTaskId <p>Log Unique Id</p>
                     * 
                     */
                    std::string GetLogPushTaskId() const;

                    /**
                     * 设置<p>Log Unique Id</p>
                     * @param _logPushTaskId <p>Log Unique Id</p>
                     * 
                     */
                    void SetLogPushTaskId(const std::string& _logPushTaskId);

                    /**
                     * 判断参数 LogPushTaskId 是否已赋值
                     * @return LogPushTaskId 是否已赋值
                     * 
                     */
                    bool LogPushTaskIdHasBeenSet() const;

                    /**
                     * 获取<p>Unique Id of the GA instance.</p>
                     * @return GlobalAcceleratorId <p>Unique Id of the GA instance.</p>
                     * 
                     */
                    std::string GetGlobalAcceleratorId() const;

                    /**
                     * 设置<p>Unique Id of the GA instance.</p>
                     * @param _globalAcceleratorId <p>Unique Id of the GA instance.</p>
                     * 
                     */
                    void SetGlobalAcceleratorId(const std::string& _globalAcceleratorId);

                    /**
                     * 判断参数 GlobalAcceleratorId 是否已赋值
                     * @return GlobalAcceleratorId 是否已赋值
                     * 
                     */
                    bool GlobalAcceleratorIdHasBeenSet() const;

                    /**
                     * 获取<p>Unique Id of the listener</p>
                     * @return ListenerId <p>Unique Id of the listener</p>
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置<p>Unique Id of the listener</p>
                     * @param _listenerId <p>Unique Id of the listener</p>
                     * 
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     * 
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取<p>Unique Id of the terminal node group</p>
                     * @return EndpointGroupId <p>Unique Id of the terminal node group</p>
                     * 
                     */
                    std::string GetEndpointGroupId() const;

                    /**
                     * 设置<p>Unique Id of the terminal node group</p>
                     * @param _endpointGroupId <p>Unique Id of the terminal node group</p>
                     * 
                     */
                    void SetEndpointGroupId(const std::string& _endpointGroupId);

                    /**
                     * 判断参数 EndpointGroupId 是否已赋值
                     * @return EndpointGroupId 是否已赋值
                     * 
                     */
                    bool EndpointGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>Log task description</p>
                     * @return FlowLogDescription <p>Log task description</p>
                     * 
                     */
                    std::string GetFlowLogDescription() const;

                    /**
                     * 设置<p>Log task description</p>
                     * @param _flowLogDescription <p>Log task description</p>
                     * 
                     */
                    void SetFlowLogDescription(const std::string& _flowLogDescription);

                    /**
                     * 判断参数 FlowLogDescription 是否已赋值
                     * @return FlowLogDescription 是否已赋值
                     * 
                     */
                    bool FlowLogDescriptionHasBeenSet() const;

                    /**
                     * 获取<p>Region where the logs are located.</p>
                     * @return CloudRegion <p>Region where the logs are located.</p>
                     * 
                     */
                    std::string GetCloudRegion() const;

                    /**
                     * 设置<p>Region where the logs are located.</p>
                     * @param _cloudRegion <p>Region where the logs are located.</p>
                     * 
                     */
                    void SetCloudRegion(const std::string& _cloudRegion);

                    /**
                     * 判断参数 CloudRegion 是否已赋值
                     * @return CloudRegion 是否已赋值
                     * 
                     */
                    bool CloudRegionHasBeenSet() const;

                    /**
                     * 获取<p>Log topic Id</p>
                     * @return CloudLogId <p>Log topic Id</p>
                     * 
                     */
                    std::string GetCloudLogId() const;

                    /**
                     * 设置<p>Log topic Id</p>
                     * @param _cloudLogId <p>Log topic Id</p>
                     * 
                     */
                    void SetCloudLogId(const std::string& _cloudLogId);

                    /**
                     * 判断参数 CloudLogId 是否已赋值
                     * @return CloudLogId 是否已赋值
                     * 
                     */
                    bool CloudLogIdHasBeenSet() const;

                    /**
                     * 获取<p>Log Set Id</p>
                     * @return CloudLogSetId <p>Log Set Id</p>
                     * 
                     */
                    std::string GetCloudLogSetId() const;

                    /**
                     * 设置<p>Log Set Id</p>
                     * @param _cloudLogSetId <p>Log Set Id</p>
                     * 
                     */
                    void SetCloudLogSetId(const std::string& _cloudLogSetId);

                    /**
                     * 判断参数 CloudLogSetId 是否已赋值
                     * @return CloudLogSetId 是否已赋值
                     * 
                     */
                    bool CloudLogSetIdHasBeenSet() const;

                    /**
                     * 获取<p>Select log data collection field</p>
                     * @return FieldKeys <p>Select log data collection field</p>
                     * 
                     */
                    std::vector<std::string> GetFieldKeys() const;

                    /**
                     * 设置<p>Select log data collection field</p>
                     * @param _fieldKeys <p>Select log data collection field</p>
                     * 
                     */
                    void SetFieldKeys(const std::vector<std::string>& _fieldKeys);

                    /**
                     * 判断参数 FieldKeys 是否已赋值
                     * @return FieldKeys 是否已赋值
                     * 
                     */
                    bool FieldKeysHasBeenSet() const;

                    /**
                     * 获取<p>Log task status</p><p>Enumeration values:</p><ul><li>active: Running</li><li>stopped: Suspended</li></ul>
                     * @return Status <p>Log task status</p><p>Enumeration values:</p><ul><li>active: Running</li><li>stopped: Suspended</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>Log task status</p><p>Enumeration values:</p><ul><li>active: Running</li><li>stopped: Suspended</li></ul>
                     * @param _status <p>Log task status</p><p>Enumeration values:</p><ul><li>active: Running</li><li>stopped: Suspended</li></ul>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * <p>Log Unique Id</p>
                     */
                    std::string m_logPushTaskId;
                    bool m_logPushTaskIdHasBeenSet;

                    /**
                     * <p>Unique Id of the GA instance.</p>
                     */
                    std::string m_globalAcceleratorId;
                    bool m_globalAcceleratorIdHasBeenSet;

                    /**
                     * <p>Unique Id of the listener</p>
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * <p>Unique Id of the terminal node group</p>
                     */
                    std::string m_endpointGroupId;
                    bool m_endpointGroupIdHasBeenSet;

                    /**
                     * <p>Log task description</p>
                     */
                    std::string m_flowLogDescription;
                    bool m_flowLogDescriptionHasBeenSet;

                    /**
                     * <p>Region where the logs are located.</p>
                     */
                    std::string m_cloudRegion;
                    bool m_cloudRegionHasBeenSet;

                    /**
                     * <p>Log topic Id</p>
                     */
                    std::string m_cloudLogId;
                    bool m_cloudLogIdHasBeenSet;

                    /**
                     * <p>Log Set Id</p>
                     */
                    std::string m_cloudLogSetId;
                    bool m_cloudLogSetIdHasBeenSet;

                    /**
                     * <p>Select log data collection field</p>
                     */
                    std::vector<std::string> m_fieldKeys;
                    bool m_fieldKeysHasBeenSet;

                    /**
                     * <p>Log task status</p><p>Enumeration values:</p><ul><li>active: Running</li><li>stopped: Suspended</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_GLOBALACCELERATORACCESSLOG_H_
