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
                * Reasoning hardware specification info.
                */
                class InferenceHardwareSpecification : public AbstractModel
                {
                public:
                    InferenceHardwareSpecification();
                    ~InferenceHardwareSpecification() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Specification flag. Abandoned. For reference, use the field <code>HardwareSpecId</code>.</p>
                     * @return Spec <p>Specification flag. Abandoned. For reference, use the field <code>HardwareSpecId</code>.</p>
                     * @deprecated
                     */
                    std::string GetSpec() const;

                    /**
                     * 设置<p>Specification flag. Abandoned. For reference, use the field <code>HardwareSpecId</code>.</p>
                     * @param _spec <p>Specification flag. Abandoned. For reference, use the field <code>HardwareSpecId</code>.</p>
                     * @deprecated
                     */
                    void SetSpec(const std::string& _spec);

                    /**
                     * 判断参数 Spec 是否已赋值
                     * @return Spec 是否已赋值
                     * @deprecated
                     */
                    bool SpecHasBeenSet() const;

                    /**
                     * 获取<p>Unique identification ID of the specification.</p>
                     * @return HardwareSpecId <p>Unique identification ID of the specification.</p>
                     * 
                     */
                    std::string GetHardwareSpecId() const;

                    /**
                     * 设置<p>Unique identification ID of the specification.</p>
                     * @param _hardwareSpecId <p>Unique identification ID of the specification.</p>
                     * 
                     */
                    void SetHardwareSpecId(const std::string& _hardwareSpecId);

                    /**
                     * 判断参数 HardwareSpecId 是否已赋值
                     * @return HardwareSpecId 是否已赋值
                     * 
                     */
                    bool HardwareSpecIdHasBeenSet() const;

                    /**
                     * 获取<p>Specification name.</p>
                     * @return Name <p>Specification name.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Specification name.</p>
                     * @param _name <p>Specification name.</p>
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
                     * 获取<p>Number of GPU cards assigned by default for the specification.</p>
                     * @return GPUNum <p>Number of GPU cards assigned by default for the specification.</p>
                     * 
                     */
                    double GetGPUNum() const;

                    /**
                     * 设置<p>Number of GPU cards assigned by default for the specification.</p>
                     * @param _gPUNum <p>Number of GPU cards assigned by default for the specification.</p>
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
                     * 获取<p>Default number of CPU cores allocated to the specification.</p>
                     * @return CPUNum <p>Default number of CPU cores allocated to the specification.</p>
                     * 
                     */
                    double GetCPUNum() const;

                    /**
                     * 设置<p>Default number of CPU cores allocated to the specification.</p>
                     * @param _cPUNum <p>Default number of CPU cores allocated to the specification.</p>
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
                     * 获取<p>Default allocated memory size for the specification.</p><p>In MB.</p>
                     * @return MemSize <p>Default allocated memory size for the specification.</p><p>In MB.</p>
                     * 
                     */
                    int64_t GetMemSize() const;

                    /**
                     * 设置<p>Default allocated memory size for the specification.</p><p>In MB.</p>
                     * @param _memSize <p>Default allocated memory size for the specification.</p><p>In MB.</p>
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
                     * 获取<p>GPU VRAM size assigned by default in the specification.</p><p>Unit: MB</p>
                     * @return GPUMemSize <p>GPU VRAM size assigned by default in the specification.</p><p>Unit: MB</p>
                     * 
                     */
                    int64_t GetGPUMemSize() const;

                    /**
                     * 设置<p>GPU VRAM size assigned by default in the specification.</p><p>Unit: MB</p>
                     * @param _gPUMemSize <p>GPU VRAM size assigned by default in the specification.</p><p>Unit: MB</p>
                     * 
                     */
                    void SetGPUMemSize(const int64_t& _gPUMemSize);

                    /**
                     * 判断参数 GPUMemSize 是否已赋值
                     * @return GPUMemSize 是否已赋值
                     * 
                     */
                    bool GPUMemSizeHasBeenSet() const;

                    /**
                     * 获取<p>Default disk space allocated for the specification.</p><p>Unit: MB</p>
                     * @return DiskSize <p>Default disk space allocated for the specification.</p><p>Unit: MB</p>
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置<p>Default disk space allocated for the specification.</p><p>Unit: MB</p>
                     * @param _diskSize <p>Default disk space allocated for the specification.</p><p>Unit: MB</p>
                     * 
                     */
                    void SetDiskSize(const int64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取<p>List of GPU card counts currently supported by the specification.</p><p>If not filled or filled with an empty array, only the GPU card count assigned by default for the specification is supported.</p>
                     * @return AllowedGPUNums <p>List of GPU card counts currently supported by the specification.</p><p>If not filled or filled with an empty array, only the GPU card count assigned by default for the specification is supported.</p>
                     * 
                     */
                    std::vector<double> GetAllowedGPUNums() const;

                    /**
                     * 设置<p>List of GPU card counts currently supported by the specification.</p><p>If not filled or filled with an empty array, only the GPU card count assigned by default for the specification is supported.</p>
                     * @param _allowedGPUNums <p>List of GPU card counts currently supported by the specification.</p><p>If not filled or filled with an empty array, only the GPU card count assigned by default for the specification is supported.</p>
                     * 
                     */
                    void SetAllowedGPUNums(const std::vector<double>& _allowedGPUNums);

                    /**
                     * 判断参数 AllowedGPUNums 是否已赋值
                     * @return AllowedGPUNums 是否已赋值
                     * 
                     */
                    bool AllowedGPUNumsHasBeenSet() const;

                private:

                    /**
                     * <p>Specification flag. Abandoned. For reference, use the field <code>HardwareSpecId</code>.</p>
                     */
                    std::string m_spec;
                    bool m_specHasBeenSet;

                    /**
                     * <p>Unique identification ID of the specification.</p>
                     */
                    std::string m_hardwareSpecId;
                    bool m_hardwareSpecIdHasBeenSet;

                    /**
                     * <p>Specification name.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Number of GPU cards assigned by default for the specification.</p>
                     */
                    double m_gPUNum;
                    bool m_gPUNumHasBeenSet;

                    /**
                     * <p>Default number of CPU cores allocated to the specification.</p>
                     */
                    double m_cPUNum;
                    bool m_cPUNumHasBeenSet;

                    /**
                     * <p>Default allocated memory size for the specification.</p><p>In MB.</p>
                     */
                    int64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * <p>GPU VRAM size assigned by default in the specification.</p><p>Unit: MB</p>
                     */
                    int64_t m_gPUMemSize;
                    bool m_gPUMemSizeHasBeenSet;

                    /**
                     * <p>Default disk space allocated for the specification.</p><p>Unit: MB</p>
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * <p>List of GPU card counts currently supported by the specification.</p><p>If not filled or filled with an empty array, only the GPU card count assigned by default for the specification is supported.</p>
                     */
                    std::vector<double> m_allowedGPUNums;
                    bool m_allowedGPUNumsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCEHARDWARESPECIFICATION_H_
