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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_SESSIONRESOURCETEMPLATE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_SESSIONRESOURCETEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * The session resource configuration template for a Spark cluster.
                */
                class SessionResourceTemplate : public AbstractModel
                {
                public:
                    SessionResourceTemplate();
                    ~SessionResourceTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The driver size.
Valid values for the standard resource type: `small`, `medium`, `large`, and `xlarge`.
Valid values for the memory resource type: `m.small`, `m.medium`, `m.large`, and `m.xlarge`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DriverSize The driver size.
Valid values for the standard resource type: `small`, `medium`, `large`, and `xlarge`.
Valid values for the memory resource type: `m.small`, `m.medium`, `m.large`, and `m.xlarge`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDriverSize() const;

                    /**
                     * 设置The driver size.
Valid values for the standard resource type: `small`, `medium`, `large`, and `xlarge`.
Valid values for the memory resource type: `m.small`, `m.medium`, `m.large`, and `m.xlarge`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _driverSize The driver size.
Valid values for the standard resource type: `small`, `medium`, `large`, and `xlarge`.
Valid values for the memory resource type: `m.small`, `m.medium`, `m.large`, and `m.xlarge`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDriverSize(const std::string& _driverSize);

                    /**
                     * 判断参数 DriverSize 是否已赋值
                     * @return DriverSize 是否已赋值
                     * 
                     */
                    bool DriverSizeHasBeenSet() const;

                    /**
                     * 获取The executor size.
Valid values for the standard resource type: `small`, `medium`, `large`, and `xlarge`.
Valid values for the memory resource type: `m.small`, `m.medium`, `m.large`, and `m.xlarge`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExecutorSize The executor size.
Valid values for the standard resource type: `small`, `medium`, `large`, and `xlarge`.
Valid values for the memory resource type: `m.small`, `m.medium`, `m.large`, and `m.xlarge`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExecutorSize() const;

                    /**
                     * 设置The executor size.
Valid values for the standard resource type: `small`, `medium`, `large`, and `xlarge`.
Valid values for the memory resource type: `m.small`, `m.medium`, `m.large`, and `m.xlarge`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _executorSize The executor size.
Valid values for the standard resource type: `small`, `medium`, `large`, and `xlarge`.
Valid values for the memory resource type: `m.small`, `m.medium`, `m.large`, and `m.xlarge`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExecutorSize(const std::string& _executorSize);

                    /**
                     * 判断参数 ExecutorSize 是否已赋值
                     * @return ExecutorSize 是否已赋值
                     * 
                     */
                    bool ExecutorSizeHasBeenSet() const;

                    /**
                     * 获取The executor count. The minimum value is 1 and the maximum value is less than the cluster specification.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExecutorNums The executor count. The minimum value is 1 and the maximum value is less than the cluster specification.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetExecutorNums() const;

                    /**
                     * 设置The executor count. The minimum value is 1 and the maximum value is less than the cluster specification.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _executorNums The executor count. The minimum value is 1 and the maximum value is less than the cluster specification.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExecutorNums(const uint64_t& _executorNums);

                    /**
                     * 判断参数 ExecutorNums 是否已赋值
                     * @return ExecutorNums 是否已赋值
                     * 
                     */
                    bool ExecutorNumsHasBeenSet() const;

                    /**
                     * 获取The maximum executor count (in dynamic mode). The minimum value is 1 and the maximum value is less than the cluster specification. If you set `ExecutorMaxNumbers` to a value smaller than that of `ExecutorNums`, the value of `ExecutorMaxNumbers` is automatically changed to that of `ExecutorNums`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExecutorMaxNumbers The maximum executor count (in dynamic mode). The minimum value is 1 and the maximum value is less than the cluster specification. If you set `ExecutorMaxNumbers` to a value smaller than that of `ExecutorNums`, the value of `ExecutorMaxNumbers` is automatically changed to that of `ExecutorNums`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetExecutorMaxNumbers() const;

                    /**
                     * 设置The maximum executor count (in dynamic mode). The minimum value is 1 and the maximum value is less than the cluster specification. If you set `ExecutorMaxNumbers` to a value smaller than that of `ExecutorNums`, the value of `ExecutorMaxNumbers` is automatically changed to that of `ExecutorNums`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _executorMaxNumbers The maximum executor count (in dynamic mode). The minimum value is 1 and the maximum value is less than the cluster specification. If you set `ExecutorMaxNumbers` to a value smaller than that of `ExecutorNums`, the value of `ExecutorMaxNumbers` is automatically changed to that of `ExecutorNums`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExecutorMaxNumbers(const uint64_t& _executorMaxNumbers);

                    /**
                     * 判断参数 ExecutorMaxNumbers 是否已赋值
                     * @return ExecutorMaxNumbers 是否已赋值
                     * 
                     */
                    bool ExecutorMaxNumbersHasBeenSet() const;

                private:

                    /**
                     * The driver size.
Valid values for the standard resource type: `small`, `medium`, `large`, and `xlarge`.
Valid values for the memory resource type: `m.small`, `m.medium`, `m.large`, and `m.xlarge`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_driverSize;
                    bool m_driverSizeHasBeenSet;

                    /**
                     * The executor size.
Valid values for the standard resource type: `small`, `medium`, `large`, and `xlarge`.
Valid values for the memory resource type: `m.small`, `m.medium`, `m.large`, and `m.xlarge`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_executorSize;
                    bool m_executorSizeHasBeenSet;

                    /**
                     * The executor count. The minimum value is 1 and the maximum value is less than the cluster specification.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_executorNums;
                    bool m_executorNumsHasBeenSet;

                    /**
                     * The maximum executor count (in dynamic mode). The minimum value is 1 and the maximum value is less than the cluster specification. If you set `ExecutorMaxNumbers` to a value smaller than that of `ExecutorNums`, the value of `ExecutorMaxNumbers` is automatically changed to that of `ExecutorNums`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_executorMaxNumbers;
                    bool m_executorMaxNumbersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_SESSIONRESOURCETEMPLATE_H_
