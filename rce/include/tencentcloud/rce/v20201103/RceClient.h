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

#ifndef TENCENTCLOUD_RCE_V20201103_RCECLIENT_H_
#define TENCENTCLOUD_RCE_V20201103_RCECLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/rce/v20201103/model/DescribeRiskAssessmentRequest.h>
#include <tencentcloud/rce/v20201103/model/DescribeRiskAssessmentResponse.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20201103
        {
            class RceClient : public AbstractClient
            {
            public:
                RceClient(const Credential &credential, const std::string &region);
                RceClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::DescribeRiskAssessmentResponse> DescribeRiskAssessmentOutcome;
                typedef std::future<DescribeRiskAssessmentOutcome> DescribeRiskAssessmentOutcomeCallable;
                typedef std::function<void(const RceClient*, const Model::DescribeRiskAssessmentRequest&, DescribeRiskAssessmentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRiskAssessmentAsyncHandler;



                /**
                 *This API is used to query risk assessment results.
                 * @param req DescribeRiskAssessmentRequest
                 * @return DescribeRiskAssessmentOutcome
                 */
                DescribeRiskAssessmentOutcome DescribeRiskAssessment(const Model::DescribeRiskAssessmentRequest &request);
                void DescribeRiskAssessmentAsync(const Model::DescribeRiskAssessmentRequest& request, const DescribeRiskAssessmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRiskAssessmentOutcomeCallable DescribeRiskAssessmentCallable(const Model::DescribeRiskAssessmentRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20201103_RCECLIENT_H_
