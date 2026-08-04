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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCEHARDWARESPECIFICATION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCEHARDWARESPECIFICATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Reasoning hardware specifications.
                */
                class InferenceHardwareSpecification : public AbstractModel
                {
                public:
                    InferenceHardwareSpecification();
                    ~InferenceHardwareSpecification() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specification flag.
                     * @return Spec Specification flag.
                     * 
                     */
                    std::string GetSpec() const;

                    /**
                     * 设置Specification flag.
                     * @param _spec Specification flag.
                     * 
                     */
                    void SetSpec(const std::string& _spec);

                    /**
                     * 判断参数 Spec 是否已赋值
                     * @return Spec 是否已赋值
                     * 
                     */
                    bool SpecHasBeenSet() const;

                    /**
                     * 获取Specification name.
                     * @return Name Specification name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Specification name.
                     * @param _name Specification name.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Number of CPU cores.
                     * @return CPUNum Number of CPU cores.
                     * 
                     */
                    double GetCPUNum() const;

                    /**
                     * 设置Number of CPU cores.
                     * @param _cPUNum Number of CPU cores.
                     * 
                     */
                    void SetCPUNum(const double& _cPUNum);

                    /**
                     * 判断参数 CPUNum 是否已赋值
                     * @return CPUNum 是否已赋值
                     * 
                     */
                    bool CPUNumHasBeenSet() const;

                    /**
                     * 获取Memory size. Unit: MB.
                     * @return MemSize Memory size. Unit: MB.
                     * 
                     */
                    int64_t GetMemSize() const;

                    /**
                     * 设置Memory size. Unit: MB.
                     * @param _memSize Memory size. Unit: MB.
                     * 
                     */
                    void SetMemSize(const int64_t& _memSize);

                    /**
                     * 判断参数 MemSize 是否已赋值
                     * @return MemSize 是否已赋值
                     * 
                     */
                    bool MemSizeHasBeenSet() const;

                    /**
                     * 获取Number of GPU cards.
                     * @return GPUNum Number of GPU cards.
                     * 
                     */
                    double GetGPUNum() const;

                    /**
                     * 设置Number of GPU cards.
                     * @param _gPUNum Number of GPU cards.
                     * 
                     */
                    void SetGPUNum(const double& _gPUNum);

                    /**
                     * 判断参数 GPUNum 是否已赋值
                     * @return GPUNum 是否已赋值
                     * 
                     */
                    bool GPUNumHasBeenSet() const;

                    /**
                     * 获取GPU VRAM size. Unit: MB.
                     * @return GPUMemSize GPU VRAM size. Unit: MB.
                     * 
                     */
                    int64_t GetGPUMemSize() const;

                    /**
                     * 设置GPU VRAM size. Unit: MB.
                     * @param _gPUMemSize GPU VRAM size. Unit: MB.
                     * 
                     */
                    void SetGPUMemSize(const int64_t& _gPUMemSize);

                    /**
                     * 判断参数 GPUMemSize 是否已赋值
                     * @return GPUMemSize 是否已赋值
                     * 
                     */
                    bool GPUMemSizeHasBeenSet() const;

                private:

                    /**
                     * Specification flag.
                     */
                    std::string m_spec;
                    bool m_specHasBeenSet;

                    /**
                     * Specification name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Number of CPU cores.
                     */
                    double m_cPUNum;
                    bool m_cPUNumHasBeenSet;

                    /**
                     * Memory size. Unit: MB.
                     */
                    int64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * Number of GPU cards.
                     */
                    double m_gPUNum;
                    bool m_gPUNumHasBeenSet;

                    /**
                     * GPU VRAM size. Unit: MB.
                     */
                    int64_t m_gPUMemSize;
                    bool m_gPUMemSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCEHARDWARESPECIFICATION_H_
