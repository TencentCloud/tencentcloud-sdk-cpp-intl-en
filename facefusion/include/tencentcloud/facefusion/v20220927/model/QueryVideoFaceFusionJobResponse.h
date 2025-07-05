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

#ifndef TENCENTCLOUD_FACEFUSION_V20220927_MODEL_QUERYVIDEOFACEFUSIONJOBRESPONSE_H_
#define TENCENTCLOUD_FACEFUSION_V20220927_MODEL_QUERYVIDEOFACEFUSIONJOBRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/facefusion/v20220927/model/VideoFaceFusionOutput.h>


namespace TencentCloud
{
    namespace Facefusion
    {
        namespace V20220927
        {
            namespace Model
            {
                /**
                * QueryVideoFaceFusionJob response structure.
                */
                class QueryVideoFaceFusionJobResponse : public AbstractModel
                {
                public:
                    QueryVideoFaceFusionJobResponse();
                    ~QueryVideoFaceFusionJobResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Current task status: queuing, processing, processing failed, or processing completed
                     * @return JobStatus Current task status: queuing, processing, processing failed, or processing completed
                     * 
                     */
                    std::string GetJobStatus() const;

                    /**
                     * 判断参数 JobStatus 是否已赋值
                     * @return JobStatus 是否已赋值
                     * 
                     */
                    bool JobStatusHasBeenSet() const;

                    /**
                     * 获取Video face fusion result
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VideoFaceFusionOutput Video face fusion result
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    VideoFaceFusionOutput GetVideoFaceFusionOutput() const;

                    /**
                     * 判断参数 VideoFaceFusionOutput 是否已赋值
                     * @return VideoFaceFusionOutput 是否已赋值
                     * 
                     */
                    bool VideoFaceFusionOutputHasBeenSet() const;

                    /**
                     * 获取Task status code. 1: queuing; 3: processing; 5: processing failed; 7: processing completed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return JobStatusCode Task status code. 1: queuing; 3: processing; 5: processing failed; 7: processing completed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetJobStatusCode() const;

                    /**
                     * 判断参数 JobStatusCode 是否已赋值
                     * @return JobStatusCode 是否已赋值
                     * 
                     */
                    bool JobStatusCodeHasBeenSet() const;

                    /**
                     * 获取Task failure error code
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return JobErrorCode Task failure error code
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetJobErrorCode() const;

                    /**
                     * 判断参数 JobErrorCode 是否已赋值
                     * @return JobErrorCode 是否已赋值
                     * 
                     */
                    bool JobErrorCodeHasBeenSet() const;

                    /**
                     * 获取Task failure error message
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return JobErrorMsg Task failure error message
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetJobErrorMsg() const;

                    /**
                     * 判断参数 JobErrorMsg 是否已赋值
                     * @return JobErrorMsg 是否已赋值
                     * 
                     */
                    bool JobErrorMsgHasBeenSet() const;

                private:

                    /**
                     * Current task status: queuing, processing, processing failed, or processing completed
                     */
                    std::string m_jobStatus;
                    bool m_jobStatusHasBeenSet;

                    /**
                     * Video face fusion result
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    VideoFaceFusionOutput m_videoFaceFusionOutput;
                    bool m_videoFaceFusionOutputHasBeenSet;

                    /**
                     * Task status code. 1: queuing; 3: processing; 5: processing failed; 7: processing completed.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_jobStatusCode;
                    bool m_jobStatusCodeHasBeenSet;

                    /**
                     * Task failure error code
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_jobErrorCode;
                    bool m_jobErrorCodeHasBeenSet;

                    /**
                     * Task failure error message
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_jobErrorMsg;
                    bool m_jobErrorMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEFUSION_V20220927_MODEL_QUERYVIDEOFACEFUSIONJOBRESPONSE_H_
