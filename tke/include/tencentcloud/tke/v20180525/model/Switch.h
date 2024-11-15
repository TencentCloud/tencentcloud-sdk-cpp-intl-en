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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_SWITCH_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_SWITCH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/SwitchInfo.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * Cluster log switch collection
                */
                class Switch : public AbstractModel
                {
                public:
                    Switch();
                    ~Switch() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param _clusterId Cluster ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Details of the audit switch
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return Audit Details of the audit switch
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    SwitchInfo GetAudit() const;

                    /**
                     * 设置Details of the audit switch
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _audit Details of the audit switch
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAudit(const SwitchInfo& _audit);

                    /**
                     * 判断参数 Audit 是否已赋值
                     * @return Audit 是否已赋值
                     * 
                     */
                    bool AuditHasBeenSet() const;

                    /**
                     * 获取Details of the event switch
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return Event Details of the event switch
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    SwitchInfo GetEvent() const;

                    /**
                     * 设置Details of the event switch
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _event Details of the event switch
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetEvent(const SwitchInfo& _event);

                    /**
                     * 判断参数 Event 是否已赋值
                     * @return Event 是否已赋值
                     * 
                     */
                    bool EventHasBeenSet() const;

                    /**
                     * 获取Details of common logs
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return Log Details of common logs
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    SwitchInfo GetLog() const;

                    /**
                     * 设置Details of common logs
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _log Details of common logs
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetLog(const SwitchInfo& _log);

                    /**
                     * 判断参数 Log 是否已赋值
                     * @return Log 是否已赋值
                     * 
                     */
                    bool LogHasBeenSet() const;

                    /**
                     * 获取Details of master log
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @return MasterLog Details of master log
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    SwitchInfo GetMasterLog() const;

                    /**
                     * 设置Details of master log
Note: This field may return "null", indicating that no valid value can be obtained.
                     * @param _masterLog Details of master log
Note: This field may return "null", indicating that no valid value can be obtained.
                     * 
                     */
                    void SetMasterLog(const SwitchInfo& _masterLog);

                    /**
                     * 判断参数 MasterLog 是否已赋值
                     * @return MasterLog 是否已赋值
                     * 
                     */
                    bool MasterLogHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Details of the audit switch
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    SwitchInfo m_audit;
                    bool m_auditHasBeenSet;

                    /**
                     * Details of the event switch
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    SwitchInfo m_event;
                    bool m_eventHasBeenSet;

                    /**
                     * Details of common logs
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    SwitchInfo m_log;
                    bool m_logHasBeenSet;

                    /**
                     * Details of master log
Note: This field may return "null", indicating that no valid value can be obtained.
                     */
                    SwitchInfo m_masterLog;
                    bool m_masterLogHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_SWITCH_H_
