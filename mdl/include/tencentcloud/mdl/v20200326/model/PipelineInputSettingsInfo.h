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
                     * 获取Pipeline failover configuration, the valid value is: 1.PIPELINE_FAILOVER (channels are mutually failover); 2.PIPELINE_FILLING (channels fill in themselves). Default value: PIPELINE_FILLING. The specific content is specified by FaultBehavior.
                     * @return FaultBehavior Pipeline failover configuration, the valid value is: 1.PIPELINE_FAILOVER (channels are mutually failover); 2.PIPELINE_FILLING (channels fill in themselves). Default value: PIPELINE_FILLING. The specific content is specified by FaultBehavior.
                     * 
                     */
                    std::string GetFaultBehavior() const;

                    /**
                     * 设置Pipeline failover configuration, the valid value is: 1.PIPELINE_FAILOVER (channels are mutually failover); 2.PIPELINE_FILLING (channels fill in themselves). Default value: PIPELINE_FILLING. The specific content is specified by FaultBehavior.
                     * @param _faultBehavior Pipeline failover configuration, the valid value is: 1.PIPELINE_FAILOVER (channels are mutually failover); 2.PIPELINE_FILLING (channels fill in themselves). Default value: PIPELINE_FILLING. The specific content is specified by FaultBehavior.
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
                     * Pipeline failover configuration, the valid value is: 1.PIPELINE_FAILOVER (channels are mutually failover); 2.PIPELINE_FILLING (channels fill in themselves). Default value: PIPELINE_FILLING. The specific content is specified by FaultBehavior.
                     */
                    std::string m_faultBehavior;
                    bool m_faultBehaviorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_PIPELINEINPUTSETTINGSINFO_H_
