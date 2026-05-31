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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_PIPELINEINPUTSETTINGSINFO_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_PIPELINEINPUTSETTINGSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * Pipeline failover information.
                */
                class PipelineInputSettingsInfo : public AbstractModel
                {
                public:
                    PipelineInputSettingsInfo();
                    ~PipelineInputSettingsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Pipeline disaster recovery configuration. Value: PIPELINE_FAILOVER (mutual disaster recovery for channels if unable), PIPELINE_FILLING (channel fill automatically).
Default value: PIPELINE_FAILOVER. If failover between channels fails, auto-execute PIPELINE_FILLING. Specific content is specified by InputLossBehavior.
                     * @return FaultBehavior Pipeline disaster recovery configuration. Value: PIPELINE_FAILOVER (mutual disaster recovery for channels if unable), PIPELINE_FILLING (channel fill automatically).
Default value: PIPELINE_FAILOVER. If failover between channels fails, auto-execute PIPELINE_FILLING. Specific content is specified by InputLossBehavior.
                     * 
                     */
                    std::string GetFaultBehavior() const;

                    /**
                     * 设置Pipeline disaster recovery configuration. Value: PIPELINE_FAILOVER (mutual disaster recovery for channels if unable), PIPELINE_FILLING (channel fill automatically).
Default value: PIPELINE_FAILOVER. If failover between channels fails, auto-execute PIPELINE_FILLING. Specific content is specified by InputLossBehavior.
                     * @param _faultBehavior Pipeline disaster recovery configuration. Value: PIPELINE_FAILOVER (mutual disaster recovery for channels if unable), PIPELINE_FILLING (channel fill automatically).
Default value: PIPELINE_FAILOVER. If failover between channels fails, auto-execute PIPELINE_FILLING. Specific content is specified by InputLossBehavior.
                     * 
                     */
                    void SetFaultBehavior(const std::string& _faultBehavior);

                    /**
                     * 判断参数 FaultBehavior 是否已赋值
                     * @return FaultBehavior 是否已赋值
                     * 
                     */
                    bool FaultBehaviorHasBeenSet() const;

                private:

                    /**
                     * Pipeline disaster recovery configuration. Value: PIPELINE_FAILOVER (mutual disaster recovery for channels if unable), PIPELINE_FILLING (channel fill automatically).
Default value: PIPELINE_FAILOVER. If failover between channels fails, auto-execute PIPELINE_FILLING. Specific content is specified by InputLossBehavior.
                     */
                    std::string m_faultBehavior;
                    bool m_faultBehaviorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_PIPELINEINPUTSETTINGSINFO_H_
