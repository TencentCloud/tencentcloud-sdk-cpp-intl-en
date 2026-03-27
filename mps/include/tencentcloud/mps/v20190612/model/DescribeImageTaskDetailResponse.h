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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEIMAGETASKDETAILRESPONSE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEIMAGETASKDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/ImageProcessTaskResult.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DescribeImageTaskDetail response structure.
                */
                class DescribeImageTaskDetailResponse : public AbstractModel
                {
                public:
                    DescribeImageTaskDetailResponse();
                    ~DescribeImageTaskDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Task type. Currently, the valid values include:
<li>WorkflowTask: workflow processing task.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskType Task type. Currently, the valid values include:
<li>WorkflowTask: workflow processing task.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取Task status. Valid values:
<Li>WAITING: waiting.</li>
<Li>PROCESSING: processing.</li>
<li>FINISH: completed.</li>
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Status Task status. Valid values:
<Li>WAITING: waiting.</li>
<Li>PROCESSING: processing.</li>
<li>FINISH: completed.</li>
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Error code when the task fails.
                     * @return ErrCode Error code when the task fails.
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     * 
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取Error code. A null string indicates that the task is successful, while other values indicate that the task has failed. For valid values, see the list of [MPS error codes](https://www.tencentcloud.com/document/product/862/50369?from_cn_redirect=1#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81).
                     * @return ErrMsg Error code. A null string indicates that the task is successful, while other values indicate that the task has failed. For valid values, see the list of [MPS error codes](https://www.tencentcloud.com/document/product/862/50369?from_cn_redirect=1#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81).
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     * 
                     */
                    bool ErrMsgHasBeenSet() const;

                    /**
                     * 获取Task exception message.
                     * @return Message Task exception message.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取Execution status and results of the image processing task.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ImageProcessTaskResultSet Execution status and results of the image processing task.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<ImageProcessTaskResult> GetImageProcessTaskResultSet() const;

                    /**
                     * 判断参数 ImageProcessTaskResultSet 是否已赋值
                     * @return ImageProcessTaskResultSet 是否已赋值
                     * 
                     */
                    bool ImageProcessTaskResultSetHasBeenSet() const;

                    /**
                     * 获取Task creation time in [ISO datetime format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CreateTime Task creation time in [ISO datetime format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Task execution completion time in [ISO datetime format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return FinishTime Task execution completion time in [ISO datetime format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     * 
                     */
                    bool FinishTimeHasBeenSet() const;

                private:

                    /**
                     * Task type. Currently, the valid values include:
<li>WorkflowTask: workflow processing task.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * Task status. Valid values:
<Li>WAITING: waiting.</li>
<Li>PROCESSING: processing.</li>
<li>FINISH: completed.</li>
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Error code when the task fails.
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * Error code. A null string indicates that the task is successful, while other values indicate that the task has failed. For valid values, see the list of [MPS error codes](https://www.tencentcloud.com/document/product/862/50369?from_cn_redirect=1#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81).
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                    /**
                     * Task exception message.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * Execution status and results of the image processing task.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<ImageProcessTaskResult> m_imageProcessTaskResultSet;
                    bool m_imageProcessTaskResultSetHasBeenSet;

                    /**
                     * Task creation time in [ISO datetime format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Task execution completion time in [ISO datetime format](https://intl.cloud.tencent.com/document/product/862/37710?from_cn_redirect=1#52).
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEIMAGETASKDETAILRESPONSE_H_
