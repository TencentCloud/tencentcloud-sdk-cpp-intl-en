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
#include <tencentcloud/mps/v20190612/model/ImageTaskInput.h>
#include <tencentcloud/mps/v20190612/model/MediaInputInfo.h>


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
                     * 获取<p>Task type. Valid value: </p><li>WorkflowTask: Workflow processing task.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskType <p>Task type. Valid value: </p><li>WorkflowTask: Workflow processing task.</li>
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
                     * 获取<p>Task status. Valid values: </p><li>WAITING: Waiting; </li><li>PROCESSING: Processing; </li><li>FINISH: Completed.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status <p>Task status. Valid values: </p><li>WAITING: Waiting; </li><li>PROCESSING: Processing; </li><li>FINISH: Completed.</li>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Error code for task failures.</p>
                     * @return ErrCode <p>Error code for task failures.</p>
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
                     * 获取<p>Error code. An empty string indicates that the task is successful, while other values indicate that the task has failed. For valid values, see the list of <a href="https://www.tencentcloud.com/document/product/862/50369?from_cn_redirect=1#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81">MPS error codes</a>.</p>
                     * @return ErrMsg <p>Error code. An empty string indicates that the task is successful, while other values indicate that the task has failed. For valid values, see the list of <a href="https://www.tencentcloud.com/document/product/862/50369?from_cn_redirect=1#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81">MPS error codes</a>.</p>
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
                     * 获取<p>Task exception message.</p>
                     * @return Message <p>Task exception message.</p>
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
                     * 获取<p>Execution status and result of the image processing task.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ImageProcessTaskResultSet <p>Execution status and result of the image processing task.</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Task creation time, in <a href="https://www.tencentcloud.com/document/product/862/37710?from_cn_redirect=1#52">ISO date and time format</a>.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime <p>Task creation time, in <a href="https://www.tencentcloud.com/document/product/862/37710?from_cn_redirect=1#52">ISO date and time format</a>.</p>
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取<p>Task completion time, in <a href="https://www.tencentcloud.com/document/product/862/37710?from_cn_redirect=1#52">ISO date and time format</a>.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FinishTime <p>Task completion time, in <a href="https://www.tencentcloud.com/document/product/862/37710?from_cn_redirect=1#52">ISO date and time format</a>.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     * 
                     */
                    bool FinishTimeHasBeenSet() const;

                    /**
                     * 获取<p>Unique template identifier.</p>
                     * @return Definition <p>Unique template identifier.</p>
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取<p>Task initiation parameter.</p>
                     * @return ImageTask <p>Task initiation parameter.</p>
                     * 
                     */
                    ImageTaskInput GetImageTask() const;

                    /**
                     * 判断参数 ImageTask 是否已赋值
                     * @return ImageTask 是否已赋值
                     * 
                     */
                    bool ImageTaskHasBeenSet() const;

                    /**
                     * 获取<p>Image task input information.</p>
                     * @return InputInfo <p>Image task input information.</p>
                     * 
                     */
                    MediaInputInfo GetInputInfo() const;

                    /**
                     * 判断参数 InputInfo 是否已赋值
                     * @return InputInfo 是否已赋值
                     * 
                     */
                    bool InputInfoHasBeenSet() const;

                private:

                    /**
                     * <p>Task type. Valid value: </p><li>WorkflowTask: Workflow processing task.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * <p>Task status. Valid values: </p><li>WAITING: Waiting; </li><li>PROCESSING: Processing; </li><li>FINISH: Completed.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Error code for task failures.</p>
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * <p>Error code. An empty string indicates that the task is successful, while other values indicate that the task has failed. For valid values, see the list of <a href="https://www.tencentcloud.com/document/product/862/50369?from_cn_redirect=1#.E8.A7.86.E9.A2.91.E5.A4.84.E7.90.86.E7.B1.BB.E9.94.99.E8.AF.AF.E7.A0.81">MPS error codes</a>.</p>
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                    /**
                     * <p>Task exception message.</p>
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * <p>Execution status and result of the image processing task.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ImageProcessTaskResult> m_imageProcessTaskResultSet;
                    bool m_imageProcessTaskResultSetHasBeenSet;

                    /**
                     * <p>Task creation time, in <a href="https://www.tencentcloud.com/document/product/862/37710?from_cn_redirect=1#52">ISO date and time format</a>.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Task completion time, in <a href="https://www.tencentcloud.com/document/product/862/37710?from_cn_redirect=1#52">ISO date and time format</a>.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * <p>Unique template identifier.</p>
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <p>Task initiation parameter.</p>
                     */
                    ImageTaskInput m_imageTask;
                    bool m_imageTaskHasBeenSet;

                    /**
                     * <p>Image task input information.</p>
                     */
                    MediaInputInfo m_inputInfo;
                    bool m_inputInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEIMAGETASKDETAILRESPONSE_H_
