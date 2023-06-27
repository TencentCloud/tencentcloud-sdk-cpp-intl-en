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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_MODIFYSPARKAPPBATCHREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_MODIFYSPARKAPPBATCHREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifySparkAppBatch request structure.
                */
                class ModifySparkAppBatchRequest : public AbstractModel
                {
                public:
                    ModifySparkAppBatchRequest();
                    ~ModifySparkAppBatchRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The list of the IDs of the Spark job tasks to be modified in batches.
                     * @return SparkAppId The list of the IDs of the Spark job tasks to be modified in batches.
                     * 
                     */
                    std::vector<std::string> GetSparkAppId() const;

                    /**
                     * 设置The list of the IDs of the Spark job tasks to be modified in batches.
                     * @param _sparkAppId The list of the IDs of the Spark job tasks to be modified in batches.
                     * 
                     */
                    void SetSparkAppId(const std::vector<std::string>& _sparkAppId);

                    /**
                     * 判断参数 SparkAppId 是否已赋值
                     * @return SparkAppId 是否已赋值
                     * 
                     */
                    bool SparkAppIdHasBeenSet() const;

                    /**
                     * 获取The engine ID.
                     * @return DataEngine The engine ID.
                     * 
                     */
                    std::string GetDataEngine() const;

                    /**
                     * 设置The engine ID.
                     * @param _dataEngine The engine ID.
                     * 
                     */
                    void SetDataEngine(const std::string& _dataEngine);

                    /**
                     * 判断参数 DataEngine 是否已赋值
                     * @return DataEngine 是否已赋值
                     * 
                     */
                    bool DataEngineHasBeenSet() const;

                    /**
                     * 获取The driver size.
Valid values for the standard resource type: `small`, `medium`, `large`, and `xlarge`.
Valid values for the memory resource type: `m.small`, `m.medium`, `m.large`, and `m.xlarge`.
                     * @return AppDriverSize The driver size.
Valid values for the standard resource type: `small`, `medium`, `large`, and `xlarge`.
Valid values for the memory resource type: `m.small`, `m.medium`, `m.large`, and `m.xlarge`.
                     * 
                     */
                    std::string GetAppDriverSize() const;

                    /**
                     * 设置The driver size.
Valid values for the standard resource type: `small`, `medium`, `large`, and `xlarge`.
Valid values for the memory resource type: `m.small`, `m.medium`, `m.large`, and `m.xlarge`.
                     * @param _appDriverSize The driver size.
Valid values for the standard resource type: `small`, `medium`, `large`, and `xlarge`.
Valid values for the memory resource type: `m.small`, `m.medium`, `m.large`, and `m.xlarge`.
                     * 
                     */
                    void SetAppDriverSize(const std::string& _appDriverSize);

                    /**
                     * 判断参数 AppDriverSize 是否已赋值
                     * @return AppDriverSize 是否已赋值
                     * 
                     */
                    bool AppDriverSizeHasBeenSet() const;

                    /**
                     * 获取The executor size.
Valid values for the standard resource type: `small`, `medium`, `large`, and `xlarge`.
Valid values for the memory resource type: `m.small`, `m.medium`, `m.large`, and `m.xlarge`.
                     * @return AppExecutorSize The executor size.
Valid values for the standard resource type: `small`, `medium`, `large`, and `xlarge`.
Valid values for the memory resource type: `m.small`, `m.medium`, `m.large`, and `m.xlarge`.
                     * 
                     */
                    std::string GetAppExecutorSize() const;

                    /**
                     * 设置The executor size.
Valid values for the standard resource type: `small`, `medium`, `large`, and `xlarge`.
Valid values for the memory resource type: `m.small`, `m.medium`, `m.large`, and `m.xlarge`.
                     * @param _appExecutorSize The executor size.
Valid values for the standard resource type: `small`, `medium`, `large`, and `xlarge`.
Valid values for the memory resource type: `m.small`, `m.medium`, `m.large`, and `m.xlarge`.
                     * 
                     */
                    void SetAppExecutorSize(const std::string& _appExecutorSize);

                    /**
                     * 判断参数 AppExecutorSize 是否已赋值
                     * @return AppExecutorSize 是否已赋值
                     * 
                     */
                    bool AppExecutorSizeHasBeenSet() const;

                    /**
                     * 获取The executor count. The minimum value is 1 and the maximum value is less than the cluster specification.
                     * @return AppExecutorNums The executor count. The minimum value is 1 and the maximum value is less than the cluster specification.
                     * 
                     */
                    uint64_t GetAppExecutorNums() const;

                    /**
                     * 设置The executor count. The minimum value is 1 and the maximum value is less than the cluster specification.
                     * @param _appExecutorNums The executor count. The minimum value is 1 and the maximum value is less than the cluster specification.
                     * 
                     */
                    void SetAppExecutorNums(const uint64_t& _appExecutorNums);

                    /**
                     * 判断参数 AppExecutorNums 是否已赋值
                     * @return AppExecutorNums 是否已赋值
                     * 
                     */
                    bool AppExecutorNumsHasBeenSet() const;

                    /**
                     * 获取The maximum executor count (in dynamic configuration scenarios). The minimum value is 1 and the maximum value is less than the cluster specification. If you set `ExecutorMaxNumbers` to a value smaller than that of `ExecutorNums`, the value of `ExecutorMaxNumbers` is automatically changed to that of `ExecutorNums`.
                     * @return AppExecutorMaxNumbers The maximum executor count (in dynamic configuration scenarios). The minimum value is 1 and the maximum value is less than the cluster specification. If you set `ExecutorMaxNumbers` to a value smaller than that of `ExecutorNums`, the value of `ExecutorMaxNumbers` is automatically changed to that of `ExecutorNums`.
                     * 
                     */
                    uint64_t GetAppExecutorMaxNumbers() const;

                    /**
                     * 设置The maximum executor count (in dynamic configuration scenarios). The minimum value is 1 and the maximum value is less than the cluster specification. If you set `ExecutorMaxNumbers` to a value smaller than that of `ExecutorNums`, the value of `ExecutorMaxNumbers` is automatically changed to that of `ExecutorNums`.
                     * @param _appExecutorMaxNumbers The maximum executor count (in dynamic configuration scenarios). The minimum value is 1 and the maximum value is less than the cluster specification. If you set `ExecutorMaxNumbers` to a value smaller than that of `ExecutorNums`, the value of `ExecutorMaxNumbers` is automatically changed to that of `ExecutorNums`.
                     * 
                     */
                    void SetAppExecutorMaxNumbers(const uint64_t& _appExecutorMaxNumbers);

                    /**
                     * 判断参数 AppExecutorMaxNumbers 是否已赋值
                     * @return AppExecutorMaxNumbers 是否已赋值
                     * 
                     */
                    bool AppExecutorMaxNumbersHasBeenSet() const;

                    /**
                     * 获取Whether to inherit the task resource configuration from the cluster template. Valid values: `0` (default): No; `1`: Yes.
                     * @return IsInherit Whether to inherit the task resource configuration from the cluster template. Valid values: `0` (default): No; `1`: Yes.
                     * 
                     */
                    uint64_t GetIsInherit() const;

                    /**
                     * 设置Whether to inherit the task resource configuration from the cluster template. Valid values: `0` (default): No; `1`: Yes.
                     * @param _isInherit Whether to inherit the task resource configuration from the cluster template. Valid values: `0` (default): No; `1`: Yes.
                     * 
                     */
                    void SetIsInherit(const uint64_t& _isInherit);

                    /**
                     * 判断参数 IsInherit 是否已赋值
                     * @return IsInherit 是否已赋值
                     * 
                     */
                    bool IsInheritHasBeenSet() const;

                private:

                    /**
                     * The list of the IDs of the Spark job tasks to be modified in batches.
                     */
                    std::vector<std::string> m_sparkAppId;
                    bool m_sparkAppIdHasBeenSet;

                    /**
                     * The engine ID.
                     */
                    std::string m_dataEngine;
                    bool m_dataEngineHasBeenSet;

                    /**
                     * The driver size.
Valid values for the standard resource type: `small`, `medium`, `large`, and `xlarge`.
Valid values for the memory resource type: `m.small`, `m.medium`, `m.large`, and `m.xlarge`.
                     */
                    std::string m_appDriverSize;
                    bool m_appDriverSizeHasBeenSet;

                    /**
                     * The executor size.
Valid values for the standard resource type: `small`, `medium`, `large`, and `xlarge`.
Valid values for the memory resource type: `m.small`, `m.medium`, `m.large`, and `m.xlarge`.
                     */
                    std::string m_appExecutorSize;
                    bool m_appExecutorSizeHasBeenSet;

                    /**
                     * The executor count. The minimum value is 1 and the maximum value is less than the cluster specification.
                     */
                    uint64_t m_appExecutorNums;
                    bool m_appExecutorNumsHasBeenSet;

                    /**
                     * The maximum executor count (in dynamic configuration scenarios). The minimum value is 1 and the maximum value is less than the cluster specification. If you set `ExecutorMaxNumbers` to a value smaller than that of `ExecutorNums`, the value of `ExecutorMaxNumbers` is automatically changed to that of `ExecutorNums`.
                     */
                    uint64_t m_appExecutorMaxNumbers;
                    bool m_appExecutorMaxNumbersHasBeenSet;

                    /**
                     * Whether to inherit the task resource configuration from the cluster template. Valid values: `0` (default): No; `1`: Yes.
                     */
                    uint64_t m_isInherit;
                    bool m_isInheritHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_MODIFYSPARKAPPBATCHREQUEST_H_
