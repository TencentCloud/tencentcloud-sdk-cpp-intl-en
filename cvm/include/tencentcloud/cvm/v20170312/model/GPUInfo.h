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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_GPUINFO_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_GPUINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * GPU information of the instance
                */
                class GPUInfo : public AbstractModel
                {
                public:
                    GPUInfo();
                    ~GPUInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of GPUs. 
Note: this field may return `null`, indicating that no valid value can be found.
                     * @return GPUCount Number of GPUs. 
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    double GetGPUCount() const;

                    /**
                     * 设置Number of GPUs. 
Note: this field may return `null`, indicating that no valid value can be found.
                     * @param GPUCount Number of GPUs. 
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    void SetGPUCount(const double& _gPUCount);

                    /**
                     * 判断参数 GPUCount 是否已赋值
                     * @return GPUCount 是否已赋值
                     */
                    bool GPUCountHasBeenSet() const;

                    /**
                     * 获取GPU address
Note: this field may return `null`, indicating that no valid value can be found.
                     * @return GPUId GPU address
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    std::vector<std::string> GetGPUId() const;

                    /**
                     * 设置GPU address
Note: this field may return `null`, indicating that no valid value can be found.
                     * @param GPUId GPU address
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    void SetGPUId(const std::vector<std::string>& _gPUId);

                    /**
                     * 判断参数 GPUId 是否已赋值
                     * @return GPUId 是否已赋值
                     */
                    bool GPUIdHasBeenSet() const;

                    /**
                     * 获取GPU type of the instance.
Note: this field may return `null`, indicating that no valid value can be found.
                     * @return GPUType GPU type of the instance.
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    std::string GetGPUType() const;

                    /**
                     * 设置GPU type of the instance.
Note: this field may return `null`, indicating that no valid value can be found.
                     * @param GPUType GPU type of the instance.
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    void SetGPUType(const std::string& _gPUType);

                    /**
                     * 判断参数 GPUType 是否已赋值
                     * @return GPUType 是否已赋值
                     */
                    bool GPUTypeHasBeenSet() const;

                private:

                    /**
                     * Number of GPUs. 
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    double m_gPUCount;
                    bool m_gPUCountHasBeenSet;

                    /**
                     * GPU address
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    std::vector<std::string> m_gPUId;
                    bool m_gPUIdHasBeenSet;

                    /**
                     * GPU type of the instance.
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    std::string m_gPUType;
                    bool m_gPUTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_GPUINFO_H_
