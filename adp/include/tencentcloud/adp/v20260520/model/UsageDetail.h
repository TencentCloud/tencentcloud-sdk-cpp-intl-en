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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_USAGEDETAIL_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_USAGEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/CallSource.h>
#include <tencentcloud/adp/v20260520/model/ModelUsageDetail.h>
#include <tencentcloud/adp/v20260520/model/PluginUsageDetail.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Resource invocation time series details
                */
                class UsageDetail : public AbstractModel
                {
                public:
                    UsageDetail();
                    ~UsageDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Invocation source</p>
                     * @return CallSource <p>Invocation source</p>
                     * 
                     */
                    CallSource GetCallSource() const;

                    /**
                     * 设置<p>Invocation source</p>
                     * @param _callSource <p>Invocation source</p>
                     * 
                     */
                    void SetCallSource(const CallSource& _callSource);

                    /**
                     * 判断参数 CallSource 是否已赋值
                     * @return CallSource 是否已赋值
                     * 
                     */
                    bool CallSourceHasBeenSet() const;

                    /**
                     * 获取<p>Measurement ID, used for reconciliation/tracing</p>
                     * @return DosageId <p>Measurement ID, used for reconciliation/tracing</p>
                     * 
                     */
                    std::string GetDosageId() const;

                    /**
                     * 设置<p>Measurement ID, used for reconciliation/tracing</p>
                     * @param _dosageId <p>Measurement ID, used for reconciliation/tracing</p>
                     * 
                     */
                    void SetDosageId(const std::string& _dosageId);

                    /**
                     * 判断参数 DosageId 是否已赋值
                     * @return DosageId 是否已赋值
                     * 
                     */
                    bool DosageIdHasBeenSet() const;

                    /**
                     * 获取<p>Call timestamp (Unix seconds).</p>
                     * @return EventTime <p>Call timestamp (Unix seconds).</p>
                     * 
                     */
                    std::string GetEventTime() const;

                    /**
                     * 设置<p>Call timestamp (Unix seconds).</p>
                     * @param _eventTime <p>Call timestamp (Unix seconds).</p>
                     * 
                     */
                    void SetEventTime(const std::string& _eventTime);

                    /**
                     * 判断参数 EventTime 是否已赋值
                     * @return EventTime 是否已赋值
                     * 
                     */
                    bool EventTimeHasBeenSet() const;

                    /**
                     * 获取<p>Exclusive to MODEL domain</p>
                     * @return Model <p>Exclusive to MODEL domain</p>
                     * 
                     */
                    ModelUsageDetail GetModel() const;

                    /**
                     * 设置<p>Exclusive to MODEL domain</p>
                     * @param _model <p>Exclusive to MODEL domain</p>
                     * 
                     */
                    void SetModel(const ModelUsageDetail& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取<p>Exclusive to the PLUGIN domain</p>
                     * @return Plugin <p>Exclusive to the PLUGIN domain</p>
                     * 
                     */
                    PluginUsageDetail GetPlugin() const;

                    /**
                     * 设置<p>Exclusive to the PLUGIN domain</p>
                     * @param _plugin <p>Exclusive to the PLUGIN domain</p>
                     * 
                     */
                    void SetPlugin(const PluginUsageDetail& _plugin);

                    /**
                     * 判断参数 Plugin 是否已赋值
                     * @return Plugin 是否已赋值
                     * 
                     */
                    bool PluginHasBeenSet() const;

                    /**
                     * 获取<p>Call chain tracing ID</p>
                     * @return TraceId <p>Call chain tracing ID</p>
                     * 
                     */
                    std::string GetTraceId() const;

                    /**
                     * 设置<p>Call chain tracing ID</p>
                     * @param _traceId <p>Call chain tracing ID</p>
                     * 
                     */
                    void SetTraceId(const std::string& _traceId);

                    /**
                     * 判断参数 TraceId 是否已赋值
                     * @return TraceId 是否已赋值
                     * 
                     */
                    bool TraceIdHasBeenSet() const;

                    /**
                     * 获取<p>User ID</p>
                     * @return UserId <p>User ID</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>User ID</p>
                     * @param _userId <p>User ID</p>
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                private:

                    /**
                     * <p>Invocation source</p>
                     */
                    CallSource m_callSource;
                    bool m_callSourceHasBeenSet;

                    /**
                     * <p>Measurement ID, used for reconciliation/tracing</p>
                     */
                    std::string m_dosageId;
                    bool m_dosageIdHasBeenSet;

                    /**
                     * <p>Call timestamp (Unix seconds).</p>
                     */
                    std::string m_eventTime;
                    bool m_eventTimeHasBeenSet;

                    /**
                     * <p>Exclusive to MODEL domain</p>
                     */
                    ModelUsageDetail m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * <p>Exclusive to the PLUGIN domain</p>
                     */
                    PluginUsageDetail m_plugin;
                    bool m_pluginHasBeenSet;

                    /**
                     * <p>Call chain tracing ID</p>
                     */
                    std::string m_traceId;
                    bool m_traceIdHasBeenSet;

                    /**
                     * <p>User ID</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_USAGEDETAIL_H_
