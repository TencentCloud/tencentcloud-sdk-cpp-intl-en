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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DYNAMICPODSPEC_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DYNAMICPODSPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * Pod floating specification
                */
                class DynamicPodSpec : public AbstractModel
                {
                public:
                    DynamicPodSpec();
                    ~DynamicPodSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Minimum number of CPUs
                     * @return RequestCpu Minimum number of CPUs
                     * 
                     */
                    double GetRequestCpu() const;

                    /**
                     * 设置Minimum number of CPUs
                     * @param _requestCpu Minimum number of CPUs
                     * 
                     */
                    void SetRequestCpu(const double& _requestCpu);

                    /**
                     * 判断参数 RequestCpu 是否已赋值
                     * @return RequestCpu 是否已赋值
                     * 
                     */
                    bool RequestCpuHasBeenSet() const;

                    /**
                     * 获取Maximum number of CPUs
                     * @return LimitCpu Maximum number of CPUs
                     * 
                     */
                    double GetLimitCpu() const;

                    /**
                     * 设置Maximum number of CPUs
                     * @param _limitCpu Maximum number of CPUs
                     * 
                     */
                    void SetLimitCpu(const double& _limitCpu);

                    /**
                     * 判断参数 LimitCpu 是否已赋值
                     * @return LimitCpu 是否已赋值
                     * 
                     */
                    bool LimitCpuHasBeenSet() const;

                    /**
                     * 获取Minimum memory in MB
                     * @return RequestMemory Minimum memory in MB
                     * 
                     */
                    double GetRequestMemory() const;

                    /**
                     * 设置Minimum memory in MB
                     * @param _requestMemory Minimum memory in MB
                     * 
                     */
                    void SetRequestMemory(const double& _requestMemory);

                    /**
                     * 判断参数 RequestMemory 是否已赋值
                     * @return RequestMemory 是否已赋值
                     * 
                     */
                    bool RequestMemoryHasBeenSet() const;

                    /**
                     * 获取Maximum memory in MB
                     * @return LimitMemory Maximum memory in MB
                     * 
                     */
                    double GetLimitMemory() const;

                    /**
                     * 设置Maximum memory in MB
                     * @param _limitMemory Maximum memory in MB
                     * 
                     */
                    void SetLimitMemory(const double& _limitMemory);

                    /**
                     * 判断参数 LimitMemory 是否已赋值
                     * @return LimitMemory 是否已赋值
                     * 
                     */
                    bool LimitMemoryHasBeenSet() const;

                private:

                    /**
                     * Minimum number of CPUs
                     */
                    double m_requestCpu;
                    bool m_requestCpuHasBeenSet;

                    /**
                     * Maximum number of CPUs
                     */
                    double m_limitCpu;
                    bool m_limitCpuHasBeenSet;

                    /**
                     * Minimum memory in MB
                     */
                    double m_requestMemory;
                    bool m_requestMemoryHasBeenSet;

                    /**
                     * Maximum memory in MB
                     */
                    double m_limitMemory;
                    bool m_limitMemoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DYNAMICPODSPEC_H_
