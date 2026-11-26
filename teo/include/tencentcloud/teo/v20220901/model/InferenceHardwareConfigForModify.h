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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCEHARDWARECONFIGFORMODIFY_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCEHARDWARECONFIGFORMODIFY_H_

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
                * Parameter modification for the configured resource hardware of the inference service.
                */
                class InferenceHardwareConfigForModify : public AbstractModel
                {
                public:
                    InferenceHardwareConfigForModify();
                    ~InferenceHardwareConfigForModify() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>CPU cores per instance allocation for the inference service. Currently only support integer values.</p><p>If left blank, no modification will be made.</p>
                     * @return CPUNum <p>CPU cores per instance allocation for the inference service. Currently only support integer values.</p><p>If left blank, no modification will be made.</p>
                     * 
                     */
                    double GetCPUNum() const;

                    /**
                     * 设置<p>CPU cores per instance allocation for the inference service. Currently only support integer values.</p><p>If left blank, no modification will be made.</p>
                     * @param _cPUNum <p>CPU cores per instance allocation for the inference service. Currently only support integer values.</p><p>If left blank, no modification will be made.</p>
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
                     * 获取<p>Memory size allocated to a single instance of the inference service.</p><p>Unit: MB</p><p>If left blank, no modification is made; if filled, it must be an integral multiple of <code>1024</code>.</p>
                     * @return MemSize <p>Memory size allocated to a single instance of the inference service.</p><p>Unit: MB</p><p>If left blank, no modification is made; if filled, it must be an integral multiple of <code>1024</code>.</p>
                     * 
                     */
                    int64_t GetMemSize() const;

                    /**
                     * 设置<p>Memory size allocated to a single instance of the inference service.</p><p>Unit: MB</p><p>If left blank, no modification is made; if filled, it must be an integral multiple of <code>1024</code>.</p>
                     * @param _memSize <p>Memory size allocated to a single instance of the inference service.</p><p>Unit: MB</p><p>If left blank, no modification is made; if filled, it must be an integral multiple of <code>1024</code>.</p>
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
                     * 获取<p>Temporary disk space allocated to a single instance of the inference service.</p><p>Unit: MB</p><p>If left blank, no modification is made; if filled, it must be an integral multiple of <code>1024</code>.</p>
                     * @return DiskSize <p>Temporary disk space allocated to a single instance of the inference service.</p><p>Unit: MB</p><p>If left blank, no modification is made; if filled, it must be an integral multiple of <code>1024</code>.</p>
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置<p>Temporary disk space allocated to a single instance of the inference service.</p><p>Unit: MB</p><p>If left blank, no modification is made; if filled, it must be an integral multiple of <code>1024</code>.</p>
                     * @param _diskSize <p>Temporary disk space allocated to a single instance of the inference service.</p><p>Unit: MB</p><p>If left blank, no modification is made; if filled, it must be an integral multiple of <code>1024</code>.</p>
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
                     * <p>CPU cores per instance allocation for the inference service. Currently only support integer values.</p><p>If left blank, no modification will be made.</p>
                     */
                    double m_cPUNum;
                    bool m_cPUNumHasBeenSet;

                    /**
                     * <p>Memory size allocated to a single instance of the inference service.</p><p>Unit: MB</p><p>If left blank, no modification is made; if filled, it must be an integral multiple of <code>1024</code>.</p>
                     */
                    int64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * <p>Temporary disk space allocated to a single instance of the inference service.</p><p>Unit: MB</p><p>If left blank, no modification is made; if filled, it must be an integral multiple of <code>1024</code>.</p>
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCEHARDWARECONFIGFORMODIFY_H_
