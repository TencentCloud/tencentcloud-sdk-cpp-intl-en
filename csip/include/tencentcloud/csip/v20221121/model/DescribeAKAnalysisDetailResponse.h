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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEAKANALYSISDETAILRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEAKANALYSISDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeAKAnalysisDetail response structure.
                */
                class DescribeAKAnalysisDetailResponse : public AbstractModel
                {
                public:
                    DescribeAKAnalysisDetailResponse();
                    ~DescribeAKAnalysisDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Alarm AI analysis status -1 Analysis failed 0 Not analyzed 1 Under analysis 2 Analysis successful, real alarm 3 Analysis successful, suspicious alarm
                     * @return AIStatus Alarm AI analysis status -1 Analysis failed 0 Not analyzed 1 Under analysis 2 Analysis successful, real alarm 3 Analysis successful, suspicious alarm
                     * 
                     */
                    int64_t GetAIStatus() const;

                    /**
                     * 判断参数 AIStatus 是否已赋值
                     * @return AIStatus 是否已赋值
                     * 
                     */
                    bool AIStatusHasBeenSet() const;

                    /**
                     * 获取AI Analysis Task ID
                     * @return AITaskID AI Analysis Task ID
                     * 
                     */
                    std::string GetAITaskID() const;

                    /**
                     * 判断参数 AITaskID 是否已赋值
                     * @return AITaskID 是否已赋值
                     * 
                     */
                    bool AITaskIDHasBeenSet() const;

                    /**
                     * 获取Alarm AI analysis result, base64 format, avoid data interception
                     * @return AIResult Alarm AI analysis result, base64 format, avoid data interception
                     * 
                     */
                    std::string GetAIResult() const;

                    /**
                     * 判断参数 AIResult 是否已赋值
                     * @return AIResult 是否已赋值
                     * 
                     */
                    bool AIResultHasBeenSet() const;

                    /**
                     * 获取Feedback and Suggestions
                     * @return Feedback Feedback and Suggestions
                     * 
                     */
                    std::string GetFeedback() const;

                    /**
                     * 判断参数 Feedback 是否已赋值
                     * @return Feedback 是否已赋值
                     * 
                     */
                    bool FeedbackHasBeenSet() const;

                    /**
                     * 获取Feedback status  0 means no feedback, 1 means recognized, 2 means not recognized
                     * @return FeedbackResult Feedback status  0 means no feedback, 1 means recognized, 2 means not recognized
                     * 
                     */
                    int64_t GetFeedbackResult() const;

                    /**
                     * 判断参数 FeedbackResult 是否已赋值
                     * @return FeedbackResult 是否已赋值
                     * 
                     */
                    bool FeedbackResultHasBeenSet() const;

                    /**
                     * 获取Reason for failure
                     * @return FailedReason Reason for failure
                     * 
                     */
                    std::string GetFailedReason() const;

                    /**
                     * 判断参数 FailedReason 是否已赋值
                     * @return FailedReason 是否已赋值
                     * 
                     */
                    bool FailedReasonHasBeenSet() const;

                private:

                    /**
                     * Alarm AI analysis status -1 Analysis failed 0 Not analyzed 1 Under analysis 2 Analysis successful, real alarm 3 Analysis successful, suspicious alarm
                     */
                    int64_t m_aIStatus;
                    bool m_aIStatusHasBeenSet;

                    /**
                     * AI Analysis Task ID
                     */
                    std::string m_aITaskID;
                    bool m_aITaskIDHasBeenSet;

                    /**
                     * Alarm AI analysis result, base64 format, avoid data interception
                     */
                    std::string m_aIResult;
                    bool m_aIResultHasBeenSet;

                    /**
                     * Feedback and Suggestions
                     */
                    std::string m_feedback;
                    bool m_feedbackHasBeenSet;

                    /**
                     * Feedback status  0 means no feedback, 1 means recognized, 2 means not recognized
                     */
                    int64_t m_feedbackResult;
                    bool m_feedbackResultHasBeenSet;

                    /**
                     * Reason for failure
                     */
                    std::string m_failedReason;
                    bool m_failedReasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEAKANALYSISDETAILRESPONSE_H_
