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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCEHARDWARECONFIG_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCEHARDWARECONFIG_H_

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
                * Hardware configuration for the inference service.
                */
                class InferenceHardwareConfig : public AbstractModel
                {
                public:
                    InferenceHardwareConfig();
                    ~InferenceHardwareConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Number of GPU cards assigned to each inference service instance. Currently, supports integers only, and must be an available value in <code>AllowedGPUNums</code> of the specification corresponding to <code>HardwareSpecId</code>.</p><p>If not filled, the default <code>GPUNum</code> value of the selected <code>HardwareSpecId</code> specification is used.</p>
                     * @return GPUNum <p>Number of GPU cards assigned to each inference service instance. Currently, supports integers only, and must be an available value in <code>AllowedGPUNums</code> of the specification corresponding to <code>HardwareSpecId</code>.</p><p>If not filled, the default <code>GPUNum</code> value of the selected <code>HardwareSpecId</code> specification is used.</p>
                     * 
                     */
                    double GetGPUNum() const;

                    /**
                     * 设置<p>Number of GPU cards assigned to each inference service instance. Currently, supports integers only, and must be an available value in <code>AllowedGPUNums</code> of the specification corresponding to <code>HardwareSpecId</code>.</p><p>If not filled, the default <code>GPUNum</code> value of the selected <code>HardwareSpecId</code> specification is used.</p>
                     * @param _gPUNum <p>Number of GPU cards assigned to each inference service instance. Currently, supports integers only, and must be an available value in <code>AllowedGPUNums</code> of the specification corresponding to <code>HardwareSpecId</code>.</p><p>If not filled, the default <code>GPUNum</code> value of the selected <code>HardwareSpecId</code> specification is used.</p>
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
                     * 获取<p>Number of CPU cores allocated to each inference service instance. Currently only supports integer values.</p><p>If left blank, use the default <code>CPUNum</code> value of the selected <code>HardwareSpecId</code> specification.</p>
                     * @return CPUNum <p>Number of CPU cores allocated to each inference service instance. Currently only supports integer values.</p><p>If left blank, use the default <code>CPUNum</code> value of the selected <code>HardwareSpecId</code> specification.</p>
                     * 
                     */
                    double GetCPUNum() const;

                    /**
                     * 设置<p>Number of CPU cores allocated to each inference service instance. Currently only supports integer values.</p><p>If left blank, use the default <code>CPUNum</code> value of the selected <code>HardwareSpecId</code> specification.</p>
                     * @param _cPUNum <p>Number of CPU cores allocated to each inference service instance. Currently only supports integer values.</p><p>If left blank, use the default <code>CPUNum</code> value of the selected <code>HardwareSpecId</code> specification.</p>
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
                     * 获取<p>Memory size allocated to a single instance of the inference service.</p><p>Unit: MB</p><p>If left blank, use the default <code>MemSize</code> value of the selected <code>HardwareSpecId</code>; if filled, it must be a multiple of <code>1024</code>.</p>
                     * @return MemSize <p>Memory size allocated to a single instance of the inference service.</p><p>Unit: MB</p><p>If left blank, use the default <code>MemSize</code> value of the selected <code>HardwareSpecId</code>; if filled, it must be a multiple of <code>1024</code>.</p>
                     * 
                     */
                    int64_t GetMemSize() const;

                    /**
                     * 设置<p>Memory size allocated to a single instance of the inference service.</p><p>Unit: MB</p><p>If left blank, use the default <code>MemSize</code> value of the selected <code>HardwareSpecId</code>; if filled, it must be a multiple of <code>1024</code>.</p>
                     * @param _memSize <p>Memory size allocated to a single instance of the inference service.</p><p>Unit: MB</p><p>If left blank, use the default <code>MemSize</code> value of the selected <code>HardwareSpecId</code>; if filled, it must be a multiple of <code>1024</code>.</p>
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
                     * 获取<p>Temporary disk capacity allocated to a single instance of the inference service.</p><p>Unit: MB</p><p>If not filled, the default <code>DiskSize</code> value of the specification corresponding to the selected <code>HardwareSpecId</code> is used; if filled, it must be an integral multiple of <code>1024</code>.</p>
                     * @return DiskSize <p>Temporary disk capacity allocated to a single instance of the inference service.</p><p>Unit: MB</p><p>If not filled, the default <code>DiskSize</code> value of the specification corresponding to the selected <code>HardwareSpecId</code> is used; if filled, it must be an integral multiple of <code>1024</code>.</p>
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置<p>Temporary disk capacity allocated to a single instance of the inference service.</p><p>Unit: MB</p><p>If not filled, the default <code>DiskSize</code> value of the specification corresponding to the selected <code>HardwareSpecId</code> is used; if filled, it must be an integral multiple of <code>1024</code>.</p>
                     * @param _diskSize <p>Temporary disk capacity allocated to a single instance of the inference service.</p><p>Unit: MB</p><p>If not filled, the default <code>DiskSize</code> value of the specification corresponding to the selected <code>HardwareSpecId</code> is used; if filled, it must be an integral multiple of <code>1024</code>.</p>
                     * 
                     */
                    void SetDiskSize(const int64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                private:

                    /**
                     * <p>Number of GPU cards assigned to each inference service instance. Currently, supports integers only, and must be an available value in <code>AllowedGPUNums</code> of the specification corresponding to <code>HardwareSpecId</code>.</p><p>If not filled, the default <code>GPUNum</code> value of the selected <code>HardwareSpecId</code> specification is used.</p>
                     */
                    double m_gPUNum;
                    bool m_gPUNumHasBeenSet;

                    /**
                     * <p>Number of CPU cores allocated to each inference service instance. Currently only supports integer values.</p><p>If left blank, use the default <code>CPUNum</code> value of the selected <code>HardwareSpecId</code> specification.</p>
                     */
                    double m_cPUNum;
                    bool m_cPUNumHasBeenSet;

                    /**
                     * <p>Memory size allocated to a single instance of the inference service.</p><p>Unit: MB</p><p>If left blank, use the default <code>MemSize</code> value of the selected <code>HardwareSpecId</code>; if filled, it must be a multiple of <code>1024</code>.</p>
                     */
                    int64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * <p>Temporary disk capacity allocated to a single instance of the inference service.</p><p>Unit: MB</p><p>If not filled, the default <code>DiskSize</code> value of the specification corresponding to the selected <code>HardwareSpecId</code> is used; if filled, it must be an integral multiple of <code>1024</code>.</p>
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCEHARDWARECONFIG_H_
