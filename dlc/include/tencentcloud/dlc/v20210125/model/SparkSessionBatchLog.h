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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_SPARKSESSIONBATCHLOG_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_SPARKSESSIONBATCHLOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/SparkSessionBatchLogOperate.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * Running logs of a Spark SQL batch job
                */
                class SparkSessionBatchLog : public AbstractModel
                {
                public:
                    SparkSessionBatchLog();
                    ~SparkSessionBatchLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The log step. Valid values: `BEG`, `CS`, `DS`, `DSS`, `DSF`, `FINF`, `RTO`, `CANCEL`, `CT`, `DT`, `DTS`, `DTF`, `FINT`, and `EXCE`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Step The log step. Valid values: `BEG`, `CS`, `DS`, `DSS`, `DSF`, `FINF`, `RTO`, `CANCEL`, `CT`, `DT`, `DTS`, `DTF`, `FINT`, and `EXCE`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStep() const;

                    /**
                     * 设置The log step. Valid values: `BEG`, `CS`, `DS`, `DSS`, `DSF`, `FINF`, `RTO`, `CANCEL`, `CT`, `DT`, `DTS`, `DTF`, `FINT`, and `EXCE`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _step The log step. Valid values: `BEG`, `CS`, `DS`, `DSS`, `DSF`, `FINF`, `RTO`, `CANCEL`, `CT`, `DT`, `DTS`, `DTF`, `FINT`, and `EXCE`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStep(const std::string& _step);

                    /**
                     * 判断参数 Step 是否已赋值
                     * @return Step 是否已赋值
                     * 
                     */
                    bool StepHasBeenSet() const;

                    /**
                     * 获取Time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Time Time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置Time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _time Time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取The log message.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Message The log message.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置The log message.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _message The log message.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取The operation.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Operate The operation.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<SparkSessionBatchLogOperate> GetOperate() const;

                    /**
                     * 设置The operation.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _operate The operation.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOperate(const std::vector<SparkSessionBatchLogOperate>& _operate);

                    /**
                     * 判断参数 Operate 是否已赋值
                     * @return Operate 是否已赋值
                     * 
                     */
                    bool OperateHasBeenSet() const;

                private:

                    /**
                     * The log step. Valid values: `BEG`, `CS`, `DS`, `DSS`, `DSF`, `FINF`, `RTO`, `CANCEL`, `CT`, `DT`, `DTS`, `DTF`, `FINT`, and `EXCE`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_step;
                    bool m_stepHasBeenSet;

                    /**
                     * Time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * The log message.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * The operation.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<SparkSessionBatchLogOperate> m_operate;
                    bool m_operateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_SPARKSESSIONBATCHLOG_H_
