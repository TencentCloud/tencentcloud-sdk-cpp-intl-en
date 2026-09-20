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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AREACLSTARGETINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AREACLSTARGETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Log push target.
                */
                class AreaCLSTargetInfo : public AbstractModel
                {
                public:
                    AreaCLSTargetInfo();
                    ~AreaCLSTargetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Logset region:
<li>ap-guangzhou: Guangzhou;</li>
<li>ap-beijing: Beijing;</li>
<li>ap-chengdu: Chengdu;</li>
<li>ap-chongqing: Chongqing.</li>
<li>ap-nanjing: Nanjing;</li>
<li>ap-shanghai: Shanghai;</li>
<li>ap-singapore: Singapore.</li>
                     * @return CLSRegion Logset region:
<li>ap-guangzhou: Guangzhou;</li>
<li>ap-beijing: Beijing;</li>
<li>ap-chengdu: Chengdu;</li>
<li>ap-chongqing: Chongqing.</li>
<li>ap-nanjing: Nanjing;</li>
<li>ap-shanghai: Shanghai;</li>
<li>ap-singapore: Singapore.</li>
                     * 
                     */
                    std::string GetCLSRegion() const;

                    /**
                     * 设置Logset region:
<li>ap-guangzhou: Guangzhou;</li>
<li>ap-beijing: Beijing;</li>
<li>ap-chengdu: Chengdu;</li>
<li>ap-chongqing: Chongqing.</li>
<li>ap-nanjing: Nanjing;</li>
<li>ap-shanghai: Shanghai;</li>
<li>ap-singapore: Singapore.</li>
                     * @param _cLSRegion Logset region:
<li>ap-guangzhou: Guangzhou;</li>
<li>ap-beijing: Beijing;</li>
<li>ap-chengdu: Chengdu;</li>
<li>ap-chongqing: Chongqing.</li>
<li>ap-nanjing: Nanjing;</li>
<li>ap-shanghai: Shanghai;</li>
<li>ap-singapore: Singapore.</li>
                     * 
                     */
                    void SetCLSRegion(const std::string& _cLSRegion);

                    /**
                     * 判断参数 CLSRegion 是否已赋值
                     * @return CLSRegion 是否已赋值
                     * 
                     */
                    bool CLSRegionHasBeenSet() const;

                    /**
                     * 获取ID of the destination topic for delivery.
                     * @return TopicId ID of the destination topic for delivery.
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置ID of the destination topic for delivery.
                     * @param _topicId ID of the destination topic for delivery.
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取ID of the target set for submission.
                     * @return LogsetId ID of the target set for submission.
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置ID of the target set for submission.
                     * @param _logsetId ID of the target set for submission.
                     * 
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     * 
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取Log delivery status.
ON: enabled.
OFF: disabled.
                     * @return Switch Log delivery status.
ON: enabled.
OFF: disabled.
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Log delivery status.
ON: enabled.
OFF: disabled.
                     * @param _switch Log delivery status.
ON: enabled.
OFF: disabled.
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                private:

                    /**
                     * Logset region:
<li>ap-guangzhou: Guangzhou;</li>
<li>ap-beijing: Beijing;</li>
<li>ap-chengdu: Chengdu;</li>
<li>ap-chongqing: Chongqing.</li>
<li>ap-nanjing: Nanjing;</li>
<li>ap-shanghai: Shanghai;</li>
<li>ap-singapore: Singapore.</li>
                     */
                    std::string m_cLSRegion;
                    bool m_cLSRegionHasBeenSet;

                    /**
                     * ID of the destination topic for delivery.
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * ID of the target set for submission.
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * Log delivery status.
ON: enabled.
OFF: disabled.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AREACLSTARGETINFO_H_
