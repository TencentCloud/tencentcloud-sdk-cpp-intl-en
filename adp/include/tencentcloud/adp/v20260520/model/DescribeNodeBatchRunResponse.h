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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBENODEBATCHRUNRESPONSE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBENODEBATCHRUNRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribeNodeBatchRun response structure.
                */
                class DescribeNodeBatchRunResponse : public AbstractModel
                {
                public:
                    DescribeNodeBatchRunResponse();
                    ~DescribeNodeBatchRunResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Error code</p>
                     * @return FailCode <p>Error code</p>
                     * 
                     */
                    std::string GetFailCode() const;

                    /**
                     * 判断参数 FailCode 是否已赋值
                     * @return FailCode 是否已赋值
                     * 
                     */
                    bool FailCodeHasBeenSet() const;

                    /**
                     * 获取<p>Error description</p>
                     * @return FailMessage <p>Error description</p>
                     * 
                     */
                    std::string GetFailMessage() const;

                    /**
                     * 判断参数 FailMessage 是否已赋值
                     * @return FailMessage 是否已赋值
                     * 
                     */
                    bool FailMessageHasBeenSet() const;

                    /**
                     * 获取<p>Input parameter</p>
                     * @return Input <p>Input parameter</p>
                     * 
                     */
                    std::string GetInput() const;

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取<p>Input parameter: Cos address</p>
                     * @return InputRef <p>Input parameter: Cos address</p>
                     * 
                     */
                    std::string GetInputRef() const;

                    /**
                     * 判断参数 InputRef 是否已赋值
                     * @return InputRef 是否已赋值
                     * 
                     */
                    bool InputRefHasBeenSet() const;

                    /**
                     * 获取<p>Output parameters</p>
                     * @return Output <p>Output parameters</p>
                     * 
                     */
                    std::string GetOutput() const;

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取<p>Output parameter: Cos address</p>
                     * @return OutputRef <p>Output parameter: Cos address</p>
                     * 
                     */
                    std::string GetOutputRef() const;

                    /**
                     * 判断参数 OutputRef 是否已赋值
                     * @return OutputRef 是否已赋值
                     * 
                     */
                    bool OutputRefHasBeenSet() const;

                    /**
                     * 获取<table> <tbody> <tr> <td>Enumeration item</td> <td>Enumeration value</td> <td>Description</td> </tr> <tr> <td>NODE_BATCH_RUN_STATUS_UNSPECIFIED</td> <td>0</td> <td>undefined</td> </tr> <tr> <td>NODE_BATCH_RUN_STATUS_INIT</td> <td>1</td> <td>initial status</td> </tr> <tr> <td>NODE_BATCH_RUN_STATUS_RUNNING</td> <td>2</td> <td>running</td> </tr> <tr> <td>NODE_BATCH_RUN_STATUS_SUCCESS</td> <td>3</td> <td>run successfully</td> </tr> <tr> <td>NODE_BATCH_RUN_STATUS_FAILED</td> <td>4</td> <td>execution failed</td> </tr> <tr> <td>NODE_BATCH_RUN_STATUS_CANCELED</td> <td>5</td> <td>canceled</td> </tr> <tr> <td>NODE_BATCH_RUN_STATUS_WAITING_INPUT</td> <td>6</td> <td>pending</td> </tr> </tbody> </table>
                     * @return Status <table> <tbody> <tr> <td>Enumeration item</td> <td>Enumeration value</td> <td>Description</td> </tr> <tr> <td>NODE_BATCH_RUN_STATUS_UNSPECIFIED</td> <td>0</td> <td>undefined</td> </tr> <tr> <td>NODE_BATCH_RUN_STATUS_INIT</td> <td>1</td> <td>initial status</td> </tr> <tr> <td>NODE_BATCH_RUN_STATUS_RUNNING</td> <td>2</td> <td>running</td> </tr> <tr> <td>NODE_BATCH_RUN_STATUS_SUCCESS</td> <td>3</td> <td>run successfully</td> </tr> <tr> <td>NODE_BATCH_RUN_STATUS_FAILED</td> <td>4</td> <td>execution failed</td> </tr> <tr> <td>NODE_BATCH_RUN_STATUS_CANCELED</td> <td>5</td> <td>canceled</td> </tr> <tr> <td>NODE_BATCH_RUN_STATUS_WAITING_INPUT</td> <td>6</td> <td>pending</td> </tr> </tbody> </table>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * <p>Error code</p>
                     */
                    std::string m_failCode;
                    bool m_failCodeHasBeenSet;

                    /**
                     * <p>Error description</p>
                     */
                    std::string m_failMessage;
                    bool m_failMessageHasBeenSet;

                    /**
                     * <p>Input parameter</p>
                     */
                    std::string m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * <p>Input parameter: Cos address</p>
                     */
                    std::string m_inputRef;
                    bool m_inputRefHasBeenSet;

                    /**
                     * <p>Output parameters</p>
                     */
                    std::string m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * <p>Output parameter: Cos address</p>
                     */
                    std::string m_outputRef;
                    bool m_outputRefHasBeenSet;

                    /**
                     * <table> <tbody> <tr> <td>Enumeration item</td> <td>Enumeration value</td> <td>Description</td> </tr> <tr> <td>NODE_BATCH_RUN_STATUS_UNSPECIFIED</td> <td>0</td> <td>undefined</td> </tr> <tr> <td>NODE_BATCH_RUN_STATUS_INIT</td> <td>1</td> <td>initial status</td> </tr> <tr> <td>NODE_BATCH_RUN_STATUS_RUNNING</td> <td>2</td> <td>running</td> </tr> <tr> <td>NODE_BATCH_RUN_STATUS_SUCCESS</td> <td>3</td> <td>run successfully</td> </tr> <tr> <td>NODE_BATCH_RUN_STATUS_FAILED</td> <td>4</td> <td>execution failed</td> </tr> <tr> <td>NODE_BATCH_RUN_STATUS_CANCELED</td> <td>5</td> <td>canceled</td> </tr> <tr> <td>NODE_BATCH_RUN_STATUS_WAITING_INPUT</td> <td>6</td> <td>pending</td> </tr> </tbody> </table>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBENODEBATCHRUNRESPONSE_H_
