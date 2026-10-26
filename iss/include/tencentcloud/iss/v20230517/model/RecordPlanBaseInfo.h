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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_RECORDPLANBASEINFO_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_RECORDPLANBASEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iss/v20230517/model/LifeCycleData.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * Basic information of the real-time cloud migration plan
                */
                class RecordPlanBaseInfo : public AbstractModel
                {
                public:
                    RecordPlanBaseInfo();
                    ~RecordPlanBaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cloud migration plan ID
                     * @return PlanId Cloud migration plan ID
                     * 
                     */
                    std::string GetPlanId() const;

                    /**
                     * 设置Cloud migration plan ID
                     * @param _planId Cloud migration plan ID
                     * 
                     */
                    void SetPlanId(const std::string& _planId);

                    /**
                     * 判断参数 PlanId 是否已赋值
                     * @return PlanId 是否已赋值
                     * 
                     */
                    bool PlanIdHasBeenSet() const;

                    /**
                     * 获取Cloud migration plan name
                     * @return PlanName Cloud migration plan name
                     * 
                     */
                    std::string GetPlanName() const;

                    /**
                     * 设置Cloud migration plan name
                     * @param _planName Cloud migration plan name
                     * 
                     */
                    void SetPlanName(const std::string& _planName);

                    /**
                     * 判断参数 PlanName 是否已赋值
                     * @return PlanName 是否已赋值
                     * 
                     */
                    bool PlanNameHasBeenSet() const;

                    /**
                     * 获取Cloud template ID
                     * @return TemplateId Cloud template ID
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置Cloud template ID
                     * @param _templateId Cloud template ID
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取Cloud migration plan description
                     * @return Describe Cloud migration plan description
                     * 
                     */
                    std::string GetDescribe() const;

                    /**
                     * 设置Cloud migration plan description
                     * @param _describe Cloud migration plan description
                     * 
                     */
                    void SetDescribe(const std::string& _describe);

                    /**
                     * 判断参数 Describe 是否已赋值
                     * @return Describe 是否已赋值
                     * 
                     */
                    bool DescribeHasBeenSet() const;

                    /**
                     * 获取Stream type. default: default stream type of the device. main: main stream. sub: substream. Other stream types can be customized based on the device capacity.
                     * @return StreamType Stream type. default: default stream type of the device. main: main stream. sub: substream. Other stream types can be customized based on the device capacity.
                     * 
                     */
                    std::string GetStreamType() const;

                    /**
                     * 设置Stream type. default: default stream type of the device. main: main stream. sub: substream. Other stream types can be customized based on the device capacity.
                     * @param _streamType Stream type. default: default stream type of the device. main: main stream. sub: substream. Other stream types can be customized based on the device capacity.
                     * 
                     */
                    void SetStreamType(const std::string& _streamType);

                    /**
                     * 判断参数 StreamType 是否已赋值
                     * @return StreamType 是否已赋值
                     * 
                     */
                    bool StreamTypeHasBeenSet() const;

                    /**
                     * 获取Cloud file lifecycle
                     * @return LifeCycle Cloud file lifecycle
                     * 
                     */
                    LifeCycleData GetLifeCycle() const;

                    /**
                     * 设置Cloud file lifecycle
                     * @param _lifeCycle Cloud file lifecycle
                     * 
                     */
                    void SetLifeCycle(const LifeCycleData& _lifeCycle);

                    /**
                     * 判断参数 LifeCycle 是否已赋值
                     * @return LifeCycle 是否已赋值
                     * 
                     */
                    bool LifeCycleHasBeenSet() const;

                    /**
                     * 获取Recording schedule status. 1: In normal use. 0: Deleting, cannot be used.
                     * @return Status Recording schedule status. 1: In normal use. 0: Deleting, cannot be used.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Recording schedule status. 1: In normal use. 0: Deleting, cannot be used.
                     * @param _status Recording schedule status. 1: In normal use. 0: Deleting, cannot be used.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Total number of channels
                     * @return ChannelCount Total number of channels
                     * 
                     */
                    int64_t GetChannelCount() const;

                    /**
                     * 设置Total number of channels
                     * @param _channelCount Total number of channels
                     * 
                     */
                    void SetChannelCount(const int64_t& _channelCount);

                    /**
                     * 判断参数 ChannelCount 是否已赋值
                     * @return ChannelCount 是否已赋值
                     * 
                     */
                    bool ChannelCountHasBeenSet() const;

                    /**
                     * 获取Video recording supplement mode (0: not enabled, 1: enabled)
                     * @return RepairMode Video recording supplement mode (0: not enabled, 1: enabled)
                     * 
                     */
                    int64_t GetRepairMode() const;

                    /**
                     * 设置Video recording supplement mode (0: not enabled, 1: enabled)
                     * @param _repairMode Video recording supplement mode (0: not enabled, 1: enabled)
                     * 
                     */
                    void SetRepairMode(const int64_t& _repairMode);

                    /**
                     * 判断参数 RepairMode 是否已赋值
                     * @return RepairMode 是否已赋值
                     * 
                     */
                    bool RepairModeHasBeenSet() const;

                private:

                    /**
                     * Cloud migration plan ID
                     */
                    std::string m_planId;
                    bool m_planIdHasBeenSet;

                    /**
                     * Cloud migration plan name
                     */
                    std::string m_planName;
                    bool m_planNameHasBeenSet;

                    /**
                     * Cloud template ID
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * Cloud migration plan description
                     */
                    std::string m_describe;
                    bool m_describeHasBeenSet;

                    /**
                     * Stream type. default: default stream type of the device. main: main stream. sub: substream. Other stream types can be customized based on the device capacity.
                     */
                    std::string m_streamType;
                    bool m_streamTypeHasBeenSet;

                    /**
                     * Cloud file lifecycle
                     */
                    LifeCycleData m_lifeCycle;
                    bool m_lifeCycleHasBeenSet;

                    /**
                     * Recording schedule status. 1: In normal use. 0: Deleting, cannot be used.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Total number of channels
                     */
                    int64_t m_channelCount;
                    bool m_channelCountHasBeenSet;

                    /**
                     * Video recording supplement mode (0: not enabled, 1: enabled)
                     */
                    int64_t m_repairMode;
                    bool m_repairModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_RECORDPLANBASEINFO_H_
