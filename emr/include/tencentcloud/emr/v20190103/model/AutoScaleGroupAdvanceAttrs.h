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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_AUTOSCALEGROUPADVANCEATTRS_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_AUTOSCALEGROUPADVANCEATTRS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/ComputeResourceAdvanceParams.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Advanced settings of the auto-scaling group.
                */
                class AutoScaleGroupAdvanceAttrs : public AbstractModel
                {
                public:
                    AutoScaleGroupAdvanceAttrs();
                    ~AutoScaleGroupAdvanceAttrs() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Advanced settings of computing resources.
                     * @return ComputeResourceAdvanceParams Advanced settings of computing resources.
                     * 
                     */
                    ComputeResourceAdvanceParams GetComputeResourceAdvanceParams() const;

                    /**
                     * 设置Advanced settings of computing resources.
                     * @param _computeResourceAdvanceParams Advanced settings of computing resources.
                     * 
                     */
                    void SetComputeResourceAdvanceParams(const ComputeResourceAdvanceParams& _computeResourceAdvanceParams);

                    /**
                     * 判断参数 ComputeResourceAdvanceParams 是否已赋值
                     * @return ComputeResourceAdvanceParams 是否已赋值
                     * 
                     */
                    bool ComputeResourceAdvanceParamsHasBeenSet() const;

                private:

                    /**
                     * Advanced settings of computing resources.
                     */
                    ComputeResourceAdvanceParams m_computeResourceAdvanceParams;
                    bool m_computeResourceAdvanceParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_AUTOSCALEGROUPADVANCEATTRS_H_
