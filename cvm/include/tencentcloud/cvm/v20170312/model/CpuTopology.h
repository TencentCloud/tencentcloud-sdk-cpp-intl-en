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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_CPUTOPOLOGY_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_CPUTOPOLOGY_H_

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
                * Information about the CPU topology of an instance.
                */
                class CpuTopology : public AbstractModel
                {
                public:
                    CpuTopology();
                    ~CpuTopology() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of physical CPU cores to enable.
                     * @return CoreCount Number of physical CPU cores to enable.
                     * 
                     */
                    int64_t GetCoreCount() const;

                    /**
                     * 设置Number of physical CPU cores to enable.
                     * @param _coreCount Number of physical CPU cores to enable.
                     * 
                     */
                    void SetCoreCount(const int64_t& _coreCount);

                    /**
                     * 判断参数 CoreCount 是否已赋值
                     * @return CoreCount 是否已赋值
                     * 
                     */
                    bool CoreCountHasBeenSet() const;

                    /**
                     * 获取Number of threads per core. This parameter determines whether to enable or disable hyper-threading.<br><li>1: Disable hyper-threading.</li><br><li>2: Enable hyper-threading.</li>
If not set, an instance uses the default hyper-threading policy. For how to enable or disable hyper-threading, refer to [Enabling and Disabling Hyper-Threading](https://intl.cloud.tencent.com/document/product/213/103798?from_cn_redirect=1).
                     * @return ThreadPerCore Number of threads per core. This parameter determines whether to enable or disable hyper-threading.<br><li>1: Disable hyper-threading.</li><br><li>2: Enable hyper-threading.</li>
If not set, an instance uses the default hyper-threading policy. For how to enable or disable hyper-threading, refer to [Enabling and Disabling Hyper-Threading](https://intl.cloud.tencent.com/document/product/213/103798?from_cn_redirect=1).
                     * 
                     */
                    int64_t GetThreadPerCore() const;

                    /**
                     * 设置Number of threads per core. This parameter determines whether to enable or disable hyper-threading.<br><li>1: Disable hyper-threading.</li><br><li>2: Enable hyper-threading.</li>
If not set, an instance uses the default hyper-threading policy. For how to enable or disable hyper-threading, refer to [Enabling and Disabling Hyper-Threading](https://intl.cloud.tencent.com/document/product/213/103798?from_cn_redirect=1).
                     * @param _threadPerCore Number of threads per core. This parameter determines whether to enable or disable hyper-threading.<br><li>1: Disable hyper-threading.</li><br><li>2: Enable hyper-threading.</li>
If not set, an instance uses the default hyper-threading policy. For how to enable or disable hyper-threading, refer to [Enabling and Disabling Hyper-Threading](https://intl.cloud.tencent.com/document/product/213/103798?from_cn_redirect=1).
                     * 
                     */
                    void SetThreadPerCore(const int64_t& _threadPerCore);

                    /**
                     * 判断参数 ThreadPerCore 是否已赋值
                     * @return ThreadPerCore 是否已赋值
                     * 
                     */
                    bool ThreadPerCoreHasBeenSet() const;

                private:

                    /**
                     * Number of physical CPU cores to enable.
                     */
                    int64_t m_coreCount;
                    bool m_coreCountHasBeenSet;

                    /**
                     * Number of threads per core. This parameter determines whether to enable or disable hyper-threading.<br><li>1: Disable hyper-threading.</li><br><li>2: Enable hyper-threading.</li>
If not set, an instance uses the default hyper-threading policy. For how to enable or disable hyper-threading, refer to [Enabling and Disabling Hyper-Threading](https://intl.cloud.tencent.com/document/product/213/103798?from_cn_redirect=1).
                     */
                    int64_t m_threadPerCore;
                    bool m_threadPerCoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_CPUTOPOLOGY_H_
