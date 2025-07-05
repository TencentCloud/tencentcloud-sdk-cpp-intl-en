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

#ifndef TENCENTCLOUD_FACEFUSION_V20220927_MODEL_SUBMITVIDEOFACEFUSIONJOBRESPONSE_H_
#define TENCENTCLOUD_FACEFUSION_V20220927_MODEL_SUBMITVIDEOFACEFUSIONJOBRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/facefusion/v20220927/model/FuseFaceReviewResult.h>


namespace TencentCloud
{
    namespace Facefusion
    {
        namespace V20220927
        {
            namespace Model
            {
                /**
                * SubmitVideoFaceFusionJob response structure.
                */
                class SubmitVideoFaceFusionJobResponse : public AbstractModel
                {
                public:
                    SubmitVideoFaceFusionJobResponse();
                    ~SubmitVideoFaceFusionJobResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Job ID of the video face fusion task
                     * @return JobId Job ID of the video face fusion task
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取Estimated processing time of the video face fusion task, in seconds
                     * @return EstimatedProcessTime Estimated processing time of the video face fusion task, in seconds
                     * 
                     */
                    double GetEstimatedProcessTime() const;

                    /**
                     * 判断参数 EstimatedProcessTime 是否已赋值
                     * @return EstimatedProcessTime 是否已赋值
                     * 
                     */
                    bool EstimatedProcessTimeHasBeenSet() const;

                    /**
                     * 获取Estimated processing time of the video face fusion task, in seconds
                     * @return JobQueueLength Estimated processing time of the video face fusion task, in seconds
                     * 
                     */
                    int64_t GetJobQueueLength() const;

                    /**
                     * 判断参数 JobQueueLength 是否已赋值
                     * @return JobQueueLength 是否已赋值
                     * 
                     */
                    bool JobQueueLengthHasBeenSet() const;

                    /**
                     * 获取Inappropriate content recognition result. The element order of this array is the same as that of mergeinfo in the request, with a one-to-one relationship.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ReviewResultSet Inappropriate content recognition result. The element order of this array is the same as that of mergeinfo in the request, with a one-to-one relationship.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<FuseFaceReviewResult> GetReviewResultSet() const;

                    /**
                     * 判断参数 ReviewResultSet 是否已赋值
                     * @return ReviewResultSet 是否已赋值
                     * 
                     */
                    bool ReviewResultSetHasBeenSet() const;

                private:

                    /**
                     * Job ID of the video face fusion task
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * Estimated processing time of the video face fusion task, in seconds
                     */
                    double m_estimatedProcessTime;
                    bool m_estimatedProcessTimeHasBeenSet;

                    /**
                     * Estimated processing time of the video face fusion task, in seconds
                     */
                    int64_t m_jobQueueLength;
                    bool m_jobQueueLengthHasBeenSet;

                    /**
                     * Inappropriate content recognition result. The element order of this array is the same as that of mergeinfo in the request, with a one-to-one relationship.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<FuseFaceReviewResult> m_reviewResultSet;
                    bool m_reviewResultSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEFUSION_V20220927_MODEL_SUBMITVIDEOFACEFUSIONJOBRESPONSE_H_
